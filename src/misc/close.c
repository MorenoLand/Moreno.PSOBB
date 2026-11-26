#include "protos.h"

void f_0086203d(void) /* __close_lk */
{
    FN_ENTER(0x0086203d);
    /* 0086203d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086203e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00862042: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862043: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862044: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x862049u); f_00863ad0();
    /* 00862049: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086204c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086204d: je 0x86208b */ if (fZ) goto L_0086208b;
L_0086204f:; BB(0x0086204f);
    /* 0086204f: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862052: je 0x862059 */ if (fZ) goto L_00862059;
L_00862054:; BB(0x00862054);
    /* 00862054: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862057: jne 0x86206f */ if (!fZ) goto L_0086206f;
L_00862059:; BB(0x00862059);
    /* 00862059: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086205b: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x862060u); f_00863ad0();
    /* 00862060: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00862062: mov edi, eax */ r_edi = r_eax;
    /* 00862064: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x862069u); f_00863ad0();
    /* 00862069: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086206b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086206c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086206d: je 0x86208b */ if (fZ) goto L_0086208b;
L_0086206f:; BB(0x0086206f);
    /* 0086206f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862070: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x862075u); f_00863ad0();
    /* 00862075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862077: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x86207du); call_ind(t); }
    /* 0086207d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086207f: jne 0x86208b */ if (!fZ) goto L_0086208b;
L_00862081:; BB(0x00862081);
    /* 00862081: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x862087u); call_ind(t); }
    /* 00862087: mov edi, eax */ r_edi = r_eax;
    /* 00862089: jmp 0x86208d */ goto L_0086208d;
L_0086208b:; BB(0x0086208b);
    /* 0086208b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0086208d:; BB(0x0086208d);
    /* 0086208d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086208e: call 0x863a51 */ r_esp -= 4; W32(r_esp, 0x862093u); f_00863a51();
    /* 00862093: mov eax, esi */ r_eax = r_esi;
    /* 00862095: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00862098: mov eax, dword ptr [eax*4 + 0xaf0a80] */ r_eax = R32((u32)(r_eax*4+0xaf0a80u));
    /* 0086209f: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008620a2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008620a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008620a5: lea ecx, [esi + esi*8] */ r_ecx = (u32)(r_esi+r_esi*8);
    /* 008620a8: mov byte ptr [eax + ecx*4 + 4], 0 */ W8((u32)(r_eax+r_ecx*4+0x4u), 0x0u);
    /* 008620ad: je 0x8620bb */ if (fZ) goto L_008620bb;
L_008620af:; BB(0x008620af);
    /* 008620af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008620b0: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x8620b5u); f_00859de8();
    /* 008620b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008620b6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008620b9: jmp 0x8620bd */ goto L_008620bd;
L_008620bb:; BB(0x008620bb);
    /* 008620bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008620bd:; BB(0x008620bd);
    /* 008620bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008620be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008620bf: ret  */ FN_RET(0x0086203d); r_esp += 4; return;
}

