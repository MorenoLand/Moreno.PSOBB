#include "protos.h"

void f_0067e000(void) /* sub_67E000 */
{
    FN_ENTER(0x0067e000);
    /* 0067e000: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0067e004: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067e007: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e009: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e00b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e00d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e00f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e011: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067e013: lea eax, [ecx + ecx + 0x9cb4e0] */ r_eax = (u32)(r_ecx+r_ecx+0x9cb4e0u);
    /* 0067e01a: ret  */ FN_RET(0x0067e000); r_esp += 4; return;
}

void f_0067e01c(void) /* sub_67E01C */
{
    FN_ENTER(0x0067e01c);
    /* 0067e01c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e01e: push 0x9cb600 */ { u32 v = 0x9cb600u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e023: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x67e028u); f_0078b0a0();
    /* 0067e028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e02b: mov ecx, dword ptr [0xa9049c] */ r_ecx = R32((u32)(0xa9049cu));
    /* 0067e031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e033: je 0x67e048 */ if (fZ) goto L_0067e048;
L_0067e035:; BB(0x0067e035);
    /* 0067e035: je 0x67e03e */ if (fZ) goto L_0067e03e;
L_0067e037:; BB(0x0067e037);
    /* 0067e037: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e039: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x67e03eu); f_004066a8();
L_0067e03e:; BB(0x0067e03e);
    /* 0067e03e: mov dword ptr [0xa9049c], 0 */ W32((u32)(0xa9049cu), 0x0u);
L_0067e048:; BB(0x0067e048);
    /* 0067e048: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067e04a: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067e04f: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067e054: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067e059: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067e05e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0067e060:; BB(0x0067e060);
    /* 0067e060: mov dword ptr [eax + 0xa90420], 0 */ W32((u32)(r_eax+0xa90420u), 0x0u);
    /* 0067e06a: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0067e06f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067e074: mov dword ptr [eax + 0xa90400], edx */ W32((u32)(r_eax+0xa90400u), r_edx);
    /* 0067e07a: mov dword ptr [eax + 0xa90410], ecx */ W32((u32)(r_eax+0xa90410u), r_ecx);
    /* 0067e080: mov dword ptr [eax + 0xa90404], edx */ W32((u32)(r_eax+0xa90404u), r_edx);
    /* 0067e086: mov dword ptr [eax + 0xa90414], ecx */ W32((u32)(r_eax+0xa90414u), r_ecx);
    /* 0067e08c: mov dword ptr [eax + 0xa90408], edx */ W32((u32)(r_eax+0xa90408u), r_edx);
    /* 0067e092: mov dword ptr [eax + 0xa90418], ecx */ W32((u32)(r_eax+0xa90418u), r_ecx);
    /* 0067e098: mov dword ptr [eax + 0xa9040c], edx */ W32((u32)(r_eax+0xa9040cu), r_edx);
    /* 0067e09e: mov dword ptr [eax + 0xa9041c], ecx */ W32((u32)(r_eax+0xa9041cu), r_ecx);
    /* 0067e0a4: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e0a7: cmp eax, 0x90 */ {  u32 a = r_eax; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067e0ac: jl 0x67e060 */ if ((fS!=fO)) goto L_0067e060;
L_0067e0ae:; BB(0x0067e0ae);
    /* 0067e0ae: ret  */ FN_RET(0x0067e01c); r_esp += 4; return;
}

void f_0067e0b0(void) /* sub_67E0B0 */
{
    FN_ENTER(0x0067e0b0);
    /* 0067e0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067e0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0067e0b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e0b5: push 0x8ea33a */ { u32 v = 0x8ea33au; r_esp -= 4; W32(r_esp, v); }
    /* 0067e0ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067e0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e0c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067e0c8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067e0cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067e0ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067e0d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067e0d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067e0d7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0067e0da: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e0dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e0de: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e0e3u); f_0068d5a8();
    /* 0067e0e3: mov ebx, eax */ r_ebx = r_eax;
    /* 0067e0e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e0e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e0ea: je 0x67e23c */ if (fZ) goto L_0067e23c;
L_0067e0f0:; BB(0x0067e0f0);
    /* 0067e0f0: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0067e0f7: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0067e0fa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067e0fc: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067e0fe: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067e100: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067e102: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067e104: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e107: jne 0x67e119 */ if (!fZ) goto L_0067e119;
L_0067e109:; BB(0x0067e109);
    /* 0067e109: movsx edx, word ptr [edi*4 + 0x9cb500] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi*4+0x9cb500u));
    /* 0067e111: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e112: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067e114: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x67e119u); f_006854a8();
L_0067e119:; BB(0x0067e119);
    /* 0067e119: push 0x13d */ { u32 v = 0x13du; r_esp -= 4; W32(r_esp, v); }
    /* 0067e11e: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e121: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e122: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x67e127u); f_0050b510();
    /* 0067e127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e129: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x67e12eu); f_004d4288();
    /* 0067e12e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e131: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e134: je 0x67e2e4 */ if (fZ) goto L_0067e2e4;
L_0067e13a:; BB(0x0067e13a);
    /* 0067e13a: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e13d: je 0x67e29a */ if (fZ) goto L_0067e29a;
L_0067e143:; BB(0x0067e143);
    /* 0067e143: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e146: je 0x67e253 */ if (fZ) goto L_0067e253;
L_0067e14c:; BB(0x0067e14c);
    /* 0067e14c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e14e: je 0x67e1f7 */ if (fZ) goto L_0067e1f7;
L_0067e154:; BB(0x0067e154);
    /* 0067e154: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e157: jne 0x67e1a7 */ if (!fZ) goto L_0067e1a7;
L_0067e159:; BB(0x0067e159);
    /* 0067e159: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0067e160: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e165: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e16au); f_005caba4();
    /* 0067e16a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e16b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067e16e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e170: je 0x67e23c */ if (fZ) goto L_0067e23c;
L_0067e176:; BB(0x0067e176);
    /* 0067e176: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0067e17d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067e184: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e187: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067e18a: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0067e18d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e18e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e190: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067e196: call 0x6830e0 */ r_esp -= 4; W32(r_esp, 0x67e19bu); f_006830e0();
    /* 0067e19b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0067e1a2: jmp 0x67e23c */ goto L_0067e23c;
L_0067e1a7:; BB(0x0067e1a7);
    /* 0067e1a7: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067e1aa: jne 0x67e23c */ if (!fZ) goto L_0067e23c;
L_0067e1b0:; BB(0x0067e1b0);
    /* 0067e1b0: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0067e1b7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e1bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e1c1u); f_005caba4();
    /* 0067e1c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e1c2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067e1c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e1c7: je 0x67e23c */ if (fZ) goto L_0067e23c;
L_0067e1c9:; BB(0x0067e1c9);
    /* 0067e1c9: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0067e1d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067e1d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e1da: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067e1dd: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0067e1e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e1e1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e1e3: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067e1e9: call 0x6830e0 */ r_esp -= 4; W32(r_esp, 0x67e1eeu); f_006830e0();
    /* 0067e1ee: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0067e1f5: jmp 0x67e23c */ goto L_0067e23c;
L_0067e1f7:; BB(0x0067e1f7);
    /* 0067e1f7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0067e1fe: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e203: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e208u); f_005caba4();
    /* 0067e208: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e209: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067e20c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e20e: je 0x67e23c */ if (fZ) goto L_0067e23c;
L_0067e210:; BB(0x0067e210);
    /* 0067e210: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0067e217: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067e21e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e221: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067e224: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0067e227: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e228: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e22a: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067e230: call 0x6830e0 */ r_esp -= 4; W32(r_esp, 0x67e235u); f_006830e0();
    /* 0067e235: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0067e23c:; BB(0x0067e23c);
    /* 0067e23c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067e23f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e242: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e245: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067e248: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067e24f: mov esp, ebp */ r_esp = r_ebp;
    /* 0067e251: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067e252: ret  */ FN_RET(0x0067e0b0); r_esp += 4; return;
L_0067e253:; BB(0x0067e253);
    /* 0067e253: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0067e25a: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e25f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e264u); f_005caba4();
    /* 0067e264: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e265: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067e268: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e26a: je 0x67e23c */ if (fZ) goto L_0067e23c;
L_0067e26c:; BB(0x0067e26c);
    /* 0067e26c: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0067e273: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067e27a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e27d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067e280: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0067e283: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e284: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e286: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067e28c: call 0x6830e0 */ r_esp -= 4; W32(r_esp, 0x67e291u); f_006830e0();
    /* 0067e291: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0067e298: jmp 0x67e23c */ goto L_0067e23c;
L_0067e29a:; BB(0x0067e29a);
    /* 0067e29a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067e2a1: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2a6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e2abu); f_005caba4();
    /* 0067e2ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e2ac: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067e2af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e2b1: je 0x67e23c */ if (fZ) goto L_0067e23c;
L_0067e2b3:; BB(0x0067e2b3);
    /* 0067e2b3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067e2ba: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067e2c1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e2c4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067e2c7: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0067e2ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2cb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2cd: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067e2d3: call 0x6830e0 */ r_esp -= 4; W32(r_esp, 0x67e2d8u); f_006830e0();
    /* 0067e2d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067e2df: jmp 0x67e23c */ goto L_0067e23c;
L_0067e2e4:; BB(0x0067e2e4);
    /* 0067e2e4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0067e2eb: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e2f0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e2f5u); f_005caba4();
    /* 0067e2f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e2f6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067e2f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e2fb: je 0x67e23c */ if (fZ) goto L_0067e23c;
L_0067e301:; BB(0x0067e301);
    /* 0067e301: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0067e308: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067e30f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e312: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067e315: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0067e318: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e319: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e31b: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067e321: call 0x6830e0 */ r_esp -= 4; W32(r_esp, 0x67e326u); f_006830e0();
    /* 0067e326: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0067e32d: jmp 0x67e23c */ goto L_0067e23c;
}

void f_0067e334(void) /* sub_67E334 */
{
    FN_ENTER(0x0067e334);
    /* 0067e334: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0067e338: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067e33c: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 0067e33f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e341: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 0067e344: mov ecx, dword ptr [ecx + 0xa90420] */ r_ecx = R32((u32)(r_ecx+0xa90420u));
    /* 0067e34a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e34c: je 0x67e3ad */ if (fZ) goto L_0067e3ad;
L_0067e34e:; BB(0x0067e34e);
    /* 0067e34e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067e351: je 0x67e3b0 */ if (fZ) goto L_0067e3b0;
L_0067e353:; BB(0x0067e353);
    /* 0067e353: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067e356: jne 0x67e3ad */ if (!fZ) goto L_0067e3ad;
L_0067e358:; BB(0x0067e358);
    /* 0067e358: mov ecx, dword ptr [eax + eax*8 + 0xa90400] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90400u));
    /* 0067e35f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0067e361: mov ecx, dword ptr [eax + eax*8 + 0xa90410] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90410u));
    /* 0067e368: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0067e36b: mov ecx, dword ptr [eax + eax*8 + 0xa90404] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90404u));
    /* 0067e372: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067e375: mov ecx, dword ptr [eax + eax*8 + 0xa90414] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90414u));
    /* 0067e37c: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0067e37f: mov ecx, dword ptr [eax + eax*8 + 0xa90408] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90408u));
    /* 0067e386: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0067e389: mov ecx, dword ptr [eax + eax*8 + 0xa90418] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90418u));
    /* 0067e390: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0067e393: mov ecx, dword ptr [eax + eax*8 + 0xa9040c] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa9040cu));
    /* 0067e39a: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0067e39d: mov eax, dword ptr [eax + eax*8 + 0xa9041c] */ r_eax = R32((u32)(r_eax+r_eax*8+0xa9041cu));
    /* 0067e3a4: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0067e3a7: mov eax, 1 */ r_eax = 0x1u;
    /* 0067e3ac: ret  */ FN_RET(0x0067e334); r_esp += 4; return;
L_0067e3ad:; BB(0x0067e3ad);
    /* 0067e3ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e3af: ret  */ FN_RET(0x0067e334); r_esp += 4; return;
L_0067e3b0:; BB(0x0067e3b0);
    /* 0067e3b0: mov ecx, dword ptr [eax + eax*8 + 0xa90400] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90400u));
    /* 0067e3b7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0067e3b9: mov ecx, dword ptr [eax + eax*8 + 0xa90410] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90410u));
    /* 0067e3c0: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0067e3c3: mov ecx, dword ptr [eax + eax*8 + 0xa90404] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90404u));
    /* 0067e3ca: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067e3cd: mov ecx, dword ptr [eax + eax*8 + 0xa90414] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90414u));
    /* 0067e3d4: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0067e3d7: mov ecx, dword ptr [eax + eax*8 + 0xa90408] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90408u));
    /* 0067e3de: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0067e3e1: mov ecx, dword ptr [eax + eax*8 + 0xa90418] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90418u));
    /* 0067e3e8: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0067e3eb: mov ecx, dword ptr [eax + eax*8 + 0xa9040c] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa9040cu));
    /* 0067e3f2: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0067e3f5: mov eax, dword ptr [eax + eax*8 + 0xa9041c] */ r_eax = R32((u32)(r_eax+r_eax*8+0xa9041cu));
    /* 0067e3fc: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0067e3ff: mov eax, 2 */ r_eax = 0x2u;
    /* 0067e404: ret  */ FN_RET(0x0067e334); r_esp += 4; return;
}

void f_0067e408(void) /* sub_67E408 */
{
    FN_ENTER(0x0067e408);
    /* 0067e408: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e409: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e40a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067e40d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067e40f: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 0067e415: mov ebx, eax */ r_ebx = r_eax;
    /* 0067e417: mov esi, edx */ r_esi = r_edx;
L_0067e419:; BB(0x0067e419);
    /* 0067e419: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e41a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e41fu); f_0068d5a8();
    /* 0067e41f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e420: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e422: je 0x67e4a3 */ if (fZ) goto L_0067e4a3;
L_0067e428:; BB(0x0067e428);
    /* 0067e428: cmp esi, dword ptr [eax + 0x3f0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e42e: jne 0x67e4a3 */ if (!fZ) goto L_0067e4a3;
L_0067e430:; BB(0x0067e430);
    /* 0067e430: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0067e433: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e435: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 0067e438: mov ecx, dword ptr [ecx + 0xa90420] */ r_ecx = R32((u32)(r_ecx+0xa90420u));
    /* 0067e43e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e440: je 0x67e4a3 */ if (fZ) goto L_0067e4a3;
L_0067e442:; BB(0x0067e442);
    /* 0067e442: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e445: je 0x67e4b7 */ if (fZ) goto L_0067e4b7;
L_0067e447:; BB(0x0067e447);
    /* 0067e447: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e44a: jne 0x67e4a3 */ if (!fZ) goto L_0067e4a3;
L_0067e44c:; BB(0x0067e44c);
    /* 0067e44c: mov ecx, dword ptr [eax + eax*8 + 0xa90400] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90400u));
    /* 0067e453: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067e456: mov ecx, dword ptr [eax + eax*8 + 0xa90410] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90410u));
    /* 0067e45d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067e461: mov ecx, dword ptr [eax + eax*8 + 0xa90404] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90404u));
    /* 0067e468: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0067e46c: mov ecx, dword ptr [eax + eax*8 + 0xa90414] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90414u));
    /* 0067e473: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0067e477: mov ecx, dword ptr [eax + eax*8 + 0xa90408] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90408u));
    /* 0067e47e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0067e482: mov ecx, dword ptr [eax + eax*8 + 0xa90418] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa90418u));
    /* 0067e489: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067e48d: mov ecx, dword ptr [eax + eax*8 + 0xa9040c] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa9040cu));
    /* 0067e494: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0067e498: mov ecx, dword ptr [eax + eax*8 + 0xa9041c] */ r_ecx = R32((u32)(r_eax+r_eax*8+0xa9041cu));
    /* 0067e49f: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
L_0067e4a3:; BB(0x0067e4a3);
    /* 0067e4a3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e4a6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e4a9: jl 0x67e419 */ if ((fS!=fO)) goto L_0067e419;
L_0067e4af:; BB(0x0067e4af);
    /* 0067e4af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067e4b1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067e4b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067e4b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067e4b6: ret  */ FN_RET(0x0067e408); r_esp += 4; return;
L_0067e4b7:; BB(0x0067e4b7);
    /* 0067e4b7: mov eax, 1 */ r_eax = 0x1u;
    /* 0067e4bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067e4bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067e4c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067e4c1: ret  */ FN_RET(0x0067e408); r_esp += 4; return;
}

void f_0067e46b(void)
{
    FN_ENTER(0x0067e46b);
    /* 0067e46b: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 0067e46d: mov eax, es */ r_eax = 0x2bu;
    /* 0067e46f: adc al, 4 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067e471: test eax, 0x244c8900 */ {  u32 a = r_eax; u32 b = 0x244c8900u; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 0067e476: adc al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067e478: mov eax, es */ r_eax = 0x2bu;
    /* 0067e47a: or byte ptr [ecx + ebp*4], al */ { u32 ad = (u32)(r_ecx+r_ebp*4);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0067e47d: add byte ptr [ecx - 0x74f7dbb4], cl */ { u32 ad = (u32)(r_ecx+0x8b08244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0067e483: mov eax, es */ r_eax = 0x2bu;
    /* 0067e485: sbb byte ptr [ecx + ebp*4], al */ { u32 ad = (u32)(r_ecx+r_ebp*4); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 0067e488: add byte ptr [ecx - 0x74e7dbb4], cl */ { u32 ad = (u32)(r_ecx+0x8b18244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067e48e: mov eax, es */ r_eax = 0x2bu;
    /* 0067e490: or al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067e492: test eax, 0x244c8900 */ {  u32 a = r_eax; u32 b = 0x244c8900u; u32 r = (a & b) & 0xffffffffu;   }
    /* 0067e497: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 0067e499: mov eax, es */ r_eax = 0x2bu;
    /* 0067e49b: sbb al, 4 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067e49d: test eax, 0x244c8900 */ {  u32 a = r_eax; u32 b = 0x244c8900u; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 0067e4a2: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 0067e4a4: ret  */ FN_RET(0x0067e46b); r_esp += 4; return;
}

void f_0067e4c4(void) /* sub_67E4C4 */
{
    FN_ENTER(0x0067e4c4);
    /* 0067e4c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0067e4c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4c9: push 0x8ea3b4 */ { u32 v = 0x8ea3b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067e4d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067e4dc: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067e4e2: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067e4e5: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0067e4e8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0067e4eb: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0067e4ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067e4f1: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4f6: push 0x67df3c */ { u32 v = 0x67df3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e4fb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067e4fe: lea edx, [ebp - 0x10c] */ r_edx = (u32)(r_ebp+0xfffffef4u);
    /* 0067e504: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e506: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e509: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x67e50eu); f_00858736();
    /* 0067e50e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067e515: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e51a: push 0x67df3c */ { u32 v = 0x67df3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e51f: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e525: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e527: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e52a: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x67e52fu); f_00858736();
    /* 0067e52f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067e536: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0067e53b: mov word ptr [ebp - 0xac], ax */ W16((u32)(r_ebp+0xffffff54u), (u16)r_eax);
    /* 0067e542: mov word ptr [ebp - 0x94], ax */ W16((u32)(r_ebp+0xffffff6cu), (u16)r_eax);
    /* 0067e549: mov word ptr [ebp - 0x7c], ax */ W16((u32)(r_ebp+0xffffff84u), (u16)r_eax);
    /* 0067e54d: mov word ptr [ebp - 0x64], ax */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_eax);
    /* 0067e551: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067e553: mov dword ptr [ebp - 0x4c], edi */ W32((u32)(r_ebp+0xffffffb4u), r_edi);
    /* 0067e556: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 0067e559: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0067e55c: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0067e55f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067e564: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067e566: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e568: mov word ptr [ebp - 0xaa], dx */ W16((u32)(r_ebp+0xffffff56u), (u16)r_edx);
    /* 0067e56f: mov word ptr [ebp - 0x92], dx */ W16((u32)(r_ebp+0xffffff6eu), (u16)r_edx);
    /* 0067e576: mov word ptr [ebp - 0x7a], dx */ W16((u32)(r_ebp+0xffffff86u), (u16)r_edx);
    /* 0067e57a: mov word ptr [ebp - 0x62], dx */ W16((u32)(r_ebp+0xffffff9eu), (u16)r_edx);
    /* 0067e57e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0067e581: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0067e583:; BB(0x0067e583);
    /* 0067e583: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e586: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0067e589: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e58a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e58fu); f_0068d5a8();
    /* 0067e58f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e592: je 0x67e5f1 */ if (fZ) goto L_0067e5f1;
L_0067e594:; BB(0x0067e594);
    /* 0067e594: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e596: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e59bu); f_007ba980();
    /* 0067e59b: mov ebx, eax */ r_ebx = r_eax;
    /* 0067e59d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0067e5a0: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e5a5u); f_007ba980();
    /* 0067e5a5: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0067e5a8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e5ab: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e5ad: jne 0x67e5f1 */ if (!fZ) goto L_0067e5f1;
L_0067e5af:; BB(0x0067e5af);
    /* 0067e5af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e5b2: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e5b7u); f_006a8354();
    /* 0067e5b7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e5ba: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e5bd: je 0x67e5f1 */ if (fZ) goto L_0067e5f1;
L_0067e5bf:; BB(0x0067e5bf);
    /* 0067e5bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e5c2: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 0067e5c5: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0067e5c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e5ca: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067e5cc: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0067e5cf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067e5d2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e5d4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e5d6: mov word ptr [ebp + ebx - 0x10c], dx */ W16((u32)(r_ebp+r_ebx+0xfffffef4u), (u16)r_edx);
    /* 0067e5de: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e5e3u); f_006a8354();
    /* 0067e5e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067e5e6: mov word ptr [ebp + edx*8 - 0x10a], ax */ W16((u32)(r_ebp+r_edx*8+0xfffffef6u), (u16)r_eax);
    /* 0067e5ee: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0067e5f1:; BB(0x0067e5f1);
    /* 0067e5f1: add dword ptr [ebp - 0x14], 0x18 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0067e5f5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e5f8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e5fb: jl 0x67e583 */ if ((fS!=fO)) goto L_0067e583;
L_0067e5fd:; BB(0x0067e5fd);
    /* 0067e5fd: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e600: jge 0x67e62b */ if ((fS==fO)) goto L_0067e62b;
L_0067e602:; BB(0x0067e602);
    /* 0067e602: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0067e607: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0067e60a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e60c: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e60e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067e613: mov word ptr [ebp + ecx*8 - 0x10c], ax */ W16((u32)(r_ebp+r_ecx*8+0xfffffef4u), (u16)r_eax);
    /* 0067e61b: mov word ptr [ebp + ecx*8 - 0x10a], dx */ W16((u32)(r_ebp+r_ecx*8+0xfffffef6u), (u16)r_edx);
    /* 0067e623: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067e626: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e629: jl 0x67e602 */ if ((fS!=fO)) goto L_0067e602;
L_0067e62b:; BB(0x0067e62b);
    /* 0067e62b: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e631: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067e634: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067e636: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0067e638: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0067e63a:; BB(0x0067e63a);
    /* 0067e63a: mov eax, dword ptr [ebp + ebx - 0x10c] */ r_eax = R32((u32)(r_ebp+r_ebx+0xfffffef4u));
    /* 0067e641: mov dword ptr [ebp + esi - 0xac], eax */ W32((u32)(r_ebp+r_esi+0xffffff54u), r_eax);
    /* 0067e648: mov edx, dword ptr [ebp + ebx - 0x108] */ r_edx = R32((u32)(r_ebp+r_ebx+0xfffffef8u));
    /* 0067e64f: mov dword ptr [ebp + esi - 0xa8], edx */ W32((u32)(r_ebp+r_esi+0xffffff58u), r_edx);
    /* 0067e656: mov ecx, dword ptr [ebp + ebx - 0x104] */ r_ecx = R32((u32)(r_ebp+r_ebx+0xfffffefcu));
    /* 0067e65d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067e660: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e663: mov dword ptr [ebp + esi - 0xa4], ecx */ W32((u32)(r_ebp+r_esi+0xffffff5cu), r_ecx);
    /* 0067e66a: mov eax, dword ptr [ebp + ebx - 0x100] */ r_eax = R32((u32)(r_ebp+r_ebx+0xffffff00u));
    /* 0067e671: mov dword ptr [ebp + esi - 0xa0], eax */ W32((u32)(r_ebp+r_esi+0xffffff60u), r_eax);
    /* 0067e678: mov eax, dword ptr [ebp + ebx - 0xfc] */ r_eax = R32((u32)(r_ebp+r_ebx+0xffffff04u));
    /* 0067e67f: mov dword ptr [ebp + esi - 0x9c], eax */ W32((u32)(r_ebp+r_esi+0xffffff64u), r_eax);
    /* 0067e686: mov ebx, dword ptr [ebp + ebx - 0xf8] */ r_ebx = R32((u32)(r_ebp+r_ebx+0xffffff08u));
    /* 0067e68d: mov dword ptr [ebp + esi - 0x98], ebx */ W32((u32)(r_ebp+r_esi+0xffffff68u), r_ebx);
    /* 0067e694: jge 0x67e6ad */ if ((fS==fO)) goto L_0067e6ad;
L_0067e696:; BB(0x0067e696);
    /* 0067e696: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e698: jne 0x67e873 */ if (!fZ) goto L_0067e873;
L_0067e69e:; BB(0x0067e69e);
    /* 0067e69e: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0067e6a1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a3: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6ab: jmp 0x67e63a */ goto L_0067e63a;
L_0067e6ad:; BB(0x0067e6ad);
    /* 0067e6ad: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067e6af: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0067e6b1:; BB(0x0067e6b1);
    /* 0067e6b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e6b4: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0067e6b8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e6ba: jne 0x67e91b */ if (!fZ) goto L_0067e91b;
L_0067e6c0:; BB(0x0067e6c0);
    /* 0067e6c0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e6c3: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e6c6: jl 0x67e6b1 */ if ((fS!=fO)) goto L_0067e6b1;
L_0067e6c8:; BB(0x0067e6c8);
    /* 0067e6c8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e6ca: je 0x67e71b */ if (fZ) goto L_0067e71b;
L_0067e6cc:; BB(0x0067e6cc);
    /* 0067e6cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067e6d3: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6d8: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e6de: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6e0: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6e3: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e6e8u); f_008586d6();
    /* 0067e6e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e6ef: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6f4: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 0067e6fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6fc: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6ff: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e704u); f_008586d6();
    /* 0067e704: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067e707: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067e70a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067e70d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067e710: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067e717: mov esp, ebp */ r_esp = r_ebp;
    /* 0067e719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067e71a: ret  */ FN_RET(0x0067e4c4); r_esp += 4; return;
L_0067e71b:; BB(0x0067e71b);
    /* 0067e71b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0067e71e: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 0067e724: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0067e728: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e72b: call 0x67e97c */ r_esp -= 4; W32(r_esp, 0x67e730u); f_0067e97c();
    /* 0067e730: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e735: jne 0x67e7d8 */ if (!fZ) goto L_0067e7d8;
L_0067e73b:; BB(0x0067e73b);
    /* 0067e73b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e73d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0067e73f:; BB(0x0067e73f);
    /* 0067e73f: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e745: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0067e748: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e74a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e74c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e74e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e750: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e752: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e754: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e759u); f_006a8354();
    /* 0067e759: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e75c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e75f: je 0x67e914 */ if (fZ) goto L_0067e914;
L_0067e765:; BB(0x0067e765);
    /* 0067e765: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e768: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e76b: jl 0x67e73f */ if ((fS!=fO)) goto L_0067e73f;
L_0067e76d:; BB(0x0067e76d);
    /* 0067e76d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0067e774: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e779: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0067e77c: lea edx, [eax + ebx*8] */ r_edx = (u32)(r_eax+r_ebx*8);
    /* 0067e77f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067e782: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e784: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e786: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e788: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e78a: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e78d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067e790: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e795u); f_005caba4();
    /* 0067e795: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e796: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067e799: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e79b: je 0x67e824 */ if (fZ) goto L_0067e824;
L_0067e7a1:; BB(0x0067e7a1);
    /* 0067e7a1: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0067e7a8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067e7af: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0067e7b2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067e7b5: lea edi, [ebp - 0xac] */ r_edi = (u32)(r_ebp+0xffffff54u);
    /* 0067e7bb: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 0067e7be: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0067e7c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c8: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e7ca: call 0x67e9e0 */ r_esp -= 4; W32(r_esp, 0x67e7cfu); f_0067e9e0();
    /* 0067e7cf: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0067e7d6: jmp 0x67e824 */ goto L_0067e824;
L_0067e7d8:; BB(0x0067e7d8);
    /* 0067e7d8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0067e7df: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e7e9u); f_005caba4();
    /* 0067e7e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e7ea: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067e7ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e7ef: je 0x67e824 */ if (fZ) goto L_0067e824;
L_0067e7f1:; BB(0x0067e7f1);
    /* 0067e7f1: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0067e7f8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067e7ff: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0067e802: lea esi, [ebp - 0xac] */ r_esi = (u32)(r_ebp+0xffffff54u);
    /* 0067e808: lea ebx, [ebp - 0x4c] */ r_ebx = (u32)(r_ebp+0xffffffb4u);
    /* 0067e80b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e80d: movzx edi, word ptr [edx + 0x1c] */ r_edi = (u32)R16((u32)(r_edx+0x1cu));
    /* 0067e811: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e813: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e814: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e816: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e817: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e818: call 0x67e9e0 */ r_esp -= 4; W32(r_esp, 0x67e81du); f_0067e9e0();
    /* 0067e81d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0067e824:; BB(0x0067e824);
    /* 0067e824: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067e82b: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e830: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e836: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e838: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e83a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e83b: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e840u); f_008586d6();
    /* 0067e840: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e847: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e84c: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 0067e852: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e854: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e857: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e85cu); f_008586d6();
    /* 0067e85c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067e85f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067e862: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067e865: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067e868: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067e86f: mov esp, ebp */ r_esp = r_ebp;
    /* 0067e871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067e872: ret  */ FN_RET(0x0067e4c4); r_esp += 4; return;
L_0067e873:; BB(0x0067e873);
    /* 0067e873: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 0067e879: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0067e87c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e87e: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e880: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e882: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e884: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e886: lea ecx, [eax + ebx] */ r_ecx = (u32)(r_eax+r_ebx);
    /* 0067e889: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0067e88c: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e891u); f_006a8354();
    /* 0067e891: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e894: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e897: je 0x67e8ed */ if (fZ) goto L_0067e8ed;
L_0067e899:; BB(0x0067e899);
    /* 0067e899: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e89c: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e8a1u); f_006a8354();
    /* 0067e8a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067e8a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067e8a7: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e8acu); f_006a8354();
    /* 0067e8ac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067e8af: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0067e8b2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e8b5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e8b7: jne 0x67e8c6 */ if (!fZ) goto L_0067e8c6;
L_0067e8b9:; BB(0x0067e8b9);
    /* 0067e8b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e8bc: add dword ptr [ebp + eax*4 - 0x4c], 1 */ { u32 ad = (u32)(r_ebp+r_eax*4+0xffffffb4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0067e8c1: jmp 0x67e63a */ goto L_0067e63a;
L_0067e8c6:; BB(0x0067e8c6);
    /* 0067e8c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e8c9: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 0067e8cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e8d2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067e8d5: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0067e8d8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8da: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8de: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8e0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8e2: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 0067e8e5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0067e8e8: jmp 0x67e63a */ goto L_0067e63a;
L_0067e8ed:; BB(0x0067e8ed);
    /* 0067e8ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e8f0: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 0067e8f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e8f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067e8fc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0067e8ff: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e901: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0067e903: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e905: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e907: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e909: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 0067e90c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0067e90f: jmp 0x67e63a */ goto L_0067e63a;
L_0067e914:; BB(0x0067e914);
    /* 0067e914: mov ebx, esi */ r_ebx = r_esi;
    /* 0067e916: jmp 0x67e76d */ goto L_0067e76d;
L_0067e91b:; BB(0x0067e91b);
    /* 0067e91b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e91c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e921u); f_0068d5a8();
    /* 0067e921: mov ebx, eax */ r_ebx = r_eax;
    /* 0067e923: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e926: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e928: je 0x67e6c0 */ if (fZ) goto L_0067e6c0;
L_0067e92e:; BB(0x0067e92e);
    /* 0067e92e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067e930: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e935u); f_007ba980();
    /* 0067e935: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067e938: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0067e93b: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e940u); f_007ba980();
    /* 0067e940: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e943: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0067e946: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e949: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e94b: jne 0x67e6c0 */ if (!fZ) goto L_0067e6c0;
L_0067e951:; BB(0x0067e951);
    /* 0067e951: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067e955: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e957: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e959: mov edx, dword ptr [eax + eax*8 + 0xa90420] */ r_edx = R32((u32)(r_eax+r_eax*8+0xa90420u));
    /* 0067e960: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e962: je 0x67e6c0 */ if (fZ) goto L_0067e6c0;
L_0067e968:; BB(0x0067e968);
    /* 0067e968: mov edi, 1 */ r_edi = 0x1u;
    /* 0067e96d: jmp 0x67e6c0 */ goto L_0067e6c0;
}

void f_0067e5c0(void)
{
    FN_ENTER(0x0067e5c0);
    goto L_0067e5c0;
L_0067e583:; BB(0x0067e583);
    /* 0067e583: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e586: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0067e589: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e58a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e58fu); f_0068d5a8();
    /* 0067e58f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e592: je 0x67e5f1 */ if (fZ) goto L_0067e5f1;
L_0067e594:; BB(0x0067e594);
    /* 0067e594: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e596: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e59bu); f_007ba980();
    /* 0067e59b: mov ebx, eax */ r_ebx = r_eax;
    /* 0067e59d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0067e5a0: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e5a5u); f_007ba980();
    /* 0067e5a5: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0067e5a8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e5ab: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e5ad: jne 0x67e5f1 */ if (!fZ) goto L_0067e5f1;
L_0067e5af:; BB(0x0067e5af);
    /* 0067e5af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e5b2: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e5b7u); f_006a8354();
    /* 0067e5b7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e5ba: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e5bd: je 0x67e5f1 */ if (fZ) goto L_0067e5f1;
L_0067e5bf:; BB(0x0067e5bf);
    /* 0067e5bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
L_0067e5c0:; BB(0x0067e5c0);
    /* 0067e5c0: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0067e5c1: in al, dx */ UNSUP(0x0067e5c1, "in al, dx");
    /* 0067e5c2: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 0067e5c5: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0067e5c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e5ca: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067e5cc: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0067e5cf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067e5d2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e5d4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e5d6: mov word ptr [ebp + ebx - 0x10c], dx */ W16((u32)(r_ebp+r_ebx+0xfffffef4u), (u16)r_edx);
    /* 0067e5de: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e5e3u); f_006a8354();
    /* 0067e5e3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067e5e6: mov word ptr [ebp + edx*8 - 0x10a], ax */ W16((u32)(r_ebp+r_edx*8+0xfffffef6u), (u16)r_eax);
    /* 0067e5ee: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0067e5f1:; BB(0x0067e5f1);
    /* 0067e5f1: add dword ptr [ebp - 0x14], 0x18 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0067e5f5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e5f8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e5fb: jl 0x67e583 */ if ((fS!=fO)) goto L_0067e583;
L_0067e5fd:; BB(0x0067e5fd);
    /* 0067e5fd: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e600: jge 0x67e62b */ if ((fS==fO)) goto L_0067e62b;
L_0067e602:; BB(0x0067e602);
    /* 0067e602: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0067e607: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0067e60a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e60c: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e60e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067e613: mov word ptr [ebp + ecx*8 - 0x10c], ax */ W16((u32)(r_ebp+r_ecx*8+0xfffffef4u), (u16)r_eax);
    /* 0067e61b: mov word ptr [ebp + ecx*8 - 0x10a], dx */ W16((u32)(r_ebp+r_ecx*8+0xfffffef6u), (u16)r_edx);
    /* 0067e623: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067e626: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e629: jl 0x67e602 */ if ((fS!=fO)) goto L_0067e602;
L_0067e62b:; BB(0x0067e62b);
    /* 0067e62b: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e631: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067e634: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067e636: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0067e638: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0067e63a:; BB(0x0067e63a);
    /* 0067e63a: mov eax, dword ptr [ebp + ebx - 0x10c] */ r_eax = R32((u32)(r_ebp+r_ebx+0xfffffef4u));
    /* 0067e641: mov dword ptr [ebp + esi - 0xac], eax */ W32((u32)(r_ebp+r_esi+0xffffff54u), r_eax);
    /* 0067e648: mov edx, dword ptr [ebp + ebx - 0x108] */ r_edx = R32((u32)(r_ebp+r_ebx+0xfffffef8u));
    /* 0067e64f: mov dword ptr [ebp + esi - 0xa8], edx */ W32((u32)(r_ebp+r_esi+0xffffff58u), r_edx);
    /* 0067e656: mov ecx, dword ptr [ebp + ebx - 0x104] */ r_ecx = R32((u32)(r_ebp+r_ebx+0xfffffefcu));
    /* 0067e65d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067e660: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e663: mov dword ptr [ebp + esi - 0xa4], ecx */ W32((u32)(r_ebp+r_esi+0xffffff5cu), r_ecx);
    /* 0067e66a: mov eax, dword ptr [ebp + ebx - 0x100] */ r_eax = R32((u32)(r_ebp+r_ebx+0xffffff00u));
    /* 0067e671: mov dword ptr [ebp + esi - 0xa0], eax */ W32((u32)(r_ebp+r_esi+0xffffff60u), r_eax);
    /* 0067e678: mov eax, dword ptr [ebp + ebx - 0xfc] */ r_eax = R32((u32)(r_ebp+r_ebx+0xffffff04u));
    /* 0067e67f: mov dword ptr [ebp + esi - 0x9c], eax */ W32((u32)(r_ebp+r_esi+0xffffff64u), r_eax);
    /* 0067e686: mov ebx, dword ptr [ebp + ebx - 0xf8] */ r_ebx = R32((u32)(r_ebp+r_ebx+0xffffff08u));
    /* 0067e68d: mov dword ptr [ebp + esi - 0x98], ebx */ W32((u32)(r_ebp+r_esi+0xffffff68u), r_ebx);
    /* 0067e694: jge 0x67e6ad */ if ((fS==fO)) goto L_0067e6ad;
L_0067e696:; BB(0x0067e696);
    /* 0067e696: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e698: jne 0x67e873 */ if (!fZ) goto L_0067e873;
L_0067e69e:; BB(0x0067e69e);
    /* 0067e69e: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0067e6a1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a3: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6a9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e6ab: jmp 0x67e63a */ goto L_0067e63a;
L_0067e6ad:; BB(0x0067e6ad);
    /* 0067e6ad: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067e6af: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0067e6b1:; BB(0x0067e6b1);
    /* 0067e6b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067e6b4: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0067e6b8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e6ba: jne 0x67e91b */ if (!fZ) goto L_0067e91b;
L_0067e6c0:; BB(0x0067e6c0);
    /* 0067e6c0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e6c3: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e6c6: jl 0x67e6b1 */ if ((fS!=fO)) goto L_0067e6b1;
L_0067e6c8:; BB(0x0067e6c8);
    /* 0067e6c8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e6ca: je 0x67e71b */ if (fZ) goto L_0067e71b;
L_0067e6cc:; BB(0x0067e6cc);
    /* 0067e6cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067e6d3: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6d8: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e6de: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6e0: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6e3: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e6e8u); f_008586d6();
    /* 0067e6e8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e6ef: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6f4: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 0067e6fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6fc: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e6ff: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e704u); f_008586d6();
    /* 0067e704: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067e707: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067e70a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067e70d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067e710: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067e717: mov esp, ebp */ r_esp = r_ebp;
    /* 0067e719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067e71a: ret  */ FN_RET(0x0067e5c0); r_esp += 4; return;
L_0067e71b:; BB(0x0067e71b);
    /* 0067e71b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0067e71e: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 0067e724: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0067e728: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e72b: call 0x67e97c */ r_esp -= 4; W32(r_esp, 0x67e730u); f_0067e97c();
    /* 0067e730: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e735: jne 0x67e7d8 */ if (!fZ) goto L_0067e7d8;
L_0067e73b:; BB(0x0067e73b);
    /* 0067e73b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e73d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0067e73f:; BB(0x0067e73f);
    /* 0067e73f: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e745: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0067e748: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e74a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e74c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e74e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e750: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e752: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e754: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e759u); f_006a8354();
    /* 0067e759: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e75c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e75f: je 0x67e914 */ if (fZ) goto L_0067e914;
L_0067e765:; BB(0x0067e765);
    /* 0067e765: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e768: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067e76b: jl 0x67e73f */ if ((fS!=fO)) goto L_0067e73f;
L_0067e76d:; BB(0x0067e76d);
    /* 0067e76d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0067e774: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e779: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0067e77c: lea edx, [eax + ebx*8] */ r_edx = (u32)(r_eax+r_ebx*8);
    /* 0067e77f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067e782: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e784: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e786: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e788: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e78a: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067e78d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067e790: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e795u); f_005caba4();
    /* 0067e795: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e796: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067e799: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e79b: je 0x67e824 */ if (fZ) goto L_0067e824;
L_0067e7a1:; BB(0x0067e7a1);
    /* 0067e7a1: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0067e7a8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067e7af: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0067e7b2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067e7b5: lea edi, [ebp - 0xac] */ r_edi = (u32)(r_ebp+0xffffff54u);
    /* 0067e7bb: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 0067e7be: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0067e7c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7c8: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e7ca: call 0x67e9e0 */ r_esp -= 4; W32(r_esp, 0x67e7cfu); f_0067e9e0();
    /* 0067e7cf: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0067e7d6: jmp 0x67e824 */ goto L_0067e824;
L_0067e7d8:; BB(0x0067e7d8);
    /* 0067e7d8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0067e7df: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e7e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67e7e9u); f_005caba4();
    /* 0067e7e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e7ea: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067e7ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e7ef: je 0x67e824 */ if (fZ) goto L_0067e824;
L_0067e7f1:; BB(0x0067e7f1);
    /* 0067e7f1: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0067e7f8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067e7ff: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0067e802: lea esi, [ebp - 0xac] */ r_esi = (u32)(r_ebp+0xffffff54u);
    /* 0067e808: lea ebx, [ebp - 0x4c] */ r_ebx = (u32)(r_ebp+0xffffffb4u);
    /* 0067e80b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e80d: movzx edi, word ptr [edx + 0x1c] */ r_edi = (u32)R16((u32)(r_edx+0x1cu));
    /* 0067e811: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e813: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e814: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e816: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e817: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e818: call 0x67e9e0 */ r_esp -= 4; W32(r_esp, 0x67e81du); f_0067e9e0();
    /* 0067e81d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0067e824:; BB(0x0067e824);
    /* 0067e824: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067e82b: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e830: lea eax, [ebp - 0xac] */ r_eax = (u32)(r_ebp+0xffffff54u);
    /* 0067e836: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e838: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e83a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e83b: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e840u); f_008586d6();
    /* 0067e840: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067e847: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e84c: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 0067e852: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e854: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e857: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x67e85cu); f_008586d6();
    /* 0067e85c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067e85f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067e862: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067e865: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067e868: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067e86f: mov esp, ebp */ r_esp = r_ebp;
    /* 0067e871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067e872: ret  */ FN_RET(0x0067e5c0); r_esp += 4; return;
L_0067e873:; BB(0x0067e873);
    /* 0067e873: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 0067e879: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0067e87c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e87e: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e880: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e882: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e884: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067e886: lea ecx, [eax + ebx] */ r_ecx = (u32)(r_eax+r_ebx);
    /* 0067e889: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0067e88c: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e891u); f_006a8354();
    /* 0067e891: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e894: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e897: je 0x67e8ed */ if (fZ) goto L_0067e8ed;
L_0067e899:; BB(0x0067e899);
    /* 0067e899: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067e89c: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e8a1u); f_006a8354();
    /* 0067e8a1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067e8a4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067e8a7: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67e8acu); f_006a8354();
    /* 0067e8ac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067e8af: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0067e8b2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e8b5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e8b7: jne 0x67e8c6 */ if (!fZ) goto L_0067e8c6;
L_0067e8b9:; BB(0x0067e8b9);
    /* 0067e8b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e8bc: add dword ptr [ebp + eax*4 - 0x4c], 1 */ { u32 ad = (u32)(r_ebp+r_eax*4+0xffffffb4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0067e8c1: jmp 0x67e63a */ goto L_0067e63a;
L_0067e8c6:; BB(0x0067e8c6);
    /* 0067e8c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e8c9: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 0067e8cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e8d2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067e8d5: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0067e8d8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8da: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8de: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8e0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e8e2: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 0067e8e5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0067e8e8: jmp 0x67e63a */ goto L_0067e63a;
L_0067e8ed:; BB(0x0067e8ed);
    /* 0067e8ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e8f0: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 0067e8f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e8f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067e8fc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0067e8ff: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e901: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0067e903: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e905: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e907: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067e909: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 0067e90c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0067e90f: jmp 0x67e63a */ goto L_0067e63a;
L_0067e914:; BB(0x0067e914);
    /* 0067e914: mov ebx, esi */ r_ebx = r_esi;
    /* 0067e916: jmp 0x67e76d */ goto L_0067e76d;
L_0067e91b:; BB(0x0067e91b);
    /* 0067e91b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e91c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e921u); f_0068d5a8();
    /* 0067e921: mov ebx, eax */ r_ebx = r_eax;
    /* 0067e923: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e926: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e928: je 0x67e6c0 */ if (fZ) goto L_0067e6c0;
L_0067e92e:; BB(0x0067e92e);
    /* 0067e92e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067e930: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e935u); f_007ba980();
    /* 0067e935: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067e938: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0067e93b: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e940u); f_007ba980();
    /* 0067e940: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067e943: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0067e946: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e949: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e94b: jne 0x67e6c0 */ if (!fZ) goto L_0067e6c0;
L_0067e951:; BB(0x0067e951);
    /* 0067e951: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067e955: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e957: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067e959: mov edx, dword ptr [eax + eax*8 + 0xa90420] */ r_edx = R32((u32)(r_eax+r_eax*8+0xa90420u));
    /* 0067e960: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e962: je 0x67e6c0 */ if (fZ) goto L_0067e6c0;
L_0067e968:; BB(0x0067e968);
    /* 0067e968: mov edi, 1 */ r_edi = 0x1u;
    /* 0067e96d: jmp 0x67e6c0 */ goto L_0067e6c0;
}

void f_0067e97c(void) /* sub_67E97C */
{
    FN_ENTER(0x0067e97c);
    /* 0067e97c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e97d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e97e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e97f: mov edi, eax */ r_edi = r_eax;
    /* 0067e981: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0067e984: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0067e98a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067e98c: jne 0x67e997 */ if (!fZ) goto L_0067e997;
L_0067e98e:; BB(0x0067e98e);
    /* 0067e98e: mov eax, 1 */ r_eax = 0x1u;
    /* 0067e993: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067e994: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067e995: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067e996: ret  */ FN_RET(0x0067e97c); r_esp += 4; return;
L_0067e997:; BB(0x0067e997);
    /* 0067e997: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067e998: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e99du); f_0068d5a8();
    /* 0067e99d: mov esi, eax */ r_esi = r_eax;
    /* 0067e99f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067e9a2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e9a4: je 0x67e9d7 */ if (fZ) goto L_0067e9d7;
L_0067e9a6:; BB(0x0067e9a6);
    /* 0067e9a6: mov ecx, esi */ r_ecx = r_esi;
    /* 0067e9a8: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e9adu); f_007ba980();
    /* 0067e9ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9ae: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e9b1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67e9b6u); f_0068d5a8();
    /* 0067e9b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067e9b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e9b9: je 0x67e9d7 */ if (fZ) goto L_0067e9d7;
L_0067e9bb:; BB(0x0067e9bb);
    /* 0067e9bb: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 0067e9c1: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067e9c7: jne 0x67e9d7 */ if (!fZ) goto L_0067e9d7;
L_0067e9c9:; BB(0x0067e9c9);
    /* 0067e9c9: mov ecx, eax */ r_ecx = r_eax;
    /* 0067e9cb: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67e9d0u); f_007ba980();
    /* 0067e9d0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067e9d3: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067e9d5: je 0x67e98e */ if (fZ) goto L_0067e98e;
L_0067e9d7:; BB(0x0067e9d7);
    /* 0067e9d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067e9d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067e9da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067e9db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067e9dc: ret  */ FN_RET(0x0067e97c); r_esp += 4; return;
}

void f_0067e9e0(void) /* sub_67E9E0 */
{
    FN_ENTER(0x0067e9e0);
    /* 0067e9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0067e9e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9e5: push 0x8ea3d0 */ { u32 v = 0x8ea3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067e9f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067e9f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067e9f8: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067e9fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067e9fe: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0067ea01: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0067ea04: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0067ea07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067ea0a: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ea10: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0067ea13: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0067ea16: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067ea19: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0067ea1c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0067ea1f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067ea22: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0067ea25: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067ea28: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0067ea2b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067ea2e: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x67ea33u); f_008193cc();
    /* 0067ea33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067ea3a: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ea3d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067ea40: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067ea43: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0067ea48: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 0067ea4b: mov dword ptr [esi], 0xb38328 */ W32((u32)(r_esi), 0xb38328u);
    /* 0067ea51: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067ea54: mov word ptr [esi + 0x3c], ax */ W16((u32)(r_esi+0x3cu), (u16)r_eax);
    /* 0067ea58: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067ea5b: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 0067ea5e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ea61: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ea63: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 0067ea66: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0067ea69: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0067ea6b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ea6e: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 0067ea71: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067ea76: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0067ea79: mov word ptr [esi + 0x90], dx */ W16((u32)(r_esi+0x90u), (u16)r_edx);
    /* 0067ea80: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0067ea83: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ea86: mov dword ptr [esi + 0x74], edi */ W32((u32)(r_esi+0x74u), r_edi);
    /* 0067ea89: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0067ea8c: mov word ptr [esi + 0x92], dx */ W16((u32)(r_esi+0x92u), (u16)r_edx);
    /* 0067ea93: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 0067ea96: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ea99: mov dword ptr [esi + 0x78], edi */ W32((u32)(r_esi+0x78u), r_edi);
    /* 0067ea9c: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0067ea9f: mov word ptr [esi + 0x94], dx */ W16((u32)(r_esi+0x94u), (u16)r_edx);
    /* 0067eaa6: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0067eaa9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067eaac: mov dword ptr [esi + 0x7c], ecx */ W32((u32)(r_esi+0x7cu), r_ecx);
    /* 0067eaaf: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 0067eab2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067eab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067eab6: mov word ptr [esi + 0x96], dx */ W16((u32)(r_esi+0x96u), (u16)r_edx);
    /* 0067eabd: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0067eac0: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0067eac3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67eac8u); f_0068d5a8();
    /* 0067eac8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067eac9: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067eacc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eace: je 0x67eaee */ if (fZ) goto L_0067eaee;
L_0067ead0:; BB(0x0067ead0);
    /* 0067ead0: fld dword ptr [eax + 0x520] */ FPUSH(R_F32((u32)(r_eax+0x520u)));
    /* 0067ead6: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0067ead9: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0067eadd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067eae2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067eae5: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0067eae8: fistp dword ptr [edx + 0x40] */ W32((u32)(r_edx+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067eaeb: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
L_0067eaee:; BB(0x0067eaee);
    /* 0067eaee: mov dword ptr [edx + 0x28], 4 */ W32((u32)(r_edx+0x28u), 0x4u);
    /* 0067eaf5: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0067eafa: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0067eafd: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 0067eb00: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 0067eb03: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 0067eb06: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0067eb08:; BB(0x0067eb08);
    /* 0067eb08: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067eb0b: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67eb10u); f_006a8354();
    /* 0067eb10: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067eb13: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eb16: je 0x67ee64 */ if (fZ) goto L_0067ee64;
L_0067eb1c:; BB(0x0067eb1c);
    /* 0067eb1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067eb1f: call 0x6a8354 */ r_esp -= 4; W32(r_esp, 0x67eb24u); f_006a8354();
    /* 0067eb24: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067eb27: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067eb2a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067eb2d: mov dword ptr [edx + ebx*4 + 0x50], eax */ W32((u32)(r_edx+r_ebx*4+0x50u), r_eax);
    /* 0067eb31: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0067eb34: mov dword ptr [edx + ebx*4 + 0x60], ecx */ W32((u32)(r_edx+r_ebx*4+0x60u), r_ecx);
    /* 0067eb38: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067eb3b: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067eb3e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067eb41: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0067eb44: jl 0x67eb08 */ if ((fS!=fO)) goto L_0067eb08;
L_0067eb46:; BB(0x0067eb46);
    /* 0067eb46: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067eb49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067eb4a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67eb4fu); f_0068d5a8();
    /* 0067eb4f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067eb52: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0067eb55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067eb56: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0067eb59: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0067eb5c: lea ebx, [eax + ecx*8] */ r_ebx = (u32)(r_eax+r_ecx*8);
    /* 0067eb5f: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0067eb62: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067eb64: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067eb66: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067eb68: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067eb6a: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067eb6d: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0067eb70: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67eb75u); f_007b4d18();
    /* 0067eb75: mov edi, eax */ r_edi = r_eax;
    /* 0067eb77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067eb7a: mov esi, dword ptr [0xaae168] */ r_esi = R32((u32)(0xaae168u));
    /* 0067eb80: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 0067eb85: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067eb87: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067eb89: jge 0x67ebfb */ if ((fS==fO)) goto L_0067ebfb;
L_0067eb8b:; BB(0x0067eb8b);
    /* 0067eb8b: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 0067eb92: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eb94: je 0x67ebf4 */ if (fZ) goto L_0067ebf4;
L_0067eb96:; BB(0x0067eb96);
    /* 0067eb96: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067eb99: test edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eb9f: jne 0x67ebf4 */ if (!fZ) goto L_0067ebf4;
L_0067eba1:; BB(0x0067eba1);
    /* 0067eba1: mov ecx, edi */ r_ecx = r_edi;
    /* 0067eba3: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67eba8u); f_007ba980();
    /* 0067eba8: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0067ebab: cmp dx, word ptr [ebx + 0x28] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0067ebaf: je 0x67ebbe */ if (fZ) goto L_0067ebbe;
L_0067ebb1:; BB(0x0067ebb1);
    /* 0067ebb1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0067ebb6: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ebbc: jmp 0x67ebf4 */ goto L_0067ebf4;
L_0067ebbe:; BB(0x0067ebbe);
    /* 0067ebbe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067ebc1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067ebc3: mov dword ptr [ebp - 0x58], 0x14 */ W32((u32)(r_ebp+0xffffffa8u), 0x14u);
    /* 0067ebca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067ebcc: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0067ebcf: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0067ebd2: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0067ebd5: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067ebda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ebdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ebdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ebde: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ebe1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ebe3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067ebe4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67ebe7u); call_ind(t); }
    /* 0067ebe7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ebe9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0067ebee: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0067ebf4:; BB(0x0067ebf4);
    /* 0067ebf4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ebf7: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ebf9: jl 0x67eb8b */ if ((fS!=fO)) goto L_0067eb8b;
L_0067ebfb:; BB(0x0067ebfb);
    /* 0067ebfb: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ebfe: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0067ec01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ec03: je 0x67ec51 */ if (fZ) goto L_0067ec51;
L_0067ec05:; BB(0x0067ec05);
    /* 0067ec05: call 0x814ee4 */ r_esp -= 4; W32(r_esp, 0x67ec0au); f_00814ee4();
    /* 0067ec0a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ec10: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x67ec15u); f_007181b8();
    /* 0067ec15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ec16: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ec19: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0067ec1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ec1e: je 0x67ec4a */ if (fZ) goto L_0067ec4a;
L_0067ec20:; BB(0x0067ec20);
    /* 0067ec20: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ec23: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0067ec26: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 0067ec29: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0067ec2c: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0067ec2f: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0067ec32: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 0067ec35: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ec38: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ec3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec3d: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec42: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67ec47u); f_00814298();
    /* 0067ec47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067ec4a:; BB(0x0067ec4a);
    /* 0067ec4a: call 0x67ce7c */ r_esp -= 4; W32(r_esp, 0x67ec4fu); f_0067ce7c();
    /* 0067ec4f: jmp 0x67ec6a */ goto L_0067ec6a;
L_0067ec51:; BB(0x0067ec51);
    /* 0067ec51: call 0x67d134 */ r_esp -= 4; W32(r_esp, 0x67ec56u); f_0067d134();
    /* 0067ec56: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ec59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec5b: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec5d: movzx edx, word ptr [eax + 0x3c] */ r_edx = (u32)R16((u32)(r_eax+0x3cu));
    /* 0067ec61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ec62: call 0x5bcee4 */ r_esp -= 4; W32(r_esp, 0x67ec67u); f_005bcee4();
    /* 0067ec67: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067ec6a:; BB(0x0067ec6a);
    /* 0067ec6a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ec6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0067ec6f:; BB(0x0067ec6f);
    /* 0067ec6f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0067ec72: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ec74: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ec76: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 0067ec79: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067ec7c: jae 0x67ed2c */ if (!fC) goto L_0067ed2c;
L_0067ec82:; BB(0x0067ec82);
    /* 0067ec82: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ec84: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067ec86: lea esi, [ebx + ebx*8] */ r_esi = (u32)(r_ebx+r_ebx*8);
    /* 0067ec89: mov ebx, dword ptr [esi + 0xa90420] */ r_ebx = R32((u32)(r_esi+0xa90420u));
    /* 0067ec8f: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ec92: je 0x67ed22 */ if (fZ) goto L_0067ed22;
L_0067ec98:; BB(0x0067ec98);
    /* 0067ec98: mov ebx, dword ptr [ecx + 0x50] */ r_ebx = R32((u32)(r_ecx+0x50u));
    /* 0067ec9b: mov dword ptr [esi + 0xa90400], ebx */ W32((u32)(r_esi+0xa90400u), r_ebx);
    /* 0067eca1: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 0067eca4: mov esi, dword ptr [ecx + 0x60] */ r_esi = R32((u32)(r_ecx+0x60u));
    /* 0067eca7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067eca9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067ecab: mov dword ptr [edi + edi*8 + 0xa90410], esi */ W32((u32)(r_edi+r_edi*8+0xa90410u), r_esi);
    /* 0067ecb2: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 0067ecb5: mov ebx, dword ptr [ecx + 0x54] */ r_ebx = R32((u32)(r_ecx+0x54u));
    /* 0067ecb8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ecba: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ecbc: mov dword ptr [esi + esi*8 + 0xa90404], ebx */ W32((u32)(r_esi+r_esi*8+0xa90404u), r_ebx);
    /* 0067ecc3: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 0067ecc6: mov ebx, dword ptr [ecx + 0x64] */ r_ebx = R32((u32)(r_ecx+0x64u));
    /* 0067ecc9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067eccb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067eccd: mov dword ptr [esi + esi*8 + 0xa90414], ebx */ W32((u32)(r_esi+r_esi*8+0xa90414u), r_ebx);
    /* 0067ecd4: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 0067ecd7: mov ebx, dword ptr [ecx + 0x58] */ r_ebx = R32((u32)(r_ecx+0x58u));
    /* 0067ecda: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ecdc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ecde: mov dword ptr [esi + esi*8 + 0xa90408], ebx */ W32((u32)(r_esi+r_esi*8+0xa90408u), r_ebx);
    /* 0067ece5: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 0067ece8: mov ebx, dword ptr [ecx + 0x68] */ r_ebx = R32((u32)(r_ecx+0x68u));
    /* 0067eceb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067eced: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ecef: mov dword ptr [esi + esi*8 + 0xa90418], ebx */ W32((u32)(r_esi+r_esi*8+0xa90418u), r_ebx);
    /* 0067ecf6: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 0067ecf9: mov ebx, dword ptr [ecx + 0x5c] */ r_ebx = R32((u32)(r_ecx+0x5cu));
    /* 0067ecfc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ecfe: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ed00: mov dword ptr [esi + esi*8 + 0xa9040c], ebx */ W32((u32)(r_esi+r_esi*8+0xa9040cu), r_ebx);
    /* 0067ed07: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 0067ed0a: mov ebx, dword ptr [ecx + 0x6c] */ r_ebx = R32((u32)(r_ecx+0x6cu));
    /* 0067ed0d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ed0f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067ed11: mov dword ptr [esi + esi*8 + 0xa9041c], ebx */ W32((u32)(r_esi+r_esi*8+0xa9041cu), r_ebx);
    /* 0067ed18: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0067ed1b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ed1d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ed1f: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
L_0067ed22:; BB(0x0067ed22);
    /* 0067ed22: mov dword ptr [esi + 0xa90420], 2 */ W32((u32)(r_esi+0xa90420u), 0x2u);
L_0067ed2c:; BB(0x0067ed2c);
    /* 0067ed2c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067ed2f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ed32: jl 0x67ec6f */ if ((fS!=fO)) goto L_0067ec6f;
L_0067ed38:; BB(0x0067ed38);
    /* 0067ed38: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0067ed3d: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 0067ed40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067ed42: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0067ed45: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0067ed48: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0067ed4b: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 0067ed51: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 0067ed57: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 0067ed5d: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 0067ed63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ed65: je 0x67ee0c */ if (fZ) goto L_0067ee0c;
L_0067ed6b:; BB(0x0067ed6b);
    /* 0067ed6b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ed71: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ed76u); f_0068d5a8();
    /* 0067ed76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ed77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ed79: je 0x67ee09 */ if (fZ) goto L_0067ee09;
L_0067ed7f:; BB(0x0067ed7f);
    /* 0067ed7f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ed82: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0067ed85: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 0067ed89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ed8a: call 0x69b6c0 */ r_esp -= 4; W32(r_esp, 0x67ed8fu); f_0069b6c0();
    /* 0067ed8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ed90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ed92: je 0x67ee5f */ if (fZ) goto L_0067ee5f;
L_0067ed98:; BB(0x0067ed98);
    /* 0067ed98: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 0067ed9b: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eda1: je 0x67edb6 */ if (fZ) goto L_0067edb6;
L_0067eda3:; BB(0x0067eda3);
    /* 0067eda3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067eda6: movzx edx, word ptr [ecx + 0x3c] */ r_edx = (u32)R16((u32)(r_ecx+0x3cu));
    /* 0067edaa: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067edac: je 0x67edb9 */ if (fZ) goto L_0067edb9;
L_0067edae:; BB(0x0067edae);
    /* 0067edae: mov dword ptr [ecx + 0x80], ebx */ W32((u32)(r_ecx+0x80u), r_ebx);
    /* 0067edb4: jmp 0x67edb9 */ goto L_0067edb9;
L_0067edb6:; BB(0x0067edb6);
    /* 0067edb6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
L_0067edb9:; BB(0x0067edb9);
    /* 0067edb9: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0067edbd: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067edc3: je 0x67edd3 */ if (fZ) goto L_0067edd3;
L_0067edc5:; BB(0x0067edc5);
    /* 0067edc5: movzx edx, word ptr [ecx + 0x3c] */ r_edx = (u32)R16((u32)(r_ecx+0x3cu));
    /* 0067edc9: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067edcb: je 0x67edd3 */ if (fZ) goto L_0067edd3;
L_0067edcd:; BB(0x0067edcd);
    /* 0067edcd: mov dword ptr [ecx + 0x84], ebx */ W32((u32)(r_ecx+0x84u), r_ebx);
L_0067edd3:; BB(0x0067edd3);
    /* 0067edd3: movzx ebx, word ptr [eax + 8] */ r_ebx = (u32)R16((u32)(r_eax+0x8u));
    /* 0067edd7: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eddd: je 0x67eded */ if (fZ) goto L_0067eded;
L_0067eddf:; BB(0x0067eddf);
    /* 0067eddf: movzx edx, word ptr [ecx + 0x3c] */ r_edx = (u32)R16((u32)(r_ecx+0x3cu));
    /* 0067ede3: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ede5: je 0x67eded */ if (fZ) goto L_0067eded;
L_0067ede7:; BB(0x0067ede7);
    /* 0067ede7: mov dword ptr [ecx + 0x88], ebx */ W32((u32)(r_ecx+0x88u), r_ebx);
L_0067eded:; BB(0x0067eded);
    /* 0067eded: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 0067edf1: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067edf7: je 0x67ee0c */ if (fZ) goto L_0067ee0c;
L_0067edf9:; BB(0x0067edf9);
    /* 0067edf9: movzx eax, word ptr [ecx + 0x3c] */ r_eax = (u32)R16((u32)(r_ecx+0x3cu));
    /* 0067edfd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067edff: je 0x67ee0c */ if (fZ) goto L_0067ee0c;
L_0067ee01:; BB(0x0067ee01);
    /* 0067ee01: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 0067ee07: jmp 0x67ee0c */ goto L_0067ee0c;
L_0067ee09:; BB(0x0067ee09);
    /* 0067ee09: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
L_0067ee0c:; BB(0x0067ee0c);
    /* 0067ee0c: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0067ee0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067ee11: je 0x67ee44 */ if (fZ) goto L_0067ee44;
L_0067ee13:; BB(0x0067ee13);
    /* 0067ee13: movzx eax, word ptr [ecx + 0x3c] */ r_eax = (u32)R16((u32)(r_ecx+0x3cu));
    /* 0067ee17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee18: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ee1du); f_0068d5a8();
    /* 0067ee1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ee1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067ee20: je 0x67ee41 */ if (fZ) goto L_0067ee41;
L_0067ee22:; BB(0x0067ee22);
    /* 0067ee22: mov ecx, eax */ r_ecx = r_eax;
    /* 0067ee24: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x67ee29u); f_007ba980();
    /* 0067ee29: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ee2c: add edx, 0x90 */ {  u32 a = r_edx; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067ee32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee34: call 0x69b5ac */ r_esp -= 4; W32(r_esp, 0x67ee39u); f_0069b5ac();
    /* 0067ee39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067ee3c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ee3f: jmp 0x67ee44 */ goto L_0067ee44;
L_0067ee41:; BB(0x0067ee41);
    /* 0067ee41: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
L_0067ee44:; BB(0x0067ee44);
    /* 0067ee44: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0067ee47: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067ee4a: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067ee4d: mov eax, ecx */ r_eax = r_ecx;
    /* 0067ee4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067ee52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067ee59: mov esp, ebp */ r_esp = r_ebp;
    /* 0067ee5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067ee5c: ret 0x14 */ FN_RET(0x0067e9e0); r_esp += 24; return;
L_0067ee5f:; BB(0x0067ee5f);
    /* 0067ee5f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ee62: jmp 0x67ee0c */ goto L_0067ee0c;
L_0067ee64:; BB(0x0067ee64);
    /* 0067ee64: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067ee67: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 0067ee6a: jmp 0x67eb46 */ goto L_0067eb46;
}

void f_0067ee70(void) /* sub_67EE70 */
{
    FN_ENTER(0x0067ee70);
    /* 0067ee70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee71: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067ee74: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0067ee76: movzx eax, word ptr [ebp + 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0x3cu));
    /* 0067ee7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ee7b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67ee80u); f_0068d5a8();
    /* 0067ee80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ee81: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0067ee84: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 0067ee87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ee89: je 0x67ee94 */ if (fZ) goto L_0067ee94;
L_0067ee8b:; BB(0x0067ee8b);
    /* 0067ee8b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067ee8d: call 0x67f5b4 */ r_esp -= 4; W32(r_esp, 0x67ee92u); f_0067f5b4();
    /* 0067ee92: jmp 0x67eee9 */ goto L_0067eee9;
L_0067ee94:; BB(0x0067ee94);
    /* 0067ee94: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 0067ee97: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ee9a: cmp eax, dword ptr [ebp + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ee9d: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0067eea0: jle 0x67eee9 */ if ((fZ||fS!=fO)) goto L_0067eee9;
L_0067eea2:; BB(0x0067eea2);
    /* 0067eea2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0067eea5: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0067eea9: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0067eead: lea edx, [ebp + 0x50] */ r_edx = (u32)(r_ebp+0x50u);
    /* 0067eeb0: lea eax, [ebp + 0x60] */ r_eax = (u32)(r_ebp+0x60u);
    /* 0067eeb3: mov ebx, eax */ r_ebx = r_eax;
    /* 0067eeb5: mov esi, edx */ r_esi = r_edx;
L_0067eeb7:; BB(0x0067eeb7);
    /* 0067eeb7: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0067eeb9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eebc: je 0x67eeee */ if (fZ) goto L_0067eeee;
L_0067eebe:; BB(0x0067eebe);
    /* 0067eebe: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067eec1: je 0x67eeee */ if (fZ) goto L_0067eeee;
L_0067eec3:; BB(0x0067eec3);
    /* 0067eec3: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067eec6: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067eec8: ja 0x67eeb7 */ if ((!fC&&!fZ)) goto L_0067eeb7;
L_0067eeca:; BB(0x0067eeca);
    /* 0067eeca: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0067eecd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0067eed1: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0067eed5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067eed7: call 0x67ef10 */ r_esp -= 4; W32(r_esp, 0x67eedcu); f_0067ef10();
    /* 0067eedc: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0067eee0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067eee5: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_0067eee9:; BB(0x0067eee9);
    /* 0067eee9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067eeec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067eeed: ret  */ FN_RET(0x0067ee70); r_esp += 4; return;
L_0067eeee:; BB(0x0067eeee);
    /* 0067eeee: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067eef0:; BB(0x0067eef0);
    /* 0067eef0: mov eax, dword ptr [ebp + edi*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x60u));
    /* 0067eef4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067eef7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0067eefa: jae 0x67ef09 */ if (!fC) goto L_0067ef09;
L_0067eefc:; BB(0x0067eefc);
    /* 0067eefc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067eefe: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0067ef00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef01: call 0x67d524 */ r_esp -= 4; W32(r_esp, 0x67ef06u); f_0067d524();
    /* 0067ef06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067ef09:; BB(0x0067ef09);
    /* 0067ef09: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ef0c: jl 0x67eef0 */ if ((fS!=fO)) goto L_0067eef0;
L_0067ef0e:; BB(0x0067ef0e);
    /* 0067ef0e: jmp 0x67eec3 */ goto L_0067eec3;
}

void f_0067ef10(void) /* sub_67EF10 */
{
    FN_ENTER(0x0067ef10);
    /* 0067ef10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef11: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067ef14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067ef16: mov edx, dword ptr [0xa903b0] */ r_edx = R32((u32)(0xa903b0u));
    /* 0067ef1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067ef1e: jle 0x67f355 */ if ((fZ||fS!=fO)) goto L_0067f355;
L_0067ef24:; BB(0x0067ef24);
    /* 0067ef24: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0067ef28: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0067ef2c: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0067ef30: mov ebx, eax */ r_ebx = r_eax;
    /* 0067ef32: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0067ef36: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067ef39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067ef3b: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0067ef3e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0067ef40:; BB(0x0067ef40);
    /* 0067ef40: movzx edx, word ptr [esi + 0xa900a0] */ r_edx = (u32)R16((u32)(r_esi+0xa900a0u));
    /* 0067ef47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef48: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67ef4du); f_007b4d18();
    /* 0067ef4d: mov ebp, eax */ r_ebp = r_eax;
    /* 0067ef4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067ef52: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ef54: je 0x67f337 */ if (fZ) goto L_0067f337;
L_0067ef5a:; BB(0x0067ef5a);
    /* 0067ef5a: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067ef60: fld dword ptr [esi + 0xa900a4] */ FPUSH(R_F32((u32)(r_esi+0xa900a4u)));
    /* 0067ef66: fld dword ptr [0x93bd18] */ FPUSH(R_F32((u32)(0x93bd18u)));
    /* 0067ef6c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067ef70: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0067ef73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067ef75: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067ef79: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067ef7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ef7f: je 0x67f085 */ if (fZ) goto L_0067f085;
L_0067ef85:; BB(0x0067ef85);
    /* 0067ef85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ef87: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ef8d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x67ef92u); f_0069792c();
    /* 0067ef92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ef94: je 0x67f47c */ if (fZ) goto L_0067f47c;
L_0067ef9a:; BB(0x0067ef9a);
    /* 0067ef9a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067ef9c: je 0x67f41f */ if (fZ) goto L_0067f41f;
L_0067efa2:; BB(0x0067efa2);
    /* 0067efa2: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067efa5: je 0x67f3cd */ if (fZ) goto L_0067f3cd;
L_0067efab:; BB(0x0067efab);
    /* 0067efab: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067efae: je 0x67f370 */ if (fZ) goto L_0067f370;
L_0067efb4:; BB(0x0067efb4);
    /* 0067efb4: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067efb7: je 0x67f038 */ if (fZ) goto L_0067f038;
L_0067efbd:; BB(0x0067efbd);
    /* 0067efbd: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067efc0: jne 0x67efea */ if (!fZ) goto L_0067efea;
L_0067efc2:; BB(0x0067efc2);
    /* 0067efc2: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067efc8: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067efcf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0067efd3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0067efd7: fmul dword ptr [0x93bd0c] */ ST(0) = ST(0) * R_F32((u32)(0x93bd0cu));
    /* 0067efdd: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 0067efe1: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067efe5: jmp 0x67f085 */ goto L_0067f085;
L_0067efea:; BB(0x0067efea);
    /* 0067efea: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067efed: je 0x67effa */ if (fZ) goto L_0067effa;
L_0067efef:; BB(0x0067efef);
    /* 0067efef: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067eff5: jmp 0x67f085 */ goto L_0067f085;
L_0067effa:; BB(0x0067effa);
    /* 0067effa: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067f001: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067f005: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f009: fmul dword ptr [0x93bd14] */ ST(0) = ST(0) * R_F32((u32)(0x93bd14u));
    /* 0067f00f: fcom dword ptr [0x93bd10] */ fx_compare(ST(0), R_F32((u32)(0x93bd10u))); 
    /* 0067f015: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067f017: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067f01b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067f01c: jb 0x67f030 */ if (fC) goto L_0067f030;
L_0067f01e:; BB(0x0067f01e);
    /* 0067f01e: fld dword ptr [0x93bd10] */ FPUSH(R_F32((u32)(0x93bd10u)));
    /* 0067f024: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067f02a: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067f02e: jmp 0x67f085 */ goto L_0067f085;
L_0067f030:; BB(0x0067f030);
    /* 0067f030: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067f036: jmp 0x67f085 */ goto L_0067f085;
L_0067f038:; BB(0x0067f038);
    /* 0067f038: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067f03c: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067f040: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067f047: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067f04a: movsx ecx, word ptr [edi + 0x2d4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d4u));
    /* 0067f051: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067f058: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067f05b: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067f061: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067f065: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f069: fmul dword ptr [0x93bd08] */ ST(0) = ST(0) * R_F32((u32)(0x93bd08u));
    /* 0067f06f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f071: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067f075: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f079: fmul dword ptr [0x93bd04] */ ST(0) = ST(0) * R_F32((u32)(0x93bd04u));
    /* 0067f07f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f081: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_0067f085:; BB(0x0067f085);
    /* 0067f085: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067f089: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0067f08d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067f090: imul eax, dword ptr [edx + 0x28] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x28u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067f094: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f097: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067f09b: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f09f: fmul qword ptr [0x93bc90] */ ST(0) = ST(0) * R_F64((u32)(0x93bc90u));
    /* 0067f0a5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067f0a7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0067f0ab: je 0x67f487 */ if (fZ) goto L_0067f487;
L_0067f0b1:; BB(0x0067f0b1);
    /* 0067f0b1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f0b4: je 0x67f0e2 */ if (fZ) goto L_0067f0e2;
L_0067f0b6:; BB(0x0067f0b6);
    /* 0067f0b6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067f0b9: mov dword ptr [esp], 4 */ W32((u32)(r_esp), 0x4u);
    /* 0067f0c0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067f0c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067f0c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0cb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f0cf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f0d1: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067f0d5: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f0d8: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67f0dbu); call_ind(t); }
    /* 0067f0db: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067f0dd: jmp 0x67f337 */ goto L_0067f337;
L_0067f0e2:; BB(0x0067f0e2);
    /* 0067f0e2: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067f0e6: mov esi, edx */ r_esi = r_edx;
    /* 0067f0e8: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067f0ec: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067f0ee:; BB(0x0067f0ee);
    /* 0067f0ee: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f0f5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67f0fau); f_0068d5a8();
    /* 0067f0fa: mov ebx, eax */ r_ebx = r_eax;
    /* 0067f0fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f0ff: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f101: je 0x67f162 */ if (fZ) goto L_0067f162;
L_0067f103:; BB(0x0067f103);
    /* 0067f103: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0067f106: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f10c: je 0x67f118 */ if (fZ) goto L_0067f118;
L_0067f10e:; BB(0x0067f10e);
    /* 0067f10e: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0067f113: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0067f116: jmp 0x67f122 */ goto L_0067f122;
L_0067f118:; BB(0x0067f118);
    /* 0067f118: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067f11f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0067f122:; BB(0x0067f122);
    /* 0067f122: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0067f124: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067f129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f12a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f12b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f12d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f131: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f132: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f135: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067f137: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67f13au); call_ind(t); }
    /* 0067f13a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067f13c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f13e: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f143: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067f149: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f14a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67f14fu); f_0050b7a4();
    /* 0067f14f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f154: je 0x67f162 */ if (fZ) goto L_0067f162;
L_0067f156:; BB(0x0067f156);
    /* 0067f156: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067f15a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f15b: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f15d: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f162u); f_00508f14();
L_0067f162:; BB(0x0067f162);
    /* 0067f162: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067f165: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f168: jl 0x67f0ee */ if ((fS!=fO)) goto L_0067f0ee;
L_0067f16a:; BB(0x0067f16a);
    /* 0067f16a: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067f16e: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067f172: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0067f175: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f17b: je 0x67f187 */ if (fZ) goto L_0067f187;
L_0067f17d:; BB(0x0067f17d);
    /* 0067f17d: mov eax, 8 */ r_eax = 0x8u;
    /* 0067f182: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0067f185: jmp 0x67f191 */ goto L_0067f191;
L_0067f187:; BB(0x0067f187);
    /* 0067f187: mov dword ptr [esp], 7 */ W32((u32)(r_esp), 0x7u);
    /* 0067f18e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0067f191:; BB(0x0067f191);
    /* 0067f191: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0067f194: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067f199: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f19a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067f19c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f19d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f19f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f1a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f1a4: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067f1a8: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f1ab: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67f1aeu); call_ind(t); }
    /* 0067f1ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067f1b0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f1b2: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f1b7: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067f1bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f1be: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67f1c3u); f_0050b7a4();
    /* 0067f1c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f1c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f1c8: je 0x67f1d6 */ if (fZ) goto L_0067f1d6;
L_0067f1ca:; BB(0x0067f1ca);
    /* 0067f1ca: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f1ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f1cf: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f1d1: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f1d6u); f_00508f14();
L_0067f1d6:; BB(0x0067f1d6);
    /* 0067f1d6: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 0067f1dd: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067f1e1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067f1e3: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067f1e7:; BB(0x0067f1e7);
    /* 0067f1e7: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f1ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67f1f3u); f_0068d5a8();
    /* 0067f1f3: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f1f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f1f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f1fa: je 0x67f217 */ if (fZ) goto L_0067f217;
L_0067f1fc:; BB(0x0067f1fc);
    /* 0067f1fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067f1fe: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067f203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f205: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f207: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f20b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f20f: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f212: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67f215u); call_ind(t); }
    /* 0067f215: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067f217:; BB(0x0067f217);
    /* 0067f217: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067f21a: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f21d: jl 0x67f1e7 */ if ((fS!=fO)) goto L_0067f1e7;
L_0067f21f:; BB(0x0067f21f);
    /* 0067f21f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067f223: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067f226: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067f22b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f22c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067f22e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f22f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f231: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f235: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f239: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067f23d: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f240: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67f243u); call_ind(t); }
    /* 0067f243: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067f245: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 0067f24c: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067f250: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0067f252: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_0067f256:; BB(0x0067f256);
    /* 0067f256: push dword ptr [ebx + edi*4 + 0x80] */ { u32 v = R32((u32)(r_ebx+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f25d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67f262u); f_0068d5a8();
    /* 0067f262: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f264: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f267: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f269: je 0x67f286 */ if (fZ) goto L_0067f286;
L_0067f26b:; BB(0x0067f26b);
    /* 0067f26b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067f26d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0067f272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f274: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f276: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f27a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f27e: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f281: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67f284u); call_ind(t); }
    /* 0067f284: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0067f286:; BB(0x0067f286);
    /* 0067f286: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067f289: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f28c: jl 0x67f256 */ if ((fS!=fO)) goto L_0067f256;
L_0067f28e:; BB(0x0067f28e);
    /* 0067f28e: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067f292: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067f295: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067f29a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f29b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067f29d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f29e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2a0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f2a4: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f2a8: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067f2ac: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f2af: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67f2b2u); call_ind(t); }
    /* 0067f2b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067f2b4: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f2b8: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f2be: jne 0x67f2f0 */ if (!fZ) goto L_0067f2f0;
L_0067f2c0:; BB(0x0067f2c0);
    /* 0067f2c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067f2c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2c5: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2ca: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67f2cfu); f_00814298();
    /* 0067f2cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067f2d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2d4: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2d9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67f2deu); f_00814298();
    /* 0067f2de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067f2e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2e3: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67f2edu); f_00814298();
    /* 0067f2ed: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067f2f0:; BB(0x0067f2f0);
    /* 0067f2f0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2f2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2f4: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067f2f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2f9: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f2ff: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x67f304u); f_0050ac1c();
    /* 0067f304: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f307: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f309: je 0x67f317 */ if (fZ) goto L_0067f317;
L_0067f30b:; BB(0x0067f30b);
    /* 0067f30b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f30f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f310: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f312: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f317u); f_00508f14();
L_0067f317:; BB(0x0067f317);
    /* 0067f317: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f319: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f31e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f31f: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67f324u); f_0050b7a4();
    /* 0067f324: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f327: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f329: je 0x67f337 */ if (fZ) goto L_0067f337;
L_0067f32b:; BB(0x0067f32b);
    /* 0067f32b: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f32f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f330: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f332: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f337u); f_00508f14();
L_0067f337:; BB(0x0067f337);
    /* 0067f337: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067f33a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067f33d: cmp ebx, dword ptr [0xa903b0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa903b0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f343: jl 0x67ef40 */ if ((fS!=fO)) goto L_0067ef40;
L_0067f349:; BB(0x0067f349);
    /* 0067f349: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0067f34d: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0067f351: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0067f355:; BB(0x0067f355);
    /* 0067f355: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067f357: mov dword ptr [0xa904a0], eax */ W32((u32)(0xa904a0u), r_eax);
    /* 0067f35c: mov dword ptr [0xa904a4], eax */ W32((u32)(0xa904a4u), r_eax);
    /* 0067f361: mov dword ptr [0xa904a8], eax */ W32((u32)(0xa904a8u), r_eax);
    /* 0067f366: mov dword ptr [0xa904ac], eax */ W32((u32)(0xa904acu), r_eax);
    /* 0067f36b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067f36e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067f36f: ret  */ FN_RET(0x0067ef10); r_esp += 4; return;
L_0067f370:; BB(0x0067f370);
    /* 0067f370: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067f374: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067f378: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067f37f: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067f382: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067f389: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067f38f: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067f392: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067f399: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067f39d: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f3a1: fmul dword ptr [0x93bd08] */ ST(0) = ST(0) * R_F32((u32)(0x93bd08u));
    /* 0067f3a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f3a9: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067f3ab: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067f3ae: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067f3b4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067f3b8: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f3bc: fmul dword ptr [0x93bd04] */ ST(0) = ST(0) * R_F32((u32)(0x93bd04u));
    /* 0067f3c2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f3c4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067f3c8: jmp 0x67f085 */ goto L_0067f085;
L_0067f3cd:; BB(0x0067f3cd);
    /* 0067f3cd: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0067f3d1: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067f3d5: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067f3dc: mov edi, dword ptr [edi + 0x38] */ r_edi = R32((u32)(r_edi+0x38u));
    /* 0067f3df: movsx ecx, word ptr [edi + 0x2d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2d0u));
    /* 0067f3e6: movsx edi, word ptr [eax + 0x1be] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067f3ed: imul ecx, edi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067f3f0: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067f3f6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0067f3fa: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f3fe: fmul dword ptr [0x93bd00] */ ST(0) = ST(0) * R_F32((u32)(0x93bd00u));
    /* 0067f404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f406: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067f40a: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f40e: fmul dword ptr [0x93bcfc] */ ST(0) = ST(0) * R_F32((u32)(0x93bcfcu));
    /* 0067f414: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f416: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067f41a: jmp 0x67f085 */ goto L_0067f085;
L_0067f41f:; BB(0x0067f41f);
    /* 0067f41f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0067f423: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067f427: movsx ecx, word ptr [eax + 0x1bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 0067f42e: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0067f431: movsx edi, word ptr [edx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2ccu));
    /* 0067f438: mov edx, dword ptr [edx + 0x31c] */ r_edx = R32((u32)(r_edx+0x31cu));
    /* 0067f43e: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0067f441: movsx eax, word ptr [eax + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1beu));
    /* 0067f448: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0067f44c: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f450: fmul dword ptr [0x93bcf8] */ ST(0) = ST(0) * R_F32((u32)(0x93bcf8u));
    /* 0067f456: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f458: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067f45a: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067f45d: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067f463: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067f467: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067f46b: fmul dword ptr [0x93bcf4] */ ST(0) = ST(0) * R_F32((u32)(0x93bcf4u));
    /* 0067f471: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067f473: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0067f477: jmp 0x67f085 */ goto L_0067f085;
L_0067f47c:; BB(0x0067f47c);
    /* 0067f47c: mov edi, dword ptr [esi + 0xa900a8] */ r_edi = R32((u32)(r_esi+0xa900a8u));
    /* 0067f482: jmp 0x67f085 */ goto L_0067f085;
L_0067f487:; BB(0x0067f487);
    /* 0067f487: mov dword ptr [esp], 6 */ W32((u32)(r_esp), 0x6u);
    /* 0067f48e: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0067f492: mov esi, edx */ r_esi = r_edx;
    /* 0067f494: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0067f498: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0067f49a:; BB(0x0067f49a);
    /* 0067f49a: push dword ptr [esi + edi*4 + 0x80] */ { u32 v = R32((u32)(r_esi+r_edi*4+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f4a1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67f4a6u); f_0068d5a8();
    /* 0067f4a6: mov ebx, eax */ r_ebx = r_eax;
    /* 0067f4a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f4ab: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f4ad: je 0x67f4f2 */ if (fZ) goto L_0067f4f2;
L_0067f4af:; BB(0x0067f4af);
    /* 0067f4af: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0067f4b1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067f4b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067f4b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4bc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f4c0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f4c4: push dword ptr [esi + 0x38] */ { u32 v = R32((u32)(r_esi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f4c7: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67f4cau); call_ind(t); }
    /* 0067f4ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067f4cc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4ce: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4d3: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0067f4d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4da: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67f4dfu); f_0050b7a4();
    /* 0067f4df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f4e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f4e4: je 0x67f4f2 */ if (fZ) goto L_0067f4f2;
L_0067f4e6:; BB(0x0067f4e6);
    /* 0067f4e6: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067f4ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f4eb: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f4ed: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f4f2u); f_00508f14();
L_0067f4f2:; BB(0x0067f4f2);
    /* 0067f4f2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067f4f5: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f4f8: jl 0x67f49a */ if ((fS!=fO)) goto L_0067f49a;
L_0067f4fa:; BB(0x0067f4fa);
    /* 0067f4fa: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0067f4fe: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0067f502: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f506: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f50c: jne 0x67f520 */ if (!fZ) goto L_0067f520;
L_0067f50e:; BB(0x0067f50e);
    /* 0067f50e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067f510: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f511: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f512: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f513: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f518: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x67f51du); f_00814298();
    /* 0067f51d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067f520:; BB(0x0067f520);
    /* 0067f520: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0067f523: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0067f528: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f529: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067f52b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f52c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f52e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f532: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f536: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067f53a: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067f53d: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x67f540u); call_ind(t); }
    /* 0067f540: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067f542: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f544: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f549: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0067f54f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f550: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67f555u); f_0050b7a4();
    /* 0067f555: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f558: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f55a: je 0x67f568 */ if (fZ) goto L_0067f568;
L_0067f55c:; BB(0x0067f55c);
    /* 0067f55c: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f561: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f563: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f568u); f_00508f14();
L_0067f568:; BB(0x0067f568);
    /* 0067f568: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f56a: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f56f: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0067f572: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f573: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67f578u); f_0050b7a4();
    /* 0067f578: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f57b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f57d: je 0x67f58b */ if (fZ) goto L_0067f58b;
L_0067f57f:; BB(0x0067f57f);
    /* 0067f57f: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f583: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f584: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f586: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f58bu); f_00508f14();
L_0067f58b:; BB(0x0067f58b);
    /* 0067f58b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f58d: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 0067f592: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f593: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x67f598u); f_0050b7a4();
    /* 0067f598: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f59b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f59d: je 0x67f337 */ if (fZ) goto L_0067f337;
L_0067f5a3:; BB(0x0067f5a3);
    /* 0067f5a3: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0067f5a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067f5a8: mov ecx, eax */ r_ecx = r_eax;
    /* 0067f5aa: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x67f5afu); f_00508f14();
    /* 0067f5af: jmp 0x67f337 */ goto L_0067f337;
}

