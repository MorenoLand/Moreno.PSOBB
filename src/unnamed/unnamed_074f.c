#include "protos.h"

void f_0074f008(void) /* sub_74F008 */
{
    FN_ENTER(0x0074f008);
    /* 0074f008: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74f00du); f_00737d90();
    /* 0074f00d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074f013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f014: push dword ptr [ecx + 0x12124] */ { u32 v = R32((u32)(r_ecx+0x12124u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f01a: push dword ptr [ecx + 0x12120] */ { u32 v = R32((u32)(r_ecx+0x12120u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f020: call 0x7d40c4 */ r_esp -= 4; W32(r_esp, 0x74f025u); f_007d40c4();
    /* 0074f025: ret  */ FN_RET(0x0074f008); r_esp += 4; return;
}

void f_0074f028(void) /* sub_74F028 */
{
    FN_ENTER(0x0074f028);
    /* 0074f028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074f029: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074f02f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0074f031: movzx eax, byte ptr [ebp + 0x94] */ r_eax = (u32)R8((u32)(r_ebp+0x94u));
    /* 0074f038: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074f03a: je 0x74f0b7 */ if (fZ) goto L_0074f0b7;
L_0074f03c:; BB(0x0074f03c);
    /* 0074f03c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074f03f: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f041: lea eax, [ebp + 0xc0] */ r_eax = (u32)(r_ebp+0xc0u);
    /* 0074f047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f048: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f049: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x74f04eu); f_00857dec();
    /* 0074f04e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0074f052: push 0x973b80 */ { u32 v = 0x973b80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f058: call 0x85838c */ r_esp -= 4; W32(r_esp, 0x74f05du); f_0085838c();
    /* 0074f05d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f062: je 0x74f084 */ if (fZ) goto L_0074f084;
L_0074f064:; BB(0x0074f064);
    /* 0074f064: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f067: push 0xaab2ec */ { u32 v = 0xaab2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0074f06c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x74f071u); f_00857dec();
    /* 0074f071: push 0x973b80 */ { u32 v = 0x973b80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f076: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f078: call 0x85838c */ r_esp -= 4; W32(r_esp, 0x74f07du); f_0085838c();
    /* 0074f07d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f080: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f082: jne 0x74f064 */ if (!fZ) goto L_0074f064;
L_0074f084:; BB(0x0074f084);
    /* 0074f084: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074f08a: lea edx, [ebp + 0xb0] */ r_edx = (u32)(r_ebp+0xb0u);
    /* 0074f090: lea eax, [ebp + 0x148] */ r_eax = (u32)(r_ebp+0x148u);
    /* 0074f096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f097: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f098: call 0x7d7640 */ r_esp -= 4; W32(r_esp, 0x74f09du); f_007d7640();
    /* 0074f09d: movzx eax, byte ptr [ebp + 0x94] */ r_eax = (u32)R8((u32)(r_ebp+0x94u));
    /* 0074f0a4: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0074f0a9: mov byte ptr [ebp + 0x94], al */ W8((u32)(r_ebp+0x94u), (u8)r_eax);
    /* 0074f0af: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074f0b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f0b6: ret  */ FN_RET(0x0074f028); r_esp += 4; return;
L_0074f0b7:; BB(0x0074f0b7);
    /* 0074f0b7: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074f0bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f0be: ret  */ FN_RET(0x0074f028); r_esp += 4; return;
}

void f_0074f0c0(void) /* sub_74F0C0 */
{
    FN_ENTER(0x0074f0c0);
    /* 0074f0c0: mov dword ptr [0xa9abc8], 0x3f800000 */ W32((u32)(0xa9abc8u), 0x3f800000u);
    /* 0074f0ca: mov dword ptr [0xa9abcc], 0x41000000 */ W32((u32)(0xa9abccu), 0x41000000u);
    /* 0074f0d4: mov dword ptr [0xa9abd0], 0x3fc00000 */ W32((u32)(0xa9abd0u), 0x3fc00000u);
    /* 0074f0de: ret  */ FN_RET(0x0074f0c0); r_esp += 4; return;
}

void f_0074f0e0(void) /* sub_74F0E0 */
{
    FN_ENTER(0x0074f0e0);
    /* 0074f0e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f0e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074f0e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f0e5: call 0x74f104 */ r_esp -= 4; W32(r_esp, 0x74f0eau); f_0074f104();
    /* 0074f0ea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074f0ee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f0f0: jne 0x74f0f6 */ if (!fZ) goto L_0074f0f6;
L_0074f0f2:; BB(0x0074f0f2);
    /* 0074f0f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074f0f3: ret 4 */ FN_RET(0x0074f0e0); r_esp += 8; return;
L_0074f0f6:; BB(0x0074f0f6);
    /* 0074f0f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f0f7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74f0fcu); f_005c2f74();
    /* 0074f0fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f0fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074f0fe: ret 4 */ FN_RET(0x0074f0e0); r_esp += 8; return;
}

void f_0074f104(void) /* sub_74F104 */
{
    FN_ENTER(0x0074f104);
    /* 0074f104: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074f105: mov ebp, esp */ r_ebp = r_esp;
    /* 0074f107: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074f109: push 0x8f2a78 */ { u32 v = 0x8f2a78u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f10e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074f114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f115: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074f11c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074f11f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074f122: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074f125: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074f128: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074f12b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074f12e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074f135: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f138: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0074f13b: mov dword ptr [ecx], 0xb42120 */ W32((u32)(r_ecx), 0xb42120u);
    /* 0074f141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f143: je 0x74f156 */ if (fZ) goto L_0074f156;
L_0074f145:; BB(0x0074f145);
    /* 0074f145: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f147: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f14cu); f_007127b0();
    /* 0074f14c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f14f: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_0074f156:; BB(0x0074f156);
    /* 0074f156: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0074f159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f15b: je 0x74f16e */ if (fZ) goto L_0074f16e;
L_0074f15d:; BB(0x0074f15d);
    /* 0074f15d: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f15f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f164u); f_007127b0();
    /* 0074f164: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f167: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_0074f16e:; BB(0x0074f16e);
    /* 0074f16e: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0074f171: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f173: je 0x74f186 */ if (fZ) goto L_0074f186;
L_0074f175:; BB(0x0074f175);
    /* 0074f175: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f177: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f17cu); f_007127b0();
    /* 0074f17c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f17f: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_0074f186:; BB(0x0074f186);
    /* 0074f186: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0074f189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f18b: je 0x74f19e */ if (fZ) goto L_0074f19e;
L_0074f18d:; BB(0x0074f18d);
    /* 0074f18d: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f18f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f194u); f_007127b0();
    /* 0074f194: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f197: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_0074f19e:; BB(0x0074f19e);
    /* 0074f19e: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0074f1a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f1a3: je 0x74f1b6 */ if (fZ) goto L_0074f1b6;
L_0074f1a5:; BB(0x0074f1a5);
    /* 0074f1a5: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f1a7: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74f1acu); f_0073d160();
    /* 0074f1ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f1af: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_0074f1b6:; BB(0x0074f1b6);
    /* 0074f1b6: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0074f1b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f1bb: je 0x74f1ce */ if (fZ) goto L_0074f1ce;
L_0074f1bd:; BB(0x0074f1bd);
    /* 0074f1bd: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f1bf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f1c4u); f_007127b0();
    /* 0074f1c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f1c7: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_0074f1ce:; BB(0x0074f1ce);
    /* 0074f1ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074f1d5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x74f1dau); f_008171e8();
    /* 0074f1da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f1dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f1e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f1e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f1e7: ret  */ FN_RET(0x0074f104); r_esp += 4; return;
}

void f_0074f1e8(void) /* sub_74F1E8 */
{
    FN_ENTER(0x0074f1e8);
    /* 0074f1e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074f1e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0074f1eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074f1ed: push 0x8f2a94 */ { u32 v = 0x8f2a94u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f1f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074f1f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f1f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074f200: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074f203: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074f206: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074f209: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074f20c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074f20f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0074f212: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0074f215: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074f218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f219: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0074f21c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074f21f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x74f224u); f_008193cc();
    /* 0074f224: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074f22b: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f22e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f231: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074f234: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f236: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 0074f239: mov dword ptr [ebx], 0xb42120 */ W32((u32)(r_ebx), 0xb42120u);
    /* 0074f23f: mov eax, dword ptr [0x9f4088] */ r_eax = R32((u32)(0x9f4088u));
    /* 0074f244: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0074f247: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 0074f24a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74f24fu); f_0073ec50();
    /* 0074f24f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f252: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f255: push 0x973b84 */ { u32 v = 0x973b84u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f25a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f25b: call 0x751d64 */ r_esp -= 4; W32(r_esp, 0x74f260u); f_00751d64();
    /* 0074f260: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f263: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f266: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0074f269: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f26b: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0074f26e: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74f273u); f_007336fc();
    /* 0074f273: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f276: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f279: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f27a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074f27d: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74f282u); f_00712624();
    /* 0074f282: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f285: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0074f288: movzx ecx, word ptr [eax + 0x84] */ r_ecx = (u32)R16((u32)(r_eax+0x84u));
    /* 0074f28f: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0074f295: mov word ptr [eax + 0x84], cx */ W16((u32)(r_eax+0x84u), (u16)r_ecx);
    /* 0074f29c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f29f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f2a1: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 0074f2a4: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 0074f2a7: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 0074f2aa: mov dword ptr [eax + 0x48], ebx */ W32((u32)(r_eax+0x48u), r_ebx);
    /* 0074f2ad: mov dword ptr [eax + 0x4c], ebx */ W32((u32)(r_eax+0x4cu), r_ebx);
    /* 0074f2b0: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0074f2b5: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 0074f2b8: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 0074f2bb: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f2be: mov dword ptr [eax + 0x2c], ebx */ W32((u32)(r_eax+0x2cu), r_ebx);
    /* 0074f2c1: mov dword ptr [eax + 0x30], ebx */ W32((u32)(r_eax+0x30u), r_ebx);
    /* 0074f2c4: mov byte ptr [eax + 0x1c], bl */ W8((u32)(r_eax+0x1cu), (u8)r_ebx);
    /* 0074f2c7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074f2ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f2cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f2d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f2d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f2d7: ret 8 */ FN_RET(0x0074f1e8); r_esp += 12; return;
}

void f_0074f2dc(void) /* sub_74F2DC */
{
    FN_ENTER(0x0074f2dc);
    /* 0074f2dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074f2dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0074f2df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074f2e1: push 0x8f2abc */ { u32 v = 0x8f2abcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074f2e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074f2ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f2ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074f2f4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074f2f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074f2fa: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0074f2fd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0074f300: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0074f303: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f306: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0074f309: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74f30eu); f_0068d5a8();
    /* 0074f30e: mov ebx, eax */ r_ebx = r_eax;
    /* 0074f310: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f313: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f315: je 0x74f77b */ if (fZ) goto L_0074f77b;
L_0074f31b:; BB(0x0074f31b);
    /* 0074f31b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f31e: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f321: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x74f326u); f_00719140();
    /* 0074f326: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f327: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f32a: movzx edx, byte ptr [edx + 0x1c] */ r_edx = (u32)R8((u32)(r_edx+0x1cu));
    /* 0074f32e: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074f331: ja 0x74f77b */ if ((!fC&&!fZ)) goto L_0074f77b;
L_0074f337:; BB(0x0074f337);
    /* 0074f337: mov edx, dword ptr [edx*4 + 0x973b8c] */ r_edx = R32((u32)(r_edx*4+0x973b8cu));
    /* 0074f33e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f2dc); r_esp += 4; return;
}

void f_0074f340(void)
{
    FN_ENTER(0x0074f340);
    /* 0074f340: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0074f346: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074f34c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f34d: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0074f350: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074f352: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074f354: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074f356: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0074f35d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x74f362u); f_007c1160();
    /* 0074f362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f364: je 0x74f77b */ if (fZ) goto L_0074f77b;
L_0074f36a:; BB(0x0074f36a);
    /* 0074f36a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f36d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074f370: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074f372: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x74f375u); call_ind(t); }
    /* 0074f375: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f378: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 0074f37c: jmp 0x74f77b */ goto L_0074f77b;
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f340); r_esp += 4; return;
}

void f_0074f381(void)
{
    FN_ENTER(0x0074f381);
    /* 0074f381: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f384: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0074f387: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f389: je 0x74f39a */ if (fZ) goto L_0074f39a;
L_0074f38b:; BB(0x0074f38b);
    /* 0074f38b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f390u); f_007127b0();
    /* 0074f390: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f393: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0074f39a:; BB(0x0074f39a);
    /* 0074f39a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0074f39d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f39f: je 0x74f3b0 */ if (fZ) goto L_0074f3b0;
L_0074f3a1:; BB(0x0074f3a1);
    /* 0074f3a1: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74f3a6u); f_0073d160();
    /* 0074f3a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f3a9: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0074f3b0:; BB(0x0074f3b0);
    /* 0074f3b0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0074f3b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f3b5: je 0x74f3c6 */ if (fZ) goto L_0074f3c6;
L_0074f3b7:; BB(0x0074f3b7);
    /* 0074f3b7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f3bcu); f_007127b0();
    /* 0074f3bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f3bf: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0074f3c6:; BB(0x0074f3c6);
    /* 0074f3c6: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f3c8: call 0x74f7cc */ r_esp -= 4; W32(r_esp, 0x74f3cdu); f_0074f7cc();
    /* 0074f3cd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f3d0: mov byte ptr [edx + 0x1c], 7 */ W8((u32)(r_edx+0x1cu), 0x7u);
    /* 0074f3d4: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0074f3d7: jmp 0x74f77b */ goto L_0074f77b;
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f381); r_esp += 4; return;
}

void f_0074f3dc(void)
{
    FN_ENTER(0x0074f3dc);
    /* 0074f3dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f3df: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0074f3e2: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x74f3e7u); f_0073d114();
    /* 0074f3e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f3e9: je 0x74f403 */ if (fZ) goto L_0074f403;
L_0074f3eb:; BB(0x0074f3eb);
    /* 0074f3eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f3ee: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f3f1: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074f3f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f3f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f3ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f402: ret  */ FN_RET(0x0074f3dc); r_esp += 4; return;
L_0074f403:; BB(0x0074f403);
    /* 0074f403: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f406: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0074f409: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x74f40eu); f_0073ce50();
    /* 0074f40e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f410: je 0x74f77b */ if (fZ) goto L_0074f77b;
L_0074f416:; BB(0x0074f416);
    /* 0074f416: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f419: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0074f41c: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74f421u); f_0073d134();
    /* 0074f421: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f423: jne 0x74f441 */ if (!fZ) goto L_0074f441;
L_0074f425:; BB(0x0074f425);
    /* 0074f425: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f428: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f42b: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f42e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f430: call 0x68edac */ r_esp -= 4; W32(r_esp, 0x74f435u); f_0068edac();
    /* 0074f435: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f438: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 0074f43c: jmp 0x74f77b */ goto L_0074f77b;
L_0074f441:; BB(0x0074f441);
    /* 0074f441: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f444: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f447: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074f44b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f44e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f455: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f458: ret  */ FN_RET(0x0074f3dc); r_esp += 4; return;
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f3dc); r_esp += 4; return;
}

void f_0074f450(void)
{
    FN_ENTER(0x0074f450);
    /* 0074f450: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f455: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f458: ret  */ FN_RET(0x0074f450); r_esp += 4; return;
}

void f_0074f459(void)
{
    FN_ENTER(0x0074f459);
    /* 0074f459: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f45c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0074f45f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f461: je 0x74f7b5 */ if (fZ) goto L_0074f7b5;
L_0074f467:; BB(0x0074f467);
    /* 0074f467: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0074f46b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f46d: je 0x74f487 */ if (fZ) goto L_0074f487;
L_0074f46f:; BB(0x0074f46f);
    /* 0074f46f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f472: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f475: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074f479: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f47c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f483: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f485: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f486: ret  */ FN_RET(0x0074f459); r_esp += 4; return;
L_0074f487:; BB(0x0074f487);
    /* 0074f487: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f489: je 0x74f77b */ if (fZ) goto L_0074f77b;
L_0074f48f:; BB(0x0074f48f);
    /* 0074f48f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0074f492: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f495: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0074f498: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0074f49b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f49d: je 0x74f4b3 */ if (fZ) goto L_0074f4b3;
L_0074f49f:; BB(0x0074f49f);
    /* 0074f49f: mov eax, edx */ r_eax = r_edx;
    /* 0074f4a1: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f4a4: call 0x751fe4 */ r_esp -= 4; W32(r_esp, 0x74f4a9u); f_00751fe4();
    /* 0074f4a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f4ac: imul eax, dword ptr [edx + 0x2c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x2cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0074f4b0: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0074f4b3:; BB(0x0074f4b3);
    /* 0074f4b3: mov ecx, edx */ r_ecx = r_edx;
    /* 0074f4b5: call 0x74f84c */ r_esp -= 4; W32(r_esp, 0x74f4bau); f_0074f84c();
    /* 0074f4ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f4bd: mov byte ptr [edx + 0x1c], 5 */ W8((u32)(r_edx+0x1cu), 0x5u);
    /* 0074f4c1: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0074f4c4: jmp 0x74f77b */ goto L_0074f77b;
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f459); r_esp += 4; return;
L_0074f7b5:; BB(0x0074f7b5);
    /* 0074f7b5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f7b8: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074f7bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f7bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f7c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f7c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f7c9: ret  */ FN_RET(0x0074f459); r_esp += 4; return;
}

void f_0074f4c9(void)
{
    FN_ENTER(0x0074f4c9);
    /* 0074f4c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f4cc: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0074f4cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f4d1: je 0x74f4e2 */ if (fZ) goto L_0074f4e2;
L_0074f4d3:; BB(0x0074f4d3);
    /* 0074f4d3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f4d8u); f_007127b0();
    /* 0074f4d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f4db: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0074f4e2:; BB(0x0074f4e2);
    /* 0074f4e2: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0074f4e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f4e7: je 0x74f4f8 */ if (fZ) goto L_0074f4f8;
L_0074f4e9:; BB(0x0074f4e9);
    /* 0074f4e9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f4eeu); f_007127b0();
    /* 0074f4ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f4f1: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0074f4f8:; BB(0x0074f4f8);
    /* 0074f4f8: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0074f4fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f4fd: je 0x74f50e */ if (fZ) goto L_0074f50e;
L_0074f4ff:; BB(0x0074f4ff);
    /* 0074f4ff: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f504u); f_007127b0();
    /* 0074f504: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f507: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0074f50e:; BB(0x0074f50e);
    /* 0074f50e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0074f511: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f513: je 0x74f524 */ if (fZ) goto L_0074f524;
L_0074f515:; BB(0x0074f515);
    /* 0074f515: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74f51au); f_0073d160();
    /* 0074f51a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f51d: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0074f524:; BB(0x0074f524);
    /* 0074f524: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0074f527: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f529: je 0x74f53a */ if (fZ) goto L_0074f53a;
L_0074f52b:; BB(0x0074f52b);
    /* 0074f52b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f530u); f_007127b0();
    /* 0074f530: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f533: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0074f53a:; BB(0x0074f53a);
    /* 0074f53a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f53d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74f542u); f_00737d90();
    /* 0074f542: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f546: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0074f549: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74f54eu); f_005c5528();
    /* 0074f54e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f54f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0074f551: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f553: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x74f559u); call_ind(t); }
    /* 0074f559: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074f55c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074f55f: jg 0x74f5a7 */ if ((!fZ&&fS==fO)) goto L_0074f5a7;
L_0074f561:; BB(0x0074f561);
    /* 0074f561: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f564: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f567: mov dword ptr [eax + 0x2c], 1 */ W32((u32)(r_eax+0x2cu), 0x1u);
    /* 0074f56e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f570: je 0x74f584 */ if (fZ) goto L_0074f584;
L_0074f572:; BB(0x0074f572);
    /* 0074f572: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f575: call 0x751fe4 */ r_esp -= 4; W32(r_esp, 0x74f57au); f_00751fe4();
    /* 0074f57a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f57d: imul eax, dword ptr [edx + 0x2c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x2cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0074f581: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0074f584:; BB(0x0074f584);
    /* 0074f584: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f587: call 0x74f84c */ r_esp -= 4; W32(r_esp, 0x74f58cu); f_0074f84c();
    /* 0074f58c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f58f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f592: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0074f595: mov byte ptr [edx + 0x1c], 5 */ W8((u32)(r_edx+0x1cu), 0x5u);
    /* 0074f599: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f59c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f5a3: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f5a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f5a6: ret  */ FN_RET(0x0074f4c9); r_esp += 4; return;
L_0074f5a7:; BB(0x0074f5a7);
    /* 0074f5a7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0074f5ae: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f5b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74f5b8u); f_005caba4();
    /* 0074f5b8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0074f5bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f5be: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0074f5c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f5c3: je 0x74f792 */ if (fZ) goto L_0074f792;
L_0074f5c9:; BB(0x0074f5c9);
    /* 0074f5c9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0074f5d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074f5d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f5d9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74f5deu); f_0073ec50();
    /* 0074f5de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f5df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f5e2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074f5e5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074f5e8: movsx ebx, word ptr [edx + 0x24] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x24u));
    /* 0074f5ec: mov edi, 1 */ r_edi = 0x1u;
    /* 0074f5f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f5f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f5f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f5f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f5f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f5f6: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x74f5fbu); f_00728ac4();
    /* 0074f5fb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0074f602:; BB(0x0074f602);
    /* 0074f602: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074f609: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074f60c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f60e: je 0x74f646 */ if (fZ) goto L_0074f646;
L_0074f610:; BB(0x0074f610);
    /* 0074f610: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f613: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f615: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074f618: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74f61du); f_007336fc();
    /* 0074f61d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074f620: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f621: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074f624: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74f629u); f_00712624();
    /* 0074f629: push 0x42e00000 */ { u32 v = 0x42e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f62e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074f631: call 0x7296e4 */ r_esp -= 4; W32(r_esp, 0x74f636u); f_007296e4();
    /* 0074f636: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074f639: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0074f63d: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f642: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
L_0074f646:; BB(0x0074f646);
    /* 0074f646: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074f649: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f64c: mov byte ptr [edx + 0x1c], 4 */ W8((u32)(r_edx+0x1cu), 0x4u);
    /* 0074f650: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0074f653: jmp 0x74f77b */ goto L_0074f77b;
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f4c9); r_esp += 4; return;
L_0074f792:; BB(0x0074f792);
    /* 0074f792: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074f794: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0074f797: jmp 0x74f602 */ goto L_0074f602;
}

void f_0074f658(void)
{
    FN_ENTER(0x0074f658);
    /* 0074f658: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f65b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f65e: jmp 0x74f72e */ goto L_0074f72e;
L_0074f72e:; BB(0x0074f72e);
    /* 0074f72e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74f733u); f_00737d90();
    /* 0074f733: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f737: call 0x74f8a4 */ r_esp -= 4; W32(r_esp, 0x74f73cu); f_0074f8a4();
    /* 0074f73c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f73f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0074f742: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074f749: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074f74b: je 0x74f770 */ if (fZ) goto L_0074f770;
L_0074f74d:; BB(0x0074f74d);
    /* 0074f74d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f750: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074f753: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074f755: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x74f758u); call_ind(t); }
    /* 0074f758: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f75b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f75e: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 0074f762: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f765: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f76c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f76e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f76f: ret  */ FN_RET(0x0074f658); r_esp += 4; return;
L_0074f770:; BB(0x0074f770);
    /* 0074f770: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f772: je 0x74f77b */ if (fZ) goto L_0074f77b;
L_0074f774:; BB(0x0074f774);
    /* 0074f774: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f777: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f658); r_esp += 4; return;
}

void f_0074f663(void)
{
    FN_ENTER(0x0074f663);
    /* 0074f663: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f666: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0074f669: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f66b: je 0x74f67c */ if (fZ) goto L_0074f67c;
L_0074f66d:; BB(0x0074f66d);
    /* 0074f66d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f672u); f_007127b0();
    /* 0074f672: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f675: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0074f67c:; BB(0x0074f67c);
    /* 0074f67c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0074f67f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f681: je 0x74f692 */ if (fZ) goto L_0074f692;
L_0074f683:; BB(0x0074f683);
    /* 0074f683: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f688u); f_007127b0();
    /* 0074f688: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f68b: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0074f692:; BB(0x0074f692);
    /* 0074f692: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0074f695: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f697: je 0x74f6a8 */ if (fZ) goto L_0074f6a8;
L_0074f699:; BB(0x0074f699);
    /* 0074f699: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74f69eu); f_007127b0();
    /* 0074f69e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f6a1: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_0074f6a8:; BB(0x0074f6a8);
    /* 0074f6a8: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0074f6ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f6ad: je 0x74f6be */ if (fZ) goto L_0074f6be;
L_0074f6af:; BB(0x0074f6af);
    /* 0074f6af: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74f6b4u); f_0073d160();
    /* 0074f6b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f6b7: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0074f6be:; BB(0x0074f6be);
    /* 0074f6be: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0074f6c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f6c3: je 0x74f79c */ if (fZ) goto L_0074f79c;
L_0074f6c9:; BB(0x0074f6c9);
    /* 0074f6c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f6cc: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f6cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f6d1: je 0x74f71c */ if (fZ) goto L_0074f71c;
L_0074f6d3:; BB(0x0074f6d3);
    /* 0074f6d3: call 0x751ee8 */ r_esp -= 4; W32(r_esp, 0x74f6d8u); f_00751ee8();
    /* 0074f6d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f6db: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f6de: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074f6e5: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074f6eb: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0074f6f2: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0074f6f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f6f7: je 0x74f700 */ if (fZ) goto L_0074f700;
L_0074f6f9:; BB(0x0074f6f9);
    /* 0074f6f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f6fb: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74f700u); f_00760acc();
L_0074f700:; BB(0x0074f700);
    /* 0074f700: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f703: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f706: call 0x751bd4 */ r_esp -= 4; W32(r_esp, 0x74f70bu); f_00751bd4();
    /* 0074f70b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f70e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0074f711: call 0x751c80 */ r_esp -= 4; W32(r_esp, 0x74f716u); f_00751c80();
    /* 0074f716: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f719: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
L_0074f71c:; BB(0x0074f71c);
    /* 0074f71c: mov dword ptr [eax + 0x28], 0xffffffff */ W32((u32)(r_eax+0x28u), 0xffffffffu);
    /* 0074f723: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0074f72a: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 0074f72e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74f733u); f_00737d90();
    /* 0074f733: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f737: call 0x74f8a4 */ r_esp -= 4; W32(r_esp, 0x74f73cu); f_0074f8a4();
    /* 0074f73c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f73f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0074f742: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074f749: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074f74b: je 0x74f770 */ if (fZ) goto L_0074f770;
L_0074f74d:; BB(0x0074f74d);
    /* 0074f74d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f750: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074f753: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074f755: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x74f758u); call_ind(t); }
    /* 0074f758: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f75b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f75e: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 0074f762: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f765: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f76c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f76e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f76f: ret  */ FN_RET(0x0074f663); r_esp += 4; return;
L_0074f770:; BB(0x0074f770);
    /* 0074f770: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f772: je 0x74f77b */ if (fZ) goto L_0074f77b;
L_0074f774:; BB(0x0074f774);
    /* 0074f774: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f777: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_0074f77b:; BB(0x0074f77b);
    /* 0074f77b: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074f77e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f781: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f78e: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f791: ret  */ FN_RET(0x0074f663); r_esp += 4; return;
L_0074f79c:; BB(0x0074f79c);
    /* 0074f79c: mov ecx, eax */ r_ecx = r_eax;
    /* 0074f79e: call 0x74f8c8 */ r_esp -= 4; W32(r_esp, 0x74f7a3u); f_0074f8c8();
    /* 0074f7a3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f7a6: mov dword ptr [edx + 0x20], 0xffffffff */ W32((u32)(r_edx+0x20u), 0xffffffffu);
    /* 0074f7ad: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0074f7b0: jmp 0x74f6c9 */ goto L_0074f6c9;
}

void f_0074f7cc(void) /* sub_74F7CC */
{
    FN_ENTER(0x0074f7cc);
    /* 0074f7cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074f7cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f7ce: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074f7d4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0074f7d6: mov dword ptr [esp + 4], 0x433a0000 */ W32((u32)(r_esp+0x4u), 0x433a0000u);
    /* 0074f7de: mov dword ptr [esp], 0x43600000 */ W32((u32)(r_esp), 0x43600000u);
    /* 0074f7e5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f7e7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74f7ecu); f_0073ec50();
    /* 0074f7ec: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0074f7f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f7f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f7f2: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74f7f7u); f_0073a888();
    /* 0074f7f7: mov ebx, eax */ r_ebx = r_eax;
    /* 0074f7f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f7fc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f7fe: je 0x74f83e */ if (fZ) goto L_0074f83e;
L_0074f800:; BB(0x0074f800);
    /* 0074f800: push 0x173 */ { u32 v = 0x173u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f805: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74f80au); f_0079317c();
    /* 0074f80a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0074f80e: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f812: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f813: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74f818u); f_00857e29();
    /* 0074f818: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f81b: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0074f81f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f821: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f822: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f824: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74f829u); f_0073ae38();
    /* 0074f829: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f82b: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0074f82e: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74f833u); f_007336fc();
    /* 0074f833: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f834: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074f837: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f839: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74f83eu); f_00712624();
L_0074f83e:; BB(0x0074f83e);
    /* 0074f83e: mov eax, ebx */ r_eax = r_ebx;
    /* 0074f840: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074f846: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074f847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f848: ret  */ FN_RET(0x0074f7cc); r_esp += 4; return;
}

void f_0074f84c(void) /* sub_74F84C */
{
    FN_ENTER(0x0074f84c);
    /* 0074f84c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f84d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f84e: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f851: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f852: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x74f857u); f_0073cd8c();
    /* 0074f857: mov ebx, eax */ r_ebx = r_eax;
    /* 0074f859: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f85c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f85e: jne 0x74f865 */ if (!fZ) goto L_0074f865;
L_0074f860:; BB(0x0074f860);
    /* 0074f860: mov eax, ebx */ r_eax = r_ebx;
    /* 0074f862: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f863: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074f864: ret  */ FN_RET(0x0074f84c); r_esp += 4; return;
L_0074f865:; BB(0x0074f865);
    /* 0074f865: push 0x172 */ { u32 v = 0x172u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f86a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74f86fu); f_0079317c();
    /* 0074f86f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0074f873: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f875: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74f87au); f_0073ec50();
    /* 0074f87a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074f87d: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f883: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f885: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0074f889: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f88a: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x74f88fu); f_0073ce70();
    /* 0074f88f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f891: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f893: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x74f898u); f_0073d148();
    /* 0074f898: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f89a: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x74f89fu); f_0073d170();
    /* 0074f89f: jmp 0x74f860 */ goto L_0074f860;
}

void f_0074f8a4(void) /* sub_74F8A4 */
{
    FN_ENTER(0x0074f8a4);
    /* 0074f8a4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074f8a8: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0074f8ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f8ad: je 0x74f8c2 */ if (fZ) goto L_0074f8c2;
L_0074f8af:; BB(0x0074f8af);
    /* 0074f8af: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074f8b2: jne 0x74f8b7 */ if (!fZ) goto L_0074f8b7;
L_0074f8b4:; BB(0x0074f8b4);
    /* 0074f8b4: ret 4 */ FN_RET(0x0074f8a4); r_esp += 8; return;
L_0074f8b7:; BB(0x0074f8b7);
    /* 0074f8b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f8b8: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0074f8bb: mov ecx, edx */ r_ecx = r_edx;
    /* 0074f8bd: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x74f8c2u); f_0072606c();
L_0074f8c2:; BB(0x0074f8c2);
    /* 0074f8c2: ret 4 */ FN_RET(0x0074f8a4); r_esp += 8; return;
}

void f_0074f8c8(void) /* sub_74F8C8 */
{
    FN_ENTER(0x0074f8c8);
    /* 0074f8c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074f8c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0074f8cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074f8cd: push 0x8f2ae4 */ { u32 v = 0x8f2ae4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f8d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074f8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f8d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074f8e0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074f8e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074f8e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0074f8e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0074f8ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0074f8ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0074f8f2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0074f8f9: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f8fe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74f903u); f_005caba4();
    /* 0074f903: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f904: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0074f907: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074f909: je 0x74f970 */ if (fZ) goto L_0074f970;
L_0074f90b:; BB(0x0074f90b);
    /* 0074f90b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0074f912: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074f919: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f91b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74f920u); f_0073ec50();
    /* 0074f920: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f921: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f924: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074f927: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f92a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f92b: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x74f930u); f_00725d18();
    /* 0074f930: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074f933: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0074f93a:; BB(0x0074f93a);
    /* 0074f93a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074f941: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f943: je 0x74f95d */ if (fZ) goto L_0074f95d;
L_0074f945:; BB(0x0074f945);
    /* 0074f945: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074f948: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f94a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074f94d: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74f952u); f_007336fc();
    /* 0074f952: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074f953: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074f956: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f958: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74f95du); f_00712624();
L_0074f95d:; BB(0x0074f95d);
    /* 0074f95d: mov eax, ebx */ r_eax = r_ebx;
    /* 0074f95f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074f962: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074f965: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074f96c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074f96e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074f96f: ret  */ FN_RET(0x0074f8c8); r_esp += 4; return;
L_0074f970:; BB(0x0074f970);
    /* 0074f970: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0074f972: jmp 0x74f93a */ goto L_0074f93a;
}

void f_0074f9a0(void) /* sub_74F9A0 */
{
    FN_ENTER(0x0074f9a0);
    /* 0074f9a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f9a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074f9a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074f9a5: call 0x74f9c4 */ r_esp -= 4; W32(r_esp, 0x74f9aau); f_0074f9c4();
    /* 0074f9aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074f9ae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074f9b0: jne 0x74f9b6 */ if (!fZ) goto L_0074f9b6;
L_0074f9b2:; BB(0x0074f9b2);
    /* 0074f9b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074f9b3: ret 4 */ FN_RET(0x0074f9a0); r_esp += 8; return;
L_0074f9b6:; BB(0x0074f9b6);
    /* 0074f9b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074f9b7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74f9bcu); f_005c2f74();
    /* 0074f9bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074f9bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074f9be: ret 4 */ FN_RET(0x0074f9a0); r_esp += 8; return;
}

void f_0074f9c4(void) /* sub_74F9C4 */
{
    FN_ENTER(0x0074f9c4);
    /* 0074f9c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074f9c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0074f9c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074f9c9: push 0x8f2b00 */ { u32 v = 0x8f2b00u; r_esp -= 4; W32(r_esp, v); }
    /* 0074f9ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074f9d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074f9d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074f9dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074f9df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074f9e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074f9e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074f9e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074f9eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074f9ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074f9f5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074f9f8: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0074f9fb: mov dword ptr [eax], 0xb421b0 */ W32((u32)(r_eax), 0xb421b0u);
    /* 0074fa01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074fa03: je 0x74fa0f */ if (fZ) goto L_0074fa0f;
L_0074fa05:; BB(0x0074fa05);
    /* 0074fa05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fa07: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x74fa0cu); f_00721474();
    /* 0074fa0c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0074fa0f:; BB(0x0074fa0f);
    /* 0074fa0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074fa16: mov ecx, eax */ r_ecx = r_eax;
    /* 0074fa18: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x74fa1du); f_00710c28();
    /* 0074fa1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074fa20: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074fa27: mov esp, ebp */ r_esp = r_ebp;
    /* 0074fa29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074fa2a: ret  */ FN_RET(0x0074f9c4); r_esp += 4; return;
}

void f_0074fa2c(void) /* sub_74FA2C */
{
    FN_ENTER(0x0074fa2c);
    /* 0074fa2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fa2d: mov ebp, esp */ r_ebp = r_esp;
    /* 0074fa2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074fa31: push 0x8f2b28 */ { u32 v = 0x8f2b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fa36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074fa3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fa3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074fa44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074fa47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074fa4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074fa4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074fa50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074fa53: push 0x2608 */ { u32 v = 0x2608u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fa58: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0074fa5f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74fa64u); f_005caba4();
    /* 0074fa64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074fa65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074fa68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074fa6a: je 0x74faa0 */ if (fZ) goto L_0074faa0;
L_0074fa6c:; BB(0x0074fa6c);
    /* 0074fa6c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0074fa73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074fa7a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074fa7d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074fa80: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074fa83: call 0x74faa4 */ r_esp -= 4; W32(r_esp, 0x74fa88u); f_0074faa4();
    /* 0074fa88: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074fa8b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0074fa92:; BB(0x0074fa92);
    /* 0074fa92: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074fa95: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074fa9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074fa9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074fa9f: ret  */ FN_RET(0x0074fa2c); r_esp += 4; return;
L_0074faa0:; BB(0x0074faa0);
    /* 0074faa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074faa2: jmp 0x74fa92 */ goto L_0074fa92;
}

void f_0074faa4(void) /* sub_74FAA4 */
{
    FN_ENTER(0x0074faa4);
    /* 0074faa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074faa5: mov ebp, esp */ r_ebp = r_esp;
    /* 0074faa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074faa9: push 0x8f2b5e */ { u32 v = 0x8f2b5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0074faae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074fab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fab5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074fabc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074fabf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074fac2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0074fac5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0074fac8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0074facb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0074face: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0074fad1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0074fad4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074fad7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0074fada: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0074fadc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74fae1u); f_0073ec50();
    /* 0074fae1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074fae2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074fae5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074fae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fae9: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 0074faec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074faef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074faf0: push 0x9f43d0 */ { u32 v = 0x9f43d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074faf5: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x74fafau); f_00710d30();
    /* 0074fafa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074fb01: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074fb04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074fb07: mov dword ptr [ebx], 0xb421b0 */ W32((u32)(r_ebx), 0xb421b0u);
    /* 0074fb0d: mov edx, 8 */ r_edx = 0x8u;
    /* 0074fb12: mov word ptr [ebx + 0x70], dx */ W16((u32)(r_ebx+0x70u), (u16)r_edx);
    /* 0074fb16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074fb18: mov byte ptr [ebx + 0x72], al */ W8((u32)(r_ebx+0x72u), (u8)r_eax);
    /* 0074fb1b: mov byte ptr [ebx + 0x73], al */ W8((u32)(r_ebx+0x73u), (u8)r_eax);
    /* 0074fb1e: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074fb21: mov esi, dword ptr [0x9f43cc] */ r_esi = R32((u32)(0x9f43ccu));
    /* 0074fb27: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0074fb2a: mov dword ptr [edi + 0x68], 0x3f800000 */ W32((u32)(r_edi+0x68u), 0x3f800000u);
    /* 0074fb31: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 0074fb34: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074fb37: mov dword ptr [edi + 0x6c], 0x3f800000 */ W32((u32)(r_edi+0x6cu), 0x3f800000u);
    /* 0074fb3e: mov word ptr [edi + 0x20], cx */ W16((u32)(r_edi+0x20u), (u16)r_ecx);
    /* 0074fb42: mov word ptr [edi + 0x60], ax */ W16((u32)(r_edi+0x60u), (u16)r_eax);
    /* 0074fb46: mov word ptr [edi + 0x62], ax */ W16((u32)(r_edi+0x62u), (u16)r_eax);
    /* 0074fb4a: add edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074fb4d: mov ecx, 0x2598 */ r_ecx = 0x2598u;
    /* 0074fb52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fb53: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0074fb56: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0074fb58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074fb59: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0074fb5c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0074fb5e: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074fb61: mov ecx, dword ptr [esi + 0x84] */ r_ecx = R32((u32)(r_esi+0x84u));
    /* 0074fb67: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0074fb6e: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074fb71: mov eax, 0x24924925 */ r_eax = 0x24924925u;
    /* 0074fb76: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0074fb78: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074fb7a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0074fb7c: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0074fb7e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074fb80: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0074fb83: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0074fb86: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x74fb8bu); f_008581c5();
    /* 0074fb8b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0074fb8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074fb91: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0074fb94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074fb96: je 0x74fbf6 */ if (fZ) goto L_0074fbf6;
L_0074fb98:; BB(0x0074fb98);
    /* 0074fb98: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0074fb9f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0074fba6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074fba9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074fbac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074fbaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fbb0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074fbb3: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 0074fbb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fbb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fbb9: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x74fbbeu); f_0073e5d4();
    /* 0074fbbe: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0074fbc5:; BB(0x0074fbc5);
    /* 0074fbc5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074fbc8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074fbcb: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0074fbce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074fbd5: call 0x750070 */ r_esp -= 4; W32(r_esp, 0x74fbdau); f_00750070();
    /* 0074fbda: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074fbdd: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074fbe0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074fbe3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074fbe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074fbe9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074fbf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0074fbf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074fbf3: ret 8 */ FN_RET(0x0074faa4); r_esp += 12; return;
L_0074fbf6:; BB(0x0074fbf6);
    /* 0074fbf6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074fbf8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0074fbfb: jmp 0x74fbc5 */ goto L_0074fbc5;
}

void f_0074fc00(void) /* sub_74FC00 */
{
    FN_ENTER(0x0074fc00);
    /* 0074fc00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074fc01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fc02: mov esi, ecx */ r_esi = r_ecx;
    /* 0074fc04: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0074fc07: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074fc09: jne 0x74fc12 */ if (!fZ) goto L_0074fc12;
L_0074fc0b:; BB(0x0074fc0b);
    /* 0074fc0b: mov dword ptr [esi + 0x5c], 0x1000000 */ W32((u32)(r_esi+0x5cu), 0x1000000u);
L_0074fc12:; BB(0x0074fc12);
    /* 0074fc12: mov ebp, dword ptr [esi + 0x64] */ r_ebp = R32((u32)(r_esi+0x64u));
    /* 0074fc15: movsx ebp, byte ptr [ebp] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ebp));
    /* 0074fc19: lea eax, [esi + 0x68] */ r_eax = (u32)(r_esi+0x68u);
    /* 0074fc1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fc1d: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fc1f: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x74fc24u); f_00712658();
    /* 0074fc24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fc25: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0074fc28: call 0x73e60c */ r_esp -= 4; W32(r_esp, 0x74fc2du); f_0073e60c();
    /* 0074fc2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074fc2f: jne 0x74fc36 */ if (!fZ) goto L_0074fc36;
L_0074fc31:; BB(0x0074fc31);
    /* 0074fc31: lea ebp, [esi + 0x24] */ r_ebp = (u32)(r_esi+0x24u);
    /* 0074fc34: jmp 0x74fc61 */ goto L_0074fc61;
L_0074fc36:; BB(0x0074fc36);
    /* 0074fc36: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 0074fc39: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0074fc3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074fc3e: je 0x74fc49 */ if (fZ) goto L_0074fc49;
L_0074fc40:; BB(0x0074fc40);
    /* 0074fc40: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074fc42: je 0x74fc49 */ if (fZ) goto L_0074fc49;
L_0074fc44:; BB(0x0074fc44);
    /* 0074fc44: lea ebp, [esi + 0x24] */ r_ebp = (u32)(r_esi+0x24u);
    /* 0074fc47: jmp 0x74fc5a */ goto L_0074fc5a;
L_0074fc49:; BB(0x0074fc49);
    /* 0074fc49: lea ebp, [esi + 0x24] */ r_ebp = (u32)(r_esi+0x24u);
    /* 0074fc4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fc4d: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x74fc52u); f_0072a590();
    /* 0074fc52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074fc53: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fc55: call 0x750070 */ r_esp -= 4; W32(r_esp, 0x74fc5au); f_00750070();
L_0074fc5a:; BB(0x0074fc5a);
    /* 0074fc5a: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fc5c: call 0x74fc74 */ r_esp -= 4; W32(r_esp, 0x74fc61u); f_0074fc74();
L_0074fc61:; BB(0x0074fc61);
    /* 0074fc61: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fc63: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x74fc68u); f_00710db4();
    /* 0074fc68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fc69: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fc6b: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x74fc70u); f_0072a5ec();
    /* 0074fc70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074fc71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074fc72: ret  */ FN_RET(0x0074fc00); r_esp += 4; return;
}

void f_0074fc74(void) /* sub_74FC74 */
{
    FN_ENTER(0x0074fc74);
    /* 0074fc74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fc75: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074fc7b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074fc7d: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074fc80: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0074fc83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074fc85: je 0x74fd75 */ if (fZ) goto L_0074fd75;
L_0074fc8b:; BB(0x0074fc8b);
    /* 0074fc8b: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 0074fc8e: fcomp dword ptr [0x973be8] */ fx_compare(ST(0), R_F32((u32)(0x973be8u))); FPOP();
    /* 0074fc94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074fc96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074fc97: jbe 0x74fca0 */ if ((fC||fZ)) goto L_0074fca0;
L_0074fc99:; BB(0x0074fc99);
    /* 0074fc99: mov dword ptr [ebx + 0x5c], 7 */ W32((u32)(r_ebx+0x5cu), 0x7u);
L_0074fca0:; BB(0x0074fca0);
    /* 0074fca0: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074fca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fca5: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0074fca8: push 0x9f4220 */ { u32 v = 0x9f4220u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fcad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fcae: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x74fcb3u); f_0072a68c();
    /* 0074fcb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074fcb6: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0074fcba: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074fcbe: mov edi, ebx */ r_edi = r_ebx;
    /* 0074fcc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074fcc2: mov esi, eax */ r_esi = r_eax;
    /* 0074fcc4: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_0074fcc7:; BB(0x0074fcc7);
    /* 0074fcc7: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0074fcca: movsx ebp, byte ptr [edx] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0074fccd: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0074fcd1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074fcd3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074fcd5: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0074fcd7: lea edx, [edx + esi - 7] */ r_edx = (u32)(r_edx+r_esi+0xfffffff9u);
    /* 0074fcdb: cmp edx, dword ptr [edi + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x84u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074fce1: jae 0x74fd6a */ if (!fC) goto L_0074fd6a;
L_0074fce7:; BB(0x0074fce7);
    /* 0074fce7: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0074fceb: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 0074fcee: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fcf0: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fcf2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fcf4: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0074fcf8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074fcfa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074fcfc: lea edx, [edi + edx + 0x94] */ r_edx = (u32)(r_edi+r_edx+0x94u);
    /* 0074fd03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd04: push dword ptr [edx - 0xc] */ { u32 v = R32((u32)(r_edx+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074fd07: push 0x973b6c */ { u32 v = 0x973b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd0d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74fd12u); f_00857e29();
    /* 0074fd12: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074fd15: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0074fd19: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd1f: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0074fd22: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0074fd25: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0074fd28: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x74fd2du); f_0072db60();
    /* 0074fd2d: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 0074fd31: push dword ptr [edi + ebp*8 + 0xb4] */ { u32 v = R32((u32)(r_edi+r_ebp*8+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074fd38: push 0x973c1c */ { u32 v = 0x973c1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd3e: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74fd43u); f_00857e29();
    /* 0074fd43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074fd46: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 0074fd4a: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd50: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 0074fd53: mov ecx, dword ptr [ebp + ebx*2 + 0x1c] */ r_ecx = R32((u32)(r_ebp+r_ebx*2+0x1cu));
    /* 0074fd57: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x74fd5cu); f_0072db60();
    /* 0074fd5c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074fd5f: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074fd62: jl 0x74fcc7 */ if ((fS!=fO)) goto L_0074fcc7;
L_0074fd68:; BB(0x0074fd68);
    /* 0074fd68: jmp 0x74fd7d */ goto L_0074fd7d;
L_0074fd6a:; BB(0x0074fd6a);
    /* 0074fd6a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074fd6e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074fd72: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074fd75:; BB(0x0074fd75);
    /* 0074fd75: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074fd7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074fd7c: ret  */ FN_RET(0x0074fc74); r_esp += 4; return;
L_0074fd7d:; BB(0x0074fd7d);
    /* 0074fd7d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0074fd81: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074fd85: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0074fd88: jmp 0x74fd75 */ goto L_0074fd75;
}

void f_0074fd8c(void) /* sub_74FD8C */
{
    FN_ENTER(0x0074fd8c);
    /* 0074fd8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd8e: mov esi, ecx */ r_esi = r_ecx;
    /* 0074fd90: lea eax, [esi + 0x68] */ r_eax = (u32)(r_esi+0x68u);
    /* 0074fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd94: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fd96: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x74fd9bu); f_00712658();
    /* 0074fd9b: mov ebp, eax */ r_ebp = r_eax;
    /* 0074fd9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fd9e: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fda0: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x74fda5u); f_00710f80();
    /* 0074fda5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fda6: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0074fda9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fdaa: mov ecx, esi */ r_ecx = r_esi;
    /* 0074fdac: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74fdb1u); f_0072a648();
    /* 0074fdb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fdb2: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0074fdb5: call 0x73e6b4 */ r_esp -= 4; W32(r_esp, 0x74fdbau); f_0073e6b4();
    /* 0074fdba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074fdbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074fdbc: ret  */ FN_RET(0x0074fd8c); r_esp += 4; return;
}

void f_0074fdc0(void) /* sub_74FDC0 */
{
    FN_ENTER(0x0074fdc0);
    /* 0074fdc0: mov dword ptr [0xa9abec], 0x3f800000 */ W32((u32)(0xa9abecu), 0x3f800000u);
    /* 0074fdca: mov dword ptr [0xa9abf0], 0x41000000 */ W32((u32)(0xa9abf0u), 0x41000000u);
    /* 0074fdd4: mov dword ptr [0xa9abf4], 0x3fc00000 */ W32((u32)(0xa9abf4u), 0x3fc00000u);
    /* 0074fdde: ret  */ FN_RET(0x0074fdc0); r_esp += 4; return;
}

void f_0074fde0(void) /* sub_74FDE0 */
{
    FN_ENTER(0x0074fde0);
    /* 0074fde0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074fde1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074fde2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fde3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fde4: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074fdea: mov edi, ecx */ r_edi = r_ecx;
    /* 0074fdec: fild dword ptr [edi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x5cu)));
    /* 0074fdef: fcomp dword ptr [0x973bd8] */ fx_compare(ST(0), R_F32((u32)(0x973bd8u))); FPOP();
    /* 0074fdf5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074fdf7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074fdf8: jbe 0x74fe01 */ if ((fC||fZ)) goto L_0074fe01;
L_0074fdfa:; BB(0x0074fdfa);
    /* 0074fdfa: mov dword ptr [edi + 0x5c], 7 */ W32((u32)(r_edi+0x5cu), 0x7u);
L_0074fe01:; BB(0x0074fe01);
    /* 0074fe01: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0074fe05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe06: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0074fe09: push 0x9f4220 */ { u32 v = 0x9f4220u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe0f: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x74fe14u); f_0072a68c();
    /* 0074fe14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074fe17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074fe19: mov esi, edi */ r_esi = r_edi;
    /* 0074fe1b: mov edi, eax */ r_edi = r_eax;
L_0074fe1d:; BB(0x0074fe1d);
    /* 0074fe1d: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 0074fe20: movsx ebx, byte ptr [edx] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0074fe23: lea ebp, [ebx + ebx] */ r_ebp = (u32)(r_ebx+r_ebx);
    /* 0074fe26: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fe28: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fe2a: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fe2c: lea edx, [ebp + edi - 7] */ r_edx = (u32)(r_ebp+r_edi+0xfffffff9u);
    /* 0074fe30: cmp edx, dword ptr [esi + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x84u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074fe36: jae 0x74febb */ if (!fC) goto L_0074febb;
L_0074fe3c:; BB(0x0074fe3c);
    /* 0074fe3c: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 0074fe3f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fe41: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fe43: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074fe45: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0074fe49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074fe4b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074fe4d: lea ebx, [esi + edx + 0x94] */ r_ebx = (u32)(r_esi+r_edx+0x94u);
    /* 0074fe54: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074fe57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe58: push dword ptr [ebx - 0xc] */ { u32 v = R32((u32)(r_ebx+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074fe5b: push 0x973b6c */ { u32 v = 0x973b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe61: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74fe66u); f_00857e29();
    /* 0074fe66: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074fe69: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074fe6c: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe72: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0074fe75: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 0074fe78: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0074fe7b: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x74fe80u); f_0072db60();
    /* 0074fe80: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 0074fe84: push dword ptr [esi + ebp*8 + 0xb4] */ { u32 v = R32((u32)(r_esi+r_ebp*8+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074fe8b: push 0x973c1c */ { u32 v = 0x973c1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fe91: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74fe96u); f_00857e29();
    /* 0074fe96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074fe99: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 0074fe9d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fea2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fea3: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 0074fea6: mov ecx, dword ptr [ebp + ebx*2 + 0x1c] */ r_ecx = R32((u32)(r_ebp+r_ebx*2+0x1cu));
    /* 0074feaa: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x74feafu); f_0072db60();
    /* 0074feaf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074feb2: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074feb5: jl 0x74fe1d */ if ((fS!=fO)) goto L_0074fe1d;
L_0074febb:; BB(0x0074febb);
    /* 0074febb: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074fec1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074fec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074fec3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074fec4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074fec5: ret  */ FN_RET(0x0074fde0); r_esp += 4; return;
}

void f_0074fec8(void) /* sub_74FEC8 */
{
    FN_ENTER(0x0074fec8);
    /* 0074fec8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074fec9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074feca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074fecb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fecc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074fecf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074fed1: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 0074fed4: fcomp dword ptr [0x973bd4] */ fx_compare(ST(0), R_F32((u32)(0x973bd4u))); FPOP();
    /* 0074feda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0074fedc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0074fedd: jbe 0x74fee6 */ if ((fC||fZ)) goto L_0074fee6;
L_0074fedf:; BB(0x0074fedf);
    /* 0074fedf: mov dword ptr [ebx + 0x5c], 7 */ W32((u32)(r_ebx+0x5cu), 0x7u);
L_0074fee6:; BB(0x0074fee6);
    /* 0074fee6: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074feea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074feeb: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0074feee: push 0x9f40a0 */ { u32 v = 0x9f40a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fef3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074fef4: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x74fef9u); f_0072a68c();
    /* 0074fef9: push 0x174 */ { u32 v = 0x174u; r_esp -= 4; W32(r_esp, v); }
    /* 0074fefe: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ff01: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0074ff03: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ff08u); f_0079317c();
    /* 0074ff08: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ff0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ff0e: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x74ff13u); f_0072db50();
    /* 0074ff13: push 0x175 */ { u32 v = 0x175u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff18: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ff1b: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0074ff1e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ff23u); f_0079317c();
    /* 0074ff23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ff24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ff27: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x74ff2cu); f_0072db50();
    /* 0074ff2c: push 0x176 */ { u32 v = 0x176u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff31: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ff34: mov ebp, dword ptr [eax + 0x10] */ r_ebp = R32((u32)(r_eax+0x10u));
    /* 0074ff37: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ff3cu); f_0079317c();
    /* 0074ff3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ff3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff3e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ff40: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x74ff45u); f_0072db50();
    /* 0074ff45: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff4a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ff4d: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 0074ff50: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ff55u); f_0079317c();
    /* 0074ff55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ff56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ff59: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x74ff5eu); f_0072db50();
    /* 0074ff5e: push 0x179 */ { u32 v = 0x179u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff63: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ff66: mov ebp, dword ptr [eax + 0x28] */ r_ebp = R32((u32)(r_eax+0x28u));
    /* 0074ff69: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ff6eu); f_0079317c();
    /* 0074ff6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ff6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0074ff72: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x74ff77u); f_0072db50();
    /* 0074ff77: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ff7a: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0074ff7d: mov edx, dword ptr [ebx + 0x78] */ r_edx = R32((u32)(r_ebx+0x78u));
    /* 0074ff80: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 0074ff83: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 0074ff86: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0074ff89: mov edi, dword ptr [ebx + 0x80] */ r_edi = R32((u32)(r_ebx+0x80u));
    /* 0074ff8f: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 0074ff92: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074ff96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ff97: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74ff9cu); f_0068d5a8();
    /* 0074ff9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ff9d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0074ff9f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0074ffa2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0074ffa4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0074ffa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ffa8: je 0x750057 */ if (fZ) goto L_00750057;
L_0074ffae:; BB(0x0074ffae);
    /* 0074ffae: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 0074ffb4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0074ffb6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0074ffb8: jbe 0x74fff9 */ if ((fC||fZ)) goto L_0074fff9;
L_0074ffba:; BB(0x0074ffba);
    /* 0074ffba: mov edi, dword ptr [eax + 0xeb4] */ r_edi = R32((u32)(r_eax+0xeb4u));
    /* 0074ffc0: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0074ffc4: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0074ffc7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ffc9: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0074ffcb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ffcd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ffcf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ffd1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ffd3: lea eax, [ebx + eax + 0xb4] */ r_eax = (u32)(r_ebx+r_eax+0xb4u);
L_0074ffda:; BB(0x0074ffda);
    /* 0074ffda: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0074ffdc: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ffde: je 0x74ffe2 */ if (fZ) goto L_0074ffe2;
L_0074ffe0:; BB(0x0074ffe0);
    /* 0074ffe0: mov ebp, ecx */ r_ebp = r_ecx;
L_0074ffe2:; BB(0x0074ffe2);
    /* 0074ffe2: cmp edi, dword ptr [eax - 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ffe5: mov esi, ebx */ r_esi = r_ebx;
    /* 0074ffe7: je 0x75005f */ if (fZ) goto L_0075005f;
L_0074ffe9:; BB(0x0074ffe9);
    /* 0074ffe9: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ffec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074ffef: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0074fff1: jb 0x74ffda */ if (fC) goto L_0074ffda;
L_0074fff3:; BB(0x0074fff3);
    /* 0074fff3: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0074fff7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0074fff9:; BB(0x0074fff9);
    /* 0074fff9: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0074fffc: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0074ffff: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 00750002: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00750005: mov esi, dword ptr [ebx + 0x28] */ r_esi = R32((u32)(r_ebx+0x28u));
    /* 00750008: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0075000b: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 0075000e: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00750011: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00750014: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750017: je 0x750057 */ if (fZ) goto L_00750057;
L_00750019:; BB(0x00750019);
    /* 00750019: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075001c: je 0x75004b */ if (fZ) goto L_0075004b;
L_0075001e:; BB(0x0075001e);
    /* 0075001e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00750021: jne 0x750037 */ if (!fZ) goto L_00750037;
L_00750023:; BB(0x00750023);
    /* 00750023: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00750025: push 0x973c0c */ { u32 v = 0x973c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075002a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75002fu); f_0072db60();
    /* 0075002f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750032: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750034: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750035: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00750036: ret  */ FN_RET(0x0074fec8); r_esp += 4; return;
L_00750037:; BB(0x00750037);
    /* 00750037: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00750039: push 0x973c14 */ { u32 v = 0x973c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0075003e: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x750043u); f_0072db60();
    /* 00750043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00750046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00750047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00750048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00750049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075004a: ret  */ FN_RET(0x0074fec8); r_esp += 4; return;
L_0075004b:; BB(0x0075004b);
    /* 0075004b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0075004d: push 0x973c04 */ { u32 v = 0x973c04u; r_esp -= 4; W32(r_esp, v); }
    /* 00750052: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x750057u); f_0072db60();
L_00750057:; BB(0x00750057);
    /* 00750057: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075005a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075005b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075005c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075005d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075005e: ret  */ FN_RET(0x0074fec8); r_esp += 4; return;
L_0075005f:; BB(0x0075005f);
    /* 0075005f: mov eax, ebx */ r_eax = r_ebx;
    /* 00750061: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00750065: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00750068: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
    /* 0075006b: jmp 0x74fff9 */ goto L_0074fff9;
}

