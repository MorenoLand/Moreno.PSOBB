#include "protos.h"

void f_0052e024(void) /* sub_52E024 */
{
    FN_ENTER(0x0052e024);
    /* 0052e024: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e025: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052e028: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052e02a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052e02c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052e02e: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e030: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x52e033u); call_ind(t); }
    /* 0052e033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e035: je 0x52e23a */ if (fZ) goto L_0052e23a;
L_0052e03b:; BB(0x0052e03b);
    /* 0052e03b: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0052e041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e043: je 0x52e05f */ if (fZ) goto L_0052e05f;
L_0052e045:; BB(0x0052e045);
    /* 0052e045: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052e04a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e04c: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0052e053: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052e055: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e05au); f_007706b0();
    /* 0052e05a: jmp 0x52e23a */ goto L_0052e23a;
L_0052e05f:; BB(0x0052e05f);
    /* 0052e05f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052e062: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0052e064: je 0x52e1b1 */ if (fZ) goto L_0052e1b1;
L_0052e06a:; BB(0x0052e06a);
    /* 0052e06a: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0052e070: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e076: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 0052e07c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052e07e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0052e085: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052e08a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0052e092: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0052e09a: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0052e09c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052e09e: mov edx, 0 */ r_edx = 0x0u;
    /* 0052e0a3: jle 0x52e254 */ if ((fZ||fS!=fO)) goto L_0052e254;
L_0052e0a9:; BB(0x0052e0a9);
    /* 0052e0a9: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0052e0ad: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0052e0b1: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0052e0b5: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0052e0b9: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0052e0bd: mov ebp, edx */ r_ebp = r_edx;
    /* 0052e0bf: mov edx, ecx */ r_edx = r_ecx;
L_0052e0c1:; BB(0x0052e0c1);
    /* 0052e0c1: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0052e0c8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e0ca: je 0x52e23f */ if (fZ) goto L_0052e23f;
L_0052e0d0:; BB(0x0052e0d0);
    /* 0052e0d0: movzx eax, word ptr [esi + 0x96] */ r_eax = (u32)R16((u32)(r_esi+0x96u));
    /* 0052e0d7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e0da: jne 0x52e18d */ if (!fZ) goto L_0052e18d;
L_0052e0e0:; BB(0x0052e0e0);
    /* 0052e0e0: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 0052e0e4: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e0ea: jge 0x52e18d */ if ((fS==fO)) goto L_0052e18d;
L_0052e0f0:; BB(0x0052e0f0);
    /* 0052e0f0: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0052e0f4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e0f6: je 0x52e18d */ if (fZ) goto L_0052e18d;
L_0052e0fc:; BB(0x0052e0fc);
    /* 0052e0fc: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e0ff: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e104: jne 0x52e18d */ if (!fZ) goto L_0052e18d;
L_0052e10a:; BB(0x0052e10a);
    /* 0052e10a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0052e10d: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e113: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052e116: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 0052e11c: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0052e122: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0052e126: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e12c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052e130: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52e135u); f_0082f9c4();
    /* 0052e135: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052e138: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052e13a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052e13e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052e140: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052e142: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 0052e146: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052e148: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0052e14c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052e14d: jb 0x52e15d */ if (fC) goto L_0052e15d;
L_0052e14f:; BB(0x0052e14f);
    /* 0052e14f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052e155: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052e15b: jmp 0x52e18d */ goto L_0052e18d;
L_0052e15d:; BB(0x0052e15d);
    /* 0052e15d: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052e163: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e164: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052e166: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x52e16bu); f_00771e14();
    /* 0052e16b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052e171: mov esi, dword ptr [0xaae164] */ r_esi = R32((u32)(0xaae164u));
    /* 0052e177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e179: jne 0x52e18b */ if (!fZ) goto L_0052e18b;
L_0052e17b:; BB(0x0052e17b);
    /* 0052e17b: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0052e17f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0052e183: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052e185: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0052e189: jmp 0x52e18d */ goto L_0052e18d;
L_0052e18b:; BB(0x0052e18b);
    /* 0052e18b: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0052e18d:; BB(0x0052e18d);
    /* 0052e18d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052e190: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e192: jl 0x52e0c1 */ if ((fS!=fO)) goto L_0052e0c1;
L_0052e198:; BB(0x0052e198);
    /* 0052e198: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0052e19c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0052e1a0: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052e1a4: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0052e1a8:; BB(0x0052e1a8);
    /* 0052e1a8: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0052e1af: jmp 0x52e1c9 */ goto L_0052e1c9;
L_0052e1b1:; BB(0x0052e1b1);
    /* 0052e1b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1b3: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0052e1b9: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0052e1bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052e1bd: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x52e1c2u); f_007714cc();
    /* 0052e1c2: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
L_0052e1c9:; BB(0x0052e1c9);
    /* 0052e1c9: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0052e1cc: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e1d2: jl 0x52e1f8 */ if ((fS!=fO)) goto L_0052e1f8;
L_0052e1d4:; BB(0x0052e1d4);
    /* 0052e1d4: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e1da: jge 0x52e23a */ if ((fS==fO)) goto L_0052e23a;
L_0052e1dc:; BB(0x0052e1dc);
    /* 0052e1dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1dd: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x52e1e2u); f_00786b3c();
    /* 0052e1e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e1e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052e1e6: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e1ebu); f_007706b0();
    /* 0052e1eb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052e1ee: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e1f3: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0052e1f6: jmp 0x52e23a */ goto L_0052e23a;
L_0052e1f8:; BB(0x0052e1f8);
    /* 0052e1f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1f9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52e1feu); f_0068d5a8();
    /* 0052e1fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e1ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e201: je 0x52e226 */ if (fZ) goto L_0052e226;
L_0052e203:; BB(0x0052e203);
    /* 0052e203: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052e209: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e20f: jne 0x52e226 */ if (!fZ) goto L_0052e226;
L_0052e211:; BB(0x0052e211);
    /* 0052e211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e212: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052e214: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e219u); f_007706b0();
    /* 0052e219: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052e21c: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e221: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0052e224: jmp 0x52e23a */ goto L_0052e23a;
L_0052e226:; BB(0x0052e226);
    /* 0052e226: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e228: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052e22a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e22fu); f_007706b0();
    /* 0052e22f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0052e232: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052e237: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_0052e23a:; BB(0x0052e23a);
    /* 0052e23a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e23d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052e23e: ret  */ FN_RET(0x0052e024); r_esp += 4; return;
L_0052e23f:; BB(0x0052e23f);
    /* 0052e23f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0052e243: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0052e247: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0052e24b: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0052e24f: jmp 0x52e1a8 */ goto L_0052e1a8;
L_0052e254:; BB(0x0052e254);
    /* 0052e254: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052e256: jmp 0x52e1a8 */ goto L_0052e1a8;
}

void f_0052e25c(void)
{
    FN_ENTER(0x0052e25c);
    /* 0052e25c: mov ecx, dword ptr [0xa7337c] */ r_ecx = R32((u32)(0xa7337cu));
    /* 0052e262: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052e264: je 0x52e26d */ if (fZ) goto L_0052e26d;
L_0052e266:; BB(0x0052e266);
    /* 0052e266: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e268: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x52e26du); f_004066a8();
L_0052e26d:; BB(0x0052e26d);
    /* 0052e26d: mov dword ptr [0xa7337c], 0 */ W32((u32)(0xa7337cu), 0x0u);
    /* 0052e277: ret  */ FN_RET(0x0052e25c); r_esp += 4; return;
}

void f_0052e278(void) /* sub_52E278 */
{
    FN_ENTER(0x0052e278);
    /* 0052e278: mov eax, dword ptr [0xa733b0] */ r_eax = R32((u32)(0xa733b0u));
    /* 0052e27d: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e280: je 0x52e347 */ if (fZ) goto L_0052e347;
L_0052e286:; BB(0x0052e286);
    /* 0052e286: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e289: je 0x52e307 */ if (fZ) goto L_0052e307;
L_0052e28b:; BB(0x0052e28b);
    /* 0052e28b: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e28e: jne 0x52e2c9 */ if (!fZ) goto L_0052e2c9;
L_0052e290:; BB(0x0052e290);
    /* 0052e290: mov dword ptr [0xa7338c], 0 */ W32((u32)(0xa7338cu), 0x0u);
    /* 0052e29a: mov eax, 0xa7338c */ r_eax = 0xa7338cu;
    /* 0052e29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2a0: mov dword ptr [0xa73390], 0 */ W32((u32)(0xa73390u), 0x0u);
    /* 0052e2aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2ab: mov dword ptr [0xa73394], 0 */ W32((u32)(0xa73394u), 0x0u);
    /* 0052e2b5: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2ba: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x52e2bfu); f_007829a0();
    /* 0052e2bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e2c2: mov eax, dword ptr [0xa733b0] */ r_eax = R32((u32)(0xa733b0u));
    /* 0052e2c7: jmp 0x52e33e */ goto L_0052e33e;
L_0052e2c9:; BB(0x0052e2c9);
    /* 0052e2c9: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e2cc: jne 0x52e33e */ if (!fZ) goto L_0052e33e;
L_0052e2ce:; BB(0x0052e2ce);
    /* 0052e2ce: mov dword ptr [0xa73380], 0 */ W32((u32)(0xa73380u), 0x0u);
    /* 0052e2d8: mov eax, 0xa73380 */ r_eax = 0xa73380u;
    /* 0052e2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2de: mov dword ptr [0xa73384], 0 */ W32((u32)(0xa73384u), 0x0u);
    /* 0052e2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2e9: mov dword ptr [0xa73388], 0 */ W32((u32)(0xa73388u), 0x0u);
    /* 0052e2f3: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2f8: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x52e2fdu); f_007829a0();
    /* 0052e2fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e300: mov eax, dword ptr [0xa733b0] */ r_eax = R32((u32)(0xa733b0u));
    /* 0052e305: jmp 0x52e33e */ goto L_0052e33e;
L_0052e307:; BB(0x0052e307);
    /* 0052e307: mov dword ptr [0xa73398], 0 */ W32((u32)(0xa73398u), 0x0u);
    /* 0052e311: mov eax, 0xa73398 */ r_eax = 0xa73398u;
    /* 0052e316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e317: mov dword ptr [0xa7339c], 0 */ W32((u32)(0xa7339cu), 0x0u);
    /* 0052e321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e322: mov dword ptr [0xa733a0], 0 */ W32((u32)(0xa733a0u), 0x0u);
    /* 0052e32c: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e331: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x52e336u); f_007829a0();
    /* 0052e336: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e339: mov eax, dword ptr [0xa733b0] */ r_eax = R32((u32)(0xa733b0u));
L_0052e33e:; BB(0x0052e33e);
    /* 0052e33e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e341: mov dword ptr [0xa733b0], eax */ W32((u32)(0xa733b0u), r_eax);
    /* 0052e346: ret  */ FN_RET(0x0052e278); r_esp += 4; return;
L_0052e347:; BB(0x0052e347);
    /* 0052e347: mov dword ptr [0xa733a4], 0 */ W32((u32)(0xa733a4u), 0x0u);
    /* 0052e351: mov eax, 0xa733a4 */ r_eax = 0xa733a4u;
    /* 0052e356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e357: mov dword ptr [0xa733a8], 0 */ W32((u32)(0xa733a8u), 0x0u);
    /* 0052e361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e362: mov dword ptr [0xa733ac], 0 */ W32((u32)(0xa733acu), 0x0u);
    /* 0052e36c: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e371: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x52e376u); f_007829a0();
    /* 0052e376: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e379: mov eax, dword ptr [0xa733b0] */ r_eax = R32((u32)(0xa733b0u));
    /* 0052e37e: jmp 0x52e33e */ goto L_0052e33e;
}

void f_0052e380(void)
{
    FN_ENTER(0x0052e380);
    /* 0052e380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052e381: mov ebp, esp */ r_ebp = r_esp;
    /* 0052e383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e385: push 0x8d4c6a */ { u32 v = 0x8d4c6au; r_esp -= 4; W32(r_esp, v); }
    /* 0052e38a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052e390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e391: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052e398: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052e39b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052e39e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0052e3a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0052e3a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0052e3a7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3a9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0052e3b0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x52e3b5u); f_005caba4();
    /* 0052e3b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e3b6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052e3b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e3bb: je 0x52e443 */ if (fZ) goto L_0052e443;
L_0052e3c1:; BB(0x0052e3c1);
    /* 0052e3c1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0052e3c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052e3cf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052e3d5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052e3d8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x52e3ddu); f_00787a4c();
    /* 0052e3dd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052e3e0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0052e3e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0052e3ea:; BB(0x0052e3ea);
    /* 0052e3ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052e3f1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0052e3f8: push 0x428 */ { u32 v = 0x428u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3fd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x52e402u); f_005caba4();
    /* 0052e402: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e403: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0052e406: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e408: je 0x52e43f */ if (fZ) goto L_0052e43f;
L_0052e40a:; BB(0x0052e40a);
    /* 0052e40a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0052e411: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052e418: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052e41b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052e41e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e422: call 0x52e44c */ r_esp -= 4; W32(r_esp, 0x52e427u); f_0052e44c();
    /* 0052e427: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e42a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0052e431:; BB(0x0052e431);
    /* 0052e431: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052e434: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052e43b: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e43d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e43e: ret  */ FN_RET(0x0052e380); r_esp += 4; return;
L_0052e43f:; BB(0x0052e43f);
    /* 0052e43f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052e441: jmp 0x52e431 */ goto L_0052e431;
L_0052e443:; BB(0x0052e443);
    /* 0052e443: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e445: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052e448: jmp 0x52e3ea */ goto L_0052e3ea;
}

void f_0052e44c(void) /* sub_52E44C */
{
    FN_ENTER(0x0052e44c);
    /* 0052e44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052e44d: mov ebp, esp */ r_ebp = r_esp;
    /* 0052e44f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e451: push 0x8d4c98 */ { u32 v = 0x8d4c98u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052e45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e45d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052e464: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052e467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052e46a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0052e46d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0052e470: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0052e473: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052e476: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052e479: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052e47c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052e47f: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x52e484u); f_007865e8();
    /* 0052e484: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052e48b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e48e: mov dword ptr [ecx], 0xb01760 */ W32((u32)(r_ecx), 0xb01760u);
    /* 0052e494: add ecx, 0x37c */ {  u32 a = r_ecx; u32 b = 0x37cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e49a: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x52e49fu); f_00576a48();
    /* 0052e49f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052e4a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e4a9: mov eax, dword ptr [0x9bc4c4] */ r_eax = R32((u32)(0x9bc4c4u));
    /* 0052e4ae: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e4b0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0052e4b3: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x52e4b8u); f_00787550();
    /* 0052e4b8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e4bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052e4be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e4bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052e4c1: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x52e4c7u); call_ind(t); }
    /* 0052e4c7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e4ca: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052e4cc: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x52e4d2u); call_ind(t); }
    /* 0052e4d2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e4d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e4d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e4d9: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0052e4dc: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0052e4df: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0052e4e2: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0052e4e8: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0052e4ee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e4f1: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0052e4f7: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0052e4fd: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0052e503: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0052e509: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0052e50f: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0052e515: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e518: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0052e51e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e521: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0052e527: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0052e52a: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0052e530: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0052e533: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0052e539: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0052e53c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52e541u); f_00772b44();
    /* 0052e541: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e544: mov edi, dword ptr [0xa7337c] */ r_edi = R32((u32)(0xa7337cu));
    /* 0052e54a: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0052e550: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0052e553: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0052e556: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0052e55c: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0052e55f: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0052e562: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0052e568: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0052e56e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e570: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0052e577: mov dword ptr [ecx + 0xd8], 0x9bc3e0 */ W32((u32)(r_ecx+0xd8u), 0x9bc3e0u);
    /* 0052e581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e582: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x52e587u); f_007aa4c8();
    /* 0052e587: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e58a: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0052e591: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0052e597: mov ebx, dword ptr [ecx + 0x2e8] */ r_ebx = R32((u32)(r_ecx+0x2e8u));
    /* 0052e59d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0052e5a4: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052e5a7: mov dword ptr [ecx + 0x68], 0x3f99999a */ W32((u32)(r_ecx+0x68u), 0x3f99999au);
    /* 0052e5ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5b0: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 0052e5b6: mov dword ptr [ecx + 0x6c], 0x3f99999a */ W32((u32)(r_ecx+0x6cu), 0x3f99999au);
    /* 0052e5bd: or ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0052e5c0: mov dword ptr [ecx + 0x2e8], ebx */ W32((u32)(r_ecx+0x2e8u), r_ebx);
    /* 0052e5c6: mov dword ptr [ecx + 0x70], 0x3f99999a */ W32((u32)(r_ecx+0x70u), 0x3f99999au);
    /* 0052e5cd: push 0x9bc4e8 */ { u32 v = 0x9bc4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5d2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x52e5d7u); f_007b9a88();
    /* 0052e5d7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e5da: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e5dfu); f_0078730c();
    /* 0052e5df: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e5e2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e5e5: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e5eb: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e5f1: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 0052e5f7: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e5fa: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e5fd: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0052e600: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x52e605u); f_007b4f54();
    /* 0052e605: push dword ptr [0xa73354] */ { u32 v = R32((u32)(0xa73354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052e60b: push dword ptr [0xa73358] */ { u32 v = R32((u32)(0xa73358u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052e611: push dword ptr [0xa73368] */ { u32 v = R32((u32)(0xa73368u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052e617: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e61a: mov dword ptr [ecx + 0x358], 0x9bc4cc */ W32((u32)(r_ecx+0x358u), 0x9bc4ccu);
    /* 0052e624: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 0052e62e: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x52e633u); f_007868f8();
    /* 0052e633: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e636: mov ebx, dword ptr [edx + 0x37c] */ r_ebx = R32((u32)(r_edx+0x37cu));
    /* 0052e63c: mov dword ptr [edx + 0x3c0], 0 */ W32((u32)(r_edx+0x3c0u), 0x0u);
    /* 0052e646: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e648: mov dword ptr [edx + 0x3bc], 0 */ W32((u32)(r_edx+0x3bcu), 0x0u);
    /* 0052e652: mov dword ptr [edx + 0x3a8], eax */ W32((u32)(r_edx+0x3a8u), r_eax);
    /* 0052e658: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
    /* 0052e65f: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
    /* 0052e666: mov dword ptr [edx + 0x3b8], 0 */ W32((u32)(r_edx+0x3b8u), 0x0u);
    /* 0052e670: mov dword ptr [edx + 0x3a0], eax */ W32((u32)(r_edx+0x3a0u), r_eax);
    /* 0052e676: mov dword ptr [edx + 0x3ac], eax */ W32((u32)(r_edx+0x3acu), r_eax);
    /* 0052e67c: mov dword ptr [edx + 0x424], eax */ W32((u32)(r_edx+0x424u), r_eax);
    /* 0052e682: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
    /* 0052e68c: mov dword ptr [edx + 0x420], eax */ W32((u32)(r_edx+0x420u), r_eax);
    /* 0052e692: mov dword ptr [edx + 0x41c], eax */ W32((u32)(r_edx+0x41cu), r_eax);
    /* 0052e698: mov dword ptr [edx + 0x418], eax */ W32((u32)(r_edx+0x418u), r_eax);
    /* 0052e69e: mov dword ptr [edx + 0x3c8], 0 */ W32((u32)(r_edx+0x3c8u), 0x0u);
    /* 0052e6a8: mov dword ptr [edx + 0x3b0], eax */ W32((u32)(r_edx+0x3b0u), r_eax);
    /* 0052e6ae: lea ecx, [edx + 0x37c] */ r_ecx = (u32)(r_edx+0x37cu);
    /* 0052e6b4: mov dword ptr [edx + 0x3c4], 0 */ W32((u32)(r_edx+0x3c4u), 0x0u);
    /* 0052e6be: mov dword ptr [edx + 0x3d8], 0 */ W32((u32)(r_edx+0x3d8u), 0x0u);
    /* 0052e6c8: mov dword ptr [edx + 0x3d4], 0 */ W32((u32)(r_edx+0x3d4u), 0x0u);
    /* 0052e6d2: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
    /* 0052e6dc: mov dword ptr [edx + 0x3e4], 0 */ W32((u32)(r_edx+0x3e4u), 0x0u);
    /* 0052e6e6: mov dword ptr [edx + 0x3e0], 0 */ W32((u32)(r_edx+0x3e0u), 0x0u);
    /* 0052e6f0: mov dword ptr [edx + 0x3dc], 0 */ W32((u32)(r_edx+0x3dcu), 0x0u);
    /* 0052e6fa: mov dword ptr [edx + 0x3b4], 0 */ W32((u32)(r_edx+0x3b4u), 0x0u);
    /* 0052e704: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x52e707u); call_ind(t); }
    /* 0052e707: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e70a: fld dword ptr [edx + 0x35c] */ FPUSH(R_F32((u32)(r_edx+0x35cu)));
    /* 0052e710: fcomp dword ptr [0x922604] */ fx_compare(ST(0), R_F32((u32)(0x922604u))); FPOP();
    /* 0052e716: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052e718: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fO = 0; }
    /* 0052e71a: mov dword ptr [edx + 0x3e8], ecx */ W32((u32)(r_edx+0x3e8u), r_ecx);
    /* 0052e720: mov dword ptr [edx + 0x398], 1 */ W32((u32)(r_edx+0x398u), 0x1u);
    /* 0052e72a: mov dword ptr [edx + 0x3ec], ecx */ W32((u32)(r_edx+0x3ecu), r_ecx);
    /* 0052e730: mov dword ptr [edx + 0x3f0], ecx */ W32((u32)(r_edx+0x3f0u), r_ecx);
    /* 0052e736: mov dword ptr [edx + 0x3f4], ecx */ W32((u32)(r_edx+0x3f4u), r_ecx);
    /* 0052e73c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052e73d: je 0x52e7a3 */ if (fZ) goto L_0052e7a3;
L_0052e73f:; BB(0x0052e73f);
    /* 0052e73f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e741: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 0052e744: or ebx, 0x2000 */ {  u32 a = r_ebx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0052e74a: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 0052e74d: mov ecx, edx */ r_ecx = r_edx;
    /* 0052e74f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e754u); f_007706b0();
    /* 0052e754: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052e757: mov esi, dword ptr [edx + 0x300] */ r_esi = R32((u32)(r_edx+0x300u));
    /* 0052e75d: mov edi, dword ptr [edx + 0x304] */ r_edi = R32((u32)(r_edx+0x304u));
    /* 0052e763: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0052e768: mov word ptr [edx + 0x340], bx */ W16((u32)(r_edx+0x340u), (u16)r_ebx);
    /* 0052e76f: mov ebx, dword ptr [edx + 0x308] */ r_ebx = R32((u32)(r_edx+0x308u));
    /* 0052e775: mov dword ptr [edx + 0x3b4], 0 */ W32((u32)(r_edx+0x3b4u), 0x0u);
    /* 0052e77f: mov dword ptr [edx + 0x298], esi */ W32((u32)(r_edx+0x298u), r_esi);
    /* 0052e785: mov dword ptr [edx + 0x29c], edi */ W32((u32)(r_edx+0x29cu), r_edi);
    /* 0052e78b: mov dword ptr [edx + 0x2a0], ebx */ W32((u32)(r_edx+0x2a0u), r_ebx);
    /* 0052e791: mov dword ptr [edx + 0x2a4], esi */ W32((u32)(r_edx+0x2a4u), r_esi);
    /* 0052e797: mov dword ptr [edx + 0x2a8], edi */ W32((u32)(r_edx+0x2a8u), r_edi);
    /* 0052e79d: mov dword ptr [edx + 0x2ac], ebx */ W32((u32)(r_edx+0x2acu), r_ebx);
L_0052e7a3:; BB(0x0052e7a3);
    /* 0052e7a3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052e7a6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e7a9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052e7ac: mov eax, edx */ r_eax = r_edx;
    /* 0052e7ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052e7b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052e7b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e7ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e7bb: ret 8 */ FN_RET(0x0052e44c); r_esp += 12; return;
}

void f_0052e7c0(void) /* sub_52E7C0 */
{
    FN_ENTER(0x0052e7c0);
    /* 0052e7c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e7c1: mov esi, ecx */ r_esi = r_ecx;
    /* 0052e7c3: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0052e7ca: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052e7cd: ja 0x52e827 */ if ((!fC&&!fZ)) goto L_0052e827;
L_0052e7cf:; BB(0x0052e7cf);
    /* 0052e7cf: mov eax, dword ptr [eax*4 + 0x92248c] */ r_eax = R32((u32)(r_eax*4+0x92248cu));
    /* 0052e7d6: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e7c0); r_esp += 4; return;
}

void f_0052e7d8(void)
{
    FN_ENTER(0x0052e7d8);
    /* 0052e7d8: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e7da: call 0x52e898 */ r_esp -= 4; W32(r_esp, 0x52e7dfu); f_0052e898();
    /* 0052e7df: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e7d8); r_esp += 4; return;
}

void f_0052e7e1(void)
{
    FN_ENTER(0x0052e7e1);
    /* 0052e7e1: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e7e3: call 0x52ea00 */ r_esp -= 4; W32(r_esp, 0x52e7e8u); f_0052ea00();
    /* 0052e7e8: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e7e1); r_esp += 4; return;
}

void f_0052e7ea(void)
{
    FN_ENTER(0x0052e7ea);
    /* 0052e7ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e7ec: call 0x52eb3c */ r_esp -= 4; W32(r_esp, 0x52e7f1u); f_0052eb3c();
    /* 0052e7f1: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e7ea); r_esp += 4; return;
}

void f_0052e7f3(void)
{
    FN_ENTER(0x0052e7f3);
    /* 0052e7f3: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e7f5: call 0x52ebc0 */ r_esp -= 4; W32(r_esp, 0x52e7fau); f_0052ebc0();
    /* 0052e7fa: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e7f3); r_esp += 4; return;
}

void f_0052e7fc(void)
{
    FN_ENTER(0x0052e7fc);
    /* 0052e7fc: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e7fe: call 0x52f18c */ r_esp -= 4; W32(r_esp, 0x52e803u); f_0052f18c();
    /* 0052e803: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e7fc); r_esp += 4; return;
}

void f_0052e805(void)
{
    FN_ENTER(0x0052e805);
    /* 0052e805: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e807: call 0x52fb78 */ r_esp -= 4; W32(r_esp, 0x52e80cu); f_0052fb78();
    /* 0052e80c: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e805); r_esp += 4; return;
}

void f_0052e80e(void)
{
    FN_ENTER(0x0052e80e);
    /* 0052e80e: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e810: call 0x5301f0 */ r_esp -= 4; W32(r_esp, 0x52e815u); f_005301f0();
    /* 0052e815: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e80e); r_esp += 4; return;
}

void f_0052e817(void)
{
    FN_ENTER(0x0052e817);
    /* 0052e817: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e819: call 0x53044c */ r_esp -= 4; W32(r_esp, 0x52e81eu); f_0053044c();
    /* 0052e81e: jmp 0x52e827 */ goto L_0052e827;
L_0052e827:; BB(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e817); r_esp += 4; return;
}

void f_0052e820(void)
{
    FN_ENTER(0x0052e820);
    /* 0052e820: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e822: call 0x530554 */ r_esp -= 4; W32(r_esp, 0x52e827u); f_00530554();
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e820); r_esp += 4; return;
}

void f_0052e827(void)
{
    FN_ENTER(0x0052e827);
    /* 0052e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e829: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52e82eu); f_00770738();
    /* 0052e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e830: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e832:; BB(0x0052e832);
    /* 0052e832: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0052e835: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e83a: je 0x52e857 */ if (fZ) goto L_0052e857;
L_0052e83c:; BB(0x0052e83c);
    /* 0052e83c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052e83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052e841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e842: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 0052e848: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052e84d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052e850: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e852: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52e857u); f_007706b0();
L_0052e857:; BB(0x0052e857);
    /* 0052e857: mov ecx, esi */ r_ecx = r_esi;
    /* 0052e859: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52e85eu); f_0078730c();
    /* 0052e85e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e861: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0052e867: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052e86d: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0052e870: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 0052e876: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0052e879: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0052e87c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x52e881u); f_006946a8();
    /* 0052e881: fld dword ptr [0x9225fc] */ FPUSH(R_F32((u32)(0x9225fcu)));
    /* 0052e887: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 0052e88d: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 0052e893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e897: ret  */ FN_RET(0x0052e827); r_esp += 4; return;
}

void f_0052e898(void) /* sub_52E898 */
{
    FN_ENTER(0x0052e898);
    /* 0052e898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e899: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e89a: mov edi, ecx */ r_edi = r_ecx;
    /* 0052e89c: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052e89f: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052e8a4: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052e8a7: mov ecx, edi */ r_ecx = r_edi;
    /* 0052e8a9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52e8aeu); f_007aa094();
    /* 0052e8ae: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0052e8b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e8b7: je 0x52e950 */ if (fZ) goto L_0052e950;
L_0052e8bd:; BB(0x0052e8bd);
    /* 0052e8bd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e8c0: je 0x52e993 */ if (fZ) goto L_0052e993;
L_0052e8c6:; BB(0x0052e8c6);
    /* 0052e8c6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e8c9: jne 0x52e91b */ if (!fZ) goto L_0052e91b;
L_0052e8cb:; BB(0x0052e8cb);
    /* 0052e8cb: push 0x42500000 */ { u32 v = 0x42500000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8d0: mov ecx, edi */ r_ecx = r_edi;
    /* 0052e8d2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52e8d7u); f_007aaa30();
    /* 0052e8d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052e8d9: je 0x52e9fb */ if (fZ) goto L_0052e9fb;
L_0052e8df:; BB(0x0052e8df);
    /* 0052e8df: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0052e8e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8e7: push 0x2e3 */ { u32 v = 0x2e3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8ec: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52e8f1u); f_00814298();
    /* 0052e8f1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8f4: call 0x578658 */ r_esp -= 4; W32(r_esp, 0x52e8f9u); f_00578658();
    /* 0052e8f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e8fa: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x52e8ffu); f_005787fc();
    /* 0052e8ff: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e902: mov dword ptr [edi + 0x3a8], 0xa */ W32((u32)(r_edi+0x3a8u), 0xau);
    /* 0052e90c: mov eax, 4 */ r_eax = 0x4u;
    /* 0052e911: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0052e918: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e919: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052e91a: ret  */ FN_RET(0x0052e898); r_esp += 4; return;
L_0052e91b:; BB(0x0052e91b);
    /* 0052e91b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e91e: jne 0x52e947 */ if (!fZ) goto L_0052e947;
L_0052e920:; BB(0x0052e920);
    /* 0052e920: mov eax, dword ptr [edi + 0x3a8] */ r_eax = R32((u32)(r_edi+0x3a8u));
    /* 0052e926: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052e929: mov dword ptr [edi + 0x3a8], eax */ W32((u32)(r_edi+0x3a8u), r_eax);
    /* 0052e92f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052e931: jge 0x52e9fb */ if ((fS==fO)) goto L_0052e9fb;
L_0052e937:; BB(0x0052e937);
    /* 0052e937: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0052e93b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052e940: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0052e944: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e945: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052e946: ret  */ FN_RET(0x0052e898); r_esp += 4; return;
L_0052e947:; BB(0x0052e947);
    /* 0052e947: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e949: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
L_0052e950:; BB(0x0052e950);
    /* 0052e950: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e952: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e954: mov ecx, edi */ r_ecx = r_edi;
    /* 0052e956: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52e95bu); f_00772b44();
    /* 0052e95b: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e960: mov ecx, edi */ r_ecx = r_edi;
    /* 0052e962: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52e967u); f_007aaa30();
    /* 0052e967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052e969: je 0x52e9fb */ if (fZ) goto L_0052e9fb;
L_0052e96f:; BB(0x0052e96f);
    /* 0052e96f: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0052e972: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e976: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e977: push 0x2dc */ { u32 v = 0x2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e97c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52e981u); f_00814298();
    /* 0052e981: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052e984: mov eax, 2 */ r_eax = 0x2u;
    /* 0052e989: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0052e990: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e991: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052e992: ret  */ FN_RET(0x0052e898); r_esp += 4; return;
L_0052e993:; BB(0x0052e993);
    /* 0052e993: fld dword ptr [0x9225f4] */ FPUSH(R_F32((u32)(0x9225f4u)));
    /* 0052e999: fadd dword ptr [edi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x304u));
    /* 0052e99f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052e9a1: fstp dword ptr [edi + 0x304] */ W_F32((u32)(r_edi+0x304u), ST(0)); FPOP();
    /* 0052e9a7: mov ecx, edi */ r_ecx = r_edi;
    /* 0052e9a9: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x52e9acu); call_ind(t); }
    /* 0052e9ac: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e9b1: fld dword ptr [0x9225f0] */ FPUSH(R_F32((u32)(0x9225f0u)));
    /* 0052e9b7: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0052e9bd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052e9bf: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0052e9c5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0052e9c7: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0052e9cd: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 0052e9d3: mov ecx, edi */ r_ecx = r_edi;
    /* 0052e9d5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52e9dau); f_007aaa30();
    /* 0052e9da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052e9dc: je 0x52e9fb */ if (fZ) goto L_0052e9fb;
L_0052e9de:; BB(0x0052e9de);
    /* 0052e9de: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e9e3: mov eax, 3 */ r_eax = 0x3u;
    /* 0052e9e8: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0052e9ef: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052e9f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052e9f3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x52e9f8u); f_0050b510();
    /* 0052e9f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0052e9fb:; BB(0x0052e9fb);
    /* 0052e9fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052e9fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052e9fd: ret  */ FN_RET(0x0052e898); r_esp += 4; return;
}

void f_0052ea00(void) /* sub_52EA00 */
{
    FN_ENTER(0x0052ea00);
    /* 0052ea00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea02: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ea05: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052ea07: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052ea0a: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052ea0f: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052ea12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052ea14: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52ea19u); f_007aa094();
    /* 0052ea19: mov dword ptr [ebp + 0x314], 0 */ W32((u32)(r_ebp+0x314u), 0x0u);
    /* 0052ea23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052ea27: mov dword ptr [ebp + 0x30c], 0 */ W32((u32)(r_ebp+0x30cu), 0x0u);
    /* 0052ea31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea33: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52ea38u); f_00772b44();
    /* 0052ea38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052ea3a: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52ea3fu); f_007b6880();
    /* 0052ea3f: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052ea46: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52ea4bu); f_007aaa30();
    /* 0052ea4b: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0052ea4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ea50: je 0x52ea64 */ if (fZ) goto L_0052ea64;
L_0052ea52:; BB(0x0052ea52);
    /* 0052ea52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ea54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea57: push 0x2db */ { u32 v = 0x2dbu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ea5c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52ea61u); f_00814298();
    /* 0052ea61: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052ea64:; BB(0x0052ea64);
    /* 0052ea64: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0052ea6a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ea6d: je 0x52eb27 */ if (fZ) goto L_0052eb27;
L_0052ea73:; BB(0x0052ea73);
    /* 0052ea73: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0052ea76: and edx, 0xfffff9ff */ {  u32 a = r_edx; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052ea7c: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0052ea7f: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 0052ea85: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0052ea88: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052ea8d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0052ea90: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0052ea97: movsx eax, word ptr [ebp + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 0052ea9e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0052eaa1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0052eaa4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052eaa8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0052eaac: fmul dword ptr [0x9225d8] */ ST(0) = ST(0) * R_F32((u32)(0x9225d8u));
    /* 0052eab2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052eab4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052eab6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052eab7: jbe 0x52eb20 */ if ((fC||fZ)) goto L_0052eb20;
L_0052eab9:; BB(0x0052eab9);
    /* 0052eab9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eabb: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052eabe: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052eac3: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052eac6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052eac8: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52eacdu); f_007706b0();
    /* 0052eacd: mov edx, dword ptr [ebp + 0x300] */ r_edx = R32((u32)(r_ebp+0x300u));
    /* 0052ead3: mov ecx, dword ptr [ebp + 0x308] */ r_ecx = R32((u32)(r_ebp+0x308u));
    /* 0052ead9: mov dword ptr [ebp + 0x3b4], 0 */ W32((u32)(r_ebp+0x3b4u), 0x0u);
    /* 0052eae3: mov dword ptr [ebp + 0x298], edx */ W32((u32)(r_ebp+0x298u), r_edx);
    /* 0052eae9: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052eaee: mov word ptr [ebp + 0x340], ax */ W16((u32)(r_ebp+0x340u), (u16)r_eax);
    /* 0052eaf5: mov eax, dword ptr [ebp + 0x304] */ r_eax = R32((u32)(r_ebp+0x304u));
    /* 0052eafb: mov dword ptr [ebp + 0x29c], eax */ W32((u32)(r_ebp+0x29cu), r_eax);
    /* 0052eb01: mov dword ptr [ebp + 0x2a0], ecx */ W32((u32)(r_ebp+0x2a0u), r_ecx);
    /* 0052eb07: mov dword ptr [ebp + 0x2a4], edx */ W32((u32)(r_ebp+0x2a4u), r_edx);
    /* 0052eb0d: movsx edx, word ptr [ebp + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 0052eb14: mov dword ptr [ebp + 0x2a8], eax */ W32((u32)(r_ebp+0x2a8u), r_eax);
    /* 0052eb1a: mov dword ptr [ebp + 0x2ac], ecx */ W32((u32)(r_ebp+0x2acu), r_ecx);
L_0052eb20:; BB(0x0052eb20);
    /* 0052eb20: mov word ptr [ebp + 0x346], dx */ W16((u32)(r_ebp+0x346u), (u16)r_edx);
L_0052eb27:; BB(0x0052eb27);
    /* 0052eb27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb2b: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb31: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52eb36u); f_00805608();
    /* 0052eb36: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052eb39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052eb3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052eb3b: ret  */ FN_RET(0x0052ea00); r_esp += 4; return;
}

void f_0052eb3c(void) /* sub_52EB3C */
{
    FN_ENTER(0x0052eb3c);
    /* 0052eb3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052eb3f: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052eb42: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052eb47: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052eb4a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052eb4c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52eb51u); f_007aa094();
    /* 0052eb51: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052eb54: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052eb59: jne 0x52eb66 */ if (!fZ) goto L_0052eb66;
L_0052eb5b:; BB(0x0052eb5b);
    /* 0052eb5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb5f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052eb61: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52eb66u); f_00772b44();
L_0052eb66:; BB(0x0052eb66);
    /* 0052eb66: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052eb68: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52eb6du); f_007b6880();
    /* 0052eb6d: mov eax, dword ptr [ebp + 0x3a4] */ r_eax = R32((u32)(r_ebp+0x3a4u));
    /* 0052eb73: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0052eb76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052eb78: jl 0x52eb97 */ if ((fS!=fO)) goto L_0052eb97;
L_0052eb7a:; BB(0x0052eb7a);
    /* 0052eb7a: mov dword ptr [ebp + 0x3a4], edx */ W32((u32)(r_ebp+0x3a4u), r_edx);
L_0052eb80:; BB(0x0052eb80);
    /* 0052eb80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb84: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0052eb87: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052eb8d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52eb92u); f_00805608();
    /* 0052eb92: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052eb95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052eb96: ret  */ FN_RET(0x0052eb3c); r_esp += 4; return;
L_0052eb97:; BB(0x0052eb97);
    /* 0052eb97: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052eb9a: movsx edx, word ptr [ebp + 0x342] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x342u));
    /* 0052eba1: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052eba6: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052eba9: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 0052ebb0: mov dword ptr [ebp + 0x3a4], edx */ W32((u32)(r_ebp+0x3a4u), r_edx);
    /* 0052ebb6: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
    /* 0052ebbd: jmp 0x52eb80 */ goto L_0052eb80;
}

void f_0052ebc0(void) /* sub_52EBC0 */
{
    FN_ENTER(0x0052ebc0);
    /* 0052ebc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebc1: mov ebx, esp */ r_ebx = r_esp;
    /* 0052ebc3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0052ebc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebc8: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0052ebcb: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0052ebcf: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ebd1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebd3: push 0x8d4cc2 */ { u32 v = 0x8d4cc2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebd8: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052ebde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ebdf: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0052ebe6: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ebe9: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052ebec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0052ebef: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0052ebf2: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0052ebf5: movzx eax, word ptr [ecx + 0x340] */ r_eax = (u32)R16((u32)(r_ecx+0x340u));
    /* 0052ebfc: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ec01: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052ec04: jge 0x52ec36 */ if ((fS==fO)) goto L_0052ec36;
L_0052ec06:; BB(0x0052ec06);
    /* 0052ec06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec07: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x52ec0cu); f_0068d5a8();
    /* 0052ec0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052ec0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ec0f: je 0x52ec2a */ if (fZ) goto L_0052ec2a;
L_0052ec11:; BB(0x0052ec11);
    /* 0052ec11: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0052ec17: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ec1d: jne 0x52ec2a */ if (!fZ) goto L_0052ec2a;
L_0052ec1f:; BB(0x0052ec1f);
    /* 0052ec1f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ec22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec23: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52ec28u); f_007706b0();
    /* 0052ec28: jmp 0x52ec49 */ goto L_0052ec49;
L_0052ec2a:; BB(0x0052ec2a);
    /* 0052ec2a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ec2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec2f: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52ec34u); f_007706b0();
    /* 0052ec34: jmp 0x52ec49 */ goto L_0052ec49;
L_0052ec36:; BB(0x0052ec36);
    /* 0052ec36: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0052ec3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec3d: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 0052ec44: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x52ec49u); f_007706b0();
L_0052ec49:; BB(0x0052ec49);
    /* 0052ec49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ec4c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052ec4f: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052ec54: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0052ec57: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x52ec5cu); f_007aa094();
    /* 0052ec5c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ec5f: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52ec64u); f_00770738();
    /* 0052ec64: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052ec67: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ec6a: movsx eax, word ptr [eax + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x330u));
    /* 0052ec71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ec73: je 0x52f04b */ if (fZ) goto L_0052f04b;
L_0052ec79:; BB(0x0052ec79);
    /* 0052ec79: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ec7c: je 0x52ee7d */ if (fZ) goto L_0052ee7d;
L_0052ec82:; BB(0x0052ec82);
    /* 0052ec82: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ec85: jne 0x52ee36 */ if (!fZ) goto L_0052ee36;
L_0052ec8b:; BB(0x0052ec8b);
    /* 0052ec8b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ec8e: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0052ec91: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052ec94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052ec96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec9a: push 0x2e1 */ { u32 v = 0x2e1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ec9f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x52eca4u); f_008144b0();
    /* 0052eca4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052eca7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ecaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ecac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ecae: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52ecb3u); f_00772b44();
    /* 0052ecb3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ecb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ecb8: je 0x52edf4 */ if (fZ) goto L_0052edf4;
L_0052ecbe:; BB(0x0052ecbe);
    /* 0052ecbe: mov edi, eax */ r_edi = r_eax;
    /* 0052ecc0: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0052ecc3: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0052ecc9: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 0052eccf: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 0052ecd5: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0052ecd8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ecdb: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 0052ecde: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0052ece1: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 0052ece7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52ececu); f_0082f9c4();
    /* 0052ecec: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 0052ecef: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 0052ecf2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052ecf4: fmul qword ptr [0x922518] */ ST(0) = ST(0) * R_F64((u32)(0x922518u));
    /* 0052ecfa: fdiv qword ptr [0x922510] */ ST(0) = ST(0) / R_F64((u32)(0x922510u));
    /* 0052ed00: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ed03: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0052ed06: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0052ed0a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052ed0f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0052ed12: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0052ed15: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052ed18: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0052ed1b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052ed1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ed1f: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052ed22: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x52ed27u); f_007a9018();
    /* 0052ed27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ed2a: mov edx, dword ptr [0xa73360] */ r_edx = R32((u32)(0xa73360u));
    /* 0052ed30: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ed33: jl 0x52ed4c */ if ((fS!=fO)) goto L_0052ed4c;
L_0052ed35:; BB(0x0052ed35);
    /* 0052ed35: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ed38: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0052ed3e: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ed41: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 0052ed47: jmp 0x52ee06 */ goto L_0052ee06;
L_0052ed4c:; BB(0x0052ed4c);
    /* 0052ed4c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ed4f: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0052ed52: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0052ed55: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 0052ed58: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0052ed5b: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0052ed5e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ed61: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 0052ed64: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0052ed67: lea edx, [eax + 0x3c4] */ r_edx = (u32)(r_eax+0x3c4u);
    /* 0052ed6d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52ed72u); f_0082f9c4();
    /* 0052ed72: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 0052ed75: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ed77: fld dword ptr [ebp - 0x74] */ FPUSH(R_F32((u32)(r_ebp+0xffffff8cu)));
    /* 0052ed7a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ed7c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052ed7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ed7f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052ed82: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x52ed87u); f_0082dc9c();
    /* 0052ed87: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052ed89: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ed8c: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0052ed92: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ed95: je 0x52ee06 */ if (fZ) goto L_0052ee06;
L_0052ed97:; BB(0x0052ed97);
    /* 0052ed97: mov eax, edi */ r_eax = r_edi;
    /* 0052ed99: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0052ed9c: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052eda2: jne 0x52ee06 */ if (!fZ) goto L_0052ee06;
L_0052eda4:; BB(0x0052eda4);
    /* 0052eda4: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0052edab: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052edb0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x52edb5u); f_005caba4();
    /* 0052edb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052edb6: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0052edb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052edbb: je 0x52ede2 */ if (fZ) goto L_0052ede2;
L_0052edbd:; BB(0x0052edbd);
    /* 0052edbd: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 0052edc4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052edcb: mov edx, edi */ r_edx = r_edi;
    /* 0052edcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052edce: mov ecx, eax */ r_ecx = r_eax;
    /* 0052edd0: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052edd6: call 0x52f110 */ r_esp -= 4; W32(r_esp, 0x52eddbu); f_0052f110();
    /* 0052eddb: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0052ede2:; BB(0x0052ede2);
    /* 0052ede2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052ede9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052edec: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0052edf2: jmp 0x52ee06 */ goto L_0052ee06;
L_0052edf4:; BB(0x0052edf4);
    /* 0052edf4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052edf7: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0052edfd: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ee00: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
L_0052ee06:; BB(0x0052ee06);
    /* 0052ee06: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ee09: je 0x52efcf */ if (fZ) goto L_0052efcf;
L_0052ee0f:; BB(0x0052ee0f);
    /* 0052ee0f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ee12: mov dword ptr [ecx + 0x3a4], 0xa */ W32((u32)(r_ecx+0x3a4u), 0xau);
    /* 0052ee1c: mov eax, 4 */ r_eax = 0x4u;
    /* 0052ee21: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0052ee28: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052ee2a: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0052ee31: jmp 0x52efcf */ goto L_0052efcf;
L_0052ee36:; BB(0x0052ee36);
    /* 0052ee36: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ee39: jne 0x52ee6f */ if (!fZ) goto L_0052ee6f;
L_0052ee3b:; BB(0x0052ee3b);
    /* 0052ee3b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ee3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee42: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52ee47u); f_00772b44();
    /* 0052ee47: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ee4a: mov eax, dword ptr [eax + 0x3a4] */ r_eax = R32((u32)(r_eax+0x3a4u));
    /* 0052ee50: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ee53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052ee55: jl 0x52f003 */ if ((fS!=fO)) goto L_0052f003;
L_0052ee5b:; BB(0x0052ee5b);
    /* 0052ee5b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ee5e: mov dword ptr [edx + 0x3a4], eax */ W32((u32)(r_edx+0x3a4u), r_eax);
    /* 0052ee64: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 0052ee67: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052ee6a: jmp 0x52efcf */ goto L_0052efcf;
L_0052ee6f:; BB(0x0052ee6f);
    /* 0052ee6f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ee72: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0052ee75: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052ee78: jmp 0x52efcf */ goto L_0052efcf;
L_0052ee7d:; BB(0x0052ee7d);
    /* 0052ee7d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ee80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ee82: je 0x52efa7 */ if (fZ) goto L_0052efa7;
L_0052ee88:; BB(0x0052ee88);
    /* 0052ee88: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee8d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ee90: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52ee95u); f_007aaa30();
    /* 0052ee95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ee97: jne 0x52eea7 */ if (!fZ) goto L_0052eea7;
L_0052ee99:; BB(0x0052ee99);
    /* 0052ee99: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ee9c: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0052ee9f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052eea2: jmp 0x52efcf */ goto L_0052efcf;
L_0052eea7:; BB(0x0052eea7);
    /* 0052eea7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052eeaa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052eead: mov dword ptr [eax + 0x3a4], 0 */ W32((u32)(r_eax+0x3a4u), 0x0u);
    /* 0052eeb7: mov esi, 2 */ r_esi = 0x2u;
    /* 0052eebc: mov word ptr [eax + 0x330], si */ W16((u32)(r_eax+0x330u), (u16)r_esi);
    /* 0052eec3: mov edi, 4 */ r_edi = 0x4u;
    /* 0052eec8: mov word ptr [eax + 0xb8], di */ W16((u32)(r_eax+0xb8u), (u16)r_edi);
    /* 0052eecf: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 0052eed5: lea esi, [eax + 0x3c4] */ r_esi = (u32)(r_eax+0x3c4u);
    /* 0052eedb: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0052eede: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 0052eee4: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0052eee7: mov edx, dword ptr [ecx + 0x308] */ r_edx = R32((u32)(r_ecx+0x308u));
    /* 0052eeed: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0052eef0: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0052eef3: mov edx, esi */ r_edx = r_esi;
    /* 0052eef5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52eefau); f_0082f9c4();
    /* 0052eefa: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 0052eefd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052eeff: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 0052ef02: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052ef04: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0052ef06: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef07: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052ef0a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x52ef0fu); f_0082dc9c();
    /* 0052ef0f: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 0052ef12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052ef14: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052ef16: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 0052ef19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052ef1b: fmul qword ptr [0x922518] */ ST(0) = ST(0) * R_F64((u32)(0x922518u));
    /* 0052ef21: fdiv qword ptr [0x922510] */ ST(0) = ST(0) / R_F64((u32)(0x922510u));
    /* 0052ef27: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0052ef2a: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0052ef2e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef33: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0052ef36: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0052ef39: fistp dword ptr [ebp - 0x58] */ W32((u32)(r_ebp+0xffffffa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052ef3c: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0052ef3f: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 0052ef42: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0052ef49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052ef4b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0052ef4d: fmul qword ptr [0x922518] */ ST(0) = ST(0) * R_F64((u32)(0x922518u));
    /* 0052ef53: fdiv qword ptr [0x922510] */ ST(0) = ST(0) / R_F64((u32)(0x922510u));
    /* 0052ef59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ef5c: mov edi, dword ptr [ecx + 0x41c] */ r_edi = R32((u32)(r_ecx+0x41cu));
    /* 0052ef62: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 0052ef65: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0052ef69: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef6e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0052ef71: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0052ef74: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052ef77: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0052ef7a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052ef7d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052ef7f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0052ef82: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ef84: je 0x52f02b */ if (fZ) goto L_0052f02b;
L_0052ef8a:; BB(0x0052ef8a);
    /* 0052ef8a: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0052ef8d: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052ef94: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x52ef99u); f_0050bab4();
    /* 0052ef99: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ef9c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ef9f: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0052efa2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052efa5: jmp 0x52efcf */ goto L_0052efcf;
L_0052efa7:; BB(0x0052efa7);
    /* 0052efa7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052efaa: mov dword ptr [ecx + 0x3a4], 0xa */ W32((u32)(r_ecx+0x3a4u), 0xau);
    /* 0052efb4: mov eax, 4 */ r_eax = 0x4u;
    /* 0052efb9: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0052efc0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052efc2: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0052efc9: lea esi, [ecx + 0x38] */ r_esi = (u32)(r_ecx+0x38u);
    /* 0052efcc: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
L_0052efcf:; BB(0x0052efcf);
    /* 0052efcf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052efd2: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52efd7u); f_007b6880();
    /* 0052efd7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052efda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052efdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052efde: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052efe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052efe4: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x52efe9u); f_00805608();
    /* 0052efe9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052efec: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052efef: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052eff2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052eff5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052effc: mov esp, ebp */ r_esp = r_ebp;
    /* 0052effe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052efff: mov esp, ebx */ r_esp = r_ebx;
    /* 0052f001: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052f002: ret  */ FN_RET(0x0052ebc0); r_esp += 4; return;
L_0052f003:; BB(0x0052f003);
    /* 0052f003: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f006: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052f009: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
    /* 0052f013: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052f018: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0052f01b: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x52f020u); f_0053140c();
    /* 0052f020: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f023: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0052f026: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052f029: jmp 0x52efcf */ goto L_0052efcf;
L_0052f02b:; BB(0x0052f02b);
    /* 0052f02b: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0052f02e: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052f035: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x52f03au); f_00509b24();
    /* 0052f03a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f03d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f040: mov dword ptr [ecx + 0x41c], eax */ W32((u32)(r_ecx+0x41cu), r_eax);
    /* 0052f046: jmp 0x52ef8a */ goto L_0052ef8a;
L_0052f04b:; BB(0x0052f04b);
    /* 0052f04b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052f04e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f050: jne 0x52f075 */ if (!fZ) goto L_0052f075;
L_0052f052:; BB(0x0052f052);
    /* 0052f052: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f055: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0052f058: mov dword ptr [edx + 0x3a4], 0 */ W32((u32)(r_edx+0x3a4u), 0x0u);
    /* 0052f062: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052f067: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0052f06a: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 0052f06d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0052f070: jmp 0x52efcf */ goto L_0052efcf;
L_0052f075:; BB(0x0052f075);
    /* 0052f075: mov edi, eax */ r_edi = r_eax;
    /* 0052f077: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0052f07a: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0052f080: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 0052f086: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 0052f08c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0052f08f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f092: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 0052f095: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0052f098: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 0052f09e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52f0a3u); f_0082f9c4();
    /* 0052f0a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f0a6: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0052f0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f0aa: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 0052f0b0: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052f0b3: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52f0b8u); f_00771858();
    /* 0052f0b8: mov esi, eax */ r_esi = r_eax;
    /* 0052f0ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f0bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f0bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f0c1: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52f0c6u); f_00772b44();
    /* 0052f0c6: mov edx, dword ptr [0xa73360] */ r_edx = R32((u32)(0xa73360u));
    /* 0052f0cc: cmp esi, dword ptr [edx + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052f0cf: jge 0x52f101 */ if ((fS==fO)) goto L_0052f101;
L_0052f0d1:; BB(0x0052f0d1);
    /* 0052f0d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f0d4: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
    /* 0052f0de: mov eax, 1 */ r_eax = 0x1u;
    /* 0052f0e3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0052f0ea: mov edx, 4 */ r_edx = 0x4u;
    /* 0052f0ef: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0052f0f6: lea esi, [ecx + 0x38] */ r_esi = (u32)(r_ecx+0x38u);
    /* 0052f0f9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0052f0fc: jmp 0x52efcf */ goto L_0052efcf;
L_0052f101:; BB(0x0052f101);
    /* 0052f101: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f104: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0052f107: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052f10a: jmp 0x52efcf */ goto L_0052efcf;
}

