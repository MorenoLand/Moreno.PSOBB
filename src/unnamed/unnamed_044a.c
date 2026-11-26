#include "protos.h"

void f_0044a0d8(void) /* sub_44A0D8 */
{
    FN_ENTER(0x0044a0d8);
    /* 0044a0d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a0d9: mov esi, ecx */ r_esi = r_ecx;
    /* 0044a0db: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0044a0e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a0e3: je 0x44a0ec */ if (fZ) goto L_0044a0ec;
L_0044a0e5:; BB(0x0044a0e5);
    /* 0044a0e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044a0e8: jne 0x44a165 */ if (!fZ) goto L_0044a165;
L_0044a0ea:; BB(0x0044a0ea);
    /* 0044a0ea: jmp 0x44a10d */ goto L_0044a10d;
L_0044a0ec:; BB(0x0044a0ec);
    /* 0044a0ec: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0044a0ef: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0044a0f9: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a0fe: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0044a101: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 0044a106: mov word ptr [esi + 0x344], dx */ W16((u32)(r_esi+0x344u), (u16)r_edx);
L_0044a10d:; BB(0x0044a10d);
    /* 0044a10d: add dword ptr [esi + 0x394], -1 */ { u32 ad = (u32)(r_esi+0x394u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0044a114: mov ecx, esi */ r_ecx = r_esi;
    /* 0044a116: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x44a11bu); f_007b6894();
    /* 0044a11b: movsx eax, word ptr [esi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x344u));
    /* 0044a122: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a125: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 0044a12c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0044a12f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044a131: jg 0x44a165 */ if ((!fZ&&fS==fO)) goto L_0044a165;
L_0044a133:; BB(0x0044a133);
    /* 0044a133: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0044a136: movzx edx, word ptr [esi + 0x334] */ r_edx = (u32)R16((u32)(r_esi+0x334u));
    /* 0044a13d: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a142: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0044a145: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0044a14b: mov word ptr [esi + 0x346], dx */ W16((u32)(r_esi+0x346u), (u16)r_edx);
    /* 0044a152: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a155: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0044a15b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0044a15d: mov ecx, esi */ r_ecx = r_esi;
    /* 0044a15f: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x44a165u); call_ind(t); }
L_0044a165:; BB(0x0044a165);
    /* 0044a165: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044a166: ret  */ FN_RET(0x0044a0d8); r_esp += 4; return;
}

void f_0044a168(void) /* sub_44A168 */
{
    FN_ENTER(0x0044a168);
    /* 0044a168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a169: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a16a: mov edi, ecx */ r_edi = r_ecx;
    /* 0044a16c: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0044a172: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a174: je 0x44a181 */ if (fZ) goto L_0044a181;
L_0044a176:; BB(0x0044a176);
    /* 0044a176: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044a179: jne 0x44a1ff */ if (!fZ) goto L_0044a1ff;
L_0044a17f:; BB(0x0044a17f);
    /* 0044a17f: jmp 0x44a1d7 */ goto L_0044a1d7;
L_0044a181:; BB(0x0044a181);
    /* 0044a181: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 0044a188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a189: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44a18eu); f_0068d5a8();
    /* 0044a18e: mov ebx, eax */ r_ebx = r_eax;
    /* 0044a190: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a193: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a195: je 0x44a1cd */ if (fZ) goto L_0044a1cd;
L_0044a197:; BB(0x0044a197);
    /* 0044a197: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0044a19e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a1a1: jne 0x44a1c3 */ if (!fZ) goto L_0044a1c3;
L_0044a1a3:; BB(0x0044a1a3);
    /* 0044a1a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a1a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a1a7: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0044a1aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044a1ac: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a1b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a1b2: call 0x6937c8 */ r_esp -= 4; W32(r_esp, 0x44a1b7u); f_006937c8();
    /* 0044a1b7: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0044a1ba: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044a1c0: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_0044a1c3:; BB(0x0044a1c3);
    /* 0044a1c3: mov dword ptr [0xa4479c], 1 */ W32((u32)(0xa4479cu), 0x1u);
L_0044a1cd:; BB(0x0044a1cd);
    /* 0044a1cd: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
L_0044a1d7:; BB(0x0044a1d7);
    /* 0044a1d7: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0044a1dd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a1e0: mov dword ptr [edi + 0x394], eax */ W32((u32)(r_edi+0x394u), r_eax);
    /* 0044a1e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044a1e8: jg 0x44a1ff */ if ((!fZ&&fS==fO)) goto L_0044a1ff;
L_0044a1ea:; BB(0x0044a1ea);
    /* 0044a1ea: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0044a1ed: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0044a1ef: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a1f4: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0044a1f7: mov ecx, edi */ r_ecx = r_edi;
    /* 0044a1f9: call dword ptr [edx + 0x104] */ { u32 t = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, 0x44a1ffu); call_ind(t); }
L_0044a1ff:; BB(0x0044a1ff);
    /* 0044a1ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a200: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044a201: ret  */ FN_RET(0x0044a168); r_esp += 4; return;
}

void f_0044a204(void) /* sub_44A204 */
{
    FN_ENTER(0x0044a204);
    /* 0044a204: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0044a20a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a20c: je 0x44a26f */ if (fZ) goto L_0044a26f;
L_0044a20e:; BB(0x0044a20e);
    /* 0044a20e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a211: jne 0x44a25e */ if (!fZ) goto L_0044a25e;
L_0044a213:; BB(0x0044a213);
    /* 0044a213: fld dword ptr [0xa44c44] */ FPUSH(R_F32((u32)(0xa44c44u)));
    /* 0044a219: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0044a21c: fcom dword ptr [0x8fe894] */ fx_compare(ST(0), R_F32((u32)(0x8fe894u))); 
    /* 0044a222: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044a224: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044a225: jae 0x44a22b */ if (!fC) goto L_0044a22b;
L_0044a227:; BB(0x0044a227);
    /* 0044a227: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0044a22a: ret  */ FN_RET(0x0044a204); r_esp += 4; return;
L_0044a22b:; BB(0x0044a22b);
    /* 0044a22b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044a22d: mov edx, dword ptr [0xa44bbc] */ r_edx = R32((u32)(0xa44bbcu));
    /* 0044a233: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044a235: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0044a238: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0044a23b: add eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a240: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0044a246: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0044a24c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a24f: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0044a255: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044a257: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x44a25du); call_ind(t); }
    /* 0044a25d: ret  */ FN_RET(0x0044a204); r_esp += 4; return;
L_0044a25e:; BB(0x0044a25e);
    /* 0044a25e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044a261: jne 0x44a299 */ if (!fZ) goto L_0044a299;
L_0044a263:; BB(0x0044a263);
    /* 0044a263: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0044a266: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044a26b: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0044a26e: ret  */ FN_RET(0x0044a204); r_esp += 4; return;
L_0044a26f:; BB(0x0044a26f);
    /* 0044a26f: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0044a272: mov dword ptr [ecx + 0x384], 1 */ W32((u32)(r_ecx+0x384u), 0x1u);
    /* 0044a27c: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a281: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a283: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0044a285: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0044a288: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a28b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a28c: push 0x344 */ { u32 v = 0x344u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a291: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44a296u); f_00814298();
    /* 0044a296: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0044a299:; BB(0x0044a299);
    /* 0044a299: ret  */ FN_RET(0x0044a204); r_esp += 4; return;
}

void f_0044a29c(void) /* sub_44A29C */
{
    FN_ENTER(0x0044a29c);
    /* 0044a29c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a29d: mov esi, ecx */ r_esi = r_ecx;
    /* 0044a29f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0044a2a1: mov ecx, esi */ r_ecx = r_esi;
    /* 0044a2a3: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2a8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2ad: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x44a2b0u); call_ind(t); }
    /* 0044a2b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044a2b2: je 0x44a2f6 */ if (fZ) goto L_0044a2f6;
L_0044a2b4:; BB(0x0044a2b4);
    /* 0044a2b4: mov ecx, dword ptr [0xa44c60] */ r_ecx = R32((u32)(0xa44c60u));
    /* 0044a2ba: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44a2bfu); f_00829cc8();
    /* 0044a2bf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44a2c4u); f_0082d7b0();
    /* 0044a2c4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0044a2c9: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a2ce: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0044a2d3: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0044a2d6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44a2dbu); f_0082d838();
    /* 0044a2db: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0044a2de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a2e0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44a2e5u); f_0082d8bc();
    /* 0044a2e5: push dword ptr [0xa44c64] */ { u32 v = R32((u32)(0xa44c64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a2eb: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x44a2f0u); f_0082e1e8();
    /* 0044a2f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044a2f1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44a2f6u); f_0082da80();
L_0044a2f6:; BB(0x0044a2f6);
    /* 0044a2f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044a2f7: ret  */ FN_RET(0x0044a29c); r_esp += 4; return;
}

void f_0044a2f8(void) /* sub_44A2F8 */
{
    FN_ENTER(0x0044a2f8);
    /* 0044a2f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2fa: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a2fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044a2ff: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044a304: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 0044a307: movzx edx, word ptr [ebp + 0x340] */ r_edx = (u32)R16((u32)(r_ebp+0x340u));
    /* 0044a30e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0044a311: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a312: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44a317u); f_0068d5a8();
    /* 0044a317: mov ecx, eax */ r_ecx = r_eax;
    /* 0044a319: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a31c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a31e: je 0x44a345 */ if (fZ) goto L_0044a345;
L_0044a320:; BB(0x0044a320);
    /* 0044a320: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0044a323: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044a325: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0044a329: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044a32b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0044a32f: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 0044a334: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a335: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a337: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a33b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a33d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a340: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x44a343u); call_ind(t); }
    /* 0044a343: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0044a345:; BB(0x0044a345);
    /* 0044a345: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0044a348: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0044a34b: mov dword ptr [ebp + 0x398], 0xf */ W32((u32)(r_ebp+0x398u), 0xfu);
    /* 0044a355: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a35a: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0044a35d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044a35f: call dword ptr [edx + 0x104] */ { u32 t = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, 0x44a365u); call_ind(t); }
    /* 0044a365: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044a368: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a369: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044a36a: ret  */ FN_RET(0x0044a2f8); r_esp += 4; return;
}

void f_0044a36c(void) /* sub_44A36C */
{
    FN_ENTER(0x0044a36c);
    /* 0044a36c: mov ecx, dword ptr [0xa44c5c] */ r_ecx = R32((u32)(0xa44c5cu));
    /* 0044a372: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044a374: je 0x44a37c */ if (fZ) goto L_0044a37c;
L_0044a376:; BB(0x0044a376);
    /* 0044a376: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a378: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044a37a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x44a37cu); call_ind(t); }
L_0044a37c:; BB(0x0044a37c);
    /* 0044a37c: mov dword ptr [0xa44c5c], 0 */ W32((u32)(0xa44c5cu), 0x0u);
    /* 0044a386: ret  */ FN_RET(0x0044a36c); r_esp += 4; return;
}

void f_0044a3b4(void) /* sub_44A3B4 */
{
    FN_ENTER(0x0044a3b4);
    /* 0044a3b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a3b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0044a3b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a3b9: push 0x8ceaf4 */ { u32 v = 0x8ceaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a3be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044a3c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a3c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044a3cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a3cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044a3d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044a3d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044a3d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044a3db: mov eax, dword ptr [0xa447bc] */ r_eax = R32((u32)(0xa447bcu));
    /* 0044a3e0: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0044a3e6: mov ecx, dword ptr [edx + 0x128] */ r_ecx = R32((u32)(r_edx+0x128u));
    /* 0044a3ec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0044a3f3: mov dword ptr [0xa44c64], ecx */ W32((u32)(0xa44c64u), r_ecx);
    /* 0044a3f9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a3fb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x44a400u); f_008581c5();
    /* 0044a400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044a401: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044a404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a406: je 0x44a463 */ if (fZ) goto L_0044a463;
L_0044a408:; BB(0x0044a408);
    /* 0044a408: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0044a40f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044a416: push dword ptr [0xa44c64] */ { u32 v = R32((u32)(0xa44c64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a41c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a41f: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x44a424u); f_00511b74();
    /* 0044a424: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a427: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044a42e:; BB(0x0044a42e);
    /* 0044a42e: mov dword ptr [0xa44c5c], eax */ W32((u32)(0xa44c5cu), r_eax);
    /* 0044a433: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044a43a: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a43c: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x44a441u); f_0077a684();
    /* 0044a441: mov dword ptr [0xa44c58], eax */ W32((u32)(0xa44c58u), r_eax);
    /* 0044a446: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a448: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x44a44du); f_0077a6cc();
    /* 0044a44d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044a450: mov dword ptr [0xa44c54], eax */ W32((u32)(0xa44c54u), r_eax);
    /* 0044a455: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044a458: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044a45f: mov esp, ebp */ r_esp = r_ebp;
    /* 0044a461: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a462: ret  */ FN_RET(0x0044a3b4); r_esp += 4; return;
L_0044a463:; BB(0x0044a463);
    /* 0044a463: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044a465: jmp 0x44a42e */ goto L_0044a42e;
}

void f_0044a468(void) /* sub_44A468 */
{
    FN_ENTER(0x0044a468);
    /* 0044a468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a469: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044a46b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044a46d: call 0x44a48c */ r_esp -= 4; W32(r_esp, 0x44a472u); f_0044a48c();
    /* 0044a472: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044a476: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044a478: jne 0x44a47e */ if (!fZ) goto L_0044a47e;
L_0044a47a:; BB(0x0044a47a);
    /* 0044a47a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a47b: ret 4 */ FN_RET(0x0044a468); r_esp += 8; return;
L_0044a47e:; BB(0x0044a47e);
    /* 0044a47e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a47f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44a484u); f_005c2f74();
    /* 0044a484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044a485: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a486: ret 4 */ FN_RET(0x0044a468); r_esp += 8; return;
}

void f_0044a48c(void) /* sub_44A48C */
{
    FN_ENTER(0x0044a48c);
    /* 0044a48c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a48d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044a48f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a491: push 0x8ceb10 */ { u32 v = 0x8ceb10u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a496: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044a49c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a49d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044a4a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a4a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044a4aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044a4ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044a4b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044a4b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044a4b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044a4bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a4c0: mov dword ptr [ecx], 0xaf6710 */ W32((u32)(r_ecx), 0xaf6710u);
    /* 0044a4c6: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x44a4cbu); f_007b9c8c();
    /* 0044a4cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a4ce: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 0044a4d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a4d6: je 0x44a4f2 */ if (fZ) goto L_0044a4f2;
L_0044a4d8:; BB(0x0044a4d8);
    /* 0044a4d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a4db: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044a4df: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a4e4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044a4e8: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
L_0044a4f2:; BB(0x0044a4f2);
    /* 0044a4f2: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 0044a4f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a4fa: je 0x44a516 */ if (fZ) goto L_0044a516;
L_0044a4fc:; BB(0x0044a4fc);
    /* 0044a4fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a4ff: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044a503: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a508: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044a50c: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
L_0044a516:; BB(0x0044a516);
    /* 0044a516: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0044a519: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a51b: je 0x44a531 */ if (fZ) goto L_0044a531;
L_0044a51d:; BB(0x0044a51d);
    /* 0044a51d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a520: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 0044a526: and eax, 0xffefffff */ {  u32 a = r_eax; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a52b: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
L_0044a531:; BB(0x0044a531);
    /* 0044a531: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044a538: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x44a53du); f_007b4aec();
    /* 0044a53d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044a540: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044a547: mov esp, ebp */ r_esp = r_ebp;
    /* 0044a549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a54a: ret  */ FN_RET(0x0044a48c); r_esp += 4; return;
}

void f_0044a54c(void) /* sub_44A54C */
{
    FN_ENTER(0x0044a54c);
    /* 0044a54c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a54d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044a54f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a551: push 0x8ceb2c */ { u32 v = 0x8ceb2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044a55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a55d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044a564: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044a56a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0044a56d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0044a570: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0044a573: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0044a576: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044a579: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044a57c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0044a57f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0044a582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a583: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044a586: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0044a589: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x44a58eu); f_007b4b48();
    /* 0044a58e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044a595: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044a598: mov dword ptr [ecx], 0xaf6710 */ W32((u32)(r_ecx), 0xaf6710u);
    /* 0044a59e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5a0: push 0x9a560c */ { u32 v = 0x9a560cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5a5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x44a5aau); f_007b9a88();
    /* 0044a5aa: mov edx, ebx */ r_edx = r_ebx;
    /* 0044a5ac: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044a5af: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0044a5b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5b4: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0044a5b8: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5bd: mov word ptr [eax + 0xdc], cx */ W16((u32)(r_eax+0xdcu), (u16)r_ecx);
    /* 0044a5c4: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0044a5c6: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 0044a5c9: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0044a5cc: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 0044a5cf: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0044a5d2: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 0044a5d9: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0044a5dc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044a5df: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 0044a5e5: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044a5e8: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a5eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5ed: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x44a5f2u); f_00509dc4();
    /* 0044a5f2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044a5f5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5f7: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5fc: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 0044a602: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 0044a605: add edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044a608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a60a: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x44a60fu); f_00509dc4();
    /* 0044a60f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a612: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044a615: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0044a61b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0044a620: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x44a625u); f_0082d990();
    /* 0044a625: mov eax, dword ptr [0xa44c54] */ r_eax = R32((u32)(0xa44c54u));
    /* 0044a62a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044a62d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0044a630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a632: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0044a639: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0044a640: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0044a647: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0044a649: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0044a64c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44a651u); f_0082d8bc();
    /* 0044a651: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044a654: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0044a657: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a65c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a65d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a65f: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x44a664u); f_0082eab8();
    /* 0044a664: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44a669u); f_0082da80();
    /* 0044a669: mov edx, dword ptr [0xa44c54] */ r_edx = R32((u32)(0xa44c54u));
    /* 0044a66f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044a672: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044a675: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044a678: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0044a67b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a67e: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 0044a684: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044a687: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044a68e: mov esp, ebp */ r_esp = r_ebp;
    /* 0044a690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a691: ret 0xc */ FN_RET(0x0044a54c); r_esp += 16; return;
}

void f_0044a694(void) /* sub_44A694 */
{
    FN_ENTER(0x0044a694);
    /* 0044a694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a695: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a696: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a697: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a69a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044a69c: push dword ptr [ebp + 0xcc] */ { u32 v = R32((u32)(r_ebp+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a6a2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44a6a7u); f_0068d5a8();
    /* 0044a6a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044a6a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a6aa: je 0x44a711 */ if (fZ) goto L_0044a711;
L_0044a6ac:; BB(0x0044a6ac);
    /* 0044a6ac: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044a6af: mov ebx, dword ptr [eax + 0x300] */ r_ebx = R32((u32)(r_eax+0x300u));
    /* 0044a6b5: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 0044a6bb: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0044a6c1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0044a6c4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0044a6c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0044a6cc: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0044a6cf: mov edx, ebx */ r_edx = r_ebx;
    /* 0044a6d1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44a6d6u); f_0082f9c4();
    /* 0044a6d6: mov edi, dword ptr [0xa44c54] */ r_edi = R32((u32)(0xa44c54u));
    /* 0044a6dc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044a6df: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a6e3: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x44a6e8u); f_0078ea90();
    /* 0044a6e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044a6ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a6ed: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0044a6f0: lea edi, [ebp + 0xb4] */ r_edi = (u32)(r_ebp+0xb4u);
    /* 0044a6f6: mov ecx, edi */ r_ecx = r_edi;
    /* 0044a6f8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44a6fdu); f_0082ebac();
    /* 0044a6fd: mov eax, dword ptr [0xa44c54] */ r_eax = R32((u32)(0xa44c54u));
    /* 0044a702: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a704: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a705: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x44a70au); f_0078ea90();
    /* 0044a70a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044a70c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a70f: jmp 0x44a71a */ goto L_0044a71a;
L_0044a711:; BB(0x0044a711);
    /* 0044a711: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0044a714: lea edi, [ebp + 0xb4] */ r_edi = (u32)(r_ebp+0xb4u);
L_0044a71a:; BB(0x0044a71a);
    /* 0044a71a: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0044a71d: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0044a720: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0044a723: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 0044a726: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0044a729: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 0044a72c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044a72e: mov edx, edi */ r_edx = r_edi;
    /* 0044a730: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44a735u); f_0082ebac();
    /* 0044a735: lea edx, [ebp + 0x60] */ r_edx = (u32)(r_ebp+0x60u);
    /* 0044a738: lea eax, [ebp + 0x64] */ r_eax = (u32)(r_ebp+0x64u);
    /* 0044a73b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a73c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a73d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044a73e: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x44a743u); f_007a8e2c();
    /* 0044a743: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a746: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0044a749: mov ecx, dword ptr [ebp + 0xd4] */ r_ecx = R32((u32)(r_ebp+0xd4u));
    /* 0044a74f: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a754: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 0044a757: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a759: je 0x44a770 */ if (fZ) goto L_0044a770;
L_0044a75b:; BB(0x0044a75b);
    /* 0044a75b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a75c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x44a761u); f_00508db8();
    /* 0044a761: mov ecx, dword ptr [ebp + 0xd4] */ r_ecx = R32((u32)(r_ebp+0xd4u));
    /* 0044a767: lea eax, [ebp + 0x5c] */ r_eax = (u32)(r_ebp+0x5cu);
    /* 0044a76a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a76b: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x44a770u); f_00508dd0();
L_0044a770:; BB(0x0044a770);
    /* 0044a770: mov ecx, dword ptr [ebp + 0xd8] */ r_ecx = R32((u32)(r_ebp+0xd8u));
    /* 0044a776: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a778: je 0x44a78f */ if (fZ) goto L_0044a78f;
L_0044a77a:; BB(0x0044a77a);
    /* 0044a77a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a77b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x44a780u); f_00508db8();
    /* 0044a780: mov ecx, dword ptr [ebp + 0xd8] */ r_ecx = R32((u32)(r_ebp+0xd8u));
    /* 0044a786: lea eax, [ebp + 0x5c] */ r_eax = (u32)(r_ebp+0x5cu);
    /* 0044a789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a78a: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x44a78fu); f_00508dd0();
L_0044a78f:; BB(0x0044a78f);
    /* 0044a78f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a791: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a792: lea eax, [ebp + 0x44] */ r_eax = (u32)(r_ebp+0x44u);
    /* 0044a795: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a796: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x44a79bu); f_0077fffc();
    /* 0044a79b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a79e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a7a0: je 0x44a7b6 */ if (fZ) goto L_0044a7b6;
L_0044a7a2:; BB(0x0044a7a2);
    /* 0044a7a2: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0044a7a6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a7ab: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0044a7af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044a7b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a7b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a7b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044a7b5: ret  */ FN_RET(0x0044a694); r_esp += 4; return;
L_0044a7b6:; BB(0x0044a7b6);
    /* 0044a7b6: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0044a7b9: fcomp dword ptr [0x8fe8e0] */ fx_compare(ST(0), R_F32((u32)(0x8fe8e0u))); FPOP();
    /* 0044a7bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044a7c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044a7c2: jae 0x44a846 */ if (!fC) goto L_0044a846;
L_0044a7c8:; BB(0x0044a7c8);
    /* 0044a7c8: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x44a7cdu); f_007b51c4();
    /* 0044a7cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044a7cf: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x44a7d4u); f_007b6894();
    /* 0044a7d4: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0044a7da: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0044a7dd: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a7e3: je 0x44a846 */ if (fZ) goto L_0044a846;
L_0044a7e5:; BB(0x0044a7e5);
    /* 0044a7e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0044a7e7:; BB(0x0044a7e7);
    /* 0044a7e7: mov edi, dword ptr [eax + 0xaad6e0] */ r_edi = R32((u32)(r_eax+0xaad6e0u));
    /* 0044a7ed: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a7f0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a7f2: je 0x44a846 */ if (fZ) goto L_0044a846;
L_0044a7f4:; BB(0x0044a7f4);
    /* 0044a7f4: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 0044a7fb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a7fe: jne 0x44a841 */ if (!fZ) goto L_0044a841;
L_0044a800:; BB(0x0044a800);
    /* 0044a800: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0044a802: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0044a807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a808: mov ecx, edi */ r_ecx = r_edi;
    /* 0044a80a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a80b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a80d: push dword ptr [0x8fe8cc] */ { u32 v = R32((u32)(0x8fe8ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a813: push dword ptr [0x8fe8c8] */ { u32 v = R32((u32)(0x8fe8c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a819: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a81c: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x44a81fu); call_ind(t); }
    /* 0044a81f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044a821: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0044a824: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a826: je 0x44a832 */ if (fZ) goto L_0044a832;
L_0044a828:; BB(0x0044a828);
    /* 0044a828: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0044a82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a82d: call 0x448660 */ r_esp -= 4; W32(r_esp, 0x44a832u); f_00448660();
L_0044a832:; BB(0x0044a832);
    /* 0044a832: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0044a836: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a83b: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0044a83f: jmp 0x44a846 */ goto L_0044a846;
L_0044a841:; BB(0x0044a841);
    /* 0044a841: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a844: jl 0x44a7e7 */ if ((fS!=fO)) goto L_0044a7e7;
L_0044a846:; BB(0x0044a846);
    /* 0044a846: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0044a84c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a84f: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0044a855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044a857: jle 0x44a870 */ if ((fZ||fS!=fO)) goto L_0044a870;
L_0044a859:; BB(0x0044a859);
    /* 0044a859: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044a85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a85d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a85e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a85f: push 0x357 */ { u32 v = 0x357u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a864: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44a869u); f_008144b0();
    /* 0044a869: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044a86c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a86d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a86e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044a86f: ret  */ FN_RET(0x0044a694); r_esp += 4; return;
L_0044a870:; BB(0x0044a870);
    /* 0044a870: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0044a874: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a879: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0044a87d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044a880: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a882: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044a883: ret  */ FN_RET(0x0044a694); r_esp += 4; return;
}

void f_0044a8b0(void) /* sub_44A8B0 */
{
    FN_ENTER(0x0044a8b0);
    /* 0044a8b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a8b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044a8b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044a8b5: call 0x44a8d4 */ r_esp -= 4; W32(r_esp, 0x44a8bau); f_0044a8d4();
    /* 0044a8ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044a8be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044a8c0: jne 0x44a8c6 */ if (!fZ) goto L_0044a8c6;
L_0044a8c2:; BB(0x0044a8c2);
    /* 0044a8c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a8c3: ret 4 */ FN_RET(0x0044a8b0); r_esp += 8; return;
L_0044a8c6:; BB(0x0044a8c6);
    /* 0044a8c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a8c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x44a8ccu); f_005c2f74();
    /* 0044a8cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044a8cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044a8ce: ret 4 */ FN_RET(0x0044a8b0); r_esp += 8; return;
}

void f_0044a8d4(void) /* sub_44A8D4 */
{
    FN_ENTER(0x0044a8d4);
    /* 0044a8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a8d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0044a8d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a8d9: push 0x8ceb48 */ { u32 v = 0x8ceb48u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a8de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044a8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a8e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044a8ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a8ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044a8f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044a8f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044a8f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044a8fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044a8fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044a905: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a908: mov dword ptr [ecx], 0xaf6790 */ W32((u32)(r_ecx), 0xaf6790u);
    /* 0044a90e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x44a913u); f_007b9c8c();
    /* 0044a913: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a916: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0044a91c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a91e: je 0x44a93a */ if (fZ) goto L_0044a93a;
L_0044a920:; BB(0x0044a920);
    /* 0044a920: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044a923: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044a927: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044a92c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044a930: mov dword ptr [ecx + 0xe0], 0 */ W32((u32)(r_ecx+0xe0u), 0x0u);
L_0044a93a:; BB(0x0044a93a);
    /* 0044a93a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044a941: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x44a946u); f_007b4aec();
    /* 0044a946: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044a949: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044a950: mov esp, ebp */ r_esp = r_ebp;
    /* 0044a952: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a953: ret  */ FN_RET(0x0044a8d4); r_esp += 4; return;
}

void f_0044a954(void) /* sub_44A954 */
{
    FN_ENTER(0x0044a954);
    /* 0044a954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a955: mov ebp, esp */ r_ebp = r_esp;
    /* 0044a957: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a959: push 0x8ceb64 */ { u32 v = 0x8ceb64u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a95e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044a964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a965: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044a96c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a96f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044a972: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0044a975: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0044a978: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0044a97b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044a97e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044a981: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044a984: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0044a987: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044a98a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0044a98d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0044a990: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044a993: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x44a998u); f_007b4b48();
    /* 0044a998: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044a99f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044a9a2: mov dword ptr [ecx], 0xaf6790 */ W32((u32)(r_ecx), 0xaf6790u);
    /* 0044a9a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a9aa: push 0x9a563c */ { u32 v = 0x9a563cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044a9af: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x44a9b4u); f_007b9a88();
    /* 0044a9b4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044a9b7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044a9ba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044a9bd: mov ebx, dword ptr [edx + 0xa4] */ r_ebx = R32((u32)(r_edx+0xa4u));
    /* 0044a9c3: mov dword ptr [ebx + 0xc], 0x40a00000 */ W32((u32)(r_ebx+0xcu), 0x40a00000u);
    /* 0044a9ca: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0044a9cc: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 0044a9cf: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0044a9d2: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0044a9d5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0044a9d8: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 0044a9df: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0044a9e2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044a9e5: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 0044a9ef: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 0044a9f5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044a9f8: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 0044aa02: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0044aa05: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0044aa0a: mov edx, dword ptr [0xa44bbc] */ r_edx = R32((u32)(0xa44bbcu));
    /* 0044aa10: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044aa12: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 0044aa18: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x44aa1du); f_0082d990();
    /* 0044aa1d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044aa20: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0044aa23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044aa25: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44aa2au); f_0082d8bc();
    /* 0044aa2a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044aa2d: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0044aa30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044aa32: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x44aa37u); f_0082e9e4();
    /* 0044aa37: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044aa3a: add edx, 0xb4 */ {  u32 a = r_edx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044aa40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044aa41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044aa43: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x44aa48u); f_00830aa0();
    /* 0044aa48: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44aa4du); f_0082da80();
    /* 0044aa4d: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044aa50: mov ebx, dword ptr [0xa447bc] */ r_ebx = R32((u32)(0xa447bcu));
    /* 0044aa56: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aa58: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 0044aa5e: mov ecx, dword ptr [edx + 0x168] */ r_ecx = R32((u32)(r_edx+0x168u));
    /* 0044aa64: push 0x112 */ { u32 v = 0x112u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aa69: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 0044aa6f: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0044aa75: mov edi, dword ptr [esi + 0x16c] */ r_edi = R32((u32)(r_esi+0x16cu));
    /* 0044aa7b: mov dword ptr [eax + 0xb0], edi */ W32((u32)(r_eax+0xb0u), r_edi);
    /* 0044aa81: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044aa83: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 0044aa89: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 0044aa8f: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0044aa95: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 0044aa9b: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044aa9e: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044aaa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044aaa4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044aaa5: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x44aaaau); f_00509dc4();
    /* 0044aaaa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044aaad: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044aab0: mov edx, dword ptr [0xa44bbc] */ r_edx = R32((u32)(0xa44bbcu));
    /* 0044aab6: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044aab9: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044aabc: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 0044aac2: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0044aac5: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0044aac8: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0044aacc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044aad1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044aad4: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0044aad7: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044aada: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0044aadd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044aae0: add ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044aae6: mov eax, ebx */ r_eax = r_ebx;
    /* 0044aae8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044aaeb: mov dword ptr [0xa44c7c], ecx */ W32((u32)(0xa44c7cu), r_ecx);
    /* 0044aaf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044aaf4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044aafb: mov esp, ebp */ r_esp = r_ebp;
    /* 0044aafd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044aafe: ret 0x10 */ FN_RET(0x0044a954); r_esp += 20; return;
}

void f_0044ab04(void) /* sub_44AB04 */
{
    FN_ENTER(0x0044ab04);
    /* 0044ab04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab07: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ab0a: mov esi, ecx */ r_esi = r_ecx;
    /* 0044ab0c: push dword ptr [esi + 0xcc] */ { u32 v = R32((u32)(r_esi+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ab12: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44ab17u); f_0068d5a8();
    /* 0044ab17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ab18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ab1a: je 0x44ab81 */ if (fZ) goto L_0044ab81;
L_0044ab1c:; BB(0x0044ab1c);
    /* 0044ab1c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044ab1f: mov ebp, dword ptr [eax + 0x300] */ r_ebp = R32((u32)(r_eax+0x300u));
    /* 0044ab25: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 0044ab2b: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0044ab31: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0044ab34: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0044ab38: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0044ab3c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0044ab3f: mov edx, ebp */ r_edx = r_ebp;
    /* 0044ab41: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44ab46u); f_0082f9c4();
    /* 0044ab46: mov edi, dword ptr [0xa44bbc] */ r_edi = R32((u32)(0xa44bbcu));
    /* 0044ab4c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044ab4f: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ab52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab53: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x44ab58u); f_0078ea90();
    /* 0044ab58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044ab5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ab5d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0044ab60: lea edi, [esi + 0xb4] */ r_edi = (u32)(r_esi+0xb4u);
    /* 0044ab66: mov ecx, edi */ r_ecx = r_edi;
    /* 0044ab68: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44ab6du); f_0082ebac();
    /* 0044ab6d: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044ab72: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ab74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab75: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x44ab7au); f_0078ea90();
    /* 0044ab7a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044ab7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ab7f: jmp 0x44ab8a */ goto L_0044ab8a;
L_0044ab81:; BB(0x0044ab81);
    /* 0044ab81: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0044ab84: lea edi, [esi + 0xb4] */ r_edi = (u32)(r_esi+0xb4u);
L_0044ab8a:; BB(0x0044ab8a);
    /* 0044ab8a: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0044ab8d: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0044ab90: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0044ab93: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 0044ab96: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0044ab99: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0044ab9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044ab9e: mov edx, edi */ r_edx = r_edi;
    /* 0044aba0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44aba5u); f_0082ebac();
    /* 0044aba5: lea edx, [esi + 0x5c] */ r_edx = (u32)(r_esi+0x5cu);
    /* 0044aba8: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 0044abab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044abac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044abad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044abae: call 0x7a8d04 */ r_esp -= 4; W32(r_esp, 0x44abb3u); f_007a8d04();
    /* 0044abb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044abb6: mov eax, dword ptr [esi + 0xe0] */ r_eax = R32((u32)(r_esi+0xe0u));
    /* 0044abbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044abbe: je 0x44ac6f */ if (fZ) goto L_0044ac6f;
L_0044abc4:; BB(0x0044abc4);
    /* 0044abc4: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0044abc8: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0044abce: mov edi, dword ptr [esi + 0xb8] */ r_edi = R32((u32)(r_esi+0xb8u));
    /* 0044abd4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0044abd8: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0044abde: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0044abe2: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0044abe6: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0044abea: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044abee: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0044abf2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0044abf4: fchs  */ ST(0) = -ST(0);
    /* 0044abf6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0044abfa: fchs  */ ST(0) = -ST(0);
    /* 0044abfc: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0044ac00: fchs  */ ST(0) = -ST(0);
    /* 0044ac02: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0044ac06: lea edi, [esi + 0xe8] */ r_edi = (u32)(r_esi+0xe8u);
    /* 0044ac0c: lea eax, [esi + 0xec] */ r_eax = (u32)(r_esi+0xecu);
    /* 0044ac12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac13: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac15: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x44ac1au); f_007a8e2c();
    /* 0044ac1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ac1d: mov eax, dword ptr [esi + 0xec] */ r_eax = R32((u32)(r_esi+0xecu));
    /* 0044ac23: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 0044ac29: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ac2e: mov dword ptr [esi + 0xec], eax */ W32((u32)(r_esi+0xecu), r_eax);
    /* 0044ac34: lea edi, [esi + 0xe4] */ r_edi = (u32)(r_esi+0xe4u);
    /* 0044ac3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac3b: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x44ac40u); f_00508dd0();
    /* 0044ac40: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0044ac44: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac4a: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x44ac4fu); f_0078ea90();
    /* 0044ac4f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044ac51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ac54: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0044ac58: mov edx, ebp */ r_edx = r_ebp;
    /* 0044ac5a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x44ac5fu); f_0082ebac();
    /* 0044ac5f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0044ac63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac64: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 0044ac6a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x44ac6fu); f_00508db8();
L_0044ac6f:; BB(0x0044ac6f);
    /* 0044ac6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac71: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac72: lea eax, [esi + 0x44] */ r_eax = (u32)(r_esi+0x44u);
    /* 0044ac75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac76: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x44ac7bu); f_0077fffc();
    /* 0044ac7b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ac7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ac80: je 0x44ad6d */ if (fZ) goto L_0044ad6d;
L_0044ac86:; BB(0x0044ac86);
    /* 0044ac86: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044ac8b: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 0044ac8e: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0044ac93: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0044ac97: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044ac99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ac9b: je 0x44acc0 */ if (fZ) goto L_0044acc0;
L_0044ac9d:; BB(0x0044ac9d);
    /* 0044ac9d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44aca2u); f_008587a5();
    /* 0044aca2: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0044aca6: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0044acaa: fdiv dword ptr [0x8fe900] */ ST(0) = ST(0) / R_F32((u32)(0x8fe900u));
    /* 0044acb0: fcomp dword ptr [0x8fe8f8] */ fx_compare(ST(0), R_F32((u32)(0x8fe8f8u))); FPOP();
    /* 0044acb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044acb8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044acb9: jae 0x44acc0 */ if (!fC) goto L_0044acc0;
L_0044acbb:; BB(0x0044acbb);
    /* 0044acbb: mov edi, 0x11 */ r_edi = 0x11u;
L_0044acc0:; BB(0x0044acc0);
    /* 0044acc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044acc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044acc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044acc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044acc5: push 0x34f */ { u32 v = 0x34fu; r_esp -= 4; W32(r_esp, v); }
    /* 0044acca: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44accfu); f_00814298();
    /* 0044accf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044acd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044acd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044acd3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044acd4: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0044acd6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44acdbu); f_00814298();
    /* 0044acdb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044acde: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044ace4: mov dword ptr [eax + 0xc], 0x41700000 */ W32((u32)(r_eax+0xcu), 0x41700000u);
    /* 0044aceb: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x44acf0u); f_007b51c4();
    /* 0044acf0: mov ecx, esi */ r_ecx = r_esi;
    /* 0044acf2: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x44acf7u); f_007b6894();
    /* 0044acf7: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044acfd: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0044ad00: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ad05: je 0x44ad4e */ if (fZ) goto L_0044ad4e;
L_0044ad07:; BB(0x0044ad07);
    /* 0044ad07: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0044ad0b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0044ad0f: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0044ad13: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0044ad15:; BB(0x0044ad15);
    /* 0044ad15: mov ecx, dword ptr [edi + 0xaad6e0] */ r_ecx = R32((u32)(r_edi+0xaad6e0u));
    /* 0044ad1b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044ad1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ad20: je 0x44ad4e */ if (fZ) goto L_0044ad4e;
L_0044ad22:; BB(0x0044ad22);
    /* 0044ad22: movzx eax, word ptr [ecx + 0x96] */ r_eax = (u32)R16((u32)(r_ecx+0x96u));
    /* 0044ad29: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ad2c: jne 0x44ad49 */ if (!fZ) goto L_0044ad49;
L_0044ad2e:; BB(0x0044ad2e);
    /* 0044ad2e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044ad30: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0044ad35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad39: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ad3d: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ad41: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ad44: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x44ad47u); call_ind(t); }
    /* 0044ad47: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0044ad49:; BB(0x0044ad49);
    /* 0044ad49: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ad4c: jl 0x44ad15 */ if ((fS!=fO)) goto L_0044ad15;
L_0044ad4e:; BB(0x0044ad4e);
    /* 0044ad4e: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad53: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad54: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44ad59u); f_0050b510();
    /* 0044ad59: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0044ad5d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044ad62: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0044ad66: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044ad69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ad6a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044ad6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044ad6c: ret  */ FN_RET(0x0044ab04); r_esp += 4; return;
L_0044ad6d:; BB(0x0044ad6d);
    /* 0044ad6d: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044ad73: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0044ad76: and edi, 0xfffffff9 */ {  u32 a = r_edi; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0044ad79: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 0044ad7c: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 0044ad82: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0044ad85: fcomp dword ptr [0x8fe8fc] */ fx_compare(ST(0), R_F32((u32)(0x8fe8fcu))); FPOP();
    /* 0044ad8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ad8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044ad8e: jae 0x44ad9b */ if (!fC) goto L_0044ad9b;
L_0044ad90:; BB(0x0044ad90);
    /* 0044ad90: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0044ad93: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044ad96: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0044ad99: jmp 0x44ada4 */ goto L_0044ada4;
L_0044ad9b:; BB(0x0044ad9b);
    /* 0044ad9b: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0044ad9e: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044ada1: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_0044ada4:; BB(0x0044ada4);
    /* 0044ada4: mov ecx, esi */ r_ecx = r_esi;
    /* 0044ada6: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x44adabu); f_007b6894();
    /* 0044adab: mov ecx, esi */ r_ecx = r_esi;
    /* 0044adad: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x44adb2u); f_007b798c();
    /* 0044adb2: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044adb8: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0044adbb: test edi, 0x180000 */ {  u32 a = r_edi; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044adc1: jne 0x44aee0 */ if (!fZ) goto L_0044aee0;
L_0044adc7:; BB(0x0044adc7);
    /* 0044adc7: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0044adcd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044add0: cmp eax, dword ptr [0xa44c7c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44c7cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044add6: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 0044addc: jle 0x44aec9 */ if ((fZ||fS!=fO)) goto L_0044aec9;
L_0044ade2:; BB(0x0044ade2);
    /* 0044ade2: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044ade7: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 0044adea: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0044adef: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0044adf3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044adf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044adf7: je 0x44ae1c */ if (fZ) goto L_0044ae1c;
L_0044adf9:; BB(0x0044adf9);
    /* 0044adf9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44adfeu); f_008587a5();
    /* 0044adfe: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0044ae02: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0044ae06: fdiv dword ptr [0x8fe900] */ ST(0) = ST(0) / R_F32((u32)(0x8fe900u));
    /* 0044ae0c: fcomp dword ptr [0x8fe8f8] */ fx_compare(ST(0), R_F32((u32)(0x8fe8f8u))); FPOP();
    /* 0044ae12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ae14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044ae15: jae 0x44ae1c */ if (!fC) goto L_0044ae1c;
L_0044ae17:; BB(0x0044ae17);
    /* 0044ae17: mov edi, 0x11 */ r_edi = 0x11u;
L_0044ae1c:; BB(0x0044ae1c);
    /* 0044ae1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ae1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae21: push 0x34f */ { u32 v = 0x34fu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae26: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44ae2bu); f_00814298();
    /* 0044ae2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ae2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae30: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae32: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44ae37u); f_00814298();
    /* 0044ae37: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ae3a: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044ae40: mov dword ptr [eax + 0xc], 0x41700000 */ W32((u32)(r_eax+0xcu), 0x41700000u);
    /* 0044ae47: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x44ae4cu); f_007b51c4();
    /* 0044ae4c: mov ecx, esi */ r_ecx = r_esi;
    /* 0044ae4e: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x44ae53u); f_007b6894();
    /* 0044ae53: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044ae59: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0044ae5c: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ae61: je 0x44aeaa */ if (fZ) goto L_0044aeaa;
L_0044ae63:; BB(0x0044ae63);
    /* 0044ae63: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0044ae67: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0044ae6b: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0044ae6f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0044ae71:; BB(0x0044ae71);
    /* 0044ae71: mov ecx, dword ptr [edi + 0xaad6e0] */ r_ecx = R32((u32)(r_edi+0xaad6e0u));
    /* 0044ae77: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044ae7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ae7c: je 0x44aeaa */ if (fZ) goto L_0044aeaa;
L_0044ae7e:; BB(0x0044ae7e);
    /* 0044ae7e: movzx eax, word ptr [ecx + 0x96] */ r_eax = (u32)R16((u32)(r_ecx+0x96u));
    /* 0044ae85: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ae88: jne 0x44aea5 */ if (!fZ) goto L_0044aea5;
L_0044ae8a:; BB(0x0044ae8a);
    /* 0044ae8a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044ae8c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0044ae91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae95: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ae99: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044ae9d: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044aea0: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x44aea3u); call_ind(t); }
    /* 0044aea3: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0044aea5:; BB(0x0044aea5);
    /* 0044aea5: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044aea8: jl 0x44ae71 */ if ((fS!=fO)) goto L_0044ae71;
L_0044aeaa:; BB(0x0044aeaa);
    /* 0044aeaa: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0044aeaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044aeb0: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44aeb5u); f_0050b510();
    /* 0044aeb5: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0044aeb9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044aebe: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0044aec2: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044aec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044aec6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044aec7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044aec8: ret  */ FN_RET(0x0044ab04); r_esp += 4; return;
L_0044aec9:; BB(0x0044aec9);
    /* 0044aec9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044aecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044aecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044aecd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044aece: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044aecf: push 0x34e */ { u32 v = 0x34eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044aed4: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44aed9u); f_008144b0();
    /* 0044aed9: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044aedc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044aedd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044aede: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044aedf: ret  */ FN_RET(0x0044ab04); r_esp += 4; return;
L_0044aee0:; BB(0x0044aee0);
    /* 0044aee0: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044aee5: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 0044aee8: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0044aeed: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0044aef1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044aef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044aef5: je 0x44af1a */ if (fZ) goto L_0044af1a;
L_0044aef7:; BB(0x0044aef7);
    /* 0044aef7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44aefcu); f_008587a5();
    /* 0044aefc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0044af00: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0044af04: fdiv dword ptr [0x8fe900] */ ST(0) = ST(0) / R_F32((u32)(0x8fe900u));
    /* 0044af0a: fcomp dword ptr [0x8fe8f8] */ fx_compare(ST(0), R_F32((u32)(0x8fe8f8u))); FPOP();
    /* 0044af10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044af12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044af13: jae 0x44af1a */ if (!fC) goto L_0044af1a;
L_0044af15:; BB(0x0044af15);
    /* 0044af15: mov edi, 0x11 */ r_edi = 0x11u;
L_0044af1a:; BB(0x0044af1a);
    /* 0044af1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044af1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044af1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044af1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044af1f: push 0x34f */ { u32 v = 0x34fu; r_esp -= 4; W32(r_esp, v); }
    /* 0044af24: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44af29u); f_00814298();
    /* 0044af29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044af2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044af2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044af2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044af2e: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0044af30: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44af35u); f_00814298();
    /* 0044af35: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044af38: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044af3e: mov dword ptr [eax + 0xc], 0x41700000 */ W32((u32)(r_eax+0xcu), 0x41700000u);
    /* 0044af45: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x44af4au); f_007b51c4();
    /* 0044af4a: mov ecx, esi */ r_ecx = r_esi;
    /* 0044af4c: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x44af51u); f_007b6894();
    /* 0044af51: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0044af57: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0044af5a: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044af5f: je 0x44afa8 */ if (fZ) goto L_0044afa8;
L_0044af61:; BB(0x0044af61);
    /* 0044af61: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0044af65: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0044af69: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0044af6d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0044af6f:; BB(0x0044af6f);
    /* 0044af6f: mov ecx, dword ptr [edi + 0xaad6e0] */ r_ecx = R32((u32)(r_edi+0xaad6e0u));
    /* 0044af75: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044af78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044af7a: je 0x44afa8 */ if (fZ) goto L_0044afa8;
L_0044af7c:; BB(0x0044af7c);
    /* 0044af7c: movzx eax, word ptr [ecx + 0x96] */ r_eax = (u32)R16((u32)(r_ecx+0x96u));
    /* 0044af83: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044af86: jne 0x44afa3 */ if (!fZ) goto L_0044afa3;
L_0044af88:; BB(0x0044af88);
    /* 0044af88: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044af8a: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0044af8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044af90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044af91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044af93: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044af97: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044af9b: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044af9e: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x44afa1u); call_ind(t); }
    /* 0044afa1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0044afa3:; BB(0x0044afa3);
    /* 0044afa3: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044afa6: jl 0x44af6f */ if ((fS!=fO)) goto L_0044af6f;
L_0044afa8:; BB(0x0044afa8);
    /* 0044afa8: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0044afad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044afae: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x44afb3u); f_0050b510();
    /* 0044afb3: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0044afb7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044afbc: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0044afc0: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044afc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044afc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044afc5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044afc6: ret  */ FN_RET(0x0044ab04); r_esp += 4; return;
}

void f_0044afc8(void) /* sub_44AFC8 */
{
    FN_ENTER(0x0044afc8);
    /* 0044afc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044afc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044afcb: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0044afd1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44afd6u); f_00829cc8();
    /* 0044afd6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x44afdbu); f_0082d7b0();
    /* 0044afdb: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0044afde: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44afe3u); f_0082d838();
    /* 0044afe3: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0044afe6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044afe8: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x44afedu); f_0082e9e4();
    /* 0044afed: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0044aff0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044aff2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44aff7u); f_0082d8bc();
    /* 0044aff7: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0044affc: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0044b002: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044b007: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0044b00c: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x44b011u); f_0082e1e8();
    /* 0044b011: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044b012: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44b017u); f_0082da80();
    /* 0044b017: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044b018: ret  */ FN_RET(0x0044afc8); r_esp += 4; return;
}

