#include "protos.h"

void f_0056d0f8(void) /* sub_56D0F8 */
{
    FN_ENTER(0x0056d0f8);
    /* 0056d0f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0056d0fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d0fd: push 0x8d6b9c */ { u32 v = 0x8d6b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d102: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056d108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d109: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056d110: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056d113: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056d116: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056d119: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056d11c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056d11f: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d124: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0056d12b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56d130u); f_005caba4();
    /* 0056d130: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056d131: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056d134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056d136: je 0x56d164 */ if (fZ) goto L_0056d164;
L_0056d138:; BB(0x0056d138);
    /* 0056d138: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0056d13f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056d146: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d149: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d14c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d14f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d152: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d155: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d158: call 0x56d174 */ r_esp -= 4; W32(r_esp, 0x56d15du); f_0056d174();
    /* 0056d15d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0056d164:; BB(0x0056d164);
    /* 0056d164: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056d167: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056d16e: mov esp, ebp */ r_esp = r_ebp;
    /* 0056d170: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d171: ret  */ FN_RET(0x0056d0f8); r_esp += 4; return;
}

void f_0056d174(void) /* sub_56D174 */
{
    FN_ENTER(0x0056d174);
    /* 0056d174: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d175: mov ebp, esp */ r_ebp = r_esp;
    /* 0056d177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d179: push 0x8d6bb8 */ { u32 v = 0x8d6bb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d17e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056d184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d185: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056d18c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056d18f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056d192: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0056d195: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0056d198: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0056d19b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0056d19e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d1a1: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0056d1a4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d1a7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d1aa: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0056d1ad: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056d1b0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0056d1b3: call 0x7acaf8 */ r_esp -= 4; W32(r_esp, 0x56d1b8u); f_007acaf8();
    /* 0056d1b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056d1bf: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056d1c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056d1c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056d1c8: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 0056d1ce: mov dword ptr [esi + 0xac], ecx */ W32((u32)(r_esi+0xacu), r_ecx);
    /* 0056d1d4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0056d1d6: mov dword ptr [esi], 0xb05d70 */ W32((u32)(r_esi), 0xb05d70u);
    /* 0056d1dc: mov eax, dword ptr [0x9be738] */ r_eax = R32((u32)(0x9be738u));
    /* 0056d1e1: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0056d1e4: add esi, 0x6c */ {  u32 a = r_esi; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056d1e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d1e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d1e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d1ea: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d1ef: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56d1f4u); f_00814298();
    /* 0056d1f4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d1f7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056d1fa: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0056d1fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d1ff: je 0x56d209 */ if (fZ) goto L_0056d209;
L_0056d201:; BB(0x0056d201);
    /* 0056d201: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0056d205: mov word ptr [edx + 0x34], ax */ W16((u32)(r_edx+0x34u), (u16)r_eax);
L_0056d209:; BB(0x0056d209);
    /* 0056d209: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0056d20c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056d20e: je 0x56d220 */ if (fZ) goto L_0056d220;
L_0056d210:; BB(0x0056d210);
    /* 0056d210: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056d213: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0056d219: mov dword ptr [eax + 0xc], 0x3f800000 */ W32((u32)(r_eax+0xcu), 0x3f800000u);
L_0056d220:; BB(0x0056d220);
    /* 0056d220: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d223: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056d226: mov eax, edx */ r_eax = r_edx;
    /* 0056d228: mov dword ptr [edx + 0xb0], 1 */ W32((u32)(r_edx+0xb0u), 0x1u);
    /* 0056d232: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056d235: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056d23c: mov esp, ebp */ r_esp = r_ebp;
    /* 0056d23e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d23f: ret 0x14 */ FN_RET(0x0056d174); r_esp += 24; return;
}

void f_0056d244(void) /* sub_56D244 */
{
    FN_ENTER(0x0056d244);
    /* 0056d244: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d245: mov edi, ecx */ r_edi = r_ecx;
    /* 0056d247: movzx eax, word ptr [edi + 0x34] */ r_eax = (u32)R16((u32)(r_edi+0x34u));
    /* 0056d24b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d24c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x56d251u); f_007b4d18();
    /* 0056d251: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056d252: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0056d255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d257: je 0x56d29d */ if (fZ) goto L_0056d29d;
L_0056d259:; BB(0x0056d259);
    /* 0056d259: fld dword ptr [0x926564] */ FPUSH(R_F32((u32)(0x926564u)));
    /* 0056d25f: fadd dword ptr [edi + 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xbcu));
    /* 0056d265: fld dword ptr [0x926560] */ FPUSH(R_F32((u32)(0x926560u)));
    /* 0056d26b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0056d26d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056d26f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056d270: ja 0x56d27c */ if ((!fC&&!fZ)) goto L_0056d27c;
L_0056d272:; BB(0x0056d272);
    /* 0056d272: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0056d274: fstp dword ptr [edi + 0xbc] */ W_F32((u32)(r_edi+0xbcu), ST(0)); FPOP();
    /* 0056d27a: jmp 0x56d284 */ goto L_0056d284;
L_0056d27c:; BB(0x0056d27c);
    /* 0056d27c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056d27e: fstp dword ptr [edi + 0xbc] */ W_F32((u32)(r_edi+0xbcu), ST(0)); FPOP();
L_0056d284:; BB(0x0056d284);
    /* 0056d284: mov ecx, edi */ r_ecx = r_edi;
    /* 0056d286: call 0x7acdc8 */ r_esp -= 4; W32(r_esp, 0x56d28bu); f_007acdc8();
    /* 0056d28b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056d28d: call 0x7ace88 */ r_esp -= 4; W32(r_esp, 0x56d292u); f_007ace88();
    /* 0056d292: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d294: mov ecx, edi */ r_ecx = r_edi;
    /* 0056d296: call 0x7acee8 */ r_esp -= 4; W32(r_esp, 0x56d29bu); f_007acee8();
    /* 0056d29b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056d29c: ret  */ FN_RET(0x0056d244); r_esp += 4; return;
L_0056d29d:; BB(0x0056d29d);
    /* 0056d29d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056d2a1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056d2a6: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056d2aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056d2ab: ret  */ FN_RET(0x0056d244); r_esp += 4; return;
}

void f_0056d2ac(void) /* sub_56D2AC */
{
    FN_ENTER(0x0056d2ac);
    /* 0056d2ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d2ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d2ae: mov esi, ecx */ r_esi = r_ecx;
    /* 0056d2b0: mov eax, dword ptr [0xa73de4] */ r_eax = R32((u32)(0xa73de4u));
    /* 0056d2b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d2b7: je 0x56d33f */ if (fZ) goto L_0056d33f;
L_0056d2bd:; BB(0x0056d2bd);
    /* 0056d2bd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x56d2c2u); f_0082d7b0();
    /* 0056d2c2: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x56d2c7u); f_0082dbac();
    /* 0056d2c7: lea ecx, [esi + 0x6c] */ r_ecx = (u32)(r_esi+0x6cu);
    /* 0056d2ca: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x56d2cfu); f_0082d838();
    /* 0056d2cf: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0056d2d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056d2d7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56d2dcu); f_0082d8bc();
    /* 0056d2dc: mov edx, dword ptr [esi + 0xa0] */ r_edx = R32((u32)(r_esi+0xa0u));
    /* 0056d2e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056d2e4: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x56d2e9u); f_0082e9e4();
    /* 0056d2e9: mov eax, dword ptr [0xa73de4] */ r_eax = R32((u32)(0xa73de4u));
    /* 0056d2ee: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056d2f4: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0056d2f7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x56d2fcu); f_00829cc8();
    /* 0056d2fc: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x56d301u); f_0082fa9c();
    /* 0056d301: mov ecx, dword ptr [0xa73de4] */ r_ecx = R32((u32)(0xa73de4u));
    /* 0056d307: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d309: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x56d30eu); f_005b8610();
    /* 0056d30e: mov ebp, eax */ r_ebp = r_eax;
    /* 0056d310: mov ecx, dword ptr [0xa73de4] */ r_ecx = R32((u32)(0xa73de4u));
    /* 0056d316: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d318: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x56d31du); f_005b8638();
    /* 0056d31d: push dword ptr [esi + 0xbc] */ { u32 v = R32((u32)(r_esi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d325: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x56d32au); f_0083046c();
    /* 0056d32a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d32d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x56d332u); f_0082faac();
    /* 0056d332: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x56d337u); f_0082dab0();
    /* 0056d337: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56d33cu); f_0082da80();
    /* 0056d33c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d33d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056d33e: ret  */ FN_RET(0x0056d2ac); r_esp += 4; return;
L_0056d33f:; BB(0x0056d33f);
    /* 0056d33f: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0056d343: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056d348: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0056d34c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d34d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056d34e: ret  */ FN_RET(0x0056d2ac); r_esp += 4; return;
}

void f_0056d327(void)
{
    FN_ENTER(0x0056d327);
    /* 0056d327: xor dword ptr [eax + eax], ebp */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d32a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d32d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x56d332u); f_0082faac();
    /* 0056d332: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x56d337u); f_0082dab0();
    /* 0056d337: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56d33cu); f_0082da80();
    /* 0056d33c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d33d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056d33e: ret  */ FN_RET(0x0056d327); r_esp += 4; return;
}

void f_0056d350(void) /* sub_56D350 */
{
    FN_ENTER(0x0056d350);
    /* 0056d350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d351: mov ebp, esp */ r_ebp = r_esp;
    /* 0056d353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d355: push 0x8d6be0 */ { u32 v = 0x8d6be0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d35a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056d360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d361: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056d368: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056d36b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056d36e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0056d371: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0056d374: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0056d377: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056d37a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056d37d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0056d384: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0056d387: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0056d38a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d38c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56d391u); f_005caba4();
    /* 0056d391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056d392: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056d395: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d397: je 0x56d3c6 */ if (fZ) goto L_0056d3c6;
L_0056d399:; BB(0x0056d399);
    /* 0056d399: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0056d3a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056d3a7: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d3ad: mov ecx, eax */ r_ecx = r_eax;
    /* 0056d3af: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056d3b2: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3ba: call 0x6ee0d0 */ r_esp -= 4; W32(r_esp, 0x56d3bfu); f_006ee0d0();
    /* 0056d3bf: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0056d3c6:; BB(0x0056d3c6);
    /* 0056d3c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d3cd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0056d3cf:; BB(0x0056d3cf);
    /* 0056d3cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3d0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x56d3d5u); f_0068d5a8();
    /* 0056d3d5: mov ebx, eax */ r_ebx = r_eax;
    /* 0056d3d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d3da: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d3dc: je 0x56d474 */ if (fZ) goto L_0056d474;
L_0056d3e2:; BB(0x0056d3e2);
    /* 0056d3e2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056d3e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3e6: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0056d3e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d3ea: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x56d3efu); f_007a9180();
    /* 0056d3ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d3f2: fcomp dword ptr [0xa73dd4] */ fx_compare(ST(0), R_F32((u32)(0xa73dd4u))); FPOP();
    /* 0056d3f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056d3fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056d3fb: ja 0x56d474 */ if ((!fC&&!fZ)) goto L_0056d474;
L_0056d3fd:; BB(0x0056d3fd);
    /* 0056d3fd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d400: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 0056d406: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0056d408: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0056d40b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0056d40d: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0056d410: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0056d413: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056d416: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0056d41b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d41c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d41d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0056d420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d421: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056d424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d425: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d427: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d42a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056d42c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x56d42fu); call_ind(t); }
    /* 0056d42f: fcomp dword ptr [0x926558] */ fx_compare(ST(0), R_F32((u32)(0x926558u))); FPOP();
    /* 0056d435: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056d437: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056d438: jbe 0x56d446 */ if ((fC||fZ)) goto L_0056d446;
L_0056d43a:; BB(0x0056d43a);
    /* 0056d43a: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0056d43d: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056d443: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_0056d446:; BB(0x0056d446);
    /* 0056d446: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056d448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d44a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d44b: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d450: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56d455u); f_00814298();
    /* 0056d455: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d458: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56d45du); f_00807ac0();
    /* 0056d45d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d460: je 0x56d4a9 */ if (fZ) goto L_0056d4a9;
L_0056d462:; BB(0x0056d462);
    /* 0056d462: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056d464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d465: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d467: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d46c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56d471u); f_00814298();
    /* 0056d471: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056d474:; BB(0x0056d474);
    /* 0056d474: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056d477: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d47a: jl 0x56d3cf */ if ((fS!=fO)) goto L_0056d3cf;
L_0056d480:; BB(0x0056d480);
    /* 0056d480: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d483: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056d486: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056d489: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056d48c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0056d490: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056d495: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0056d499: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056d49c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056d4a3: mov esp, ebp */ r_esp = r_ebp;
    /* 0056d4a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d4a6: ret 4 */ FN_RET(0x0056d350); r_esp += 8; return;
L_0056d4a9:; BB(0x0056d4a9);
    /* 0056d4a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056d4ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d4ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d4ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d4ae: push 0x29d */ { u32 v = 0x29du; r_esp -= 4; W32(r_esp, v); }
    /* 0056d4b3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56d4b8u); f_00814298();
    /* 0056d4b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056d4bb: jmp 0x56d474 */ goto L_0056d474;
}

void f_0056d4ec(void) /* sub_56D4EC */
{
    FN_ENTER(0x0056d4ec);
    /* 0056d4ec: call 0x56c248 */ r_esp -= 4; W32(r_esp, 0x56d4f1u); f_0056c248();
    /* 0056d4f1: mov dword ptr [0xa73de4], eax */ W32((u32)(0xa73de4u), r_eax);
    /* 0056d4f6: ret  */ FN_RET(0x0056d4ec); r_esp += 4; return;
}

void f_0056d4f8(void) /* sub_56D4F8 */
{
    FN_ENTER(0x0056d4f8);
    /* 0056d4f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d4f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056d4fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056d4fd: call 0x56d51c */ r_esp -= 4; W32(r_esp, 0x56d502u); f_0056d51c();
    /* 0056d502: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0056d506: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056d508: jne 0x56d50e */ if (!fZ) goto L_0056d50e;
L_0056d50a:; BB(0x0056d50a);
    /* 0056d50a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056d50b: ret 4 */ FN_RET(0x0056d4f8); r_esp += 8; return;
L_0056d50e:; BB(0x0056d50e);
    /* 0056d50e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d50f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x56d514u); f_005c2f74();
    /* 0056d514: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056d515: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056d516: ret 4 */ FN_RET(0x0056d4f8); r_esp += 8; return;
}

void f_0056d51c(void) /* sub_56D51C */
{
    FN_ENTER(0x0056d51c);
    /* 0056d51c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d51d: mov ebp, esp */ r_ebp = r_esp;
    /* 0056d51f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d521: push 0x8d6c44 */ { u32 v = 0x8d6c44u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d526: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056d52c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d52d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056d534: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056d537: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056d53a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056d53d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056d540: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056d543: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056d546: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056d54d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d550: mov dword ptr [ecx], 0xb05f80 */ W32((u32)(r_ecx), 0xb05f80u);
    /* 0056d556: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x56d55bu); f_007b9c8c();
    /* 0056d55b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0056d562: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d567: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d56a: add eax, 0x3f4 */ {  u32 a = r_eax; u32 b = 0x3f4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056d56f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d571: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d573: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d574: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x56d579u); f_008586d6();
    /* 0056d579: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056d580: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d583: add ecx, 0x3d8 */ {  u32 a = r_ecx; u32 b = 0x3d8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056d589: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x56d58eu); f_005769f8();
    /* 0056d58e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056d591: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x56d596u); f_0052bf84();
    /* 0056d596: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056d599: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056d5a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0056d5a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d5a3: ret  */ FN_RET(0x0056d51c); r_esp += 4; return;
}

void f_0056d5a4(void) /* sub_56D5A4 */
{
    FN_ENTER(0x0056d5a4);
    /* 0056d5a4: mov edx, dword ptr [0xa73edc] */ r_edx = R32((u32)(0xa73edcu));
    /* 0056d5aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056d5ad: mov ecx, dword ptr [ecx + 0x358] */ r_ecx = R32((u32)(r_ecx+0x358u));
    /* 0056d5b3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0056d5b6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0056d5b9: mov dword ptr [0xa73ea0], eax */ W32((u32)(0xa73ea0u), r_eax);
    /* 0056d5be: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0056d5c1: mov dword ptr [0xa73e9c], eax */ W32((u32)(0xa73e9cu), r_eax);
    /* 0056d5c6: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0056d5c9: mov dword ptr [0xa73e98], eax */ W32((u32)(0xa73e98u), r_eax);
    /* 0056d5ce: ret  */ FN_RET(0x0056d5a4); r_esp += 4; return;
}

void f_0056d5d0(void) /* sub_56D5D0 */
{
    FN_ENTER(0x0056d5d0);
    /* 0056d5d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5d4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056d5d7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056d5d9: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0056d5dc: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d5e1: je 0x56d5eb */ if (fZ) goto L_0056d5eb;
L_0056d5e3:; BB(0x0056d5e3);
    /* 0056d5e3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056d5e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056d5e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d5e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056d5e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056d5ea: ret  */ FN_RET(0x0056d5d0); r_esp += 4; return;
L_0056d5eb:; BB(0x0056d5eb);
    /* 0056d5eb: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5f0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d5f2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056d5f5: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0056d5fa: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d5ff: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d604: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x56d607u); call_ind(t); }
    /* 0056d607: mov esi, eax */ r_esi = r_eax;
    /* 0056d609: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d60b: je 0x56d7cf */ if (fZ) goto L_0056d7cf;
L_0056d611:; BB(0x0056d611);
    /* 0056d611: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0056d617: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0056d61d: lea edi, [ebp + 0x3f4] */ r_edi = (u32)(r_ebp+0x3f4u);
    /* 0056d623: mov ecx, edi */ r_ecx = r_edi;
    /* 0056d625: call 0x5771ec */ r_esp -= 4; W32(r_esp, 0x56d62au); f_005771ec();
    /* 0056d62a: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0056d630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d631: mov ecx, edi */ r_ecx = r_edi;
    /* 0056d633: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x56d638u); f_0057725c();
    /* 0056d638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d63a: je 0x56d664 */ if (fZ) goto L_0056d664;
L_0056d63c:; BB(0x0056d63c);
    /* 0056d63c: mov edx, dword ptr [ebp + 0x3f4] */ r_edx = R32((u32)(r_ebp+0x3f4u));
    /* 0056d642: mov ecx, edi */ r_ecx = r_edi;
    /* 0056d644: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x56d647u); call_ind(t); }
    /* 0056d647: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d649: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x56d64eu); f_008173d0();
    /* 0056d64e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d650: je 0x56d664 */ if (fZ) goto L_0056d664;
L_0056d652:; BB(0x0056d652);
    /* 0056d652: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0056d657: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0056d65c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056d65f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056d660: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d661: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056d662: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056d663: ret  */ FN_RET(0x0056d5d0); r_esp += 4; return;
L_0056d664:; BB(0x0056d664);
    /* 0056d664: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 0056d66a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056d66c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056d66e: jle 0x56d692 */ if ((fZ||fS!=fO)) goto L_0056d692;
L_0056d670:; BB(0x0056d670);
    /* 0056d670: movzx eax, word ptr [edx*2 + 0x9be8a8] */ r_eax = (u32)R16((u32)(r_edx*2+0x9be8a8u));
    /* 0056d678: mov eax, dword ptr [eax*4 + 0xa73e00] */ r_eax = R32((u32)(r_eax*4+0xa73e00u));
    /* 0056d67f: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d682: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056d685: cmp edx, dword ptr [ebp + 0x394] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x394u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d68b: jl 0x56d670 */ if ((fS!=fO)) goto L_0056d670;
L_0056d68d:; BB(0x0056d68d);
    /* 0056d68d: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d690: jge 0x56d708 */ if ((fS==fO)) goto L_0056d708;
L_0056d692:; BB(0x0056d692);
    /* 0056d692: mov eax, edx */ r_eax = r_edx;
    /* 0056d694: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056d696: add eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056d699: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d69c: jl 0x56d6ee */ if ((fS!=fO)) goto L_0056d6ee;
L_0056d69e:; BB(0x0056d69e);
    /* 0056d69e: movzx eax, word ptr [edx*2 + 0x9be8a8] */ r_eax = (u32)R16((u32)(r_edx*2+0x9be8a8u));
    /* 0056d6a6: mov eax, dword ptr [eax*4 + 0xa73e00] */ r_eax = R32((u32)(r_eax*4+0xa73e00u));
    /* 0056d6ad: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d6b0: movzx eax, word ptr [edx*2 + 0x9be8aa] */ r_eax = (u32)R16((u32)(r_edx*2+0x9be8aau));
    /* 0056d6b8: mov eax, dword ptr [eax*4 + 0xa73e00] */ r_eax = R32((u32)(r_eax*4+0xa73e00u));
    /* 0056d6bf: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d6c2: movzx eax, word ptr [edx*2 + 0x9be8ac] */ r_eax = (u32)R16((u32)(r_edx*2+0x9be8acu));
    /* 0056d6ca: mov eax, dword ptr [eax*4 + 0xa73e00] */ r_eax = R32((u32)(r_eax*4+0xa73e00u));
    /* 0056d6d1: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d6d4: movzx eax, word ptr [edx*2 + 0x9be8ae] */ r_eax = (u32)R16((u32)(r_edx*2+0x9be8aeu));
    /* 0056d6dc: mov eax, dword ptr [eax*4 + 0xa73e00] */ r_eax = R32((u32)(r_eax*4+0xa73e00u));
    /* 0056d6e3: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d6e6: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056d6e9: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d6ec: jl 0x56d69e */ if ((fS!=fO)) goto L_0056d69e;
L_0056d6ee:; BB(0x0056d6ee);
    /* 0056d6ee: movzx eax, word ptr [edx*2 + 0x9be8a8] */ r_eax = (u32)R16((u32)(r_edx*2+0x9be8a8u));
    /* 0056d6f6: mov eax, dword ptr [eax*4 + 0xa73e00] */ r_eax = R32((u32)(r_eax*4+0xa73e00u));
    /* 0056d6fd: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d700: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056d703: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056d706: jl 0x56d6ee */ if ((fS!=fO)) goto L_0056d6ee;
L_0056d708:; BB(0x0056d708);
    /* 0056d708: mov eax, dword ptr [0xa73e58] */ r_eax = R32((u32)(0xa73e58u));
    /* 0056d70d: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 0056d713: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056d715: jle 0x56d725 */ if ((fZ||fS!=fO)) goto L_0056d725;
L_0056d717:; BB(0x0056d717);
    /* 0056d717: mov edx, dword ptr [0xa73e5c] */ r_edx = R32((u32)(0xa73e5cu));
    /* 0056d71d: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d720: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d723: jmp 0x56d731 */ goto L_0056d731;
L_0056d725:; BB(0x0056d725);
    /* 0056d725: mov edx, dword ptr [0xa73e5c] */ r_edx = R32((u32)(0xa73e5cu));
    /* 0056d72b: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0056d72e: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0056d731:; BB(0x0056d731);
    /* 0056d731: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0056d734: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x56d739u); f_00829cc8();
    /* 0056d739: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d73a: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x56d73fu); f_00794548();
    /* 0056d73f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056d740: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x56d745u); f_00578b38();
    /* 0056d745: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x56d74au); f_0082d7b0();
    /* 0056d74a: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0056d74d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x56d752u); f_0082d838();
    /* 0056d752: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0056d755: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056d757: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x56d75cu); f_0082d8bc();
    /* 0056d75c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x56d761u); f_004f7c84();
    /* 0056d761: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d764: je 0x56d82c */ if (fZ) goto L_0056d82c;
L_0056d76a:; BB(0x0056d76a);
    /* 0056d76a: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 0056d770: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056d773: jne 0x56d7e0 */ if (!fZ) goto L_0056d7e0;
L_0056d775:; BB(0x0056d775);
    /* 0056d775: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d778: je 0x56d7d7 */ if (fZ) goto L_0056d7d7;
L_0056d77a:; BB(0x0056d77a);
    /* 0056d77a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d77c: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x56d781u); f_007aa7b8();
L_0056d781:; BB(0x0056d781);
    /* 0056d781: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56d786u); f_0082da80();
    /* 0056d786: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x56d78bu); f_00794750();
    /* 0056d78b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x56d790u); f_0082dab0();
    /* 0056d790: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0056d793: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d798: jne 0x56d7c4 */ if (!fZ) goto L_0056d7c4;
L_0056d79a:; BB(0x0056d79a);
    /* 0056d79a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d79c: je 0x56d7c4 */ if (fZ) goto L_0056d7c4;
L_0056d79e:; BB(0x0056d79e);
    /* 0056d79e: mov dword ptr [esp + 4], 0x40400000 */ W32((u32)(r_esp+0x4u), 0x40400000u);
    /* 0056d7a6: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0056d7aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d7ac: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 0056d7b4: mov dword ptr [esp + 0xc], 0x40400000 */ W32((u32)(r_esp+0xcu), 0x40400000u);
    /* 0056d7bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d7bf: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x56d7c4u); f_00779d4c();
L_0056d7c4:; BB(0x0056d7c4);
    /* 0056d7c4: mov eax, dword ptr [ebp + 0x3f4] */ r_eax = R32((u32)(r_ebp+0x3f4u));
    /* 0056d7ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0056d7cc: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x56d7cfu); call_ind(t); }
L_0056d7cf:; BB(0x0056d7cf);
    /* 0056d7cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056d7d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056d7d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d7d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056d7d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056d7d6: ret  */ FN_RET(0x0056d5d0); r_esp += 4; return;
L_0056d7d7:; BB(0x0056d7d7);
    /* 0056d7d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d7d9: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x56d7deu); f_007aa668();
    /* 0056d7de: jmp 0x56d781 */ goto L_0056d781;
L_0056d7e0:; BB(0x0056d7e0);
    /* 0056d7e0: mov edx, dword ptr [ebp + 0x3d8] */ r_edx = R32((u32)(r_ebp+0x3d8u));
    /* 0056d7e6: lea ecx, [ebp + 0x3d8] */ r_ecx = (u32)(r_ebp+0x3d8u);
    /* 0056d7ec: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0056d7ef: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x56d7f2u); call_ind(t); }
    /* 0056d7f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d7f4: jne 0x56d7fa */ if (!fZ) goto L_0056d7fa;
L_0056d7f6:; BB(0x0056d7f6);
    /* 0056d7f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0056d7f8: jmp 0x56d781 */ goto L_0056d781;
L_0056d7fa:; BB(0x0056d7fa);
    /* 0056d7fa: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0056d7fd: mov edx, dword ptr [ebp + 0x3d8] */ r_edx = R32((u32)(r_ebp+0x3d8u));
    /* 0056d803: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x56d806u); call_ind(t); }
    /* 0056d806: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d809: je 0x56d823 */ if (fZ) goto L_0056d823;
L_0056d80b:; BB(0x0056d80b);
    /* 0056d80b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d80d: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x56d812u); f_007aa7b8();
L_0056d812:; BB(0x0056d812);
    /* 0056d812: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0056d815: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 0056d81b: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x56d81eu); call_ind(t); }
    /* 0056d81e: jmp 0x56d781 */ goto L_0056d781;
L_0056d823:; BB(0x0056d823);
    /* 0056d823: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d825: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x56d82au); f_007aa668();
    /* 0056d82a: jmp 0x56d812 */ goto L_0056d812;
L_0056d82c:; BB(0x0056d82c);
    /* 0056d82c: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d82f: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x56d834u); f_0082e1e8();
    /* 0056d834: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056d835: jmp 0x56d781 */ goto L_0056d781;
}

void f_0056d83c(void) /* sub_56D83C */
{
    FN_ENTER(0x0056d83c);
    /* 0056d83c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d83d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056d83f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x56d844u); f_004f7c84();
    /* 0056d844: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056d847: je 0x56d8f1 */ if (fZ) goto L_0056d8f1;
L_0056d84d:; BB(0x0056d84d);
    /* 0056d84d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d84f: call 0x56eb08 */ r_esp -= 4; W32(r_esp, 0x56d854u); f_0056eb08();
    /* 0056d854: mov eax, dword ptr [ebp + 0x3c0] */ r_eax = R32((u32)(r_ebp+0x3c0u));
    /* 0056d85a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0056d85c: jl 0x56d867 */ if ((fS!=fO)) goto L_0056d867;
L_0056d85e:; BB(0x0056d85e);
    /* 0056d85e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056d861: mov dword ptr [ebp + 0x3c0], eax */ W32((u32)(r_ebp+0x3c0u), r_eax);
L_0056d867:; BB(0x0056d867);
    /* 0056d867: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056d86e: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 0056d874: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d876: je 0x56d8ab */ if (fZ) goto L_0056d8ab;
L_0056d878:; BB(0x0056d878);
    /* 0056d878: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0056d87e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d881: je 0x56d89a */ if (fZ) goto L_0056d89a;
L_0056d883:; BB(0x0056d883);
    /* 0056d883: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 0056d88d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d88f: call 0x56d8f4 */ r_esp -= 4; W32(r_esp, 0x56d894u); f_0056d8f4();
    /* 0056d894: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_0056d89a:; BB(0x0056d89a);
    /* 0056d89a: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 0056d8a4: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
L_0056d8ab:; BB(0x0056d8ab);
    /* 0056d8ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d8ad: call 0x56d8f4 */ r_esp -= 4; W32(r_esp, 0x56d8b2u); f_0056d8f4();
    /* 0056d8b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d8b4: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x56d8b9u); f_0078730c();
    /* 0056d8b9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8bc: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 0056d8c2: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0056d8c8: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0056d8cb: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 0056d8d1: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 0056d8d4: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0056d8d7: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x56d8dcu); f_006946a8();
    /* 0056d8dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8e0: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056d8e3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d8e9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x56d8eeu); f_00805608();
    /* 0056d8ee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0056d8f1:; BB(0x0056d8f1);
    /* 0056d8f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056d8f2: ret  */ FN_RET(0x0056d83c); r_esp += 4; return;
}

void f_0056d8f4(void) /* sub_56D8F4 */
{
    FN_ENTER(0x0056d8f4);
    /* 0056d8f4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0056d8fb: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056d8fe: ja 0x56d93f */ if ((!fC&&!fZ)) goto L_0056d93f;
L_0056d900:; BB(0x0056d900);
    /* 0056d900: mov eax, dword ptr [eax*4 + 0x9265d8] */ r_eax = R32((u32)(r_eax*4+0x9265d8u));
    /* 0056d907: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d8f4); r_esp += 4; return;
}

void f_0056d909(void)
{
    FN_ENTER(0x0056d909);
    /* 0056d909: call 0x56e6f8 */ r_esp -= 4; W32(r_esp, 0x56d90eu); f_0056e6f8();
    /* 0056d90e: jmp 0x56d93f */ goto L_0056d93f;
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d909); r_esp += 4; return;
}

void f_0056d910(void)
{
    FN_ENTER(0x0056d910);
    /* 0056d910: call 0x56d940 */ r_esp -= 4; W32(r_esp, 0x56d915u); f_0056d940();
    /* 0056d915: jmp 0x56d93f */ goto L_0056d93f;
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d910); r_esp += 4; return;
}

void f_0056d917(void)
{
    FN_ENTER(0x0056d917);
    /* 0056d917: call 0x56da68 */ r_esp -= 4; W32(r_esp, 0x56d91cu); f_0056da68();
    /* 0056d91c: jmp 0x56d93f */ goto L_0056d93f;
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d917); r_esp += 4; return;
}

void f_0056d91e(void)
{
    FN_ENTER(0x0056d91e);
    /* 0056d91e: call 0x56db3c */ r_esp -= 4; W32(r_esp, 0x56d923u); f_0056db3c();
    /* 0056d923: jmp 0x56d93f */ goto L_0056d93f;
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d91e); r_esp += 4; return;
}

void f_0056d925(void)
{
    FN_ENTER(0x0056d925);
    /* 0056d925: call 0x56dc20 */ r_esp -= 4; W32(r_esp, 0x56d92au); f_0056dc20();
    /* 0056d92a: jmp 0x56d93f */ goto L_0056d93f;
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d925); r_esp += 4; return;
}

void f_0056d92c(void)
{
    FN_ENTER(0x0056d92c);
    /* 0056d92c: call 0x56dd54 */ r_esp -= 4; W32(r_esp, 0x56d931u); f_0056dd54();
    /* 0056d931: jmp 0x56d93f */ goto L_0056d93f;
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d92c); r_esp += 4; return;
}

void f_0056d933(void)
{
    FN_ENTER(0x0056d933);
    /* 0056d933: call 0x56e6f8 */ r_esp -= 4; W32(r_esp, 0x56d938u); f_0056e6f8();
    /* 0056d938: jmp 0x56d93f */ goto L_0056d93f;
L_0056d93f:; BB(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d933); r_esp += 4; return;
}

void f_0056d93a(void)
{
    FN_ENTER(0x0056d93a);
    /* 0056d93a: call 0x52c8e8 */ r_esp -= 4; W32(r_esp, 0x56d93fu); f_0052c8e8();
    /* 0056d93f: ret  */ FN_RET(0x0056d93a); r_esp += 4; return;
}

void f_0056d93f(void)
{
    FN_ENTER(0x0056d93f);
    /* 0056d93f: ret  */ FN_RET(0x0056d93f); r_esp += 4; return;
}

void f_0056d940(void) /* sub_56D940 */
{
    FN_ENTER(0x0056d940);
    /* 0056d940: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d941: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056d942: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056d944: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0056d94a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056d94c: je 0x56d959 */ if (fZ) goto L_0056d959;
L_0056d94e:; BB(0x0056d94e);
    /* 0056d94e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056d951: jne 0x56da64 */ if (!fZ) goto L_0056da64;
L_0056d957:; BB(0x0056d957);
    /* 0056d957: jmp 0x56d9a3 */ goto L_0056d9a3;
L_0056d959:; BB(0x0056d959);
    /* 0056d959: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0056d95f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0056d962: and eax, 0xffc7ffff */ {  u32 a = r_eax; u32 b = 0xffc7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056d967: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0056d96a: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 0056d96d: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 0056d970: and edi, 0xfffffeff */ {  u32 a = r_edi; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0056d976: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 0056d979: mov edx, 1 */ r_edx = 0x1u;
    /* 0056d97e: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0056d985: mov dword ptr [ebp + 0x2a4], eax */ W32((u32)(r_ebp+0x2a4u), r_eax);
    /* 0056d98b: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 0056d98e: mov dword ptr [ebp + 0x2a8], eax */ W32((u32)(r_ebp+0x2a8u), r_eax);
    /* 0056d994: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 0056d997: mov dword ptr [ebp + 0x2ac], eax */ W32((u32)(r_ebp+0x2acu), r_eax);
    /* 0056d99d: mov dword ptr [ebp + 0x384], edx */ W32((u32)(r_ebp+0x384u), r_edx);
L_0056d9a3:; BB(0x0056d9a3);
    /* 0056d9a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d9a5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56d9aau); f_007aa094();
    /* 0056d9aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d9b0: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56d9b5u); f_00772b44();
    /* 0056d9b5: mov edi, dword ptr [ebp + 0x300] */ r_edi = R32((u32)(r_ebp+0x300u));
    /* 0056d9bb: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0056d9c1: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 0056d9c7: mov ecx, dword ptr [ebp + 0x358] */ r_ecx = R32((u32)(r_ebp+0x358u));
    /* 0056d9cd: mov dword ptr [ebp + 0x298], edi */ W32((u32)(r_ebp+0x298u), r_edi);
    /* 0056d9d3: mov dword ptr [ebp + 0x29c], edx */ W32((u32)(r_ebp+0x29cu), r_edx);
    /* 0056d9d9: mov dword ptr [ebp + 0x2a0], eax */ W32((u32)(r_ebp+0x2a0u), r_eax);
    /* 0056d9df: push dword ptr [ebp + 0x2ac] */ { u32 v = R32((u32)(r_ebp+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d9e5: push dword ptr [ebp + 0x2a8] */ { u32 v = R32((u32)(r_ebp+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d9eb: push dword ptr [ebp + 0x2a4] */ { u32 v = R32((u32)(r_ebp+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d9f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056d9f4: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056d9f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056d9f9: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x56d9feu); f_00771f5c();
    /* 0056d9fe: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0056da04: lea eax, [ebp + 0x30c] */ r_eax = (u32)(r_ebp+0x30cu);
    /* 0056da0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056da0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056da0d: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056da10: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x56da15u); f_00771858();
    /* 0056da15: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056da18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056da1a: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x56da1du); call_ind(t); }
    /* 0056da1d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056da1f: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56da24u); f_007b6880();
    /* 0056da24: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0056da27: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 0056da2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056da2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056da2c: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x56da31u); f_0078ea50();
    /* 0056da31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0056da34: fcomp dword ptr [0x926844] */ fx_compare(ST(0), R_F32((u32)(0x926844u))); FPOP();
    /* 0056da3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056da3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056da3d: ja 0x56da64 */ if ((!fC&&!fZ)) goto L_0056da64;
L_0056da3f:; BB(0x0056da3f);
    /* 0056da3f: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0056da45: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056da47: jne 0x56da64 */ if (!fZ) goto L_0056da64;
L_0056da49:; BB(0x0056da49);
    /* 0056da49: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056da50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056da52: je 0x56da64 */ if (fZ) goto L_0056da64;
L_0056da54:; BB(0x0056da54);
    /* 0056da54: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 0056da5e: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
L_0056da64:; BB(0x0056da64);
    /* 0056da64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056da65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056da66: ret  */ FN_RET(0x0056d940); r_esp += 4; return;
}

void f_0056da68(void) /* sub_56DA68 */
{
    FN_ENTER(0x0056da68);
    /* 0056da68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056da69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056da6a: mov esi, ecx */ r_esi = r_ecx;
    /* 0056da6c: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0056da72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056da74: je 0x56dad1 */ if (fZ) goto L_0056dad1;
L_0056da76:; BB(0x0056da76);
    /* 0056da76: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056da79: je 0x56dac9 */ if (fZ) goto L_0056dac9;
L_0056da7b:; BB(0x0056da7b);
    /* 0056da7b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056da7e: jne 0x56db37 */ if (!fZ) goto L_0056db37;
L_0056da84:; BB(0x0056da84);
    /* 0056da84: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 0056da8a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0056da8d: and edx, 0xfffffffa */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056da90: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0056da96: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056da9b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056da9e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056daa1: jne 0x56db37 */ if (!fZ) goto L_0056db37;
L_0056daa7:; BB(0x0056daa7);
    /* 0056daa7: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056daae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056dab0: je 0x56db37 */ if (fZ) goto L_0056db37;
L_0056dab6:; BB(0x0056dab6);
    /* 0056dab6: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 0056dac0: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0056dac6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056dac7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056dac8: ret  */ FN_RET(0x0056da68); r_esp += 4; return;
L_0056dac9:; BB(0x0056dac9);
    /* 0056dac9: lea ebp, [esi + 0x3d8] */ r_ebp = (u32)(r_esi+0x3d8u);
    /* 0056dacf: jmp 0x56db19 */ goto L_0056db19;
L_0056dad1:; BB(0x0056dad1);
    /* 0056dad1: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056dad7: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0056dada: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056dae0: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056dae3: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0056dae9: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0056daec: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0056daee: mov word ptr [esi + 0xb8], bp */ W16((u32)(r_esi+0xb8u), (u16)r_ebp);
    /* 0056daf5: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0056dafb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056dafc: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x56db01u); f_005789e4();
    /* 0056db01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056db02: lea ebp, [esi + 0x3d8] */ r_ebp = (u32)(r_esi+0x3d8u);
    /* 0056db08: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056db0a: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x56db0fu); f_00576c48();
    /* 0056db0f: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
L_0056db19:; BB(0x0056db19);
    /* 0056db19: mov ecx, esi */ r_ecx = r_esi;
    /* 0056db1b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56db20u); f_007aa094();
    /* 0056db20: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0056db23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056db25: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x56db28u); call_ind(t); }
    /* 0056db28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056db2b: jne 0x56db37 */ if (!fZ) goto L_0056db37;
L_0056db2d:; BB(0x0056db2d);
    /* 0056db2d: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
L_0056db37:; BB(0x0056db37);
    /* 0056db37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056db38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056db39: ret  */ FN_RET(0x0056da68); r_esp += 4; return;
}

void f_0056db3c(void) /* sub_56DB3C */
{
    FN_ENTER(0x0056db3c);
    /* 0056db3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056db3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056db3e: mov esi, ecx */ r_esi = r_ecx;
    /* 0056db40: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0056db46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056db48: je 0x56db57 */ if (fZ) goto L_0056db57;
L_0056db4a:; BB(0x0056db4a);
    /* 0056db4a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056db4d: je 0x56dba2 */ if (fZ) goto L_0056dba2;
L_0056db4f:; BB(0x0056db4f);
    /* 0056db4f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056db52: jne 0x56dbc1 */ if (!fZ) goto L_0056dbc1;
L_0056db54:; BB(0x0056db54);
    /* 0056db54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056db55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056db56: ret  */ FN_RET(0x0056db3c); r_esp += 4; return;
L_0056db57:; BB(0x0056db57);
    /* 0056db57: mov eax, 4 */ r_eax = 0x4u;
    /* 0056db5c: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0056db63: mov ecx, esi */ r_ecx = r_esi;
    /* 0056db65: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x56db6au); f_00787534();
    /* 0056db6a: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056db6f: mov eax, 0x5a */ r_eax = 0x5au;
    /* 0056db74: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 0056db7b: lea ebp, [esi + 0x300] */ r_ebp = (u32)(r_esi+0x300u);
    /* 0056db81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056db82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056db83: call 0x5788d0 */ r_esp -= 4; W32(r_esp, 0x56db88u); f_005788d0();
    /* 0056db88: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056db8d: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0056db8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056db90: call 0x5788d0 */ r_esp -= 4; W32(r_esp, 0x56db95u); f_005788d0();
    /* 0056db95: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056db98: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
L_0056dba2:; BB(0x0056dba2);
    /* 0056dba2: mov ecx, esi */ r_ecx = r_esi;
    /* 0056dba4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56dba9u); f_007aa094();
    /* 0056dba9: movsx eax, word ptr [esi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x344u));
    /* 0056dbb0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056dbb3: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 0056dbba: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0056dbbd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056dbbf: jl 0x56dbc4 */ if ((fS!=fO)) goto L_0056dbc4;
L_0056dbc1:; BB(0x0056dbc1);
    /* 0056dbc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056dbc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056dbc3: ret  */ FN_RET(0x0056db3c); r_esp += 4; return;
L_0056dbc4:; BB(0x0056dbc4);
    /* 0056dbc4: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056dbc7: lea ebp, [esi + 0x300] */ r_ebp = (u32)(r_esi+0x300u);
    /* 0056dbcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056dbce: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056dbd1: push 0x9be860 */ { u32 v = 0x9be860u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dbd6: push dword ptr [0xa73eec] */ { u32 v = R32((u32)(0xa73eecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056dbdc: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x56dbe1u); f_00578aa0();
    /* 0056dbe1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056dbe2: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x56dbe7u); f_008113e4();
    /* 0056dbe7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056dbe8: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x56dbedu); f_005787d0();
    /* 0056dbed: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056dbf0: push 0x135 */ { u32 v = 0x135u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dbf5: mov ecx, esi */ r_ecx = r_esi;
    /* 0056dbf7: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56dbfcu); f_007879b8();
    /* 0056dbfc: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0056dbff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056dc01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc03: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc05: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56dc0au); f_00814298();
    /* 0056dc0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056dc0d: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0056dc11: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056dc16: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0056dc1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056dc1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056dc1c: ret  */ FN_RET(0x0056db3c); r_esp += 4; return;
}

void f_0056dc20(void) /* sub_56DC20 */
{
    FN_ENTER(0x0056dc20);
    /* 0056dc20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056dc21: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056dc24: mov edi, ecx */ r_edi = r_ecx;
    /* 0056dc26: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0056dc2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dc2e: je 0x56dc67 */ if (fZ) goto L_0056dc67;
L_0056dc30:; BB(0x0056dc30);
    /* 0056dc30: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dc33: je 0x56dc88 */ if (fZ) goto L_0056dc88;
L_0056dc35:; BB(0x0056dc35);
    /* 0056dc35: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dc38: jne 0x56dd4d */ if (!fZ) goto L_0056dd4d;
L_0056dc3e:; BB(0x0056dc3e);
    /* 0056dc3e: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056dc41: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0056dc47: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 0056dc51: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056dc56: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0056dc59: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056dc5c: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0056dc62: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056dc65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056dc66: ret  */ FN_RET(0x0056dc20); r_esp += 4; return;
L_0056dc67:; BB(0x0056dc67);
    /* 0056dc67: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056dc6a: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0056dc74: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056dc79: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0056dc7c: mov edx, 3 */ r_edx = 0x3u;
    /* 0056dc81: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
L_0056dc88:; BB(0x0056dc88);
    /* 0056dc88: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dc8a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56dc8fu); f_007aa094();
    /* 0056dc8f: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0056dc95: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0056dc9b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056dc9e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056dca1: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 0056dca7: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0056dcad: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056dcb0: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dcb2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0056dcb6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056dcba: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056dcbe: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 0056dcc4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0056dcc8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056dccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056dccc: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x56dcd1u); f_00771e14();
    /* 0056dcd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dcd3: je 0x56dceb */ if (fZ) goto L_0056dceb;
L_0056dcd5:; BB(0x0056dcd5);
    /* 0056dcd5: fld dword ptr [0x92683c] */ FPUSH(R_F32((u32)(0x92683cu)));
    /* 0056dcdb: fld dword ptr [0x92683c] */ FPUSH(R_F32((u32)(0x92683cu)));
    /* 0056dce1: fld dword ptr [0x92683c] */ FPUSH(R_F32((u32)(0x92683cu)));
    /* 0056dce7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056dce9: jmp 0x56dd04 */ goto L_0056dd04;
L_0056dceb:; BB(0x0056dceb);
    /* 0056dceb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0056dced: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dcef: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x56dcf2u); call_ind(t); }
    /* 0056dcf2: fld dword ptr [0x92683c] */ FPUSH(R_F32((u32)(0x92683cu)));
    /* 0056dcf8: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0056dcfe: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
L_0056dd04:; BB(0x0056dd04);
    /* 0056dd04: fld dword ptr [0x926838] */ FPUSH(R_F32((u32)(0x926838u)));
    /* 0056dd0a: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0056dd0c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0056dd0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056dd10: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0056dd16: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0056dd1c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056dd1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056dd22: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dd24: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0056dd2c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56dd31u); f_00772b44();
    /* 0056dd31: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dd33: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56dd38u); f_007b6880();
    /* 0056dd38: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0056dd3e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dd41: je 0x56dd4d */ if (fZ) goto L_0056dd4d;
L_0056dd43:; BB(0x0056dd43);
    /* 0056dd43: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
L_0056dd4d:; BB(0x0056dd4d);
    /* 0056dd4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056dd50: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056dd51: ret  */ FN_RET(0x0056dc20); r_esp += 4; return;
}

void f_0056dd54(void) /* sub_56DD54 */
{
    FN_ENTER(0x0056dd54);
    /* 0056dd54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056dd55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056dd56: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056dd59: mov edi, ecx */ r_edi = r_ecx;
    /* 0056dd5b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dd5d: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56dd62u); f_00770738();
    /* 0056dd62: mov ebp, eax */ r_ebp = r_eax;
    /* 0056dd64: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 0056dd6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dd6c: je 0x56deb8 */ if (fZ) goto L_0056deb8;
L_0056dd72:; BB(0x0056dd72);
    /* 0056dd72: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dd75: je 0x56de29 */ if (fZ) goto L_0056de29;
L_0056dd7b:; BB(0x0056dd7b);
    /* 0056dd7b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dd7e: je 0x56ddb7 */ if (fZ) goto L_0056ddb7;
L_0056dd80:; BB(0x0056dd80);
    /* 0056dd80: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dd83: jne 0x56dd9f */ if (!fZ) goto L_0056dd9f;
L_0056dd85:; BB(0x0056dd85);
    /* 0056dd85: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 0056dd8c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056dd8f: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0056dd96: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0056dd99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056dd9b: jle 0x56ddf8 */ if ((fZ||fS!=fO)) goto L_0056ddf8;
L_0056dd9d:; BB(0x0056dd9d);
    /* 0056dd9d: jmp 0x56ddd9 */ goto L_0056ddd9;
L_0056dd9f:; BB(0x0056dd9f);
    /* 0056dd9f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056dda2: jne 0x56ddd9 */ if (!fZ) goto L_0056ddd9;
L_0056dda4:; BB(0x0056dda4);
    /* 0056dda4: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0056ddaa: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056ddaf: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 0056ddb5: jmp 0x56ddd9 */ goto L_0056ddd9;
L_0056ddb7:; BB(0x0056ddb7);
    /* 0056ddb7: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0056ddbd: fcomp dword ptr [0x92682c] */ fx_compare(ST(0), R_F32((u32)(0x92682cu))); FPOP();
    /* 0056ddc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ddc5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ddc6: jb 0x56ddd9 */ if (fC) goto L_0056ddd9;
L_0056ddc8:; BB(0x0056ddc8);
    /* 0056ddc8: mov ecx, edi */ r_ecx = r_edi;
    /* 0056ddca: call 0x56dee4 */ r_esp -= 4; W32(r_esp, 0x56ddcfu); f_0056dee4();
    /* 0056ddcf: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
L_0056ddd9:; BB(0x0056ddd9);
    /* 0056ddd9: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dddb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56dde0u); f_007aa094();
    /* 0056dde0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dde2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056dde4: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dde6: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56ddebu); f_00772b44();
    /* 0056ddeb: mov ecx, edi */ r_ecx = r_edi;
    /* 0056dded: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56ddf2u); f_007b6880();
    /* 0056ddf2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056ddf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ddf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056ddf7: ret  */ FN_RET(0x0056dd54); r_esp += 4; return;
L_0056ddf8:; BB(0x0056ddf8);
    /* 0056ddf8: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0056ddfe: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 0056de08: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056de0a: jne 0x56ddd9 */ if (!fZ) goto L_0056ddd9;
L_0056de0c:; BB(0x0056de0c);
    /* 0056de0c: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0056de13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056de15: je 0x56ddd9 */ if (fZ) goto L_0056ddd9;
L_0056de17:; BB(0x0056de17);
    /* 0056de17: mov dword ptr [edi + 0x37c], 0 */ W32((u32)(r_edi+0x37cu), 0x0u);
    /* 0056de21: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 0056de27: jmp 0x56ddd9 */ goto L_0056ddd9;
L_0056de29:; BB(0x0056de29);
    /* 0056de29: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056de2b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0056de2d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056de2f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x56de32u); call_ind(t); }
    /* 0056de32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056de34: je 0x56de4b */ if (fZ) goto L_0056de4b;
L_0056de36:; BB(0x0056de36);
    /* 0056de36: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056de3b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056de3d: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x56de42u); f_0052ccd8();
    /* 0056de42: mov ecx, edi */ r_ecx = r_edi;
    /* 0056de44: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56de49u); f_00770738();
    /* 0056de49: mov ebp, eax */ r_ebp = r_eax;
L_0056de4b:; BB(0x0056de4b);
    /* 0056de4b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056de4d: je 0x56de92 */ if (fZ) goto L_0056de92;
L_0056de4f:; BB(0x0056de4f);
    /* 0056de4f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0056de52: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0056de55: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0056de58: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0056de5b: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0056de5e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0056de62: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056de66: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0056de69: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56de6eu); f_0082f9c4();
    /* 0056de6e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056de71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056de72: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 0056de78: mov ecx, edi */ r_ecx = r_edi;
    /* 0056de7a: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056de7d: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x56de82u); f_00771858();
    /* 0056de82: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0056de83: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056de85: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056de87: cmp eax, 0xe38 */ {  u32 a = r_eax; u32 b = 0xe38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056de8c: jge 0x56ddd9 */ if ((fS==fO)) goto L_0056ddd9;
L_0056de92:; BB(0x0056de92);
    /* 0056de92: mov eax, dword ptr [0xa73edc] */ r_eax = R32((u32)(0xa73edcu));
    /* 0056de97: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0056de9a: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
    /* 0056dea1: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0056dea6: mov word ptr [edi + 0xb8], bp */ W16((u32)(r_edi+0xb8u), (u16)r_ebp);
    /* 0056dead: mov dword ptr [edi + 0x384], ebp */ W32((u32)(r_edi+0x384u), r_ebp);
    /* 0056deb3: jmp 0x56ddd9 */ goto L_0056ddd9;
L_0056deb8:; BB(0x0056deb8);
    /* 0056deb8: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0056debe: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0056dec8: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056dece: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0056ded4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056ded6: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0056dedd: jmp 0x56de29 */ goto L_0056de29;
}

void f_0056dee4(void) /* sub_56DEE4 */
{
    FN_ENTER(0x0056dee4);
    /* 0056dee4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056dee5: mov ebp, esp */ r_ebp = r_esp;
    /* 0056dee7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056dee9: push 0x8d6e00 */ { u32 v = 0x8d6e00u; r_esp -= 4; W32(r_esp, v); }
    /* 0056deee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056def4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056def5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056defc: sub esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056df02: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056df05: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0056df08: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0056df0b: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0056df0e: mov eax, dword ptr [0xa73edc] */ r_eax = R32((u32)(0xa73edcu));
    /* 0056df13: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0056df16: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056df19: add edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056df1f: mov dword ptr [0xa73e94], edx */ W32((u32)(0xa73e94u), r_edx);
    /* 0056df25: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x56df2au); f_0052cac0();
    /* 0056df2a: mov edx, dword ptr [0x92664c] */ r_edx = R32((u32)(0x92664cu));
    /* 0056df30: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056df33: mov esi, dword ptr [0x926634] */ r_esi = R32((u32)(0x926634u));
    /* 0056df39: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0056df3c: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 0056df42: mov dword ptr [ebp - 0xe4], 0x44800000 */ W32((u32)(r_ebp+0xffffff1cu), 0x44800000u);
    /* 0056df4c: lea edx, [eax + 0x800] */ r_edx = (u32)(r_eax+0x800u);
    /* 0056df52: add eax, 0xfffff800 */ {  u32 a = r_eax; u32 b = 0xfffff800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056df57: mov dword ptr [ebp - 0xe0], 0x40400000 */ W32((u32)(r_ebp+0xffffff20u), 0x40400000u);
    /* 0056df61: lea ebx, [ebp - 0xd8] */ r_ebx = (u32)(r_ebp+0xffffff28u);
    /* 0056df67: mov dword ptr [ebp - 0xf0], ebx */ W32((u32)(r_ebp+0xffffff10u), r_ebx);
    /* 0056df6d: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 0056df77: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 0056df7d: mov dword ptr [ebp - 0xc0], 0x45000000 */ W32((u32)(r_ebp+0xffffff40u), 0x45000000u);
    /* 0056df87: mov dword ptr [ebp - 0xc8], esi */ W32((u32)(r_ebp+0xffffff38u), r_esi);
    /* 0056df8d: mov dword ptr [ebp - 0xbc], 0x41200000 */ W32((u32)(r_ebp+0xffffff44u), 0x41200000u);
    /* 0056df97: lea edi, [ebp - 0xd8] */ r_edi = (u32)(r_ebp+0xffffff28u);
    /* 0056df9d: mov dword ptr [ebp - 0xb8], 0x3ecccccd */ W32((u32)(r_ebp+0xffffff48u), 0x3ecccccdu);
    /* 0056dfa7: mov dword ptr [ebp - 0xcc], edi */ W32((u32)(r_ebp+0xffffff34u), r_edi);
    /* 0056dfad: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0056dfb3: mov edx, dword ptr [0x92661c] */ r_edx = R32((u32)(0x92661cu));
    /* 0056dfb9: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0056dfbf: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 0056dfc5: mov dword ptr [ebp - 0xa8], 0x44800000 */ W32((u32)(r_ebp+0xffffff58u), 0x44800000u);
    /* 0056dfcf: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 0056dfd5: mov edx, dword ptr [0x926604] */ r_edx = R32((u32)(0x926604u));
    /* 0056dfdb: mov dword ptr [ebp - 0xa4], 0x40400000 */ W32((u32)(r_ebp+0xffffff5cu), 0x40400000u);
    /* 0056dfe5: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0056dfef: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0056dff5: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0056dffb: mov dword ptr [ebp - 0x90], 0x45000000 */ W32((u32)(r_ebp+0xffffff70u), 0x45000000u);
    /* 0056e005: mov dword ptr [ebp - 0x8c], 0x41200000 */ W32((u32)(r_ebp+0xffffff74u), 0x41200000u);
    /* 0056e00f: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 0056e015: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0056e01b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e01d: mov dword ptr [ebp - 0x88], 0x3ecccccd */ W32((u32)(r_ebp+0xffffff78u), 0x3ecccccdu);
    /* 0056e027: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0056e02d: mov eax, dword ptr [ecx + 0x3c4] */ r_eax = R32((u32)(r_ecx+0x3c4u));
    /* 0056e033: mov word ptr [ebp - 0x84], ax */ W16((u32)(r_ebp+0xffffff7cu), (u16)r_eax);
    /* 0056e03a: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0056e040: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0056e047: mov word ptr [ebp - 0x82], ax */ W16((u32)(r_ebp+0xffffff7eu), (u16)r_eax);
    /* 0056e04e: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0056e054: mov dword ptr [ebp - 0x78], 3 */ W32((u32)(r_ebp+0xffffff88u), 0x3u);
    /* 0056e05b: mov word ptr [ebp - 0x80], ax */ W16((u32)(r_ebp+0xffffff80u), (u16)r_eax);
    /* 0056e05f: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 0056e065: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 0056e06c: mov word ptr [ebp - 0x7e], ax */ W16((u32)(r_ebp+0xffffff82u), (u16)r_eax);
    /* 0056e070: mov dword ptr [ebp - 0x70], 2 */ W32((u32)(r_ebp+0xffffff90u), 0x2u);
    /* 0056e077: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e07d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e07e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e080: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e086u); call_ind(t); }
    /* 0056e086: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0056e08d: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e092: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e097u); f_005caba4();
    /* 0056e097: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e098: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0056e09b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e09d: je 0x56e0cf */ if (fZ) goto L_0056e0cf;
L_0056e09f:; BB(0x0056e09f);
    /* 0056e09f: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 0056e0a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056e0ad: movzx eax, word ptr [ebp - 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7cu));
    /* 0056e0b4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e0b7: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0056e0ba: lea edx, [ebp - 0xf0] */ r_edx = (u32)(r_ebp+0xffffff10u);
    /* 0056e0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0c3: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e0c8u); f_00570810();
    /* 0056e0c8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0056e0cf:; BB(0x0056e0cf);
    /* 0056e0cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e0d6: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0056e0dd: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e0e2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e0e7u); f_005caba4();
    /* 0056e0e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e0e8: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0056e0eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e0ed: je 0x56e11f */ if (fZ) goto L_0056e11f;
L_0056e0ef:; BB(0x0056e0ef);
    /* 0056e0ef: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0056e0f6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056e0fd: movzx eax, word ptr [ebp - 0x82] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7eu));
    /* 0056e104: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e107: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0056e10a: lea edx, [ebp - 0xcc] */ r_edx = (u32)(r_ebp+0xffffff34u);
    /* 0056e110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e111: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e112: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e113: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e118u); f_00570810();
    /* 0056e118: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0056e11f:; BB(0x0056e11f);
    /* 0056e11f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e126: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e12c: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e131: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e132: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e137u); f_0050b510();
    /* 0056e137: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e13a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e13d: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e144: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e146: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e148: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e14eu); call_ind(t); }
    /* 0056e14e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0056e155: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e15a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e15fu); f_005caba4();
    /* 0056e15f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e160: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0056e163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e165: je 0x56e197 */ if (fZ) goto L_0056e197;
L_0056e167:; BB(0x0056e167);
    /* 0056e167: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0056e16e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056e175: movzx eax, word ptr [ebp - 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7cu));
    /* 0056e17c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e17f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0056e182: lea edx, [ebp - 0xb4] */ r_edx = (u32)(r_ebp+0xffffff4cu);
    /* 0056e188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e189: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e18a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e18b: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e190u); f_00570810();
    /* 0056e190: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0056e197:; BB(0x0056e197);
    /* 0056e197: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e19e: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0056e1a5: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e1afu); f_005caba4();
    /* 0056e1af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e1b0: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0056e1b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e1b5: je 0x56e1e7 */ if (fZ) goto L_0056e1e7;
L_0056e1b7:; BB(0x0056e1b7);
    /* 0056e1b7: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0056e1be: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0056e1c5: movzx eax, word ptr [ebp - 0x82] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7eu));
    /* 0056e1cc: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e1cf: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0056e1d2: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0056e1d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1db: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e1e0u); f_00570810();
    /* 0056e1e0: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0056e1e7:; BB(0x0056e1e7);
    /* 0056e1e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e1ee: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e1f4: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e1fa: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e1ffu); f_0050b510();
    /* 0056e1ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e202: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e205: mov eax, dword ptr [eax + 0x3b0] */ r_eax = R32((u32)(r_eax+0x3b0u));
    /* 0056e20b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056e20d: jle 0x56e3a6 */ if ((fZ||fS!=fO)) goto L_0056e3a6;
L_0056e213:; BB(0x0056e213);
    /* 0056e213: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e216: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e21c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e21d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e21f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e221: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e227u); call_ind(t); }
    /* 0056e227: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0056e22e: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e233: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e238u); f_005caba4();
    /* 0056e238: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e239: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0056e23c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e23e: je 0x56e270 */ if (fZ) goto L_0056e270;
L_0056e240:; BB(0x0056e240);
    /* 0056e240: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0056e247: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0056e24e: movzx eax, word ptr [ebp - 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7cu));
    /* 0056e255: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e258: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0056e25b: lea edx, [ebp - 0xf0] */ r_edx = (u32)(r_ebp+0xffffff10u);
    /* 0056e261: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e262: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e263: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e264: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e269u); f_00570810();
    /* 0056e269: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0056e270:; BB(0x0056e270);
    /* 0056e270: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e277: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0056e27e: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e283: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e288u); f_005caba4();
    /* 0056e288: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e289: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0056e28c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e28e: je 0x56e2c0 */ if (fZ) goto L_0056e2c0;
L_0056e290:; BB(0x0056e290);
    /* 0056e290: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0056e297: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0056e29e: movzx eax, word ptr [ebp - 0x82] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7eu));
    /* 0056e2a5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e2a8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0056e2ab: lea edx, [ebp - 0xcc] */ r_edx = (u32)(r_ebp+0xffffff34u);
    /* 0056e2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2b4: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e2b9u); f_00570810();
    /* 0056e2b9: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0056e2c0:; BB(0x0056e2c0);
    /* 0056e2c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e2c7: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e2cd: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2d3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e2d8u); f_0050b510();
    /* 0056e2d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e2db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e2de: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e2e7: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2e9: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e2efu); call_ind(t); }
    /* 0056e2ef: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0056e2f6: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e300u); f_005caba4();
    /* 0056e300: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e301: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0056e304: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e306: je 0x56e335 */ if (fZ) goto L_0056e335;
L_0056e308:; BB(0x0056e308);
    /* 0056e308: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0056e30f: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0056e316: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 0056e31a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e31d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0056e320: lea edx, [ebp - 0xb4] */ r_edx = (u32)(r_ebp+0xffffff4cu);
    /* 0056e326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e327: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e328: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e329: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e32eu); f_00570810();
    /* 0056e32e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0056e335:; BB(0x0056e335);
    /* 0056e335: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e33c: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0056e343: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e348: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e34du); f_005caba4();
    /* 0056e34d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e34e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0056e351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e353: je 0x56e382 */ if (fZ) goto L_0056e382;
L_0056e355:; BB(0x0056e355);
    /* 0056e355: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0056e35c: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0056e363: movzx eax, word ptr [ebp - 0x7e] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff82u));
    /* 0056e367: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e36a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0056e36d: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0056e373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e374: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e375: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e376: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e37bu); f_00570810();
    /* 0056e37b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0056e382:; BB(0x0056e382);
    /* 0056e382: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e389: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e38f: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e395: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e39au); f_0050b510();
    /* 0056e39a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e39d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e3a0: mov eax, dword ptr [eax + 0x3b0] */ r_eax = R32((u32)(r_eax+0x3b0u));
L_0056e3a6:; BB(0x0056e3a6);
    /* 0056e3a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e3a9: jl 0x56e6bd */ if ((fS!=fO)) goto L_0056e6bd;
L_0056e3af:; BB(0x0056e3af);
    /* 0056e3af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e3b2: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e3b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e3bb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3bd: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e3c3u); call_ind(t); }
    /* 0056e3c3: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0056e3ca: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e3d4u); f_005caba4();
    /* 0056e3d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e3d5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e3d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e3da: je 0x56e40c */ if (fZ) goto L_0056e40c;
L_0056e3dc:; BB(0x0056e3dc);
    /* 0056e3dc: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0056e3e3: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0056e3ea: movzx eax, word ptr [ebp - 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7cu));
    /* 0056e3f1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e3f4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e3f7: lea edx, [ebp - 0xf0] */ r_edx = (u32)(r_ebp+0xffffff10u);
    /* 0056e3fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e400: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e405u); f_00570810();
    /* 0056e405: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0056e40c:; BB(0x0056e40c);
    /* 0056e40c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e413: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0056e41a: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e41f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e424u); f_005caba4();
    /* 0056e424: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e425: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e428: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e42a: je 0x56e45c */ if (fZ) goto L_0056e45c;
L_0056e42c:; BB(0x0056e42c);
    /* 0056e42c: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0056e433: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0056e43a: movzx eax, word ptr [ebp - 0x82] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7eu));
    /* 0056e441: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e444: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e447: lea edx, [ebp - 0xcc] */ r_edx = (u32)(r_ebp+0xffffff34u);
    /* 0056e44d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e44e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e44f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e450: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e455u); f_00570810();
    /* 0056e455: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0056e45c:; BB(0x0056e45c);
    /* 0056e45c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e463: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e469: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e46e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e46f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e474u); f_0050b510();
    /* 0056e474: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e477: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e47a: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e481: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e483: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e485: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e48bu); call_ind(t); }
    /* 0056e48b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0056e492: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e497: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e49cu); f_005caba4();
    /* 0056e49c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e49d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e4a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e4a2: je 0x56e4d1 */ if (fZ) goto L_0056e4d1;
L_0056e4a4:; BB(0x0056e4a4);
    /* 0056e4a4: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0056e4ab: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0056e4b2: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 0056e4b6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e4b9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e4bc: lea edx, [ebp - 0xb4] */ r_edx = (u32)(r_ebp+0xffffff4cu);
    /* 0056e4c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e4c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e4c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e4c5: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e4cau); f_00570810();
    /* 0056e4ca: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0056e4d1:; BB(0x0056e4d1);
    /* 0056e4d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e4d8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056e4df: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e4e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e4e9u); f_005caba4();
    /* 0056e4e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e4ea: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e4ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e4ef: je 0x56e51e */ if (fZ) goto L_0056e51e;
L_0056e4f1:; BB(0x0056e4f1);
    /* 0056e4f1: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0056e4f8: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0056e4ff: movzx eax, word ptr [ebp - 0x7e] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff82u));
    /* 0056e503: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e506: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e509: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0056e50f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e510: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e511: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e512: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e517u); f_00570810();
    /* 0056e517: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0056e51e:; BB(0x0056e51e);
    /* 0056e51e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e525: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e52b: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e531: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e536u); f_0050b510();
    /* 0056e536: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e539: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e53c: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e543: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e545: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e547: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e54du); call_ind(t); }
    /* 0056e54d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0056e554: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e559: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e55eu); f_005caba4();
    /* 0056e55e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e55f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e562: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e564: je 0x56e593 */ if (fZ) goto L_0056e593;
L_0056e566:; BB(0x0056e566);
    /* 0056e566: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0056e56d: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0056e574: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 0056e578: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e57b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e57e: lea edx, [ebp - 0xf0] */ r_edx = (u32)(r_ebp+0xffffff10u);
    /* 0056e584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e585: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e586: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e587: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e58cu); f_00570810();
    /* 0056e58c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0056e593:; BB(0x0056e593);
    /* 0056e593: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e59a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0056e5a1: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5a6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e5abu); f_005caba4();
    /* 0056e5ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e5ac: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e5af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e5b1: je 0x56e5e0 */ if (fZ) goto L_0056e5e0;
L_0056e5b3:; BB(0x0056e5b3);
    /* 0056e5b3: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0056e5ba: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0056e5c1: movzx eax, word ptr [ebp - 0x7e] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff82u));
    /* 0056e5c5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e5c8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e5cb: lea edx, [ebp - 0xcc] */ r_edx = (u32)(r_ebp+0xffffff34u);
    /* 0056e5d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5d4: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e5d9u); f_00570810();
    /* 0056e5d9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0056e5e0:; BB(0x0056e5e0);
    /* 0056e5e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e5e7: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e5ed: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5f3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e5f8u); f_0050b510();
    /* 0056e5f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e5fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e5fe: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e605: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e607: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e609: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x56e60fu); call_ind(t); }
    /* 0056e60f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0056e616: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e61b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e620u); f_005caba4();
    /* 0056e620: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e621: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e626: je 0x56e655 */ if (fZ) goto L_0056e655;
L_0056e628:; BB(0x0056e628);
    /* 0056e628: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0056e62f: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0056e636: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 0056e63a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e63d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e640: lea edx, [ebp - 0xb4] */ r_edx = (u32)(r_ebp+0xffffff4cu);
    /* 0056e646: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e648: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e649: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e64eu); f_00570810();
    /* 0056e64e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0056e655:; BB(0x0056e655);
    /* 0056e655: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e65c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0056e663: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e668: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56e66du); f_005caba4();
    /* 0056e66d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e66e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056e671: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e673: je 0x56e6a2 */ if (fZ) goto L_0056e6a2;
L_0056e675:; BB(0x0056e675);
    /* 0056e675: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0056e67c: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0056e683: movzx eax, word ptr [ebp - 0x7e] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff82u));
    /* 0056e687: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e68a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e68d: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0056e693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e695: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e696: call 0x570810 */ r_esp -= 4; W32(r_esp, 0x56e69bu); f_00570810();
    /* 0056e69b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0056e6a2:; BB(0x0056e6a2);
    /* 0056e6a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e6a9: lea eax, [ebp - 0xd8] */ r_eax = (u32)(r_ebp+0xffffff28u);
    /* 0056e6af: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6b5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56e6bau); f_0050b510();
    /* 0056e6ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0056e6bd:; BB(0x0056e6bd);
    /* 0056e6bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e6c0: push 0x12f */ { u32 v = 0x12fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6c5: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56e6cau); f_007879b8();
    /* 0056e6ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e6cd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056e6d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056e6d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6d6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56e6dbu); f_00814298();
    /* 0056e6db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056e6de: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056e6e1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056e6e4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e6e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e6ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056e6f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e6f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e6f4: ret  */ FN_RET(0x0056dee4); r_esp += 4; return;
}

