#include "protos.h"

void f_007af174(void) /* sub_7AF174 */
{
    FN_ENTER(0x007af174);
    /* 007af174: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007af175: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007af177: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 007af17e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007af17f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7af184u); f_0068d5a8();
    /* 007af184: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007af185: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 007af18b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af18d: je 0x7af19a */ if (fZ) goto L_007af19a;
L_007af18f:; BB(0x007af18f);
    /* 007af18f: mov ecx, eax */ r_ecx = r_eax;
    /* 007af191: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7af196u); f_008173b4();
    /* 007af196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af198: jne 0x7af1a1 */ if (!fZ) goto L_007af1a1;
L_007af19a:; BB(0x007af19a);
    /* 007af19a: mov eax, 1 */ r_eax = 0x1u;
    /* 007af19f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007af1a0: ret  */ FN_RET(0x007af174); r_esp += 4; return;
L_007af1a1:; BB(0x007af1a1);
    /* 007af1a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af1a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007af1a4: ret  */ FN_RET(0x007af174); r_esp += 4; return;
}

void f_007af1a8(void) /* sub_7AF1A8 */
{
    FN_ENTER(0x007af1a8);
    /* 007af1a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007af1a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007af1aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007af1ab: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007af1ad: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 007af1b0: call 0x7af628 */ r_esp -= 4; W32(r_esp, 0x7af1b5u); f_007af628();
    /* 007af1b5: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 007af1b8: call 0x7af694 */ r_esp -= 4; W32(r_esp, 0x7af1bdu); f_007af694();
    /* 007af1bd: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 007af1c0: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 007af1c6: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007af1c9: je 0x7af206 */ if (fZ) goto L_007af206;
L_007af1cb:; BB(0x007af1cb);
    /* 007af1cb: lea ebx, [ebp + 0x5c] */ r_ebx = (u32)(r_ebp+0x5cu);
    /* 007af1ce: movsx edi, word ptr [ebx + 0x14] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x14u));
    /* 007af1d2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af1d4: jne 0x7af1fd */ if (!fZ) goto L_007af1fd;
L_007af1d6:; BB(0x007af1d6);
    /* 007af1d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007af1d8: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 007af1db: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007af1de: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af1e1: je 0x7af1fd */ if (fZ) goto L_007af1fd;
L_007af1e3:; BB(0x007af1e3);
    /* 007af1e3: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007af1e9: mov dword ptr [ebp + 0x24], 9 */ W32((u32)(r_ebp+0x24u), 0x9u);
    /* 007af1f0: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007af1f3: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007af1f9: movsx edi, word ptr [ebx + 0x14] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x14u));
L_007af1fd:; BB(0x007af1fd);
    /* 007af1fd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007af200: mov word ptr [ebx + 0x14], di */ W16((u32)(r_ebx+0x14u), (u16)r_edi);
    /* 007af204: jmp 0x7af20f */ goto L_007af20f;
L_007af206:; BB(0x007af206);
    /* 007af206: lea ebx, [ebp + 0x5c] */ r_ebx = (u32)(r_ebp+0x5cu);
    /* 007af209: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007af20b: mov word ptr [ebx + 0x14], ax */ W16((u32)(r_ebx+0x14u), (u16)r_eax);
L_007af20f:; BB(0x007af20f);
    /* 007af20f: mov edi, dword ptr [ebp + 0x74] */ r_edi = R32((u32)(r_ebp+0x74u));
    /* 007af212: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 007af218: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007af21c: mov ecx, edi */ r_ecx = r_edi;
    /* 007af21e: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007af223: call 0x7af2a0 */ r_esp -= 4; W32(r_esp, 0x7af228u); f_007af2a0();
    /* 007af228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af22a: je 0x7af299 */ if (fZ) goto L_007af299;
L_007af22c:; BB(0x007af22c);
    /* 007af22c: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 007af232: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007af235: mov dword ptr [edi + 0x8c], eax */ W32((u32)(r_edi+0x8cu), r_eax);
    /* 007af23b: mov edx, dword ptr [ebp + 0x74] */ r_edx = R32((u32)(r_ebp+0x74u));
    /* 007af23e: mov edi, dword ptr [edx + 0x90] */ r_edi = R32((u32)(r_edx+0x90u));
    /* 007af244: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af24a: je 0x7af293 */ if (fZ) goto L_007af293;
L_007af24c:; BB(0x007af24c);
    /* 007af24c: movsx ecx, word ptr [ebx + 0x12] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x12u));
    /* 007af250: lea eax, [ebx + 0x12] */ r_eax = (u32)(r_ebx+0x12u);
    /* 007af253: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af255: jne 0x7af27d */ if (!fZ) goto L_007af27d;
L_007af257:; BB(0x007af257);
    /* 007af257: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007af259: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007af25c: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 007af25f: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af262: je 0x7af27d */ if (fZ) goto L_007af27d;
L_007af264:; BB(0x007af264);
    /* 007af264: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 007af26a: mov dword ptr [ebp + 0x24], 0xc */ W32((u32)(r_ebp+0x24u), 0xcu);
    /* 007af271: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af274: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 007af27a: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
L_007af27d:; BB(0x007af27d);
    /* 007af27d: add word ptr [ebx + 0x10], 1 */ { u32 ad = (u32)(r_ebx+0x10u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007af282: cmp ecx, 0x2bc */ {  u32 a = r_ecx; u32 b = 0x2bcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007af288: jl 0x7af299 */ if ((fS!=fO)) goto L_007af299;
L_007af28a:; BB(0x007af28a);
    /* 007af28a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af28c: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007af28f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007af290: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007af291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007af292: ret  */ FN_RET(0x007af1a8); r_esp += 4; return;
L_007af293:; BB(0x007af293);
    /* 007af293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007af295: mov word ptr [ebx + 0x12], ax */ W16((u32)(r_ebx+0x12u), (u16)r_eax);
L_007af299:; BB(0x007af299);
    /* 007af299: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007af29a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007af29b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007af29c: ret  */ FN_RET(0x007af1a8); r_esp += 4; return;
}

void f_007af2a0(void) /* sub_7AF2A0 */
{
    FN_ENTER(0x007af2a0);
    /* 007af2a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007af2a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007af2a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007af2a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007af2a4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007af2a7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007af2a9: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 007af2af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007af2b1: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007af2b5: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 007af2b9: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007af2bd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007af2c1: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x7af2c6u); f_007ba980();
    /* 007af2c6: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 007af2cb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 007af2ce: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007af2d2: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 007af2d5: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 007af2d9: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 007af2dc: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 007af2e0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007af2e2: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 007af2e8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007af2ec: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 007af2ef: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 007af2f6: mov dword ptr [ebx + 0x10], edi */ W32((u32)(r_ebx+0x10u), r_edi);
    /* 007af2f9: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
    /* 007af2fc: mov dword ptr [ebx + 0x28], edi */ W32((u32)(r_ebx+0x28u), r_edi);
    /* 007af2ff: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 007af306: mov dword ptr [ebx + 0x34], edi */ W32((u32)(r_ebx+0x34u), r_edi);
    /* 007af309: mov dword ptr [ebx + 0x40], edi */ W32((u32)(r_ebx+0x40u), r_edi);
    /* 007af30c: mov dword ptr [ebx + 0x4c], edi */ W32((u32)(r_ebx+0x4cu), r_edi);
    /* 007af30f: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 007af316: mov dword ptr [ebx + 0x58], edi */ W32((u32)(r_ebx+0x58u), r_edi);
    /* 007af319: mov dword ptr [ebx + 0x64], edi */ W32((u32)(r_ebx+0x64u), r_edi);
    /* 007af31c: mov dword ptr [ebx + 0x70], edi */ W32((u32)(r_ebx+0x70u), r_edi);
    /* 007af31f: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 007af326: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 007af32d: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 007af334: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 007af33b: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 007af342: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 007af349: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 007af350: mov ebp, dword ptr [0xaae168] */ r_ebp = R32((u32)(0xaae168u));
    /* 007af356: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 007af35b: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af35d: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af35f: jge 0x7af472 */ if ((fS==fO)) goto L_007af472;
L_007af365:; BB(0x007af365);
    /* 007af365: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007af369: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007af36b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_007af36f:; BB(0x007af36f);
    /* 007af36f: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 007af376: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007af377: call 0x7b4420 */ r_esp -= 4; W32(r_esp, 0x7af37cu); f_007b4420();
    /* 007af37c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007af37d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af37f: je 0x7af456 */ if (fZ) goto L_007af456;
L_007af385:; BB(0x007af385);
    /* 007af385: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007af388: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af38d: je 0x7af456 */ if (fZ) goto L_007af456;
L_007af393:; BB(0x007af393);
    /* 007af393: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 007af399: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007af39b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007af39d: jle 0x7af456 */ if ((fZ||fS!=fO)) goto L_007af456;
L_007af3a3:; BB(0x007af3a3);
    /* 007af3a3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_007af3a6:; BB(0x007af3a6);
    /* 007af3a6: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 007af3ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af3ae: je 0x7af600 */ if (fZ) goto L_007af600;
L_007af3b4:; BB(0x007af3b4);
    /* 007af3b4: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 007af3b7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007af3b9: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007af3bb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007af3bd: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007af3bf: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007af3c1: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007af3c5: mov ebp, dword ptr [edx + ebp*4 + 0x18] */ r_ebp = R32((u32)(r_edx+r_ebp*4+0x18u));
    /* 007af3c9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af3cb: test ebp, 0x8000 */ {  u32 a = r_ebp; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af3d1: je 0x7af448 */ if (fZ) goto L_007af448;
L_007af3d3:; BB(0x007af3d3);
    /* 007af3d3: lea ebp, [esp + 0x1c] */ r_ebp = (u32)(r_esp+0x1cu);
    /* 007af3d7: lea eax, [edx + eax + 0x1c] */ r_eax = (u32)(r_edx+r_eax+0x1cu);
    /* 007af3db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007af3dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007af3dd: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7af3e2u); f_007a9180();
    /* 007af3e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007af3e5: fcom dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); 
    /* 007af3e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af3eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af3ec: jb 0x7af3f8 */ if (fC) goto L_007af3f8;
L_007af3ee:; BB(0x007af3ee);
    /* 007af3ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007af3f0: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 007af3f6: jmp 0x7af448 */ goto L_007af448;
L_007af3f8:; BB(0x007af3f8);
    /* 007af3f8: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 007af3fc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007af3fe: mov eax, 1 */ r_eax = 0x1u;
    /* 007af403: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007af407: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af409: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af40b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007af40e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af410: mov dword ptr [eax + ebx + 4], ebp */ W32((u32)(r_eax+r_ebx+0x4u), r_ebp);
    /* 007af414: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007af416: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af418: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af41a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007af41d: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af41f: fstp dword ptr [edx + ebx + 0xc] */ W_F32((u32)(r_edx+r_ebx+0xcu), ST(0)); FPOP();
    /* 007af423: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007af425: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af427: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af429: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007af42c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af42e: mov dword ptr [edx + ebx + 8], esi */ W32((u32)(r_edx+r_ebx+0x8u), r_esi);
    /* 007af432: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007af434: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af437: jge 0x7af61e */ if ((fS==fO)) goto L_007af61e;
L_007af43d:; BB(0x007af43d);
    /* 007af43d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af440: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 007af442: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
L_007af448:; BB(0x007af448);
    /* 007af448: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007af44b: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af44d: jl 0x7af3a6 */ if ((fS!=fO)) goto L_007af3a6;
L_007af453:; BB(0x007af453);
    /* 007af453: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007af456:; BB(0x007af456);
    /* 007af456: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007af45b: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af461: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007af464: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af466: jl 0x7af36f */ if ((fS!=fO)) goto L_007af36f;
L_007af46c:; BB(0x007af46c);
    /* 007af46c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007af46e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_007af472:; BB(0x007af472);
    /* 007af472: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007af476: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 007af479: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007af47c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af47f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007af481: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007af485: jle 0x7af5f2 */ if ((fZ||fS!=fO)) goto L_007af5f2;
L_007af48b:; BB(0x007af48b);
    /* 007af48b: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 007af490: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007af493: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007af495: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007af498: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af49a: fld dword ptr [eax + ebx + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_ebx+0xcu)));
    /* 007af49e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007af4a2: jmp 0x7af4f9 */ goto L_007af4f9;
L_007af4a4:; BB(0x007af4a4);
    /* 007af4a4: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 007af4a8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007af4ac: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007af4b0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af4b2: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 007af4b5: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007af4b7: mov eax, dword ptr [edi + ebx + 4] */ r_eax = R32((u32)(r_edi+r_ebx+0x4u));
    /* 007af4bb: mov ebp, dword ptr [edi + ebx + 8] */ r_ebp = R32((u32)(r_edi+r_ebx+0x8u));
    /* 007af4bf: mov esi, dword ptr [edi + ebx + 0xc] */ r_esi = R32((u32)(r_edi+r_ebx+0xcu));
    /* 007af4c3: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007af4c6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007af4c8: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007af4cb: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af4cd: mov ecx, dword ptr [edx + ebx + 4] */ r_ecx = R32((u32)(r_edx+r_ebx+0x4u));
    /* 007af4d1: mov dword ptr [edi + ebx + 4], ecx */ W32((u32)(r_edi+r_ebx+0x4u), r_ecx);
    /* 007af4d5: mov ecx, dword ptr [edx + ebx + 8] */ r_ecx = R32((u32)(r_edx+r_ebx+0x8u));
    /* 007af4d9: mov dword ptr [edi + ebx + 8], ecx */ W32((u32)(r_edi+r_ebx+0x8u), r_ecx);
    /* 007af4dd: mov ecx, dword ptr [edx + ebx + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebx+0xcu));
    /* 007af4e1: mov dword ptr [edi + ebx + 0xc], ecx */ W32((u32)(r_edi+r_ebx+0xcu), r_ecx);
    /* 007af4e5: mov dword ptr [edx + ebx + 4], eax */ W32((u32)(r_edx+r_ebx+0x4u), r_eax);
    /* 007af4e9: mov dword ptr [edx + ebx + 8], ebp */ W32((u32)(r_edx+r_ebx+0x8u), r_ebp);
    /* 007af4ed: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007af4f1: mov dword ptr [edx + ebx + 0xc], esi */ W32((u32)(r_edx+r_ebx+0xcu), r_esi);
    /* 007af4f5: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_007af4f9:; BB(0x007af4f9);
    /* 007af4f9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007af4fc: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 007af500: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007af502: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007af505: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007af507: fcom dword ptr [edi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_edi+r_ebx+0xcu))); 
    /* 007af50b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af50d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af50e: jbe 0x7af52a */ if ((fC||fZ)) goto L_007af52a;
L_007af510:; BB(0x007af510);
    /* 007af510: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007af514: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af516: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007af519: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_007af51b:; BB(0x007af51b);
    /* 007af51b: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007af51e: fcom dword ptr [esi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_ebx+0xcu))); 
    /* 007af522: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af524: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007af527: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af528: ja 0x7af51b */ if ((!fC&&!fZ)) goto L_007af51b;
L_007af52a:; BB(0x007af52a);
    /* 007af52a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af52d: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af52f: jge 0x7af568 */ if ((fS==fO)) goto L_007af568;
L_007af531:; BB(0x007af531);
    /* 007af531: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007af534: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007af536: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007af539: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007af53b: fcom dword ptr [edi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_edi+r_ebx+0xcu))); 
    /* 007af53f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af541: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af542: jae 0x7af568 */ if (!fC) goto L_007af568;
L_007af544:; BB(0x007af544);
    /* 007af544: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af547: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af549: jge 0x7af568 */ if ((fS==fO)) goto L_007af568;
L_007af54b:; BB(0x007af54b);
    /* 007af54b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007af54e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af550: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007af553: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_007af555:; BB(0x007af555);
    /* 007af555: fcom dword ptr [esi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_ebx+0xcu))); 
    /* 007af559: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af55b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af55c: jae 0x7af568 */ if (!fC) goto L_007af568;
L_007af55e:; BB(0x007af55e);
    /* 007af55e: add esi, -0xc */ {  u32 a = r_esi; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007af561: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af564: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af566: jl 0x7af555 */ if ((fS!=fO)) goto L_007af555;
L_007af568:; BB(0x007af568);
    /* 007af568: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af56a: jge 0x7af608 */ if ((fS==fO)) goto L_007af608;
L_007af570:; BB(0x007af570);
    /* 007af570: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af573: jge 0x7af613 */ if ((fS==fO)) goto L_007af613;
L_007af579:; BB(0x007af579);
    /* 007af579: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af57c: jl 0x7af4a4 */ if ((fS!=fO)) goto L_007af4a4;
L_007af582:; BB(0x007af582);
    /* 007af582: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007af584: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_007af588:; BB(0x007af588);
    /* 007af588: mov ecx, dword ptr [eax + ebx + 4] */ r_ecx = R32((u32)(r_eax+r_ebx+0x4u));
    /* 007af58c: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 007af590: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007af594: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007af596: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007af599: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007af59b: mov edx, dword ptr [edi + ebx + 4] */ r_edx = R32((u32)(r_edi+r_ebx+0x4u));
    /* 007af59f: mov ebp, dword ptr [edi + ebx + 8] */ r_ebp = R32((u32)(r_edi+r_ebx+0x8u));
    /* 007af5a3: mov esi, dword ptr [edi + ebx + 0xc] */ r_esi = R32((u32)(r_edi+r_ebx+0xcu));
    /* 007af5a7: mov dword ptr [edi + ebx + 4], ecx */ W32((u32)(r_edi+r_ebx+0x4u), r_ecx);
    /* 007af5ab: mov ecx, dword ptr [eax + ebx + 8] */ r_ecx = R32((u32)(r_eax+r_ebx+0x8u));
    /* 007af5af: mov dword ptr [edi + ebx + 8], ecx */ W32((u32)(r_edi+r_ebx+0x8u), r_ecx);
    /* 007af5b3: mov ecx, dword ptr [eax + ebx + 0xc] */ r_ecx = R32((u32)(r_eax+r_ebx+0xcu));
    /* 007af5b7: mov dword ptr [edi + ebx + 0xc], ecx */ W32((u32)(r_edi+r_ebx+0xcu), r_ecx);
    /* 007af5bb: mov dword ptr [eax + ebx + 4], edx */ W32((u32)(r_eax+r_ebx+0x4u), r_edx);
    /* 007af5bf: mov dword ptr [eax + ebx + 8], ebp */ W32((u32)(r_eax+r_ebx+0x8u), r_ebp);
    /* 007af5c3: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007af5c7: mov dword ptr [eax + ebx + 0xc], esi */ W32((u32)(r_eax+r_ebx+0xcu), r_esi);
    /* 007af5cb: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 007af5ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007af5cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007af5d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007af5d3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007af5d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007af5d8: call 0x7ada38 */ r_esp -= 4; W32(r_esp, 0x7af5ddu); f_007ada38();
    /* 007af5dd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007af5e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007af5e2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007af5e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007af5e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007af5e8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007af5ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007af5ed: call 0x7ada38 */ r_esp -= 4; W32(r_esp, 0x7af5f2u); f_007ada38();
L_007af5f2:; BB(0x007af5f2);
    /* 007af5f2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007af5f6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007af5f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007af5fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007af5fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007af5fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007af5fd: ret 8 */ FN_RET(0x007af2a0); r_esp += 12; return;
L_007af600:; BB(0x007af600);
    /* 007af600: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007af603: jmp 0x7af456 */ goto L_007af456;
L_007af608:; BB(0x007af608);
    /* 007af608: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007af60a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007af60e: jmp 0x7af588 */ goto L_007af588;
L_007af613:; BB(0x007af613);
    /* 007af613: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007af615: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007af619: jmp 0x7af588 */ goto L_007af588;
L_007af61e:; BB(0x007af61e);
    /* 007af61e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007af621: jmp 0x7af456 */ goto L_007af456;
}

void f_007af628(void) /* sub_7AF628 */
{
    FN_ENTER(0x007af628);
    /* 007af628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007af629: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007af62c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007af62e: mov ecx, dword ptr [ebp + 0x94] */ r_ecx = R32((u32)(r_ebp+0x94u));
    /* 007af634: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 007af637: mov eax, ecx */ r_eax = r_ecx;
    /* 007af639: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007af63c: je 0x7af68b */ if (fZ) goto L_007af68b;
L_007af63e:; BB(0x007af63e);
    /* 007af63e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af640: je 0x7af68b */ if (fZ) goto L_007af68b;
L_007af642:; BB(0x007af642);
    /* 007af642: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 007af645: fsub dword ptr [ecx + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x44u));
    /* 007af648: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007af64b: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007af64e: fsub dword ptr [ecx + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x48u));
    /* 007af651: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007af655: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 007af658: fsub dword ptr [ecx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4cu));
    /* 007af65b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007af65e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007af662: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7af667u); f_0083173c();
    /* 007af667: fcomp dword ptr [0x97dddc] */ fx_compare(ST(0), R_F32((u32)(0x97dddcu))); FPOP();
    /* 007af66d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af66f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af670: jbe 0x7af68b */ if ((fC||fZ)) goto L_007af68b;
L_007af672:; BB(0x007af672);
    /* 007af672: mov edx, dword ptr [ebp + 0x8c] */ r_edx = R32((u32)(r_ebp+0x8cu));
    /* 007af678: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af67b: mov dword ptr [ebp + 0x8c], edx */ W32((u32)(r_ebp+0x8cu), r_edx);
    /* 007af681: mov eax, 1 */ r_eax = 0x1u;
    /* 007af686: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007af689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007af68a: ret  */ FN_RET(0x007af628); r_esp += 4; return;
L_007af68b:; BB(0x007af68b);
    /* 007af68b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007af68d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007af690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007af691: ret  */ FN_RET(0x007af628); r_esp += 4; return;
}

void f_007af694(void) /* sub_7AF694 */
{
    FN_ENTER(0x007af694);
    /* 007af694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007af695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007af696: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007af697: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007af69a: mov esi, ecx */ r_esi = r_ecx;
    /* 007af69c: mov ebp, dword ptr [esi + 0x94] */ r_ebp = R32((u32)(r_esi+0x94u));
    /* 007af6a2: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 007af6a9: movsx edx, word ptr [ebp + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 007af6b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007af6b2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007af6b5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007af6b8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007af6bc: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007af6c0: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007af6c2: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 007af6c8: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007af6cb: je 0x7af709 */ if (fZ) goto L_007af709;
L_007af6cd:; BB(0x007af6cd);
    /* 007af6cd: fcom dword ptr [0x97ddd4] */ fx_compare(ST(0), R_F32((u32)(0x97ddd4u))); 
    /* 007af6d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af6d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af6d6: ja 0x7af6ec */ if ((!fC&&!fZ)) goto L_007af6ec;
L_007af6d8:; BB(0x007af6d8);
    /* 007af6d8: mov edi, dword ptr [esi + 0x90] */ r_edi = R32((u32)(r_esi+0x90u));
    /* 007af6de: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007af6e1: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af6e4: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 007af6ea: jmp 0x7af701 */ goto L_007af701;
L_007af6ec:; BB(0x007af6ec);
    /* 007af6ec: fcom dword ptr [0x97ddd8] */ fx_compare(ST(0), R_F32((u32)(0x97ddd8u))); 
    /* 007af6f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af6f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af6f5: ja 0x7af7e4 */ if ((!fC&&!fZ)) goto L_007af7e4;
L_007af6fb:; BB(0x007af6fb);
    /* 007af6fb: mov edi, dword ptr [esi + 0x90] */ r_edi = R32((u32)(r_esi+0x90u));
L_007af701:; BB(0x007af701);
    /* 007af701: or edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007af707: jmp 0x7af726 */ goto L_007af726;
L_007af709:; BB(0x007af709);
    /* 007af709: fcom dword ptr [0x97ddd8] */ fx_compare(ST(0), R_F32((u32)(0x97ddd8u))); 
    /* 007af70f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af711: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af712: ja 0x7af756 */ if ((!fC&&!fZ)) goto L_007af756;
L_007af714:; BB(0x007af714);
    /* 007af714: mov edi, dword ptr [esi + 0x90] */ r_edi = R32((u32)(r_esi+0x90u));
    /* 007af71a: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007af71d: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af720: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
L_007af726:; BB(0x007af726);
    /* 007af726: fcomp dword ptr [0x97ddd0] */ fx_compare(ST(0), R_F32((u32)(0x97ddd0u))); FPOP();
    /* 007af72c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af72e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007af733: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af734: ja 0x7af7d9 */ if ((!fC&&!fZ)) goto L_007af7d9;
L_007af73a:; BB(0x007af73a);
    /* 007af73a: or edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007af740: mov dword ptr [esi + 0x90], edi */ W32((u32)(r_esi+0x90u), r_edi);
    /* 007af746: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af749: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 007af74f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007af754: jmp 0x7af758 */ goto L_007af758;
L_007af756:; BB(0x007af756);
    /* 007af756: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007af758:; BB(0x007af758);
    /* 007af758: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007af75b: test al, 0x13 */ {  u32 a = (u8)r_eax; u32 b = 0x13u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007af75d: je 0x7af77c */ if (fZ) goto L_007af77c;
L_007af75f:; BB(0x007af75f);
    /* 007af75f: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 007af765: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007af768: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 007af76e: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af771: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 007af777: mov ecx, 1 */ r_ecx = 0x1u;
L_007af77c:; BB(0x007af77c);
    /* 007af77c: movsx edi, word ptr [ebp + 0x336] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x336u));
    /* 007af783: movsx ebp, word ptr [ebp + 0x2be] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x2beu));
    /* 007af78a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007af78e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007af792: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 007af796: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007af79a: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 007af79c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007af79e: fcomp dword ptr [0x97ddcc] */ fx_compare(ST(0), R_F32((u32)(0x97ddccu))); FPOP();
    /* 007af7a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af7a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af7a7: ja 0x7af7ce */ if ((!fC&&!fZ)) goto L_007af7ce;
L_007af7a9:; BB(0x007af7a9);
    /* 007af7a9: fcomp dword ptr [0x97ddc8] */ fx_compare(ST(0), R_F32((u32)(0x97ddc8u))); FPOP();
    /* 007af7af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007af7b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007af7b2: je 0x7af7d0 */ if (fZ) goto L_007af7d0;
L_007af7b4:; BB(0x007af7b4);
    /* 007af7b4: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af7b7: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 007af7bd: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 007af7c3: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007af7c6: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 007af7cc: jmp 0x7af7d0 */ goto L_007af7d0;
L_007af7ce:; BB(0x007af7ce);
    /* 007af7ce: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007af7d0:; BB(0x007af7d0);
    /* 007af7d0: mov eax, ecx */ r_eax = r_ecx;
    /* 007af7d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007af7d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007af7d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007af7d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007af7d8: ret  */ FN_RET(0x007af694); r_esp += 4; return;
L_007af7d9:; BB(0x007af7d9);
    /* 007af7d9: mov dword ptr [esi + 0x90], edi */ W32((u32)(r_esi+0x90u), r_edi);
    /* 007af7df: jmp 0x7af758 */ goto L_007af758;
L_007af7e4:; BB(0x007af7e4);
    /* 007af7e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007af7e6: jmp 0x7af758 */ goto L_007af758;
}

void f_007af7ec(void) /* sub_7AF7EC */
{
    FN_ENTER(0x007af7ec);
    /* 007af7ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007af7ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007af7ee: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007af7f1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007af7f3: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 007af7f6: mov edi, dword ptr [eax + 0x94] */ r_edi = R32((u32)(r_eax+0x94u));
    /* 007af7fc: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007af7ff: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007af805: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007af808: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af80b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007af80c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007af80d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7af812u); f_007a9180();
    /* 007af812: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007af815: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 007af81b: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 007af81e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af820: je 0x7af83a */ if (fZ) goto L_007af83a;
L_007af822:; BB(0x007af822);
    /* 007af822: mov eax, dword ptr [ebp + 0x74] */ r_eax = R32((u32)(r_ebp+0x74u));
    /* 007af825: movzx edx, word ptr [eax + 0x8a] */ r_edx = (u32)R16((u32)(r_eax+0x8au));
    /* 007af82c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007af82d: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007af830: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 007af833: call 0x7afc68 */ r_esp -= 4; W32(r_esp, 0x7af838u); f_007afc68();
    /* 007af838: jmp 0x7af845 */ goto L_007af845;
L_007af83a:; BB(0x007af83a);
    /* 007af83a: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 007af83d: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007af840: call 0x7afc2c */ r_esp -= 4; W32(r_esp, 0x7af845u); f_007afc2c();
L_007af845:; BB(0x007af845);
    /* 007af845: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007af848: call 0x7af694 */ r_esp -= 4; W32(r_esp, 0x7af84du); f_007af694();
    /* 007af84d: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007af850: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007af856: fld dword ptr [ebp + 0xdc] */ FPUSH(R_F32((u32)(r_ebp+0xdcu)));
    /* 007af85c: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 007af85f: fld dword ptr [ebp + 0xe4] */ FPUSH(R_F32((u32)(r_ebp+0xe4u)));
    /* 007af865: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 007af868: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 007af86a: fmul qword ptr [0x97dcd0] */ ST(0) = ST(0) * R_F64((u32)(0x97dcd0u));
    /* 007af870: fdiv qword ptr [0x97dcc8] */ ST(0) = ST(0) / R_F64((u32)(0x97dcc8u));
    /* 007af876: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007af879: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007af87d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007af882: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007af886: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007af88a: fistp dword ptr [edx + 0x98] */ W32((u32)(r_edx+0x98u), (u32)fx_int32(ST(0))); FPOP();
    /* 007af890: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007af893: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 007af896: mov edx, dword ptr [edi + 0xa8] */ r_edx = R32((u32)(r_edi+0xa8u));
    /* 007af89c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af89e: je 0x7af9a3 */ if (fZ) goto L_007af9a3;
L_007af8a4:; BB(0x007af8a4);
    /* 007af8a4: mov eax, dword ptr [edi + 0x94] */ r_eax = R32((u32)(r_edi+0x94u));
    /* 007af8aa: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 007af8ad: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 007af8b0: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007af8b3: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 007af8b6: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007af8b9: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 007af8bc: mov eax, dword ptr [edi + 0xa8] */ r_eax = R32((u32)(r_edi+0xa8u));
    /* 007af8c2: mov edx, dword ptr [edi + 0x98] */ r_edx = R32((u32)(r_edi+0x98u));
    /* 007af8c8: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 007af8cb: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 007af8d1: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 007af8d6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af8d8: add eax, dword ptr [0xaae160] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae160u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af8de: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af8e0: jge 0x7afc03 */ if ((fS==fO)) goto L_007afc03;
L_007af8e6:; BB(0x007af8e6);
    /* 007af8e6: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 007af8ea: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007af8ee: mov esi, edx */ r_esi = r_edx;
L_007af8f0:; BB(0x007af8f0);
    /* 007af8f0: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 007af8f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af8f9: je 0x7af98d */ if (fZ) goto L_007af98d;
L_007af8ff:; BB(0x007af8ff);
    /* 007af8ff: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 007af902: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af908: jne 0x7af98d */ if (!fZ) goto L_007af98d;
L_007af90e:; BB(0x007af90e);
    /* 007af90e: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 007af913: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007af914: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 007af91a: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x7af91fu); f_007b65b4();
    /* 007af91f: mov edx, eax */ r_edx = r_eax;
    /* 007af921: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af923: je 0x7afbed */ if (fZ) goto L_007afbed;
L_007af929:; BB(0x007af929);
    /* 007af929: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 007af92c: test eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af931: je 0x7af954 */ if (fZ) goto L_007af954;
L_007af933:; BB(0x007af933);
    /* 007af933: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007af936: test eax, 0x308 */ {  u32 a = r_eax; u32 b = 0x308u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af93b: je 0x7afb55 */ if (fZ) goto L_007afb55;
L_007af941:; BB(0x007af941);
    /* 007af941: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007af946: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af94c: add eax, dword ptr [0xaae160] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae160u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af952: jmp 0x7af98d */ goto L_007af98d;
L_007af954:; BB(0x007af954);
    /* 007af954: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af959: je 0x7af97c */ if (fZ) goto L_007af97c;
L_007af95b:; BB(0x007af95b);
    /* 007af95b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 007af95e: test eax, 0x308 */ {  u32 a = r_eax; u32 b = 0x308u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af963: je 0x7afc0b */ if (fZ) goto L_007afc0b;
L_007af969:; BB(0x007af969);
    /* 007af969: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007af96e: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af974: add eax, dword ptr [0xaae160] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae160u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af97a: jmp 0x7af98d */ goto L_007af98d;
L_007af97c:; BB(0x007af97c);
    /* 007af97c: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007af981: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007af987: add eax, dword ptr [0xaae160] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae160u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_007af98d:; BB(0x007af98d);
    /* 007af98d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007af990: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007af992: jl 0x7af8f0 */ if ((fS!=fO)) goto L_007af8f0;
L_007af998:; BB(0x007af998);
    /* 007af998: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 007af99c: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007af9a0: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
L_007af9a3:; BB(0x007af9a3);
    /* 007af9a3: mov ecx, edi */ r_ecx = r_edi;
    /* 007af9a5: call 0x7affc4 */ r_esp -= 4; W32(r_esp, 0x7af9aau); f_007affc4();
    /* 007af9aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af9ac: jne 0x7af9b6 */ if (!fZ) goto L_007af9b6;
L_007af9ae:; BB(0x007af9ae);
    /* 007af9ae: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007af9b1: jmp 0x7afac3 */ goto L_007afac3;
L_007af9b6:; BB(0x007af9b6);
    /* 007af9b6: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007af9b9: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 007af9bf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007af9c1: je 0x7af9f7 */ if (fZ) goto L_007af9f7;
L_007af9c3:; BB(0x007af9c3);
    /* 007af9c3: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007af9c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007af9c8: mov word ptr [ebp + 0x5c], ax */ W16((u32)(r_ebp+0x5cu), (u16)r_eax);
    /* 007af9cc: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af9cf: jne 0x7af9d9 */ if (!fZ) goto L_007af9d9;
L_007af9d1:; BB(0x007af9d1);
    /* 007af9d1: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007af9d4: jmp 0x7afac3 */ goto L_007afac3;
L_007af9d9:; BB(0x007af9d9);
    /* 007af9d9: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007af9df: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007af9e2: mov dword ptr [ebp + 0x24], 0xe */ W32((u32)(r_ebp+0x24u), 0xeu);
    /* 007af9e9: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007af9ec: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007af9f2: jmp 0x7afac3 */ goto L_007afac3;
L_007af9f7:; BB(0x007af9f7);
    /* 007af9f7: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007af9fc: je 0x7afa32 */ if (fZ) goto L_007afa32;
L_007af9fe:; BB(0x007af9fe);
    /* 007af9fe: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007afa01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007afa03: mov word ptr [ebp + 0x5c], ax */ W16((u32)(r_ebp+0x5cu), (u16)r_eax);
    /* 007afa07: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afa0a: jne 0x7afa14 */ if (!fZ) goto L_007afa14;
L_007afa0c:; BB(0x007afa0c);
    /* 007afa0c: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007afa0f: jmp 0x7afac3 */ goto L_007afac3;
L_007afa14:; BB(0x007afa14);
    /* 007afa14: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007afa1a: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007afa1d: mov dword ptr [ebp + 0x24], 0xf */ W32((u32)(r_ebp+0x24u), 0xfu);
    /* 007afa24: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007afa27: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007afa2d: jmp 0x7afac3 */ goto L_007afac3;
L_007afa32:; BB(0x007afa32);
    /* 007afa32: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afa37: je 0x7afa97 */ if (fZ) goto L_007afa97;
L_007afa39:; BB(0x007afa39);
    /* 007afa39: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 007afa3c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afa3f: je 0x7afac3 */ if (fZ) goto L_007afac3;
L_007afa45:; BB(0x007afa45);
    /* 007afa45: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007afa4b: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afa50: je 0x7afa5f */ if (fZ) goto L_007afa5f;
L_007afa52:; BB(0x007afa52);
    /* 007afa52: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007afa57: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007afa5d: jmp 0x7afac3 */ goto L_007afac3;
L_007afa5f:; BB(0x007afa5f);
    /* 007afa5f: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 007afa65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afa67: jne 0x7afac3 */ if (!fZ) goto L_007afac3;
L_007afa69:; BB(0x007afa69);
    /* 007afa69: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007afa6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007afa6e: mov word ptr [ebp + 0x5c], ax */ W16((u32)(r_ebp+0x5cu), (u16)r_eax);
    /* 007afa72: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afa75: jne 0x7afa7c */ if (!fZ) goto L_007afa7c;
L_007afa77:; BB(0x007afa77);
    /* 007afa77: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007afa7a: jmp 0x7afac3 */ goto L_007afac3;
L_007afa7c:; BB(0x007afa7c);
    /* 007afa7c: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007afa82: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007afa85: mov dword ptr [ebp + 0x24], 0x11 */ W32((u32)(r_ebp+0x24u), 0x11u);
    /* 007afa8c: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007afa8f: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 007afa95: jmp 0x7afac3 */ goto L_007afac3;
L_007afa97:; BB(0x007afa97);
    /* 007afa97: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 007afa9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007afa9c: mov word ptr [ebp + 0x5c], ax */ W16((u32)(r_ebp+0x5cu), (u16)r_eax);
    /* 007afaa0: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afaa3: jne 0x7afaaa */ if (!fZ) goto L_007afaaa;
L_007afaa5:; BB(0x007afaa5);
    /* 007afaa5: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007afaa8: jmp 0x7afac3 */ goto L_007afac3;
L_007afaaa:; BB(0x007afaaa);
    /* 007afaaa: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007afab0: mov ecx, dword ptr [ebp + 0x78] */ r_ecx = R32((u32)(r_ebp+0x78u));
    /* 007afab3: mov dword ptr [ebp + 0x24], 0x10 */ W32((u32)(r_ebp+0x24u), 0x10u);
    /* 007afaba: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007afabd: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
L_007afac3:; BB(0x007afac3);
    /* 007afac3: call 0x7af628 */ r_esp -= 4; W32(r_esp, 0x7afac8u); f_007af628();
    /* 007afac8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afaca: jne 0x7afb1d */ if (!fZ) goto L_007afb1d;
L_007afacc:; BB(0x007afacc);
    /* 007afacc: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 007afacf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afad2: jne 0x7afb4f */ if (!fZ) goto L_007afb4f;
L_007afad4:; BB(0x007afad4);
    /* 007afad4: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 007afad7: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 007afadd: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afae3: je 0x7afaf5 */ if (fZ) goto L_007afaf5;
L_007afae5:; BB(0x007afae5);
    /* 007afae5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007afae7: mov byte ptr [ebp + 0x8c], al */ W8((u32)(r_ebp+0x8cu), (u8)r_eax);
    /* 007afaed: mov byte ptr [ebp + 0x8d], al */ W8((u32)(r_ebp+0x8du), (u8)r_eax);
    /* 007afaf3: jmp 0x7afb4f */ goto L_007afb4f;
L_007afaf5:; BB(0x007afaf5);
    /* 007afaf5: movzx eax, byte ptr [ebp + 0x8d] */ r_eax = (u32)R8((u32)(r_ebp+0x8du));
    /* 007afafc: add byte ptr [ebp + 0x8c], 1 */ { u32 ad = (u32)(r_ebp+0x8cu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007afb03: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afb06: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 007afb09: mov edi, 0x1e */ r_edi = 0x1eu;
    /* 007afb0e: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afb11: jl 0x7afb15 */ if ((fS!=fO)) goto L_007afb15;
L_007afb13:; BB(0x007afb13);
    /* 007afb13: mov edx, edi */ r_edx = r_edi;
L_007afb15:; BB(0x007afb15);
    /* 007afb15: mov byte ptr [ebp + 0x8d], dl */ W8((u32)(r_ebp+0x8du), (u8)r_edx);
    /* 007afb1b: jmp 0x7afb4f */ goto L_007afb4f;
L_007afb1d:; BB(0x007afb1d);
    /* 007afb1d: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 007afb20: mov ecx, dword ptr [edi + 0x94] */ r_ecx = R32((u32)(r_edi+0x94u));
    /* 007afb26: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 007afb29: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 007afb2f: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 007afb32: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
    /* 007afb38: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 007afb3b: mov dword ptr [edi + 0xa4], eax */ W32((u32)(r_edi+0xa4u), r_eax);
    /* 007afb41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007afb43: mov byte ptr [ebp + 0x8c], al */ W8((u32)(r_ebp+0x8cu), (u8)r_eax);
    /* 007afb49: mov byte ptr [ebp + 0x8d], al */ W8((u32)(r_ebp+0x8du), (u8)r_eax);
L_007afb4f:; BB(0x007afb4f);
    /* 007afb4f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007afb52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007afb53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007afb54: ret  */ FN_RET(0x007af7ec); r_esp += 4; return;
L_007afb55:; BB(0x007afb55);
    /* 007afb55: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007afb59: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007afb5d: mov eax, edx */ r_eax = r_edx;
    /* 007afb5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007afb61: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 007afb67: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007afb6a: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 007afb6e: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 007afb72: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 007afb78: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007afb7b: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 007afb81: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 007afb84: mov dword ptr [edi + 0xe4], edx */ W32((u32)(r_edi+0xe4u), r_edx);
    /* 007afb8a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007afb8d: mov dword ptr [edi + 0xe8], edx */ W32((u32)(r_edi+0xe8u), r_edx);
    /* 007afb93: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007afb96: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 007afb9c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007afb9f: mov dword ptr [edi + 0xf0], edx */ W32((u32)(r_edi+0xf0u), r_edx);
    /* 007afba5: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007afba8: mov dword ptr [edi + 0xf4], edx */ W32((u32)(r_edi+0xf4u), r_edx);
    /* 007afbae: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007afbb1: mov dword ptr [edi + 0xf8], edx */ W32((u32)(r_edi+0xf8u), r_edx);
    /* 007afbb7: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007afbba: mov dword ptr [edi + 0xfc], edx */ W32((u32)(r_edi+0xfcu), r_edx);
    /* 007afbc0: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 007afbc3: mov dword ptr [edi + 0x100], eax */ W32((u32)(r_edi+0x100u), r_eax);
    /* 007afbc9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007afbcd: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 007afbd0: mov dword ptr [edi + 0x104], eax */ W32((u32)(r_edi+0x104u), r_eax);
    /* 007afbd6: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 007afbdc: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007afbdf: mov dword ptr [edi + 0x8c], eax */ W32((u32)(r_edi+0x8cu), r_eax);
    /* 007afbe5: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 007afbe8: jmp 0x7af9a3 */ goto L_007af9a3;
L_007afbed:; BB(0x007afbed);
    /* 007afbed: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007afbf2: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afbf8: add eax, dword ptr [0xaae160] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae160u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afbfe: jmp 0x7af98d */ goto L_007af98d;
L_007afc03:; BB(0x007afc03);
    /* 007afc03: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 007afc06: jmp 0x7af9a3 */ goto L_007af9a3;
L_007afc0b:; BB(0x007afc0b);
    /* 007afc0b: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 007afc0f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007afc13: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 007afc19: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007afc1e: mov dword ptr [edi + 0x8c], eax */ W32((u32)(r_edi+0x8cu), r_eax);
    /* 007afc24: mov edi, dword ptr [ebp + 0x78] */ r_edi = R32((u32)(r_ebp+0x78u));
    /* 007afc27: jmp 0x7af9a3 */ goto L_007af9a3;
}

void f_007afc2c(void) /* sub_7AFC2C */
{
    FN_ENTER(0x007afc2c);
    /* 007afc2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007afc2d: mov esi, ecx */ r_esi = r_ecx;
    /* 007afc2f: mov eax, dword ptr [esi + 0x94] */ r_eax = R32((u32)(r_esi+0x94u));
    /* 007afc35: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007afc39: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007afc3d: mov ecx, esi */ r_ecx = r_esi;
    /* 007afc3f: call 0x7af2a0 */ r_esp -= 4; W32(r_esp, 0x7afc44u); f_007af2a0();
    /* 007afc44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afc46: je 0x7afc60 */ if (fZ) goto L_007afc60;
L_007afc48:; BB(0x007afc48);
    /* 007afc48: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 007afc4e: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007afc51: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 007afc57: mov eax, 1 */ r_eax = 0x1u;
    /* 007afc5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007afc5d: ret 4 */ FN_RET(0x007afc2c); r_esp += 8; return;
L_007afc60:; BB(0x007afc60);
    /* 007afc60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007afc62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007afc63: ret 4 */ FN_RET(0x007afc2c); r_esp += 8; return;
}

void f_007afc68(void) /* sub_7AFC68 */
{
    FN_ENTER(0x007afc68);
    /* 007afc68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007afc69: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007afc6b: mov edx, dword ptr [ebp + 0x94] */ r_edx = R32((u32)(r_ebp+0x94u));
    /* 007afc71: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afc74: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007afc79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007afc7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007afc7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007afc7d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007afc81: call 0x7afca8 */ r_esp -= 4; W32(r_esp, 0x7afc86u); f_007afca8();
    /* 007afc86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afc88: je 0x7afca2 */ if (fZ) goto L_007afca2;
L_007afc8a:; BB(0x007afc8a);
    /* 007afc8a: mov edx, dword ptr [ebp + 0x8c] */ r_edx = R32((u32)(r_ebp+0x8cu));
    /* 007afc90: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007afc93: mov dword ptr [ebp + 0x8c], edx */ W32((u32)(r_ebp+0x8cu), r_edx);
    /* 007afc99: mov eax, 1 */ r_eax = 0x1u;
    /* 007afc9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007afc9f: ret 8 */ FN_RET(0x007afc68); r_esp += 12; return;
L_007afca2:; BB(0x007afca2);
    /* 007afca2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007afca4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007afca5: ret 8 */ FN_RET(0x007afc68); r_esp += 12; return;
}

void f_007afca8(void) /* sub_7AFCA8 */
{
    FN_ENTER(0x007afca8);
    /* 007afca8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007afca9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007afcaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007afcab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007afcac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007afcaf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007afcb1: movzx ebp, word ptr [esp + 0x34] */ r_ebp = (u32)R16((u32)(r_esp+0x34u));
    /* 007afcb6: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 007afcbc: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007afcc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007afcc3: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 007afcca: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007afcce: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 007afcd1: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 007afcd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007afcd9: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 007afcdc: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 007afce3: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 007afce6: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 007afce9: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 007afcec: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 007afcf3: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 007afcf6: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 007afcf9: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 007afcfc: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 007afd03: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 007afd06: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 007afd09: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 007afd10: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 007afd17: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 007afd1e: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 007afd25: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 007afd2c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7afd31u); f_007b4d18();
    /* 007afd31: mov edi, eax */ r_edi = r_eax;
    /* 007afd33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007afd34: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x7afd39u); f_00520f3c();
    /* 007afd39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007afd3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afd3e: je 0x7afdf9 */ if (fZ) goto L_007afdf9;
L_007afd44:; BB(0x007afd44);
    /* 007afd44: mov edx, dword ptr [edi + 0xa8] */ r_edx = R32((u32)(r_edi+0xa8u));
    /* 007afd4a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007afd4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007afd4e: jle 0x7affa1 */ if ((fZ||fS!=fO)) goto L_007affa1;
L_007afd54:; BB(0x007afd54);
    /* 007afd54: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 007afd57: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007afd59: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007afd5b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007afd5d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007afd5f: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007afd61: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007afd63: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_007afd65:; BB(0x007afd65);
    /* 007afd65: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 007afd6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007afd6d: je 0x7aff96 */ if (fZ) goto L_007aff96;
L_007afd73:; BB(0x007afd73);
    /* 007afd73: lea edx, [edx + ebp + 0x1c] */ r_edx = (u32)(r_edx+r_ebp+0x1cu);
    /* 007afd77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007afd78: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 007afd7c: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7afd81u); f_007a9180();
    /* 007afd81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007afd84: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007afd88: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007afd8a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007afd8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007afd8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007afd8f: ja 0x7afd95 */ if ((!fC&&!fZ)) goto L_007afd95;
L_007afd91:; BB(0x007afd91);
    /* 007afd91: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007afd93: jmp 0x7afddf */ goto L_007afddf;
L_007afd95:; BB(0x007afd95);
    /* 007afd95: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007afd99: mov edx, 1 */ r_edx = 0x1u;
    /* 007afd9e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007afda2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007afda4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afda6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afda8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007afdab: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007afdad: mov dword ptr [ecx + ebx + 4], eax */ W32((u32)(r_ecx+r_ebx+0x4u), r_eax);
    /* 007afdb1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007afdb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afdb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afdb7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007afdba: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afdbc: fstp dword ptr [eax + ebx + 0xc] */ W_F32((u32)(r_eax+r_ebx+0xcu), ST(0)); FPOP();
    /* 007afdc0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007afdc2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afdc4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afdc6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007afdc9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afdcb: mov dword ptr [eax + ebx + 8], esi */ W32((u32)(r_eax+r_ebx+0x8u), r_esi);
    /* 007afdcf: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007afdd1: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afdd4: jge 0x7aff8d */ if ((fS==fO)) goto L_007aff8d;
L_007afdda:; BB(0x007afdda);
    /* 007afdda: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afddd: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
L_007afddf:; BB(0x007afddf);
    /* 007afddf: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007afde2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007afde5: cmp esi, dword ptr [edi + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afdeb: jl 0x7afd65 */ if ((fS!=fO)) goto L_007afd65;
L_007afdf1:; BB(0x007afdf1);
    /* 007afdf1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007afdf3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007afdf7: jmp 0x7afdff */ goto L_007afdff;
L_007afdf9:; BB(0x007afdf9);
    /* 007afdf9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007afdfb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_007afdff:; BB(0x007afdff);
    /* 007afdff: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007afe03: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 007afe06: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007afe09: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afe0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007afe0e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007afe12: jle 0x7aff7f */ if ((fZ||fS!=fO)) goto L_007aff7f;
L_007afe18:; BB(0x007afe18);
    /* 007afe18: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 007afe1d: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007afe20: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007afe22: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007afe25: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afe27: fld dword ptr [eax + ebx + 0xc] */ FPUSH(R_F32((u32)(r_eax+r_ebx+0xcu)));
    /* 007afe2b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007afe2f: jmp 0x7afe86 */ goto L_007afe86;
L_007afe31:; BB(0x007afe31);
    /* 007afe31: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 007afe35: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007afe39: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007afe3d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afe3f: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 007afe42: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007afe44: mov eax, dword ptr [edi + ebx + 4] */ r_eax = R32((u32)(r_edi+r_ebx+0x4u));
    /* 007afe48: mov ebp, dword ptr [edi + ebx + 8] */ r_ebp = R32((u32)(r_edi+r_ebx+0x8u));
    /* 007afe4c: mov esi, dword ptr [edi + ebx + 0xc] */ r_esi = R32((u32)(r_edi+r_ebx+0xcu));
    /* 007afe50: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007afe53: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007afe55: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007afe58: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afe5a: mov ecx, dword ptr [edx + ebx + 4] */ r_ecx = R32((u32)(r_edx+r_ebx+0x4u));
    /* 007afe5e: mov dword ptr [edi + ebx + 4], ecx */ W32((u32)(r_edi+r_ebx+0x4u), r_ecx);
    /* 007afe62: mov ecx, dword ptr [edx + ebx + 8] */ r_ecx = R32((u32)(r_edx+r_ebx+0x8u));
    /* 007afe66: mov dword ptr [edi + ebx + 8], ecx */ W32((u32)(r_edi+r_ebx+0x8u), r_ecx);
    /* 007afe6a: mov ecx, dword ptr [edx + ebx + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebx+0xcu));
    /* 007afe6e: mov dword ptr [edi + ebx + 0xc], ecx */ W32((u32)(r_edi+r_ebx+0xcu), r_ecx);
    /* 007afe72: mov dword ptr [edx + ebx + 4], eax */ W32((u32)(r_edx+r_ebx+0x4u), r_eax);
    /* 007afe76: mov dword ptr [edx + ebx + 8], ebp */ W32((u32)(r_edx+r_ebx+0x8u), r_ebp);
    /* 007afe7a: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007afe7e: mov dword ptr [edx + ebx + 0xc], esi */ W32((u32)(r_edx+r_ebx+0xcu), r_esi);
    /* 007afe82: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_007afe86:; BB(0x007afe86);
    /* 007afe86: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007afe89: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 007afe8d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007afe8f: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007afe92: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007afe94: fcom dword ptr [edi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_edi+r_ebx+0xcu))); 
    /* 007afe98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007afe9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007afe9b: jbe 0x7afeb7 */ if ((fC||fZ)) goto L_007afeb7;
L_007afe9d:; BB(0x007afe9d);
    /* 007afe9d: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007afea1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afea3: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007afea6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_007afea8:; BB(0x007afea8);
    /* 007afea8: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007afeab: fcom dword ptr [esi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_ebx+0xcu))); 
    /* 007afeaf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007afeb1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007afeb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007afeb5: ja 0x7afea8 */ if ((!fC&&!fZ)) goto L_007afea8;
L_007afeb7:; BB(0x007afeb7);
    /* 007afeb7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afeba: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afebc: jge 0x7afef5 */ if ((fS==fO)) goto L_007afef5;
L_007afebe:; BB(0x007afebe);
    /* 007afebe: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007afec1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007afec3: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007afec6: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007afec8: fcom dword ptr [edi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_edi+r_ebx+0xcu))); 
    /* 007afecc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007afece: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007afecf: jae 0x7afef5 */ if (!fC) goto L_007afef5;
L_007afed1:; BB(0x007afed1);
    /* 007afed1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afed4: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afed6: jge 0x7afef5 */ if ((fS==fO)) goto L_007afef5;
L_007afed8:; BB(0x007afed8);
    /* 007afed8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007afedb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007afedd: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007afee0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_007afee2:; BB(0x007afee2);
    /* 007afee2: fcom dword ptr [esi + ebx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_ebx+0xcu))); 
    /* 007afee6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007afee8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007afee9: jae 0x7afef5 */ if (!fC) goto L_007afef5;
L_007afeeb:; BB(0x007afeeb);
    /* 007afeeb: add esi, -0xc */ {  u32 a = r_esi; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007afeee: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007afef1: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afef3: jl 0x7afee2 */ if ((fS!=fO)) goto L_007afee2;
L_007afef5:; BB(0x007afef5);
    /* 007afef5: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afef7: jge 0x7affac */ if ((fS==fO)) goto L_007affac;
L_007afefd:; BB(0x007afefd);
    /* 007afefd: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aff00: jge 0x7affb7 */ if ((fS==fO)) goto L_007affb7;
L_007aff06:; BB(0x007aff06);
    /* 007aff06: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aff09: jl 0x7afe31 */ if ((fS!=fO)) goto L_007afe31;
L_007aff0f:; BB(0x007aff0f);
    /* 007aff0f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007aff11: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
L_007aff15:; BB(0x007aff15);
    /* 007aff15: mov ecx, dword ptr [eax + ebx + 4] */ r_ecx = R32((u32)(r_eax+r_ebx+0x4u));
    /* 007aff19: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 007aff1d: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007aff21: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007aff23: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007aff26: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007aff28: mov edx, dword ptr [edi + ebx + 4] */ r_edx = R32((u32)(r_edi+r_ebx+0x4u));
    /* 007aff2c: mov ebp, dword ptr [edi + ebx + 8] */ r_ebp = R32((u32)(r_edi+r_ebx+0x8u));
    /* 007aff30: mov esi, dword ptr [edi + ebx + 0xc] */ r_esi = R32((u32)(r_edi+r_ebx+0xcu));
    /* 007aff34: mov dword ptr [edi + ebx + 4], ecx */ W32((u32)(r_edi+r_ebx+0x4u), r_ecx);
    /* 007aff38: mov ecx, dword ptr [eax + ebx + 8] */ r_ecx = R32((u32)(r_eax+r_ebx+0x8u));
    /* 007aff3c: mov dword ptr [edi + ebx + 8], ecx */ W32((u32)(r_edi+r_ebx+0x8u), r_ecx);
    /* 007aff40: mov ecx, dword ptr [eax + ebx + 0xc] */ r_ecx = R32((u32)(r_eax+r_ebx+0xcu));
    /* 007aff44: mov dword ptr [edi + ebx + 0xc], ecx */ W32((u32)(r_edi+r_ebx+0xcu), r_ecx);
    /* 007aff48: mov dword ptr [eax + ebx + 4], edx */ W32((u32)(r_eax+r_ebx+0x4u), r_edx);
    /* 007aff4c: mov dword ptr [eax + ebx + 8], ebp */ W32((u32)(r_eax+r_ebx+0x8u), r_ebp);
    /* 007aff50: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007aff54: mov dword ptr [eax + ebx + 0xc], esi */ W32((u32)(r_eax+r_ebx+0xcu), r_esi);
    /* 007aff58: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 007aff5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007aff5c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007aff5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007aff60: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007aff64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007aff65: call 0x7ada38 */ r_esp -= 4; W32(r_esp, 0x7aff6au); f_007ada38();
    /* 007aff6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007aff6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007aff6f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007aff72: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007aff74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aff75: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007aff79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007aff7a: call 0x7ada38 */ r_esp -= 4; W32(r_esp, 0x7aff7fu); f_007ada38();
L_007aff7f:; BB(0x007aff7f);
    /* 007aff7f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007aff83: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007aff86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007aff87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007aff88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007aff89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007aff8a: ret 0xc */ FN_RET(0x007afca8); r_esp += 16; return;
L_007aff8d:; BB(0x007aff8d);
    /* 007aff8d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007aff91: jmp 0x7afdff */ goto L_007afdff;
L_007aff96:; BB(0x007aff96);
    /* 007aff96: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007aff98: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007aff9c: jmp 0x7afdff */ goto L_007afdff;
L_007affa1:; BB(0x007affa1);
    /* 007affa1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007affa3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007affa7: jmp 0x7afdff */ goto L_007afdff;
L_007affac:; BB(0x007affac);
    /* 007affac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007affae: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007affb2: jmp 0x7aff15 */ goto L_007aff15;
L_007affb7:; BB(0x007affb7);
    /* 007affb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007affb9: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007affbd: jmp 0x7aff15 */ goto L_007aff15;
}

void f_007affc4(void) /* sub_7AFFC4 */
{
    FN_ENTER(0x007affc4);
    /* 007affc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007affc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007affc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007affc7: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007affca: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007affcc: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 007affd2: movsx ebp, word ptr [eax + 0x334] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 007affd9: movsx ecx, word ptr [eax + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 007affe0: movsx eax, word ptr [ebx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x88u));
    /* 007affe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007affe9: jle 0x7b00aa */ if ((fZ||fS!=fO)) goto L_007b00aa;
L_007affef:; BB(0x007affef);
    /* 007affef: mov edx, eax */ r_edx = r_eax;
    /* 007afff1: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007afff3: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007afff6: lea edi, [ebp - 1] */ r_edi = (u32)(r_ebp+0xffffffffu);
    /* 007afff9: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007afffb: jl 0x7b0079 */ if ((fS!=fO)) goto L_007b0079;
L_007afffd:; BB(0x007afffd);
    /* 007afffd: fld dword ptr [0x97ddbc] */ FPUSH(R_F32((u32)(0x97ddbcu)));
    /* 007b0003: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007b0006: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007b0009: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007b000d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007b0011: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 007b0013: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b0015: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007b0017: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b0019: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b001a: jae 0x7b0031 */ if (!fC) goto L_007b0031;
L_007b001c:; BB(0x007b001c);
    /* 007b001c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b001e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b0020: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 007b0026: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0029: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 007b002f: jmp 0x7b008a */ goto L_007b008a;
L_007b0031:; BB(0x007b0031);
    /* 007b0031: fld dword ptr [0x97ddb8] */ FPUSH(R_F32((u32)(0x97ddb8u)));
    /* 007b0037: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007b0039: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007b003b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b003d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b003e: jae 0x7b0057 */ if (!fC) goto L_007b0057;
L_007b0040:; BB(0x007b0040);
    /* 007b0040: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b0042: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b0044: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 007b004a: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b004f: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 007b0055: jmp 0x7b008a */ goto L_007b008a;
L_007b0057:; BB(0x007b0057);
    /* 007b0057: fld dword ptr [0x97ddb4] */ FPUSH(R_F32((u32)(0x97ddb4u)));
    /* 007b005d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007b005f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007b0061: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b0063: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b0064: jbe 0x7b008a */ if ((fC||fZ)) goto L_007b008a;
L_007b0066:; BB(0x007b0066);
    /* 007b0066: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 007b006c: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0071: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 007b0077: jmp 0x7b008a */ goto L_007b008a;
L_007b0079:; BB(0x007b0079);
    /* 007b0079: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 007b007f: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007b0084: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
L_007b008a:; BB(0x007b008a);
    /* 007b008a: mov word ptr [ebx + 0x88], bp */ W16((u32)(r_ebx+0x88u), (u16)r_ebp);
    /* 007b0091: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b0093: je 0x7b00a1 */ if (fZ) goto L_007b00a1;
L_007b0095:; BB(0x007b0095);
    /* 007b0095: mov eax, 1 */ r_eax = 0x1u;
    /* 007b009a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b009d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b009e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b009f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b00a0: ret  */ FN_RET(0x007affc4); r_esp += 4; return;
L_007b00a1:; BB(0x007b00a1);
    /* 007b00a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b00a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b00a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b00a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b00a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b00a9: ret  */ FN_RET(0x007affc4); r_esp += 4; return;
L_007b00aa:; BB(0x007b00aa);
    /* 007b00aa: mov word ptr [ebx + 0x88], bp */ W16((u32)(r_ebx+0x88u), (u16)r_ebp);
    /* 007b00b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b00b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b00b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b00b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b00b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b00b9: ret  */ FN_RET(0x007affc4); r_esp += 4; return;
}

