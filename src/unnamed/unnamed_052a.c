#include "protos.h"

void f_0052a08c(void) /* sub_52A08C */
{
    FN_ENTER(0x0052a08c);
    /* 0052a08c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052a08d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a08e: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052a091: mov esi, ecx */ r_esi = r_ecx;
    /* 0052a093: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 0052a099: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a09b: jne 0x52a15f */ if (!fZ) goto L_0052a15f;
L_0052a0a1:; BB(0x0052a0a1);
    /* 0052a0a1: mov edx, dword ptr [esi + 0xf4] */ r_edx = R32((u32)(r_esi+0xf4u));
    /* 0052a0a7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052a0aa: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0052a0ae: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0052a0b2: fcomp dword ptr [0x9221b8] */ fx_compare(ST(0), R_F32((u32)(0x9221b8u))); FPOP();
    /* 0052a0b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052a0ba: mov dword ptr [esi + 0xf4], edx */ W32((u32)(r_esi+0xf4u), r_edx);
    /* 0052a0c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052a0c1: jae 0x52a14c */ if (!fC) goto L_0052a14c;
L_0052a0c7:; BB(0x0052a0c7);
    /* 0052a0c7: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a0ca: jl 0x52a0de */ if ((fS!=fO)) goto L_0052a0de;
L_0052a0cc:; BB(0x0052a0cc);
    /* 0052a0cc: fld dword ptr [esi + 0xf0] */ FPUSH(R_F32((u32)(r_esi+0xf0u)));
    /* 0052a0d2: fsub dword ptr [0x9221b4] */ ST(0) = ST(0) - R_F32((u32)(0x9221b4u));
    /* 0052a0d8: fstp dword ptr [esi + 0xf0] */ W_F32((u32)(r_esi+0xf0u), ST(0)); FPOP();
L_0052a0de:; BB(0x0052a0de);
    /* 0052a0de: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052a0e1: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0052a0e7: mov ebx, dword ptr [esi + 0xb8] */ r_ebx = R32((u32)(r_esi+0xb8u));
    /* 0052a0ed: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052a0f0: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0052a0f6: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0052a0fa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052a0fe: lea edx, [esi + 0xcc] */ r_edx = (u32)(r_esi+0xccu);
    /* 0052a104: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52a109u); f_0082ebac();
    /* 0052a109: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0052a10d: fsub dword ptr [0x9221b0] */ ST(0) = ST(0) - R_F32((u32)(0x9221b0u));
    /* 0052a113: fadd dword ptr [esi + 0xf0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xf0u));
    /* 0052a119: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052a11d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052a120: lea ebx, [esi + 0xb4] */ r_ebx = (u32)(r_esi+0xb4u);
    /* 0052a126: push 0x1eff */ { u32 v = 0x1effu; r_esp -= 4; W32(r_esp, v); }
    /* 0052a12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a12c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a12d: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x52a132u); f_0077fffc();
    /* 0052a132: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052a135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a137: je 0x52a181 */ if (fZ) goto L_0052a181;
L_0052a139:; BB(0x0052a139);
    /* 0052a139: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0052a13d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a142: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0052a146: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a149: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a14a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052a14b: ret  */ FN_RET(0x0052a08c); r_esp += 4; return;
L_0052a14c:; BB(0x0052a14c);
    /* 0052a14c: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0052a150: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a155: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0052a159: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a15c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a15d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052a15e: ret  */ FN_RET(0x0052a08c); r_esp += 4; return;
L_0052a15f:; BB(0x0052a15f);
    /* 0052a15f: lea ebx, [esi + 0xb4] */ r_ebx = (u32)(r_esi+0xb4u);
L_0052a165:; BB(0x0052a165);
    /* 0052a165: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 0052a16b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a16d: je 0x52a2d6 */ if (fZ) goto L_0052a2d6;
L_0052a173:; BB(0x0052a173);
    /* 0052a173: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a174: mov ecx, eax */ r_ecx = r_eax;
    /* 0052a176: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52a17bu); f_00508db8();
L_0052a17b:; BB(0x0052a17b);
    /* 0052a17b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a17e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a17f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052a180: ret  */ FN_RET(0x0052a08c); r_esp += 4; return;
L_0052a181:; BB(0x0052a181);
    /* 0052a181: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 0052a186: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a187: fld dword ptr [esi + 0xb4] */ FPUSH(R_F32((u32)(r_esi+0xb4u)));
    /* 0052a18d: fadd dword ptr [esi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc0u));
    /* 0052a193: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 0052a199: fadd dword ptr [esi + 0xf0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xf0u));
    /* 0052a19f: fld dword ptr [esi + 0xbc] */ FPUSH(R_F32((u32)(r_esi+0xbcu)));
    /* 0052a1a5: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 0052a1ab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0052a1ad: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
    /* 0052a1b3: fstp dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0)); FPOP();
    /* 0052a1b9: fstp dword ptr [esi + 0xbc] */ W_F32((u32)(r_esi+0xbcu), ST(0)); FPOP();
    /* 0052a1bf: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x52a1c4u); f_00780630();
    /* 0052a1c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052a1c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a1c9: je 0x52a2c4 */ if (fZ) goto L_0052a2c4;
L_0052a1cf:; BB(0x0052a1cf);
    /* 0052a1cf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0052a1d2: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0052a1d5: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0052a1d8: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0052a1db: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0052a1de: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0052a1e1: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 0052a1e7: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0052a1ea: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 0052a1f0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0052a1f3: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 0052a1f9: mov dword ptr [esi + 0x100], 1 */ W32((u32)(r_esi+0x100u), 0x1u);
L_0052a203:; BB(0x0052a203);
    /* 0052a203: fsubr dword ptr [esi + 0xb8] */ ST(0) = R_F32((u32)(r_esi+0xb8u)) - ST(0);
    /* 0052a209: mov edx, dword ptr [esi + 0xb4] */ r_edx = R32((u32)(r_esi+0xb4u));
    /* 0052a20f: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0052a215: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0052a218: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0052a21e: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0052a221: fcom dword ptr [0x9221ac] */ fx_compare(ST(0), R_F32((u32)(0x9221acu))); 
    /* 0052a227: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052a229: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052a22a: jbe 0x52a246 */ if ((fC||fZ)) goto L_0052a246;
L_0052a22c:; BB(0x0052a22c);
    /* 0052a22c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0052a22f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a232: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0052a235: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0052a23b: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0052a23e: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052a241: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0052a244: jmp 0x52a25e */ goto L_0052a25e;
L_0052a246:; BB(0x0052a246);
    /* 0052a246: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0052a249: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052a24c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0052a24f: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0052a255: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0052a258: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0052a25b: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
L_0052a25e:; BB(0x0052a25e);
    /* 0052a25e: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0052a264: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0052a267: mov edx, dword ptr [esi + 0xf4] */ r_edx = R32((u32)(r_esi+0xf4u));
    /* 0052a26d: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a270: jl 0x52a281 */ if ((fS!=fO)) goto L_0052a281;
L_0052a272:; BB(0x0052a272);
    /* 0052a272: mov eax, dword ptr [esi + 0xe8] */ r_eax = R32((u32)(r_esi+0xe8u));
    /* 0052a278: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a27b: mov dword ptr [esi + 0xe8], eax */ W32((u32)(r_esi+0xe8u), r_eax);
L_0052a281:; BB(0x0052a281);
    /* 0052a281: push 0x9bc384 */ { u32 v = 0x9bc384u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a286: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0052a288: lea eax, [esi + 0xe4] */ r_eax = (u32)(r_esi+0xe4u);
    /* 0052a28e: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a291: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x52a294u); call_ind(t); }
    /* 0052a294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a296: je 0x52a165 */ if (fZ) goto L_0052a165;
L_0052a29c:; BB(0x0052a29c);
    /* 0052a29c: movzx eax, word ptr [esi + 0xb0] */ r_eax = (u32)R16((u32)(r_esi+0xb0u));
    /* 0052a2a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a2a4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x52a2a9u); f_007b4d18();
    /* 0052a2a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a2aa: mov ecx, eax */ r_ecx = r_eax;
    /* 0052a2ac: call 0x529c78 */ r_esp -= 4; W32(r_esp, 0x52a2b1u); f_00529c78();
    /* 0052a2b1: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0052a2b5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a2ba: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0052a2be: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a2c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a2c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052a2c3: ret  */ FN_RET(0x0052a08c); r_esp += 4; return;
L_0052a2c4:; BB(0x0052a2c4);
    /* 0052a2c4: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0052a2c7: mov dword ptr [esi + 0x100], 0 */ W32((u32)(r_esi+0x100u), 0x0u);
    /* 0052a2d1: jmp 0x52a203 */ goto L_0052a203;
L_0052a2d6:; BB(0x0052a2d6);
    /* 0052a2d6: mov eax, dword ptr [esi + 0xec] */ r_eax = R32((u32)(r_esi+0xecu));
    /* 0052a2dc: mov dword ptr [esp + 0xc], 0x8000 */ W32((u32)(r_esp+0xcu), 0x8000u);
    /* 0052a2e4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0052a2e8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0052a2f0: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0052a2f4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a2f6: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a2fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a2fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a2fd: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x52a302u); f_00509dc4();
    /* 0052a302: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052a305: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 0052a30b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a30d: je 0x52a17b */ if (fZ) goto L_0052a17b;
L_0052a313:; BB(0x0052a313);
    /* 0052a313: mov ecx, eax */ r_ecx = r_eax;
    /* 0052a315: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x52a31au); f_00508f48();
    /* 0052a31a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a31d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a31e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052a31f: ret  */ FN_RET(0x0052a08c); r_esp += 4; return;
}

void f_0052a320(void) /* sub_52A320 */
{
    FN_ENTER(0x0052a320);
    /* 0052a320: mov eax, dword ptr [ecx + 0x100] */ r_eax = R32((u32)(r_ecx+0x100u));
    /* 0052a326: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052a328: je 0x52a341 */ if (fZ) goto L_0052a341;
L_0052a32a:; BB(0x0052a32a);
    /* 0052a32a: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0052a32d: add ecx, 0xd8 */ {  u32 a = r_ecx; u32 b = 0xd8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052a335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a337: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a339: call 0x520d18 */ r_esp -= 4; W32(r_esp, 0x52a33eu); f_00520d18();
    /* 0052a33e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0052a341:; BB(0x0052a341);
    /* 0052a341: ret  */ FN_RET(0x0052a320); r_esp += 4; return;
}

void f_0052a38c(void) /* sub_52A38C */
{
    FN_ENTER(0x0052a38c);
    /* 0052a38c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a38d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052a38f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052a391: call 0x52a3b0 */ r_esp -= 4; W32(r_esp, 0x52a396u); f_0052a3b0();
    /* 0052a396: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052a39a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052a39c: jne 0x52a3a2 */ if (!fZ) goto L_0052a3a2;
L_0052a39e:; BB(0x0052a39e);
    /* 0052a39e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a39f: ret 4 */ FN_RET(0x0052a38c); r_esp += 8; return;
L_0052a3a2:; BB(0x0052a3a2);
    /* 0052a3a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a3a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x52a3a8u); f_005c2f74();
    /* 0052a3a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a3a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a3aa: ret 4 */ FN_RET(0x0052a38c); r_esp += 8; return;
}

void f_0052a3b0(void) /* sub_52A3B0 */
{
    FN_ENTER(0x0052a3b0);
    /* 0052a3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052a3b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052a3b5: push 0x8d4b78 */ { u32 v = 0x8d4b78u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a3ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052a3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a3c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052a3c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052a3cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052a3ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0052a3d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0052a3d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0052a3d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052a3da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052a3dd: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0052a3e0: mov dword ptr [ecx], 0xb01290 */ W32((u32)(r_ecx), 0xb01290u);
    /* 0052a3e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a3e8: je 0x52a401 */ if (fZ) goto L_0052a401;
L_0052a3ea:; BB(0x0052a3ea);
    /* 0052a3ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052a3ed: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0052a3f1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a3f6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0052a3fa: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_0052a401:; BB(0x0052a401);
    /* 0052a401: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052a408: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x52a40du); f_008171e8();
    /* 0052a40d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a410: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052a417: mov esp, ebp */ r_esp = r_ebp;
    /* 0052a419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a41a: ret  */ FN_RET(0x0052a3b0); r_esp += 4; return;
}

void f_0052a41c(void) /* sub_52A41C */
{
    FN_ENTER(0x0052a41c);
    /* 0052a41c: mov eax, 0xa72ff4 */ r_eax = 0xa72ff4u;
    /* 0052a421: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a423: je 0x52a42f */ if (fZ) goto L_0052a42f;
L_0052a425:; BB(0x0052a425);
    /* 0052a425: mov ecx, 0xa72ff4 */ r_ecx = 0xa72ff4u;
    /* 0052a42a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x52a42fu); f_00829de0();
L_0052a42f:; BB(0x0052a42f);
    /* 0052a42f: mov eax, dword ptr [0xa72ffc] */ r_eax = R32((u32)(0xa72ffcu));
    /* 0052a434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052a436: je 0x52a449 */ if (fZ) goto L_0052a449;
L_0052a438:; BB(0x0052a438);
    /* 0052a438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a439: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x52a43eu); f_00857e98();
    /* 0052a43e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a43f: mov dword ptr [0xa72ffc], 0 */ W32((u32)(0xa72ffcu), 0x0u);
L_0052a449:; BB(0x0052a449);
    /* 0052a449: ret  */ FN_RET(0x0052a41c); r_esp += 4; return;
}

void f_0052a44c(void) /* sub_52A44C */
{
    FN_ENTER(0x0052a44c);
    /* 0052a44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a44d: mov ebp, esp */ r_ebp = r_esp;
    /* 0052a44f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052a451: push 0x8d4b94 */ { u32 v = 0x8d4b94u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052a45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a45d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052a464: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052a467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052a46a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0052a46d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0052a470: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0052a473: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052a476: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a479: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052a47c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052a47f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x52a484u); f_008193cc();
    /* 0052a484: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052a48b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052a48e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052a491: mov dword ptr [edx], 0xb01290 */ W32((u32)(r_edx), 0xb01290u);
    /* 0052a497: mov eax, dword ptr [0x9bc3a8] */ r_eax = R32((u32)(0x9bc3a8u));
    /* 0052a49c: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0052a4a3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0052a4a6: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0052a4a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a4aa: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x52a4afu); f_00520f3c();
    /* 0052a4af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a4b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052a4b2: jne 0x52a4b9 */ if (!fZ) goto L_0052a4b9;
L_0052a4b4:; BB(0x0052a4b4);
    /* 0052a4b4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052a4b7: jmp 0x52a4d8 */ goto L_0052a4d8;
L_0052a4b9:; BB(0x0052a4b9);
    /* 0052a4b9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052a4bc: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a4be: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 0052a4c3: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0052a4c6: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052a4c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a4ca: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x52a4cfu); f_0050981c();
    /* 0052a4cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a4d2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052a4d5: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_0052a4d8:; BB(0x0052a4d8);
    /* 0052a4d8: mov eax, edx */ r_eax = r_edx;
    /* 0052a4da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a4dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052a4e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0052a4e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a4e7: ret 8 */ FN_RET(0x0052a44c); r_esp += 12; return;
}

void f_0052a4ec(void) /* sub_52A4EC */
{
    FN_ENTER(0x0052a4ec);
    /* 0052a4ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a4ed: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052a4f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052a4f2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0052a4f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052a4f8: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0052a4fb: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a4fe: jle 0x52a512 */ if ((fZ||fS!=fO)) goto L_0052a512;
L_0052a500:; BB(0x0052a500);
    /* 0052a500: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0052a504: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a509: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0052a50d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a510: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a511: ret  */ FN_RET(0x0052a4ec); r_esp += 4; return;
L_0052a512:; BB(0x0052a512);
    /* 0052a512: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a515: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x52a51au); f_00520f3c();
    /* 0052a51a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a51b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a51d: je 0x52a5c1 */ if (fZ) goto L_0052a5c1;
L_0052a523:; BB(0x0052a523);
    /* 0052a523: fld dword ptr [0x9221f4] */ FPUSH(R_F32((u32)(0x9221f4u)));
    /* 0052a529: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0052a52d: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0052a530: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 0052a533: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0052a536: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052a53a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052a53d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052a540: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0052a546: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052a54a: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0052a550: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0052a554: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0052a55a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0052a55e: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 0052a564: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0052a568: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0052a56b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52a570u); f_0082f9c4();
    /* 0052a570: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0052a574: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a575: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x52a57au); f_00782868();
    /* 0052a57a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052a57c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052a57f: fld dword ptr [0x9221f0] */ FPUSH(R_F32((u32)(0x9221f0u)));
    /* 0052a585: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0052a589: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052a58b: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0052a58e: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0052a591: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0052a595: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0052a599: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052a59b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0052a59d: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0052a5a1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0052a5a3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0052a5a5: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0052a5a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052a5ab: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052a5ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052a5b0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0052a5b4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0052a5b8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052a5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a5bc: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52a5c1u); f_00508db8();
L_0052a5c1:; BB(0x0052a5c1);
    /* 0052a5c1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052a5c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a5c5: ret  */ FN_RET(0x0052a4ec); r_esp += 4; return;
}

void f_0052a5fc(void) /* sub_52A5FC */
{
    FN_ENTER(0x0052a5fc);
    /* 0052a5fc: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a601: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x52a606u); f_008581c5();
    /* 0052a606: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a607: mov dword ptr [0xa72ffc], eax */ W32((u32)(0xa72ffcu), r_eax);
    /* 0052a60c: mov edx, 0x20 */ r_edx = 0x20u;
    /* 0052a611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a612: mov ecx, 0xa73010 */ r_ecx = 0xa73010u;
    /* 0052a617: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a618: push 0x902 */ { u32 v = 0x902u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a61d: mov edx, eax */ r_edx = r_eax;
    /* 0052a61f: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x52a624u); f_0082a9dc();
    /* 0052a624: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a629: push 0x18696 */ { u32 v = 0x18696u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a62e: mov ecx, 0xa7303c */ r_ecx = 0xa7303cu;
    /* 0052a633: mov edx, 0xa73010 */ r_edx = 0xa73010u;
    /* 0052a638: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x52a63du); f_0082aa0c();
    /* 0052a63d: mov dword ptr [0xa72ff4], 0xa7303c */ W32((u32)(0xa72ff4u), 0xa7303cu);
    /* 0052a647: mov dword ptr [0xa72ff8], 1 */ W32((u32)(0xa72ff8u), 0x1u);
    /* 0052a651: push 0xa72ff4 */ { u32 v = 0xa72ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a656: call 0x800b78 */ r_esp -= 4; W32(r_esp, 0x52a65bu); f_00800b78();
    /* 0052a65b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a65c: ret  */ FN_RET(0x0052a5fc); r_esp += 4; return;
}

void f_0052a660(void) /* sub_52A660 */
{
    FN_ENTER(0x0052a660);
    /* 0052a660: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a661: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052a663: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052a665: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x52a66au); f_0052a684();
    /* 0052a66a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052a66e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052a670: jne 0x52a676 */ if (!fZ) goto L_0052a676;
L_0052a672:; BB(0x0052a672);
    /* 0052a672: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a673: ret 4 */ FN_RET(0x0052a660); r_esp += 8; return;
L_0052a676:; BB(0x0052a676);
    /* 0052a676: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a677: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x52a67cu); f_005c2f74();
    /* 0052a67c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a67d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052a67e: ret 4 */ FN_RET(0x0052a660); r_esp += 8; return;
}

void f_0052a684(void) /* sub_52A684 */
{
    FN_ENTER(0x0052a684);
    /* 0052a684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a685: mov ebp, esp */ r_ebp = r_esp;
    /* 0052a687: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052a689: push 0x8d4bb0 */ { u32 v = 0x8d4bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a68e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052a694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a695: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052a69c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052a69f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052a6a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0052a6a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0052a6a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0052a6ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052a6ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052a6b1: mov dword ptr [ecx], 0xb012e0 */ W32((u32)(r_ecx), 0xb012e0u);
    /* 0052a6b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052a6be: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x52a6c3u); f_0078638c();
    /* 0052a6c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a6c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052a6cd: mov esp, ebp */ r_esp = r_ebp;
    /* 0052a6cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a6d0: ret  */ FN_RET(0x0052a684); r_esp += 4; return;
}

void f_0052a6d4(void) /* sub_52A6D4 */
{
    FN_ENTER(0x0052a6d4);
    /* 0052a6d4: mov eax, 1 */ r_eax = 0x1u;
    /* 0052a6d9: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0052a6e0: ret  */ FN_RET(0x0052a6d4); r_esp += 4; return;
}

void f_0052a6e4(void) /* sub_52A6E4 */
{
    FN_ENTER(0x0052a6e4);
    /* 0052a6e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a6e5: mov ebx, esp */ r_ebx = r_esp;
    /* 0052a6e7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0052a6ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052a6eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052a6ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a6ed: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052a6f0: mov esi, ecx */ r_esi = r_ecx;
    /* 0052a6f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a6f4: call 0x52ac5c */ r_esp -= 4; W32(r_esp, 0x52a6f9u); f_0052ac5c();
    /* 0052a6f9: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a6fb: call 0x52ad44 */ r_esp -= 4; W32(r_esp, 0x52a700u); f_0052ad44();
    /* 0052a700: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a702: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52a707u); f_007aa094();
    /* 0052a707: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0052a70e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a711: je 0x52a733 */ if (fZ) goto L_0052a733;
L_0052a713:; BB(0x0052a713);
    /* 0052a713: mov eax, 1 */ r_eax = 0x1u;
    /* 0052a718: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052a71f: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a721: call 0x786c54 */ r_esp -= 4; W32(r_esp, 0x52a726u); f_00786c54();
    /* 0052a726: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a728: call 0x786bf0 */ r_esp -= 4; W32(r_esp, 0x52a72du); f_00786bf0();
    /* 0052a72d: mov dword ptr [esi + 0x380], eax */ W32((u32)(r_esi+0x380u), r_eax);
L_0052a733:; BB(0x0052a733);
    /* 0052a733: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a735: call 0x786c24 */ r_esp -= 4; W32(r_esp, 0x52a73au); f_00786c24();
    /* 0052a73a: mov ebp, dword ptr [esi + 0x350] */ r_ebp = R32((u32)(r_esi+0x350u));
    /* 0052a740: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
    /* 0052a746: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a748: je 0x52a78c */ if (fZ) goto L_0052a78c;
L_0052a74a:; BB(0x0052a74a);
    /* 0052a74a: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 0052a750: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052a752: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a755: jg 0x52a775 */ if ((!fZ&&fS==fO)) goto L_0052a775;
L_0052a757:; BB(0x0052a757);
    /* 0052a757: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a75a: jge 0x52a78c */ if ((fS==fO)) goto L_0052a78c;
L_0052a75c:; BB(0x0052a75c);
    /* 0052a75c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a75d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052a75e: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a760: call 0x787274 */ r_esp -= 4; W32(r_esp, 0x52a765u); f_00787274();
    /* 0052a765: add dword ptr [esi + 0x384], -1 */ { u32 ad = (u32)(r_esi+0x384u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052a76c: add dword ptr [ebp + 0x384], 1 */ { u32 ad = (u32)(r_ebp+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052a773: jmp 0x52a78c */ goto L_0052a78c;
L_0052a775:; BB(0x0052a775);
    /* 0052a775: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052a776: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a777: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a779: call 0x787274 */ r_esp -= 4; W32(r_esp, 0x52a77eu); f_00787274();
    /* 0052a77e: add dword ptr [esi + 0x384], 1 */ { u32 ad = (u32)(r_esi+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052a785: add dword ptr [ebp + 0x384], -1 */ { u32 ad = (u32)(r_ebp+0x384u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0052a78c:; BB(0x0052a78c);
    /* 0052a78c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052a78f: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 0052a792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052a793: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a794: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x52a799u); f_007a9180();
    /* 0052a799: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052a79c: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 0052a7a2: mov edx, dword ptr [esi + 0x360] */ r_edx = R32((u32)(r_esi+0x360u));
    /* 0052a7a8: mov edi, dword ptr [esi + 0x358] */ r_edi = R32((u32)(r_esi+0x358u));
    /* 0052a7ae: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0052a7b1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0052a7b3: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0052a7b9: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 0052a7bc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052a7be: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0052a7c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052a7c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052a7c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052a7c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052a7c7: jb 0x52a813 */ if (fC) goto L_0052a813;
L_0052a7c9:; BB(0x0052a7c9);
    /* 0052a7c9: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0052a7cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a7d1: jne 0x52a802 */ if (!fZ) goto L_0052a802;
L_0052a7d3:; BB(0x0052a7d3);
    /* 0052a7d3: fcom dword ptr [0x922340] */ fx_compare(ST(0), R_F32((u32)(0x922340u))); 
    /* 0052a7d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052a7db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052a7dc: jbe 0x52a802 */ if ((fC||fZ)) goto L_0052a802;
L_0052a7de:; BB(0x0052a7de);
    /* 0052a7de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052a7e0: mov eax, 2 */ r_eax = 0x2u;
    /* 0052a7e5: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052a7ec: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a7ef: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a7f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a7f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052a7f3: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a7f6: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x52a7fbu); f_00772054();
    /* 0052a7fb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052a7fd: jmp 0x52ab46 */ goto L_0052ab46;
L_0052a802:; BB(0x0052a802);
    /* 0052a802: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052a804: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052a806: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a808: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x52a80eu); call_ind(t); }
    /* 0052a80e: jmp 0x52ab46 */ goto L_0052ab46;
L_0052a813:; BB(0x0052a813);
    /* 0052a813: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052a815: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 0052a818: mov edi, dword ptr [esi + 0x54] */ r_edi = R32((u32)(r_esi+0x54u));
    /* 0052a81b: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 0052a81e: mov ecx, dword ptr [esi + 0x300] */ r_ecx = R32((u32)(r_esi+0x300u));
    /* 0052a824: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0052a82a: mov dword ptr [esi + 0x2a8], edi */ W32((u32)(r_esi+0x2a8u), r_edi);
    /* 0052a830: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 0052a835: mov dword ptr [0xaab4f4], edi */ W32((u32)(0xaab4f4u), r_edi);
    /* 0052a83b: mov dword ptr [0xaab4f8], edx */ W32((u32)(0xaab4f8u), r_edx);
    /* 0052a841: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 0052a847: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 0052a84d: mov ecx, dword ptr [esi + 0x304] */ r_ecx = R32((u32)(r_esi+0x304u));
    /* 0052a853: mov dword ptr [esi + 0x29c], ecx */ W32((u32)(r_esi+0x29cu), r_ecx);
    /* 0052a859: mov ecx, dword ptr [esi + 0x308] */ r_ecx = R32((u32)(r_esi+0x308u));
    /* 0052a85f: mov dword ptr [esi + 0x2a0], ecx */ W32((u32)(r_esi+0x2a0u), r_ecx);
    /* 0052a865: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0052a868: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 0052a86b: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0052a86e: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 0052a871: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0052a874: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 0052a877: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 0052a87c: mov edx, ebp */ r_edx = r_ebp;
    /* 0052a87e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52a883u); f_0082f9c4();
    /* 0052a883: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052a889: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052a88f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052a891: fmul qword ptr [0x9222c0] */ ST(0) = ST(0) * R_F64((u32)(0x9222c0u));
    /* 0052a897: fdiv qword ptr [0x9222b8] */ ST(0) = ST(0) / R_F64((u32)(0x9222b8u));
    /* 0052a89d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0052a8a0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0052a8a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a8a9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052a8ad: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0052a8b1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052a8b5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052a8b8: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 0052a8be: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052a8c2: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 0052a8cc: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052a8d1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052a8d6: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 0052a8e0: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52a8e5u); f_0082d990();
    /* 0052a8e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a8e7: mov edx, edi */ r_edx = r_edi;
    /* 0052a8e9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52a8eeu); f_0082d8bc();
    /* 0052a8ee: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a8f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a8f5: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052a8fa: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52a8ffu); f_0082eab8();
    /* 0052a8ff: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052a904: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52a909u); f_0082eb80();
    /* 0052a909: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052a90e: mov edx, ebp */ r_edx = r_ebp;
    /* 0052a910: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52a915u); f_0082ebac();
    /* 0052a915: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a917: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a91c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052a91e: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x52a923u); f_007b4c58();
    /* 0052a923: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a926: je 0x52ac18 */ if (fZ) goto L_0052ac18;
L_0052a92c:; BB(0x0052a92c);
    /* 0052a92c: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a932: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52a937u); f_0082e900();
    /* 0052a937: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052a93b: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052a941: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52a946u); f_0082e900();
    /* 0052a946: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052a94a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052a94c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052a94e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052a94f: jae 0x52a98c */ if (!fC) goto L_0052a98c;
L_0052a951:; BB(0x0052a951);
    /* 0052a951: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052a957: fld qword ptr [0x9222b0] */ FPUSH(R_F64((u32)(0x9222b0u)));
    /* 0052a95d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052a95f: fmul qword ptr [0x9222c0] */ ST(0) = ST(0) * R_F64((u32)(0x9222c0u));
    /* 0052a965: fdiv qword ptr [0x9222b8] */ ST(0) = ST(0) / R_F64((u32)(0x9222b8u));
    /* 0052a96b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0052a96e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0052a972: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a977: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052a97b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0052a97f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052a983: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052a986: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052a98a: jmp 0x52a9c5 */ goto L_0052a9c5;
L_0052a98c:; BB(0x0052a98c);
    /* 0052a98c: fld qword ptr [0x9222b0] */ FPUSH(R_F64((u32)(0x9222b0u)));
    /* 0052a992: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052a998: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052a99a: fmul qword ptr [0x9222c0] */ ST(0) = ST(0) * R_F64((u32)(0x9222c0u));
    /* 0052a9a0: fdiv qword ptr [0x9222b8] */ ST(0) = ST(0) / R_F64((u32)(0x9222b8u));
    /* 0052a9a6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0052a9a9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0052a9ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052a9b2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052a9b6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0052a9ba: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052a9be: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052a9c1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_0052a9c5:; BB(0x0052a9c5);
    /* 0052a9c5: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 0052a9cb: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 0052a9d5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052a9da: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 0052a9e4: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052a9e9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52a9eeu); f_0082d990();
    /* 0052a9ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a9f0: mov edx, edi */ r_edx = r_edi;
    /* 0052a9f2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52a9f7u); f_0082d8bc();
    /* 0052a9f7: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a9fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a9fe: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052aa03: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52aa08u); f_0082eab8();
    /* 0052aa08: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052aa0d: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52aa12u); f_0082eb80();
    /* 0052aa12: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052aa17: mov edx, ebp */ r_edx = r_ebp;
    /* 0052aa19: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52aa1eu); f_0082ebac();
    /* 0052aa1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052aa20: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052aa25: mov ecx, esi */ r_ecx = r_esi;
    /* 0052aa27: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x52aa2cu); f_007b4c58();
    /* 0052aa2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052aa2f: je 0x52abd7 */ if (fZ) goto L_0052abd7;
L_0052aa35:; BB(0x0052aa35);
    /* 0052aa35: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052aa3b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52aa40u); f_0082e900();
    /* 0052aa40: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052aa44: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052aa4a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52aa4fu); f_0082e900();
    /* 0052aa4f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052aa53: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052aa55: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052aa57: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052aa58: jae 0x52aa95 */ if (!fC) goto L_0052aa95;
L_0052aa5a:; BB(0x0052aa5a);
    /* 0052aa5a: fld qword ptr [0x9222b0] */ FPUSH(R_F64((u32)(0x9222b0u)));
    /* 0052aa60: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052aa66: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052aa68: fmul qword ptr [0x9222c0] */ ST(0) = ST(0) * R_F64((u32)(0x9222c0u));
    /* 0052aa6e: fdiv qword ptr [0x9222b8] */ ST(0) = ST(0) / R_F64((u32)(0x9222b8u));
    /* 0052aa74: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0052aa77: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0052aa7b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052aa80: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052aa84: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0052aa88: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052aa8c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052aa8f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052aa93: jmp 0x52aace */ goto L_0052aace;
L_0052aa95:; BB(0x0052aa95);
    /* 0052aa95: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052aa9b: fld qword ptr [0x9222b0] */ FPUSH(R_F64((u32)(0x9222b0u)));
    /* 0052aaa1: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052aaa3: fmul qword ptr [0x9222c0] */ ST(0) = ST(0) * R_F64((u32)(0x9222c0u));
    /* 0052aaa9: fdiv qword ptr [0x9222b8] */ ST(0) = ST(0) / R_F64((u32)(0x9222b8u));
    /* 0052aaaf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0052aab2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0052aab6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052aabb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052aabf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0052aac3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052aac7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052aaca: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_0052aace:; BB(0x0052aace);
    /* 0052aace: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 0052aad4: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 0052aade: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052aae3: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 0052aaed: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052aaf2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x52aaf7u); f_0082d990();
    /* 0052aaf7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052aaf9: mov edx, edi */ r_edx = r_edi;
    /* 0052aafb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52ab00u); f_0082d8bc();
    /* 0052ab00: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab05: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ab07: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052ab0c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52ab11u); f_0082eab8();
    /* 0052ab11: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052ab16: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52ab1bu); f_0082eb80();
    /* 0052ab1b: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052ab20: mov edx, ebp */ r_edx = r_ebp;
    /* 0052ab22: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52ab27u); f_0082ebac();
    /* 0052ab27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab29: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab2e: mov ecx, esi */ r_ecx = r_esi;
    /* 0052ab30: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x52ab35u); f_007b4c58();
    /* 0052ab35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ab38: je 0x52ab96 */ if (fZ) goto L_0052ab96;
L_0052ab3a:; BB(0x0052ab3a);
    /* 0052ab3a: mov eax, 2 */ r_eax = 0x2u;
    /* 0052ab3f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_0052ab46:; BB(0x0052ab46);
    /* 0052ab46: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052ab49: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ab4e: jne 0x52ab5b */ if (!fZ) goto L_0052ab5b;
L_0052ab50:; BB(0x0052ab50);
    /* 0052ab50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab54: mov ecx, esi */ r_ecx = r_esi;
    /* 0052ab56: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52ab5bu); f_00772b44();
L_0052ab5b:; BB(0x0052ab5b);
    /* 0052ab5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab5c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x52ab61u); f_007b999c();
    /* 0052ab61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab65: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab6b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52ab70u); f_00805608();
    /* 0052ab70: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ab73: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab7a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052ab7d: and eax, 0xfbdbffff */ {  u32 a = r_eax; u32 b = 0xfbdbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052ab82: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052ab85: mov ecx, esi */ r_ecx = r_esi;
    /* 0052ab87: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x52ab8cu); f_007b52ec();
    /* 0052ab8c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052ab8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ab90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052ab91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052ab92: mov esp, ebx */ r_esp = r_ebx;
    /* 0052ab94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ab95: ret  */ FN_RET(0x0052a6e4); r_esp += 4; return;
L_0052ab96:; BB(0x0052ab96);
    /* 0052ab96: mov eax, 2 */ r_eax = 0x2u;
    /* 0052ab9b: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052aba2: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 0052aba7: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0052abaa: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 0052abaf: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052abb2: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 0052abb7: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0052abba: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052abc0: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052abc3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052abc4: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052abc7: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x52abccu); f_007a8c74();
    /* 0052abcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052abcf: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0052abd2: jmp 0x52ab46 */ goto L_0052ab46;
L_0052abd7:; BB(0x0052abd7);
    /* 0052abd7: mov eax, 2 */ r_eax = 0x2u;
    /* 0052abdc: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052abe3: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 0052abe8: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0052abeb: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 0052abf0: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052abf3: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 0052abf8: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0052abfb: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052ac01: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ac04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac05: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ac08: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x52ac0du); f_007a8c74();
    /* 0052ac0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ac10: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0052ac13: jmp 0x52ab46 */ goto L_0052ab46;
L_0052ac18:; BB(0x0052ac18);
    /* 0052ac18: mov eax, 2 */ r_eax = 0x2u;
    /* 0052ac1d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052ac24: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 0052ac29: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0052ac2c: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 0052ac31: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052ac34: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 0052ac39: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0052ac3c: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052ac42: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ac45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac46: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ac49: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x52ac4eu); f_007a8c74();
    /* 0052ac4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ac51: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0052ac54: jmp 0x52ab46 */ goto L_0052ab46;
}

void f_0052ac5c(void) /* sub_52AC5C */
{
    FN_ENTER(0x0052ac5c);
    /* 0052ac5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac5e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052ac60: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052ac62: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52ac67u); f_00770738();
    /* 0052ac67: mov ebx, eax */ r_ebx = r_eax;
    /* 0052ac69: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ac6b: je 0x52ad33 */ if (fZ) goto L_0052ad33;
L_0052ac71:; BB(0x0052ac71);
    /* 0052ac71: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0052ac75: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ac7b: jge 0x52ad25 */ if ((fS==fO)) goto L_0052ad25;
L_0052ac81:; BB(0x0052ac81);
    /* 0052ac81: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac83: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052ac86: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052ac88: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x52ac8bu); call_ind(t); }
    /* 0052ac8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ac8d: je 0x52ad25 */ if (fZ) goto L_0052ad25;
L_0052ac93:; BB(0x0052ac93);
    /* 0052ac93: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0052ac96: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0052ac99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac9b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x52aca0u); f_007a9180();
    /* 0052aca0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052aca3: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 0052aca9: and eax, 0xe0 */ {  u32 a = r_eax; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052acae: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052acb1: jne 0x52acec */ if (!fZ) goto L_0052acec;
L_0052acb3:; BB(0x0052acb3);
    /* 0052acb3: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0052acb6: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0052acbc: je 0x52acd5 */ if (fZ) goto L_0052acd5;
L_0052acbe:; BB(0x0052acbe);
    /* 0052acbe: fcomp dword ptr [0x922330] */ fx_compare(ST(0), R_F32((u32)(0x922330u))); FPOP();
    /* 0052acc4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052acc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052acc7: jbe 0x52ad30 */ if ((fC||fZ)) goto L_0052ad30;
L_0052acc9:; BB(0x0052acc9);
    /* 0052acc9: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052accf: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0052acd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052acd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052acd4: ret  */ FN_RET(0x0052ac5c); r_esp += 4; return;
L_0052acd5:; BB(0x0052acd5);
    /* 0052acd5: fcomp dword ptr [0x922334] */ fx_compare(ST(0), R_F32((u32)(0x922334u))); FPOP();
    /* 0052acdb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052acdd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052acde: jae 0x52ad30 */ if (!fC) goto L_0052ad30;
L_0052ace0:; BB(0x0052ace0);
    /* 0052ace0: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ace6: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0052ace9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052acea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052aceb: ret  */ FN_RET(0x0052ac5c); r_esp += 4; return;
L_0052acec:; BB(0x0052acec);
    /* 0052acec: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0052acef: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0052acf5: je 0x52ad0e */ if (fZ) goto L_0052ad0e;
L_0052acf7:; BB(0x0052acf7);
    /* 0052acf7: fcomp dword ptr [0x922338] */ fx_compare(ST(0), R_F32((u32)(0x922338u))); FPOP();
    /* 0052acfd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052acff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052ad00: jbe 0x52ad30 */ if ((fC||fZ)) goto L_0052ad30;
L_0052ad02:; BB(0x0052ad02);
    /* 0052ad02: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ad08: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0052ad0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ad0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ad0d: ret  */ FN_RET(0x0052ac5c); r_esp += 4; return;
L_0052ad0e:; BB(0x0052ad0e);
    /* 0052ad0e: fcomp dword ptr [0x92233c] */ fx_compare(ST(0), R_F32((u32)(0x92233cu))); FPOP();
    /* 0052ad14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052ad16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052ad17: jae 0x52ad30 */ if (!fC) goto L_0052ad30;
L_0052ad19:; BB(0x0052ad19);
    /* 0052ad19: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ad1f: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0052ad22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ad23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ad24: ret  */ FN_RET(0x0052ac5c); r_esp += 4; return;
L_0052ad25:; BB(0x0052ad25);
    /* 0052ad25: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052ad28: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ad2d: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_0052ad30:; BB(0x0052ad30);
    /* 0052ad30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ad31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ad32: ret  */ FN_RET(0x0052ac5c); r_esp += 4; return;
L_0052ad33:; BB(0x0052ad33);
    /* 0052ad33: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052ad36: and eax, 0xffefffff */ {  u32 a = r_eax; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ad3b: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052ad3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052ad3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ad40: ret  */ FN_RET(0x0052ac5c); r_esp += 4; return;
}

void f_0052ad44(void) /* sub_52AD44 */
{
    FN_ENTER(0x0052ad44);
    /* 0052ad44: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052ad47: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052ad4c: je 0x52ad67 */ if (fZ) goto L_0052ad67;
L_0052ad4e:; BB(0x0052ad4e);
    /* 0052ad4e: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 0052ad54: mov edx, dword ptr [ecx + 0x3ac] */ r_edx = R32((u32)(r_ecx+0x3acu));
    /* 0052ad5a: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 0052ad60: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 0052ad66: ret  */ FN_RET(0x0052ad44); r_esp += 4; return;
L_0052ad67:; BB(0x0052ad67);
    /* 0052ad67: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0052ad6d: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0052ad73: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 0052ad79: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 0052ad7f: ret  */ FN_RET(0x0052ad44); r_esp += 4; return;
}

void f_0052ad80(void) /* sub_52AD80 */
{
    FN_ENTER(0x0052ad80);
    /* 0052ad80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ad81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ad82: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ad85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052ad87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052ad89: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52ad8eu); f_007aa094();
    /* 0052ad8e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052ad90: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52ad95u); f_00770738();
    /* 0052ad95: mov edi, eax */ r_edi = r_eax;
    /* 0052ad97: movsx edx, word ptr [ebx + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0052ad9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ada0: je 0x52af80 */ if (fZ) goto L_0052af80;
L_0052ada6:; BB(0x0052ada6);
    /* 0052ada6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ada9: jne 0x52ae81 */ if (!fZ) goto L_0052ae81;
L_0052adaf:; BB(0x0052adaf);
    /* 0052adaf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052adb1: je 0x52afba */ if (fZ) goto L_0052afba;
L_0052adb7:; BB(0x0052adb7);
    /* 0052adb7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052adb9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0052adbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052adbd: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x52adc0u); call_ind(t); }
    /* 0052adc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052adc2: je 0x52afba */ if (fZ) goto L_0052afba;
L_0052adc8:; BB(0x0052adc8);
    /* 0052adc8: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0052adcc: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 0052add2: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0052add8: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0052addc: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0052ade2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0052ade6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0052adea: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0052adf0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52adf5u); f_0082f9c4();
    /* 0052adf5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0052adf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052adfa: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 0052ae00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052ae02: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ae05: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52ae0au); f_00771858();
    /* 0052ae0a: mov ecx, eax */ r_ecx = r_eax;
    /* 0052ae0c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0052ae10: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ae12: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0052ae16: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ae18: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052ae1a: fcomp dword ptr [0x92232c] */ fx_compare(ST(0), R_F32((u32)(0x92232cu))); FPOP();
    /* 0052ae20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052ae22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052ae23: jb 0x52ae58 */ if (fC) goto L_0052ae58;
L_0052ae25:; BB(0x0052ae25);
    /* 0052ae25: mov edx, dword ptr [ebx + 0x354] */ r_edx = R32((u32)(r_ebx+0x354u));
    /* 0052ae2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ae2d: je 0x52ae58 */ if (fZ) goto L_0052ae58;
L_0052ae2f:; BB(0x0052ae2f);
    /* 0052ae2f: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 0052ae35: cmp ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ae38: jg 0x52afba */ if ((!fZ&&fS==fO)) goto L_0052afba;
L_0052ae3e:; BB(0x0052ae3e);
    /* 0052ae3e: mov eax, 2 */ r_eax = 0x2u;
    /* 0052ae43: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0052ae4a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052ae4c: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 0052ae53: jmp 0x52afba */ goto L_0052afba;
L_0052ae58:; BB(0x0052ae58);
    /* 0052ae58: mov eax, 3 */ r_eax = 0x3u;
    /* 0052ae5d: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0052ae64: mov edx, 1 */ r_edx = 0x1u;
    /* 0052ae69: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0052ae70: mov edi, 2 */ r_edi = 0x2u;
    /* 0052ae75: mov word ptr [ebx + 0xb8], di */ W16((u32)(r_ebx+0xb8u), (u16)r_edi);
    /* 0052ae7c: jmp 0x52afba */ goto L_0052afba;
L_0052ae81:; BB(0x0052ae81);
    /* 0052ae81: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ae84: jne 0x52afba */ if (!fZ) goto L_0052afba;
L_0052ae8a:; BB(0x0052ae8a);
    /* 0052ae8a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ae8c: je 0x52afba */ if (fZ) goto L_0052afba;
L_0052ae92:; BB(0x0052ae92);
    /* 0052ae92: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ae94: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0052ae96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052ae98: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x52ae9bu); call_ind(t); }
    /* 0052ae9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ae9d: je 0x52afba */ if (fZ) goto L_0052afba;
L_0052aea3:; BB(0x0052aea3);
    /* 0052aea3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052aea6: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 0052aeac: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0052aeb2: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0052aeb5: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0052aebb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052aebf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052aec3: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0052aec9: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52aeceu); f_0082f9c4();
    /* 0052aece: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052aed1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052aed5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052aed7: fmul qword ptr [0x9222a8] */ ST(0) = ST(0) * R_F64((u32)(0x9222a8u));
    /* 0052aedd: fdiv qword ptr [0x9222a0] */ ST(0) = ST(0) / R_F64((u32)(0x9222a0u));
    /* 0052aee3: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0052aee7: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0052aeec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052aef1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0052aef5: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0052aef9: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052aefd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0052af01: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0052af05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052af06: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052af09: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x52af0eu); f_007a9018();
    /* 0052af0e: mov ecx, eax */ r_ecx = r_eax;
    /* 0052af10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052af13: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052af16: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052af18: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052af1c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052af1e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052af20: fcomp dword ptr [0x92232c] */ fx_compare(ST(0), R_F32((u32)(0x92232cu))); FPOP();
    /* 0052af26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052af28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052af29: jb 0x52af5a */ if (fC) goto L_0052af5a;
L_0052af2b:; BB(0x0052af2b);
    /* 0052af2b: mov edx, dword ptr [ebx + 0x354] */ r_edx = R32((u32)(r_ebx+0x354u));
    /* 0052af31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052af33: je 0x52af5a */ if (fZ) goto L_0052af5a;
L_0052af35:; BB(0x0052af35);
    /* 0052af35: mov edx, dword ptr [ebx + 0x31c] */ r_edx = R32((u32)(r_ebx+0x31cu));
    /* 0052af3b: cmp ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052af3e: jle 0x52afba */ if ((fZ||fS!=fO)) goto L_0052afba;
L_0052af40:; BB(0x0052af40);
    /* 0052af40: mov eax, 1 */ r_eax = 0x1u;
    /* 0052af45: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0052af4c: mov edx, 2 */ r_edx = 0x2u;
    /* 0052af51: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 0052af58: jmp 0x52afba */ goto L_0052afba;
L_0052af5a:; BB(0x0052af5a);
    /* 0052af5a: mov eax, 3 */ r_eax = 0x3u;
    /* 0052af5f: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0052af66: mov edx, 1 */ r_edx = 0x1u;
    /* 0052af6b: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0052af72: mov edi, 2 */ r_edi = 0x2u;
    /* 0052af77: mov word ptr [ebx + 0xb8], di */ W16((u32)(r_ebx+0xb8u), (u16)r_edi);
    /* 0052af7e: jmp 0x52afba */ goto L_0052afba;
L_0052af80:; BB(0x0052af80);
    /* 0052af80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052af82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052af84: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52af89u); f_007aaa30();
    /* 0052af89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052af8b: je 0x52af97 */ if (fZ) goto L_0052af97;
L_0052af8d:; BB(0x0052af8d);
    /* 0052af8d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052af8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052af91: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x52af97u); call_ind(t); }
L_0052af97:; BB(0x0052af97);
    /* 0052af97: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0052af9d: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052afa0: je 0x52afba */ if (fZ) goto L_0052afba;
L_0052afa2:; BB(0x0052afa2);
    /* 0052afa2: mov eax, 1 */ r_eax = 0x1u;
    /* 0052afa7: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0052afae: mov edx, 2 */ r_edx = 0x2u;
    /* 0052afb3: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
L_0052afba:; BB(0x0052afba);
    /* 0052afba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052afbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052afbe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052afc0: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52afc5u); f_00772b44();
    /* 0052afc5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052afc7: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52afccu); f_007b6880();
    /* 0052afcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052afce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052afd0: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052afd3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052afd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052afd9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52afdeu); f_00805608();
    /* 0052afde: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052afe1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052afe2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052afe3: ret  */ FN_RET(0x0052ad80); r_esp += 4; return;
}

void f_0052afe4(void) /* sub_52AFE4 */
{
    FN_ENTER(0x0052afe4);
    /* 0052afe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052afe5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052afe6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052afe9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052afeb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052afed: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52aff2u); f_00770738();
    /* 0052aff2: mov edi, eax */ r_edi = r_eax;
    /* 0052aff4: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0052affb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052affd: jne 0x52b05c */ if (!fZ) goto L_0052b05c;
L_0052afff:; BB(0x0052afff);
    /* 0052afff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b001: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b003: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b005: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52b00au); f_00772b44();
    /* 0052b00a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b00c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52b011u); f_007aa094();
    /* 0052b011: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b013: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b015: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52b01au); f_007aaa30();
    /* 0052b01a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b01c: je 0x52b029 */ if (fZ) goto L_0052b029;
L_0052b01e:; BB(0x0052b01e);
    /* 0052b01e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0052b021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b023: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x52b029u); call_ind(t); }
L_0052b029:; BB(0x0052b029);
    /* 0052b029: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0052b02f: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b032: je 0x52b054 */ if (fZ) goto L_0052b054;
L_0052b034:; BB(0x0052b034);
    /* 0052b034: mov eax, 1 */ r_eax = 0x1u;
    /* 0052b039: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0052b040: mov edx, 2 */ r_edx = 0x2u;
    /* 0052b045: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0052b04c: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0052b04f: jmp 0x52b137 */ goto L_0052b137;
L_0052b054:; BB(0x0052b054);
    /* 0052b054: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0052b057: jmp 0x52b137 */ goto L_0052b137;
L_0052b05c:; BB(0x0052b05c);
    /* 0052b05c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b05e: je 0x52b134 */ if (fZ) goto L_0052b134;
L_0052b064:; BB(0x0052b064);
    /* 0052b064: push 0x300000 */ { u32 v = 0x300000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b06b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b06d: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x52b072u); f_007b5290();
    /* 0052b072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b074: je 0x52b0bf */ if (fZ) goto L_0052b0bf;
L_0052b076:; BB(0x0052b076);
    /* 0052b076: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 0052b07c: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0052b07f: mov dword ptr [ebp + 0x394], edx */ W32((u32)(r_ebp+0x394u), r_edx);
    /* 0052b085: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0052b088: jae 0x52b0a0 */ if (!fC) goto L_0052b0a0;
L_0052b08a:; BB(0x0052b08a);
    /* 0052b08a: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 0052b08d: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 0052b090: mov edi, dword ptr [ebp + 0x58] */ r_edi = R32((u32)(r_ebp+0x58u));
    /* 0052b093: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052b096: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052b09a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0052b09e: jmp 0x52b0e6 */ goto L_0052b0e6;
L_0052b0a0:; BB(0x0052b0a0);
    /* 0052b0a0: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 0052b0a6: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0052b0ac: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0052b0af: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0052b0b5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052b0b9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052b0bd: jmp 0x52b0e6 */ goto L_0052b0e6;
L_0052b0bf:; BB(0x0052b0bf);
    /* 0052b0bf: mov dword ptr [ebp + 0x394], 0 */ W32((u32)(r_ebp+0x394u), 0x0u);
    /* 0052b0c9: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 0052b0cf: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0052b0d5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0052b0d8: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0052b0de: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0052b0e2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0052b0e6:; BB(0x0052b0e6);
    /* 0052b0e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b0e8: call 0x52ac5c */ r_esp -= 4; W32(r_esp, 0x52b0edu); f_0052ac5c();
    /* 0052b0ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b0ef: call 0x52ad44 */ r_esp -= 4; W32(r_esp, 0x52b0f4u); f_0052ad44();
    /* 0052b0f4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b0f6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52b0fbu); f_007aa094();
    /* 0052b0fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b0fd: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b101: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0052b107: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b10b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b10d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b111: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b114: push dword ptr [ebp + 0x39c] */ { u32 v = R32((u32)(r_ebp+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052b11a: call 0x772aa0 */ r_esp -= 4; W32(r_esp, 0x52b11fu); f_00772aa0();
    /* 0052b11f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052b121: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 0052b128: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b12d: je 0x52b15e */ if (fZ) goto L_0052b15e;
L_0052b12f:; BB(0x0052b12f);
    /* 0052b12f: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0052b132: jmp 0x52b137 */ goto L_0052b137;
L_0052b134:; BB(0x0052b134);
    /* 0052b134: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_0052b137:; BB(0x0052b137);
    /* 0052b137: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b139: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52b13eu); f_007b6880();
    /* 0052b13e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b140: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b142: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b147: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b148: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52b14du); f_00805608();
    /* 0052b14d: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052b150: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052b155: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052b158: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052b15b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052b15c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052b15d: ret  */ FN_RET(0x0052afe4); r_esp += 4; return;
L_0052b15e:; BB(0x0052b15e);
    /* 0052b15e: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0052b161: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052b162: lea eax, [ebp + 0x2a4] */ r_eax = (u32)(r_ebp+0x2a4u);
    /* 0052b168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b169: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x52b16eu); f_007a9180();
    /* 0052b16e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b171: fld dword ptr [ebp + 0x39c] */ FPUSH(R_F32((u32)(r_ebp+0x39cu)));
    /* 0052b177: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0052b17d: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 0052b180: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052b182: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052b184: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052b186: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052b187: ja 0x52b1a0 */ if ((!fC&&!fZ)) goto L_0052b1a0;
L_0052b189:; BB(0x0052b189);
    /* 0052b189: mov edx, dword ptr [ebp + 0x2b0] */ r_edx = R32((u32)(r_ebp+0x2b0u));
    /* 0052b18f: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0052b192: mov dword ptr [ebp + 0x2b0], eax */ W32((u32)(r_ebp+0x2b0u), r_eax);
    /* 0052b198: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052b19e: jle 0x52b137 */ if ((fZ||fS!=fO)) goto L_0052b137;
L_0052b1a0:; BB(0x0052b1a0);
    /* 0052b1a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b1a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052b1a4: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52b1a9u); f_007706b0();
    /* 0052b1a9: mov dword ptr [ebp + 0x2b0], 0 */ W32((u32)(r_ebp+0x2b0u), 0x0u);
    /* 0052b1b3: jmp 0x52b137 */ goto L_0052b137;
}

