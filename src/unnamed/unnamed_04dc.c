#include "protos.h"

void f_004dc074(void) /* sub_4DC074 */
{
    FN_ENTER(0x004dc074);
    /* 004dc074: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc075: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dc077: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004dc07a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc07c: je 0x4dc092 */ if (fZ) goto L_004dc092;
L_004dc07e:; BB(0x004dc07e);
    /* 004dc07e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dc083u); f_007127b0();
    /* 004dc083: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 004dc08a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc08c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x4dc091u); f_00791748();
    /* 004dc091: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004dc092:; BB(0x004dc092);
    /* 004dc092: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc094: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dc099u); f_0073ec50();
    /* 004dc099: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc09b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc09c: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x4dc0a1u); f_00735708();
    /* 004dc0a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc0a4: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 004dc0a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc0a9: je 0x4dc11b */ if (fZ) goto L_004dc11b;
L_004dc0ab:; BB(0x004dc0ab);
    /* 004dc0ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0ad: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x4dc0b2u); f_00791748();
    /* 004dc0b2: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0b4: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc0b9u); f_007930dc();
    /* 004dc0b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc0bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0be: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0c0: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004dc0c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0c4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x4dc0c9u); f_00735c90();
    /* 004dc0c9: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0cb: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc0d0u); f_007930dc();
    /* 004dc0d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc0d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0d3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0d5: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004dc0d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0d9: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x4dc0deu); f_00735c90();
    /* 004dc0de: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0e0: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc0e5u); f_007930dc();
    /* 004dc0e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc0e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0e8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0ea: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004dc0ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0ee: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x4dc0f3u); f_00735c90();
    /* 004dc0f3: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004dc0f6: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x4dc0fbu); f_0073608c();
    /* 004dc0fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc0fd: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004dc100: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 004dc107: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dc10c: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 004dc113: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004dc116: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x4dc11bu); f_00736510();
L_004dc11b:; BB(0x004dc11b);
    /* 004dc11b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dc11c: ret  */ FN_RET(0x004dc074); r_esp += 4; return;
}

void f_004dc120(void) /* sub_4DC120 */
{
    FN_ENTER(0x004dc120);
    /* 004dc120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc121: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dc123: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004dc126: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc128: je 0x4dc13e */ if (fZ) goto L_004dc13e;
L_004dc12a:; BB(0x004dc12a);
    /* 004dc12a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dc12fu); f_007127b0();
    /* 004dc12f: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 004dc136: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc138: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x4dc13du); f_00791748();
    /* 004dc13d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004dc13e:; BB(0x004dc13e);
    /* 004dc13e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dc13f: ret  */ FN_RET(0x004dc120); r_esp += 4; return;
}

void f_004dc140(void) /* sub_4DC140 */
{
    FN_ENTER(0x004dc140);
    /* 004dc140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc141: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dc143: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004dc146: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc148: je 0x4dc15e */ if (fZ) goto L_004dc15e;
L_004dc14a:; BB(0x004dc14a);
    /* 004dc14a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dc14fu); f_007127b0();
    /* 004dc14f: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 004dc156: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc158: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x4dc15du); f_00791748();
    /* 004dc15d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004dc15e:; BB(0x004dc15e);
    /* 004dc15e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dc15f: ret  */ FN_RET(0x004dc140); r_esp += 4; return;
}

void f_004dc160(void) /* sub_4DC160 */
{
    FN_ENTER(0x004dc160);
    /* 004dc160: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc161: mov esi, ecx */ r_esi = r_ecx;
    /* 004dc163: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc165: call 0x4dbf5c */ r_esp -= 4; W32(r_esp, 0x4dc16au); f_004dbf5c();
    /* 004dc16a: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 004dc16d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc16f: je 0x4dc1f9 */ if (fZ) goto L_004dc1f9;
L_004dc175:; BB(0x004dc175);
    /* 004dc175: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 004dc17c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dc17e: je 0x4dc1b5 */ if (fZ) goto L_004dc1b5;
L_004dc180:; BB(0x004dc180);
    /* 004dc180: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x4dc185u); f_007365f4();
    /* 004dc185: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc188: je 0x4dc1db */ if (fZ) goto L_004dc1db;
L_004dc18a:; BB(0x004dc18a);
    /* 004dc18a: push dword ptr [eax*4 + 0x9b0fe0] */ { u32 v = R32((u32)(r_eax*4+0x9b0fe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc191: call 0x4dbbb4 */ r_esp -= 4; W32(r_esp, 0x4dc196u); f_004dbbb4();
    /* 004dc196: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc197: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc199: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dc19eu); f_004dc224();
    /* 004dc19e: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc1a0: call 0x4dbe80 */ r_esp -= 4; W32(r_esp, 0x4dc1a5u); f_004dbe80();
    /* 004dc1a5: mov dword ptr [esi + 0x24], 1 */ W32((u32)(r_esi+0x24u), 0x1u);
    /* 004dc1ac: mov dword ptr [esi + 0x1c], 3 */ W32((u32)(r_esi+0x1cu), 0x3u);
    /* 004dc1b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dc1b4: ret  */ FN_RET(0x004dc160); r_esp += 4; return;
L_004dc1b5:; BB(0x004dc1b5);
    /* 004dc1b5: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x4dc1bau); f_00694c6c();
    /* 004dc1ba: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc1c0: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004dc1c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dc1c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dc1c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dc1c9: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 004dc1d0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4dc1d5u); f_007c1160();
    /* 004dc1d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc1d7: jne 0x4dc1db */ if (!fZ) goto L_004dc1db;
L_004dc1d9:; BB(0x004dc1d9);
    /* 004dc1d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dc1da: ret  */ FN_RET(0x004dc160); r_esp += 4; return;
L_004dc1db:; BB(0x004dc1db);
    /* 004dc1db: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc1dd: call 0x4dc120 */ r_esp -= 4; W32(r_esp, 0x4dc1e2u); f_004dc120();
    /* 004dc1e2: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc1e4: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dc1e9u); f_004dc224();
    /* 004dc1e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc1eb: call 0x4dbeb4 */ r_esp -= 4; W32(r_esp, 0x4dc1f0u); f_004dbeb4();
    /* 004dc1f0: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
    /* 004dc1f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dc1f8: ret  */ FN_RET(0x004dc160); r_esp += 4; return;
L_004dc1f9:; BB(0x004dc1f9);
    /* 004dc1f9: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc1fb: call 0x4dc074 */ r_esp -= 4; W32(r_esp, 0x4dc200u); f_004dc074();
    /* 004dc200: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 004dc203: jmp 0x4dc175 */ goto L_004dc175;
}

void f_004dc208(void) /* sub_4DC208 */
{
    FN_ENTER(0x004dc208);
    /* 004dc208: call 0x4da0e8 */ r_esp -= 4; W32(r_esp, 0x4dc20du); f_004da0e8();
    /* 004dc20d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc20f: jne 0x4dc21b */ if (!fZ) goto L_004dc21b;
L_004dc211:; BB(0x004dc211);
    /* 004dc211: call 0x4da0a0 */ r_esp -= 4; W32(r_esp, 0x4dc216u); f_004da0a0();
    /* 004dc216: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dc219: jg 0x4dc21e */ if ((!fZ&&fS==fO)) goto L_004dc21e;
L_004dc21b:; BB(0x004dc21b);
    /* 004dc21b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc21d: ret  */ FN_RET(0x004dc208); r_esp += 4; return;
L_004dc21e:; BB(0x004dc21e);
    /* 004dc21e: mov eax, 1 */ r_eax = 0x1u;
    /* 004dc223: ret  */ FN_RET(0x004dc208); r_esp += 4; return;
}

void f_004dc224(void) /* sub_4DC224 */
{
    FN_ENTER(0x004dc224);
    /* 004dc224: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc22a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dc22fu); f_0068d5a8();
    /* 004dc22f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc232: je 0x4dc253 */ if (fZ) goto L_004dc253;
L_004dc234:; BB(0x004dc234);
    /* 004dc234: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 004dc23a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dc23d: je 0x4dc246 */ if (fZ) goto L_004dc246;
L_004dc23f:; BB(0x004dc23f);
    /* 004dc23f: mov edx, 1 */ r_edx = 0x1u;
    /* 004dc244: jmp 0x4dc248 */ goto L_004dc248;
L_004dc246:; BB(0x004dc246);
    /* 004dc246: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004dc248:; BB(0x004dc248);
    /* 004dc248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc24a: je 0x4dc253 */ if (fZ) goto L_004dc253;
L_004dc24c:; BB(0x004dc24c);
    /* 004dc24c: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc24e: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x4dc253u); f_00685514();
L_004dc253:; BB(0x004dc253);
    /* 004dc253: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc259: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x4dc25eu); f_00717ed8();
    /* 004dc25e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc264: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x4dc269u); f_00718108();
    /* 004dc269: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dc26c: ret  */ FN_RET(0x004dc224); r_esp += 4; return;
}

void f_004dc270(void) /* sub_4DC270 */
{
    FN_ENTER(0x004dc270);
    /* 004dc270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc271: mov ebp, esp */ r_ebp = r_esp;
    /* 004dc273: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc275: push 0x8d2408 */ { u32 v = 0x8d2408u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc27a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dc280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc281: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dc288: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dc28b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dc28e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dc291: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dc294: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dc297: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc299: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004dc2a0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4dc2a5u); f_005caba4();
    /* 004dc2a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc2a6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004dc2a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc2ab: je 0x4dc2de */ if (fZ) goto L_004dc2de;
L_004dc2ad:; BB(0x004dc2ad);
    /* 004dc2ad: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004dc2b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dc2bb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc2be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dc2c1: call 0x4dc2e4 */ r_esp -= 4; W32(r_esp, 0x4dc2c6u); f_004dc2e4();
    /* 004dc2c6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dc2c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004dc2d0:; BB(0x004dc2d0);
    /* 004dc2d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dc2d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dc2da: mov esp, ebp */ r_esp = r_ebp;
    /* 004dc2dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dc2dd: ret  */ FN_RET(0x004dc270); r_esp += 4; return;
L_004dc2de:; BB(0x004dc2de);
    /* 004dc2de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc2e0: jmp 0x4dc2d0 */ goto L_004dc2d0;
}

void f_004dc2e4(void) /* sub_4DC2E4 */
{
    FN_ENTER(0x004dc2e4);
    /* 004dc2e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc2e5: mov esi, ecx */ r_esi = r_ecx;
    /* 004dc2e7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc2eb: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc2ed: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4dc2f2u); f_008193cc();
    /* 004dc2f2: mov dword ptr [esi], 0xafcd50 */ W32((u32)(r_esi), 0xafcd50u);
    /* 004dc2f8: mov eax, dword ptr [0x9b0fec] */ r_eax = R32((u32)(0x9b0fecu));
    /* 004dc2fd: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004dc303: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc309: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004dc30c: jne 0x4dc315 */ if (!fZ) goto L_004dc315;
L_004dc30e:; BB(0x004dc30e);
    /* 004dc30e: mov eax, 1 */ r_eax = 0x1u;
    /* 004dc313: jmp 0x4dc317 */ goto L_004dc317;
L_004dc315:; BB(0x004dc315);
    /* 004dc315: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004dc317:; BB(0x004dc317);
    /* 004dc317: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004dc31a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc31c: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004dc31f: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004dc322: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004dc325: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004dc328: mov eax, esi */ r_eax = r_esi;
    /* 004dc32a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dc32b: ret 4 */ FN_RET(0x004dc2e4); r_esp += 8; return;
}

void f_004dc330(void) /* sub_4DC330 */
{
    FN_ENTER(0x004dc330);
    /* 004dc330: mov dword ptr [0xa49584], 0x3f800000 */ W32((u32)(0xa49584u), 0x3f800000u);
    /* 004dc33a: mov dword ptr [0xa49588], 0x41000000 */ W32((u32)(0xa49588u), 0x41000000u);
    /* 004dc344: mov dword ptr [0xa4958c], 0x3fc00000 */ W32((u32)(0xa4958cu), 0x3fc00000u);
    /* 004dc34e: ret  */ FN_RET(0x004dc330); r_esp += 4; return;
}

void f_004dc350(void) /* sub_4DC350 */
{
    FN_ENTER(0x004dc350);
    /* 004dc350: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc351: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc352: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dc355: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dc357: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 004dc35b: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4dc360u); f_00719914();
    /* 004dc360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc362: je 0x4dc69a */ if (fZ) goto L_004dc69a;
L_004dc368:; BB(0x004dc368);
    /* 004dc368: mov ecx, dword ptr [0xa48c2c] */ r_ecx = R32((u32)(0xa48c2cu));
    /* 004dc36e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc370: je 0x4dc39b */ if (fZ) goto L_004dc39b;
L_004dc372:; BB(0x004dc372);
    /* 004dc372: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc374: jne 0x4dc37d */ if (!fZ) goto L_004dc37d;
L_004dc376:; BB(0x004dc376);
    /* 004dc376: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dc37bu); f_007127b0();
    /* 004dc37b: jmp 0x4dc394 */ goto L_004dc394;
L_004dc37d:; BB(0x004dc37d);
    /* 004dc37d: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004dc381: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dc386: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004dc38a: mov dword ptr [0xa48c2c], 0 */ W32((u32)(0xa48c2cu), 0x0u);
L_004dc394:; BB(0x004dc394);
    /* 004dc394: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dc396: call 0x4dc970 */ r_esp -= 4; W32(r_esp, 0x4dc39bu); f_004dc970();
L_004dc39b:; BB(0x004dc39b);
    /* 004dc39b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc39d: je 0x4dc692 */ if (fZ) goto L_004dc692;
L_004dc3a3:; BB(0x004dc3a3);
    /* 004dc3a3: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc3a6: jne 0x4dc518 */ if (!fZ) goto L_004dc518;
L_004dc3ac:; BB(0x004dc3ac);
    /* 004dc3ac: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3ae: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dc3b3u); f_0073ec50();
    /* 004dc3b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3b5: push 0xa497e0 */ { u32 v = 0xa497e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3bb: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4dc3c0u); f_0073a8dc();
    /* 004dc3c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc3c3: mov dword ptr [0xa48c2c], eax */ W32((u32)(0xa48c2cu), r_eax);
    /* 004dc3c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc3ca: je 0x4dc692 */ if (fZ) goto L_004dc692;
L_004dc3d0:; BB(0x004dc3d0);
    /* 004dc3d0: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3d5: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc3d7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x4dc3dcu); f_00712624();
    /* 004dc3dc: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 004dc3e1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc3e4: jl 0x4dc3fb */ if ((fS!=fO)) goto L_004dc3fb;
L_004dc3e6:; BB(0x004dc3e6);
    /* 004dc3e6: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3eb: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3f0: mov ecx, dword ptr [0xa48c2c] */ r_ecx = R32((u32)(0xa48c2cu));
    /* 004dc3f6: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x4dc3fbu); f_0070f5a4();
L_004dc3fb:; BB(0x004dc3fb);
    /* 004dc3fb: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc3fd: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc402u); f_007930dc();
    /* 004dc402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc403: push 0x909980 */ { u32 v = 0x909980u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc408: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc40d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dc412u); f_00857e29();
    /* 004dc412: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc415: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 004dc419: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 004dc41d: mov eax, 0xa48fdc */ r_eax = 0xa48fdcu;
    /* 004dc422: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004dc424: mov esi, ebp */ r_esi = r_ebp;
    /* 004dc426: mov ebp, eax */ r_ebp = r_eax;
L_004dc428:; BB(0x004dc428);
    /* 004dc428: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004dc42b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc42d: je 0x4dc4e7 */ if (fZ) goto L_004dc4e7;
L_004dc433:; BB(0x004dc433);
    /* 004dc433: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc434: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dc439u); f_0068d5a8();
    /* 004dc439: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc43a: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc43c: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x4dc441u); f_006936b4();
    /* 004dc441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc442: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc447: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc44cu); f_00857fc3();
    /* 004dc44c: push 0x909990 */ { u32 v = 0x909990u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc451: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc456: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc45bu); f_00857fc3();
    /* 004dc45b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc460: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 004dc463: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc464: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc466: call 0x4da298 */ r_esp -= 4; W32(r_esp, 0x4dc46bu); f_004da298();
    /* 004dc46b: mov ebx, eax */ r_ebx = r_eax;
    /* 004dc46d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc46f: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4dc474u); f_004da158();
    /* 004dc474: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc475: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc477: jge 0x4dc4c0 */ if ((fS==fO)) goto L_004dc4c0;
L_004dc479:; BB(0x004dc479);
    /* 004dc479: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc47b: jne 0x4dc494 */ if (!fZ) goto L_004dc494;
L_004dc47d:; BB(0x004dc47d);
    /* 004dc47d: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc47f: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc484u); f_007930dc();
    /* 004dc484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc485: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc48a: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc48fu); f_00857fc3();
    /* 004dc48f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc492: jmp 0x4dc4d5 */ goto L_004dc4d5;
L_004dc494:; BB(0x004dc494);
    /* 004dc494: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc496: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc49bu); f_007930dc();
    /* 004dc49b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004dc49f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4a1: push 0x90999c */ { u32 v = 0x90999cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4a7: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dc4acu); f_00857e29();
    /* 004dc4ac: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004dc4b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4b1: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4b6: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc4bbu); f_00857fc3();
    /* 004dc4bb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc4be: jmp 0x4dc4d5 */ goto L_004dc4d5;
L_004dc4c0:; BB(0x004dc4c0);
    /* 004dc4c0: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4c2: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc4c7u); f_007930dc();
    /* 004dc4c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4c8: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4cd: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc4d2u); f_00857fc3();
    /* 004dc4d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc4d5:; BB(0x004dc4d5);
    /* 004dc4d5: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4da: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4df: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc4e4u); f_00857fc3();
    /* 004dc4e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc4e7:; BB(0x004dc4e7);
    /* 004dc4e7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dc4ea: add ebp, 0x144 */ {  u32 a = r_ebp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004dc4f0: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc4f3: jl 0x4dc428 */ if ((fS!=fO)) goto L_004dc428;
L_004dc4f9:; BB(0x004dc4f9);
    /* 004dc4f9: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004dc4fd: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 004dc501: mov ecx, dword ptr [0xa48c2c] */ r_ecx = R32((u32)(0xa48c2cu));
    /* 004dc507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc509: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc50e: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4dc513u); f_0073ae38();
    /* 004dc513: jmp 0x4dc692 */ goto L_004dc692;
L_004dc518:; BB(0x004dc518);
    /* 004dc518: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc51b: jne 0x4dc68a */ if (!fZ) goto L_004dc68a;
L_004dc521:; BB(0x004dc521);
    /* 004dc521: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004dc523: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dc528u); f_0073ec50();
    /* 004dc528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc52a: push 0xa497e0 */ { u32 v = 0xa497e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc52f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc530: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4dc535u); f_0073a8dc();
    /* 004dc535: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc538: mov dword ptr [0xa48c2c], eax */ W32((u32)(0xa48c2cu), r_eax);
    /* 004dc53d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc53f: je 0x4dc692 */ if (fZ) goto L_004dc692;
L_004dc545:; BB(0x004dc545);
    /* 004dc545: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc54a: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc54c: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x4dc551u); f_00712624();
    /* 004dc551: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 004dc556: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc559: jl 0x4dc570 */ if ((fS!=fO)) goto L_004dc570;
L_004dc55b:; BB(0x004dc55b);
    /* 004dc55b: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc560: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc565: mov ecx, dword ptr [0xa48c2c] */ r_ecx = R32((u32)(0xa48c2cu));
    /* 004dc56b: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x4dc570u); f_0070f5a4();
L_004dc570:; BB(0x004dc570);
    /* 004dc570: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc572: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc577u); f_007930dc();
    /* 004dc577: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc578: push 0x909980 */ { u32 v = 0x909980u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc57d: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc582: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dc587u); f_00857e29();
    /* 004dc587: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc58a: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 004dc58e: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 004dc592: mov eax, 0xa48fdc */ r_eax = 0xa48fdcu;
    /* 004dc597: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004dc599: mov esi, ebp */ r_esi = r_ebp;
    /* 004dc59b: mov ebp, eax */ r_ebp = r_eax;
L_004dc59d:; BB(0x004dc59d);
    /* 004dc59d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004dc5a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc5a2: je 0x4dc65c */ if (fZ) goto L_004dc65c;
L_004dc5a8:; BB(0x004dc5a8);
    /* 004dc5a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5a9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dc5aeu); f_0068d5a8();
    /* 004dc5ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc5af: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc5b1: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x4dc5b6u); f_006936b4();
    /* 004dc5b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5b7: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5bc: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc5c1u); f_00857fc3();
    /* 004dc5c1: push 0x909990 */ { u32 v = 0x909990u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5c6: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5cb: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc5d0u); f_00857fc3();
    /* 004dc5d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc5d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5d5: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 004dc5d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5d9: mov ecx, esi */ r_ecx = r_esi;
    /* 004dc5db: call 0x4da298 */ r_esp -= 4; W32(r_esp, 0x4dc5e0u); f_004da298();
    /* 004dc5e0: mov ebx, eax */ r_ebx = r_eax;
    /* 004dc5e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5e4: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4dc5e9u); f_004da158();
    /* 004dc5e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc5ea: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc5ec: jge 0x4dc635 */ if ((fS==fO)) goto L_004dc635;
L_004dc5ee:; BB(0x004dc5ee);
    /* 004dc5ee: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc5f0: jne 0x4dc609 */ if (!fZ) goto L_004dc609;
L_004dc5f2:; BB(0x004dc5f2);
    /* 004dc5f2: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5f4: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc5f9u); f_007930dc();
    /* 004dc5f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5fa: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5ff: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc604u); f_00857fc3();
    /* 004dc604: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc607: jmp 0x4dc64a */ goto L_004dc64a;
L_004dc609:; BB(0x004dc609);
    /* 004dc609: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc60b: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc610u); f_007930dc();
    /* 004dc610: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004dc614: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc616: push 0x90999c */ { u32 v = 0x90999cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc61b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc61c: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dc621u); f_00857e29();
    /* 004dc621: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 004dc625: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc626: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc62b: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc630u); f_00857fc3();
    /* 004dc630: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc633: jmp 0x4dc64a */ goto L_004dc64a;
L_004dc635:; BB(0x004dc635);
    /* 004dc635: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc637: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc63cu); f_007930dc();
    /* 004dc63c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc63d: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc642: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc647u); f_00857fc3();
    /* 004dc647: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc64a:; BB(0x004dc64a);
    /* 004dc64a: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc64f: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc654: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc659u); f_00857fc3();
    /* 004dc659: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc65c:; BB(0x004dc65c);
    /* 004dc65c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dc65f: add ebp, 0x144 */ {  u32 a = r_ebp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004dc665: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc668: jl 0x4dc59d */ if ((fS!=fO)) goto L_004dc59d;
L_004dc66e:; BB(0x004dc66e);
    /* 004dc66e: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 004dc672: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 004dc676: mov ecx, dword ptr [0xa48c2c] */ r_ecx = R32((u32)(0xa48c2cu));
    /* 004dc67c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc67e: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc683: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4dc688u); f_0073ae38();
    /* 004dc688: jmp 0x4dc692 */ goto L_004dc692;
L_004dc68a:; BB(0x004dc68a);
    /* 004dc68a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc68b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dc68d: call 0x4dc6ac */ r_esp -= 4; W32(r_esp, 0x4dc692u); f_004dc6ac();
L_004dc692:; BB(0x004dc692);
    /* 004dc692: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dc695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dc696: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dc697: ret 4 */ FN_RET(0x004dc350); r_esp += 8; return;
L_004dc69a:; BB(0x004dc69a);
    /* 004dc69a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dc69c: call 0x4dc970 */ r_esp -= 4; W32(r_esp, 0x4dc6a1u); f_004dc970();
    /* 004dc6a1: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dc6a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dc6a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dc6a6: ret 4 */ FN_RET(0x004dc350); r_esp += 8; return;
}

void f_004dc6ac(void) /* sub_4DC6AC */
{
    FN_ENTER(0x004dc6ac);
    /* 004dc6ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6af: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dc6b2: mov ebx, dword ptr [esp + 0x8c] */ r_ebx = R32((u32)(r_esp+0x8cu));
    /* 004dc6b9: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6bb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dc6c0u); f_0073ec50();
    /* 004dc6c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6c2: push 0xa497e0 */ { u32 v = 0xa497e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6c8: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4dc6cdu); f_0073a8dc();
    /* 004dc6cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc6d0: mov dword ptr [0xa48c2c], eax */ W32((u32)(0xa48c2cu), r_eax);
    /* 004dc6d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc6d7: je 0x4dc92f */ if (fZ) goto L_004dc92f;
L_004dc6dd:; BB(0x004dc6dd);
    /* 004dc6dd: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6e2: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc6e4: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x4dc6e9u); f_00712624();
    /* 004dc6e9: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 004dc6ee: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc6f1: jl 0x4dc708 */ if ((fS!=fO)) goto L_004dc708;
L_004dc6f3:; BB(0x004dc6f3);
    /* 004dc6f3: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6f8: push 0x3f400000 */ { u32 v = 0x3f400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6fd: mov ecx, dword ptr [0xa48c2c] */ r_ecx = R32((u32)(0xa48c2cu));
    /* 004dc703: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x4dc708u); f_0070f5a4();
L_004dc708:; BB(0x004dc708);
    /* 004dc708: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc70b: jl 0x4dc719 */ if ((fS!=fO)) goto L_004dc719;
L_004dc70d:; BB(0x004dc70d);
    /* 004dc70d: cmp ebx, 0xb */ {  u32 a = r_ebx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc710: jg 0x4dc719 */ if ((!fZ&&fS==fO)) goto L_004dc719;
L_004dc712:; BB(0x004dc712);
    /* 004dc712: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004dc714: lea edi, [ebx - 3] */ r_edi = (u32)(r_ebx+0xfffffffdu);
    /* 004dc717: jmp 0x4dc72b */ goto L_004dc72b;
L_004dc719:; BB(0x004dc719);
    /* 004dc719: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc71c: jl 0x4dc72b */ if ((fS!=fO)) goto L_004dc72b;
L_004dc71e:; BB(0x004dc71e);
    /* 004dc71e: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc721: jg 0x4dc72b */ if ((!fZ&&fS==fO)) goto L_004dc72b;
L_004dc723:; BB(0x004dc723);
    /* 004dc723: mov esi, 1 */ r_esi = 0x1u;
    /* 004dc728: lea edi, [ebx - 0xc] */ r_edi = (u32)(r_ebx+0xfffffff4u);
L_004dc72b:; BB(0x004dc72b);
    /* 004dc72b: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc72d: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc732u); f_007930dc();
    /* 004dc732: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc737: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 004dc73a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc73b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc73c: push 0x9099ac */ { u32 v = 0x9099acu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc741: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc746: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dc74bu); f_00857e29();
    /* 004dc74b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc74e: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 004dc752: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 004dc756: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 004dc75a: mov eax, 0xa48fdc */ r_eax = 0xa48fdcu;
    /* 004dc75f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004dc761: mov esi, eax */ r_esi = r_eax;
L_004dc763:; BB(0x004dc763);
    /* 004dc763: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004dc765: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc767: je 0x4dc907 */ if (fZ) goto L_004dc907;
L_004dc76d:; BB(0x004dc76d);
    /* 004dc76d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc76e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dc773u); f_0068d5a8();
    /* 004dc773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc774: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc776: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x4dc77bu); f_006936b4();
    /* 004dc77b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc77c: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc781: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc786u); f_00857fc3();
    /* 004dc786: push 0x9099c4 */ { u32 v = 0x9099c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc78b: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc790: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc795u); f_00857fc3();
    /* 004dc795: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 004dc799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc79a: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 004dc79d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc79e: call 0x4da114 */ r_esp -= 4; W32(r_esp, 0x4dc7a3u); f_004da114();
    /* 004dc7a3: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 004dc7aa: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 004dc7b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7b3: call 0x4da138 */ r_esp -= 4; W32(r_esp, 0x4dc7b8u); f_004da138();
    /* 004dc7b8: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 004dc7bc: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc7bf: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4dc7c4u); f_004d9604();
    /* 004dc7c4: mov ebp, eax */ r_ebp = r_eax;
    /* 004dc7c6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc7c9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc7cb: je 0x4dc938 */ if (fZ) goto L_004dc938;
L_004dc7d1:; BB(0x004dc7d1);
    /* 004dc7d1: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 004dc7d5: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc7d8: call 0x4d9664 */ r_esp -= 4; W32(r_esp, 0x4dc7ddu); f_004d9664();
    /* 004dc7dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc7de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc7e0: jne 0x4dc7f9 */ if (!fZ) goto L_004dc7f9;
L_004dc7e2:; BB(0x004dc7e2);
    /* 004dc7e2: push 0x9099dc */ { u32 v = 0x9099dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7e7: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7ec: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc7f1u); f_00857fc3();
    /* 004dc7f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc7f4: jmp 0x4dc8b6 */ goto L_004dc8b6;
L_004dc7f9:; BB(0x004dc7f9);
    /* 004dc7f9: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 004dc7fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7ff: call 0x4da138 */ r_esp -= 4; W32(r_esp, 0x4dc804u); f_004da138();
    /* 004dc804: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004dc808: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 004dc80c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004dc80e: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004dc812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc813: call 0x4da158 */ r_esp -= 4; W32(r_esp, 0x4dc818u); f_004da158();
    /* 004dc818: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc81b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004dc81d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004dc81f: jle 0x4dc85b */ if ((fZ||fS!=fO)) goto L_004dc85b;
L_004dc821:; BB(0x004dc821);
    /* 004dc821: mov dword ptr [esp + 0x78], ebp */ W32((u32)(r_esp+0x78u), r_ebp);
    /* 004dc825: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 004dc829: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004dc82d: mov ebx, eax */ r_ebx = r_eax;
    /* 004dc82f: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 004dc833: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
L_004dc837:; BB(0x004dc837);
    /* 004dc837: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc839: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4dc83eu); f_004d9604();
    /* 004dc83e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc83f: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004dc841: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004dc844: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dc847: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc849: jl 0x4dc837 */ if ((fS!=fO)) goto L_004dc837;
L_004dc84b:; BB(0x004dc84b);
    /* 004dc84b: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 004dc84f: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 004dc853: mov dword ptr [esp + 0x64], ebp */ W32((u32)(r_esp+0x64u), r_ebp);
    /* 004dc857: mov ebp, dword ptr [esp + 0x78] */ r_ebp = R32((u32)(r_esp+0x78u));
L_004dc85b:; BB(0x004dc85b);
    /* 004dc85b: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 004dc85f: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc862: call 0x4d9664 */ r_esp -= 4; W32(r_esp, 0x4dc867u); f_004d9664();
    /* 004dc867: mov edi, eax */ r_edi = r_eax;
    /* 004dc869: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004dc86d: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004dc871: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004dc875: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc876: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc877: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc878: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 004dc87c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc87d: call 0x4da01c */ r_esp -= 4; W32(r_esp, 0x4dc882u); f_004da01c();
    /* 004dc882: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004dc886: push dword ptr [edi*4 + 0x9b0ff4] */ { u32 v = R32((u32)(r_edi*4+0x9b0ff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc88d: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc891: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc895: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc899: push 0x909a04 */ { u32 v = 0x909a04u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc89e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc89f: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dc8a4u); f_00857e29();
    /* 004dc8a4: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 004dc8a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8a9: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8ae: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc8b3u); f_00857fc3();
    /* 004dc8b3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc8b6:; BB(0x004dc8b6);
    /* 004dc8b6: push 0x909a28 */ { u32 v = 0x909a28u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8bb: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8c0: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc8c5u); f_00857fc3();
    /* 004dc8c5: lea edi, [esp + 0x3c] */ r_edi = (u32)(r_esp+0x3cu);
    /* 004dc8c9: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 004dc8cd: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 004dc8d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8d5: call 0x4da01c */ r_esp -= 4; W32(r_esp, 0x4dc8dau); f_004da01c();
    /* 004dc8da: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 004dc8de: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc8e2: push dword ptr [esp + 0x4c] */ { u32 v = R32((u32)(r_esp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc8e6: push dword ptr [esp + 0x54] */ { u32 v = R32((u32)(r_esp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dc8ea: push 0x909a30 */ { u32 v = 0x909a30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8f0: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dc8f5u); f_00857e29();
    /* 004dc8f5: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 004dc8f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8fa: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8ff: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc904u); f_00857fc3();
    /* 004dc904: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc907:; BB(0x004dc907);
    /* 004dc907: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004dc90a: add esi, 0x144 */ {  u32 a = r_esi; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004dc910: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc913: jl 0x4dc763 */ if ((fS!=fO)) goto L_004dc763;
L_004dc919:; BB(0x004dc919);
    /* 004dc919: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 004dc91d: mov ecx, dword ptr [0xa48c2c] */ r_ecx = R32((u32)(0xa48c2cu));
    /* 004dc923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc925: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc92a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4dc92fu); f_0073ae38();
L_004dc92f:; BB(0x004dc92f);
    /* 004dc92f: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dc932: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dc933: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dc934: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dc935: ret 4 */ FN_RET(0x004dc6ac); r_esp += 8; return;
L_004dc938:; BB(0x004dc938);
    /* 004dc938: push 0x9099cc */ { u32 v = 0x9099ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc93d: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc942: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc947u); f_00857fc3();
    /* 004dc947: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc949: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dc94eu); f_007930dc();
    /* 004dc94e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc94f: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc954: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc959u); f_00857fc3();
    /* 004dc959: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc95e: push 0xa495e0 */ { u32 v = 0xa495e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc963: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dc968u); f_00857fc3();
    /* 004dc968: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc96b: jmp 0x4dc907 */ goto L_004dc907;
}

void f_004dc970(void) /* sub_4DC970 */
{
    FN_ENTER(0x004dc970);
    /* 004dc970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc972: mov dword ptr [0xa48c28], eax */ W32((u32)(0xa48c28u), r_eax);
    /* 004dc977: mov dword ptr [0xa48c2c], eax */ W32((u32)(0xa48c2cu), r_eax);
    /* 004dc97c: ret  */ FN_RET(0x004dc970); r_esp += 4; return;
}

void f_004dc9b4(void) /* sub_4DC9B4 */
{
    FN_ENTER(0x004dc9b4);
    /* 004dc9b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dc9b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc9b9: call 0x4dc9d8 */ r_esp -= 4; W32(r_esp, 0x4dc9beu); f_004dc9d8();
    /* 004dc9be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004dc9c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc9c4: jne 0x4dc9ca */ if (!fZ) goto L_004dc9ca;
L_004dc9c6:; BB(0x004dc9c6);
    /* 004dc9c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dc9c7: ret 4 */ FN_RET(0x004dc9b4); r_esp += 8; return;
L_004dc9ca:; BB(0x004dc9ca);
    /* 004dc9ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4dc9d0u); f_005c2f74();
    /* 004dc9d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dc9d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dc9d2: ret 4 */ FN_RET(0x004dc9b4); r_esp += 8; return;
}

void f_004dc9d8(void) /* sub_4DC9D8 */
{
    FN_ENTER(0x004dc9d8);
    /* 004dc9d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004dc9db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9dd: push 0x8d2424 */ { u32 v = 0x8d2424u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dc9e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dc9f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dc9f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dc9f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dc9f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dc9fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dc9ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004dca02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dca05: mov dword ptr [ecx], 0xafcdb0 */ W32((u32)(r_ecx), 0xafcdb0u);
    /* 004dca0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dca12: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4dca17u); f_008171e8();
    /* 004dca17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dca1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dca21: mov esp, ebp */ r_esp = r_ebp;
    /* 004dca23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dca24: ret  */ FN_RET(0x004dc9d8); r_esp += 4; return;
}

void f_004dca28(void) /* sub_4DCA28 */
{
    FN_ENTER(0x004dca28);
    /* 004dca28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dca29: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dca2a: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dca30: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dca32: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dca38: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dca3du); f_0068d5a8();
    /* 004dca3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dca3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dca40: je 0x4dcbd4 */ if (fZ) goto L_004dcbd4;
L_004dca46:; BB(0x004dca46);
    /* 004dca46: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004dca49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dca4b: je 0x4dca62 */ if (fZ) goto L_004dca62;
L_004dca4d:; BB(0x004dca4d);
    /* 004dca4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dca50: jne 0x4dcbcb */ if (!fZ) goto L_004dcbcb;
L_004dca56:; BB(0x004dca56);
    /* 004dca56: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dca58: call 0x4dcbec */ r_esp -= 4; W32(r_esp, 0x4dca5du); f_004dcbec();
    /* 004dca5d: jmp 0x4dcbcb */ goto L_004dcbcb;
L_004dca62:; BB(0x004dca62);
    /* 004dca62: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004dca65: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004dca69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dca6b: lea edi, [ebp + 0x28] */ r_edi = (u32)(r_ebp+0x28u);
    /* 004dca6e: mov ebx, eax */ r_ebx = r_eax;
L_004dca70:; BB(0x004dca70);
    /* 004dca70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dca71: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dca76u); f_0068d5a8();
    /* 004dca76: mov esi, eax */ r_esi = r_eax;
    /* 004dca78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dca7b: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 004dca7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dca80: jne 0x4dcaaa */ if (!fZ) goto L_004dcaaa;
L_004dca82:; BB(0x004dca82);
    /* 004dca82: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dca84: je 0x4dcaaa */ if (fZ) goto L_004dcaaa;
L_004dca86:; BB(0x004dca86);
    /* 004dca86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dca87: call 0x4da0fc */ r_esp -= 4; W32(r_esp, 0x4dca8cu); f_004da0fc();
    /* 004dca8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dca8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dca8f: je 0x4dcaaa */ if (fZ) goto L_004dcaaa;
L_004dca91:; BB(0x004dca91);
    /* 004dca91: mov ecx, esi */ r_ecx = r_esi;
    /* 004dca93: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x4dca98u); f_006936b4();
    /* 004dca98: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004dca9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dca9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dca9c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4dcaa1u); f_00857dec();
    /* 004dcaa1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcaa4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004dcaa6: mov word ptr [edi + 0x1e], dx */ W16((u32)(r_edi+0x1eu), (u16)r_edx);
L_004dcaaa:; BB(0x004dcaaa);
    /* 004dcaaa: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dcaad: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004dcab0: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dcab3: jl 0x4dca70 */ if ((fS!=fO)) goto L_004dca70;
L_004dcab5:; BB(0x004dcab5);
    /* 004dcab5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004dcab8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 004dcabc: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dcac2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dcac7u); f_0068d5a8();
    /* 004dcac7: mov edi, eax */ r_edi = r_eax;
    /* 004dcac9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcacc: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x4dcad1u); f_00807e10();
    /* 004dcad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcad3: je 0x4dcbcb */ if (fZ) goto L_004dcbcb;
L_004dcad9:; BB(0x004dcad9);
    /* 004dcad9: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4dcadeu); f_00719914();
    /* 004dcade: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcae0: je 0x4dcbcb */ if (fZ) goto L_004dcbcb;
L_004dcae6:; BB(0x004dcae6);
    /* 004dcae6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcae8: je 0x4dcbcb */ if (fZ) goto L_004dcbcb;
L_004dcaee:; BB(0x004dcaee);
    /* 004dcaee: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004dcaf1: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcaf6: jne 0x4dcbcb */ if (!fZ) goto L_004dcbcb;
L_004dcafc:; BB(0x004dcafc);
    /* 004dcafc: movzx eax, byte ptr [0xa49800] */ r_eax = (u32)R8((u32)(0xa49800u));
    /* 004dcb03: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dcb05: jne 0x4dcb25 */ if (!fZ) goto L_004dcb25;
L_004dcb07:; BB(0x004dcb07);
    /* 004dcb07: mov dword ptr [0xa49804], 0x43520000 */ W32((u32)(0xa49804u), 0x43520000u);
    /* 004dcb11: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dcb16: mov byte ptr [0xa49800], al */ W8((u32)(0xa49800u), (u8)r_eax);
    /* 004dcb1b: mov dword ptr [0xa49808], 0x42c80000 */ W32((u32)(0xa49808u), 0x42c80000u);
L_004dcb25:; BB(0x004dcb25);
    /* 004dcb25: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb27: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dcb2cu); f_0073ec50();
    /* 004dcb2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb2e: push 0xa49804 */ { u32 v = 0xa49804u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb34: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4dcb39u); f_0073a8dc();
    /* 004dcb39: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcb3c: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 004dcb3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcb41: je 0x4dcbc4 */ if (fZ) goto L_004dcbc4;
L_004dcb47:; BB(0x004dcb47);
    /* 004dcb47: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 004dcb4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dcb4d: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 004dcb52: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb58: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dcb5du); f_00857fc3();
    /* 004dcb5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcb60: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004dcb63: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004dcb67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004dcb69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dcb6b: lea edi, [ebp + 0x28] */ r_edi = (u32)(r_ebp+0x28u);
    /* 004dcb6e: mov ebx, eax */ r_ebx = r_eax;
    /* 004dcb70: mov esi, edx */ r_esi = r_edx;
L_004dcb72:; BB(0x004dcb72);
    /* 004dcb72: movzx ecx, word ptr [ebx + ebp + 0x28] */ r_ecx = (u32)R16((u32)(r_ebx+r_ebp+0x28u));
    /* 004dcb77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcb79: je 0x4dcba0 */ if (fZ) goto L_004dcba0;
L_004dcb7b:; BB(0x004dcb7b);
    /* 004dcb7b: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004dcb7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb81: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dcb86u); f_00857fc3();
    /* 004dcb86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcb89: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcb8c: je 0x4dcba0 */ if (fZ) goto L_004dcba0;
L_004dcb8e:; BB(0x004dcb8e);
    /* 004dcb8e: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 004dcb92: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb98: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4dcb9du); f_00857fc3();
    /* 004dcb9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dcba0:; BB(0x004dcba0);
    /* 004dcba0: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004dcba3: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dcba6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004dcba9: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dcbac: jl 0x4dcb72 */ if ((fS!=fO)) goto L_004dcb72;
L_004dcbae:; BB(0x004dcbae);
    /* 004dcbae: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004dcbb1: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 004dcbb5: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004dcbb9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbbb: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004dcbbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbbf: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4dcbc4u); f_0073ae38();
L_004dcbc4:; BB(0x004dcbc4);
    /* 004dcbc4: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
L_004dcbcb:; BB(0x004dcbcb);
    /* 004dcbcb: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dcbd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dcbd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dcbd3: ret  */ FN_RET(0x004dca28); r_esp += 4; return;
L_004dcbd4:; BB(0x004dcbd4);
    /* 004dcbd4: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004dcbd8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dcbdd: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004dcbe1: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dcbe7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dcbe8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dcbe9: ret  */ FN_RET(0x004dca28); r_esp += 4; return;
}

void f_004dcbec(void) /* sub_4DCBEC */
{
    FN_ENTER(0x004dcbec);
    /* 004dcbec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dcbef: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dcbf5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dcbfau); f_0068d5a8();
    /* 004dcbfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dcbfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcbfd: je 0x4dcc61 */ if (fZ) goto L_004dcc61;
L_004dcbff:; BB(0x004dcbff);
    /* 004dcbff: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004dcc02: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcc08: jne 0x4dcc61 */ if (!fZ) goto L_004dcc61;
L_004dcc0a:; BB(0x004dcc0a);
    /* 004dcc0a: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 004dcc10: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dcc12: je 0x4dcc1b */ if (fZ) goto L_004dcc1b;
L_004dcc14:; BB(0x004dcc14);
    /* 004dcc14: mov eax, 1 */ r_eax = 0x1u;
    /* 004dcc19: jmp 0x4dcc1d */ goto L_004dcc1d;
L_004dcc1b:; BB(0x004dcc1b);
    /* 004dcc1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004dcc1d:; BB(0x004dcc1d);
    /* 004dcc1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcc1f: jne 0x4dcc30 */ if (!fZ) goto L_004dcc30;
L_004dcc21:; BB(0x004dcc21);
    /* 004dcc21: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004dcc24: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dcc27: jle 0x4dcc33 */ if ((fZ||fS!=fO)) goto L_004dcc33;
L_004dcc29:; BB(0x004dcc29);
    /* 004dcc29: mov eax, 0x5a */ r_eax = 0x5au;
    /* 004dcc2e: jmp 0x4dcc33 */ goto L_004dcc33;
L_004dcc30:; BB(0x004dcc30);
    /* 004dcc30: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
L_004dcc33:; BB(0x004dcc33);
    /* 004dcc33: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dcc36: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 004dcc39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcc3b: jge 0x4dcc5f */ if ((fS==fO)) goto L_004dcc5f;
L_004dcc3d:; BB(0x004dcc3d);
    /* 004dcc3d: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004dcc40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcc42: je 0x4dcc50 */ if (fZ) goto L_004dcc50;
L_004dcc44:; BB(0x004dcc44);
    /* 004dcc44: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dcc49u); f_007127b0();
    /* 004dcc49: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
L_004dcc50:; BB(0x004dcc50);
    /* 004dcc50: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004dcc54: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcc59: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004dcc5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcc5e: ret  */ FN_RET(0x004dcbec); r_esp += 4; return;
L_004dcc5f:; BB(0x004dcc5f);
    /* 004dcc5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcc60: ret  */ FN_RET(0x004dcbec); r_esp += 4; return;
L_004dcc61:; BB(0x004dcc61);
    /* 004dcc61: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004dcc65: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcc6a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004dcc6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcc6f: ret  */ FN_RET(0x004dcbec); r_esp += 4; return;
}

void f_004dcc70(void) /* sub_4DCC70 */
{
    FN_ENTER(0x004dcc70);
    /* 004dcc70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc71: mov ebp, esp */ r_ebp = r_esp;
    /* 004dcc73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc75: push 0x8d244c */ { u32 v = 0x8d244cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dcc80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dcc88: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dcc8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dcc8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004dcc91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004dcc94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004dcc97: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc9c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004dcca3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4dcca8u); f_005caba4();
    /* 004dcca8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004dccab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dccae: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004dccb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dccb3: je 0x4dcd14 */ if (fZ) goto L_004dcd14;
L_004dccb5:; BB(0x004dccb5);
    /* 004dccb5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004dccbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dccc3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dccc6: mov ecx, eax */ r_ecx = r_eax;
    /* 004dccc8: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4dcccdu); f_008193cc();
    /* 004dcccd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004dccd0: mov dword ptr [edx], 0xafcdb0 */ W32((u32)(r_edx), 0xafcdb0u);
    /* 004dccd6: mov eax, dword ptr [0x9b1004] */ r_eax = R32((u32)(0x9b1004u));
    /* 004dccdb: mov dword ptr [edx + 0x24], 0x12c */ W32((u32)(r_edx+0x24u), 0x12cu);
    /* 004dcce2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004dcce5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcce7: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004dccea: mov word ptr [edx + 0x28], cx */ W16((u32)(r_edx+0x28u), (u16)r_ecx);
    /* 004dccee: mov word ptr [edx + 0x48], cx */ W16((u32)(r_edx+0x48u), (u16)r_ecx);
    /* 004dccf2: mov word ptr [edx + 0x68], cx */ W16((u32)(r_edx+0x68u), (u16)r_ecx);
    /* 004dccf6: mov word ptr [edx + 0x88], cx */ W16((u32)(r_edx+0x88u), (u16)r_ecx);
    /* 004dccfd: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 004dcd00: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_004dcd03:; BB(0x004dcd03);
    /* 004dcd03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004dcd06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dcd09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dcd10: mov esp, ebp */ r_esp = r_ebp;
    /* 004dcd12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dcd13: ret  */ FN_RET(0x004dcc70); r_esp += 4; return;
L_004dcd14:; BB(0x004dcd14);
    /* 004dcd14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcd16: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004dcd19: jmp 0x4dcd03 */ goto L_004dcd03;
}

void f_004dcd1c(void) /* sub_4DCD1C */
{
    FN_ENTER(0x004dcd1c);
    /* 004dcd1c: mov dword ptr [0xa4980c], 0x3f800000 */ W32((u32)(0xa4980cu), 0x3f800000u);
    /* 004dcd26: mov dword ptr [0xa49810], 0x41000000 */ W32((u32)(0xa49810u), 0x41000000u);
    /* 004dcd30: mov dword ptr [0xa49814], 0x3fc00000 */ W32((u32)(0xa49814u), 0x3fc00000u);
    /* 004dcd3a: ret  */ FN_RET(0x004dcd1c); r_esp += 4; return;
}

void f_004dcd3c(void) /* sub_4DCD3C */
{
    FN_ENTER(0x004dcd3c);
    /* 004dcd3c: mov dword ptr [0xa4981c], 0x3f800000 */ W32((u32)(0xa4981cu), 0x3f800000u);
    /* 004dcd46: mov dword ptr [0xa49820], 0x41000000 */ W32((u32)(0xa49820u), 0x41000000u);
    /* 004dcd50: mov dword ptr [0xa49824], 0x3fc00000 */ W32((u32)(0xa49824u), 0x3fc00000u);
    /* 004dcd5a: ret  */ FN_RET(0x004dcd3c); r_esp += 4; return;
}

void f_004dcd5c(void) /* sub_4DCD5C */
{
    FN_ENTER(0x004dcd5c);
    /* 004dcd5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dcd5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dcd61: call 0x4dcd80 */ r_esp -= 4; W32(r_esp, 0x4dcd66u); f_004dcd80();
    /* 004dcd66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004dcd6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcd6c: jne 0x4dcd72 */ if (!fZ) goto L_004dcd72;
L_004dcd6e:; BB(0x004dcd6e);
    /* 004dcd6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcd6f: ret 4 */ FN_RET(0x004dcd5c); r_esp += 8; return;
L_004dcd72:; BB(0x004dcd72);
    /* 004dcd72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4dcd78u); f_005c2f74();
    /* 004dcd78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dcd79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcd7a: ret 4 */ FN_RET(0x004dcd5c); r_esp += 8; return;
}

void f_004dcd80(void) /* sub_4DCD80 */
{
    FN_ENTER(0x004dcd80);
    /* 004dcd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd81: mov ebp, esp */ r_ebp = r_esp;
    /* 004dcd83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd85: push 0x8d2468 */ { u32 v = 0x8d2468u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dcd90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dcd98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dcd9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dcd9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dcda1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dcda4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dcda7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004dcdaa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dcdad: mov dword ptr [ecx], 0xafce10 */ W32((u32)(r_ecx), 0xafce10u);
    /* 004dcdb3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dcdba: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4dcdbfu); f_008171e8();
    /* 004dcdbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dcdc2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dcdc9: mov esp, ebp */ r_esp = r_ebp;
    /* 004dcdcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dcdcc: ret  */ FN_RET(0x004dcd80); r_esp += 4; return;
}

void f_004dcdd0(void) /* sub_4DCDD0 */
{
    FN_ENTER(0x004dcdd0);
    /* 004dcdd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dcdd1: mov edi, ecx */ r_edi = r_ecx;
    /* 004dcdd3: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004dcdd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcdd8: je 0x4dce03 */ if (fZ) goto L_004dce03;
L_004dcdda:; BB(0x004dcdda);
    /* 004dcdda: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcddd: jne 0x4dcdef */ if (!fZ) goto L_004dcdef;
L_004dcddf:; BB(0x004dcddf);
    /* 004dcddf: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 004dcde2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dcde5: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004dcde8: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dcdeb: jne 0x4dce0a */ if (!fZ) goto L_004dce0a;
L_004dcded:; BB(0x004dcded);
    /* 004dcded: jmp 0x4dce0c */ goto L_004dce0c;
L_004dcdef:; BB(0x004dcdef);
    /* 004dcdef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dcdf2: jne 0x4dce0a */ if (!fZ) goto L_004dce0a;
L_004dcdf4:; BB(0x004dcdf4);
    /* 004dcdf4: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 004dcdf7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dcdfa: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004dcdfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcdff: jg 0x4dce0a */ if ((!fZ&&fS==fO)) goto L_004dce0a;
L_004dce01:; BB(0x004dce01);
    /* 004dce01: jmp 0x4dce50 */ goto L_004dce50;
L_004dce03:; BB(0x004dce03);
    /* 004dce03: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004dce06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dce08: je 0x4dce28 */ if (fZ) goto L_004dce28;
L_004dce0a:; BB(0x004dce0a);
    /* 004dce0a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dce0b: ret  */ FN_RET(0x004dcdd0); r_esp += 4; return;
L_004dce0c:; BB(0x004dce0c);
    /* 004dce0c: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 004dce0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dce11: je 0x4dce1f */ if (fZ) goto L_004dce1f;
L_004dce13:; BB(0x004dce13);
    /* 004dce13: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dce18u); f_007127b0();
    /* 004dce18: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
L_004dce1f:; BB(0x004dce1f);
    /* 004dce1f: mov dword ptr [edi + 0x1c], 2 */ W32((u32)(r_edi+0x1cu), 0x2u);
    /* 004dce26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dce27: ret  */ FN_RET(0x004dcdd0); r_esp += 4; return;
L_004dce28:; BB(0x004dce28);
    /* 004dce28: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4dce2du); f_00719914();
    /* 004dce2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dce2f: jne 0x4dce40 */ if (!fZ) goto L_004dce40;
L_004dce31:; BB(0x004dce31);
    /* 004dce31: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004dce34: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dce37: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004dce3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dce3c: jle 0x4dce5f */ if ((fZ||fS!=fO)) goto L_004dce5f;
L_004dce3e:; BB(0x004dce3e);
    /* 004dce3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dce3f: ret  */ FN_RET(0x004dcdd0); r_esp += 4; return;
L_004dce40:; BB(0x004dce40);
    /* 004dce40: mov ecx, edi */ r_ecx = r_edi;
    /* 004dce42: call 0x4dce70 */ r_esp -= 4; W32(r_esp, 0x4dce47u); f_004dce70();
    /* 004dce47: mov dword ptr [edi + 0x1c], 1 */ W32((u32)(r_edi+0x1cu), 0x1u);
    /* 004dce4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dce4f: ret  */ FN_RET(0x004dcdd0); r_esp += 4; return;
L_004dce50:; BB(0x004dce50);
    /* 004dce50: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004dce54: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dce59: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004dce5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dce5e: ret  */ FN_RET(0x004dcdd0); r_esp += 4; return;
L_004dce5f:; BB(0x004dce5f);
    /* 004dce5f: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004dce63: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dce68: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004dce6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dce6d: ret  */ FN_RET(0x004dcdd0); r_esp += 4; return;
}

void f_004dce70(void) /* sub_4DCE70 */
{
    FN_ENTER(0x004dce70);
    /* 004dce70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dce71: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dce72: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dce74: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 004dce76: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dce7bu); f_0073ec50();
    /* 004dce7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dce7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dce7e: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x4dce83u); f_00735708();
    /* 004dce83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dce86: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 004dce89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dce8b: je 0x4dcee6 */ if (fZ) goto L_004dcee6;
L_004dce8d:; BB(0x004dce8d);
    /* 004dce8d: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 004dce8f: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dce94u); f_007930dc();
    /* 004dce94: push dword ptr [0xaafc94] */ { u32 v = R32((u32)(0xaafc94u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dce9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dce9b: lea ebx, [ebp + 0x2c] */ r_ebx = (u32)(r_ebp+0x2cu);
    /* 004dce9e: push 0x909b2c */ { u32 v = 0x909b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcea3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcea4: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x4dcea9u); f_00857e29();
    /* 004dcea9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dceac: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004dceaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dceb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dceb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dceb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dceb4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x4dceb9u); f_00735c90();
    /* 004dceb9: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004dcebc: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x4dcec1u); f_0073608c();
    /* 004dcec1: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004dcec4: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 004dcecb: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dced0: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 004dced7: call 0x717e84 */ r_esp -= 4; W32(r_esp, 0x4dcedcu); f_00717e84();
    /* 004dcedc: call 0x717e84 */ r_esp -= 4; W32(r_esp, 0x4dcee1u); f_00717e84();
    /* 004dcee1: call 0x717e64 */ r_esp -= 4; W32(r_esp, 0x4dcee6u); f_00717e64();
L_004dcee6:; BB(0x004dcee6);
    /* 004dcee6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcee7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dcee8: ret  */ FN_RET(0x004dce70); r_esp += 4; return;
}

void f_004dceec(void) /* sub_4DCEEC */
{
    FN_ENTER(0x004dceec);
    /* 004dceec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dceed: mov ebp, esp */ r_ebp = r_esp;
    /* 004dceef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcef1: push 0x8d2490 */ { u32 v = 0x8d2490u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dcefc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcefd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dcf04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dcf07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dcf0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dcf0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dcf10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dcf13: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf15: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004dcf1c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4dcf21u); f_005caba4();
    /* 004dcf21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dcf22: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004dcf25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dcf27: je 0x4dcf5a */ if (fZ) goto L_004dcf5a;
L_004dcf29:; BB(0x004dcf29);
    /* 004dcf29: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004dcf30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dcf37: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dcf3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dcf3d: call 0x4dcf60 */ r_esp -= 4; W32(r_esp, 0x4dcf42u); f_004dcf60();
    /* 004dcf42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dcf45: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004dcf4c:; BB(0x004dcf4c);
    /* 004dcf4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dcf4f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dcf56: mov esp, ebp */ r_esp = r_ebp;
    /* 004dcf58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dcf59: ret  */ FN_RET(0x004dceec); r_esp += 4; return;
L_004dcf5a:; BB(0x004dcf5a);
    /* 004dcf5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcf5c: jmp 0x4dcf4c */ goto L_004dcf4c;
}

void f_004dcf60(void) /* sub_4DCF60 */
{
    FN_ENTER(0x004dcf60);
    /* 004dcf60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf61: mov edi, ecx */ r_edi = r_ecx;
    /* 004dcf63: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dcf67: mov ecx, edi */ r_ecx = r_edi;
    /* 004dcf69: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4dcf6eu); f_008193cc();
    /* 004dcf6e: mov dword ptr [edi], 0xafce10 */ W32((u32)(r_edi), 0xafce10u);
    /* 004dcf74: mov edx, dword ptr [0x9b101c] */ r_edx = R32((u32)(0x9b101cu));
    /* 004dcf7a: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004dcf7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcf7f: mov dword ptr [edi + 0x24], 0x1c2 */ W32((u32)(r_edi+0x24u), 0x1c2u);
    /* 004dcf86: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004dcf89: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004dcf8c: mov eax, edi */ r_eax = r_edi;
    /* 004dcf8e: mov dword ptr [edi + 0x28], 0x96 */ W32((u32)(r_edi+0x28u), 0x96u);
    /* 004dcf95: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dcf96: ret 4 */ FN_RET(0x004dcf60); r_esp += 8; return;
}

void f_004dcf9c(void) /* sub_4DCF9C */
{
    FN_ENTER(0x004dcf9c);
    /* 004dcf9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dcf9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dcfa1: call 0x4dcfc0 */ r_esp -= 4; W32(r_esp, 0x4dcfa6u); f_004dcfc0();
    /* 004dcfa6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004dcfaa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dcfac: jne 0x4dcfb2 */ if (!fZ) goto L_004dcfb2;
L_004dcfae:; BB(0x004dcfae);
    /* 004dcfae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcfaf: ret 4 */ FN_RET(0x004dcf9c); r_esp += 8; return;
L_004dcfb2:; BB(0x004dcfb2);
    /* 004dcfb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfb3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4dcfb8u); f_005c2f74();
    /* 004dcfb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dcfb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dcfba: ret 4 */ FN_RET(0x004dcf9c); r_esp += 8; return;
}

void f_004dcfc0(void) /* sub_4DCFC0 */
{
    FN_ENTER(0x004dcfc0);
    /* 004dcfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004dcfc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfc5: push 0x8d24ac */ { u32 v = 0x8d24acu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dcfd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dcfd8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dcfdb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dcfde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dcfe1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dcfe4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dcfe7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004dcfea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dcfed: mov dword ptr [ecx], 0xafce98 */ W32((u32)(r_ecx), 0xafce98u);
    /* 004dcff3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dcffa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4dcfffu); f_008171e8();
    /* 004dcfff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dd002: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dd009: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd00b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd00c: ret  */ FN_RET(0x004dcfc0); r_esp += 4; return;
}

