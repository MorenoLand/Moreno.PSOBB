#include "protos.h"

void f_0048701c(void) /* sub_48701C */
{
    FN_ENTER(0x0048701c);
    /* 0048701c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048701d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048701f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00487021: push 0x8cfc60 */ { u32 v = 0x8cfc60u; r_esp -= 4; W32(r_esp, v); }
    /* 00487026: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048702c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048702d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00487034: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487037: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048703a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048703d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00487040: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00487043: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00487045: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0048704c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x487051u); f_005caba4();
    /* 00487051: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487052: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00487055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487057: je 0x487098 */ if (fZ) goto L_00487098;
L_00487059:; BB(0x00487059);
    /* 00487059: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00487060: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00487067: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048706a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048706d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00487071: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487075: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048707b: call 0x48709c */ r_esp -= 4; W32(r_esp, 0x487080u); f_0048709c();
    /* 00487080: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487083: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0048708a:; BB(0x0048708a);
    /* 0048708a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048708d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00487094: mov esp, ebp */ r_esp = r_ebp;
    /* 00487096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487097: ret  */ FN_RET(0x0048701c); r_esp += 4; return;
L_00487098:; BB(0x00487098);
    /* 00487098: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048709a: jmp 0x48708a */ goto L_0048708a;
}

void f_0048709c(void) /* sub_48709C */
{
    FN_ENTER(0x0048709c);
    /* 0048709c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048709d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048709f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004870a1: push 0x8cfc7c */ { u32 v = 0x8cfc7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004870a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004870ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004870ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004870b4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004870b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004870ba: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004870bd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004870c0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004870c3: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 004870c7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004870ca: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004870cd: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004870d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004870d3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004870d6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004870d9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004870dc: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4870e1u); f_008193cc();
    /* 004870e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004870e8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004870eb: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004870ee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004870f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004870f2: mov word ptr [ecx + 0x20], bx */ W16((u32)(r_ecx+0x20u), (u16)r_ebx);
    /* 004870f6: mov dword ptr [ecx], 0xaf8a18 */ W32((u32)(r_ecx), 0xaf8a18u);
    /* 004870fc: mov eax, dword ptr [0x9a68f4] */ r_eax = R32((u32)(0x9a68f4u));
    /* 00487101: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00487104: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00487107: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0048710e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x487113u); f_0068d5a8();
    /* 00487113: mov ebx, eax */ r_ebx = r_eax;
    /* 00487115: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487118: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048711a: je 0x48716c */ if (fZ) goto L_0048716c;
L_0048711c:; BB(0x0048711c);
    /* 0048711c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048711d: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x487122u); f_0048e100();
    /* 00487122: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00487125: jne 0x48712c */ if (!fZ) goto L_0048712c;
L_00487127:; BB(0x00487127);
    /* 00487127: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048712a: jmp 0x48716f */ goto L_0048716f;
L_0048712c:; BB(0x0048712c);
    /* 0048712c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048712f: push dword ptr [edx*4 + 0x900f38] */ { u32 v = R32((u32)(r_edx*4+0x900f38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00487136: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00487139: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048713a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48713fu); f_00509590();
    /* 0048713f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487142: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00487145: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00487148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048714a: je 0x48716f */ if (fZ) goto L_0048716f;
L_0048714c:; BB(0x0048714c);
    /* 0048714c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048714e: mov ecx, eax */ r_ecx = r_eax;
    /* 00487150: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x487155u); f_00508efc();
    /* 00487155: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00487158: mov edx, dword ptr [0x9a68f0] */ r_edx = R32((u32)(0x9a68f0u));
    /* 0048715e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00487161: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00487164: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00487167: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048716a: jmp 0x48716f */ goto L_0048716f;
L_0048716c:; BB(0x0048716c);
    /* 0048716c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
L_0048716f:; BB(0x0048716f);
    /* 0048716f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487172: mov eax, edx */ r_eax = r_edx;
    /* 00487174: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 0048717b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048717e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00487185: mov esp, ebp */ r_esp = r_ebp;
    /* 00487187: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487188: ret 0x10 */ FN_RET(0x0048709c); r_esp += 20; return;
}

void f_0048718c(void) /* sub_48718C */
{
    FN_ENTER(0x0048718c);
    /* 0048718c: mov dword ptr [0xa46d04], 0x3f800000 */ W32((u32)(0xa46d04u), 0x3f800000u);
    /* 00487196: mov dword ptr [0xa46d08], 0x41000000 */ W32((u32)(0xa46d08u), 0x41000000u);
    /* 004871a0: mov dword ptr [0xa46d0c], 0x3fc00000 */ W32((u32)(0xa46d0cu), 0x3fc00000u);
    /* 004871aa: ret  */ FN_RET(0x0048718c); r_esp += 4; return;
}

void f_004871ac(void) /* sub_4871AC */
{
    FN_ENTER(0x004871ac);
    /* 004871ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004871ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004871af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004871b1: call 0x4871d0 */ r_esp -= 4; W32(r_esp, 0x4871b6u); f_004871d0();
    /* 004871b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004871ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004871bc: jne 0x4871c2 */ if (!fZ) goto L_004871c2;
L_004871be:; BB(0x004871be);
    /* 004871be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004871bf: ret 4 */ FN_RET(0x004871ac); r_esp += 8; return;
L_004871c2:; BB(0x004871c2);
    /* 004871c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004871c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4871c8u); f_005c2f74();
    /* 004871c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004871c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004871ca: ret 4 */ FN_RET(0x004871ac); r_esp += 8; return;
}

void f_004871d0(void) /* sub_4871D0 */
{
    FN_ENTER(0x004871d0);
    /* 004871d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004871d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004871d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004871d5: push 0x8cfc98 */ { u32 v = 0x8cfc98u; r_esp -= 4; W32(r_esp, v); }
    /* 004871da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004871e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004871e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004871e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004871eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004871ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004871f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004871f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004871f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004871fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00487201: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487204: mov dword ptr [eax], 0xaf8aa0 */ W32((u32)(r_eax), 0xaf8aa0u);
    /* 0048720a: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x48720fu); f_0044bf4c();
    /* 0048720f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00487216: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487219: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x48721eu); f_008171e8();
    /* 0048721e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00487221: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00487228: mov esp, ebp */ r_esp = r_ebp;
    /* 0048722a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048722b: ret  */ FN_RET(0x004871d0); r_esp += 4; return;
}

void f_0048722c(void) /* sub_48722C */
{
    FN_ENTER(0x0048722c);
    /* 0048722c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048722d: mov esi, ecx */ r_esi = r_ecx;
    /* 0048722f: call 0x48ea9c */ r_esp -= 4; W32(r_esp, 0x487234u); f_0048ea9c();
    /* 00487234: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487236: jne 0x487282 */ if (!fZ) goto L_00487282;
L_00487238:; BB(0x00487238);
    /* 00487238: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0048723b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048723e: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00487241: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00487244: jle 0x487280 */ if ((fZ||fS!=fO)) goto L_00487280;
L_00487246:; BB(0x00487246);
    /* 00487246: call 0x48dc74 */ r_esp -= 4; W32(r_esp, 0x48724bu); f_0048dc74();
    /* 0048724b: call 0x491d94 */ r_esp -= 4; W32(r_esp, 0x487250u); f_00491d94();
    /* 00487250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487252: je 0x487266 */ if (fZ) goto L_00487266;
L_00487254:; BB(0x00487254);
    /* 00487254: call 0x491dc8 */ r_esp -= 4; W32(r_esp, 0x487259u); f_00491dc8();
    /* 00487259: push 0x900f60 */ { u32 v = 0x900f60u; r_esp -= 4; W32(r_esp, v); }
    /* 0048725e: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x487263u); f_00814afc();
    /* 00487263: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487264: jmp 0x487271 */ goto L_00487271;
L_00487266:; BB(0x00487266);
    /* 00487266: push 0x900f68 */ { u32 v = 0x900f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0048726b: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x487270u); f_00814afc();
    /* 00487270: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00487271:; BB(0x00487271);
    /* 00487271: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00487275: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048727a: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0048727e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048727f: ret  */ FN_RET(0x0048722c); r_esp += 4; return;
L_00487280:; BB(0x00487280);
    /* 00487280: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487281: ret  */ FN_RET(0x0048722c); r_esp += 4; return;
L_00487282:; BB(0x00487282);
    /* 00487282: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00487286: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048728b: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0048728f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487290: ret  */ FN_RET(0x0048722c); r_esp += 4; return;
}

void f_00487294(void) /* sub_487294 */
{
    FN_ENTER(0x00487294);
    /* 00487294: call 0x48729c */ r_esp -= 4; W32(r_esp, 0x487299u); f_0048729c();
    /* 00487299: ret  */ FN_RET(0x00487294); r_esp += 4; return;
}

void f_0048729c(void) /* sub_48729C */
{
    FN_ENTER(0x0048729c);
    /* 0048729c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048729f: mov dword ptr [esp + 4], 0x900f4c */ W32((u32)(r_esp+0x4u), 0x900f4cu);
    /* 004872a7: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004872af: mov dword ptr [esp + 0xc], 4 */ W32((u32)(r_esp+0xcu), 0x4u);
    /* 004872b7: mov dword ptr [esp], 0x9a68f8 */ W32((u32)(r_esp), 0x9a68f8u);
    /* 004872be: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4872c3u); f_007a9380();
    /* 004872c3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004872c6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004872c8: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004872cd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004872cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004872d0: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4872d5u); f_0082b5d8();
    /* 004872d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004872d8: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4872ddu); f_007a9318();
    /* 004872dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004872e0: ret  */ FN_RET(0x0048729c); r_esp += 4; return;
}

void f_004872e4(void) /* sub_4872E4 */
{
    FN_ENTER(0x004872e4);
    /* 004872e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004872e5: mov ebp, esp */ r_ebp = r_esp;
    /* 004872e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004872e9: push 0x8cfcc0 */ { u32 v = 0x8cfcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 004872ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004872f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004872f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004872fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004872ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00487302: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00487305: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00487308: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048730b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048730d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00487314: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x487319u); f_005caba4();
    /* 00487319: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048731a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048731d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048731f: je 0x487355 */ if (fZ) goto L_00487355;
L_00487321:; BB(0x00487321);
    /* 00487321: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00487328: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048732f: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00487335: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487338: call 0x48735c */ r_esp -= 4; W32(r_esp, 0x48733du); f_0048735c();
    /* 0048733d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487340: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00487347:; BB(0x00487347);
    /* 00487347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048734a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00487351: mov esp, ebp */ r_esp = r_ebp;
    /* 00487353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487354: ret  */ FN_RET(0x004872e4); r_esp += 4; return;
L_00487355:; BB(0x00487355);
    /* 00487355: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00487357: jmp 0x487347 */ goto L_00487347;
}

void f_0048735c(void) /* sub_48735C */
{
    FN_ENTER(0x0048735c);
    /* 0048735c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048735d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048735f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00487361: push 0x8cfcdc */ { u32 v = 0x8cfcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00487366: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048736c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048736d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00487374: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487377: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048737a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048737d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00487380: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00487383: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00487386: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00487389: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x48738eu); f_008193cc();
    /* 0048738e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00487395: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487398: mov dword ptr [edx], 0xaf8aa0 */ W32((u32)(r_edx), 0xaf8aa0u);
    /* 0048739e: mov eax, dword ptr [0x9a6918] */ r_eax = R32((u32)(0x9a6918u));
    /* 004873a3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004873a6: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x4873abu); f_0048dc3c();
    /* 004873ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004873ae: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 004873b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004873b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004873bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004873c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004873c2: ret 4 */ FN_RET(0x0048735c); r_esp += 8; return;
}

void f_004873c8(void) /* sub_4873C8 */
{
    FN_ENTER(0x004873c8);
    /* 004873c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004873c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004873cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004873cd: call 0x4873ec */ r_esp -= 4; W32(r_esp, 0x4873d2u); f_004873ec();
    /* 004873d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004873d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004873d8: jne 0x4873de */ if (!fZ) goto L_004873de;
L_004873da:; BB(0x004873da);
    /* 004873da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004873db: ret 4 */ FN_RET(0x004873c8); r_esp += 8; return;
L_004873de:; BB(0x004873de);
    /* 004873de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004873df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4873e4u); f_005c2f74();
    /* 004873e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004873e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004873e6: ret 4 */ FN_RET(0x004873c8); r_esp += 8; return;
}

void f_004873ec(void) /* sub_4873EC */
{
    FN_ENTER(0x004873ec);
    /* 004873ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004873ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004873ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004873f1: push 0x8cfcf8 */ { u32 v = 0x8cfcf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004873f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004873fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004873fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00487404: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487407: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048740a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048740d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00487410: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00487413: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00487416: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048741d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487420: mov dword ptr [ecx], 0xaf8b08 */ W32((u32)(r_ecx), 0xaf8b08u);
    /* 00487426: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00487428:; BB(0x00487428);
    /* 00487428: mov eax, dword ptr [ecx + esi*4 + 0xd4] */ r_eax = R32((u32)(r_ecx+r_esi*4+0xd4u));
    /* 0048742f: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00487432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487434: je 0x48744b */ if (fZ) goto L_0048744b;
L_00487436:; BB(0x00487436);
    /* 00487436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487437: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48743cu); f_005cdcc0();
    /* 0048743c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048743d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00487440: mov dword ptr [ecx + ebx*2 + 0xd4], 0 */ W32((u32)(r_ecx+r_ebx*2+0xd4u), 0x0u);
L_0048744b:; BB(0x0048744b);
    /* 0048744b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048744e: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487451: jl 0x487428 */ if ((fS!=fO)) goto L_00487428;
L_00487453:; BB(0x00487453);
    /* 00487453: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 00487459: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048745b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048745d: jle 0x487486 */ if ((fZ||fS!=fO)) goto L_00487486;
L_0048745f:; BB(0x0048745f);
    /* 0048745f: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 00487466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00487467: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x48746cu); f_0048df48();
    /* 0048746c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048746d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048746f: je 0x48747c */ if (fZ) goto L_0048747c;
L_00487471:; BB(0x00487471);
    /* 00487471: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00487474: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00487479: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_0048747c:; BB(0x0048747c);
    /* 0048747c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048747f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487481: jl 0x48745f */ if ((fS!=fO)) goto L_0048745f;
L_00487483:; BB(0x00487483);
    /* 00487483: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00487486:; BB(0x00487486);
    /* 00487486: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048748d: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x487492u); f_007b4aec();
    /* 00487492: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00487495: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00487498: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048749b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048749e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004874a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004874a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004874a8: ret  */ FN_RET(0x004873ec); r_esp += 4; return;
}

void f_004874ac(void) /* sub_4874AC */
{
    FN_ENTER(0x004874ac);
    /* 004874ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004874ad: mov edi, ecx */ r_edi = r_ecx;
    /* 004874af: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4874b4u); f_004f7c84();
    /* 004874b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004874b6: je 0x4874ba */ if (fZ) goto L_004874ba;
L_004874b8:; BB(0x004874b8);
    /* 004874b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004874b9: ret  */ FN_RET(0x004874ac); r_esp += 4; return;
L_004874ba:; BB(0x004874ba);
    /* 004874ba: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4874bfu); f_00520db8();
    /* 004874bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004874c1: jne 0x4874b8 */ if (!fZ) goto L_004874b8;
L_004874c3:; BB(0x004874c3);
    /* 004874c3: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 004874c9: mov eax, dword ptr [eax*4 + 0x900f7c] */ r_eax = R32((u32)(r_eax*4+0x900f7cu));
    /* 004874d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004874d2: je 0x4874d8 */ if (fZ) goto L_004874d8;
L_004874d4:; BB(0x004874d4);
    /* 004874d4: mov ecx, edi */ r_ecx = r_edi;
    /* 004874d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4874d8u); call_ind(t); }
L_004874d8:; BB(0x004874d8);
    /* 004874d8: add dword ptr [edi + 0xc0], 1 */ { u32 ad = (u32)(r_edi+0xc0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004874df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004874e0: ret  */ FN_RET(0x004874ac); r_esp += 4; return;
}

void f_004874e4(void) /* sub_4874E4 */
{
    FN_ENTER(0x004874e4);
    /* 004874e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004874e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004874e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004874e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004874e8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004874eb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004874ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004874ef: call 0x487934 */ r_esp -= 4; W32(r_esp, 0x4874f4u); f_00487934();
    /* 004874f4: mov edi, eax */ r_edi = r_eax;
    /* 004874f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004874f8: je 0x487501 */ if (fZ) goto L_00487501;
L_004874fa:; BB(0x004874fa);
    /* 004874fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004874fc: call 0x4879c0 */ r_esp -= 4; W32(r_esp, 0x487501u); f_004879c0();
L_00487501:; BB(0x00487501);
    /* 00487501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487503: mov edx, 0xfffffffb */ r_edx = 0xfffffffbu;
    /* 00487508: mov ebx, eax */ r_ebx = r_eax;
    /* 0048750a: mov esi, edx */ r_esi = r_edx;
L_0048750c:; BB(0x0048750c);
    /* 0048750c: mov ecx, dword ptr [ebp + ebx*4 + 0xd4] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xd4u));
    /* 00487513: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487515: je 0x48756d */ if (fZ) goto L_0048756d;
L_00487517:; BB(0x00487517);
    /* 00487517: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048751a: jl 0x487561 */ if ((fS!=fO)) goto L_00487561;
L_0048751c:; BB(0x0048751c);
    /* 0048751c: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048751f: jg 0x487561 */ if ((!fZ&&fS==fO)) goto L_00487561;
L_00487521:; BB(0x00487521);
    /* 00487521: movzx eax, si */ r_eax = (u32)(u16)r_esi;
    /* 00487524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487525: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x48752au); f_0068d5a8();
    /* 0048752a: mov edx, eax */ r_edx = r_eax;
    /* 0048752c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048752f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487531: je 0x48756d */ if (fZ) goto L_0048756d;
L_00487533:; BB(0x00487533);
    /* 00487533: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00487536: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00487539: fadd dword ptr [0x900f8c] */ ST(0) = ST(0) + R_F32((u32)(0x900f8cu));
    /* 0048753f: mov ecx, dword ptr [ebp + ebx*4 + 0xd4] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xd4u));
    /* 00487546: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0048754a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048754e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00487551: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00487555: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00487559: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048755a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x48755fu); f_00508db8();
    /* 0048755f: jmp 0x48756d */ goto L_0048756d;
L_00487561:; BB(0x00487561);
    /* 00487561: lea eax, [ebp + 0xc8] */ r_eax = (u32)(r_ebp+0xc8u);
    /* 00487567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487568: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x48756du); f_00508db8();
L_0048756d:; BB(0x0048756d);
    /* 0048756d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00487570: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00487573: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487576: jl 0x48750c */ if ((fS!=fO)) goto L_0048750c;
L_00487578:; BB(0x00487578);
    /* 00487578: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048757a: jne 0x487584 */ if (!fZ) goto L_00487584;
L_0048757c:; BB(0x0048757c);
    /* 0048757c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048757f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487580: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00487581: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487582: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487583: ret  */ FN_RET(0x004874e4); r_esp += 4; return;
L_00487584:; BB(0x00487584);
    /* 00487584: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 0048758a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048758c: je 0x487903 */ if (fZ) goto L_00487903;
L_00487592:; BB(0x00487592);
    /* 00487592: lea edi, [ebp + 0xc8] */ r_edi = (u32)(r_ebp+0xc8u);
L_00487598:; BB(0x00487598);
    /* 00487598: movzx eax, byte ptr [0xa46d18] */ r_eax = (u32)R8((u32)(0xa46d18u));
    /* 0048759f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004875a1: jne 0x4875b7 */ if (!fZ) goto L_004875b7;
L_004875a3:; BB(0x004875a3);
    /* 004875a3: mov dword ptr [0xa46d1c], 0x3d088889 */ W32((u32)(0xa46d1cu), 0x3d088889u);
    /* 004875ad: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004875b2: mov byte ptr [0xa46d18], al */ W8((u32)(0xa46d18u), (u8)r_eax);
L_004875b7:; BB(0x004875b7);
    /* 004875b7: fld dword ptr [0x900f88] */ FPUSH(R_F32((u32)(0x900f88u)));
    /* 004875bd: fld dword ptr [ebp + 0xbc] */ FPUSH(R_F32((u32)(r_ebp+0xbcu)));
    /* 004875c3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004875c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004875c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004875c8: jae 0x4875e5 */ if (!fC) goto L_004875e5;
L_004875ca:; BB(0x004875ca);
    /* 004875ca: fld dword ptr [0xa46d1c] */ FPUSH(R_F32((u32)(0xa46d1cu)));
    /* 004875d0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004875d2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 004875d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004875d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004875d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004875d9: jb 0x4875dd */ if (fC) goto L_004875dd;
L_004875db:; BB(0x004875db);
    /* 004875db: fst st(2) */ ST(2) = ST(0);
L_004875dd:; BB(0x004875dd);
    /* 004875dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004875df: fstp dword ptr [ebp + 0xbc] */ W_F32((u32)(r_ebp+0xbcu), ST(0)); FPOP();
L_004875e5:; BB(0x004875e5);
    /* 004875e5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004875e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004875e9: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004875ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004875f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004875f3: jle 0x48779b */ if ((fZ||fS!=fO)) goto L_0048779b;
L_004875f9:; BB(0x004875f9);
    /* 004875f9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004875fd: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00487600: mov edi, eax */ r_edi = r_eax;
L_00487602:; BB(0x00487602);
    /* 00487602: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00487609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048760a: movzx ebx, word ptr [esi + 0x1c] */ r_ebx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0048760e: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x487613u); f_0048e100();
    /* 00487613: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487614: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487616: jne 0x48763e */ if (!fZ) goto L_0048763e;
L_00487618:; BB(0x00487618);
    /* 00487618: mov edx, dword ptr [ebp + ebx*4 + 0xe8] */ r_edx = R32((u32)(r_ebp+r_ebx*4+0xe8u));
    /* 0048761f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487621: je 0x487789 */ if (fZ) goto L_00487789;
L_00487627:; BB(0x00487627);
    /* 00487627: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487628: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48762du); f_005cdcc0();
    /* 0048762d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048762e: mov dword ptr [ebp + ebx*4 + 0xe8], 0 */ W32((u32)(r_ebp+r_ebx*4+0xe8u), 0x0u);
    /* 00487639: jmp 0x487789 */ goto L_00487789;
L_0048763e:; BB(0x0048763e);
    /* 0048763e: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00487642: mov edx, 1 */ r_edx = 0x1u;
    /* 00487647: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0048764b: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 00487651: shl ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00487654: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00487658: mov edx, dword ptr [ebp + 0xcc] */ r_edx = R32((u32)(r_ebp+0xccu));
    /* 0048765e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00487662: mov edx, dword ptr [ebp + 0xd0] */ r_edx = R32((u32)(r_ebp+0xd0u));
    /* 00487668: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0048766c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00487670: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x487675u); f_0082dcbc();
    /* 00487675: fmul dword ptr [0x901014] */ ST(0) = ST(0) * R_F32((u32)(0x901014u));
    /* 0048767b: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0048767f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00487683: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00487687: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x48768cu); f_0082ddd8();
    /* 0048768c: fmul dword ptr [0x901014] */ ST(0) = ST(0) * R_F32((u32)(0x901014u));
    /* 00487692: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 00487696: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0048769a: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0048769e: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004876a1: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004876a5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4876aau); f_0082f9c4();
    /* 004876aa: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 004876b2: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004876b6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4876bbu); f_0083173c();
    /* 004876bb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004876bf: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004876c3: fcomp dword ptr [0xa46d20] */ fx_compare(ST(0), R_F32((u32)(0xa46d20u))); FPOP();
    /* 004876c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004876cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004876cc: jbe 0x48773d */ if ((fC||fZ)) goto L_0048773d;
L_004876ce:; BB(0x004876ce);
    /* 004876ce: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 004876d4: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004876d7: jne 0x487882 */ if (!fZ) goto L_00487882;
L_004876dd:; BB(0x004876dd);
    /* 004876dd: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004876e1: fdiv dword ptr [0x901018] */ ST(0) = ST(0) / R_F32((u32)(0x901018u));
    /* 004876e7: fadd dword ptr [0x90101c] */ ST(0) = ST(0) + R_F32((u32)(0x90101cu));
    /* 004876ed: fmul dword ptr [ebp + 0xbc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xbcu));
    /* 004876f3: fld dword ptr [0x90100c] */ FPUSH(R_F32((u32)(0x90100cu)));
    /* 004876f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004876fb: fmul dword ptr [0x901010] */ ST(0) = ST(0) * R_F32((u32)(0x901010u));
    /* 00487701: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00487703: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00487705: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00487706: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00487708: jae 0x48770c */ if (!fC) goto L_0048770c;
L_0048770a:; BB(0x0048770a);
    /* 0048770a: fst st(1) */ ST(1) = ST(0);
L_0048770c:; BB(0x0048770c);
    /* 0048770c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048770e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00487712: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487716: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48771bu); f_0082df08();
    /* 0048771b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048771d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00487721: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00487725: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00487727: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0048772b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048772d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048772f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00487733: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00487737: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00487739: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_0048773d:; BB(0x0048773d);
    /* 0048773d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00487741: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487745: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48774au); f_0082ebac();
    /* 0048774a: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0048774e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487750: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487751: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00487753: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x487758u); f_007b4c58();
    /* 00487758: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0048775c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048775d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048775e: call 0x48dbf4 */ r_esp -= 4; W32(r_esp, 0x487763u); f_0048dbf4();
    /* 00487763: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487766: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0048776a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048776c: je 0x487789 */ if (fZ) goto L_00487789;
L_0048776e:; BB(0x0048776e);
    /* 0048776e: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00487771: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00487777: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0048777a: mov esi, dword ptr [ebp + ebx*4 + 0xe8] */ r_esi = R32((u32)(r_ebp+r_ebx*4+0xe8u));
    /* 00487781: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487783: je 0x4878d2 */ if (fZ) goto L_004878d2;
L_00487789:; BB(0x00487789);
    /* 00487789: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0048778d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00487790: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487792: jl 0x487602 */ if ((fS!=fO)) goto L_00487602;
L_00487798:; BB(0x00487798);
    /* 00487798: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0048779b:; BB(0x0048779b);
    /* 0048779b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048779d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048779e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048779f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004877a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004877a1: push 0x3ce */ { u32 v = 0x3ceu; r_esp -= 4; W32(r_esp, v); }
    /* 004877a6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4877abu); f_008144b0();
    /* 004877ab: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004877ae: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 004877b4: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 004877ba: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004877bd: je 0x487865 */ if (fZ) goto L_00487865;
L_004877c3:; BB(0x004877c3);
    /* 004877c3: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004877c6: jl 0x48786d */ if ((fS!=fO)) goto L_0048786d;
L_004877cc:; BB(0x004877cc);
    /* 004877cc: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004877cf: jle 0x4877e2 */ if ((fZ||fS!=fO)) goto L_004877e2;
L_004877d1:; BB(0x004877d1);
    /* 004877d1: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004877d4: jne 0x48786d */ if (!fZ) goto L_0048786d;
L_004877da:; BB(0x004877da);
    /* 004877da: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004877dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004877de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004877df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004877e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004877e1: ret  */ FN_RET(0x004874e4); r_esp += 4; return;
L_004877e2:; BB(0x004877e2);
    /* 004877e2: mov eax, dword ptr [ebp + 0xd4] */ r_eax = R32((u32)(r_ebp+0xd4u));
    /* 004877e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004877ea: je 0x4877fd */ if (fZ) goto L_004877fd;
L_004877ec:; BB(0x004877ec);
    /* 004877ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004877ed: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4877f2u); f_005cdcc0();
    /* 004877f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004877f3: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
L_004877fd:; BB(0x004877fd);
    /* 004877fd: mov eax, dword ptr [ebp + 0xd8] */ r_eax = R32((u32)(r_ebp+0xd8u));
    /* 00487803: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487805: je 0x487818 */ if (fZ) goto L_00487818;
L_00487807:; BB(0x00487807);
    /* 00487807: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487808: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x48780du); f_005cdcc0();
    /* 0048780d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048780e: mov dword ptr [ebp + 0xd8], 0 */ W32((u32)(r_ebp+0xd8u), 0x0u);
L_00487818:; BB(0x00487818);
    /* 00487818: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 0048781e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487820: je 0x487833 */ if (fZ) goto L_00487833;
L_00487822:; BB(0x00487822);
    /* 00487822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487823: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487828u); f_005cdcc0();
    /* 00487828: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487829: mov dword ptr [ebp + 0xdc], 0 */ W32((u32)(r_ebp+0xdcu), 0x0u);
L_00487833:; BB(0x00487833);
    /* 00487833: mov eax, dword ptr [ebp + 0xe4] */ r_eax = R32((u32)(r_ebp+0xe4u));
    /* 00487839: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048783b: je 0x4878a8 */ if (fZ) goto L_004878a8;
L_0048783d:; BB(0x0048783d);
    /* 0048783d: mov dword ptr [ebp + 0xb0], 1 */ W32((u32)(r_ebp+0xb0u), 0x1u);
    /* 00487847: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487849: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
    /* 0048784f: mov dword ptr [ebp + 0xb4], eax */ W32((u32)(r_ebp+0xb4u), r_eax);
    /* 00487855: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487857: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487858: push 0x3ca */ { u32 v = 0x3cau; r_esp -= 4; W32(r_esp, v); }
    /* 0048785d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x487862u); f_00814298();
    /* 00487862: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00487865:; BB(0x00487865);
    /* 00487865: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487868: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048786a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048786b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048786c: ret  */ FN_RET(0x004874e4); r_esp += 4; return;
L_0048786d:; BB(0x0048786d);
    /* 0048786d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00487871: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00487876: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0048787a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048787d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048787e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048787f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487880: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487881: ret  */ FN_RET(0x004874e4); r_esp += 4; return;
L_00487882:; BB(0x00487882);
    /* 00487882: mov edx, dword ptr [ebp + ebx*4 + 0xe8] */ r_edx = R32((u32)(r_ebp+r_ebx*4+0xe8u));
    /* 00487889: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048788b: je 0x487789 */ if (fZ) goto L_00487789;
L_00487891:; BB(0x00487891);
    /* 00487891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487892: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487897u); f_005cdcc0();
    /* 00487897: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487898: mov dword ptr [ebp + ebx*4 + 0xe8], 0 */ W32((u32)(r_ebp+r_ebx*4+0xe8u), 0x0u);
    /* 004878a3: jmp 0x487789 */ goto L_00487789;
L_004878a8:; BB(0x004878a8);
    /* 004878a8: push 0x21b */ { u32 v = 0x21bu; r_esp -= 4; W32(r_esp, v); }
    /* 004878ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004878ae: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4878b3u); f_00509590();
    /* 004878b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004878b6: mov dword ptr [ebp + 0xe4], eax */ W32((u32)(r_ebp+0xe4u), r_eax);
    /* 004878bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004878be: je 0x48783d */ if (fZ) goto L_0048783d;
L_004878c4:; BB(0x004878c4);
    /* 004878c4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004878c6: mov ecx, eax */ r_ecx = r_eax;
    /* 004878c8: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4878cdu); f_00508efc();
    /* 004878cd: jmp 0x48783d */ goto L_0048783d;
L_004878d2:; BB(0x004878d2);
    /* 004878d2: push dword ptr [ebx*4 + 0x900fc4] */ { u32 v = R32((u32)(r_ebx*4+0x900fc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004878d9: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004878dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004878de: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4878e3u); f_00509590();
    /* 004878e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004878e6: mov dword ptr [ebp + ebx*4 + 0xe8], eax */ W32((u32)(r_ebp+r_ebx*4+0xe8u), r_eax);
    /* 004878ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004878ef: je 0x487789 */ if (fZ) goto L_00487789;
L_004878f5:; BB(0x004878f5);
    /* 004878f5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004878f7: mov ecx, eax */ r_ecx = r_eax;
    /* 004878f9: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4878feu); f_00508efc();
    /* 004878fe: jmp 0x487789 */ goto L_00487789;
L_00487903:; BB(0x00487903);
    /* 00487903: push 0x219 */ { u32 v = 0x219u; r_esp -= 4; W32(r_esp, v); }
    /* 00487908: lea edi, [ebp + 0xc8] */ r_edi = (u32)(r_ebp+0xc8u);
    /* 0048790e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048790f: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487914u); f_00509590();
    /* 00487914: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487917: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 0048791d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048791f: je 0x487598 */ if (fZ) goto L_00487598;
L_00487925:; BB(0x00487925);
    /* 00487925: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00487927: mov ecx, eax */ r_ecx = r_eax;
    /* 00487929: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48792eu); f_00508efc();
    /* 0048792e: jmp 0x487598 */ goto L_00487598;
}

void f_00487934(void) /* sub_487934 */
{
    FN_ENTER(0x00487934);
    /* 00487934: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487935: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487938: mov esi, ecx */ r_esi = r_ecx;
    /* 0048793a: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 00487940: mov edx, dword ptr [esi + 0xcc] */ r_edx = R32((u32)(r_esi+0xccu));
    /* 00487946: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00487949: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0048794f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00487953: mov ecx, esi */ r_ecx = r_esi;
    /* 00487955: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00487959: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0048795c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048795e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048795f: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x487964u); f_007b4c58();
    /* 00487964: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487966: je 0x4879a6 */ if (fZ) goto L_004879a6;
L_00487968:; BB(0x00487968);
    /* 00487968: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0048796c: fadd dword ptr [0x901008] */ ST(0) = ST(0) + R_F32((u32)(0x901008u));
    /* 00487972: fld dword ptr [0x900f90] */ FPUSH(R_F32((u32)(0x900f90u)));
    /* 00487978: fadd dword ptr [esi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xccu));
    /* 0048797e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00487980: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00487982: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00487983: jae 0x487997 */ if (!fC) goto L_00487997;
L_00487985:; BB(0x00487985);
    /* 00487985: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00487987: fstp dword ptr [esi + 0xcc] */ W_F32((u32)(r_esi+0xccu), ST(0)); FPOP();
    /* 0048798d: mov eax, 1 */ r_eax = 0x1u;
    /* 00487992: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487995: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487996: ret  */ FN_RET(0x00487934); r_esp += 4; return;
L_00487997:; BB(0x00487997);
    /* 00487997: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00487999: fstp dword ptr [esi + 0xcc] */ W_F32((u32)(r_esi+0xccu), ST(0)); FPOP();
    /* 0048799f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004879a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004879a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004879a5: ret  */ FN_RET(0x00487934); r_esp += 4; return;
L_004879a6:; BB(0x004879a6);
    /* 004879a6: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 004879aa: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004879b0: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 004879b4: mov eax, 1 */ r_eax = 0x1u;
    /* 004879b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004879bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004879bd: ret  */ FN_RET(0x00487934); r_esp += 4; return;
}

void f_004879c0(void) /* sub_4879C0 */
{
    FN_ENTER(0x004879c0);
    /* 004879c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004879c1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004879c4: mov edi, ecx */ r_edi = r_ecx;
    /* 004879c6: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 004879cc: mov edx, dword ptr [edi + 0xd0] */ r_edx = R32((u32)(r_edi+0xd0u));
    /* 004879d2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004879da: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004879dd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004879e1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004879e4: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4879e9u); f_0083173c();
    /* 004879e9: fcomp dword ptr [0x900fa0] */ fx_compare(ST(0), R_F32((u32)(0x900fa0u))); FPOP();
    /* 004879ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004879f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004879f2: ja 0x487a14 */ if ((!fC&&!fZ)) goto L_00487a14;
L_004879f4:; BB(0x004879f4);
    /* 004879f4: mov dword ptr [edi + 0xc8], 0 */ W32((u32)(r_edi+0xc8u), 0x0u);
    /* 004879fe: mov dword ptr [edi + 0xcc], 0 */ W32((u32)(r_edi+0xccu), 0x0u);
    /* 00487a08: mov dword ptr [edi + 0xd0], 0 */ W32((u32)(r_edi+0xd0u), 0x0u);
    /* 00487a12: jmp 0x487a44 */ goto L_00487a44;
L_00487a14:; BB(0x00487a14);
    /* 00487a14: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00487a17: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x487a1cu); f_0082df08();
    /* 00487a1c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00487a1e: fld dword ptr [0x900fa0] */ FPUSH(R_F32((u32)(0x900fa0u)));
    /* 00487a24: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00487a27: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00487a29: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00487a2d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00487a2f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00487a32: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00487a36: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00487a39: lea ecx, [edi + 0xc8] */ r_ecx = (u32)(r_edi+0xc8u);
    /* 00487a3f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x487a44u); f_0082f9c4();
L_00487a44:; BB(0x00487a44);
    /* 00487a44: mov ecx, edi */ r_ecx = r_edi;
    /* 00487a46: call 0x487934 */ r_esp -= 4; W32(r_esp, 0x487a4bu); f_00487934();
    /* 00487a4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487a4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487a4f: ret  */ FN_RET(0x004879c0); r_esp += 4; return;
}

void f_00487a50(void) /* sub_487A50 */
{
    FN_ENTER(0x00487a50);
    /* 00487a50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487a51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487a52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00487a53: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00487a56: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00487a58: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00487a5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487a60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00487a62: jle 0x488016 */ if ((fZ||fS!=fO)) goto L_00488016;
L_00487a68:; BB(0x00487a68);
    /* 00487a68: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00487a6c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00487a6f: lea esi, [ebx + 0xc8] */ r_esi = (u32)(r_ebx+0xc8u);
    /* 00487a75: mov ebx, eax */ r_ebx = r_eax;
    /* 00487a77: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_00487a7b:; BB(0x00487a7b);
    /* 00487a7b: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00487a82: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487a83: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 00487a87: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x487a8cu); f_0048e100();
    /* 00487a8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487a8f: jne 0x487abd */ if (!fZ) goto L_00487abd;
L_00487a91:; BB(0x00487a91);
    /* 00487a91: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487a94: mov edx, dword ptr [edx + esi*4 + 0xe8] */ r_edx = R32((u32)(r_edx+r_esi*4+0xe8u));
    /* 00487a9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487a9d: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487aa3:; BB(0x00487aa3);
    /* 00487aa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487aa4: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487aa9u); f_005cdcc0();
    /* 00487aa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487aaa: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487aad: mov dword ptr [edx + esi*4 + 0xe8], 0 */ W32((u32)(r_edx+r_esi*4+0xe8u), 0x0u);
    /* 00487ab8: jmp 0x487c44 */ goto L_00487c44;
L_00487abd:; BB(0x00487abd);
    /* 00487abd: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00487ac0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00487ac2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00487ac6: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 00487acc: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00487ad0: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 00487ad6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00487ada: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00487ae0: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00487ae4: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487ae8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00487aeb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00487aef: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x487af4u); f_0082f9c4();
    /* 00487af4: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00487afc: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487b00: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x487b05u); f_0083173c();
    /* 00487b05: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00487b09: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b0d: fcomp dword ptr [0x900ff8] */ fx_compare(ST(0), R_F32((u32)(0x900ff8u))); FPOP();
    /* 00487b13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00487b15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00487b16: ja 0x487c21 */ if ((!fC&&!fZ)) goto L_00487c21;
L_00487b1c:; BB(0x00487b1c);
    /* 00487b1c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b20: fcomp dword ptr [0xa46d20] */ fx_compare(ST(0), R_F32((u32)(0xa46d20u))); FPOP();
    /* 00487b26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00487b28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00487b29: jbe 0x487b90 */ if ((fC||fZ)) goto L_00487b90;
L_00487b2b:; BB(0x00487b2b);
    /* 00487b2b: movzx edx, byte ptr [0xa46d24] */ r_edx = (u32)R8((u32)(0xa46d24u));
    /* 00487b32: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00487b36: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00487b39: jne 0x487b59 */ if (!fZ) goto L_00487b59;
L_00487b3b:; BB(0x00487b3b);
    /* 00487b3b: fld dword ptr [0x900ffc] */ FPUSH(R_F32((u32)(0x900ffcu)));
    /* 00487b41: mov dword ptr [0xa46d28], 0x42060000 */ W32((u32)(0xa46d28u), 0x42060000u);
    /* 00487b4b: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00487b51: mov byte ptr [0xa46d24], dl */ W8((u32)(0xa46d24u), (u8)r_edx);
    /* 00487b57: jmp 0x487b5f */ goto L_00487b5f;
L_00487b59:; BB(0x00487b59);
    /* 00487b59: fld dword ptr [0xa46d28] */ FPUSH(R_F32((u32)(0xa46d28u)));
L_00487b5f:; BB(0x00487b5f);
    /* 00487b5f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b63: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00487b65: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00487b69: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487b6d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x487b72u); f_0082df08();
    /* 00487b72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00487b74: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00487b78: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b7c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00487b7e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00487b82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00487b84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00487b86: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00487b8a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00487b8e: jmp 0x487bce */ goto L_00487bce;
L_00487b90:; BB(0x00487b90);
    /* 00487b90: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00487b94: shl ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00487b97: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00487b9b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x487ba0u); f_0082dcbc();
    /* 00487ba0: fmul dword ptr [0x901014] */ ST(0) = ST(0) * R_F32((u32)(0x901014u));
    /* 00487ba6: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00487baa: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00487bae: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00487bb2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x487bb7u); f_0082ddd8();
    /* 00487bb7: fmul dword ptr [0x901014] */ ST(0) = ST(0) * R_F32((u32)(0x901014u));
    /* 00487bbd: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 00487bc1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00487bc5: mov edx, 1 */ r_edx = 0x1u;
    /* 00487bca: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_00487bce:; BB(0x00487bce);
    /* 00487bce: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00487bd2: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487bd6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x487bdbu); f_0082ebac();
    /* 00487bdb: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00487bdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487be1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487be2: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00487be6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x487bebu); f_007b4c58();
    /* 00487beb: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00487bef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487bf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487bf1: call 0x48dbf4 */ r_esp -= 4; W32(r_esp, 0x487bf6u); f_0048dbf4();
    /* 00487bf6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487bf9: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00487bfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487bff: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487c01:; BB(0x00487c01);
    /* 00487c01: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00487c04: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00487c07: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00487c0d: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00487c10: mov edi, dword ptr [ecx + esi*4 + 0xe8] */ r_edi = R32((u32)(r_ecx+r_esi*4+0xe8u));
    /* 00487c17: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487c19: je 0x487d02 */ if (fZ) goto L_00487d02;
L_00487c1f:; BB(0x00487c1f);
    /* 00487c1f: jmp 0x487c44 */ goto L_00487c44;
L_00487c21:; BB(0x00487c21);
    /* 00487c21: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487c24: mov edx, dword ptr [edx + esi*4 + 0xe8] */ r_edx = R32((u32)(r_edx+r_esi*4+0xe8u));
    /* 00487c2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487c2d: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487c2f:; BB(0x00487c2f);
    /* 00487c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487c30: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487c35u); f_005cdcc0();
    /* 00487c35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487c36: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487c39: mov dword ptr [edx + esi*4 + 0xe8], 0 */ W32((u32)(r_edx+r_esi*4+0xe8u), 0x0u);
L_00487c44:; BB(0x00487c44);
    /* 00487c44: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00487c48: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00487c4b: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487c4d: jl 0x487a7b */ if ((fS!=fO)) goto L_00487a7b;
L_00487c53:; BB(0x00487c53);
    /* 00487c53: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00487c57: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00487c5a:; BB(0x00487c5a);
    /* 00487c5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487c5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487c5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487c5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00487c60: push 0x3cc */ { u32 v = 0x3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00487c65: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x487c6au); f_008144b0();
    /* 00487c6a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487c6d: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487c73: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487c78: jl 0x487c82 */ if ((fS!=fO)) goto L_00487c82;
L_00487c7a:; BB(0x00487c7a);
    /* 00487c7a: je 0x487d36 */ if (fZ) goto L_00487d36;
L_00487c80:; BB(0x00487c80);
    /* 00487c80: jmp 0x487cc9 */ goto L_00487cc9;
L_00487c82:; BB(0x00487c82);
    /* 00487c82: cmp eax, 0x4b */ {  u32 a = r_eax; u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487c85: jle 0x487ca9 */ if ((fZ||fS!=fO)) goto L_00487ca9;
L_00487c87:; BB(0x00487c87);
    /* 00487c87: mov edx, eax */ r_edx = r_eax;
    /* 00487c89: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00487c8c: je 0x487c99 */ if (fZ) goto L_00487c99;
L_00487c8e:; BB(0x00487c8e);
    /* 00487c8e: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487c91: je 0x487d77 */ if (fZ) goto L_00487d77;
L_00487c97:; BB(0x00487c97);
    /* 00487c97: jmp 0x487cc9 */ goto L_00487cc9;
L_00487c99:; BB(0x00487c99);
    /* 00487c99: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487c9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ca1: je 0x487da1 */ if (fZ) goto L_00487da1;
L_00487ca7:; BB(0x00487ca7);
    /* 00487ca7: jmp 0x487cc9 */ goto L_00487cc9;
L_00487ca9:; BB(0x00487ca9);
    /* 00487ca9: mov edx, eax */ r_edx = r_eax;
    /* 00487cab: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00487cae: je 0x487cbb */ if (fZ) goto L_00487cbb;
L_00487cb0:; BB(0x00487cb0);
    /* 00487cb0: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487cb3: je 0x487dd8 */ if (fZ) goto L_00487dd8;
L_00487cb9:; BB(0x00487cb9);
    /* 00487cb9: jmp 0x487cc9 */ goto L_00487cc9;
L_00487cbb:; BB(0x00487cbb);
    /* 00487cbb: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487cc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487cc3: je 0x487fdf */ if (fZ) goto L_00487fdf;
L_00487cc9:; BB(0x00487cc9);
    /* 00487cc9: add dword ptr [ebx + 0xb4], 1 */ { u32 ad = (u32)(r_ebx+0xb4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00487cd0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00487cd3: mov dword ptr [ebx + 0xb8], eax */ W32((u32)(r_ebx+0xb8u), r_eax);
    /* 00487cd9: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00487cdf: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 00487ce5: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487ce8: jge 0x487e02 */ if ((fS==fO)) goto L_00487e02;
L_00487cee:; BB(0x00487cee);
    /* 00487cee: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00487cf2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00487cf7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00487cfb: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487cfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487cff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487d00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487d01: ret  */ FN_RET(0x00487a50); r_esp += 4; return;
L_00487d02:; BB(0x00487d02);
    /* 00487d02: push dword ptr [esi*4 + 0x900fc4] */ { u32 v = R32((u32)(r_esi*4+0x900fc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00487d09: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00487d0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487d0e: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487d13u); f_00509590();
    /* 00487d13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487d16: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487d19: mov dword ptr [edx + esi*4 + 0xe8], eax */ W32((u32)(r_edx+r_esi*4+0xe8u), r_eax);
    /* 00487d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d22: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487d28:; BB(0x00487d28);
    /* 00487d28: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00487d2a: mov ecx, eax */ r_ecx = r_eax;
    /* 00487d2c: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x487d31u); f_00508efc();
    /* 00487d31: jmp 0x487c44 */ goto L_00487c44;
L_00487d36:; BB(0x00487d36);
    /* 00487d36: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487d3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d3e: jne 0x487cc9 */ if (!fZ) goto L_00487cc9;
L_00487d40:; BB(0x00487d40);
    /* 00487d40: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 00487d45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487d46: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487d4bu); f_00509590();
    /* 00487d4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487d4e: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00487d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d56: jne 0x487d63 */ if (!fZ) goto L_00487d63;
L_00487d58:; BB(0x00487d58);
    /* 00487d58: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487d5e: jmp 0x487cc9 */ goto L_00487cc9;
L_00487d63:; BB(0x00487d63);
    /* 00487d63: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00487d65: mov ecx, eax */ r_ecx = r_eax;
    /* 00487d67: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x487d6cu); f_00508efc();
    /* 00487d6c: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487d72: jmp 0x487cc9 */ goto L_00487cc9;
L_00487d77:; BB(0x00487d77);
    /* 00487d77: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d7f: je 0x487cc9 */ if (fZ) goto L_00487cc9;
L_00487d85:; BB(0x00487d85);
    /* 00487d85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487d86: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487d8bu); f_005cdcc0();
    /* 00487d8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487d8c: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487d92: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
    /* 00487d9c: jmp 0x487cc9 */ goto L_00487cc9;
L_00487da1:; BB(0x00487da1);
    /* 00487da1: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 00487da6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487da7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487dacu); f_00509590();
    /* 00487dac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487daf: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00487db5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487db7: jne 0x487dc4 */ if (!fZ) goto L_00487dc4;
L_00487db9:; BB(0x00487db9);
    /* 00487db9: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487dbf: jmp 0x487cc9 */ goto L_00487cc9;
L_00487dc4:; BB(0x00487dc4);
    /* 00487dc4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00487dc6: mov ecx, eax */ r_ecx = r_eax;
    /* 00487dc8: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x487dcdu); f_00508efc();
    /* 00487dcd: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487dd3: jmp 0x487cc9 */ goto L_00487cc9;
L_00487dd8:; BB(0x00487dd8);
    /* 00487dd8: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487dde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487de0: je 0x487cc9 */ if (fZ) goto L_00487cc9;
L_00487de6:; BB(0x00487de6);
    /* 00487de6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487de7: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487decu); f_005cdcc0();
    /* 00487dec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487ded: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487df3: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
    /* 00487dfd: jmp 0x487cc9 */ goto L_00487cc9;
L_00487e02:; BB(0x00487e02);
    /* 00487e02: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487e05: jle 0x487f28 */ if ((fZ||fS!=fO)) goto L_00487f28;
L_00487e0b:; BB(0x00487e0b);
    /* 00487e0b: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e0e: je 0x487f3f */ if (fZ) goto L_00487f3f;
L_00487e14:; BB(0x00487e14);
    /* 00487e14: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e17: jne 0x487f2f */ if (!fZ) goto L_00487f2f;
L_00487e1d:; BB(0x00487e1d);
    /* 00487e1d: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 00487e23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e25: je 0x487e38 */ if (fZ) goto L_00487e38;
L_00487e27:; BB(0x00487e27);
    /* 00487e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e28: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e2du); f_005cdcc0();
    /* 00487e2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e2e: mov dword ptr [ebx + 0xe4], 0 */ W32((u32)(r_ebx+0xe4u), 0x0u);
L_00487e38:; BB(0x00487e38);
    /* 00487e38: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 00487e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e40: je 0x487e53 */ if (fZ) goto L_00487e53;
L_00487e42:; BB(0x00487e42);
    /* 00487e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e43: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e48u); f_005cdcc0();
    /* 00487e48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e49: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
L_00487e53:; BB(0x00487e53);
    /* 00487e53: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 00487e59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e5b: je 0x487e6e */ if (fZ) goto L_00487e6e;
L_00487e5d:; BB(0x00487e5d);
    /* 00487e5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e5e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e63u); f_005cdcc0();
    /* 00487e63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e64: mov dword ptr [ebx + 0xe8], 0 */ W32((u32)(r_ebx+0xe8u), 0x0u);
L_00487e6e:; BB(0x00487e6e);
    /* 00487e6e: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00487e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e76: je 0x487e89 */ if (fZ) goto L_00487e89;
L_00487e78:; BB(0x00487e78);
    /* 00487e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e79: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e7eu); f_005cdcc0();
    /* 00487e7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e7f: mov dword ptr [ebx + 0xec], 0 */ W32((u32)(r_ebx+0xecu), 0x0u);
L_00487e89:; BB(0x00487e89);
    /* 00487e89: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 00487e8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e91: je 0x487ea4 */ if (fZ) goto L_00487ea4;
L_00487e93:; BB(0x00487e93);
    /* 00487e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e94: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e99u); f_005cdcc0();
    /* 00487e99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e9a: mov dword ptr [ebx + 0xf0], 0 */ W32((u32)(r_ebx+0xf0u), 0x0u);
L_00487ea4:; BB(0x00487ea4);
    /* 00487ea4: mov eax, dword ptr [ebx + 0xf4] */ r_eax = R32((u32)(r_ebx+0xf4u));
    /* 00487eaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487eac: je 0x487ebf */ if (fZ) goto L_00487ebf;
L_00487eae:; BB(0x00487eae);
    /* 00487eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487eaf: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487eb4u); f_005cdcc0();
    /* 00487eb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487eb5: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
L_00487ebf:; BB(0x00487ebf);
    /* 00487ebf: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00487ec5: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 00487ecf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487ed1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00487ed3: jle 0x487f0c */ if ((fZ||fS!=fO)) goto L_00487f0c;
L_00487ed5:; BB(0x00487ed5);
    /* 00487ed5: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00487ed8: mov ebx, eax */ r_ebx = r_eax;
    /* 00487eda: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00487ede: mov ebp, edx */ r_ebp = r_edx;
L_00487ee0:; BB(0x00487ee0);
    /* 00487ee0: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00487ee7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487ee8: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x487eedu); f_0048df48();
    /* 00487eed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ef0: je 0x487efe */ if (fZ) goto L_00487efe;
L_00487ef2:; BB(0x00487ef2);
    /* 00487ef2: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00487ef5: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00487efb: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
L_00487efe:; BB(0x00487efe);
    /* 00487efe: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00487f01: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487f03: jl 0x487ee0 */ if ((fS!=fO)) goto L_00487ee0;
L_00487f05:; BB(0x00487f05);
    /* 00487f05: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00487f08: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_00487f0c:; BB(0x00487f0c);
    /* 00487f0c: mov dword ptr [ebx + 0xb0], 2 */ W32((u32)(r_ebx+0xb0u), 0x2u);
    /* 00487f16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487f1b: push 0x3cb */ { u32 v = 0x3cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00487f20: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x487f25u); f_00814298();
    /* 00487f25: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00487f28:; BB(0x00487f28);
    /* 00487f28: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487f2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487f2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487f2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487f2e: ret  */ FN_RET(0x00487a50); r_esp += 4; return;
L_00487f2f:; BB(0x00487f2f);
    /* 00487f2f: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f32: jne 0x487cee */ if (!fZ) goto L_00487cee;
L_00487f38:; BB(0x00487f38);
    /* 00487f38: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487f3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487f3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487f3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487f3e: ret  */ FN_RET(0x00487a50); r_esp += 4; return;
L_00487f3f:; BB(0x00487f3f);
    /* 00487f3f: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 00487f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f47: jne 0x487f6c */ if (!fZ) goto L_00487f6c;
L_00487f49:; BB(0x00487f49);
    /* 00487f49: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 00487f4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487f4f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x487f54u); f_0050b510();
    /* 00487f54: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 00487f59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487f5a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x487f5fu); f_0050b510();
    /* 00487f5f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487f62: mov dword ptr [ebx + 0xc4], 1 */ W32((u32)(r_ebx+0xc4u), 0x1u);
L_00487f6c:; BB(0x00487f6c);
    /* 00487f6c: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 00487f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f74: je 0x487f87 */ if (fZ) goto L_00487f87;
L_00487f76:; BB(0x00487f76);
    /* 00487f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f77: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487f7cu); f_005cdcc0();
    /* 00487f7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487f7d: mov dword ptr [ebx + 0xe8], 0 */ W32((u32)(r_ebx+0xe8u), 0x0u);
L_00487f87:; BB(0x00487f87);
    /* 00487f87: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00487f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f8f: je 0x487fa2 */ if (fZ) goto L_00487fa2;
L_00487f91:; BB(0x00487f91);
    /* 00487f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f92: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487f97u); f_005cdcc0();
    /* 00487f97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487f98: mov dword ptr [ebx + 0xec], 0 */ W32((u32)(r_ebx+0xecu), 0x0u);
L_00487fa2:; BB(0x00487fa2);
    /* 00487fa2: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 00487fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487faa: je 0x487fbd */ if (fZ) goto L_00487fbd;
L_00487fac:; BB(0x00487fac);
    /* 00487fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487fad: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487fb2u); f_005cdcc0();
    /* 00487fb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487fb3: mov dword ptr [ebx + 0xf0], 0 */ W32((u32)(r_ebx+0xf0u), 0x0u);
L_00487fbd:; BB(0x00487fbd);
    /* 00487fbd: mov eax, dword ptr [ebx + 0xf4] */ r_eax = R32((u32)(r_ebx+0xf4u));
    /* 00487fc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487fc5: je 0x487fd8 */ if (fZ) goto L_00487fd8;
L_00487fc7:; BB(0x00487fc7);
    /* 00487fc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487fc8: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487fcdu); f_005cdcc0();
    /* 00487fcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487fce: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
L_00487fd8:; BB(0x00487fd8);
    /* 00487fd8: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487fdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487fdc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487fdd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487fde: ret  */ FN_RET(0x00487a50); r_esp += 4; return;
L_00487fdf:; BB(0x00487fdf);
    /* 00487fdf: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 00487fe4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487fe5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487feau); f_00509590();
    /* 00487fea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487fed: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00487ff3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ff5: jne 0x488002 */ if (!fZ) goto L_00488002;
L_00487ff7:; BB(0x00487ff7);
    /* 00487ff7: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487ffd: jmp 0x487cc9 */ goto L_00487cc9;
L_00488002:; BB(0x00488002);
    /* 00488002: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00488004: mov ecx, eax */ r_ecx = r_eax;
    /* 00488006: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48800bu); f_00508efc();
    /* 0048800b: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00488011: jmp 0x487cc9 */ goto L_00487cc9;
L_00488016:; BB(0x00488016);
    /* 00488016: lea esi, [ebx + 0xc8] */ r_esi = (u32)(r_ebx+0xc8u);
    /* 0048801c: jmp 0x487c5a */ goto L_00487c5a;
}

void f_00487bc0(void)
{
    FN_ENTER(0x00487bc0);
    goto L_00487bc0;
L_00487a7b:; BB(0x00487a7b);
    /* 00487a7b: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00487a82: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487a83: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 00487a87: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x487a8cu); f_0048e100();
    /* 00487a8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487a8f: jne 0x487abd */ if (!fZ) goto L_00487abd;
L_00487a91:; BB(0x00487a91);
    /* 00487a91: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487a94: mov edx, dword ptr [edx + esi*4 + 0xe8] */ r_edx = R32((u32)(r_edx+r_esi*4+0xe8u));
    /* 00487a9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487a9d: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487aa3:; BB(0x00487aa3);
    /* 00487aa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487aa4: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487aa9u); f_005cdcc0();
    /* 00487aa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487aaa: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487aad: mov dword ptr [edx + esi*4 + 0xe8], 0 */ W32((u32)(r_edx+r_esi*4+0xe8u), 0x0u);
    /* 00487ab8: jmp 0x487c44 */ goto L_00487c44;
L_00487abd:; BB(0x00487abd);
    /* 00487abd: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00487ac0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00487ac2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00487ac6: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 00487acc: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00487ad0: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 00487ad6: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00487ada: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00487ae0: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00487ae4: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487ae8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00487aeb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00487aef: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x487af4u); f_0082f9c4();
    /* 00487af4: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00487afc: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487b00: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x487b05u); f_0083173c();
    /* 00487b05: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00487b09: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b0d: fcomp dword ptr [0x900ff8] */ fx_compare(ST(0), R_F32((u32)(0x900ff8u))); FPOP();
    /* 00487b13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00487b15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00487b16: ja 0x487c21 */ if ((!fC&&!fZ)) goto L_00487c21;
L_00487b1c:; BB(0x00487b1c);
    /* 00487b1c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b20: fcomp dword ptr [0xa46d20] */ fx_compare(ST(0), R_F32((u32)(0xa46d20u))); FPOP();
    /* 00487b26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00487b28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00487b29: jbe 0x487b90 */ if ((fC||fZ)) goto L_00487b90;
L_00487b2b:; BB(0x00487b2b);
    /* 00487b2b: movzx edx, byte ptr [0xa46d24] */ r_edx = (u32)R8((u32)(0xa46d24u));
    /* 00487b32: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00487b36: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00487b39: jne 0x487b59 */ if (!fZ) goto L_00487b59;
L_00487b3b:; BB(0x00487b3b);
    /* 00487b3b: fld dword ptr [0x900ffc] */ FPUSH(R_F32((u32)(0x900ffcu)));
    /* 00487b41: mov dword ptr [0xa46d28], 0x42060000 */ W32((u32)(0xa46d28u), 0x42060000u);
    /* 00487b4b: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00487b51: mov byte ptr [0xa46d24], dl */ W8((u32)(0xa46d24u), (u8)r_edx);
    /* 00487b57: jmp 0x487b5f */ goto L_00487b5f;
L_00487b59:; BB(0x00487b59);
    /* 00487b59: fld dword ptr [0xa46d28] */ FPUSH(R_F32((u32)(0xa46d28u)));
L_00487b5f:; BB(0x00487b5f);
    /* 00487b5f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b63: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00487b65: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00487b69: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487b6d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x487b72u); f_0082df08();
    /* 00487b72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00487b74: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00487b78: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00487b7c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00487b7e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00487b82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00487b84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00487b86: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00487b8a: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00487b8e: jmp 0x487bce */ goto L_00487bce;
L_00487b90:; BB(0x00487b90);
    /* 00487b90: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00487b94: shl ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00487b97: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00487b9b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x487ba0u); f_0082dcbc();
    /* 00487ba0: fmul dword ptr [0x901014] */ ST(0) = ST(0) * R_F32((u32)(0x901014u));
    /* 00487ba6: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00487baa: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00487bae: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00487bb2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x487bb7u); f_0082ddd8();
    /* 00487bb7: fmul dword ptr [0x901014] */ ST(0) = ST(0) * R_F32((u32)(0x901014u));
    /* 00487bbd: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
L_00487bc0:; BB(0x00487bc0);
    /* 00487bc0: sub cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00487bc1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00487bc2: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00487bc3: and al, 0x28 */ {  u32 a = (u8)r_eax; u32 b = 0x28u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00487bc5: mov edx, 1 */ r_edx = 0x1u;
    /* 00487bca: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_00487bce:; BB(0x00487bce);
    /* 00487bce: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00487bd2: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 00487bd6: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x487bdbu); f_0082ebac();
    /* 00487bdb: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00487bdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00487be1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487be2: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00487be6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x487bebu); f_007b4c58();
    /* 00487beb: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00487bef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487bf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487bf1: call 0x48dbf4 */ r_esp -= 4; W32(r_esp, 0x487bf6u); f_0048dbf4();
    /* 00487bf6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487bf9: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00487bfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487bff: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487c01:; BB(0x00487c01);
    /* 00487c01: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00487c04: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00487c07: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00487c0d: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00487c10: mov edi, dword ptr [ecx + esi*4 + 0xe8] */ r_edi = R32((u32)(r_ecx+r_esi*4+0xe8u));
    /* 00487c17: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487c19: je 0x487d02 */ if (fZ) goto L_00487d02;
L_00487c1f:; BB(0x00487c1f);
    /* 00487c1f: jmp 0x487c44 */ goto L_00487c44;
L_00487c21:; BB(0x00487c21);
    /* 00487c21: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487c24: mov edx, dword ptr [edx + esi*4 + 0xe8] */ r_edx = R32((u32)(r_edx+r_esi*4+0xe8u));
    /* 00487c2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487c2d: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487c2f:; BB(0x00487c2f);
    /* 00487c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487c30: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487c35u); f_005cdcc0();
    /* 00487c35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487c36: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487c39: mov dword ptr [edx + esi*4 + 0xe8], 0 */ W32((u32)(r_edx+r_esi*4+0xe8u), 0x0u);
L_00487c44:; BB(0x00487c44);
    /* 00487c44: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00487c48: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00487c4b: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487c4d: jl 0x487a7b */ if ((fS!=fO)) goto L_00487a7b;
L_00487c53:; BB(0x00487c53);
    /* 00487c53: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00487c57: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00487c5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487c5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487c5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487c5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00487c60: push 0x3cc */ { u32 v = 0x3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00487c65: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x487c6au); f_008144b0();
    /* 00487c6a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487c6d: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487c73: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487c78: jl 0x487c82 */ if ((fS!=fO)) goto L_00487c82;
L_00487c7a:; BB(0x00487c7a);
    /* 00487c7a: je 0x487d36 */ if (fZ) goto L_00487d36;
L_00487c80:; BB(0x00487c80);
    /* 00487c80: jmp 0x487cc9 */ goto L_00487cc9;
L_00487c82:; BB(0x00487c82);
    /* 00487c82: cmp eax, 0x4b */ {  u32 a = r_eax; u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487c85: jle 0x487ca9 */ if ((fZ||fS!=fO)) goto L_00487ca9;
L_00487c87:; BB(0x00487c87);
    /* 00487c87: mov edx, eax */ r_edx = r_eax;
    /* 00487c89: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00487c8c: je 0x487c99 */ if (fZ) goto L_00487c99;
L_00487c8e:; BB(0x00487c8e);
    /* 00487c8e: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487c91: je 0x487d77 */ if (fZ) goto L_00487d77;
L_00487c97:; BB(0x00487c97);
    /* 00487c97: jmp 0x487cc9 */ goto L_00487cc9;
L_00487c99:; BB(0x00487c99);
    /* 00487c99: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487c9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ca1: je 0x487da1 */ if (fZ) goto L_00487da1;
L_00487ca7:; BB(0x00487ca7);
    /* 00487ca7: jmp 0x487cc9 */ goto L_00487cc9;
L_00487ca9:; BB(0x00487ca9);
    /* 00487ca9: mov edx, eax */ r_edx = r_eax;
    /* 00487cab: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00487cae: je 0x487cbb */ if (fZ) goto L_00487cbb;
L_00487cb0:; BB(0x00487cb0);
    /* 00487cb0: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487cb3: je 0x487dd8 */ if (fZ) goto L_00487dd8;
L_00487cb9:; BB(0x00487cb9);
    /* 00487cb9: jmp 0x487cc9 */ goto L_00487cc9;
L_00487cbb:; BB(0x00487cbb);
    /* 00487cbb: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487cc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487cc3: je 0x487fdf */ if (fZ) goto L_00487fdf;
L_00487cc9:; BB(0x00487cc9);
    /* 00487cc9: add dword ptr [ebx + 0xb4], 1 */ { u32 ad = (u32)(r_ebx+0xb4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00487cd0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00487cd3: mov dword ptr [ebx + 0xb8], eax */ W32((u32)(r_ebx+0xb8u), r_eax);
    /* 00487cd9: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00487cdf: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 00487ce5: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487ce8: jge 0x487e02 */ if ((fS==fO)) goto L_00487e02;
L_00487cee:; BB(0x00487cee);
    /* 00487cee: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00487cf2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00487cf7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00487cfb: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487cfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487cff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487d00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487d01: ret  */ FN_RET(0x00487bc0); r_esp += 4; return;
L_00487d02:; BB(0x00487d02);
    /* 00487d02: push dword ptr [esi*4 + 0x900fc4] */ { u32 v = R32((u32)(r_esi*4+0x900fc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00487d09: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00487d0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487d0e: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487d13u); f_00509590();
    /* 00487d13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487d16: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00487d19: mov dword ptr [edx + esi*4 + 0xe8], eax */ W32((u32)(r_edx+r_esi*4+0xe8u), r_eax);
    /* 00487d20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d22: je 0x487c44 */ if (fZ) goto L_00487c44;
L_00487d28:; BB(0x00487d28);
    /* 00487d28: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00487d2a: mov ecx, eax */ r_ecx = r_eax;
    /* 00487d2c: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x487d31u); f_00508efc();
    /* 00487d31: jmp 0x487c44 */ goto L_00487c44;
L_00487d36:; BB(0x00487d36);
    /* 00487d36: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487d3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d3e: jne 0x487cc9 */ if (!fZ) goto L_00487cc9;
L_00487d40:; BB(0x00487d40);
    /* 00487d40: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 00487d45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487d46: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487d4bu); f_00509590();
    /* 00487d4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487d4e: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00487d54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d56: jne 0x487d63 */ if (!fZ) goto L_00487d63;
L_00487d58:; BB(0x00487d58);
    /* 00487d58: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487d5e: jmp 0x487cc9 */ goto L_00487cc9;
L_00487d63:; BB(0x00487d63);
    /* 00487d63: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00487d65: mov ecx, eax */ r_ecx = r_eax;
    /* 00487d67: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x487d6cu); f_00508efc();
    /* 00487d6c: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487d72: jmp 0x487cc9 */ goto L_00487cc9;
L_00487d77:; BB(0x00487d77);
    /* 00487d77: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487d7f: je 0x487cc9 */ if (fZ) goto L_00487cc9;
L_00487d85:; BB(0x00487d85);
    /* 00487d85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487d86: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487d8bu); f_005cdcc0();
    /* 00487d8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487d8c: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487d92: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
    /* 00487d9c: jmp 0x487cc9 */ goto L_00487cc9;
L_00487da1:; BB(0x00487da1);
    /* 00487da1: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 00487da6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487da7: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487dacu); f_00509590();
    /* 00487dac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487daf: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00487db5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487db7: jne 0x487dc4 */ if (!fZ) goto L_00487dc4;
L_00487db9:; BB(0x00487db9);
    /* 00487db9: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487dbf: jmp 0x487cc9 */ goto L_00487cc9;
L_00487dc4:; BB(0x00487dc4);
    /* 00487dc4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00487dc6: mov ecx, eax */ r_ecx = r_eax;
    /* 00487dc8: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x487dcdu); f_00508efc();
    /* 00487dcd: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487dd3: jmp 0x487cc9 */ goto L_00487cc9;
L_00487dd8:; BB(0x00487dd8);
    /* 00487dd8: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 00487dde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487de0: je 0x487cc9 */ if (fZ) goto L_00487cc9;
L_00487de6:; BB(0x00487de6);
    /* 00487de6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00487de7: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487decu); f_005cdcc0();
    /* 00487dec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487ded: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487df3: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
    /* 00487dfd: jmp 0x487cc9 */ goto L_00487cc9;
L_00487e02:; BB(0x00487e02);
    /* 00487e02: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487e05: jle 0x487f28 */ if ((fZ||fS!=fO)) goto L_00487f28;
L_00487e0b:; BB(0x00487e0b);
    /* 00487e0b: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e0e: je 0x487f3f */ if (fZ) goto L_00487f3f;
L_00487e14:; BB(0x00487e14);
    /* 00487e14: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e17: jne 0x487f2f */ if (!fZ) goto L_00487f2f;
L_00487e1d:; BB(0x00487e1d);
    /* 00487e1d: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 00487e23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e25: je 0x487e38 */ if (fZ) goto L_00487e38;
L_00487e27:; BB(0x00487e27);
    /* 00487e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e28: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e2du); f_005cdcc0();
    /* 00487e2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e2e: mov dword ptr [ebx + 0xe4], 0 */ W32((u32)(r_ebx+0xe4u), 0x0u);
L_00487e38:; BB(0x00487e38);
    /* 00487e38: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 00487e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e40: je 0x487e53 */ if (fZ) goto L_00487e53;
L_00487e42:; BB(0x00487e42);
    /* 00487e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e43: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e48u); f_005cdcc0();
    /* 00487e48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e49: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
L_00487e53:; BB(0x00487e53);
    /* 00487e53: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 00487e59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e5b: je 0x487e6e */ if (fZ) goto L_00487e6e;
L_00487e5d:; BB(0x00487e5d);
    /* 00487e5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e5e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e63u); f_005cdcc0();
    /* 00487e63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e64: mov dword ptr [ebx + 0xe8], 0 */ W32((u32)(r_ebx+0xe8u), 0x0u);
L_00487e6e:; BB(0x00487e6e);
    /* 00487e6e: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00487e74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e76: je 0x487e89 */ if (fZ) goto L_00487e89;
L_00487e78:; BB(0x00487e78);
    /* 00487e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e79: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e7eu); f_005cdcc0();
    /* 00487e7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e7f: mov dword ptr [ebx + 0xec], 0 */ W32((u32)(r_ebx+0xecu), 0x0u);
L_00487e89:; BB(0x00487e89);
    /* 00487e89: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 00487e8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487e91: je 0x487ea4 */ if (fZ) goto L_00487ea4;
L_00487e93:; BB(0x00487e93);
    /* 00487e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487e94: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487e99u); f_005cdcc0();
    /* 00487e99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487e9a: mov dword ptr [ebx + 0xf0], 0 */ W32((u32)(r_ebx+0xf0u), 0x0u);
L_00487ea4:; BB(0x00487ea4);
    /* 00487ea4: mov eax, dword ptr [ebx + 0xf4] */ r_eax = R32((u32)(r_ebx+0xf4u));
    /* 00487eaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487eac: je 0x487ebf */ if (fZ) goto L_00487ebf;
L_00487eae:; BB(0x00487eae);
    /* 00487eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487eaf: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487eb4u); f_005cdcc0();
    /* 00487eb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487eb5: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
L_00487ebf:; BB(0x00487ebf);
    /* 00487ebf: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00487ec5: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 00487ecf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487ed1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00487ed3: jle 0x487f0c */ if ((fZ||fS!=fO)) goto L_00487f0c;
L_00487ed5:; BB(0x00487ed5);
    /* 00487ed5: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00487ed8: mov ebx, eax */ r_ebx = r_eax;
    /* 00487eda: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00487ede: mov ebp, edx */ r_ebp = r_edx;
L_00487ee0:; BB(0x00487ee0);
    /* 00487ee0: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00487ee7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00487ee8: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x487eedu); f_0048df48();
    /* 00487eed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ef0: je 0x487efe */ if (fZ) goto L_00487efe;
L_00487ef2:; BB(0x00487ef2);
    /* 00487ef2: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00487ef5: and ecx, 0xfffdffff */ {  u32 a = r_ecx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00487efb: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
L_00487efe:; BB(0x00487efe);
    /* 00487efe: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00487f01: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00487f03: jl 0x487ee0 */ if ((fS!=fO)) goto L_00487ee0;
L_00487f05:; BB(0x00487f05);
    /* 00487f05: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00487f08: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_00487f0c:; BB(0x00487f0c);
    /* 00487f0c: mov dword ptr [ebx + 0xb0], 2 */ W32((u32)(r_ebx+0xb0u), 0x2u);
    /* 00487f16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00487f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487f1b: push 0x3cb */ { u32 v = 0x3cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00487f20: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x487f25u); f_00814298();
    /* 00487f25: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00487f28:; BB(0x00487f28);
    /* 00487f28: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487f2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487f2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487f2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487f2e: ret  */ FN_RET(0x00487bc0); r_esp += 4; return;
L_00487f2f:; BB(0x00487f2f);
    /* 00487f2f: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f32: jne 0x487cee */ if (!fZ) goto L_00487cee;
L_00487f38:; BB(0x00487f38);
    /* 00487f38: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487f3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487f3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487f3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487f3e: ret  */ FN_RET(0x00487bc0); r_esp += 4; return;
L_00487f3f:; BB(0x00487f3f);
    /* 00487f3f: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 00487f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f47: jne 0x487f6c */ if (!fZ) goto L_00487f6c;
L_00487f49:; BB(0x00487f49);
    /* 00487f49: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 00487f4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487f4f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x487f54u); f_0050b510();
    /* 00487f54: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 00487f59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487f5a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x487f5fu); f_0050b510();
    /* 00487f5f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487f62: mov dword ptr [ebx + 0xc4], 1 */ W32((u32)(r_ebx+0xc4u), 0x1u);
L_00487f6c:; BB(0x00487f6c);
    /* 00487f6c: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 00487f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f74: je 0x487f87 */ if (fZ) goto L_00487f87;
L_00487f76:; BB(0x00487f76);
    /* 00487f76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f77: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487f7cu); f_005cdcc0();
    /* 00487f7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487f7d: mov dword ptr [ebx + 0xe8], 0 */ W32((u32)(r_ebx+0xe8u), 0x0u);
L_00487f87:; BB(0x00487f87);
    /* 00487f87: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00487f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487f8f: je 0x487fa2 */ if (fZ) goto L_00487fa2;
L_00487f91:; BB(0x00487f91);
    /* 00487f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487f92: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487f97u); f_005cdcc0();
    /* 00487f97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487f98: mov dword ptr [ebx + 0xec], 0 */ W32((u32)(r_ebx+0xecu), 0x0u);
L_00487fa2:; BB(0x00487fa2);
    /* 00487fa2: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 00487fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487faa: je 0x487fbd */ if (fZ) goto L_00487fbd;
L_00487fac:; BB(0x00487fac);
    /* 00487fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487fad: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487fb2u); f_005cdcc0();
    /* 00487fb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487fb3: mov dword ptr [ebx + 0xf0], 0 */ W32((u32)(r_ebx+0xf0u), 0x0u);
L_00487fbd:; BB(0x00487fbd);
    /* 00487fbd: mov eax, dword ptr [ebx + 0xf4] */ r_eax = R32((u32)(r_ebx+0xf4u));
    /* 00487fc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487fc5: je 0x487fd8 */ if (fZ) goto L_00487fd8;
L_00487fc7:; BB(0x00487fc7);
    /* 00487fc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00487fc8: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x487fcdu); f_005cdcc0();
    /* 00487fcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00487fce: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
L_00487fd8:; BB(0x00487fd8);
    /* 00487fd8: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00487fdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00487fdc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00487fdd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00487fde: ret  */ FN_RET(0x00487bc0); r_esp += 4; return;
L_00487fdf:; BB(0x00487fdf);
    /* 00487fdf: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 00487fe4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00487fe5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x487feau); f_00509590();
    /* 00487fea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00487fed: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 00487ff3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00487ff5: jne 0x488002 */ if (!fZ) goto L_00488002;
L_00487ff7:; BB(0x00487ff7);
    /* 00487ff7: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00487ffd: jmp 0x487cc9 */ goto L_00487cc9;
L_00488002:; BB(0x00488002);
    /* 00488002: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00488004: mov ecx, eax */ r_ecx = r_eax;
    /* 00488006: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48800bu); f_00508efc();
    /* 0048800b: mov eax, dword ptr [ebx + 0xb8] */ r_eax = R32((u32)(r_ebx+0xb8u));
    /* 00488011: jmp 0x487cc9 */ goto L_00487cc9;
}

