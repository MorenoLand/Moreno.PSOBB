#include "protos.h"

void f_0049d07c(void) /* sub_49D07C */
{
    FN_ENTER(0x0049d07c);
    /* 0049d07c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d07d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d07e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049d081: mov edi, ecx */ r_edi = r_ecx;
    /* 0049d083: movzx eax, word ptr [edi + 0x574] */ r_eax = (u32)R16((u32)(r_edi+0x574u));
    /* 0049d08a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d08f: je 0x49d13b */ if (fZ) goto L_0049d13b;
L_0049d095:; BB(0x0049d095);
    /* 0049d095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d096: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49d09bu); f_0068d5a8();
    /* 0049d09b: mov esi, eax */ r_esi = r_eax;
    /* 0049d09d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d09e: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x49d0a3u); f_0048e100();
    /* 0049d0a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d0a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d0a8: jne 0x49d0b0 */ if (!fZ) goto L_0049d0b0;
L_0049d0aa:; BB(0x0049d0aa);
    /* 0049d0aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049d0ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049d0ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049d0af: ret  */ FN_RET(0x0049d07c); r_esp += 4; return;
L_0049d0b0:; BB(0x0049d0b0);
    /* 0049d0b0: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d0b5: push dword ptr [edi + 0x4d0] */ { u32 v = R32((u32)(r_edi+0x4d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d0bb: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x49d0c0u); f_0048e9d4();
    /* 0049d0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d0c1: movzx edx, word ptr [edi + 0x574] */ r_edx = (u32)R16((u32)(r_edi+0x574u));
    /* 0049d0c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d0c9: call 0x48e074 */ r_esp -= 4; W32(r_esp, 0x49d0ceu); f_0048e074();
    /* 0049d0ce: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d0d0: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d0d5: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0049d0d8: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049d0de: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0049d0e1: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0049d0e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d0e5: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49d0eau); f_0050b7a4();
    /* 0049d0ea: fld dword ptr [0x90344c] */ FPUSH(R_F32((u32)(0x90344cu)));
    /* 0049d0f0: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0049d0f3: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0049d0f6: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0049d0fa: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0049d0fd: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0049d101: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0049d105: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0049d109: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0049d10d: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 0049d111: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d113: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d118: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d119: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49d11eu); f_0050b7a4();
    /* 0049d11e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d121: mov ecx, edi */ r_ecx = r_edi;
    /* 0049d123: call 0x49a438 */ r_esp -= 4; W32(r_esp, 0x49d128u); f_0049a438();
    /* 0049d128: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d12a: jne 0x49d13b */ if (!fZ) goto L_0049d13b;
L_0049d12c:; BB(0x0049d12c);
    /* 0049d12c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049d12e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d131: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d133: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49d138u); f_00814298();
    /* 0049d138: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049d13b:; BB(0x0049d13b);
    /* 0049d13b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049d13e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049d13f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049d140: ret  */ FN_RET(0x0049d07c); r_esp += 4; return;
}

void f_0049d144(void) /* sub_49D144 */
{
    FN_ENTER(0x0049d144);
    /* 0049d144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d145: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049d148: mov edi, ecx */ r_edi = r_ecx;
    /* 0049d14a: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0049d150: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d152: je 0x49d20d */ if (fZ) goto L_0049d20d;
L_0049d158:; BB(0x0049d158);
    /* 0049d158: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0049d15c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d15f: je 0x49d20d */ if (fZ) goto L_0049d20d;
L_0049d165:; BB(0x0049d165);
    /* 0049d165: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x49d16au); f_00520db8();
    /* 0049d16a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d16c: jne 0x49d20d */ if (!fZ) goto L_0049d20d;
L_0049d172:; BB(0x0049d172);
    /* 0049d172: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0049d176: cmp eax, dword ptr [edi + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d17c: je 0x49d20d */ if (fZ) goto L_0049d20d;
L_0049d182:; BB(0x0049d182);
    /* 0049d182: mov ecx, edi */ r_ecx = r_edi;
    /* 0049d184: call 0x49d07c */ r_esp -= 4; W32(r_esp, 0x49d189u); f_0049d07c();
    /* 0049d189: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 0049d18f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049d191: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d193: je 0x49d1ec */ if (fZ) goto L_0049d1ec;
L_0049d195:; BB(0x0049d195);
    /* 0049d195: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0049d199: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0049d19c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049d19e: mov ebx, edx */ r_ebx = r_edx;
    /* 0049d1a0: mov esi, ecx */ r_esi = r_ecx;
L_0049d1a2:; BB(0x0049d1a2);
    /* 0049d1a2: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0049d1a5: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d1ab: je 0x49d1d6 */ if (fZ) goto L_0049d1d6;
L_0049d1ad:; BB(0x0049d1ad);
    /* 0049d1ad: mov eax, dword ptr [ebx + 0x9030b0] */ r_eax = R32((u32)(r_ebx+0x9030b0u));
    /* 0049d1b3: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d1b8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049d1ba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049d1bc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0049d1bf: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049d1c1: lea eax, [edi + edx + 0x5b4] */ r_eax = (u32)(r_edi+r_edx+0x5b4u);
    /* 0049d1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d1c9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49d1ceu); f_0050b510();
    /* 0049d1ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d1d1: mov eax, 1 */ r_eax = 0x1u;
L_0049d1d6:; BB(0x0049d1d6);
    /* 0049d1d6: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049d1d9: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049d1dc: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049d1df: jl 0x49d1a2 */ if ((fS!=fO)) goto L_0049d1a2;
L_0049d1e1:; BB(0x0049d1e1);
    /* 0049d1e1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0049d1e5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0049d1e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d1ea: jne 0x49d200 */ if (!fZ) goto L_0049d200;
L_0049d1ec:; BB(0x0049d1ec);
    /* 0049d1ec: push 0x223 */ { u32 v = 0x223u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d1f1: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049d1f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d1f8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49d1fdu); f_0050b510();
    /* 0049d1fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049d200:; BB(0x0049d200);
    /* 0049d200: fld dword ptr [0x903448] */ FPUSH(R_F32((u32)(0x903448u)));
    /* 0049d206: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049d209: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049d20a: ret 0x18 */ FN_RET(0x0049d144); r_esp += 28; return;
L_0049d20d:; BB(0x0049d20d);
    /* 0049d20d: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d211: mov ecx, edi */ r_ecx = r_edi;
    /* 0049d213: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d217: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d21b: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d21f: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d223: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d227: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x49d22cu); f_00773afc();
    /* 0049d22c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049d22f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049d230: ret 0x18 */ FN_RET(0x0049d144); r_esp += 28; return;
}

void f_0049d234(void) /* sub_49D234 */
{
    FN_ENTER(0x0049d234);
    /* 0049d234: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049d235: mov ebp, esp */ r_ebp = r_esp;
    /* 0049d237: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d239: push 0x8d034a */ { u32 v = 0x8d034au; r_esp -= 4; W32(r_esp, v); }
    /* 0049d23e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049d244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d245: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0049d24c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049d24f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049d252: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0049d255: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0049d258: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0049d25b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049d25d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0049d260: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0049d263: push 0x7cc */ { u32 v = 0x7ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d268: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x49d26du); f_005caba4();
    /* 0049d26d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049d26e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0049d271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d273: je 0x49d2e0 */ if (fZ) goto L_0049d2e0;
L_0049d275:; BB(0x0049d275);
    /* 0049d275: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0049d27c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049d283: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d285: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x49d28au); f_005caba4();
    /* 0049d28a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049d28b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0049d28e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d290: je 0x49d2dc */ if (fZ) goto L_0049d2dc;
L_0049d292:; BB(0x0049d292);
    /* 0049d292: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0049d299: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0049d2a0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d2a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049d2a9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x49d2aeu); f_00787a4c();
    /* 0049d2ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049d2b1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0049d2b8:; BB(0x0049d2b8);
    /* 0049d2b8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d2bb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049d2be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d2bf: call 0x49d2e4 */ r_esp -= 4; W32(r_esp, 0x49d2c4u); f_0049d2e4();
    /* 0049d2c4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049d2c7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0049d2ce:; BB(0x0049d2ce);
    /* 0049d2ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049d2d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0049d2d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0049d2da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049d2db: ret  */ FN_RET(0x0049d234); r_esp += 4; return;
L_0049d2dc:; BB(0x0049d2dc);
    /* 0049d2dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049d2de: jmp 0x49d2b8 */ goto L_0049d2b8;
L_0049d2e0:; BB(0x0049d2e0);
    /* 0049d2e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049d2e2: jmp 0x49d2ce */ goto L_0049d2ce;
}

void f_0049d2e4(void) /* sub_49D2E4 */
{
    FN_ENTER(0x0049d2e4);
    /* 0049d2e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049d2e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0049d2e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d2e9: push 0x8d0364 */ { u32 v = 0x8d0364u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d2ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049d2f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d2f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0049d2fc: sub esp, 0xfc */ {  u32 a = r_esp; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049d302: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049d305: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0049d308: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0049d30b: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0049d30e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0049d311: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d314: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0049d317: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0049d31a: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x49d31fu); f_007865e8();
    /* 0049d31f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049d326: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d329: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049d32c: mov dword ptr [ecx], 0xaf9a00 */ W32((u32)(r_ecx), 0xaf9a00u);
    /* 0049d332: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 0049d335: mov eax, dword ptr [0x9a7668] */ r_eax = R32((u32)(0x9a7668u));
    /* 0049d33a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d33b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0049d33e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0049d340: mov dword ptr [ecx + 0x400], edx */ W32((u32)(r_ecx+0x400u), r_edx);
    /* 0049d346: call dword ptr [0xaf9b4c] */ { u32 t = R32((u32)(0xaf9b4cu)); r_esp -= 4; W32(r_esp, 0x49d34cu); call_ind(t); }
    /* 0049d34c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d34f: movsx ebx, word ptr [ecx + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 0049d353: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049d355: jl 0x49d396 */ if ((fS!=fO)) goto L_0049d396;
L_0049d357:; BB(0x0049d357);
    /* 0049d357: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049d35d: jg 0x49d396 */ if ((!fZ&&fS==fO)) goto L_0049d396;
L_0049d35f:; BB(0x0049d35f);
    /* 0049d35f: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 0049d365: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0049d368: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049d36a: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0049d36d: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049d36f: mov edi, dword ptr [eax + edx + 8] */ r_edi = R32((u32)(r_eax+r_edx+0x8u));
    /* 0049d373: movzx esi, word ptr [eax + edx + 4] */ r_esi = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 0049d378: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049d37a: jl 0x49d396 */ if ((fS!=fO)) goto L_0049d396;
L_0049d37c:; BB(0x0049d37c);
    /* 0049d37c: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049d382: jg 0x49d396 */ if ((!fZ&&fS==fO)) goto L_0049d396;
L_0049d384:; BB(0x0049d384);
    /* 0049d384: mov dword ptr [eax + edx], 0 */ W32((u32)(r_eax+r_edx), 0x0u);
    /* 0049d38b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d38e: mov dword ptr [eax + edx + 4], esi */ W32((u32)(r_eax+r_edx+0x4u), r_esi);
    /* 0049d392: mov dword ptr [eax + edx + 8], edi */ W32((u32)(r_eax+r_edx+0x8u), r_edi);
L_0049d396:; BB(0x0049d396);
    /* 0049d396: mov eax, dword ptr [0xa46fa0] */ r_eax = R32((u32)(0xa46fa0u));
    /* 0049d39b: mov ebx, dword ptr [0x903428] */ r_ebx = R32((u32)(0x903428u));
    /* 0049d3a1: mov esi, dword ptr [0x90342c] */ r_esi = R32((u32)(0x90342cu));
    /* 0049d3a7: mov edi, dword ptr [0x903430] */ r_edi = R32((u32)(0x903430u));
    /* 0049d3ad: mov dword ptr [ecx + 0x404], eax */ W32((u32)(r_ecx+0x404u), r_eax);
    /* 0049d3b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049d3b5: mov dword ptr [ecx + 0x38], 0xc61c4000 */ W32((u32)(r_ecx+0x38u), 0xc61c4000u);
    /* 0049d3bc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d3be: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0049d3c1: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0049d3c8: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0049d3cb: mov dword ptr [ecx + 0x5c], ebx */ W32((u32)(r_ecx+0x5cu), r_ebx);
    /* 0049d3ce: mov dword ptr [ecx + 0x60], esi */ W32((u32)(r_ecx+0x60u), r_esi);
    /* 0049d3d1: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 0049d3d8: mov dword ptr [ecx + 0x64], edi */ W32((u32)(r_ecx+0x64u), r_edi);
    /* 0049d3db: mov dword ptr [ecx + 0x74], 0xc61c4000 */ W32((u32)(r_ecx+0x74u), 0xc61c4000u);
    /* 0049d3e2: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 0049d3e9: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 0049d3f0: mov dword ptr [ecx + 0x50], 0xc61c4000 */ W32((u32)(r_ecx+0x50u), 0xc61c4000u);
    /* 0049d3f7: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 0049d3fe: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 0049d405: mov dword ptr [ecx + 0x44], 0xc61c4000 */ W32((u32)(r_ecx+0x44u), 0xc61c4000u);
    /* 0049d40c: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0049d413: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 0049d41a: push 0x9a7580 */ { u32 v = 0x9a7580u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d41f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x49d424u); f_007b9a88();
    /* 0049d424: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d427: call 0x49a668 */ r_esp -= 4; W32(r_esp, 0x49d42cu); f_0049a668();
    /* 0049d42c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d42f: mov dword ptr [eax + 0x314], 0 */ W32((u32)(r_eax+0x314u), 0x0u);
    /* 0049d439: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d43b: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
    /* 0049d445: mov dword ptr [eax + 0x30c], 0 */ W32((u32)(r_eax+0x30cu), 0x0u);
    /* 0049d44f: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x49d454u); f_0077a684();
    /* 0049d454: mov esi, eax */ r_esi = r_eax;
    /* 0049d456: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d458: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x49d45du); f_0077a698();
    /* 0049d45d: mov ebx, eax */ r_ebx = r_eax;
    /* 0049d45f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d461: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x49d466u); f_0077a6b4();
    /* 0049d466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d469: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d46c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d46d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d46e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d46f: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x49d474u); f_007868f8();
    /* 0049d474: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d477: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0049d47e: mov dword ptr [ecx + 0x510], eax */ W32((u32)(r_ecx+0x510u), r_eax);
    /* 0049d484: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0049d48b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x49d490u); f_007b4f54();
    /* 0049d490: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d493: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d495: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x49d49au); f_00787550();
    /* 0049d49a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049d49d: movsx eax, byte ptr [ebx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x44u));
    /* 0049d4a1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0049d4a2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049d4a4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049d4a6: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0049d4a9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049d4ab: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049d4ad: mov esi, dword ptr [eax*4 + 0x9033bc] */ r_esi = R32((u32)(r_eax*4+0x9033bcu));
    /* 0049d4b4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d4b7: or dword ptr [edx + 0x2e8], esi */ { u32 ad = (u32)(r_edx+0x2e8u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0049d4bd: mov dword ptr [edx + 0x440], eax */ W32((u32)(r_edx+0x440u), r_eax);
    /* 0049d4c3: movzx edi, byte ptr [ebx + 0x44] */ r_edi = (u32)R8((u32)(r_ebx+0x44u));
    /* 0049d4c7: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0049d4ca: sar edi, 0x1a */ { u32 c = (26u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0049d4cd: and edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0049d4d0: mov ecx, dword ptr [edi*4 + 0x9030f0] */ r_ecx = R32((u32)(r_edi*4+0x9030f0u));
    /* 0049d4d7: mov dword ptr [edx + 0x448], ecx */ W32((u32)(r_edx+0x448u), r_ecx);
    /* 0049d4dd: mov dword ptr [edx + 0x444], ecx */ W32((u32)(r_edx+0x444u), r_ecx);
    /* 0049d4e3: mov ecx, edx */ r_ecx = r_edx;
    /* 0049d4e5: call 0x49eb84 */ r_esp -= 4; W32(r_esp, 0x49d4eau); f_0049eb84();
    /* 0049d4ea: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0049d4ec:; BB(0x0049d4ec);
    /* 0049d4ec: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d4ef: mov ecx, dword ptr [esi + 0x404] */ r_ecx = R32((u32)(r_esi+0x404u));
    /* 0049d4f5: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0049d4f8: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0049d4fb: mov edx, dword ptr [eax + 0x9030e8] */ r_edx = R32((u32)(r_eax+0x9030e8u));
    /* 0049d501: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0049d504: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d505: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x49d50au); f_005b8624();
    /* 0049d50a: mov dword ptr [esi + ebx*8 + 0x408], eax */ W32((u32)(r_esi+r_ebx*8+0x408u), r_eax);
    /* 0049d511: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d514: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049d517: mov ecx, dword ptr [edx + 0x404] */ r_ecx = R32((u32)(r_edx+0x404u));
    /* 0049d51d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d51e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x49d523u); f_005b8610();
    /* 0049d523: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d526: mov dword ptr [esi + ebx*8 + 0x40c], eax */ W32((u32)(r_esi+r_ebx*8+0x40cu), r_eax);
    /* 0049d52d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049d530: mov ecx, dword ptr [edx + 0x404] */ r_ecx = R32((u32)(r_edx+0x404u));
    /* 0049d536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d537: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x49d53cu); f_005b8610();
    /* 0049d53c: push dword ptr [edi*4 + 0x9030e0] */ { u32 v = R32((u32)(r_edi*4+0x9030e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d543: mov dword ptr [esi + ebx*8 + 0x410], eax */ W32((u32)(r_esi+r_ebx*8+0x410u), r_eax);
    /* 0049d54a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d54d: mov ecx, dword ptr [eax + 0x404] */ r_ecx = R32((u32)(r_eax+0x404u));
    /* 0049d553: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x49d558u); f_005b8610();
    /* 0049d558: mov dword ptr [esi + ebx*8 + 0x414], eax */ W32((u32)(r_esi+r_ebx*8+0x414u), r_eax);
    /* 0049d55f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049d562: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049d565: jl 0x49d4ec */ if ((fS!=fO)) goto L_0049d4ec;
L_0049d567:; BB(0x0049d567);
    /* 0049d567: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d56a: call 0x49ec70 */ r_esp -= 4; W32(r_esp, 0x49d56fu); f_0049ec70();
    /* 0049d56f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d572: add eax, 0x5b4 */ {  u32 a = r_eax; u32 b = 0x5b4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049d577: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049d578: push 0x903180 */ { u32 v = 0x903180u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d57d: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x49d582u); f_0058836c();
    /* 0049d582: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d585: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d588: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d58a: mov dword ptr [ecx + 0x77c], eax */ W32((u32)(r_ecx+0x77cu), r_eax);
    /* 0049d590: add ecx, 0x780 */ {  u32 a = r_ecx; u32 b = 0x780u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049d596: push 0x9030c8 */ { u32 v = 0x9030c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d59b: call 0x48ebc4 */ r_esp -= 4; W32(r_esp, 0x49d5a0u); f_0048ebc4();
    /* 0049d5a0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0049d5a2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0049d5a4: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049d5a7: call 0x4a03f8 */ r_esp -= 4; W32(r_esp, 0x49d5acu); f_004a03f8();
    /* 0049d5ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d5af: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d5b2: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0049d5b5: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0049d5b8: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0049d5bb: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0049d5be: mov dword ptr [esi + 0x470], eax */ W32((u32)(r_esi+0x470u), r_eax);
    /* 0049d5c4: mov dword ptr [esi + 0x494], 0x11 */ W32((u32)(r_esi+0x494u), 0x11u);
    /* 0049d5ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049d5d0: mov byte ptr [esi + 0x490], al */ W8((u32)(r_esi+0x490u), (u8)r_eax);
    /* 0049d5d6: mov dword ptr [esi + 0x498], edx */ W32((u32)(r_esi+0x498u), r_edx);
    /* 0049d5dc: mov dword ptr [esi + 0x434], 0 */ W32((u32)(r_esi+0x434u), 0x0u);
    /* 0049d5e6: mov dword ptr [esi + 0x49c], ecx */ W32((u32)(r_esi+0x49cu), r_ecx);
    /* 0049d5ec: mov dword ptr [esi + 0x4a0], ebx */ W32((u32)(r_esi+0x4a0u), r_ebx);
    /* 0049d5f2: mov dword ptr [esi + 0x4a4], edi */ W32((u32)(r_esi+0x4a4u), r_edi);
    /* 0049d5f8: mov dword ptr [esi + 0x48c], eax */ W32((u32)(r_esi+0x48cu), r_eax);
    /* 0049d5fe: mov dword ptr [esi + 0x380], eax */ W32((u32)(r_esi+0x380u), r_eax);
    /* 0049d604: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
    /* 0049d60a: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0049d610: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 0049d616: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0049d61c: mov dword ptr [esi + 0x394], eax */ W32((u32)(r_esi+0x394u), r_eax);
    /* 0049d622: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 0049d628: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 0049d62e: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 0049d634: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 0049d63a: mov dword ptr [esi + 0x3a8], eax */ W32((u32)(r_esi+0x3a8u), r_eax);
    /* 0049d640: mov dword ptr [esi + 0x3ac], eax */ W32((u32)(r_esi+0x3acu), r_eax);
    /* 0049d646: mov dword ptr [esi + 0x3b0], eax */ W32((u32)(r_esi+0x3b0u), r_eax);
    /* 0049d64c: mov dword ptr [esi + 0x3b4], eax */ W32((u32)(r_esi+0x3b4u), r_eax);
    /* 0049d652: mov dword ptr [esi + 0x3b8], eax */ W32((u32)(r_esi+0x3b8u), r_eax);
    /* 0049d658: mov dword ptr [esi + 0x3bc], eax */ W32((u32)(r_esi+0x3bcu), r_eax);
    /* 0049d65e: mov dword ptr [esi + 0x3c0], eax */ W32((u32)(r_esi+0x3c0u), r_eax);
    /* 0049d664: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 0049d66a: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0049d670: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 0049d676: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 0049d67c: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0049d682: mov dword ptr [esi + 0x3d8], eax */ W32((u32)(r_esi+0x3d8u), r_eax);
    /* 0049d688: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 0049d68e: mov dword ptr [esi + 0x3e0], eax */ W32((u32)(r_esi+0x3e0u), r_eax);
    /* 0049d694: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 0049d69a: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 0049d6a0: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 0049d6a6: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 0049d6ac: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 0049d6b2: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 0049d6b8: mov dword ptr [esi + 0x3fc], eax */ W32((u32)(r_esi+0x3fcu), r_eax);
    /* 0049d6be: mov dword ptr [esi + 0x430], eax */ W32((u32)(r_esi+0x430u), r_eax);
    /* 0049d6c4: mov dword ptr [esi + 0x438], eax */ W32((u32)(r_esi+0x438u), r_eax);
    /* 0049d6ca: mov dword ptr [esi + 0x43c], eax */ W32((u32)(r_esi+0x43cu), r_eax);
    /* 0049d6d0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049d6d5: mov word ptr [esi + 0x47c], ax */ W16((u32)(r_esi+0x47cu), (u16)r_eax);
    /* 0049d6dc: call 0x48df64 */ r_esp -= 4; W32(r_esp, 0x49d6e1u); f_0048df64();
    /* 0049d6e1: mov ebx, eax */ r_ebx = r_eax;
    /* 0049d6e3: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049d6e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049d6ea: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0049d6ed: jle 0x49d855 */ if ((fZ||fS!=fO)) goto L_0049d855;
L_0049d6f3:; BB(0x0049d6f3);
    /* 0049d6f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d6f6: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 0049d6fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d6fe: jne 0x49d7af */ if (!fZ) goto L_0049d7af;
L_0049d704:; BB(0x0049d704);
    /* 0049d704: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049d706: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0049d709: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049d70b: jle 0x49ddbb */ if ((fZ||fS!=fO)) goto L_0049ddbb;
L_0049d711:; BB(0x0049d711);
    /* 0049d711: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049d714: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d715: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49d71au); f_0048e058();
    /* 0049d71a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049d71d: mov edx, eax */ r_edx = r_eax;
    /* 0049d71f: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0049d722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d723: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49d728u); f_0068d5a8();
    /* 0049d728: mov edi, eax */ r_edi = r_eax;
    /* 0049d72a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d72d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d72f: je 0x49dde9 */ if (fZ) goto L_0049dde9;
L_0049d735:; BB(0x0049d735);
    /* 0049d735: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0049d737:; BB(0x0049d737);
    /* 0049d737: lea ecx, [ebp - 0xe8] */ r_ecx = (u32)(r_ebp+0xffffff18u);
    /* 0049d73d: lea edx, [ebp - 0xec] */ r_edx = (u32)(r_ebp+0xffffff14u);
    /* 0049d743: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d744: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d745: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d746: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49d74bu); f_0048fbf8();
    /* 0049d74b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d74e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d750: je 0x49d7a2 */ if (fZ) goto L_0049d7a2;
L_0049d752:; BB(0x0049d752);
    /* 0049d752: lea ecx, [ebp - 0xdc] */ r_ecx = (u32)(r_ebp+0xffffff24u);
    /* 0049d758: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0049d75b: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 0049d761: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0049d764: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 0049d76a: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0049d76d: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 0049d773: lea edx, [ebp - 0xe8] */ r_edx = (u32)(r_ebp+0xffffff18u);
    /* 0049d779: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49d77eu); f_0082f9c4();
    /* 0049d77e: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 0049d788: lea ecx, [ebp - 0xdc] */ r_ecx = (u32)(r_ebp+0xffffff24u);
    /* 0049d78e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49d793u); f_0083173c();
    /* 0049d793: fcomp dword ptr [ebp - 0xec] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffff14u))); FPOP();
    /* 0049d799: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049d79b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049d79c: jbe 0x49ddd3 */ if ((fC||fZ)) goto L_0049ddd3;
L_0049d7a2:; BB(0x0049d7a2);
    /* 0049d7a2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049d7a5: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049d7a8: jl 0x49d737 */ if ((fS!=fO)) goto L_0049d737;
L_0049d7aa:; BB(0x0049d7aa);
    /* 0049d7aa: jmp 0x49ddb8 */ goto L_0049ddb8;
L_0049d7af:; BB(0x0049d7af);
    /* 0049d7af: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049d7b2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049d7b4: jl 0x49ddfd */ if ((fS!=fO)) goto L_0049ddfd;
L_0049d7ba:; BB(0x0049d7ba);
    /* 0049d7ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d7bb: call 0x48e058 */ r_esp -= 4; W32(r_esp, 0x49d7c0u); f_0048e058();
    /* 0049d7c0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049d7c3: mov edx, eax */ r_edx = r_eax;
    /* 0049d7c5: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0049d7c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d7c9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49d7ceu); f_0068d5a8();
    /* 0049d7ce: mov edi, eax */ r_edi = r_eax;
    /* 0049d7d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d7d3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d7d5: je 0x49de1a */ if (fZ) goto L_0049de1a;
L_0049d7db:; BB(0x0049d7db);
    /* 0049d7db: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0049d7dd:; BB(0x0049d7dd);
    /* 0049d7dd: lea ecx, [ebp - 0x104] */ r_ecx = (u32)(r_ebp+0xfffffefcu);
    /* 0049d7e3: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0049d7e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d7ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049d7eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049d7ec: call 0x48fbf8 */ r_esp -= 4; W32(r_esp, 0x49d7f1u); f_0048fbf8();
    /* 0049d7f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049d7f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049d7f6: je 0x49d848 */ if (fZ) goto L_0049d848;
L_0049d7f8:; BB(0x0049d7f8);
    /* 0049d7f8: lea ecx, [ebp - 0xf8] */ r_ecx = (u32)(r_ebp+0xffffff08u);
    /* 0049d7fe: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0049d801: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 0049d807: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0049d80a: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 0049d810: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0049d813: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 0049d819: lea edx, [ebp - 0x104] */ r_edx = (u32)(r_ebp+0xfffffefcu);
    /* 0049d81f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x49d824u); f_0082f9c4();
    /* 0049d824: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 0049d82e: lea ecx, [ebp - 0xf8] */ r_ecx = (u32)(r_ebp+0xffffff08u);
    /* 0049d834: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x49d839u); f_0083173c();
    /* 0049d839: fcomp dword ptr [ebp - 0x108] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffef8u))); FPOP();
    /* 0049d83f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049d841: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049d842: jbe 0x49de0a */ if ((fC||fZ)) goto L_0049de0a;
L_0049d848:; BB(0x0049d848);
    /* 0049d848: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049d84b: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049d84e: jl 0x49d7dd */ if ((fS!=fO)) goto L_0049d7dd;
L_0049d850:; BB(0x0049d850);
    /* 0049d850: jmp 0x49ddee */ goto L_0049ddee;
L_0049d855:; BB(0x0049d855);
    /* 0049d855: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d858: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049d85d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0049d860:; BB(0x0049d860);
    /* 0049d860: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049d863: mov dword ptr [ecx + 0x484], 0xffffffff */ W32((u32)(r_ecx+0x484u), 0xffffffffu);
    /* 0049d86d: mov word ptr [ecx + 0x47e], ax */ W16((u32)(r_ecx+0x47eu), (u16)r_eax);
    /* 0049d874: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0049d879: mov dword ptr [ecx + 0x488], 0 */ W32((u32)(r_ecx+0x488u), 0x0u);
    /* 0049d883: mov word ptr [ecx + 0x480], dx */ W16((u32)(r_ecx+0x480u), (u16)r_edx);
    /* 0049d88a: mov word ptr [ecx + 0x482], dx */ W16((u32)(r_ecx+0x482u), (u16)r_edx);
    /* 0049d891: call 0x49dfc0 */ r_esp -= 4; W32(r_esp, 0x49d896u); f_0049dfc0();
    /* 0049d896: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d899: call 0x49c710 */ r_esp -= 4; W32(r_esp, 0x49d89eu); f_0049c710();
    /* 0049d89e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d8a1: call 0x49e250 */ r_esp -= 4; W32(r_esp, 0x49d8a6u); f_0049e250();
    /* 0049d8a6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d8a9: mov dword ptr [ecx + 0x50c], 0 */ W32((u32)(r_ecx+0x50cu), 0x0u);
    /* 0049d8b3: call 0x49e260 */ r_esp -= 4; W32(r_esp, 0x49d8b8u); f_0049e260();
    /* 0049d8b8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049d8bb: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0049d8be: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0049d8c1: fadd dword ptr [0x9030c4] */ ST(0) = ST(0) + R_F32((u32)(0x9030c4u));
    /* 0049d8c7: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0049d8ca: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 0049d8cd: mov esi, dword ptr [eax + 0x400] */ r_esi = R32((u32)(r_eax+0x400u));
    /* 0049d8d3: fstp dword ptr [ebp - 0x88] */ W_F32((u32)(r_ebp+0xffffff78u), ST(0)); FPOP();
    /* 0049d8d9: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0049d8df: mov dword ptr [eax + 0x514], 0 */ W32((u32)(r_eax+0x514u), 0x0u);
    /* 0049d8e9: mov dword ptr [eax + 0x518], 0x3f800000 */ W32((u32)(r_eax+0x518u), 0x3f800000u);
    /* 0049d8f3: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0049d8f9: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0049d8ff: mov dword ptr [eax + 0x520], 0 */ W32((u32)(r_eax+0x520u), 0x0u);
    /* 0049d909: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 0049d90c: movzx edi, word ptr [esi + 0x390] */ r_edi = (u32)R16((u32)(r_esi+0x390u));
    /* 0049d913: mov word ptr [ebp - 0xd0], di */ W16((u32)(r_ebp+0xffffff30u), (u16)r_edi);
    /* 0049d91a: movzx edx, word ptr [esi + 0x392] */ r_edx = (u32)R16((u32)(r_esi+0x392u));
    /* 0049d921: mov word ptr [ebp - 0xce], dx */ W16((u32)(r_ebp+0xffffff32u), (u16)r_edx);
    /* 0049d928: movzx edx, word ptr [esi + 0x394] */ r_edx = (u32)R16((u32)(r_esi+0x394u));
    /* 0049d92f: mov word ptr [ebp - 0xcc], dx */ W16((u32)(r_ebp+0xffffff34u), (u16)r_edx);
    /* 0049d936: movzx edx, word ptr [esi + 0x396] */ r_edx = (u32)R16((u32)(r_esi+0x396u));
    /* 0049d93d: mov word ptr [ebp - 0xca], dx */ W16((u32)(r_ebp+0xffffff36u), (u16)r_edx);
    /* 0049d944: movzx edx, word ptr [esi + 0x398] */ r_edx = (u32)R16((u32)(r_esi+0x398u));
    /* 0049d94b: mov word ptr [ebp - 0xc8], dx */ W16((u32)(r_ebp+0xffffff38u), (u16)r_edx);
    /* 0049d952: movzx edx, word ptr [esi + 0x39a] */ r_edx = (u32)R16((u32)(r_esi+0x39au));
    /* 0049d959: mov word ptr [ebp - 0xc6], dx */ W16((u32)(r_ebp+0xffffff3au), (u16)r_edx);
    /* 0049d960: movzx edx, word ptr [esi + 0x39c] */ r_edx = (u32)R16((u32)(r_esi+0x39cu));
    /* 0049d967: mov word ptr [ebp - 0xc4], dx */ W16((u32)(r_ebp+0xffffff3cu), (u16)r_edx);
    /* 0049d96e: movzx edx, word ptr [esi + 0x39e] */ r_edx = (u32)R16((u32)(r_esi+0x39eu));
    /* 0049d975: mov word ptr [ebp - 0xc2], dx */ W16((u32)(r_ebp+0xffffff3eu), (u16)r_edx);
    /* 0049d97c: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 0049d982: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 0049d988: mov edx, dword ptr [esi + 0x3a4] */ r_edx = R32((u32)(r_esi+0x3a4u));
    /* 0049d98e: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 0049d994: mov edx, dword ptr [esi + 0x3a8] */ r_edx = R32((u32)(r_esi+0x3a8u));
    /* 0049d99a: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 0049d9a0: mov edx, dword ptr [esi + 0x3ac] */ r_edx = R32((u32)(r_esi+0x3acu));
    /* 0049d9a6: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 0049d9ac: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 0049d9b2: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0049d9b8: mov edx, dword ptr [esi + 0x3b4] */ r_edx = R32((u32)(r_esi+0x3b4u));
    /* 0049d9be: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0049d9c4: mov edx, dword ptr [esi + 0x3b8] */ r_edx = R32((u32)(r_esi+0x3b8u));
    /* 0049d9ca: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0049d9d0: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 0049d9d6: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0049d9dc: mov edx, dword ptr [esi + 0x3c0] */ r_edx = R32((u32)(r_esi+0x3c0u));
    /* 0049d9e2: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0049d9e8: mov edx, dword ptr [esi + 0x3c4] */ r_edx = R32((u32)(r_esi+0x3c4u));
    /* 0049d9ee: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0049d9f4: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 0049d9fa: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0049da00: movzx edx, word ptr [esi + 0x3cc] */ r_edx = (u32)R16((u32)(r_esi+0x3ccu));
    /* 0049da07: mov word ptr [ebp - 0x94], dx */ W16((u32)(r_ebp+0xffffff6cu), (u16)r_edx);
    /* 0049da0e: movzx edx, word ptr [esi + 0x3ce] */ r_edx = (u32)R16((u32)(r_esi+0x3ceu));
    /* 0049da15: movzx esi, word ptr [ebp - 0xd0] */ r_esi = (u32)R16((u32)(r_ebp+0xffffff30u));
    /* 0049da1c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0049da1e: mov word ptr [ebp - 0x92], dx */ W16((u32)(r_ebp+0xffffff6eu), (u16)r_edx);
    /* 0049da25: mov edx, 1 */ r_edx = 0x1u;
    /* 0049da2a: mov word ptr [ebp - 0xc8], dx */ W16((u32)(r_ebp+0xffffff38u), (u16)r_edx);
    /* 0049da31: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0049da37: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 0049da3d: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0049da43: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 0049da49: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0049da4f: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 0049da55: mov edx, dword ptr [eax + 0x2e8] */ r_edx = R32((u32)(r_eax+0x2e8u));
    /* 0049da5b: mov eax, dword ptr [eax + 0x444] */ r_eax = R32((u32)(r_eax+0x444u));
    /* 0049da61: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0049da64: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0049da67: movzx eax, word ptr [ebp - 0xca] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff36u));
    /* 0049da6e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0049da71:; BB(0x0049da71);
    /* 0049da71: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 0049da74: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0049da77: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0049da7a: mov ecx, dword ptr [eax + 0x9030bc] */ r_ecx = R32((u32)(r_eax+0x9030bcu));
    /* 0049da80: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 0049da86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049da87: lea edx, [esi + ecx] */ r_edx = (u32)(r_esi+r_ecx);
    /* 0049da8a: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049da8d: mov word ptr [ebp - 0xd0], dx */ W16((u32)(r_ebp+0xffffff30u), (u16)r_edx);
    /* 0049da94: mov word ptr [ebp - 0xca], cx */ W16((u32)(r_ebp+0xffffff36u), (u16)r_ecx);
    /* 0049da9b: call 0x48a400 */ r_esp -= 4; W32(r_esp, 0x49daa0u); f_0048a400();
    /* 0049daa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049daa1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049daa4: mov dword ptr [ecx + ebx*2 + 0x428], eax */ W32((u32)(r_ecx+r_ebx*2+0x428u), r_eax);
    /* 0049daab: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049daae: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049dab1: jl 0x49da71 */ if ((fS!=fO)) goto L_0049da71;
L_0049dab3:; BB(0x0049dab3);
    /* 0049dab3: mov edx, dword ptr [ecx + 0x428] */ r_edx = R32((u32)(r_ecx+0x428u));
    /* 0049dab9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049dabb: je 0x49dae6 */ if (fZ) goto L_0049dae6;
L_0049dabd:; BB(0x0049dabd);
    /* 0049dabd: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0049dac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049dac5: je 0x49dae6 */ if (fZ) goto L_0049dae6;
L_0049dac7:; BB(0x0049dac7);
    /* 0049dac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049dac8: mov ecx, edx */ r_ecx = r_edx;
    /* 0049daca: call 0x48a7bc */ r_esp -= 4; W32(r_esp, 0x49dacfu); f_0048a7bc();
    /* 0049dacf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049dad2: push dword ptr [eax + 0x428] */ { u32 v = R32((u32)(r_eax+0x428u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049dad8: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0049dade: call 0x48a7bc */ r_esp -= 4; W32(r_esp, 0x49dae3u); f_0048a7bc();
    /* 0049dae3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_0049dae6:; BB(0x0049dae6);
    /* 0049dae6: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49daebu); f_0049e278();
    /* 0049daeb: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049daee: call 0x48ff84 */ r_esp -= 4; W32(r_esp, 0x49daf3u); f_0048ff84();
    /* 0049daf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049daf4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049daf7: mov dword ptr [eax + 0x538], 0xffffffff */ W32((u32)(r_eax+0x538u), 0xffffffffu);
    /* 0049db01: call 0x48c930 */ r_esp -= 4; W32(r_esp, 0x49db06u); f_0048c930();
    /* 0049db06: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049db09: call 0x49eb2c */ r_esp -= 4; W32(r_esp, 0x49db0eu); f_0049eb2c();
    /* 0049db0e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049db11: call 0x49eadc */ r_esp -= 4; W32(r_esp, 0x49db16u); f_0049eadc();
    /* 0049db16: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049db19: call 0x49eac8 */ r_esp -= 4; W32(r_esp, 0x49db1eu); f_0049eac8();
    /* 0049db1e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049db21: call 0x49ea70 */ r_esp -= 4; W32(r_esp, 0x49db26u); f_0049ea70();
    /* 0049db26: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049db29: mov eax, dword ptr [ebx + 0x794] */ r_eax = R32((u32)(r_ebx+0x794u));
    /* 0049db2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049db31: je 0x49df7b */ if (fZ) goto L_0049df7b;
L_0049db37:; BB(0x0049db37);
    /* 0049db37: mov eax, dword ptr [ebx + 0x798] */ r_eax = R32((u32)(r_ebx+0x798u));
    /* 0049db3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049db3f: je 0x49df36 */ if (fZ) goto L_0049df36;
L_0049db45:; BB(0x0049db45);
    /* 0049db45: mov eax, dword ptr [ebx + 0x79c] */ r_eax = R32((u32)(r_ebx+0x79cu));
    /* 0049db4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049db4d: je 0x49def1 */ if (fZ) goto L_0049def1;
L_0049db53:; BB(0x0049db53);
    /* 0049db53: mov eax, dword ptr [ebx + 0x7a0] */ r_eax = R32((u32)(r_ebx+0x7a0u));
    /* 0049db59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049db5b: je 0x49deac */ if (fZ) goto L_0049deac;
L_0049db61:; BB(0x0049db61);
    /* 0049db61: mov eax, dword ptr [ebx + 0x7a4] */ r_eax = R32((u32)(r_ebx+0x7a4u));
    /* 0049db67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049db69: je 0x49de67 */ if (fZ) goto L_0049de67;
L_0049db6f:; BB(0x0049db6f);
    /* 0049db6f: mov eax, dword ptr [ebx + 0x7a8] */ r_eax = R32((u32)(r_ebx+0x7a8u));
    /* 0049db75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049db77: je 0x49de22 */ if (fZ) goto L_0049de22;
L_0049db7d:; BB(0x0049db7d);
    /* 0049db7d: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 0049db83: mov esi, dword ptr [ebx + 0x3f4] */ r_esi = R32((u32)(r_ebx+0x3f4u));
    /* 0049db89: mov edi, dword ptr [ebx + 0x3f0] */ r_edi = R32((u32)(r_ebx+0x3f0u));
    /* 0049db8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049db91: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
    /* 0049db97: mov dword ptr [ebx + 0x3fc], edx */ W32((u32)(r_ebx+0x3fcu), r_edx);
    /* 0049db9d: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 0049dba3: mov dword ptr [ebx + 0x3f8], esi */ W32((u32)(r_ebx+0x3f8u), r_esi);
    /* 0049dba9: mov dword ptr [ebx + 0x3f4], edi */ W32((u32)(r_ebx+0x3f4u), r_edi);
    /* 0049dbaf: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 0049dbb5: mov edx, dword ptr [ebx + 0x3e8] */ r_edx = R32((u32)(r_ebx+0x3e8u));
    /* 0049dbbb: mov dword ptr [ebx + 0x3ec], edx */ W32((u32)(r_ebx+0x3ecu), r_edx);
    /* 0049dbc1: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 0049dbc7: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
    /* 0049dbcd: mov edx, dword ptr [ebx + 0x3e0] */ r_edx = R32((u32)(r_ebx+0x3e0u));
    /* 0049dbd3: mov dword ptr [ebx + 0x3e4], edx */ W32((u32)(r_ebx+0x3e4u), r_edx);
    /* 0049dbd9: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0049dbdf: mov dword ptr [ebx + 0x3e0], edx */ W32((u32)(r_ebx+0x3e0u), r_edx);
    /* 0049dbe5: mov edx, dword ptr [ebx + 0x3d8] */ r_edx = R32((u32)(r_ebx+0x3d8u));
    /* 0049dbeb: mov dword ptr [ebx + 0x3dc], edx */ W32((u32)(r_ebx+0x3dcu), r_edx);
    /* 0049dbf1: mov edx, dword ptr [ebx + 0x3d4] */ r_edx = R32((u32)(r_ebx+0x3d4u));
    /* 0049dbf7: mov dword ptr [ebx + 0x3d8], edx */ W32((u32)(r_ebx+0x3d8u), r_edx);
    /* 0049dbfd: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 0049dc03: mov dword ptr [ebx + 0x3d4], edx */ W32((u32)(r_ebx+0x3d4u), r_edx);
    /* 0049dc09: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 0049dc0f: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 0049dc15: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0049dc1b: mov dword ptr [ebx + 0x3cc], edx */ W32((u32)(r_ebx+0x3ccu), r_edx);
    /* 0049dc21: mov edx, dword ptr [ebx + 0x3c4] */ r_edx = R32((u32)(r_ebx+0x3c4u));
    /* 0049dc27: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 0049dc2d: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 0049dc33: mov dword ptr [ebx + 0x3c4], edx */ W32((u32)(r_ebx+0x3c4u), r_edx);
    /* 0049dc39: mov edx, dword ptr [ebx + 0x3bc] */ r_edx = R32((u32)(r_ebx+0x3bcu));
    /* 0049dc3f: mov dword ptr [ebx + 0x3c0], edx */ W32((u32)(r_ebx+0x3c0u), r_edx);
    /* 0049dc45: mov edx, dword ptr [ebx + 0x3b8] */ r_edx = R32((u32)(r_ebx+0x3b8u));
    /* 0049dc4b: mov dword ptr [ebx + 0x3bc], edx */ W32((u32)(r_ebx+0x3bcu), r_edx);
    /* 0049dc51: mov edx, dword ptr [ebx + 0x3b4] */ r_edx = R32((u32)(r_ebx+0x3b4u));
    /* 0049dc57: mov dword ptr [ebx + 0x3b8], edx */ W32((u32)(r_ebx+0x3b8u), r_edx);
    /* 0049dc5d: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 0049dc63: mov dword ptr [ebx + 0x3b4], edx */ W32((u32)(r_ebx+0x3b4u), r_edx);
    /* 0049dc69: mov edx, dword ptr [ebx + 0x3ac] */ r_edx = R32((u32)(r_ebx+0x3acu));
    /* 0049dc6f: mov dword ptr [ebx + 0x3b0], edx */ W32((u32)(r_ebx+0x3b0u), r_edx);
    /* 0049dc75: mov edx, dword ptr [ebx + 0x3a8] */ r_edx = R32((u32)(r_ebx+0x3a8u));
    /* 0049dc7b: mov dword ptr [ebx + 0x3ac], edx */ W32((u32)(r_ebx+0x3acu), r_edx);
    /* 0049dc81: mov edx, dword ptr [ebx + 0x3a4] */ r_edx = R32((u32)(r_ebx+0x3a4u));
    /* 0049dc87: mov dword ptr [ebx + 0x3a8], edx */ W32((u32)(r_ebx+0x3a8u), r_edx);
    /* 0049dc8d: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0049dc93: mov dword ptr [ebx + 0x3a4], edx */ W32((u32)(r_ebx+0x3a4u), r_edx);
    /* 0049dc99: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 0049dc9f: mov dword ptr [ebx + 0x3a0], edx */ W32((u32)(r_ebx+0x3a0u), r_edx);
    /* 0049dca5: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 0049dcab: mov dword ptr [ebx + 0x39c], edx */ W32((u32)(r_ebx+0x39cu), r_edx);
    /* 0049dcb1: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 0049dcb7: mov dword ptr [ebx + 0x398], edx */ W32((u32)(r_ebx+0x398u), r_edx);
    /* 0049dcbd: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0049dcc3: mov dword ptr [ebx + 0x394], edx */ W32((u32)(r_ebx+0x394u), r_edx);
    /* 0049dcc9: mov edx, dword ptr [ebx + 0x38c] */ r_edx = R32((u32)(r_ebx+0x38cu));
    /* 0049dccf: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 0049dcd5: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 0049dcdb: mov dword ptr [ebx + 0x38c], edx */ W32((u32)(r_ebx+0x38cu), r_edx);
    /* 0049dce1: mov edx, dword ptr [ebx + 0x384] */ r_edx = R32((u32)(r_ebx+0x384u));
    /* 0049dce7: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 0049dced: mov edx, dword ptr [ebx + 0x380] */ r_edx = R32((u32)(r_ebx+0x380u));
    /* 0049dcf3: mov dword ptr [ebx + 0x384], edx */ W32((u32)(r_ebx+0x384u), r_edx);
    /* 0049dcf9: mov dword ptr [ebx + 0x380], eax */ W32((u32)(r_ebx+0x380u), r_eax);
    /* 0049dcff: mov esi, dword ptr [0x9a7684] */ r_esi = R32((u32)(0x9a7684u));
    /* 0049dd05: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049dd08: je 0x49dd82 */ if (fZ) goto L_0049dd82;
L_0049dd0a:; BB(0x0049dd0a);
    /* 0049dd0a: cmp esi, dword ptr [ebx + 0x4a8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049dd10: je 0x49dd82 */ if (fZ) goto L_0049dd82;
L_0049dd12:; BB(0x0049dd12);
    /* 0049dd12: mov ecx, dword ptr [ebx + 0x404] */ r_ecx = R32((u32)(r_ebx+0x404u));
    /* 0049dd18: mov dword ptr [ebx + 0x4a8], esi */ W32((u32)(r_ebx+0x4a8u), r_esi);
    /* 0049dd1e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049dd20: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0049dd23: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049dd25: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049dd27: push dword ptr [edx + 0x9a7488] */ { u32 v = R32((u32)(r_edx+0x9a7488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049dd2d: mov eax, dword ptr [edx + 0x9a7480] */ r_eax = R32((u32)(r_edx+0x9a7480u));
    /* 0049dd33: mov dword ptr [ebx + 0x4ac], eax */ W32((u32)(r_ebx+0x4acu), r_eax);
    /* 0049dd39: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x49dd3eu); f_005b8638();
    /* 0049dd3e: mov edx, dword ptr [ebx + 0x4c0] */ r_edx = R32((u32)(r_ebx+0x4c0u));
    /* 0049dd44: mov edi, dword ptr [ebx + 0x4b0] */ r_edi = R32((u32)(r_ebx+0x4b0u));
    /* 0049dd4a: mov dword ptr [ebx + 0x4bc], edx */ W32((u32)(r_ebx+0x4bcu), r_edx);
    /* 0049dd50: mov edx, dword ptr [ebx + 0x4b4] */ r_edx = R32((u32)(r_ebx+0x4b4u));
    /* 0049dd56: mov dword ptr [ebx + 0x4c4], edi */ W32((u32)(r_ebx+0x4c4u), r_edi);
    /* 0049dd5c: mov dword ptr [ebx + 0x4c8], edx */ W32((u32)(r_ebx+0x4c8u), r_edx);
    /* 0049dd62: mov esi, dword ptr [esi*8 + 0x9a748c] */ r_esi = R32((u32)(r_esi*8+0x9a748cu));
    /* 0049dd69: mov dword ptr [ebx + 0x4b4], 0 */ W32((u32)(r_ebx+0x4b4u), 0x0u);
    /* 0049dd73: mov dword ptr [ebx + 0x4b8], esi */ W32((u32)(r_ebx+0x4b8u), r_esi);
    /* 0049dd79: mov dword ptr [ebx + 0x4b0], eax */ W32((u32)(r_ebx+0x4b0u), r_eax);
    /* 0049dd7f: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
L_0049dd82:; BB(0x0049dd82);
    /* 0049dd82: mov eax, dword ptr [0x9a7688] */ r_eax = R32((u32)(0x9a7688u));
    /* 0049dd87: mov dword ptr [ebx + 0x48c], eax */ W32((u32)(r_ebx+0x48cu), r_eax);
    /* 0049dd8d: mov eax, dword ptr [0x9a768c] */ r_eax = R32((u32)(0x9a768cu));
    /* 0049dd92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049dd94: je 0x49dd9d */ if (fZ) goto L_0049dd9d;
L_0049dd96:; BB(0x0049dd96);
    /* 0049dd96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049dd98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x49dd9au); call_ind(t); }
    /* 0049dd9a: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
L_0049dd9d:; BB(0x0049dd9d);
    /* 0049dd9d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049dda0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049dda3: mov eax, ebx */ r_eax = r_ebx;
    /* 0049dda5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049dda8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049ddab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0049ddb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0049ddb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ddb5: ret 8 */ FN_RET(0x0049d2e4); r_esp += 12; return;
L_0049ddb8:; BB(0x0049ddb8);
    /* 0049ddb8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_0049ddbb:; BB(0x0049ddbb);
    /* 0049ddbb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049ddbe: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ddc0: jne 0x49d860 */ if (!fZ) goto L_0049d860;
L_0049ddc6:; BB(0x0049ddc6);
    /* 0049ddc6: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049ddcb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049ddce: jmp 0x49d860 */ goto L_0049d860;
L_0049ddd3:; BB(0x0049ddd3);
    /* 0049ddd3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049ddd6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049ddd9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0049dddc: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049ddde: jl 0x49d711 */ if ((fS!=fO)) goto L_0049d711;
L_0049dde4:; BB(0x0049dde4);
    /* 0049dde4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049dde7: jmp 0x49ddbb */ goto L_0049ddbb;
L_0049dde9:; BB(0x0049dde9);
    /* 0049dde9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049ddec: jmp 0x49ddbb */ goto L_0049ddbb;
L_0049ddee:; BB(0x0049ddee);
    /* 0049ddee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049ddf0: jl 0x49ddfa */ if ((fS!=fO)) goto L_0049ddfa;
L_0049ddf2:; BB(0x0049ddf2);
    /* 0049ddf2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049ddf5: jmp 0x49d860 */ goto L_0049d860;
L_0049ddfa:; BB(0x0049ddfa);
    /* 0049ddfa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
L_0049ddfd:; BB(0x0049ddfd);
    /* 0049ddfd: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049de02: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0049de05: jmp 0x49d860 */ goto L_0049d860;
L_0049de0a:; BB(0x0049de0a);
    /* 0049de0a: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049de0d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049de0f: jge 0x49d7ba */ if ((fS==fO)) goto L_0049d7ba;
L_0049de15:; BB(0x0049de15);
    /* 0049de15: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049de18: jmp 0x49ddfd */ goto L_0049ddfd;
L_0049de1a:; BB(0x0049de1a);
    /* 0049de1a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049de1d: jmp 0x49d860 */ goto L_0049d860;
L_0049de22:; BB(0x0049de22);
    /* 0049de22: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0049de25: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0049de2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049de2b: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0049de2e: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0049de31: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049de34: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0049de37: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0049de3a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0049de3d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49de42u); f_00509590();
    /* 0049de42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049de45: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049de48: mov dword ptr [ebx + 0x7a8], eax */ W32((u32)(r_ebx+0x7a8u), r_eax);
    /* 0049de4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049de50: je 0x49db7d */ if (fZ) goto L_0049db7d;
L_0049de56:; BB(0x0049de56);
    /* 0049de56: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049de58: mov ecx, eax */ r_ecx = r_eax;
    /* 0049de5a: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49de5fu); f_00508efc();
    /* 0049de5f: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049de62: jmp 0x49db7d */ goto L_0049db7d;
L_0049de67:; BB(0x0049de67);
    /* 0049de67: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 0049de6a: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0049de6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049de70: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0049de73: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0049de76: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049de79: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0049de7c: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0049de7f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0049de82: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49de87u); f_00509590();
    /* 0049de87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049de8a: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049de8d: mov dword ptr [ebx + 0x7a4], eax */ W32((u32)(r_ebx+0x7a4u), r_eax);
    /* 0049de93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049de95: je 0x49db6f */ if (fZ) goto L_0049db6f;
L_0049de9b:; BB(0x0049de9b);
    /* 0049de9b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049de9d: mov ecx, eax */ r_ecx = r_eax;
    /* 0049de9f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49dea4u); f_00508efc();
    /* 0049dea4: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049dea7: jmp 0x49db6f */ goto L_0049db6f;
L_0049deac:; BB(0x0049deac);
    /* 0049deac: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0049deaf: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0049deb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049deb5: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0049deb8: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0049debb: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049debe: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0049dec1: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 0049dec4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0049dec7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49deccu); f_00509590();
    /* 0049decc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049decf: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049ded2: mov dword ptr [ebx + 0x7a0], eax */ W32((u32)(r_ebx+0x7a0u), r_eax);
    /* 0049ded8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049deda: je 0x49db61 */ if (fZ) goto L_0049db61;
L_0049dee0:; BB(0x0049dee0);
    /* 0049dee0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dee2: mov ecx, eax */ r_ecx = r_eax;
    /* 0049dee4: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49dee9u); f_00508efc();
    /* 0049dee9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049deec: jmp 0x49db61 */ goto L_0049db61;
L_0049def1:; BB(0x0049def1);
    /* 0049def1: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0049def4: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0049def9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049defa: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0049defd: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0049df00: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049df03: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0049df06: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 0049df09: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0049df0c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49df11u); f_00509590();
    /* 0049df11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049df14: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049df17: mov dword ptr [ebx + 0x79c], eax */ W32((u32)(r_ebx+0x79cu), r_eax);
    /* 0049df1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049df1f: je 0x49db53 */ if (fZ) goto L_0049db53;
L_0049df25:; BB(0x0049df25);
    /* 0049df25: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049df27: mov ecx, eax */ r_ecx = r_eax;
    /* 0049df29: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49df2eu); f_00508efc();
    /* 0049df2e: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049df31: jmp 0x49db53 */ goto L_0049db53;
L_0049df36:; BB(0x0049df36);
    /* 0049df36: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0049df39: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0049df3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049df3f: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0049df42: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0049df45: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049df48: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0049df4b: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 0049df4e: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0049df51: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49df56u); f_00509590();
    /* 0049df56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049df59: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049df5c: mov dword ptr [ebx + 0x798], eax */ W32((u32)(r_ebx+0x798u), r_eax);
    /* 0049df62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049df64: je 0x49db45 */ if (fZ) goto L_0049db45;
L_0049df6a:; BB(0x0049df6a);
    /* 0049df6a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049df6c: mov ecx, eax */ r_ecx = r_eax;
    /* 0049df6e: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49df73u); f_00508efc();
    /* 0049df73: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049df76: jmp 0x49db45 */ goto L_0049db45;
L_0049df7b:; BB(0x0049df7b);
    /* 0049df7b: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0049df7e: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 0049df83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049df84: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0049df87: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0049df8a: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049df8d: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0049df90: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0049df93: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0049df96: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49df9bu); f_00509590();
    /* 0049df9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049df9e: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049dfa1: mov dword ptr [ebx + 0x794], eax */ W32((u32)(r_ebx+0x794u), r_eax);
    /* 0049dfa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049dfa9: je 0x49db37 */ if (fZ) goto L_0049db37;
L_0049dfaf:; BB(0x0049dfaf);
    /* 0049dfaf: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfb1: mov ecx, eax */ r_ecx = r_eax;
    /* 0049dfb3: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49dfb8u); f_00508efc();
    /* 0049dfb8: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049dfbb: jmp 0x49db37 */ goto L_0049db37;
}

void f_0049dfc0(void) /* sub_49DFC0 */
{
    FN_ENTER(0x0049dfc0);
    /* 0049dfc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfc1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049dfc4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049dfc6: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049dfc8: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x49dfcdu); f_0077a6cc();
    /* 0049dfcd: mov edx, eax */ r_edx = r_eax;
    /* 0049dfcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049dfd2: fld dword ptr [0x903424] */ FPUSH(R_F32((u32)(0x903424u)));
    /* 0049dfd8: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0049dfdb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049dfde: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049dfe2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049dfe7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049dfeb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049dfef: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049dff3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049dff6: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0049dffa: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0049dffc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049dffe: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0049e002: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e003: ja 0x49e011 */ if ((!fC&&!fZ)) goto L_0049e011;
L_0049e005:; BB(0x0049e005);
    /* 0049e005: mov dword ptr [ebx + 0x4cc], 0x14 */ W32((u32)(r_ebx+0x4ccu), 0x14u);
    /* 0049e00f: jmp 0x49e017 */ goto L_0049e017;
L_0049e011:; BB(0x0049e011);
    /* 0049e011: mov dword ptr [ebx + 0x4cc], ecx */ W32((u32)(r_ebx+0x4ccu), r_ecx);
L_0049e017:; BB(0x0049e017);
    /* 0049e017: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0049e01a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049e01d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049e021: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049e026: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049e02a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049e02e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049e032: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049e035: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0049e039: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0049e03b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e03d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0049e041: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e042: ja 0x49e050 */ if ((!fC&&!fZ)) goto L_0049e050;
L_0049e044:; BB(0x0049e044);
    /* 0049e044: mov dword ptr [ebx + 0x4d0], 0x14 */ W32((u32)(r_ebx+0x4d0u), 0x14u);
    /* 0049e04e: jmp 0x49e056 */ goto L_0049e056;
L_0049e050:; BB(0x0049e050);
    /* 0049e050: mov dword ptr [ebx + 0x4d0], ecx */ W32((u32)(r_ebx+0x4d0u), r_ecx);
L_0049e056:; BB(0x0049e056);
    /* 0049e056: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0049e059: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049e05c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049e060: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049e065: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049e069: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049e06d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049e071: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049e074: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0049e078: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0049e07a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e07c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0049e080: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e081: ja 0x49e08f */ if ((!fC&&!fZ)) goto L_0049e08f;
L_0049e083:; BB(0x0049e083);
    /* 0049e083: mov dword ptr [ebx + 0x4ec], 0x3c */ W32((u32)(r_ebx+0x4ecu), 0x3cu);
    /* 0049e08d: jmp 0x49e095 */ goto L_0049e095;
L_0049e08f:; BB(0x0049e08f);
    /* 0049e08f: mov dword ptr [ebx + 0x4ec], ecx */ W32((u32)(r_ebx+0x4ecu), r_ecx);
L_0049e095:; BB(0x0049e095);
    /* 0049e095: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0049e098: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e09a: jle 0x49e241 */ if ((fZ||fS!=fO)) goto L_0049e241;
L_0049e0a0:; BB(0x0049e0a0);
    /* 0049e0a0: mov dword ptr [ebx + 0x4d4], eax */ W32((u32)(r_ebx+0x4d4u), r_eax);
L_0049e0a6:; BB(0x0049e0a6);
    /* 0049e0a6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0049e0a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e0ab: jle 0x49e232 */ if ((fZ||fS!=fO)) goto L_0049e232;
L_0049e0b1:; BB(0x0049e0b1);
    /* 0049e0b1: mov dword ptr [ebx + 0x4d8], eax */ W32((u32)(r_ebx+0x4d8u), r_eax);
L_0049e0b7:; BB(0x0049e0b7);
    /* 0049e0b7: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0049e0ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e0bc: jle 0x49e223 */ if ((fZ||fS!=fO)) goto L_0049e223;
L_0049e0c2:; BB(0x0049e0c2);
    /* 0049e0c2: mov dword ptr [ebx + 0x4dc], eax */ W32((u32)(r_ebx+0x4dcu), r_eax);
L_0049e0c8:; BB(0x0049e0c8);
    /* 0049e0c8: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0049e0cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e0cd: jle 0x49e214 */ if ((fZ||fS!=fO)) goto L_0049e214;
L_0049e0d3:; BB(0x0049e0d3);
    /* 0049e0d3: mov dword ptr [ebx + 0x4e0], eax */ W32((u32)(r_ebx+0x4e0u), r_eax);
L_0049e0d9:; BB(0x0049e0d9);
    /* 0049e0d9: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0049e0dc: mov dword ptr [ebx + 0x4e4], eax */ W32((u32)(r_ebx+0x4e4u), r_eax);
    /* 0049e0e2: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0049e0e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e0e7: jl 0x49e106 */ if ((fS!=fO)) goto L_0049e106;
L_0049e0e9:; BB(0x0049e0e9);
    /* 0049e0e9: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e0ec: jg 0x49e106 */ if ((!fZ&&fS==fO)) goto L_0049e106;
L_0049e0ee:; BB(0x0049e0ee);
    /* 0049e0ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049e0f0: jl 0x49e106 */ if ((fS!=fO)) goto L_0049e106;
L_0049e0f2:; BB(0x0049e0f2);
    /* 0049e0f2: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e0f5: jg 0x49e106 */ if ((!fZ&&fS==fO)) goto L_0049e106;
L_0049e0f7:; BB(0x0049e0f7);
    /* 0049e0f7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049e0f9: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049e0fc: jg 0x49e106 */ if ((!fZ&&fS==fO)) goto L_0049e106;
L_0049e0fe:; BB(0x0049e0fe);
    /* 0049e0fe: mov dword ptr [ebx + 0x4e8], edx */ W32((u32)(r_ebx+0x4e8u), r_edx);
    /* 0049e104: jmp 0x49e11a */ goto L_0049e11a;
L_0049e106:; BB(0x0049e106);
    /* 0049e106: mov dword ptr [ebx + 0x4e4], 0x19 */ W32((u32)(r_ebx+0x4e4u), 0x19u);
    /* 0049e110: mov dword ptr [ebx + 0x4e8], 0xa */ W32((u32)(r_ebx+0x4e8u), 0xau);
L_0049e11a:; BB(0x0049e11a);
    /* 0049e11a: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0049e11c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x49e121u); f_0077a6cc();
    /* 0049e121: mov edx, eax */ r_edx = r_eax;
    /* 0049e123: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049e126: fld dword ptr [0x903424] */ FPUSH(R_F32((u32)(0x903424u)));
    /* 0049e12c: fcom dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); 
    /* 0049e12e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e130: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0049e132: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e133: jb 0x49e141 */ if (fC) goto L_0049e141;
L_0049e135:; BB(0x0049e135);
    /* 0049e135: mov dword ptr [ebx + 0x4f0], 0x3f800000 */ W32((u32)(r_ebx+0x4f0u), 0x3f800000u);
    /* 0049e13f: jmp 0x49e147 */ goto L_0049e147;
L_0049e141:; BB(0x0049e141);
    /* 0049e141: mov dword ptr [ebx + 0x4f0], ecx */ W32((u32)(r_ebx+0x4f0u), r_ecx);
L_0049e147:; BB(0x0049e147);
    /* 0049e147: fcom dword ptr [edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4u))); 
    /* 0049e14a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e14c: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0049e14f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e150: jb 0x49e15e */ if (fC) goto L_0049e15e;
L_0049e152:; BB(0x0049e152);
    /* 0049e152: mov dword ptr [ebx + 0x4f4], 0x3f800000 */ W32((u32)(r_ebx+0x4f4u), 0x3f800000u);
    /* 0049e15c: jmp 0x49e164 */ goto L_0049e164;
L_0049e15e:; BB(0x0049e15e);
    /* 0049e15e: mov dword ptr [ebx + 0x4f4], ecx */ W32((u32)(r_ebx+0x4f4u), r_ecx);
L_0049e164:; BB(0x0049e164);
    /* 0049e164: fcom dword ptr [edx + 8] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x8u))); 
    /* 0049e167: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e169: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0049e16c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e16d: jb 0x49e17b */ if (fC) goto L_0049e17b;
L_0049e16f:; BB(0x0049e16f);
    /* 0049e16f: mov dword ptr [ebx + 0x500], 0x3f800000 */ W32((u32)(r_ebx+0x500u), 0x3f800000u);
    /* 0049e179: jmp 0x49e181 */ goto L_0049e181;
L_0049e17b:; BB(0x0049e17b);
    /* 0049e17b: mov dword ptr [ebx + 0x500], ecx */ W32((u32)(r_ebx+0x500u), r_ecx);
L_0049e181:; BB(0x0049e181);
    /* 0049e181: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0049e184: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049e187: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049e18b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049e190: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049e194: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049e198: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049e19c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049e19f: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0049e1a3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0049e1a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e1a7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0049e1ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e1ac: ja 0x49e1ba */ if ((!fC&&!fZ)) goto L_0049e1ba;
L_0049e1ae:; BB(0x0049e1ae);
    /* 0049e1ae: mov dword ptr [ebx + 0x504], 0x78 */ W32((u32)(r_ebx+0x504u), 0x78u);
    /* 0049e1b8: jmp 0x49e1c0 */ goto L_0049e1c0;
L_0049e1ba:; BB(0x0049e1ba);
    /* 0049e1ba: mov dword ptr [ebx + 0x504], edx */ W32((u32)(r_ebx+0x504u), r_edx);
L_0049e1c0:; BB(0x0049e1c0);
    /* 0049e1c0: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0049e1c2: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x49e1c7u); f_0077a6cc();
    /* 0049e1c7: mov edx, eax */ r_edx = r_eax;
    /* 0049e1c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049e1cc: fld dword ptr [0x903424] */ FPUSH(R_F32((u32)(0x903424u)));
    /* 0049e1d2: fcom dword ptr [edx + 8] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x8u))); 
    /* 0049e1d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e1d7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0049e1da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e1db: jb 0x49e1e9 */ if (fC) goto L_0049e1e9;
L_0049e1dd:; BB(0x0049e1dd);
    /* 0049e1dd: mov dword ptr [ebx + 0x4f8], 0x3f800000 */ W32((u32)(r_ebx+0x4f8u), 0x3f800000u);
    /* 0049e1e7: jmp 0x49e1ef */ goto L_0049e1ef;
L_0049e1e9:; BB(0x0049e1e9);
    /* 0049e1e9: mov dword ptr [ebx + 0x4f8], ecx */ W32((u32)(r_ebx+0x4f8u), r_ecx);
L_0049e1ef:; BB(0x0049e1ef);
    /* 0049e1ef: fcomp dword ptr [edx + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_edx+0xcu))); FPOP();
    /* 0049e1f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049e1f4: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0049e1f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049e1f8: jb 0x49e209 */ if (fC) goto L_0049e209;
L_0049e1fa:; BB(0x0049e1fa);
    /* 0049e1fa: mov dword ptr [ebx + 0x4fc], 0x3f800000 */ W32((u32)(r_ebx+0x4fcu), 0x3f800000u);
    /* 0049e204: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e207: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049e208: ret  */ FN_RET(0x0049dfc0); r_esp += 4; return;
L_0049e209:; BB(0x0049e209);
    /* 0049e209: mov dword ptr [ebx + 0x4fc], ecx */ W32((u32)(r_ebx+0x4fcu), r_ecx);
    /* 0049e20f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049e212: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049e213: ret  */ FN_RET(0x0049dfc0); r_esp += 4; return;
L_0049e214:; BB(0x0049e214);
    /* 0049e214: mov dword ptr [ebx + 0x4e0], 0x3c */ W32((u32)(r_ebx+0x4e0u), 0x3cu);
    /* 0049e21e: jmp 0x49e0d9 */ goto L_0049e0d9;
L_0049e223:; BB(0x0049e223);
    /* 0049e223: mov dword ptr [ebx + 0x4dc], 0xc8 */ W32((u32)(r_ebx+0x4dcu), 0xc8u);
    /* 0049e22d: jmp 0x49e0c8 */ goto L_0049e0c8;
L_0049e232:; BB(0x0049e232);
    /* 0049e232: mov dword ptr [ebx + 0x4d8], 0xc8 */ W32((u32)(r_ebx+0x4d8u), 0xc8u);
    /* 0049e23c: jmp 0x49e0b7 */ goto L_0049e0b7;
L_0049e241:; BB(0x0049e241);
    /* 0049e241: mov dword ptr [ebx + 0x4d4], 0xc8 */ W32((u32)(r_ebx+0x4d4u), 0xc8u);
    /* 0049e24b: jmp 0x49e0a6 */ goto L_0049e0a6;
}

