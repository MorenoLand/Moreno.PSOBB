#include "protos.h"

void f_00863ad0(void) /* __get_osfhandle */
{
    FN_ENTER(0x00863ad0);
    /* 00863ad0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00863ad4: cmp eax, dword ptr [0xaf0a60] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863ada: jae 0x863afa */ if (!fC) goto L_00863afa;
L_00863adc:; BB(0x00863adc);
    /* 00863adc: mov ecx, eax */ r_ecx = r_eax;
    /* 00863ade: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00863ae1: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00863ae4: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 00863aeb: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00863aee: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00863af1: test byte ptr [eax + 4], 1 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863af5: je 0x863afa */ if (fZ) goto L_00863afa;
L_00863af7:; BB(0x00863af7);
    /* 00863af7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00863af9: ret  */ FN_RET(0x00863ad0); r_esp += 4; return;
L_00863afa:; BB(0x00863afa);
    /* 00863afa: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x863affu); f_00859dd6();
    /* 00863aff: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00863b05: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x863b0au); f_00859ddf();
    /* 00863b0a: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863b0d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863b10: ret  */ FN_RET(0x00863ad0); r_esp += 4; return;
}

void f_00867045(void) /* __get_lc_time */
{
    FN_ENTER(0x00867045);
    /* 00867045: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867046: mov ebp, esp */ r_ebp = r_esp;
    /* 00867048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00867049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086704a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086704c: movzx eax, word ptr [0xae7ed6] */ r_eax = (u32)R16((u32)(0xae7ed6u));
    /* 00867053: movzx ecx, word ptr [0xae7ed8] */ r_ecx = (u32)R16((u32)(0xae7ed8u));
    /* 0086705a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086705d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00867060: jne 0x867067 */ if (!fZ) goto L_00867067;
L_00867062:; BB(0x00867062);
    /* 00867062: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00867065: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00867066: ret  */ FN_RET(0x00867045); r_esp += 4; return;
L_00867067:; BB(0x00867067);
    /* 00867067: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00867069: lea ecx, [esi + 4] */ r_ecx = (u32)(r_esi+0x4u);
    /* 0086706c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086706d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0086706f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00867071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867072: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00867073: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867074: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867079u); f_0086a17d();
    /* 00867079: mov edi, eax */ r_edi = r_eax;
    /* 0086707b: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 0086707e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086707f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00867081: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867084: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867085: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86708au); f_0086a17d();
    /* 0086708a: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086708c: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 0086708f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867090: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00867092: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867095: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867096: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86709bu); f_0086a17d();
    /* 0086709b: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086709d: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 008670a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008670a1: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 008670a3: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008670a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008670a7: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8670acu); f_0086a17d();
    /* 008670ac: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008670af: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008670b1: lea eax, [esi + 0x14] */ r_eax = (u32)(r_esi+0x14u);
    /* 008670b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008670b5: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 008670b7: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008670ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008670bb: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8670c0u); f_0086a17d();
    /* 008670c0: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008670c2: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 008670c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008670c6: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 008670c8: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008670cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008670cc: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8670d1u); f_0086a17d();
    /* 008670d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008670d2: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 008670d4: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008670d7: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008670d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008670da: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8670dfu); f_0086a17d();
    /* 008670df: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008670e1: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 008670e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008670e5: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 008670e7: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008670ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008670eb: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8670f0u); f_0086a17d();
    /* 008670f0: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008670f3: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008670f5: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 008670f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008670f9: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 008670fb: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008670fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008670ff: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867104u); f_0086a17d();
    /* 00867104: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867106: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 00867109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086710a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0086710c: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086710f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867110: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867115u); f_0086a17d();
    /* 00867115: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867117: lea eax, [esi + 0x2c] */ r_eax = (u32)(r_esi+0x2cu);
    /* 0086711a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086711b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0086711d: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867120: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867121: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867126u); f_0086a17d();
    /* 00867126: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867128: lea eax, [esi + 0x30] */ r_eax = (u32)(r_esi+0x30u);
    /* 0086712b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086712c: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0086712e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867131: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867132: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867137u); f_0086a17d();
    /* 00867137: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086713a: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086713c: lea eax, [esi + 0x34] */ r_eax = (u32)(r_esi+0x34u);
    /* 0086713f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867140: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00867142: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867145: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867146: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86714bu); f_0086a17d();
    /* 0086714b: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086714d: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 00867150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867151: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00867153: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867156: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867157: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86715cu); f_0086a17d();
    /* 0086715c: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086715e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00867161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867162: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00867164: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867167: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867168: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86716du); f_0086a17d();
    /* 0086716d: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086716f: lea eax, [esi + 0x3c] */ r_eax = (u32)(r_esi+0x3cu);
    /* 00867172: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867173: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00867175: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867178: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867179: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86717eu); f_0086a17d();
    /* 0086717e: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867181: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867183: lea eax, [esi + 0x40] */ r_eax = (u32)(r_esi+0x40u);
    /* 00867186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867187: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00867189: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086718c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086718d: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867192u); f_0086a17d();
    /* 00867192: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867194: lea eax, [esi + 0x44] */ r_eax = (u32)(r_esi+0x44u);
    /* 00867197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867198: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0086719a: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086719d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086719e: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8671a3u); f_0086a17d();
    /* 008671a3: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008671a5: lea eax, [esi + 0x48] */ r_eax = (u32)(r_esi+0x48u);
    /* 008671a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008671a9: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 008671ab: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008671ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008671af: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8671b4u); f_0086a17d();
    /* 008671b4: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008671b6: lea eax, [esi + 0x4c] */ r_eax = (u32)(r_esi+0x4cu);
    /* 008671b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008671ba: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 008671bc: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008671bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008671c0: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8671c5u); f_0086a17d();
    /* 008671c5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008671c8: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008671ca: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 008671cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008671ce: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 008671d0: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008671d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008671d4: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8671d9u); f_0086a17d();
    /* 008671d9: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008671db: lea eax, [esi + 0x54] */ r_eax = (u32)(r_esi+0x54u);
    /* 008671de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008671df: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 008671e1: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008671e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008671e5: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8671eau); f_0086a17d();
    /* 008671ea: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008671ec: lea eax, [esi + 0x58] */ r_eax = (u32)(r_esi+0x58u);
    /* 008671ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008671f0: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 008671f2: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008671f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008671f6: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8671fbu); f_0086a17d();
    /* 008671fb: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008671fd: lea eax, [esi + 0x5c] */ r_eax = (u32)(r_esi+0x5cu);
    /* 00867200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867201: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00867203: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867206: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867207: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86720cu); f_0086a17d();
    /* 0086720c: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086720f: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867211: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 00867214: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867215: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00867217: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086721a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086721b: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867220u); f_0086a17d();
    /* 00867220: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867222: lea eax, [esi + 0x64] */ r_eax = (u32)(r_esi+0x64u);
    /* 00867225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867226: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00867228: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086722b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086722c: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867231u); f_0086a17d();
    /* 00867231: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867233: lea eax, [esi + 0x68] */ r_eax = (u32)(r_esi+0x68u);
    /* 00867236: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867237: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00867239: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086723c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086723d: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867242u); f_0086a17d();
    /* 00867242: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867244: lea eax, [esi + 0x6c] */ r_eax = (u32)(r_esi+0x6cu);
    /* 00867247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867248: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0086724a: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086724d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086724e: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867253u); f_0086a17d();
    /* 00867253: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867256: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867258: lea eax, [esi + 0x70] */ r_eax = (u32)(r_esi+0x70u);
    /* 0086725b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086725c: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0086725e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867261: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867262: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867267u); f_0086a17d();
    /* 00867267: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867269: lea eax, [esi + 0x74] */ r_eax = (u32)(r_esi+0x74u);
    /* 0086726c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086726d: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0086726f: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867272: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867273: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867278u); f_0086a17d();
    /* 00867278: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086727a: lea eax, [esi + 0x78] */ r_eax = (u32)(r_esi+0x78u);
    /* 0086727d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086727e: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00867280: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867283: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867284: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867289u); f_0086a17d();
    /* 00867289: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086728b: lea eax, [esi + 0x7c] */ r_eax = (u32)(r_esi+0x7cu);
    /* 0086728e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086728f: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00867291: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867294: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867295: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86729au); f_0086a17d();
    /* 0086729a: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086729d: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086729f: lea eax, [esi + 0x80] */ r_eax = (u32)(r_esi+0x80u);
    /* 008672a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008672a6: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 008672a8: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008672ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008672ac: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8672b1u); f_0086a17d();
    /* 008672b1: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008672b3: lea eax, [esi + 0x84] */ r_eax = (u32)(r_esi+0x84u);
    /* 008672b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008672ba: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 008672bc: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008672bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008672c0: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8672c5u); f_0086a17d();
    /* 008672c5: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008672c7: lea eax, [esi + 0x88] */ r_eax = (u32)(r_esi+0x88u);
    /* 008672cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008672ce: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008672d0: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008672d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008672d4: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8672d9u); f_0086a17d();
    /* 008672d9: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008672db: lea eax, [esi + 0x8c] */ r_eax = (u32)(r_esi+0x8cu);
    /* 008672e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008672e2: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 008672e4: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008672e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008672e8: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8672edu); f_0086a17d();
    /* 008672ed: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008672f0: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008672f2: lea eax, [esi + 0x90] */ r_eax = (u32)(r_esi+0x90u);
    /* 008672f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008672f9: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 008672fb: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008672fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008672ff: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867304u); f_0086a17d();
    /* 00867304: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867306: lea eax, [esi + 0x94] */ r_eax = (u32)(r_esi+0x94u);
    /* 0086730c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086730d: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0086730f: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867312: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867313: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867318u); f_0086a17d();
    /* 00867318: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086731a: lea eax, [esi + 0x98] */ r_eax = (u32)(r_esi+0x98u);
    /* 00867320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867321: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00867323: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867326: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867327: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86732cu); f_0086a17d();
    /* 0086732c: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086732e: lea eax, [esi + 0x9c] */ r_eax = (u32)(r_esi+0x9cu);
    /* 00867334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867335: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00867337: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086733a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086733b: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867340u); f_0086a17d();
    /* 00867340: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867343: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867345: lea eax, [esi + 0xa0] */ r_eax = (u32)(r_esi+0xa0u);
    /* 0086734b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086734c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0086734e: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867351: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867352: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867357u); f_0086a17d();
    /* 00867357: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867359: lea eax, [esi + 0xa4] */ r_eax = (u32)(r_esi+0xa4u);
    /* 0086735f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867360: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00867362: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867365: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867366: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86736bu); f_0086a17d();
    /* 0086736b: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0086736d: lea eax, [esi + 0xa8] */ r_eax = (u32)(r_esi+0xa8u);
    /* 00867373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867374: push 0x1003 */ { u32 v = 0x1003u; r_esp -= 4; W32(r_esp, v); }
    /* 00867379: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086737c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086737d: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867382u); f_0086a17d();
    /* 00867382: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00867385: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867387: lea eax, [esi + 0xb0] */ r_eax = (u32)(r_esi+0xb0u);
    /* 0086738d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086738e: push 0x1009 */ { u32 v = 0x1009u; r_esp -= 4; W32(r_esp, v); }
    /* 00867393: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00867396: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x86739bu); f_0086a17d();
    /* 0086739b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086739e: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008673a0: mov dword ptr [esi + 0xac], ebx */ W32((u32)(r_esi+0xacu), r_ebx);
    /* 008673a6: mov eax, edi */ r_eax = r_edi;
    /* 008673a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008673a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008673aa: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008673ab: ret  */ FN_RET(0x00867045); r_esp += 4; return;
}

void f_00868455(void) /* ___get_qualified_locale */
{
    FN_ENTER(0x00868455);
    /* 00868455: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868456: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00868458: cmp dword ptr [0xae7e90], ebx */ {  u32 a = R32((u32)(0xae7e90u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086845e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086845f: jne 0x868480 */ if (!fZ) goto L_00868480;
L_00868461:; BB(0x00868461);
    /* 00868461: cmp dword ptr [0xae7a10], 2 */ {  u32 a = R32((u32)(0xae7a10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868468: jne 0x868476 */ if (!fZ) goto L_00868476;
L_0086846a:; BB(0x0086846a);
    /* 0086846a: mov eax, dword ptr [0x8f82bc] */ r_eax = R32((u32)(0x8f82bcu));
    /* 0086846f: mov dword ptr [0xae7e90], eax */ W32((u32)(0xae7e90u), r_eax);
    /* 00868474: jmp 0x868480 */ goto L_00868480;
L_00868476:; BB(0x00868476);
    /* 00868476: mov dword ptr [0xae7e90], 0x867e24 */ W32((u32)(0xae7e90u), 0x867e24u);
L_00868480:; BB(0x00868480);
    /* 00868480: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00868484: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868486: je 0x86852f */ if (fZ) goto L_0086852f;
L_0086848c:; BB(0x0086848c);
    /* 0086848c: lea eax, [esi + 0x40] */ r_eax = (u32)(r_esi+0x40u);
    /* 0086848f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868491: mov ecx, esi */ r_ecx = r_esi;
    /* 00868493: mov dword ptr [0xae7e8c], ecx */ W32((u32)(0xae7e8cu), r_ecx);
    /* 00868499: mov dword ptr [0xae7e84], eax */ W32((u32)(0xae7e84u), r_eax);
    /* 0086849e: je 0x8684c3 */ if (fZ) goto L_008684c3;
L_008684a0:; BB(0x008684a0);
    /* 008684a0: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008684a2: je 0x8684c3 */ if (fZ) goto L_008684c3;
L_008684a4:; BB(0x008684a4);
    /* 008684a4: push 0xae7e84 */ { u32 v = 0xae7e84u; r_esp -= 4; W32(r_esp, v); }
    /* 008684a9: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 008684ab: push 0x999a40 */ { u32 v = 0x999a40u; r_esp -= 4; W32(r_esp, v); }
    /* 008684b0: call 0x867d16 */ r_esp -= 4; W32(r_esp, 0x8684b5u); f_00867d16();
    /* 008684b5: mov ecx, dword ptr [0xae7e8c] */ r_ecx = R32((u32)(0xae7e8cu));
    /* 008684bb: mov eax, dword ptr [0xae7e84] */ r_eax = R32((u32)(0xae7e84u));
    /* 008684c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008684c3:; BB(0x008684c3);
    /* 008684c3: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008684c5: mov dword ptr [0xae7e70], ebx */ W32((u32)(0xae7e70u), r_ebx);
    /* 008684cb: je 0x868520 */ if (fZ) goto L_00868520;
L_008684cd:; BB(0x008684cd);
    /* 008684cd: cmp byte ptr [ecx], bl */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008684cf: je 0x868520 */ if (fZ) goto L_00868520;
L_008684d1:; BB(0x008684d1);
    /* 008684d1: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008684d3: je 0x8684e0 */ if (fZ) goto L_008684e0;
L_008684d5:; BB(0x008684d5);
    /* 008684d5: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008684d7: je 0x8684e0 */ if (fZ) goto L_008684e0;
L_008684d9:; BB(0x008684d9);
    /* 008684d9: call 0x86837a */ r_esp -= 4; W32(r_esp, 0x8684deu); f_0086837a();
    /* 008684de: jmp 0x8684e5 */ goto L_008684e5;
L_008684e0:; BB(0x008684e0);
    /* 008684e0: call 0x868400 */ r_esp -= 4; W32(r_esp, 0x8684e5u); f_00868400();
L_008684e5:; BB(0x008684e5);
    /* 008684e5: cmp dword ptr [0xae7e70], ebx */ {  u32 a = R32((u32)(0xae7e70u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008684eb: jne 0x868543 */ if (!fZ) goto L_00868543;
L_008684ed:; BB(0x008684ed);
    /* 008684ed: push 0xae7e8c */ { u32 v = 0xae7e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 008684f2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008684f4: push 0x999bf0 */ { u32 v = 0x999bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 008684f9: call 0x867d16 */ r_esp -= 4; W32(r_esp, 0x8684feu); f_00867d16();
    /* 008684fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00868501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868503: je 0x868534 */ if (fZ) goto L_00868534;
L_00868505:; BB(0x00868505);
    /* 00868505: mov eax, dword ptr [0xae7e84] */ r_eax = R32((u32)(0xae7e84u));
    /* 0086850a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086850c: je 0x868519 */ if (fZ) goto L_00868519;
L_0086850e:; BB(0x0086850e);
    /* 0086850e: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00868510: je 0x868519 */ if (fZ) goto L_00868519;
L_00868512:; BB(0x00868512);
    /* 00868512: call 0x86837a */ r_esp -= 4; W32(r_esp, 0x868517u); f_0086837a();
    /* 00868517: jmp 0x868534 */ goto L_00868534;
L_00868519:; BB(0x00868519);
    /* 00868519: call 0x868400 */ r_esp -= 4; W32(r_esp, 0x86851eu); f_00868400();
    /* 0086851e: jmp 0x868534 */ goto L_00868534;
L_00868520:; BB(0x00868520);
    /* 00868520: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868522: je 0x86852f */ if (fZ) goto L_0086852f;
L_00868524:; BB(0x00868524);
    /* 00868524: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00868526: je 0x86852f */ if (fZ) goto L_0086852f;
L_00868528:; BB(0x00868528);
    /* 00868528: call 0x868343 */ r_esp -= 4; W32(r_esp, 0x86852du); f_00868343();
    /* 0086852d: jmp 0x868534 */ goto L_00868534;
L_0086852f:; BB(0x0086852f);
    /* 0086852f: call 0x867d76 */ r_esp -= 4; W32(r_esp, 0x868534u); f_00867d76();
L_00868534:; BB(0x00868534);
    /* 00868534: cmp dword ptr [0xae7e70], ebx */ {  u32 a = R32((u32)(0xae7e70u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086853a: jne 0x868543 */ if (!fZ) goto L_00868543;
L_0086853c:; BB(0x0086853c);
    /* 0086853c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086853e: jmp 0x868607 */ goto L_00868607;
L_00868543:; BB(0x00868543);
    /* 00868543: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868544: lea ecx, [esi + 0x80] */ r_ecx = (u32)(r_esi+0x80u);
    /* 0086854a: call 0x867d90 */ r_esp -= 4; W32(r_esp, 0x86854fu); f_00867d90();
    /* 0086854f: mov edi, eax */ r_edi = r_eax;
    /* 00868551: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868553: je 0x868604 */ if (fZ) goto L_00868604;
L_00868559:; BB(0x00868559);
    /* 00868559: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 0086855c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086855d: call dword ptr [0x8f82c8] */ { u32 t = R32((u32)(0x8f82c8u)); r_esp -= 4; W32(r_esp, 0x868563u); call_ind(t); }
    /* 00868563: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868565: je 0x868604 */ if (fZ) goto L_00868604;
L_0086856b:; BB(0x0086856b);
    /* 0086856b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086856d: push dword ptr [0xae7e74] */ { u32 v = R32((u32)(0xae7e74u)); r_esp -= 4; W32(r_esp, v); }
    /* 00868573: call dword ptr [0x8f82c4] */ { u32 t = R32((u32)(0x8f82c4u)); r_esp -= 4; W32(r_esp, 0x868579u); call_ind(t); }
    /* 00868579: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086857b: je 0x868604 */ if (fZ) goto L_00868604;
L_00868581:; BB(0x00868581);
    /* 00868581: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00868585: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868587: mov ecx, dword ptr [0xae7e74] */ r_ecx = R32((u32)(0xae7e74u));
    /* 0086858d: je 0x8685a1 */ if (fZ) goto L_008685a1;
L_0086858f:; BB(0x0086858f);
    /* 0086858f: mov dx, word ptr [0xae7e78] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0xae7e78u))) & 0xffffu);
    /* 00868596: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00868599: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 0086859d: mov word ptr [eax + 4], di */ W16((u32)(r_eax+0x4u), (u16)r_edi);
L_008685a1:; BB(0x008685a1);
    /* 008685a1: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 008685a5: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008685a7: je 0x8685ff */ if (fZ) goto L_008685ff;
L_008685a9:; BB(0x008685a9);
    /* 008685a9: cmp word ptr [eax], 0x814 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x814u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008685ae: jne 0x8685bf */ if (!fZ) goto L_008685bf;
L_008685b0:; BB(0x008685b0);
    /* 008685b0: push 0x99a214 */ { u32 v = 0x99a214u; r_esp -= 4; W32(r_esp, v); }
    /* 008685b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008685b6: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x8685bbu); f_0085e2f0();
    /* 008685bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008685bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008685bd: jmp 0x8685d2 */ goto L_008685d2;
L_008685bf:; BB(0x008685bf);
    /* 008685bf: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008685c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008685c2: push 0x1001 */ { u32 v = 0x1001u; r_esp -= 4; W32(r_esp, v); }
    /* 008685c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008685c8: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x8685ceu); call_ind(t); }
    /* 008685ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008685d0: je 0x868604 */ if (fZ) goto L_00868604;
L_008685d2:; BB(0x008685d2);
    /* 008685d2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008685d4: lea eax, [esi + 0x40] */ r_eax = (u32)(r_esi+0x40u);
    /* 008685d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008685d8: push 0x1002 */ { u32 v = 0x1002u; r_esp -= 4; W32(r_esp, v); }
    /* 008685dd: push dword ptr [0xae7e78] */ { u32 v = R32((u32)(0xae7e78u)); r_esp -= 4; W32(r_esp, v); }
    /* 008685e3: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x8685e9u); call_ind(t); }
    /* 008685e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008685eb: je 0x868604 */ if (fZ) goto L_00868604;
L_008685ed:; BB(0x008685ed);
    /* 008685ed: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008685ef: add esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008685f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008685f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008685f7: call 0x86386e */ r_esp -= 4; W32(r_esp, 0x8685fcu); f_0086386e();
    /* 008685fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008685ff:; BB(0x008685ff);
    /* 008685ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00868601: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00868602: jmp 0x868606 */ goto L_00868606;
L_00868604:; BB(0x00868604);
    /* 00868604: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00868606:; BB(0x00868606);
    /* 00868606: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00868607:; BB(0x00868607);
    /* 00868607: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00868608: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00868609: ret  */ FN_RET(0x00868455); r_esp += 4; return;
}

