#include "protos.h"

void f_0063d034(void) /* sub_63D034 */
{
    FN_ENTER(0x0063d034);
    /* 0063d034: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d035: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d037: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d039: push 0x8e4ce4 */ { u32 v = 0x8e4ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d03e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d045: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063d04c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d04f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063d052: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063d055: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063d058: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063d05b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d05e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d061: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063d064: call 0x63deac */ r_esp -= 4; W32(r_esp, 0x63d069u); f_0063deac();
    /* 0063d069: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d073: mov dword ptr [ecx], 0xb2de20 */ W32((u32)(r_ecx), 0xb2de20u);
    /* 0063d079: mov eax, dword ptr [0x9c6a58] */ r_eax = R32((u32)(0x9c6a58u));
    /* 0063d07e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063d081: call 0x63ddc0 */ r_esp -= 4; W32(r_esp, 0x63d086u); f_0063ddc0();
    /* 0063d086: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d089: call 0x63cef0 */ r_esp -= 4; W32(r_esp, 0x63d08eu); f_0063cef0();
    /* 0063d08e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d091: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d093: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 0063d099: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0063d09c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d09e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0a0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0a2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0a4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0aa: lea ebx, [edx + edx + 0x9c6960] */ r_ebx = (u32)(r_edx+r_edx+0x9c6960u);
    /* 0063d0b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d0b2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63d0b7u); f_007b9a88();
    /* 0063d0b7: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d0ba: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63d0bfu); f_007b999c();
    /* 0063d0bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d0c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d0c3: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63d0c8u); f_007b4f54();
    /* 0063d0c8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d0cb: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063d0ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d0d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d0d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d0da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d0db: ret 8 */ FN_RET(0x0063d034); r_esp += 12; return;
}

void f_0063d0e0(void) /* sub_63D0E0 */
{
    FN_ENTER(0x0063d0e0);
    /* 0063d0e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0063d0e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063d0e6:; BB(0x0063d0e6);
    /* 0063d0e6: mov ecx, dword ptr [edx + 0xa8f210] */ r_ecx = R32((u32)(r_edx+0xa8f210u));
    /* 0063d0ec: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d0ef: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d0f1: je 0x63d118 */ if (fZ) goto L_0063d118;
L_0063d0f3:; BB(0x0063d0f3);
    /* 0063d0f3: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d0f6: jl 0x63d0e6 */ if ((fS!=fO)) goto L_0063d0e6;
L_0063d0f8:; BB(0x0063d0f8);
    /* 0063d0f8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0063d0fa:; BB(0x0063d0fa);
    /* 0063d0fa: mov ecx, dword ptr [edx + 0xa8f1fc] */ r_ecx = R32((u32)(r_edx+0xa8f1fcu));
    /* 0063d100: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d103: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d105: je 0x63d112 */ if (fZ) goto L_0063d112;
L_0063d107:; BB(0x0063d107);
    /* 0063d107: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d10a: jl 0x63d0fa */ if ((fS!=fO)) goto L_0063d0fa;
L_0063d10c:; BB(0x0063d10c);
    /* 0063d10c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x63d111u); f_0082dab0();
    /* 0063d111: ret  */ FN_RET(0x0063d0e0); r_esp += 4; return;
L_0063d112:; BB(0x0063d112);
    /* 0063d112: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63d117u); f_0082dbac();
    /* 0063d117: ret  */ FN_RET(0x0063d0e0); r_esp += 4; return;
L_0063d118:; BB(0x0063d118);
    /* 0063d118: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63d11du); f_0082dbac();
    /* 0063d11d: ret  */ FN_RET(0x0063d0e0); r_esp += 4; return;
}

void f_0063d120(void) /* sub_63D120 */
{
    FN_ENTER(0x0063d120);
    /* 0063d120: push 0x932158 */ { u32 v = 0x932158u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d125: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d12a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x63d12fu); f_0061cdb0();
    /* 0063d12f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d132: ret  */ FN_RET(0x0063d120); r_esp += 4; return;
}

void f_0063d134(void)
{
    FN_ENTER(0x0063d134);
    /* 0063d134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d135: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d139: push 0x8e4d0c */ { u32 v = 0x8e4d0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d13e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d145: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063d14c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d14f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063d152: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063d155: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063d158: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063d15b: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d160: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063d167: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63d16cu); f_005caba4();
    /* 0063d16c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d16d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063d170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d172: je 0x63d1ab */ if (fZ) goto L_0063d1ab;
L_0063d174:; BB(0x0063d174);
    /* 0063d174: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063d17b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d182: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d185: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d18b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d18e: call 0x63d034 */ r_esp -= 4; W32(r_esp, 0x63d193u); f_0063d034();
    /* 0063d193: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d196: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063d19d:; BB(0x0063d19d);
    /* 0063d19d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d1a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d1a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d1a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d1aa: ret  */ FN_RET(0x0063d134); r_esp += 4; return;
L_0063d1ab:; BB(0x0063d1ab);
    /* 0063d1ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063d1ad: jmp 0x63d19d */ goto L_0063d19d;
}

void f_0063d1b0(void) /* sub_63D1B0 */
{
    FN_ENTER(0x0063d1b0);
    /* 0063d1b0: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 0063d1b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d1b8: je 0x63d1c6 */ if (fZ) goto L_0063d1c6;
L_0063d1ba:; BB(0x0063d1ba);
    /* 0063d1ba: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 0063d1c0: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
L_0063d1c6:; BB(0x0063d1c6);
    /* 0063d1c6: mov edx, dword ptr [ecx + 0x108] */ r_edx = R32((u32)(r_ecx+0x108u));
    /* 0063d1cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063d1ce: je 0x63d1dc */ if (fZ) goto L_0063d1dc;
L_0063d1d0:; BB(0x0063d1d0);
    /* 0063d1d0: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 0063d1d6: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
L_0063d1dc:; BB(0x0063d1dc);
    /* 0063d1dc: ret  */ FN_RET(0x0063d1b0); r_esp += 4; return;
}

void f_0063d1e0(void) /* sub_63D1E0 */
{
    FN_ENTER(0x0063d1e0);
    /* 0063d1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063d1e3: mov edx, dword ptr [ebp + 0x100] */ r_edx = R32((u32)(r_ebp+0x100u));
    /* 0063d1e9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d1ec: mov dword ptr [ebp + 0x100], edx */ W32((u32)(r_ebp+0x100u), r_edx);
    /* 0063d1f2: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d1f5: je 0x63d22e */ if (fZ) goto L_0063d22e;
L_0063d1f7:; BB(0x0063d1f7);
    /* 0063d1f7: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d1fa: je 0x63d21b */ if (fZ) goto L_0063d21b;
L_0063d1fc:; BB(0x0063d1fc);
    /* 0063d1fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d1fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063d200: call 0x63d9a8 */ r_esp -= 4; W32(r_esp, 0x63d205u); f_0063d9a8();
    /* 0063d205: mov ecx, eax */ r_ecx = r_eax;
    /* 0063d207: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0063d20a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063d20c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d20d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d20e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d20f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d210: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d211: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x63d216u); f_008144b0();
    /* 0063d216: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d21a: ret  */ FN_RET(0x0063d1e0); r_esp += 4; return;
L_0063d21b:; BB(0x0063d21b);
    /* 0063d21b: mov eax, dword ptr [ebp + 0x108] */ r_eax = R32((u32)(r_ebp+0x108u));
    /* 0063d221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d223: je 0x63d1fc */ if (fZ) goto L_0063d1fc;
L_0063d225:; BB(0x0063d225);
    /* 0063d225: add dword ptr [eax + 0x100], 1 */ { u32 ad = (u32)(r_eax+0x100u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0063d22c: jmp 0x63d1fc */ goto L_0063d1fc;
L_0063d22e:; BB(0x0063d22e);
    /* 0063d22e: mov eax, dword ptr [ebp + 0x104] */ r_eax = R32((u32)(r_ebp+0x104u));
    /* 0063d234: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d236: je 0x63d1f7 */ if (fZ) goto L_0063d1f7;
L_0063d238:; BB(0x0063d238);
    /* 0063d238: add dword ptr [eax + 0x100], 1 */ { u32 ad = (u32)(r_eax+0x100u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0063d23f: mov edx, dword ptr [ebp + 0x100] */ r_edx = R32((u32)(r_ebp+0x100u));
    /* 0063d245: jmp 0x63d1f7 */ goto L_0063d1f7;
}

void f_0063d248(void) /* sub_63D248 */
{
    FN_ENTER(0x0063d248);
    /* 0063d248: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
    /* 0063d252: ret  */ FN_RET(0x0063d248); r_esp += 4; return;
}

void f_0063d254(void) /* sub_63D254 */
{
    FN_ENTER(0x0063d254);
    /* 0063d254: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d255: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063d257: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x63d25cu); f_00835068();
    /* 0063d25c: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0063d25f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63d264u); f_00829cc8();
    /* 0063d264: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63d269u); f_0082d7b0();
    /* 0063d269: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0063d26c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63d271u); f_0082d838();
    /* 0063d271: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63d276u); f_0082d7b0();
    /* 0063d276: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0063d279: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d27b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63d280u); f_0082d8bc();
    /* 0063d280: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 0063d286: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d288: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63d28du); f_0082d8bc();
    /* 0063d28d: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d293: mov ecx, dword ptr [ebx + 0xc8] */ r_ecx = R32((u32)(r_ebx+0xc8u));
    /* 0063d299: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 0063d29f: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x63d2a4u); f_00835574();
    /* 0063d2a4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63d2a9u); f_0082da80();
    /* 0063d2a9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63d2aeu); f_0082da80();
    /* 0063d2ae: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x63d2b3u); f_00835078();
    /* 0063d2b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063d2b4: ret  */ FN_RET(0x0063d254); r_esp += 4; return;
}

void f_0063d2b8(void) /* sub_63D2B8 */
{
    FN_ENTER(0x0063d2b8);
    /* 0063d2b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2ba: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d2bd: mov esi, ecx */ r_esi = r_ecx;
    /* 0063d2bf: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0063d2c3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063d2c5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0063d2cc: mov ecx, esi */ r_ecx = r_esi;
    /* 0063d2ce: push dword ptr [esi + 0xfc] */ { u32 v = R32((u32)(r_esi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d2d4: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x63d2d7u); call_ind(t); }
    /* 0063d2d7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063d2d9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063d2dd: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0063d2e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0063d2e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2e8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d2ec: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d2f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063d2f1: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x63d2f4u); call_ind(t); }
    /* 0063d2f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0063d2f6: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0063d2f9: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063d2fe: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0063d301: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d304: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063d305: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063d306: ret 4 */ FN_RET(0x0063d2b8); r_esp += 8; return;
}

void f_0063d30c(void) /* sub_63D30C */
{
    FN_ENTER(0x0063d30c);
    /* 0063d30c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d30d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d310: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063d312: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 0063d315: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063d317: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0063d31a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063d31e: mov eax, 1 */ r_eax = 0x1u;
    /* 0063d323: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0063d327: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0063d32b: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0063d32f: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0063d334: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063d339: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0063d33d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0063d341: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063d345: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0063d349: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0063d34d: mov eax, 1 */ r_eax = 0x1u;
    /* 0063d352: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d355: jl 0x63d359 */ if ((fS!=fO)) goto L_0063d359;
L_0063d357:; BB(0x0063d357);
    /* 0063d357: mov edx, eax */ r_edx = r_eax;
L_0063d359:; BB(0x0063d359);
    /* 0063d359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063d35b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063d35d: jg 0x63d361 */ if ((!fZ&&fS==fO)) goto L_0063d361;
L_0063d35f:; BB(0x0063d35f);
    /* 0063d35f: mov edx, eax */ r_edx = r_eax;
L_0063d361:; BB(0x0063d361);
    /* 0063d361: push dword ptr [esp + edx*4] */ { u32 v = R32((u32)(r_esp+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d364: mov dword ptr [ebx + 0xf8], edx */ W32((u32)(r_ebx+0xf8u), r_edx);
    /* 0063d36a: call 0x63dfe4 */ r_esp -= 4; W32(r_esp, 0x63d36fu); f_0063dfe4();
    /* 0063d36f: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 0063d375: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 0063d37b: push dword ptr [esp + eax*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_eax*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d37f: call 0x63dfcc */ r_esp -= 4; W32(r_esp, 0x63d384u); f_0063dfcc();
    /* 0063d384: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d386: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 0063d38c: call 0x63dfb4 */ r_esp -= 4; W32(r_esp, 0x63d391u); f_0063dfb4();
    /* 0063d391: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 0063d39b: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0063d39e: mov dword ptr [ebx + 0xb8], 0x3f800000 */ W32((u32)(r_ebx+0xb8u), 0x3f800000u);
    /* 0063d3a8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d3ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063d3ac: ret  */ FN_RET(0x0063d30c); r_esp += 4; return;
}

void f_0063d3b0(void) /* sub_63D3B0 */
{
    FN_ENTER(0x0063d3b0);
    /* 0063d3b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063d3b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063d3b5: call 0x63ddc0 */ r_esp -= 4; W32(r_esp, 0x63d3bau); f_0063ddc0();
    /* 0063d3ba: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 0063d3bd: mov dword ptr [ebx + 0xfc], eax */ W32((u32)(r_ebx+0xfcu), r_eax);
    /* 0063d3c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063d3c4: ret  */ FN_RET(0x0063d3b0); r_esp += 4; return;
}

void f_0063d3c8(void) /* sub_63D3C8 */
{
    FN_ENTER(0x0063d3c8);
    /* 0063d3c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3c9: mov edi, ecx */ r_edi = r_ecx;
    /* 0063d3cb: mov ecx, edi */ r_ecx = r_edi;
    /* 0063d3cd: call 0x63da54 */ r_esp -= 4; W32(r_esp, 0x63d3d2u); f_0063da54();
    /* 0063d3d2: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063d3d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d3db: je 0x63d3ed */ if (fZ) goto L_0063d3ed;
L_0063d3dd:; BB(0x0063d3dd);
    /* 0063d3dd: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3e4: mov ecx, edi */ r_ecx = r_edi;
    /* 0063d3e6: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x63d3ebu); f_007b52c4();
    /* 0063d3eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063d3ec: ret  */ FN_RET(0x0063d3c8); r_esp += 4; return;
L_0063d3ed:; BB(0x0063d3ed);
    /* 0063d3ed: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d3f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0063d3f6: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x63d3fbu); f_007b52ec();
    /* 0063d3fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063d3fc: ret  */ FN_RET(0x0063d3c8); r_esp += 4; return;
}

void f_0063d400(void) /* sub_63D400 */
{
    FN_ENTER(0x0063d400);
    /* 0063d400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d401: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d405: push 0x8e4d28 */ { u32 v = 0x8e4d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d40a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d411: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063d418: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d41b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063d41e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063d421: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063d424: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063d427: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063d42a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d431: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d434: mov dword ptr [eax], 0xb2dda0 */ W32((u32)(r_eax), 0xb2dda0u);
    /* 0063d43a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d43b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63d440u); f_007b4e84();
    /* 0063d440: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d441: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d444: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x63d449u); f_007b9c8c();
    /* 0063d449: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063d450: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d453: call 0x63de5c */ r_esp -= 4; W32(r_esp, 0x63d458u); f_0063de5c();
    /* 0063d458: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d45b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d462: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d465: ret  */ FN_RET(0x0063d400); r_esp += 4; return;
}

void f_0063d468(void) /* sub_63D468 */
{
    FN_ENTER(0x0063d468);
    /* 0063d468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d469: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d46b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d46d: push 0x8e4d7a */ { u32 v = 0x8e4d7au; r_esp -= 4; W32(r_esp, v); }
    /* 0063d472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063d480: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063d486: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063d489: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063d48c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063d48f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063d492: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063d495: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d496: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d499: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063d49c: call 0x63deac */ r_esp -= 4; W32(r_esp, 0x63d4a1u); f_0063deac();
    /* 0063d4a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d4a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063d4ab: mov dword ptr [ecx], 0xb2dda0 */ W32((u32)(r_ecx), 0xb2dda0u);
    /* 0063d4b1: mov eax, dword ptr [0x9c6a54] */ r_eax = R32((u32)(0x9c6a54u));
    /* 0063d4b6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063d4b9: call 0x63d3b0 */ r_esp -= 4; W32(r_esp, 0x63d4beu); f_0063d3b0();
    /* 0063d4be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063d4c1: call 0x63d30c */ r_esp -= 4; W32(r_esp, 0x63d4c6u); f_0063d30c();
    /* 0063d4c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063d4c9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4cb: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 0063d4d1: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0063d4d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d4d6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063d4d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d4da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d4dc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063d4de: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d4e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063d4e2: lea ebx, [edx + edx + 0x9c68a0] */ r_ebx = (u32)(r_edx+r_edx+0x9c68a0u);
    /* 0063d4e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d4ea: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x63d4efu); f_007b9a88();
    /* 0063d4ef: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d4f2: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x63d4f7u); f_007b999c();
    /* 0063d4f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d4f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063d4fb: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x63d500u); f_007b4f54();
    /* 0063d500: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063d503: fld dword ptr [0x934284] */ FPUSH(R_F32((u32)(0x934284u)));
    /* 0063d509: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 0063d50c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063d50f: fld dword ptr [0x934280] */ FPUSH(R_F32((u32)(0x934280u)));
    /* 0063d515: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063d517: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 0063d51a: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0063d51d: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 0063d521: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 0063d525: movzx edi, word ptr [eax + 6] */ r_edi = (u32)R16((u32)(r_eax+0x6u));
    /* 0063d529: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0063d52d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0063d534: mov word ptr [ebp - 0x6c], cx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_ecx);
    /* 0063d538: mov word ptr [ebp - 0x6a], bx */ W16((u32)(r_ebp+0xffffff96u), (u16)r_ebx);
    /* 0063d53c: mov word ptr [ebp - 0x68], si */ W16((u32)(r_ebp+0xffffff98u), (u16)r_esi);
    /* 0063d540: mov word ptr [ebp - 0x66], di */ W16((u32)(r_ebp+0xffffff9au), (u16)r_edi);
    /* 0063d544: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
    /* 0063d548: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d54d: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0063d551: mov word ptr [ebp - 0x62], dx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_edx);
    /* 0063d555: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0063d558: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0063d55b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0063d55e: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0063d561: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0063d564: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0063d567: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0063d56a: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0063d56d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0063d570: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0063d573: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0063d576: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0063d579: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0063d57c: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0063d57f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0063d582: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0063d585: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0063d588: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0063d58b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0063d58e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0063d591: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0063d594: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0063d597: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0063d59a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063d59d: fadd dword ptr [ebp - 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa4u));
    /* 0063d5a0: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 0063d5a3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63d5a8u); f_005caba4();
    /* 0063d5a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d5a9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063d5ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d5ae: je 0x63d65d */ if (fZ) goto L_0063d65d;
L_0063d5b4:; BB(0x0063d5b4);
    /* 0063d5b4: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0063d5bb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063d5c2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063d5c5: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 0063d5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d5c9: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d5cc: call 0x63d92c */ r_esp -= 4; W32(r_esp, 0x63d5d1u); f_0063d92c();
    /* 0063d5d1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063d5d4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0063d5db:; BB(0x0063d5db);
    /* 0063d5db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063d5de: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 0063d5e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d5eb: fld dword ptr [0x934284] */ FPUSH(R_F32((u32)(0x934284u)));
    /* 0063d5f1: fadd dword ptr [ebp - 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffa4u));
    /* 0063d5f4: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 0063d5f7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0063d5fe: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d603: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63d608u); f_005caba4();
    /* 0063d608: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d609: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0063d60c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d60e: je 0x63d659 */ if (fZ) goto L_0063d659;
L_0063d610:; BB(0x0063d610);
    /* 0063d610: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0063d617: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0063d61e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063d621: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 0063d624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d625: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d628: call 0x63d92c */ r_esp -= 4; W32(r_esp, 0x63d62du); f_0063d92c();
    /* 0063d62d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063d630: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0063d637:; BB(0x0063d637);
    /* 0063d637: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063d63a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d63d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063d640: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063d643: mov dword ptr [eax + 0x108], edx */ W32((u32)(r_eax+0x108u), r_edx);
    /* 0063d649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d64c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d653: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d655: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d656: ret 8 */ FN_RET(0x0063d468); r_esp += 12; return;
L_0063d659:; BB(0x0063d659);
    /* 0063d659: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063d65b: jmp 0x63d637 */ goto L_0063d637;
L_0063d65d:; BB(0x0063d65d);
    /* 0063d65d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063d65f: jmp 0x63d5db */ goto L_0063d5db;
}

void f_0063d664(void) /* sub_63D664 */
{
    FN_ENTER(0x0063d664);
    /* 0063d664: push 0x9343d4 */ { u32 v = 0x9343d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d669: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 0063d66e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x63d673u); f_0061cdb0();
    /* 0063d673: push 0x932158 */ { u32 v = 0x932158u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d678: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d67d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x63d682u); f_0061cdb0();
    /* 0063d682: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d685: ret  */ FN_RET(0x0063d664); r_esp += 4; return;
}

void f_0063d688(void)
{
    FN_ENTER(0x0063d688);
    /* 0063d688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d689: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d68b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d68d: push 0x8e4da0 */ { u32 v = 0x8e4da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d692: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d699: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063d6a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d6a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063d6a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063d6a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063d6ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063d6af: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d6b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063d6bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x63d6c0u); f_005caba4();
    /* 0063d6c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063d6c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063d6c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d6c6: je 0x63d6ff */ if (fZ) goto L_0063d6ff;
L_0063d6c8:; BB(0x0063d6c8);
    /* 0063d6c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063d6cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d6d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d6d9: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d6df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d6e2: call 0x63d468 */ r_esp -= 4; W32(r_esp, 0x63d6e7u); f_0063d468();
    /* 0063d6e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d6ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063d6f1:; BB(0x0063d6f1);
    /* 0063d6f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d6f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d6fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d6fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d6fe: ret  */ FN_RET(0x0063d688); r_esp += 4; return;
L_0063d6ff:; BB(0x0063d6ff);
    /* 0063d6ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063d701: jmp 0x63d6f1 */ goto L_0063d6f1;
}

void f_0063d704(void) /* sub_63D704 */
{
    FN_ENTER(0x0063d704);
    /* 0063d704: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d705: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d708: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063d70a: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 0063d70d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063d70f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0063d712: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063d716: mov eax, 1 */ r_eax = 0x1u;
    /* 0063d71b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0063d71f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0063d723: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0063d727: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0063d72c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063d731: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0063d735: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0063d739: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063d73d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0063d741: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0063d745: mov eax, 1 */ r_eax = 0x1u;
    /* 0063d74a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d74d: jl 0x63d751 */ if ((fS!=fO)) goto L_0063d751;
L_0063d74f:; BB(0x0063d74f);
    /* 0063d74f: mov edx, eax */ r_edx = r_eax;
L_0063d751:; BB(0x0063d751);
    /* 0063d751: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063d753: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063d755: jg 0x63d759 */ if ((!fZ&&fS==fO)) goto L_0063d759;
L_0063d757:; BB(0x0063d757);
    /* 0063d757: mov edx, eax */ r_edx = r_eax;
L_0063d759:; BB(0x0063d759);
    /* 0063d759: push dword ptr [esp + edx*4] */ { u32 v = R32((u32)(r_esp+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d75c: mov dword ptr [ebx + 0xfc], edx */ W32((u32)(r_ebx+0xfcu), r_edx);
    /* 0063d762: call 0x63dfe4 */ r_esp -= 4; W32(r_esp, 0x63d767u); f_0063dfe4();
    /* 0063d767: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 0063d76d: mov eax, dword ptr [ebx + 0xfc] */ r_eax = R32((u32)(r_ebx+0xfcu));
    /* 0063d773: push dword ptr [esp + eax*4 + 0xc] */ { u32 v = R32((u32)(r_esp+r_eax*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d777: call 0x63dfcc */ r_esp -= 4; W32(r_esp, 0x63d77cu); f_0063dfcc();
    /* 0063d77c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d77e: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 0063d784: call 0x63dfb4 */ r_esp -= 4; W32(r_esp, 0x63d789u); f_0063dfb4();
    /* 0063d789: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 0063d793: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0063d796: mov dword ptr [ebx + 0xb8], 0x3f800000 */ W32((u32)(r_ebx+0xb8u), 0x3f800000u);
    /* 0063d7a0: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d7a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063d7a4: ret  */ FN_RET(0x0063d704); r_esp += 4; return;
}

void f_0063d7a8(void) /* sub_63D7A8 */
{
    FN_ENTER(0x0063d7a8);
    /* 0063d7a8: mov eax, dword ptr [ecx + 0x104] */ r_eax = R32((u32)(r_ecx+0x104u));
    /* 0063d7ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d7b0: jne 0x63d7dc */ if (!fZ) goto L_0063d7dc;
L_0063d7b2:; BB(0x0063d7b2);
    /* 0063d7b2: mov eax, dword ptr [ecx + 0x100] */ r_eax = R32((u32)(r_ecx+0x100u));
    /* 0063d7b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063d7ba: jle 0x63d7ed */ if ((fZ||fS!=fO)) goto L_0063d7ed;
L_0063d7bc:; BB(0x0063d7bc);
    /* 0063d7bc: mov dword ptr [ecx + 0x104], 1 */ W32((u32)(r_ecx+0x104u), 0x1u);
    /* 0063d7c6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d7c9: mov dword ptr [ecx + 0x100], eax */ W32((u32)(r_ecx+0x100u), r_eax);
    /* 0063d7cf: mov eax, dword ptr [ecx + 0xcc] */ r_eax = R32((u32)(r_ecx+0xccu));
    /* 0063d7d5: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 0063d7db: ret  */ FN_RET(0x0063d7a8); r_esp += 4; return;
L_0063d7dc:; BB(0x0063d7dc);
    /* 0063d7dc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063d7df: jne 0x63d7ed */ if (!fZ) goto L_0063d7ed;
L_0063d7e1:; BB(0x0063d7e1);
    /* 0063d7e1: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 0063d7e7: add dword ptr [ecx + 0xd4], eax */ { u32 ad = (u32)(r_ecx+0xd4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0063d7ed:; BB(0x0063d7ed);
    /* 0063d7ed: ret  */ FN_RET(0x0063d7a8); r_esp += 4; return;
}

void f_0063d7f0(void) /* sub_63D7F0 */
{
    FN_ENTER(0x0063d7f0);
    /* 0063d7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d7f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063d7f2: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d7f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063d7f7: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
    /* 0063d7fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d7ff: jne 0x63d834 */ if (!fZ) goto L_0063d834;
L_0063d801:; BB(0x0063d801);
    /* 0063d801: mov eax, dword ptr [ebx + 0x100] */ r_eax = R32((u32)(r_ebx+0x100u));
    /* 0063d807: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063d809: jle 0x63d8d5 */ if ((fZ||fS!=fO)) goto L_0063d8d5;
L_0063d80f:; BB(0x0063d80f);
    /* 0063d80f: mov dword ptr [ebx + 0x104], 1 */ W32((u32)(r_ebx+0x104u), 0x1u);
    /* 0063d819: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063d81c: mov dword ptr [ebx + 0x100], eax */ W32((u32)(r_ebx+0x100u), r_eax);
    /* 0063d822: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0063d828: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 0063d82e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d831: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063d832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d833: ret  */ FN_RET(0x0063d7f0); r_esp += 4; return;
L_0063d834:; BB(0x0063d834);
    /* 0063d834: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d837: jne 0x63d8d5 */ if (!fZ) goto L_0063d8d5;
L_0063d83d:; BB(0x0063d83d);
    /* 0063d83d: mov ebp, dword ptr [ebx + 0xd0] */ r_ebp = R32((u32)(r_ebx+0xd0u));
    /* 0063d843: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 0063d849: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d84b: mov edx, ecx */ r_edx = r_ecx;
    /* 0063d84d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063d84f: jge 0x63d88f */ if ((fS==fO)) goto L_0063d88f;
L_0063d851:; BB(0x0063d851);
    /* 0063d851: mov dword ptr [ebx + 0x104], 0 */ W32((u32)(r_ebx+0x104u), 0x0u);
    /* 0063d85b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0063d85e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0063d861: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063d863: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0063d865: fchs  */ ST(0) = -ST(0);
    /* 0063d867: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0063d86b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0063d870: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063d875: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0063d879: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0063d87d: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063d881: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0063d885: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0063d889: mov dword ptr [ebx + 0xd0], ebp */ W32((u32)(r_ebx+0xd0u), r_ebp);
L_0063d88f:; BB(0x0063d88f);
    /* 0063d88f: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0063d895: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063d897: jg 0x63d8a5 */ if ((!fZ&&fS==fO)) goto L_0063d8a5;
L_0063d899:; BB(0x0063d899);
    /* 0063d899: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 0063d89f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d8a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063d8a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d8a4: ret  */ FN_RET(0x0063d7f0); r_esp += 4; return;
L_0063d8a5:; BB(0x0063d8a5);
    /* 0063d8a5: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0063d8a9: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0063d8ad: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 0063d8b3: fchs  */ ST(0) = -ST(0);
    /* 0063d8b5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0063d8b9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0063d8be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063d8c3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0063d8c7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0063d8cb: fistp dword ptr [ebx + 0xd0] */ W32((u32)(r_ebx+0xd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063d8d1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
L_0063d8d5:; BB(0x0063d8d5);
    /* 0063d8d5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063d8d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063d8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d8da: ret  */ FN_RET(0x0063d7f0); r_esp += 4; return;
}

void f_0063d8dc(void) /* sub_63D8DC */
{
    FN_ENTER(0x0063d8dc);
    /* 0063d8dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d8dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d8df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d8e1: push 0x8e4dbc */ { u32 v = 0x8e4dbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d8e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d8ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d8ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063d8f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d8f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063d8fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063d8fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063d900: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063d903: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063d906: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d909: mov dword ptr [ecx], 0xb2dd20 */ W32((u32)(r_ecx), 0xb2dd20u);
    /* 0063d90f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063d916: call 0x63de5c */ r_esp -= 4; W32(r_esp, 0x63d91bu); f_0063de5c();
    /* 0063d91b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d91e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d925: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d927: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d928: ret  */ FN_RET(0x0063d8dc); r_esp += 4; return;
}

void f_0063d92c(void) /* sub_63D92C */
{
    FN_ENTER(0x0063d92c);
    /* 0063d92c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063d92d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063d92f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063d931: push 0x8e4dd8 */ { u32 v = 0x8e4dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063d936: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063d93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063d93d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063d944: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d947: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063d94a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063d94d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063d950: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063d953: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d956: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063d959: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063d95c: call 0x63deac */ r_esp -= 4; W32(r_esp, 0x63d961u); f_0063deac();
    /* 0063d961: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063d968: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d96b: mov dword ptr [ecx], 0xb2dd20 */ W32((u32)(r_ecx), 0xb2dd20u);
    /* 0063d971: mov eax, dword ptr [0x9c6a5c] */ r_eax = R32((u32)(0x9c6a5cu));
    /* 0063d976: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063d979: call dword ptr [0xb2dd54] */ { u32 t = R32((u32)(0xb2dd54u)); r_esp -= 4; W32(r_esp, 0x63d97fu); call_ind(t); }
    /* 0063d97f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d982: call 0x63d704 */ r_esp -= 4; W32(r_esp, 0x63d987u); f_0063d704();
    /* 0063d987: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063d98a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063d98c: mov dword ptr [eax + 0x100], edx */ W32((u32)(r_eax+0x100u), r_edx);
    /* 0063d992: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 0063d998: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063d99b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063d9a2: mov esp, ebp */ r_esp = r_ebp;
    /* 0063d9a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063d9a5: ret 8 */ FN_RET(0x0063d92c); r_esp += 12; return;
}

void f_0063d9a8(void) /* sub_63D9A8 */
{
    FN_ENTER(0x0063d9a8);
    /* 0063d9a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063d9a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063d9aa: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063d9ad: mov eax, 0x934220 */ r_eax = 0x934220u;
    /* 0063d9b2: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0063d9b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063d9b8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0063d9bb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0063d9be: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0063d9c2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0063d9c5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063d9c9: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0063d9cc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0063d9d0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0063d9d3: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0063d9d7: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0063d9da: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0063d9de: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0063d9e1: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0063d9e5: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0063d9e8: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0063d9eb: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0063d9ef: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0063d9f3: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0063d9f6: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x63d9fbu); f_00807ac0();
    /* 0063d9fb: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063d9fe: jne 0x63da06 */ if (!fZ) goto L_0063da06;
L_0063da00:; BB(0x0063da00);
    /* 0063da00: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0063da04: jmp 0x63da0f */ goto L_0063da0f;
L_0063da06:; BB(0x0063da06);
    /* 0063da06: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063da09: jne 0x63da0f */ if (!fZ) goto L_0063da0f;
L_0063da0b:; BB(0x0063da0b);
    /* 0063da0b: lea edi, [esp + 0x18] */ r_edi = (u32)(r_esp+0x18u);
L_0063da0f:; BB(0x0063da0f);
    /* 0063da0f: mov eax, dword ptr [edi + esi*4] */ r_eax = R32((u32)(r_edi+r_esi*4));
    /* 0063da12: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063da15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063da16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063da17: ret 4 */ FN_RET(0x0063d9a8); r_esp += 8; return;
}

void f_0063da1c(void) /* sub_63DA1C */
{
    FN_ENTER(0x0063da1c);
    /* 0063da1c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063da1f: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0063da25: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0063da29: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 0063da30: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 0063da38: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 0063da40: mov dword ptr [esp + 0xc], 0x40c00000 */ W32((u32)(r_esp+0xcu), 0x40c00000u);
    /* 0063da48: fmul dword ptr [esp + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_edx*4));
    /* 0063da4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063da4e: ret 4 */ FN_RET(0x0063da1c); r_esp += 8; return;
}

void f_0063da54(void) /* sub_63DA54 */
{
    FN_ENTER(0x0063da54);
    /* 0063da54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063da55: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063da58: mov edi, ecx */ r_edi = r_ecx;
    /* 0063da5a: mov eax, dword ptr [edi + 0xf4] */ r_eax = R32((u32)(r_edi+0xf4u));
    /* 0063da60: mov ecx, edi */ r_ecx = r_edi;
    /* 0063da62: call dword ptr [eax*4 + 0x9c6880] */ { u32 t = R32((u32)(r_eax*4+0x9c6880u)); r_esp -= 4; W32(r_esp, 0x63da69u); call_ind(t); }
    /* 0063da69: mov eax, dword ptr [edi + 0xbc] */ r_eax = R32((u32)(r_edi+0xbcu));
    /* 0063da6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063da71: je 0x63daac */ if (fZ) goto L_0063daac;
L_0063da73:; BB(0x0063da73);
    /* 0063da73: fld dword ptr [edi + 0xb4] */ FPUSH(R_F32((u32)(r_edi+0xb4u)));
    /* 0063da79: fadd dword ptr [edi + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xb8u));
    /* 0063da7f: fst dword ptr [edi + 0xb4] */ W_F32((u32)(r_edi+0xb4u), ST(0));
    /* 0063da85: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0063da88: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063da8b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0063da8e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0063da91: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0063da94: fadd dword ptr [edx*4 + 0x934248] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x934248u));
    /* 0063da9b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0063da9d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063da9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063daa0: jae 0x63daac */ if (!fC) goto L_0063daac;
L_0063daa2:; BB(0x0063daa2);
    /* 0063daa2: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
L_0063daac:; BB(0x0063daac);
    /* 0063daac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063daaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063dab0: ret  */ FN_RET(0x0063da54); r_esp += 4; return;
}

void f_0063dab4(void) /* sub_63DAB4 */
{
    FN_ENTER(0x0063dab4);
    /* 0063dab4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dab5: mov esi, ecx */ r_esi = r_ecx;
    /* 0063dab7: mov eax, dword ptr [esi + 0xf0] */ r_eax = R32((u32)(r_esi+0xf0u));
    /* 0063dabd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dabf: jne 0x63dae7 */ if (!fZ) goto L_0063dae7;
L_0063dac1:; BB(0x0063dac1);
    /* 0063dac1: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 0063dac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dac9: jne 0x63dad2 */ if (!fZ) goto L_0063dad2;
L_0063dacb:; BB(0x0063dacb);
    /* 0063dacb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063dacd: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dacf: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x63dad2u); call_ind(t); }
L_0063dad2:; BB(0x0063dad2);
    /* 0063dad2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063dad4: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dad6: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x63dad9u); call_ind(t); }
    /* 0063dad9: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0063dadf: add dword ptr [esi + 0xd4], eax */ { u32 ad = (u32)(r_esi+0xd4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063dae5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063dae6: ret  */ FN_RET(0x0063dab4); r_esp += 4; return;
L_0063dae7:; BB(0x0063dae7);
    /* 0063dae7: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 0063daed: sub eax, dword ptr [esi + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063daf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063daf5: jl 0x63daff */ if ((fS!=fO)) goto L_0063daff;
L_0063daf7:; BB(0x0063daf7);
    /* 0063daf7: mov dword ptr [esi + 0xd4], eax */ W32((u32)(r_esi+0xd4u), r_eax);
    /* 0063dafd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063dafe: ret  */ FN_RET(0x0063dab4); r_esp += 4; return;
L_0063daff:; BB(0x0063daff);
    /* 0063daff: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 0063db09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063db0a: ret  */ FN_RET(0x0063dab4); r_esp += 4; return;
}

void f_0063db0c(void) /* sub_63DB0C */
{
    FN_ENTER(0x0063db0c);
    /* 0063db0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063db0d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063db10: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063db12: mov eax, dword ptr [ebp + 0xf0] */ r_eax = R32((u32)(r_ebp+0xf0u));
    /* 0063db18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063db1a: jne 0x63db34 */ if (!fZ) goto L_0063db34;
L_0063db1c:; BB(0x0063db1c);
    /* 0063db1c: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 0063db22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063db24: jle 0x63db83 */ if ((fZ||fS!=fO)) goto L_0063db83;
L_0063db26:; BB(0x0063db26);
    /* 0063db26: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063db29: mov dword ptr [ebp + 0xec], eax */ W32((u32)(r_ebp+0xecu), r_eax);
    /* 0063db2f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063db32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063db33: ret  */ FN_RET(0x0063db0c); r_esp += 4; return;
L_0063db34:; BB(0x0063db34);
    /* 0063db34: fild dword ptr [ebp + 0xd0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xd0u)));
    /* 0063db3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063db3b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0063db3e: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x63db43u); f_0082e900();
    /* 0063db43: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0063db49: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0063db4c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0063db50: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063db55: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0063db59: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0063db5d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063db61: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063db64: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0063db68: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0063db6e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063db70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063db72: jl 0x63dc57 */ if ((fS!=fO)) goto L_0063dc57;
L_0063db78:; BB(0x0063db78);
    /* 0063db78: mov dword ptr [ebp + 0xd4], edx */ W32((u32)(r_ebp+0xd4u), r_edx);
L_0063db7e:; BB(0x0063db7e);
    /* 0063db7e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063db81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063db82: ret  */ FN_RET(0x0063db0c); r_esp += 4; return;
L_0063db83:; BB(0x0063db83);
    /* 0063db83: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 0063db89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063db8b: jne 0x63db95 */ if (!fZ) goto L_0063db95;
L_0063db8d:; BB(0x0063db8d);
    /* 0063db8d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0063db90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063db92: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x63db95u); call_ind(t); }
L_0063db95:; BB(0x0063db95);
    /* 0063db95: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0063db98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063db9a: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x63db9du); call_ind(t); }
    /* 0063db9d: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0063dba3: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0063dba9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063dbab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063dbad: jl 0x63dbf7 */ if ((fS!=fO)) goto L_0063dbf7;
L_0063dbaf:; BB(0x0063dbaf);
    /* 0063dbaf: mov dword ptr [ebp + 0xd4], edx */ W32((u32)(r_ebp+0xd4u), r_edx);
L_0063dbb5:; BB(0x0063dbb5);
    /* 0063dbb5: mov eax, dword ptr [ebp + 0xcc] */ r_eax = R32((u32)(r_ebp+0xccu));
    /* 0063dbbb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063dbbd: jle 0x63db7e */ if ((fZ||fS!=fO)) goto L_0063db7e;
L_0063dbbf:; BB(0x0063dbbf);
    /* 0063dbbf: fild dword ptr [ebp + 0xd0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xd0u)));
    /* 0063dbc5: mov dword ptr [ebp + 0xd4], eax */ W32((u32)(r_ebp+0xd4u), r_eax);
    /* 0063dbcb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063dbcd: fchs  */ ST(0) = -ST(0);
    /* 0063dbcf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0063dbd2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0063dbd6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063dbdb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0063dbdf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0063dbe3: fistp dword ptr [ebp + 0xd0] */ W32((u32)(r_ebp+0xd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063dbe9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063dbec: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0063dbef: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x63dbf2u); call_ind(t); }
    /* 0063dbf2: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063dbf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063dbf6: ret  */ FN_RET(0x0063db0c); r_esp += 4; return;
L_0063dbf7:; BB(0x0063dbf7);
    /* 0063dbf7: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0063dbfb: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0063dbff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063dc01: fchs  */ ST(0) = -ST(0);
    /* 0063dc03: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0063dc06: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0063dc0a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063dc0f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0063dc13: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0063dc17: fistp dword ptr [ebp + 0xd0] */ W32((u32)(r_ebp+0xd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0063dc1d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063dc20: movzx eax, word ptr [ebp + 0x8c] */ r_eax = (u32)R16((u32)(r_ebp+0x8cu));
    /* 0063dc27: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0063dc2a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063dc2c: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
    /* 0063dc36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063dc38: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063dc3a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063dc3c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063dc3e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063dc40: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0063dc43: mov dword ptr [ebp + 0xec], edx */ W32((u32)(r_ebp+0xecu), r_edx);
    /* 0063dc49: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x63dc4cu); call_ind(t); }
    /* 0063dc4c: mov edx, dword ptr [ebp + 0xd4] */ r_edx = R32((u32)(r_ebp+0xd4u));
    /* 0063dc52: jmp 0x63dbb5 */ goto L_0063dbb5;
L_0063dc57:; BB(0x0063dc57);
    /* 0063dc57: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
    /* 0063dc61: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063dc64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063dc65: ret  */ FN_RET(0x0063db0c); r_esp += 4; return;
}

void f_0063dc68(void) /* sub_63DC68 */
{
    FN_ENTER(0x0063dc68);
    /* 0063dc68: add ecx, 0xd8 */ {  u32 a = r_ecx; u32 b = 0xd8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063dc6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dc70: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0063dc72: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063dc75: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0063dc78: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0063dc7b: ret  */ FN_RET(0x0063dc68); r_esp += 4; return;
}

void f_0063dc7c(void) /* sub_63DC7C */
{
    FN_ENTER(0x0063dc7c);
    /* 0063dc7c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0063dc80: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0063dc84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dc86: jl 0x63dc98 */ if ((fS!=fO)) goto L_0063dc98;
L_0063dc88:; BB(0x0063dc88);
    /* 0063dc88: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063dc8b: jge 0x63dc98 */ if ((fS==fO)) goto L_0063dc98;
L_0063dc8d:; BB(0x0063dc8d);
    /* 0063dc8d: mov dword ptr [ecx + eax*4 + 0xd8], 0x96 */ W32((u32)(r_ecx+r_eax*4+0xd8u), 0x96u);
L_0063dc98:; BB(0x0063dc98);
    /* 0063dc98: ret 4 */ FN_RET(0x0063dc7c); r_esp += 8; return;
}

void f_0063dc9c(void) /* sub_63DC9C */
{
    FN_ENTER(0x0063dc9c);
    /* 0063dc9c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0063dca0: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0063dca4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0063dca6: jl 0x63dcca */ if ((fS!=fO)) goto L_0063dcca;
L_0063dca8:; BB(0x0063dca8);
    /* 0063dca8: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063dcab: jge 0x63dcca */ if ((fS==fO)) goto L_0063dcca;
L_0063dcad:; BB(0x0063dcad);
    /* 0063dcad: mov eax, dword ptr [ecx + edx*4 + 0xd8] */ r_eax = R32((u32)(r_ecx+r_edx*4+0xd8u));
    /* 0063dcb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063dcb6: jle 0x63dcca */ if ((fZ||fS!=fO)) goto L_0063dcca;
L_0063dcb8:; BB(0x0063dcb8);
    /* 0063dcb8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063dcbb: mov dword ptr [ecx + edx*4 + 0xd8], eax */ W32((u32)(r_ecx+r_edx*4+0xd8u), r_eax);
    /* 0063dcc2: mov eax, 1 */ r_eax = 0x1u;
    /* 0063dcc7: ret 4 */ FN_RET(0x0063dc9c); r_esp += 8; return;
L_0063dcca:; BB(0x0063dcca);
    /* 0063dcca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dccc: ret 4 */ FN_RET(0x0063dc9c); r_esp += 8; return;
}

void f_0063dcd0(void) /* sub_63DCD0 */
{
    FN_ENTER(0x0063dcd0);
    /* 0063dcd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dcd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dcd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063dcd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dcd4: mov esi, ecx */ r_esi = r_ecx;
    /* 0063dcd6: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x63dcdbu); f_006dc358();
    /* 0063dcdb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dcde: je 0x63dd4e */ if (fZ) goto L_0063dd4e;
L_0063dce0:; BB(0x0063dce0);
    /* 0063dce0: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063dce6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63dcebu); f_0068d5a8();
    /* 0063dceb: mov edi, eax */ r_edi = r_eax;
    /* 0063dced: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063dcf0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dcf2: je 0x63ddb9 */ if (fZ) goto L_0063ddb9;
L_0063dcf8:; BB(0x0063dcf8);
    /* 0063dcf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dcf9: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063dcfb: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dcfd: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x63dd00u); call_ind(t); }
    /* 0063dd00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dd02: jne 0x63ddb9 */ if (!fZ) goto L_0063ddb9;
L_0063dd08:; BB(0x0063dd08);
    /* 0063dd08: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0063dd0e: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063dd14: jne 0x63ddb9 */ if (!fZ) goto L_0063ddb9;
L_0063dd1a:; BB(0x0063dd1a);
    /* 0063dd1a: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd20: mov ebx, dword ptr [esi + 0x60] */ r_ebx = R32((u32)(r_esi+0x60u));
    /* 0063dd23: mov edx, dword ptr [esi + 0xd4] */ r_edx = R32((u32)(r_esi+0xd4u));
    /* 0063dd29: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063dd2b: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 0063dd2e: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dd30: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x63dd35u); f_007b8338();
    /* 0063dd35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dd37: je 0x63dd49 */ if (fZ) goto L_0063dd49;
L_0063dd39:; BB(0x0063dd39);
    /* 0063dd39: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd3a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063dd3c: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dd3e: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x63dd41u); call_ind(t); }
    /* 0063dd41: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd42: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063dd44: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dd46: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x63dd49u); call_ind(t); }
L_0063dd49:; BB(0x0063dd49);
    /* 0063dd49: mov dword ptr [esi + 0x60], ebx */ W32((u32)(r_esi+0x60u), r_ebx);
    /* 0063dd4c: jmp 0x63ddb9 */ goto L_0063ddb9;
L_0063dd4e:; BB(0x0063dd4e);
    /* 0063dd4e: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0063dd51: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0063dd53:; BB(0x0063dd53);
    /* 0063dd53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd54: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x63dd59u); f_0068d5a8();
    /* 0063dd59: mov edi, eax */ r_edi = r_eax;
    /* 0063dd5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063dd5e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dd60: je 0x63ddae */ if (fZ) goto L_0063ddae;
L_0063dd62:; BB(0x0063dd62);
    /* 0063dd62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd63: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063dd65: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dd67: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x63dd6au); call_ind(t); }
    /* 0063dd6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dd6c: jne 0x63ddae */ if (!fZ) goto L_0063ddae;
L_0063dd6e:; BB(0x0063dd6e);
    /* 0063dd6e: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0063dd74: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dd7a: jne 0x63ddae */ if (!fZ) goto L_0063ddae;
L_0063dd7c:; BB(0x0063dd7c);
    /* 0063dd7c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd81: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd82: mov ebp, dword ptr [esi + 0x60] */ r_ebp = R32((u32)(r_esi+0x60u));
    /* 0063dd85: mov edx, dword ptr [esi + 0xd4] */ r_edx = R32((u32)(r_esi+0xd4u));
    /* 0063dd8b: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063dd8d: mov dword ptr [esi + 0x60], edx */ W32((u32)(r_esi+0x60u), r_edx);
    /* 0063dd90: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dd92: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x63dd97u); f_007b8338();
    /* 0063dd97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dd99: je 0x63ddab */ if (fZ) goto L_0063ddab;
L_0063dd9b:; BB(0x0063dd9b);
    /* 0063dd9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dd9c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063dd9e: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dda0: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x63dda3u); call_ind(t); }
    /* 0063dda3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063dda4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0063dda6: mov ecx, esi */ r_ecx = r_esi;
    /* 0063dda8: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x63ddabu); call_ind(t); }
L_0063ddab:; BB(0x0063ddab);
    /* 0063ddab: mov dword ptr [esi + 0x60], ebp */ W32((u32)(r_esi+0x60u), r_ebp);
L_0063ddae:; BB(0x0063ddae);
    /* 0063ddae: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063ddb1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063ddb4: jl 0x63dd53 */ if ((fS!=fO)) goto L_0063dd53;
L_0063ddb6:; BB(0x0063ddb6);
    /* 0063ddb6: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0063ddb9:; BB(0x0063ddb9);
    /* 0063ddb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ddba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063ddbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063ddbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063ddbd: ret  */ FN_RET(0x0063dcd0); r_esp += 4; return;
}

void f_0063ddc0(void) /* sub_63DDC0 */
{
    FN_ENTER(0x0063ddc0);
    /* 0063ddc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ddc1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063ddc3: movzx ecx, word ptr [ebx + 0x84] */ r_ecx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0063ddca: mov eax, 0xff */ r_eax = 0xffu;
    /* 0063ddcf: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063ddd5: mov edx, 0 */ r_edx = 0x0u;
    /* 0063ddda: jl 0x63ddde */ if ((fS!=fO)) goto L_0063ddde;
L_0063dddc:; BB(0x0063dddc);
    /* 0063dddc: mov ecx, eax */ r_ecx = r_eax;
L_0063ddde:; BB(0x0063ddde);
    /* 0063ddde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063dde0: jg 0x63dde4 */ if ((!fZ&&fS==fO)) goto L_0063dde4;
L_0063dde2:; BB(0x0063dde2);
    /* 0063dde2: mov ecx, edx */ r_ecx = r_edx;
L_0063dde4:; BB(0x0063dde4);
    /* 0063dde4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063dde5: mov dword ptr [ebx + 0xe8], ecx */ W32((u32)(r_ebx+0xe8u), r_ecx);
    /* 0063ddeb: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x63ddf0u); f_00816eec();
    /* 0063ddf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ddf1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063ddf4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ddf7: je 0x63de4d */ if (fZ) goto L_0063de4d;
L_0063ddf9:; BB(0x0063ddf9);
    /* 0063ddf9: mov dword ptr [ebx + 0xf0], 0 */ W32((u32)(r_ebx+0xf0u), 0x0u);
L_0063de03:; BB(0x0063de03);
    /* 0063de03: mov edx, dword ptr [ebx + 0x88] */ r_edx = R32((u32)(r_ebx+0x88u));
    /* 0063de09: mov eax, edx */ r_eax = r_edx;
    /* 0063de0b: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0063de10: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0063de13: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 0063de19: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 0063de1c: mov edx, dword ptr [ebx + 0x8c] */ r_edx = R32((u32)(r_ebx+0x8cu));
    /* 0063de22: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0063de28: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0063de2e: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0063de31: mov eax, 1 */ r_eax = 0x1u;
    /* 0063de36: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063de39: jl 0x63de3d */ if ((fS!=fO)) goto L_0063de3d;
L_0063de3b:; BB(0x0063de3b);
    /* 0063de3b: mov edx, eax */ r_edx = r_eax;
L_0063de3d:; BB(0x0063de3d);
    /* 0063de3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063de3f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063de41: jg 0x63de45 */ if ((!fZ&&fS==fO)) goto L_0063de45;
L_0063de43:; BB(0x0063de43);
    /* 0063de43: mov edx, eax */ r_edx = r_eax;
L_0063de45:; BB(0x0063de45);
    /* 0063de45: mov dword ptr [ebx + 0xf4], edx */ W32((u32)(r_ebx+0xf4u), r_edx);
    /* 0063de4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063de4c: ret  */ FN_RET(0x0063ddc0); r_esp += 4; return;
L_0063de4d:; BB(0x0063de4d);
    /* 0063de4d: mov dword ptr [ebx + 0xf0], 1 */ W32((u32)(r_ebx+0xf0u), 0x1u);
    /* 0063de57: jmp 0x63de03 */ goto L_0063de03;
}

void f_0063de5c(void) /* sub_63DE5C */
{
    FN_ENTER(0x0063de5c);
    /* 0063de5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063de5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063de5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063de61: push 0x8e4df4 */ { u32 v = 0x8e4df4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063de66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063de6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063de6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063de74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063de77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063de7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063de7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063de80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063de83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063de86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063de89: mov dword ptr [ecx], 0xb2dca0 */ W32((u32)(r_ecx), 0xb2dca0u);
    /* 0063de8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063de96: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x63de9bu); f_006131f4();
    /* 0063de9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063de9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063dea5: mov esp, ebp */ r_esp = r_ebp;
    /* 0063dea7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063dea8: ret  */ FN_RET(0x0063de5c); r_esp += 4; return;
}

void f_0063deac(void) /* sub_63DEAC */
{
    FN_ENTER(0x0063deac);
    /* 0063deac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063dead: mov ebp, esp */ r_ebp = r_esp;
    /* 0063deaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063deb1: push 0x8e4e10 */ { u32 v = 0x8e4e10u; r_esp -= 4; W32(r_esp, v); }
    /* 0063deb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063debc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063debd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063dec4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063dec7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063deca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063decd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063ded0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063ded3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063ded6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063ded9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063dedc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063dedf: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x63dee4u); f_006132e4();
    /* 0063dee4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063deeb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063deee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063def1: mov dword ptr [ecx], 0xb2dca0 */ W32((u32)(r_ecx), 0xb2dca0u);
    /* 0063def7: mov eax, dword ptr [0x9c6a50] */ r_eax = R32((u32)(0x9c6a50u));
    /* 0063defc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063defd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063df00: call dword ptr [0xb2dcb4] */ { u32 t = R32((u32)(0xb2dcb4u)); r_esp -= 4; W32(r_esp, 0x63df06u); call_ind(t); }
    /* 0063df06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063df09: call 0x63dc68 */ r_esp -= 4; W32(r_esp, 0x63df0eu); f_0063dc68();
    /* 0063df0e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063df11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063df13: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 0063df19: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 0063df1f: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 0063df25: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 0063df2b: mov dword ptr [eax + 0xf4], edx */ W32((u32)(r_eax+0xf4u), r_edx);
    /* 0063df31: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 0063df37: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 0063df3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063df40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063df47: mov esp, ebp */ r_esp = r_ebp;
    /* 0063df49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063df4a: ret 8 */ FN_RET(0x0063deac); r_esp += 12; return;
}

void f_0063df50(void) /* sub_63DF50 */
{
    FN_ENTER(0x0063df50);
    /* 0063df50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063df51: mov esi, ecx */ r_esi = r_ecx;
    /* 0063df53: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063df55: mov ecx, esi */ r_ecx = r_esi;
    /* 0063df57: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x63df5au); call_ind(t); }
    /* 0063df5a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063df5c: mov ecx, esi */ r_ecx = r_esi;
    /* 0063df5e: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x63df61u); call_ind(t); }
    /* 0063df61: movzx eax, word ptr [esi + 0xe8] */ r_eax = (u32)R16((u32)(r_esi+0xe8u));
    /* 0063df68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063df69: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x63df6eu); f_00816eec();
    /* 0063df6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063df6f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063df72: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063df75: je 0x63df83 */ if (fZ) goto L_0063df83;
L_0063df77:; BB(0x0063df77);
    /* 0063df77: mov dword ptr [esi + 0xf0], 0 */ W32((u32)(r_esi+0xf0u), 0x0u);
    /* 0063df81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063df82: ret  */ FN_RET(0x0063df50); r_esp += 4; return;
L_0063df83:; BB(0x0063df83);
    /* 0063df83: mov dword ptr [esi + 0xf0], 1 */ W32((u32)(r_esi+0xf0u), 0x1u);
    /* 0063df8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063df8e: ret  */ FN_RET(0x0063df50); r_esp += 4; return;
}

void f_0063df90(void) /* sub_63DF90 */
{
    FN_ENTER(0x0063df90);
    /* 0063df90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063df91: mov edi, ecx */ r_edi = r_ecx;
    /* 0063df93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063df95: mov ecx, edi */ r_ecx = r_edi;
    /* 0063df97: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063df9c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0063dfa1: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63dfa4u); call_ind(t); }
    /* 0063dfa4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063dfa7: je 0x63dfab */ if (fZ) goto L_0063dfab;
L_0063dfa9:; BB(0x0063dfa9);
    /* 0063dfa9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063dfaa: ret  */ FN_RET(0x0063df90); r_esp += 4; return;
L_0063dfab:; BB(0x0063dfab);
    /* 0063dfab: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063dfad: mov ecx, edi */ r_ecx = r_edi;
    /* 0063dfaf: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x63dfb2u); call_ind(t); }
    /* 0063dfb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063dfb3: ret  */ FN_RET(0x0063df90); r_esp += 4; return;
}

void f_0063dfb4(void) /* sub_63DFB4 */
{
    FN_ENTER(0x0063dfb4);
    /* 0063dfb4: mov ecx, dword ptr [0xa8f1f8] */ r_ecx = R32((u32)(0xa8f1f8u));
    /* 0063dfba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dfbc: je 0x63dfc8 */ if (fZ) goto L_0063dfc8;
L_0063dfbe:; BB(0x0063dfbe);
    /* 0063dfbe: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063dfc2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x63dfc7u); f_005b8624();
    /* 0063dfc7: ret  */ FN_RET(0x0063dfb4); r_esp += 4; return;
L_0063dfc8:; BB(0x0063dfc8);
    /* 0063dfc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dfca: ret  */ FN_RET(0x0063dfb4); r_esp += 4; return;
}

void f_0063dfcc(void) /* sub_63DFCC */
{
    FN_ENTER(0x0063dfcc);
    /* 0063dfcc: mov ecx, dword ptr [0xa8f1f8] */ r_ecx = R32((u32)(0xa8f1f8u));
    /* 0063dfd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dfd4: je 0x63dfe0 */ if (fZ) goto L_0063dfe0;
L_0063dfd6:; BB(0x0063dfd6);
    /* 0063dfd6: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063dfda: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x63dfdfu); f_005b8638();
    /* 0063dfdf: ret  */ FN_RET(0x0063dfcc); r_esp += 4; return;
L_0063dfe0:; BB(0x0063dfe0);
    /* 0063dfe0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dfe2: ret  */ FN_RET(0x0063dfcc); r_esp += 4; return;
}

void f_0063dfe4(void) /* sub_63DFE4 */
{
    FN_ENTER(0x0063dfe4);
    /* 0063dfe4: mov ecx, dword ptr [0xa8f1f8] */ r_ecx = R32((u32)(0xa8f1f8u));
    /* 0063dfea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063dfec: je 0x63dff8 */ if (fZ) goto L_0063dff8;
L_0063dfee:; BB(0x0063dfee);
    /* 0063dfee: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063dff2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x63dff7u); f_005b8610();
    /* 0063dff7: ret  */ FN_RET(0x0063dfe4); r_esp += 4; return;
L_0063dff8:; BB(0x0063dff8);
    /* 0063dff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063dffa: ret  */ FN_RET(0x0063dfe4); r_esp += 4; return;
}

void f_0063dffc(void) /* sub_63DFFC */
{
    FN_ENTER(0x0063dffc);
    /* 0063dffc: mov ecx, dword ptr [0xa8f1f8] */ r_ecx = R32((u32)(0xa8f1f8u));
    /* 0063e002: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063e004: je 0x63e019 */ if (fZ) goto L_0063e019;
L_0063e006:; BB(0x0063e006);
    /* 0063e006: je 0x63e00f */ if (fZ) goto L_0063e00f;
L_0063e008:; BB(0x0063e008);
    /* 0063e008: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063e00a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63e00fu); f_004066a8();
L_0063e00f:; BB(0x0063e00f);
    /* 0063e00f: mov dword ptr [0xa8f1f8], 0 */ W32((u32)(0xa8f1f8u), 0x0u);
L_0063e019:; BB(0x0063e019);
    /* 0063e019: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063e01b: mov dword ptr [0xa8f210], eax */ W32((u32)(0xa8f210u), r_eax);
    /* 0063e020: mov dword ptr [0xa8f214], eax */ W32((u32)(0xa8f214u), r_eax);
    /* 0063e025: mov dword ptr [0xa8f218], eax */ W32((u32)(0xa8f218u), r_eax);
    /* 0063e02a: mov dword ptr [0xa8f21c], eax */ W32((u32)(0xa8f21cu), r_eax);
    /* 0063e02f: mov dword ptr [0xa8f220], eax */ W32((u32)(0xa8f220u), r_eax);
    /* 0063e034: mov dword ptr [0xa8f1fc], eax */ W32((u32)(0xa8f1fcu), r_eax);
    /* 0063e039: mov dword ptr [0xa8f200], eax */ W32((u32)(0xa8f200u), r_eax);
    /* 0063e03e: mov dword ptr [0xa8f204], eax */ W32((u32)(0xa8f204u), r_eax);
    /* 0063e043: mov dword ptr [0xa8f208], eax */ W32((u32)(0xa8f208u), r_eax);
    /* 0063e048: mov dword ptr [0xa8f20c], eax */ W32((u32)(0xa8f20cu), r_eax);
    /* 0063e04d: ret  */ FN_RET(0x0063dffc); r_esp += 4; return;
}

