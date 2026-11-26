#include "protos.h"

void f_006650c8(void)
{
    FN_ENTER(0x006650c8);
    /* 006650c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006650c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006650cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006650cd: push 0x8e8514 */ { u32 v = 0x8e8514u; r_esp -= 4; W32(r_esp, v); }
    /* 006650d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006650d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006650d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006650e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006650e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006650e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006650e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006650ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006650ef: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006650f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006650fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x665100u); f_005caba4();
    /* 00665100: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00665101: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00665104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665106: je 0x66513f */ if (fZ) goto L_0066513f;
L_00665108:; BB(0x00665108);
    /* 00665108: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066510f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665116: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665119: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066511f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00665122: call 0x665144 */ r_esp -= 4; W32(r_esp, 0x665127u); f_00665144();
    /* 00665127: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066512a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00665131:; BB(0x00665131);
    /* 00665131: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665134: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066513b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066513d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066513e: ret  */ FN_RET(0x006650c8); r_esp += 4; return;
L_0066513f:; BB(0x0066513f);
    /* 0066513f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00665141: jmp 0x665131 */ goto L_00665131;
}

void f_00665144(void) /* sub_665144 */
{
    FN_ENTER(0x00665144);
    /* 00665144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665145: mov ebp, esp */ r_ebp = r_esp;
    /* 00665147: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00665149: push 0x8e8530 */ { u32 v = 0x8e8530u; r_esp -= 4; W32(r_esp, v); }
    /* 0066514e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00665154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665155: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066515c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066515f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00665162: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00665165: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00665168: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066516b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066516e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665171: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00665174: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00665177: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x66517cu); f_007ba278();
    /* 0066517c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665183: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00665186: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00665189: mov dword ptr [ecx], 0xb345d8 */ W32((u32)(r_ecx), 0xb345d8u);
    /* 0066518f: mov eax, dword ptr [0x9c8fe0] */ r_eax = R32((u32)(0x9c8fe0u));
    /* 00665194: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665195: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00665198: call dword ptr [0xb345ec] */ { u32 t = R32((u32)(0xb345ecu)); r_esp -= 4; W32(r_esp, 0x66519eu); call_ind(t); }
    /* 0066519e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006651a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006651a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006651ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006651ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006651ae: ret 8 */ FN_RET(0x00665144); r_esp += 12; return;
}

void f_006651b4(void) /* sub_6651B4 */
{
    FN_ENTER(0x006651b4);
    /* 006651b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006651b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006651b6: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006651b9: call 0x807e10 */ r_esp -= 4; W32(r_esp, 0x6651beu); f_00807e10();
    /* 006651be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006651c0: jne 0x6651c8 */ if (!fZ) goto L_006651c8;
L_006651c2:; BB(0x006651c2);
    /* 006651c2: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006651c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006651c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006651c7: ret  */ FN_RET(0x006651b4); r_esp += 4; return;
L_006651c8:; BB(0x006651c8);
    /* 006651c8: mov eax, dword ptr [0xa8fb3c] */ r_eax = R32((u32)(0xa8fb3cu));
    /* 006651cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006651cf: je 0x6651dc */ if (fZ) goto L_006651dc;
L_006651d1:; BB(0x006651d1);
    /* 006651d1: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006651d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006651d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006651d6: ret  */ FN_RET(0x006651b4); r_esp += 4; return;
L_006651d7:; BB(0x006651d7);
    /* 006651d7: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x6651dcu); f_005b9204();
L_006651dc:; BB(0x006651dc);
    /* 006651dc: push dword ptr [0x9c8fe4] */ { u32 v = R32((u32)(0x9c8fe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006651e2: call 0x8288e0 */ r_esp -= 4; W32(r_esp, 0x6651e7u); f_008288e0();
    /* 006651e7: mov ebp, eax */ r_ebp = r_eax;
    /* 006651e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006651ec: cmp ebp, -2 */ {  u32 a = r_ebp; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006651ef: je 0x6651d7 */ if (fZ) goto L_006651d7;
L_006651f1:; BB(0x006651f1);
    /* 006651f1: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006651f4: je 0x665295 */ if (fZ) goto L_00665295;
L_006651fa:; BB(0x006651fa);
    /* 006651fa: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006651fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006651ff: push dword ptr [0x9c8fe4] */ { u32 v = R32((u32)(0x9c8fe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665205: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665206: call 0x82c2d8 */ r_esp -= 4; W32(r_esp, 0x66520bu); f_0082c2d8();
    /* 0066520b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066520e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665211: je 0x6651fa */ if (fZ) goto L_006651fa;
L_00665213:; BB(0x00665213);
    /* 00665213: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665215: je 0x66521d */ if (fZ) goto L_0066521d;
L_00665217:; BB(0x00665217);
    /* 00665217: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066521a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066521b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066521c: ret  */ FN_RET(0x006651b4); r_esp += 4; return;
L_0066521d:; BB(0x0066521d);
    /* 0066521d: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 00665222: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00665225: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665226: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x66522bu); f_0082e940();
    /* 0066522b: mov esi, eax */ r_esi = r_eax;
    /* 0066522d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665230: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665232: je 0x6652a2 */ if (fZ) goto L_006652a2;
L_00665234:; BB(0x00665234);
    /* 00665234: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 00665239: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0066523c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066523d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066523f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665240: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x665245u); f_0086b688();
    /* 00665245: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665246: push dword ptr [0x9c8fe4] */ { u32 v = R32((u32)(0x9c8fe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066524c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066524d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x665252u); f_006dc358();
    /* 00665252: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665253: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x665258u); f_006dc358();
    /* 00665258: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066525b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066525d: je 0x66526f */ if (fZ) goto L_0066526f;
L_0066525f:; BB(0x0066525f);
    /* 0066525f: call 0x5b9204 */ r_esp -= 4; W32(r_esp, 0x665264u); f_005b9204();
    /* 00665264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665265: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66526au); f_006dc358();
    /* 0066526a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066526b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066526d: jne 0x66525f */ if (!fZ) goto L_0066525f;
L_0066526f:; BB(0x0066526f);
    /* 0066526f: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00665273: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665274: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665275: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x66527au); f_0082c21c();
    /* 0066527a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066527d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066527f: jne 0x66529b */ if (!fZ) goto L_0066529b;
L_00665281:; BB(0x00665281);
    /* 00665281: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00665285: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 00665289: call 0x6652b0 */ r_esp -= 4; W32(r_esp, 0x66528eu); f_006652b0();
    /* 0066528e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066528f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x665294u); f_0082e960();
    /* 00665294: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00665295:; BB(0x00665295);
    /* 00665295: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665299: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066529a: ret  */ FN_RET(0x006651b4); r_esp += 4; return;
L_0066529b:; BB(0x0066529b);
    /* 0066529b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066529c: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6652a1u); f_0082e960();
    /* 006652a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006652a2:; BB(0x006652a2);
    /* 006652a2: add esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006652a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006652a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006652a7: ret  */ FN_RET(0x006651b4); r_esp += 4; return;
}

void f_006652a8(void) /* sub_6652A8 */
{
    FN_ENTER(0x006652a8);
    /* 006652a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006652ac: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006652b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006652b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006652b2: mov edi, edx */ r_edi = r_edx;
    /* 006652b4: mov ebx, eax */ r_ebx = r_eax;
    /* 006652b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006652b7: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6652bcu); f_0082e940();
    /* 006652bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006652bd: mov dword ptr [0xa8fb3c], eax */ W32((u32)(0xa8fb3cu), r_eax);
    /* 006652c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006652c4: je 0x66531b */ if (fZ) goto L_0066531b;
L_006652c6:; BB(0x006652c6);
    /* 006652c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006652c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006652c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652c9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6652ceu); f_0086b6b8();
    /* 006652ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006652d1: mov edx, dword ptr [0xa8fb3c] */ r_edx = R32((u32)(0xa8fb3cu));
    /* 006652d7: mov dword ptr [0xa8fb6c], 0xa8fb74 */ W32((u32)(0xa8fb6cu), 0xa8fb74u);
    /* 006652e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006652e3: mov ecx, 0xa8fb40 */ r_ecx = 0xa8fb40u;
    /* 006652e8: mov dword ptr [0xa8fb70], 1 */ W32((u32)(0xa8fb70u), 0x1u);
    /* 006652f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652f5: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x6652fau); f_0082a9dc();
    /* 006652fa: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006652ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665301: mov ecx, 0xa8fb74 */ r_ecx = 0xa8fb74u;
    /* 00665306: mov edx, 0xa8fb40 */ r_edx = 0xa8fb40u;
    /* 0066530b: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x665310u); f_0082aa0c();
    /* 00665310: push 0xa8fb6c */ { u32 v = 0xa8fb6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00665315: call 0x81a7a8 */ r_esp -= 4; W32(r_esp, 0x66531au); f_0081a7a8();
    /* 0066531a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0066531b:; BB(0x0066531b);
    /* 0066531b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066531c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066531d: ret  */ FN_RET(0x006652a8); r_esp += 4; return;
}

void f_006652b0(void) /* sub_6652B0 */
{
    FN_ENTER(0x006652b0);
    /* 006652b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006652b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006652b2: mov edi, edx */ r_edi = r_edx;
    /* 006652b4: mov ebx, eax */ r_ebx = r_eax;
    /* 006652b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006652b7: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6652bcu); f_0082e940();
    /* 006652bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006652bd: mov dword ptr [0xa8fb3c], eax */ W32((u32)(0xa8fb3cu), r_eax);
    /* 006652c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006652c4: je 0x66531b */ if (fZ) goto L_0066531b;
L_006652c6:; BB(0x006652c6);
    /* 006652c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006652c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006652c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652c9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6652ceu); f_0086b6b8();
    /* 006652ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006652d1: mov edx, dword ptr [0xa8fb3c] */ r_edx = R32((u32)(0xa8fb3cu));
    /* 006652d7: mov dword ptr [0xa8fb6c], 0xa8fb74 */ W32((u32)(0xa8fb6cu), 0xa8fb74u);
    /* 006652e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006652e3: mov ecx, 0xa8fb40 */ r_ecx = 0xa8fb40u;
    /* 006652e8: mov dword ptr [0xa8fb70], 1 */ W32((u32)(0xa8fb70u), 0x1u);
    /* 006652f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006652f5: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x6652fau); f_0082a9dc();
    /* 006652fa: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006652ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00665301: mov ecx, 0xa8fb74 */ r_ecx = 0xa8fb74u;
    /* 00665306: mov edx, 0xa8fb40 */ r_edx = 0xa8fb40u;
    /* 0066530b: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x665310u); f_0082aa0c();
    /* 00665310: push 0xa8fb6c */ { u32 v = 0xa8fb6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00665315: call 0x81a7a8 */ r_esp -= 4; W32(r_esp, 0x66531au); f_0081a7a8();
    /* 0066531a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0066531b:; BB(0x0066531b);
    /* 0066531b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066531c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066531d: ret  */ FN_RET(0x006652b0); r_esp += 4; return;
}

void f_00665320(void) /* sub_665320 */
{
    FN_ENTER(0x00665320);
    /* 00665320: mov eax, dword ptr [0xa8fb3c] */ r_eax = R32((u32)(0xa8fb3cu));
    /* 00665325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00665327: je 0x665350 */ if (fZ) goto L_00665350;
L_00665329:; BB(0x00665329);
    /* 00665329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066532a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x66532fu); f_0082e960();
    /* 0066532f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00665330: mov eax, dword ptr [0xa8fb6c] */ r_eax = R32((u32)(0xa8fb6cu));
    /* 00665335: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00665338: mov dword ptr [0xa8fb3c], 0 */ W32((u32)(0xa8fb3cu), 0x0u);
    /* 00665342: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00665344: je 0x665350 */ if (fZ) goto L_00665350;
L_00665346:; BB(0x00665346);
    /* 00665346: mov ecx, 0xa8fb6c */ r_ecx = 0xa8fb6cu;
    /* 0066534b: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x665350u); f_00829de0();
L_00665350:; BB(0x00665350);
    /* 00665350: ret  */ FN_RET(0x00665320); r_esp += 4; return;
}

void f_00665354(void) /* sub_665354 */
{
    FN_ENTER(0x00665354);
    /* 00665354: mov dword ptr [0xa8fb3c], 0 */ W32((u32)(0xa8fb3cu), 0x0u);
    /* 0066535e: ret  */ FN_RET(0x00665354); r_esp += 4; return;
}

void f_00665360(void) /* sub_665360 */
{
    FN_ENTER(0x00665360);
    /* 00665360: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665361: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00665363: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00665365: call 0x665384 */ r_esp -= 4; W32(r_esp, 0x66536au); f_00665384();
    /* 0066536a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066536e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00665370: jne 0x665376 */ if (!fZ) goto L_00665376;
L_00665372:; BB(0x00665372);
    /* 00665372: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00665373: ret 4 */ FN_RET(0x00665360); r_esp += 8; return;
L_00665376:; BB(0x00665376);
    /* 00665376: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665377: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66537cu); f_005c2f74();
    /* 0066537c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066537d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066537e: ret 4 */ FN_RET(0x00665360); r_esp += 8; return;
}

void f_00665384(void) /* sub_665384 */
{
    FN_ENTER(0x00665384);
    /* 00665384: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665385: mov ebp, esp */ r_ebp = r_esp;
    /* 00665387: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00665389: push 0x8e854c */ { u32 v = 0x8e854cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066538e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00665394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665395: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066539c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066539f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006653a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006653a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006653a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006653ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006653ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006653b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006653b8: mov dword ptr [eax], 0xb347e0 */ W32((u32)(r_eax), 0xb347e0u);
    /* 006653be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006653bf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6653c4u); f_007b4e84();
    /* 006653c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006653c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006653c8: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x6653cdu); f_007b9de0();
    /* 006653cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006653d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006653d7: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6653dcu); f_00770660();
    /* 006653dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006653df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006653e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006653e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006653e9: ret  */ FN_RET(0x00665384); r_esp += 4; return;
}

void f_006653ec(void) /* sub_6653EC */
{
    FN_ENTER(0x006653ec);
    /* 006653ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006653ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006653ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006653f1: call 0x665410 */ r_esp -= 4; W32(r_esp, 0x6653f6u); f_00665410();
    /* 006653f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006653fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006653fc: jne 0x665402 */ if (!fZ) goto L_00665402;
L_006653fe:; BB(0x006653fe);
    /* 006653fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006653ff: ret 4 */ FN_RET(0x006653ec); r_esp += 8; return;
L_00665402:; BB(0x00665402);
    /* 00665402: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665403: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x665408u); f_005c2f74();
    /* 00665408: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00665409: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066540a: ret 4 */ FN_RET(0x006653ec); r_esp += 8; return;
}

void f_00665410(void) /* sub_665410 */
{
    FN_ENTER(0x00665410);
    /* 00665410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665411: mov ebp, esp */ r_ebp = r_esp;
    /* 00665413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00665415: push 0x8e8568 */ { u32 v = 0x8e8568u; r_esp -= 4; W32(r_esp, v); }
    /* 0066541a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00665420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665421: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00665428: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066542b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066542e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00665431: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00665434: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00665437: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066543a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00665441: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00665444: mov dword ptr [eax], 0xb347c8 */ W32((u32)(r_eax), 0xb347c8u);
    /* 0066544a: call 0x717e04 */ r_esp -= 4; W32(r_esp, 0x66544fu); f_00717e04();
    /* 0066544f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00665456: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00665459: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x66545eu); f_008171e8();
    /* 0066545e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00665461: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00665468: mov esp, ebp */ r_esp = r_ebp;
    /* 0066546a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066546b: ret  */ FN_RET(0x00665410); r_esp += 4; return;
}

void f_0066546c(void) /* sub_66546C */
{
    FN_ENTER(0x0066546c);
    /* 0066546c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066546d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066546e: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665471: mov esi, ecx */ r_esi = r_ecx;
    /* 00665473: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00665475: call 0x77b950 */ r_esp -= 4; W32(r_esp, 0x66547au); f_0077b950();
    /* 0066547a: mov ecx, eax */ r_ecx = r_eax;
    /* 0066547c: mov eax, 0x1948b0fd */ r_eax = 0x1948b0fdu;
    /* 00665481: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00665483: mov eax, ecx */ r_eax = r_ecx;
    /* 00665485: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00665488: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0066548b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066548d: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00665490: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665492: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665494: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665496: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665498: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066549a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066549c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066549e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006654a0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006654a2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006654a4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006654a6: movsx edx, word ptr [0xa8fbb4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fbb4u));
    /* 006654ad: mov dword ptr [esi + 0x358], ecx */ W32((u32)(r_esi+0x358u), r_ecx);
    /* 006654b3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006654b5: jl 0x66551d */ if ((fS!=fO)) goto L_0066551d;
L_006654b7:; BB(0x006654b7);
    /* 006654b7: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006654ba: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006654bd: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006654c0: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006654c4: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 006654c8: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 006654cc: fadd dword ptr [0xa8fbbc] */ ST(0) = ST(0) + R_F32((u32)(0xa8fbbcu));
    /* 006654d2: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 006654d6: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 006654da: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 006654de: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006654e0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006654e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006654e3: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6654e8u); f_0050b7a4();
    /* 006654e8: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 006654ec: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006654ee: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006654f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006654f1: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6654f6u); f_0050b7a4();
    /* 006654f6: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 006654f8: push 0x939780 */ { u32 v = 0x939780u; r_esp -= 4; W32(r_esp, v); }
    /* 006654fd: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00665501: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665502: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x665507u); f_007184f8();
    /* 00665507: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0066550b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665510: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00665514: add esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066551a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066551b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066551c: ret  */ FN_RET(0x0066546c); r_esp += 4; return;
L_0066551d:; BB(0x0066551d);
    /* 0066551d: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 00665524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665525: mov ecx, esi */ r_ecx = r_esi;
    /* 00665527: call 0x665864 */ r_esp -= 4; W32(r_esp, 0x66552cu); f_00665864();
    /* 0066552c: mov ecx, esi */ r_ecx = r_esi;
    /* 0066552e: call 0x665cac */ r_esp -= 4; W32(r_esp, 0x665533u); f_00665cac();
    /* 00665533: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00665536: fcom dword ptr [0x9396e8] */ fx_compare(ST(0), R_F32((u32)(0x9396e8u))); 
    /* 0066553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066553e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00665542: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665543: ja 0x665552 */ if ((!fC&&!fZ)) goto L_00665552;
L_00665545:; BB(0x00665545);
    /* 00665545: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00665549: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066554e: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_00665552:; BB(0x00665552);
    /* 00665552: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00665555: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00665558: fld dword ptr [esi + 0x350] */ FPUSH(R_F32((u32)(r_esi+0x350u)));
    /* 0066555e: fadd dword ptr [esi + 0x344] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x344u));
    /* 00665564: fstp dword ptr [esi + 0x350] */ W_F32((u32)(r_esi+0x350u), ST(0)); FPOP();
    /* 0066556a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066556c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00665570: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00665573: lea edx, [esi + 0x34c] */ r_edx = (u32)(r_esi+0x34cu);
    /* 00665579: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0066557c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x665581u); f_0082ebac();
    /* 00665581: jmp 0x6655b6 */ goto L_006655b6;
L_00665583:; BB(0x00665583);
    /* 00665583: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00665587: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0066558b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0066558e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00665590: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 00665593: fadd dword ptr [esi + 0x34c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x34cu));
    /* 00665599: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066559d: fst dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0));
    /* 006655a0: fadd dword ptr [esi + 0x350] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x350u));
    /* 006655a6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006655aa: fst dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0));
    /* 006655ad: fadd dword ptr [esi + 0x354] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x354u));
    /* 006655b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006655b6:; BB(0x006655b6);
    /* 006655b6: mov eax, ebx */ r_eax = r_ebx;
    /* 006655b8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006655bb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006655be: jge 0x66585c */ if ((fS==fO)) goto L_0066585c;
L_006655c4:; BB(0x006655c4);
    /* 006655c4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006655c8: fadd dword ptr [esi + 0x34c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x34cu));
    /* 006655ce: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006655d2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006655d5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006655d7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006655db: fadd dword ptr [esi + 0x350] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x350u));
    /* 006655e1: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006655e5: fadd dword ptr [esi + 0x354] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x354u));
    /* 006655eb: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 006655ef: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006655f3: mov eax, dword ptr [esi + 0x34c] */ r_eax = R32((u32)(r_esi+0x34cu));
    /* 006655f9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006655fd: mov edx, dword ptr [esi + 0x350] */ r_edx = R32((u32)(r_esi+0x350u));
    /* 00665603: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00665607: mov eax, dword ptr [esi + 0x354] */ r_eax = R32((u32)(r_esi+0x354u));
    /* 0066560d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00665611: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x665616u); f_0083173c();
    /* 00665616: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0066561a: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0066561e: fcomp dword ptr [0x9396e4] */ fx_compare(ST(0), R_F32((u32)(0x9396e4u))); FPOP();
    /* 00665624: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665626: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665627: je 0x66584d */ if (fZ) goto L_0066584d;
L_0066562d:; BB(0x0066562d);
    /* 0066562d: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 00665631: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x665636u); f_0082df08();
    /* 00665636: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665638: fld dword ptr [0x9396e0] */ FPUSH(R_F32((u32)(0x9396e0u)));
    /* 0066563e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00665642: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00665646: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00665648: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066564a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0066564c: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00665650: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00665654: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00665658: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066565a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0066565c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0066565e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00665660: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00665662: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00665664: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00665668: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0066566a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0066566c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066566e: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00665671: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00665673: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00665677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00665679: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0066567d: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00665681: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 00665685: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00665689: push 0x17ef */ { u32 v = 0x17efu; r_esp -= 4; W32(r_esp, v); }
    /* 0066568e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066568f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665690: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x665695u); f_0077fffc();
    /* 00665695: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665698: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066569a: je 0x665858 */ if (fZ) goto L_00665858;
L_006656a0:; BB(0x006656a0);
    /* 006656a0: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 006656a4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006656a7: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006656a9: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 006656ac: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 006656af: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 006656b2: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 006656b5: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 006656b8: mov edx, dword ptr [esi + 0x34c] */ r_edx = R32((u32)(r_esi+0x34cu));
    /* 006656be: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 006656c0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006656c4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006656c6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006656ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006656cc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006656d0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006656d4: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006656d8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006656dc: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006656e0: mov edx, dword ptr [esi + 0x350] */ r_edx = R32((u32)(r_esi+0x350u));
    /* 006656e6: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 006656ea: mov edx, dword ptr [esi + 0x354] */ r_edx = R32((u32)(r_esi+0x354u));
    /* 006656f0: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 006656f4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006656f7: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006656fa: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x6656ffu); f_0082f9e0();
    /* 006656ff: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00665703: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00665707: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0066570b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0066570f: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 00665713: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00665717: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 0066571a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066571c: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00665720: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00665724: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00665726: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00665728: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 00665730: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00665732: fchs  */ ST(0) = -ST(0);
    /* 00665734: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00665736: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 0066573a: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0066573e: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00665742: fchs  */ ST(0) = -ST(0);
    /* 00665744: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00665746: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0066574a: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0066574e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00665750: fchs  */ ST(0) = -ST(0);
    /* 00665752: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00665754: fadd dword ptr [esp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4cu));
    /* 00665758: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0066575c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x665761u); f_0083173c();
    /* 00665761: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665763: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00665767: fmul dword ptr [esi + 0x348] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x348u));
    /* 0066576d: fstp dword ptr [esi + 0x34c] */ W_F32((u32)(r_esi+0x34cu), ST(0)); FPOP();
    /* 00665773: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00665777: fmul dword ptr [esi + 0x348] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x348u));
    /* 0066577d: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 00665781: fstp dword ptr [esi + 0x354] */ W_F32((u32)(r_esi+0x354u), ST(0)); FPOP();
    /* 00665787: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x66578cu); f_0082df08();
    /* 0066578c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0066578e: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00665792: lea ecx, [esp + 0x5c] */ r_ecx = (u32)(r_esp+0x5cu);
    /* 00665796: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 0066579c: fmul dword ptr [esi + 0x348] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x348u));
    /* 006657a2: mov eax, dword ptr [esi + 0x34c] */ r_eax = R32((u32)(r_esi+0x34cu));
    /* 006657a8: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 006657aa: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 006657b0: fstp dword ptr [esi + 0x350] */ W_F32((u32)(r_esi+0x350u), ST(0)); FPOP();
    /* 006657b6: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006657ba: mov edx, dword ptr [esi + 0x354] */ r_edx = R32((u32)(r_esi+0x354u));
    /* 006657c0: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 006657c6: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 006657ca: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006657ce: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6657d3u); f_0083173c();
    /* 006657d3: fld dword ptr [0x9396dc] */ FPUSH(R_F32((u32)(0x9396dcu)));
    /* 006657d9: fsub dword ptr [esi + 0x348] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x348u));
    /* 006657df: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006657e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006657e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006657e4: jbe 0x665812 */ if ((fC||fZ)) goto L_00665812;
L_006657e6:; BB(0x006657e6);
    /* 006657e6: fld dword ptr [0x9396e4] */ FPUSH(R_F32((u32)(0x9396e4u)));
    /* 006657ec: fld dword ptr [0x9396e4] */ FPUSH(R_F32((u32)(0x9396e4u)));
    /* 006657f2: mov dword ptr [esi + 0x34c], 0 */ W32((u32)(r_esi+0x34cu), 0x0u);
    /* 006657fc: mov dword ptr [esi + 0x350], 0 */ W32((u32)(r_esi+0x350u), 0x0u);
    /* 00665806: mov dword ptr [esi + 0x354], 0 */ W32((u32)(r_esi+0x354u), 0x0u);
    /* 00665810: jmp 0x66581e */ goto L_0066581e;
L_00665812:; BB(0x00665812);
    /* 00665812: fld dword ptr [esi + 0x34c] */ FPUSH(R_F32((u32)(r_esi+0x34cu)));
    /* 00665818: fld dword ptr [esi + 0x354] */ FPUSH(R_F32((u32)(r_esi+0x354u)));
L_0066581e:; BB(0x0066581e);
    /* 0066581e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00665822: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00665824: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00665827: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00665829: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066582d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0066582f: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00665833: fmul dword ptr [0x9396d8] */ ST(0) = ST(0) * R_F32((u32)(0x9396d8u));
    /* 00665839: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 0066583d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0066583f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00665842: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00665846: mov eax, 1 */ r_eax = 0x1u;
    /* 0066584b: jmp 0x66584f */ goto L_0066584f;
L_0066584d:; BB(0x0066584d);
    /* 0066584d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0066584f:; BB(0x0066584f);
    /* 0066584f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665851: je 0x66585c */ if (fZ) goto L_0066585c;
L_00665853:; BB(0x00665853);
    /* 00665853: jmp 0x665583 */ goto L_00665583;
L_00665858:; BB(0x00665858);
    /* 00665858: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066585a: jmp 0x66584f */ goto L_0066584f;
L_0066585c:; BB(0x0066585c);
    /* 0066585c: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066585f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00665860: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00665861: ret  */ FN_RET(0x0066546c); r_esp += 4; return;
}

void f_00665860(void)
{
    FN_ENTER(0x00665860);
    /* 00665860: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00665861: ret  */ FN_RET(0x00665860); r_esp += 4; return;
}

void f_00665864(void) /* sub_665864 */
{
    FN_ENTER(0x00665864);
    /* 00665864: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665865: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665866: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665867: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665868: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066586b: mov edi, ecx */ r_edi = r_ecx;
    /* 0066586d: movzx eax, word ptr [esp + 0x3c] */ r_eax = (u32)R16((u32)(r_esp+0x3cu));
    /* 00665872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665873: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x665878u); f_0068d5a8();
    /* 00665878: mov esi, eax */ r_esi = r_eax;
    /* 0066587a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066587d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066587f: je 0x665a49 */ if (fZ) goto L_00665a49;
L_00665885:; BB(0x00665885);
    /* 00665885: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 00665888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665889: push 0xa8fbcc */ { u32 v = 0xa8fbccu; r_esp -= 4; W32(r_esp, v); }
    /* 0066588e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x665893u); f_00836208();
    /* 00665893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665896: fcomp dword ptr [0xa8fbe4] */ fx_compare(ST(0), R_F32((u32)(0xa8fbe4u))); FPOP();
    /* 0066589c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066589e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066589f: jbe 0x6658a9 */ if ((fC||fZ)) goto L_006658a9;
L_006658a1:; BB(0x006658a1);
    /* 006658a1: lea ebx, [edi + 0x34c] */ r_ebx = (u32)(r_edi+0x34cu);
    /* 006658a7: jmp 0x6658c5 */ goto L_006658c5;
L_006658a9:; BB(0x006658a9);
    /* 006658a9: lea ebx, [edi + 0x34c] */ r_ebx = (u32)(r_edi+0x34cu);
    /* 006658af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006658b1: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6658b6u); f_0083173c();
    /* 006658b6: fcomp dword ptr [0x9396d4] */ fx_compare(ST(0), R_F32((u32)(0x9396d4u))); FPOP();
    /* 006658bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006658be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006658bf: je 0x665b69 */ if (fZ) goto L_00665b69;
L_006658c5:; BB(0x006658c5);
    /* 006658c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006658c6: push 0xa8fbd8 */ { u32 v = 0xa8fbd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006658cb: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x6658d0u); f_00836208();
    /* 006658d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006658d3: fcomp dword ptr [0xa8fbe4] */ fx_compare(ST(0), R_F32((u32)(0xa8fbe4u))); FPOP();
    /* 006658d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006658db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006658dc: ja 0x6658f4 */ if ((!fC&&!fZ)) goto L_006658f4;
L_006658de:; BB(0x006658de);
    /* 006658de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006658e0: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6658e5u); f_0083173c();
    /* 006658e5: fcomp dword ptr [0x9396d4] */ fx_compare(ST(0), R_F32((u32)(0x9396d4u))); FPOP();
    /* 006658eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006658ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006658ee: je 0x665b31 */ if (fZ) goto L_00665b31;
L_006658f4:; BB(0x006658f4);
    /* 006658f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006658f5: push 0x9c937c */ { u32 v = 0x9c937cu; r_esp -= 4; W32(r_esp, v); }
    /* 006658fa: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x6658ffu); f_00836208();
    /* 006658ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665902: fcomp dword ptr [0xa8fbe4] */ fx_compare(ST(0), R_F32((u32)(0xa8fbe4u))); FPOP();
    /* 00665908: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066590a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066590b: ja 0x665923 */ if ((!fC&&!fZ)) goto L_00665923;
L_0066590d:; BB(0x0066590d);
    /* 0066590d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066590f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x665914u); f_0083173c();
    /* 00665914: fcomp dword ptr [0x9396d4] */ fx_compare(ST(0), R_F32((u32)(0x9396d4u))); FPOP();
    /* 0066591a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066591c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066591d: je 0x665af1 */ if (fZ) goto L_00665af1;
L_00665923:; BB(0x00665923);
    /* 00665923: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665924: push 0x9c9370 */ { u32 v = 0x9c9370u; r_esp -= 4; W32(r_esp, v); }
    /* 00665929: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x66592eu); f_00836208();
    /* 0066592e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665931: fcomp dword ptr [0xa8fbe4] */ fx_compare(ST(0), R_F32((u32)(0xa8fbe4u))); FPOP();
    /* 00665937: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665939: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066593a: jbe 0x665945 */ if ((fC||fZ)) goto L_00665945;
L_0066593c:; BB(0x0066593c);
    /* 0066593c: movsx edx, word ptr [0xa8fc10] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fc10u));
    /* 00665943: jmp 0x665962 */ goto L_00665962;
L_00665945:; BB(0x00665945);
    /* 00665945: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00665947: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x66594cu); f_0083173c();
    /* 0066594c: fcomp dword ptr [0x9396d4] */ fx_compare(ST(0), R_F32((u32)(0x9396d4u))); FPOP();
    /* 00665952: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665954: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665955: je 0x665ab6 */ if (fZ) goto L_00665ab6;
L_0066595b:; BB(0x0066595b);
    /* 0066595b: movsx edx, word ptr [0xa8fc10] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fc10u));
L_00665962:; BB(0x00665962);
    /* 00665962: mov eax, edx */ r_eax = r_edx;
    /* 00665964: and eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665967: je 0x665991 */ if (fZ) goto L_00665991;
L_00665969:; BB(0x00665969);
    /* 00665969: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066596c: jne 0x665991 */ if (!fZ) goto L_00665991;
L_0066596e:; BB(0x0066596e);
    /* 0066596e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00665971: jne 0x665991 */ if (!fZ) goto L_00665991;
L_00665973:; BB(0x00665973);
    /* 00665973: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00665975: push 0x939794 */ { u32 v = 0x939794u; r_esp -= 4; W32(r_esp, v); }
    /* 0066597a: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0066597e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066597f: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x665984u); f_007184f8();
    /* 00665984: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665987: movzx eax, word ptr [0xa8fc10] */ r_eax = (u32)R16((u32)(0xa8fc10u));
    /* 0066598e: and eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00665991:; BB(0x00665991);
    /* 00665991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665993: jne 0x6659a9 */ if (!fZ) goto L_006659a9;
L_00665995:; BB(0x00665995);
    /* 00665995: mov edx, dword ptr [edi + 0x368] */ r_edx = R32((u32)(r_edi+0x368u));
    /* 0066599b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066599d: je 0x6659a9 */ if (fZ) goto L_006659a9;
L_0066599f:; BB(0x0066599f);
    /* 0066599f: mov dword ptr [edi + 0x368], 0 */ W32((u32)(r_edi+0x368u), 0x0u);
L_006659a9:; BB(0x006659a9);
    /* 006659a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006659ab: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6659b0u); f_0083173c();
    /* 006659b0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006659b4: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 006659b8: fcomp dword ptr [0x9396d4] */ fx_compare(ST(0), R_F32((u32)(0x9396d4u))); FPOP();
    /* 006659be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006659c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006659c1: je 0x665a82 */ if (fZ) goto L_00665a82;
L_006659c7:; BB(0x006659c7);
    /* 006659c7: mov dword ptr [edi + 0x360], 0 */ W32((u32)(r_edi+0x360u), 0x0u);
L_006659d1:; BB(0x006659d1);
    /* 006659d1: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006659d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006659d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006659d6: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x6659dbu); f_00836208();
    /* 006659db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006659de: fcomp dword ptr [0xa8fbbc] */ fx_compare(ST(0), R_F32((u32)(0xa8fbbcu))); FPOP();
    /* 006659e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006659e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006659e7: ja 0x665a53 */ if ((!fC&&!fZ)) goto L_00665a53;
L_006659e9:; BB(0x006659e9);
    /* 006659e9: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006659ec: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006659ef: je 0x665a49 */ if (fZ) goto L_00665a49;
L_006659f1:; BB(0x006659f1);
    /* 006659f1: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 006659f4: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 006659f7: mov dword ptr [edi + 0x30], 1 */ W32((u32)(r_edi+0x30u), 0x1u);
    /* 006659fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00665a00: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 00665a03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00665a05: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 00665a08: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00665a0a: fmul qword ptr [0x939640] */ ST(0) = ST(0) * R_F64((u32)(0x939640u));
    /* 00665a10: fdiv qword ptr [0x939638] */ ST(0) = ST(0) / R_F64((u32)(0x939638u));
    /* 00665a16: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00665a1a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00665a1c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00665a20: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00665a25: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665a2a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00665a2e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00665a32: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00665a36: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00665a3a: fcomp dword ptr [0x9396d4] */ fx_compare(ST(0), R_F32((u32)(0x9396d4u))); FPOP();
    /* 00665a40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665a42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665a43: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00665a47: je 0x665a64 */ if (fZ) goto L_00665a64;
L_00665a49:; BB(0x00665a49);
    /* 00665a49: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665a4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00665a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665a4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00665a4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00665a50: ret 4 */ FN_RET(0x00665864); r_esp += 8; return;
L_00665a53:; BB(0x00665a53);
    /* 00665a53: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 00665a5a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665a5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00665a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665a5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00665a60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00665a61: ret 4 */ FN_RET(0x00665864); r_esp += 8; return;
L_00665a64:; BB(0x00665a64);
    /* 00665a64: mov ecx, dword ptr [edi + 0x358] */ r_ecx = R32((u32)(r_edi+0x358u));
    /* 00665a6a: mov eax, ebp */ r_eax = r_ebp;
    /* 00665a6c: call 0x665bb0 */ r_esp -= 4; W32(r_esp, 0x665a71u); f_00665bb0();
    /* 00665a71: mov ecx, edi */ r_ecx = r_edi;
    /* 00665a73: call 0x665c34 */ r_esp -= 4; W32(r_esp, 0x665a78u); f_00665c34();
    /* 00665a78: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665a7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00665a7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665a7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00665a7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00665a7f: ret 4 */ FN_RET(0x00665864); r_esp += 8; return;
L_00665a82:; BB(0x00665a82);
    /* 00665a82: mov edx, dword ptr [edi + 0x360] */ r_edx = R32((u32)(r_edi+0x360u));
    /* 00665a88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665a8a: jne 0x665aa7 */ if (!fZ) goto L_00665aa7;
L_00665a8c:; BB(0x00665a8c);
    /* 00665a8c: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00665a90: add dword ptr [edi + 0x364], 1 */ { u32 ad = (u32)(r_edi+0x364u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00665a97: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00665a99: push 0x9397a4 */ { u32 v = 0x9397a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00665a9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665a9f: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x665aa4u); f_007184f8();
    /* 00665aa4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665aa7:; BB(0x00665aa7);
    /* 00665aa7: mov dword ptr [edi + 0x360], 1 */ W32((u32)(r_edi+0x360u), 0x1u);
    /* 00665ab1: jmp 0x6659d1 */ goto L_006659d1;
L_00665ab6:; BB(0x00665ab6);
    /* 00665ab6: movsx edx, word ptr [0xa8fc10] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fc10u));
    /* 00665abd: mov eax, dword ptr [edi + 0x368] */ r_eax = R32((u32)(r_edi+0x368u));
    /* 00665ac3: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00665ac6: mov word ptr [0xa8fc10], dx */ W16((u32)(0xa8fc10u), (u16)r_edx);
    /* 00665acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665acf: jne 0x665962 */ if (!fZ) goto L_00665962;
L_00665ad5:; BB(0x00665ad5);
    /* 00665ad5: mov eax, dword ptr [0xa8fc48] */ r_eax = R32((u32)(0xa8fc48u));
    /* 00665ada: mov dword ptr [edi + 0x368], 1 */ W32((u32)(r_edi+0x368u), 0x1u);
    /* 00665ae4: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665ae7: mov dword ptr [0xa8fc48], eax */ W32((u32)(0xa8fc48u), r_eax);
    /* 00665aec: jmp 0x665962 */ goto L_00665962;
L_00665af1:; BB(0x00665af1);
    /* 00665af1: movzx edx, word ptr [0xa8fc10] */ r_edx = (u32)R16((u32)(0xa8fc10u));
    /* 00665af8: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00665afe: mov word ptr [0xa8fc10], dx */ W16((u32)(0xa8fc10u), (u16)r_edx);
    /* 00665b05: mov edx, dword ptr [edi + 0x368] */ r_edx = R32((u32)(r_edi+0x368u));
    /* 00665b0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665b0d: jne 0x665923 */ if (!fZ) goto L_00665923;
L_00665b13:; BB(0x00665b13);
    /* 00665b13: mov edx, dword ptr [0xa8fc44] */ r_edx = R32((u32)(0xa8fc44u));
    /* 00665b19: mov dword ptr [edi + 0x368], 1 */ W32((u32)(r_edi+0x368u), 0x1u);
    /* 00665b23: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665b26: mov dword ptr [0xa8fc44], edx */ W32((u32)(0xa8fc44u), r_edx);
    /* 00665b2c: jmp 0x665923 */ goto L_00665923;
L_00665b31:; BB(0x00665b31);
    /* 00665b31: movzx edx, word ptr [0xa8fc10] */ r_edx = (u32)R16((u32)(0xa8fc10u));
    /* 00665b38: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00665b3e: mov word ptr [0xa8fc10], dx */ W16((u32)(0xa8fc10u), (u16)r_edx);
    /* 00665b45: mov edx, dword ptr [edi + 0x368] */ r_edx = R32((u32)(r_edi+0x368u));
    /* 00665b4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665b4d: jne 0x6658f4 */ if (!fZ) goto L_006658f4;
L_00665b53:; BB(0x00665b53);
    /* 00665b53: add dword ptr [0xa8fc44], 1 */ { u32 ad = (u32)(0xa8fc44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00665b5a: mov dword ptr [edi + 0x368], 1 */ W32((u32)(r_edi+0x368u), 0x1u);
    /* 00665b64: jmp 0x6658f4 */ goto L_006658f4;
L_00665b69:; BB(0x00665b69);
    /* 00665b69: movzx edx, word ptr [0xa8fc10] */ r_edx = (u32)R16((u32)(0xa8fc10u));
    /* 00665b70: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00665b76: mov word ptr [0xa8fc10], dx */ W16((u32)(0xa8fc10u), (u16)r_edx);
    /* 00665b7d: mov edx, dword ptr [edi + 0x368] */ r_edx = R32((u32)(r_edi+0x368u));
    /* 00665b83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665b85: jne 0x6658c5 */ if (!fZ) goto L_006658c5;
L_00665b8b:; BB(0x00665b8b);
    /* 00665b8b: add dword ptr [0xa8fc48], 1 */ { u32 ad = (u32)(0xa8fc48u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00665b92: mov dword ptr [edi + 0x368], 1 */ W32((u32)(r_edi+0x368u), 0x1u);
    /* 00665b9c: jmp 0x6658c5 */ goto L_006658c5;
}

void f_00665bb0(void) /* sub_665BB0 */
{
    FN_ENTER(0x00665bb0);
    /* 00665bb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665bb1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665bb4: mov edi, eax */ r_edi = r_eax;
    /* 00665bb6: mov byte ptr [esp], 0x79 */ W8((u32)(r_esp), 0x79u);
    /* 00665bba: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00665bbe: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00665bc2: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 00665bc7: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00665bc9: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00665bcd: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00665bd0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00665bd4: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x665bd9u); f_00694c6c();
    /* 00665bd9: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665bdf: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00665be2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665be4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665be6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00665be8: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00665bef: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x665bf4u); f_007c1100();
    /* 00665bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665bf6: je 0x665c0e */ if (fZ) goto L_00665c0e;
L_00665bf8:; BB(0x00665bf8);
    /* 00665bf8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00665bfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665bfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665bfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665bfd: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00665bff: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x665c04u); f_00814298();
    /* 00665c04: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665c07: mov byte ptr [esp + 0x14], 1 */ W8((u32)(r_esp+0x14u), 0x1u);
    /* 00665c0c: jmp 0x665c25 */ goto L_00665c25;
L_00665c0e:; BB(0x00665c0e);
    /* 00665c0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00665c10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665c13: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 00665c18: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x665c1du); f_00814298();
    /* 00665c1d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665c20: mov byte ptr [esp + 0x14], 0 */ W8((u32)(r_esp+0x14u), 0x0u);
L_00665c25:; BB(0x00665c25);
    /* 00665c25: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00665c28: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x665c2du); f_008003e0();
    /* 00665c2d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665c30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00665c31: ret  */ FN_RET(0x00665bb0); r_esp += 4; return;
}

void f_00665c34(void) /* sub_665C34 */
{
    FN_ENTER(0x00665c34);
    /* 00665c34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665c37: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00665c3f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00665c47: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00665c4f: mov byte ptr [esp], 0x40 */ W8((u32)(r_esp), 0x40u);
    /* 00665c53: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 00665c58: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665c5e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x665c63u); f_0068d5a8();
    /* 00665c63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00665c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665c66: je 0x665ca7 */ if (fZ) goto L_00665ca7;
L_00665c68:; BB(0x00665c68);
    /* 00665c68: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 00665c6e: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00665c73: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00665c77: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00665c7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665c7d: mov ecx, eax */ r_ecx = r_eax;
    /* 00665c7f: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665c82: call 0x69bb6c */ r_esp -= 4; W32(r_esp, 0x665c87u); f_0069bb6c();
    /* 00665c87: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00665c8b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00665c8f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00665c97: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00665c9b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00665c9f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00665ca2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x665ca7u); f_008003e0();
L_00665ca7:; BB(0x00665ca7);
    /* 00665ca7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665caa: ret  */ FN_RET(0x00665c34); r_esp += 4; return;
}

void f_00665cac(void) /* sub_665CAC */
{
    FN_ENTER(0x00665cac);
    /* 00665cac: movsx eax, word ptr [0xa8fc12] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8fc12u));
    /* 00665cb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00665cb5: jne 0x665cee */ if (!fZ) goto L_00665cee;
L_00665cb7:; BB(0x00665cb7);
    /* 00665cb7: mov eax, dword ptr [0xa8fc14] */ r_eax = R32((u32)(0xa8fc14u));
    /* 00665cbc: cmp eax, dword ptr [ecx + 0x35c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x35cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00665cc2: jl 0x665cee */ if ((fS!=fO)) goto L_00665cee;
L_00665cc4:; BB(0x00665cc4);
    /* 00665cc4: push dword ptr [0xa8fc0c] */ { u32 v = R32((u32)(0xa8fc0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00665cca: mov edx, dword ptr [0xa8fc04] */ r_edx = R32((u32)(0xa8fc04u));
    /* 00665cd0: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 00665cd6: mov eax, dword ptr [0xa8fc00] */ r_eax = R32((u32)(0xa8fc00u));
    /* 00665cdb: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00665cde: mov eax, dword ptr [0xa8fc08] */ r_eax = R32((u32)(0xa8fc08u));
    /* 00665ce3: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00665ce6: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00665ce9: call 0x665cfc */ r_esp -= 4; W32(r_esp, 0x665ceeu); f_00665cfc();
L_00665cee:; BB(0x00665cee);
    /* 00665cee: mov eax, 1 */ r_eax = 0x1u;
    /* 00665cf3: mov word ptr [0xa8fc12], ax */ W16((u32)(0xa8fc12u), (u16)r_eax);
    /* 00665cf9: ret  */ FN_RET(0x00665cac); r_esp += 4; return;
}

void f_00665cfc(void) /* sub_665CFC */
{
    FN_ENTER(0x00665cfc);
    /* 00665cfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665cfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665cfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665cff: mov esi, ecx */ r_esi = r_ecx;
    /* 00665d01: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00665d05: fld dword ptr [0xa8fbac] */ FPUSH(R_F32((u32)(0xa8fbacu)));
    /* 00665d0b: mov edi, dword ptr [0xa8fbac] */ r_edi = R32((u32)(0xa8fbacu));
    /* 00665d11: fld dword ptr [0xa8fbb0] */ FPUSH(R_F32((u32)(0xa8fbb0u)));
    /* 00665d17: mov edx, dword ptr [0xa8fbb0] */ r_edx = R32((u32)(0xa8fbb0u));
    /* 00665d1d: movsx eax, byte ptr [0xa8fc18] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa8fc18u));
    /* 00665d24: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665d27: je 0x665da2 */ if (fZ) goto L_00665da2;
L_00665d29:; BB(0x00665d29);
    /* 00665d29: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 00665d2f: mov dword ptr [esi + 0x398], edi */ W32((u32)(r_esi+0x398u), r_edi);
L_00665d35:; BB(0x00665d35);
    /* 00665d35: fstp dword ptr [esi + 0x350] */ W_F32((u32)(r_esi+0x350u), ST(0)); FPOP();
    /* 00665d3b: fstp dword ptr [esi + 0x354] */ W_F32((u32)(r_esi+0x354u), ST(0)); FPOP();
    /* 00665d41: lea edi, [esi + 0x34c] */ r_edi = (u32)(r_esi+0x34cu);
    /* 00665d47: mov ecx, edi */ r_ecx = r_edi;
    /* 00665d49: mov dword ptr [esi + 0x3a0], 0x3dcccccd */ W32((u32)(r_esi+0x3a0u), 0x3dcccccdu);
    /* 00665d53: mov dword ptr [esi + 0x3a4], 0x3dcccccd */ W32((u32)(r_esi+0x3a4u), 0x3dcccccdu);
    /* 00665d5d: mov dword ptr [esi + 0x34c], 0 */ W32((u32)(r_esi+0x34cu), 0x0u);
    /* 00665d67: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x665d6cu); f_0083173c();
    /* 00665d6c: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 00665d72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665d73: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665d74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665d75: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x665d7au); f_007829f4();
    /* 00665d7a: mov eax, dword ptr [esi + 0x34c] */ r_eax = R32((u32)(r_esi+0x34cu));
    /* 00665d80: mov edx, dword ptr [esi + 0x354] */ r_edx = R32((u32)(r_esi+0x354u));
    /* 00665d86: mov dword ptr [esi + 0x54], 0 */ W32((u32)(r_esi+0x54u), 0x0u);
    /* 00665d8d: mov dword ptr [esi + 0x33c], ebx */ W32((u32)(r_esi+0x33cu), r_ebx);
    /* 00665d93: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00665d96: mov dword ptr [esi + 0x58], edx */ W32((u32)(r_esi+0x58u), r_edx);
    /* 00665d99: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665d9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00665d9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00665d9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00665d9f: ret 4 */ FN_RET(0x00665cfc); r_esp += 8; return;
L_00665da2:; BB(0x00665da2);
    /* 00665da2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00665da4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665da6: fld dword ptr [0xa8fbec] */ FPUSH(R_F32((u32)(0xa8fbecu)));
    /* 00665dac: mov eax, dword ptr [0xa8fbec] */ r_eax = R32((u32)(0xa8fbecu));
    /* 00665db1: fld dword ptr [0xa8fbf0] */ FPUSH(R_F32((u32)(0xa8fbf0u)));
    /* 00665db7: mov edx, dword ptr [0xa8fbf0] */ r_edx = R32((u32)(0xa8fbf0u));
    /* 00665dbd: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00665dc3: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 00665dc9: jmp 0x665d35 */ goto L_00665d35;
}

void f_00665d09(void)
{
    FN_ENTER(0x00665d09);
    /* 00665d09: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 00665d0b: mov edi, dword ptr [0xa8fbac] */ r_edi = R32((u32)(0xa8fbacu));
    /* 00665d11: fld dword ptr [0xa8fbb0] */ FPUSH(R_F32((u32)(0xa8fbb0u)));
    /* 00665d17: mov edx, dword ptr [0xa8fbb0] */ r_edx = R32((u32)(0xa8fbb0u));
    /* 00665d1d: movsx eax, byte ptr [0xa8fc18] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa8fc18u));
    /* 00665d24: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665d27: je 0x665da2 */ if (fZ) goto L_00665da2;
L_00665d29:; BB(0x00665d29);
    /* 00665d29: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 00665d2f: mov dword ptr [esi + 0x398], edi */ W32((u32)(r_esi+0x398u), r_edi);
L_00665d35:; BB(0x00665d35);
    /* 00665d35: fstp dword ptr [esi + 0x350] */ W_F32((u32)(r_esi+0x350u), ST(0)); FPOP();
    /* 00665d3b: fstp dword ptr [esi + 0x354] */ W_F32((u32)(r_esi+0x354u), ST(0)); FPOP();
    /* 00665d41: lea edi, [esi + 0x34c] */ r_edi = (u32)(r_esi+0x34cu);
    /* 00665d47: mov ecx, edi */ r_ecx = r_edi;
    /* 00665d49: mov dword ptr [esi + 0x3a0], 0x3dcccccd */ W32((u32)(r_esi+0x3a0u), 0x3dcccccdu);
    /* 00665d53: mov dword ptr [esi + 0x3a4], 0x3dcccccd */ W32((u32)(r_esi+0x3a4u), 0x3dcccccdu);
    /* 00665d5d: mov dword ptr [esi + 0x34c], 0 */ W32((u32)(r_esi+0x34cu), 0x0u);
    /* 00665d67: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x665d6cu); f_0083173c();
    /* 00665d6c: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 00665d72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665d73: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665d74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00665d75: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x665d7au); f_007829f4();
    /* 00665d7a: mov eax, dword ptr [esi + 0x34c] */ r_eax = R32((u32)(r_esi+0x34cu));
    /* 00665d80: mov edx, dword ptr [esi + 0x354] */ r_edx = R32((u32)(r_esi+0x354u));
    /* 00665d86: mov dword ptr [esi + 0x54], 0 */ W32((u32)(r_esi+0x54u), 0x0u);
    /* 00665d8d: mov dword ptr [esi + 0x33c], ebx */ W32((u32)(r_esi+0x33cu), r_ebx);
    /* 00665d93: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00665d96: mov dword ptr [esi + 0x58], edx */ W32((u32)(r_esi+0x58u), r_edx);
    /* 00665d99: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00665d9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00665d9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00665d9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00665d9f: ret 4 */ FN_RET(0x00665d09); r_esp += 8; return;
L_00665da2:; BB(0x00665da2);
    /* 00665da2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00665da4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665da6: fld dword ptr [0xa8fbec] */ FPUSH(R_F32((u32)(0xa8fbecu)));
    /* 00665dac: mov eax, dword ptr [0xa8fbec] */ r_eax = R32((u32)(0xa8fbecu));
    /* 00665db1: fld dword ptr [0xa8fbf0] */ FPUSH(R_F32((u32)(0xa8fbf0u)));
    /* 00665db7: mov edx, dword ptr [0xa8fbf0] */ r_edx = R32((u32)(0xa8fbf0u));
    /* 00665dbd: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00665dc3: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 00665dc9: jmp 0x665d35 */ goto L_00665d35;
}

void f_00665dd0(void) /* sub_665DD0 */
{
    FN_ENTER(0x00665dd0);
    /* 00665dd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665dd1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00665dd2: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00665dd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00665dd7: fld dword ptr [0xa8fbbc] */ FPUSH(R_F32((u32)(0xa8fbbcu)));
    /* 00665ddd: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00665de0: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00665de3: fld dword ptr [0xa8fbbc] */ FPUSH(R_F32((u32)(0xa8fbbcu)));
    /* 00665de9: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00665deb: fdiv dword ptr [0x9396c4] */ ST(0) = ST(0) / R_F32((u32)(0x9396c4u));
    /* 00665df1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00665df9: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00665e01: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00665e05: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00665e08: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00665e10: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00665e14: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00665e18: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00665e1a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00665e1c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00665e20: mov eax, dword ptr [ebx + 0x360] */ r_eax = R32((u32)(r_ebx+0x360u));
    /* 00665e26: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00665e2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665e2c: je 0x665e39 */ if (fZ) goto L_00665e39;
L_00665e2e:; BB(0x00665e2e);
    /* 00665e2e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00665e35: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00665e37: jmp 0x665e42 */ goto L_00665e42;
L_00665e39:; BB(0x00665e39);
    /* 00665e39: mov dword ptr [esp], 0xbf400000 */ W32((u32)(r_esp), 0xbf400000u);
    /* 00665e40: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00665e42:; BB(0x00665e42);
    /* 00665e42: mov eax, dword ptr [ebx + 0x34c] */ r_eax = R32((u32)(r_ebx+0x34cu));
    /* 00665e48: mov edx, dword ptr [ebx + 0x354] */ r_edx = R32((u32)(r_ebx+0x354u));
    /* 00665e4e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00665e52: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00665e56: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00665e5a: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00665e5e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x665e63u); f_0083173c();
    /* 00665e63: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00665e67: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 00665e6b: lea edx, [ebx + 0x60] */ r_edx = (u32)(r_ebx+0x60u);
    /* 00665e6e: lea eax, [ebx + 0x64] */ r_eax = (u32)(r_ebx+0x64u);
    /* 00665e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665e72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665e73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665e74: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x665e79u); f_007a8e2c();
    /* 00665e79: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665e7c: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00665e80: fcomp dword ptr [0x9396bc] */ fx_compare(ST(0), R_F32((u32)(0x9396bcu))); FPOP();
    /* 00665e86: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665e88: movzx edx, word ptr [ebx + 0x33c] */ r_edx = (u32)R16((u32)(r_ebx+0x33cu));
    /* 00665e8f: movzx esi, word ptr [ebx + 0x60] */ r_esi = (u32)R16((u32)(r_ebx+0x60u));
    /* 00665e93: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 00665e99: mov dword ptr [ebx + 0x60], esi */ W32((u32)(r_ebx+0x60u), r_esi);
    /* 00665e9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665e9d: je 0x665ec1 */ if (fZ) goto L_00665ec1;
L_00665e9f:; BB(0x00665e9f);
    /* 00665e9f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00665ea3: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x665ea8u); f_0082df08();
    /* 00665ea8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665eaa: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00665eae: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00665eb2: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00665eb6: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00665eb9: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00665ebc: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 00665ebf: jmp 0x665ed6 */ goto L_00665ed6;
L_00665ec1:; BB(0x00665ec1);
    /* 00665ec1: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00665ec4: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00665ec7: mov esi, dword ptr [ebx + 0x4c] */ r_esi = R32((u32)(r_ebx+0x4cu));
    /* 00665eca: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00665ece: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00665ed2: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_00665ed6:; BB(0x00665ed6);
    /* 00665ed6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00665edb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x665ee0u); f_0082d990();
    /* 00665ee0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665ee2: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 00665ee7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x665eecu); f_0082d8bc();
    /* 00665eec: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00665ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665ef1: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00665ef5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665ef7: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x665efcu); f_00830aa0();
    /* 00665efc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00665f01: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x665f06u); f_0082eb80();
    /* 00665f06: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00665f0b: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00665f11: mov esi, dword ptr [0xaf0374] */ r_esi = R32((u32)(0xaf0374u));
    /* 00665f17: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00665f1c: or eax, 0x821 */ {  u32 a = r_eax; u32 b = 0x821u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665f21: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00665f27: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00665f2d: mov dword ptr [0xaab50c], esi */ W32((u32)(0xaab50cu), r_esi);
    /* 00665f33: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00665f39: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00665f3f: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00665f45: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00665f4b: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00665f51: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00665f57: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00665f5d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00665f62: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00665f67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00665f69: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x665f6eu); f_0082d6fc();
    /* 00665f6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665f71: fld dword ptr [0x9396b4] */ FPUSH(R_F32((u32)(0x9396b4u)));
    /* 00665f77: fld dword ptr [0x9396b0] */ FPUSH(R_F32((u32)(0x9396b0u)));
    /* 00665f7d: fld dword ptr [0x9396b8] */ FPUSH(R_F32((u32)(0x9396b8u)));
    /* 00665f83: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00665f87: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00665f89: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00665f8b: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00665f8f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00665f94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665f99: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00665f9d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00665fa1: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00665fa5: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00665fa9: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00665fad: fcom dword ptr [0x9396bc] */ fx_compare(ST(0), R_F32((u32)(0x9396bcu))); 
    /* 00665fb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665fb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665fb6: je 0x6662cd */ if (fZ) goto L_006662cd;
L_00665fbc:; BB(0x00665fbc);
    /* 00665fbc: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00665fbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665fc0: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00665fc4: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00665fc9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665fce: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00665fd2: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00665fd6: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00665fda: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00665fde: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00665fe2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665fe3: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665fe6: push dword ptr [ebx + 0x33c] */ { u32 v = R32((u32)(r_ebx+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00665fec: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x665ff1u); f_007a8c74();
    /* 00665ff1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665ff2: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00665ff5: push dword ptr [ebx + 0x340] */ { u32 v = R32((u32)(r_ebx+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665ffb: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
    /* 00666001: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x666006u); f_007a8c74();
    /* 00666006: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666009: fld dword ptr [0x9396b4] */ FPUSH(R_F32((u32)(0x9396b4u)));
    /* 0066600f: fld dword ptr [0x9396b0] */ FPUSH(R_F32((u32)(0x9396b0u)));
    /* 00666015: mov dword ptr [ebx + 0x340], eax */ W32((u32)(r_ebx+0x340u), r_eax);
L_0066601b:; BB(0x0066601b);
    /* 0066601b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0066601f: fmul dword ptr [0x9396ac] */ ST(0) = ST(0) * R_F32((u32)(0x9396acu));
    /* 00666025: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00666027: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00666029: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066602b: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0066602f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00666034: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00666039: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0066603d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00666041: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00666045: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00666049: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0066604d: add dword ptr [ebx + 0x5c], eax */ { u32 ad = (u32)(r_ebx+0x5cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00666050: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x666055u); f_0082d990();
    /* 00666055: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00666059: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066605b: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x666060u); f_008316b4();
    /* 00666060: fld dword ptr [0xa8fbbc] */ FPUSH(R_F32((u32)(0xa8fbbcu)));
    /* 00666066: fmul dword ptr [0x9396a8] */ ST(0) = ST(0) * R_F32((u32)(0x9396a8u));
    /* 0066606c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066606f: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00666072: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00666076: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0066607a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066607c: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x666081u); f_0082fa0c();
    /* 00666081: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00666084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666085: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x66608au); f_0082d710();
    /* 0066608a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066608b: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0066608f: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x666094u); f_0082def4();
    /* 00666094: fcomp dword ptr [0x9396bc] */ fx_compare(ST(0), R_F32((u32)(0x9396bcu))); FPOP();
    /* 0066609a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066609c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066609d: je 0x6660b0 */ if (fZ) goto L_006660b0;
L_0066609f:; BB(0x0066609f);
    /* 0066609f: push dword ptr [ebx + 0x340] */ { u32 v = R32((u32)(r_ebx+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 006660a5: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 006660a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006660ab: call 0x83cdb0 */ r_esp -= 4; W32(r_esp, 0x6660b0u); f_0083cdb0();
L_006660b0:; BB(0x006660b0);
    /* 006660b0: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006660b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006660b8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6660bdu); f_0082d8bc();
    /* 006660bd: mov eax, 0xa8fc20 */ r_eax = 0xa8fc20u;
    /* 006660c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660c4: je 0x6661d3 */ if (fZ) goto L_006661d3;
L_006660ca:; BB(0x006660ca);
    /* 006660ca: mov eax, dword ptr [0xa8fc1c] */ r_eax = R32((u32)(0xa8fc1cu));
    /* 006660cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660d1: je 0x6661d3 */ if (fZ) goto L_006661d3;
L_006660d7:; BB(0x006660d7);
    /* 006660d7: movzx eax, word ptr [0xa8fbe8] */ r_eax = (u32)R16((u32)(0xa8fbe8u));
    /* 006660de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660e0: je 0x666286 */ if (fZ) goto L_00666286;
L_006660e6:; BB(0x006660e6);
    /* 006660e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660e9: je 0x66623f */ if (fZ) goto L_0066623f;
L_006660ef:; BB(0x006660ef);
    /* 006660ef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660f2: je 0x666191 */ if (fZ) goto L_00666191;
L_006660f8:; BB(0x006660f8);
    /* 006660f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660fb: jne 0x666144 */ if (!fZ) goto L_00666144;
L_006660fd:; BB(0x006660fd);
    /* 006660fd: mov ecx, dword ptr [0xa8fc2c] */ r_ecx = R32((u32)(0xa8fc2cu));
    /* 00666103: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x666108u); f_00829cc8();
    /* 00666108: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x66610du); f_007a954c();
    /* 0066610d: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666113: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666115: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66611au); f_005b8610();
    /* 0066611a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066611b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666120u); f_0082e1e8();
    /* 00666120: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666121: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x666126u); f_007a9558();
    /* 00666126: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066612c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066612e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666133u); f_005b8610();
    /* 00666133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666134: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666139u); f_0082e1e8();
    /* 00666139: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066613a: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x66613fu); f_007a9564();
    /* 0066613f: jmp 0x6661d3 */ goto L_006661d3;
L_00666144:; BB(0x00666144);
    /* 00666144: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666147: jne 0x6661d3 */ if (!fZ) goto L_006661d3;
L_0066614d:; BB(0x0066614d);
    /* 0066614d: mov ecx, dword ptr [0xa8fc38] */ r_ecx = R32((u32)(0xa8fc38u));
    /* 00666153: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x666158u); f_00829cc8();
    /* 00666158: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x66615du); f_007a954c();
    /* 0066615d: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666163: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00666165: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66616au); f_005b8610();
    /* 0066616a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066616b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666170u); f_0082e1e8();
    /* 00666170: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666171: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x666176u); f_007a9558();
    /* 00666176: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066617c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066617e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666183u); f_005b8610();
    /* 00666183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666184: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666189u); f_0082e1e8();
    /* 00666189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066618a: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x66618fu); f_007a9564();
    /* 0066618f: jmp 0x6661d3 */ goto L_006661d3;
L_00666191:; BB(0x00666191);
    /* 00666191: mov ecx, dword ptr [0xa8fc28] */ r_ecx = R32((u32)(0xa8fc28u));
    /* 00666197: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66619cu); f_00829cc8();
    /* 0066619c: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x6661a1u); f_007a954c();
    /* 006661a1: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 006661a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661a9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6661aeu); f_005b8610();
    /* 006661ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006661af: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6661b4u); f_0082e1e8();
    /* 006661b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661b5: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x6661bau); f_007a9558();
    /* 006661ba: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 006661c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661c2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6661c7u); f_005b8610();
    /* 006661c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006661c8: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6661cdu); f_0082e1e8();
    /* 006661cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661ce: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x6661d3u); f_007a9564();
L_006661d3:; BB(0x006661d3);
    /* 006661d3: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661d8: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6661ddu); f_0082d710();
    /* 006661dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661de: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006661e3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6661e8u); f_0082eb80();
    /* 006661e8: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 006661ed: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 006661f3: mov esi, dword ptr [0xaab508] */ r_esi = R32((u32)(0xaab508u));
    /* 006661f9: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 006661fe: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 00666203: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00666209: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066620b: mov dword ptr [0xaf0370], esi */ W32((u32)(0xaf0370u), r_esi);
    /* 00666211: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 00666216: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 0066621b: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00666220: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00666225: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0066622a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0066622f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00666234: call 0x6662d4 */ r_esp -= 4; W32(r_esp, 0x666239u); f_006662d4();
    /* 00666239: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066623c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066623d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066623e: ret  */ FN_RET(0x00665dd0); r_esp += 4; return;
L_0066623f:; BB(0x0066623f);
    /* 0066623f: mov ecx, dword ptr [0xa8fc24] */ r_ecx = R32((u32)(0xa8fc24u));
    /* 00666245: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66624au); f_00829cc8();
    /* 0066624a: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x66624fu); f_007a954c();
    /* 0066624f: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666255: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666257: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66625cu); f_005b8610();
    /* 0066625c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066625d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666262u); f_0082e1e8();
    /* 00666262: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666263: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x666268u); f_007a9558();
    /* 00666268: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066626e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666270: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666275u); f_005b8610();
    /* 00666275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666276: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x66627bu); f_0082e1e8();
    /* 0066627b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066627c: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x666281u); f_007a9564();
    /* 00666281: jmp 0x6661d3 */ goto L_006661d3;
L_00666286:; BB(0x00666286);
    /* 00666286: mov ecx, dword ptr [0xa8fc20] */ r_ecx = R32((u32)(0xa8fc20u));
    /* 0066628c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x666291u); f_00829cc8();
    /* 00666291: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x666296u); f_007a954c();
    /* 00666296: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066629c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066629e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6662a3u); f_005b8610();
    /* 006662a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006662a4: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6662a9u); f_0082e1e8();
    /* 006662a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006662aa: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x6662afu); f_007a9558();
    /* 006662af: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 006662b5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006662b7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6662bcu); f_005b8610();
    /* 006662bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006662bd: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6662c2u); f_0082e1e8();
    /* 006662c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006662c3: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x6662c8u); f_007a9564();
    /* 006662c8: jmp 0x6661d3 */ goto L_006661d3;
L_006662cd:; BB(0x006662cd);
    /* 006662cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006662cf: jmp 0x66601b */ goto L_0066601b;
}

void f_00665e00(void)
{
    FN_ENTER(0x00665e00);
    /* 00665e00: add byte ptr [ecx - 0x74efdbbc], cl */ { u32 ad = (u32)(r_ecx+0x8b102444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00665e06: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00665e07: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00665e08: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00665e10: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00665e14: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00665e18: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00665e1a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00665e1c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00665e20: mov eax, dword ptr [ebx + 0x360] */ r_eax = R32((u32)(r_ebx+0x360u));
    /* 00665e26: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00665e2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00665e2c: je 0x665e39 */ if (fZ) goto L_00665e39;
L_00665e2e:; BB(0x00665e2e);
    /* 00665e2e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00665e35: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00665e37: jmp 0x665e42 */ goto L_00665e42;
L_00665e39:; BB(0x00665e39);
    /* 00665e39: mov dword ptr [esp], 0xbf400000 */ W32((u32)(r_esp), 0xbf400000u);
    /* 00665e40: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00665e42:; BB(0x00665e42);
    /* 00665e42: mov eax, dword ptr [ebx + 0x34c] */ r_eax = R32((u32)(r_ebx+0x34cu));
    /* 00665e48: mov edx, dword ptr [ebx + 0x354] */ r_edx = R32((u32)(r_ebx+0x354u));
    /* 00665e4e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00665e52: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00665e56: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00665e5a: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00665e5e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x665e63u); f_0083173c();
    /* 00665e63: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00665e67: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 00665e6b: lea edx, [ebx + 0x60] */ r_edx = (u32)(r_ebx+0x60u);
    /* 00665e6e: lea eax, [ebx + 0x64] */ r_eax = (u32)(r_ebx+0x64u);
    /* 00665e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665e72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00665e73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665e74: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x665e79u); f_007a8e2c();
    /* 00665e79: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665e7c: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00665e80: fcomp dword ptr [0x9396bc] */ fx_compare(ST(0), R_F32((u32)(0x9396bcu))); FPOP();
    /* 00665e86: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665e88: movzx edx, word ptr [ebx + 0x33c] */ r_edx = (u32)R16((u32)(r_ebx+0x33cu));
    /* 00665e8f: movzx esi, word ptr [ebx + 0x60] */ r_esi = (u32)R16((u32)(r_ebx+0x60u));
    /* 00665e93: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 00665e99: mov dword ptr [ebx + 0x60], esi */ W32((u32)(r_ebx+0x60u), r_esi);
    /* 00665e9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665e9d: je 0x665ec1 */ if (fZ) goto L_00665ec1;
L_00665e9f:; BB(0x00665e9f);
    /* 00665e9f: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00665ea3: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x665ea8u); f_0082df08();
    /* 00665ea8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665eaa: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00665eae: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00665eb2: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00665eb6: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00665eb9: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00665ebc: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 00665ebf: jmp 0x665ed6 */ goto L_00665ed6;
L_00665ec1:; BB(0x00665ec1);
    /* 00665ec1: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00665ec4: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00665ec7: mov esi, dword ptr [ebx + 0x4c] */ r_esi = R32((u32)(r_ebx+0x4cu));
    /* 00665eca: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00665ece: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00665ed2: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_00665ed6:; BB(0x00665ed6);
    /* 00665ed6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00665edb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x665ee0u); f_0082d990();
    /* 00665ee0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665ee2: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 00665ee7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x665eecu); f_0082d8bc();
    /* 00665eec: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00665ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00665ef1: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00665ef5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00665ef7: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x665efcu); f_00830aa0();
    /* 00665efc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00665f01: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x665f06u); f_0082eb80();
    /* 00665f06: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00665f0b: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00665f11: mov esi, dword ptr [0xaf0374] */ r_esi = R32((u32)(0xaf0374u));
    /* 00665f17: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00665f1c: or eax, 0x821 */ {  u32 a = r_eax; u32 b = 0x821u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665f21: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00665f27: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00665f2d: mov dword ptr [0xaab50c], esi */ W32((u32)(0xaab50cu), r_esi);
    /* 00665f33: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00665f39: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00665f3f: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00665f45: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00665f4b: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00665f51: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00665f57: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00665f5d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00665f62: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00665f67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00665f69: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x665f6eu); f_0082d6fc();
    /* 00665f6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00665f71: fld dword ptr [0x9396b4] */ FPUSH(R_F32((u32)(0x9396b4u)));
    /* 00665f77: fld dword ptr [0x9396b0] */ FPUSH(R_F32((u32)(0x9396b0u)));
    /* 00665f7d: fld dword ptr [0x9396b8] */ FPUSH(R_F32((u32)(0x9396b8u)));
    /* 00665f83: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00665f87: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00665f89: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00665f8b: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00665f8f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00665f94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665f99: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00665f9d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00665fa1: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00665fa5: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00665fa9: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00665fad: fcom dword ptr [0x9396bc] */ fx_compare(ST(0), R_F32((u32)(0x9396bcu))); 
    /* 00665fb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00665fb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00665fb6: je 0x6662cd */ if (fZ) goto L_006662cd;
L_00665fbc:; BB(0x00665fbc);
    /* 00665fbc: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00665fbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00665fc0: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00665fc4: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00665fc9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00665fce: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00665fd2: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00665fd6: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00665fda: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00665fde: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00665fe2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665fe3: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665fe6: push dword ptr [ebx + 0x33c] */ { u32 v = R32((u32)(r_ebx+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00665fec: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x665ff1u); f_007a8c74();
    /* 00665ff1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00665ff2: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00665ff5: push dword ptr [ebx + 0x340] */ { u32 v = R32((u32)(r_ebx+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 00665ffb: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
    /* 00666001: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x666006u); f_007a8c74();
    /* 00666006: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666009: fld dword ptr [0x9396b4] */ FPUSH(R_F32((u32)(0x9396b4u)));
    /* 0066600f: fld dword ptr [0x9396b0] */ FPUSH(R_F32((u32)(0x9396b0u)));
    /* 00666015: mov dword ptr [ebx + 0x340], eax */ W32((u32)(r_ebx+0x340u), r_eax);
L_0066601b:; BB(0x0066601b);
    /* 0066601b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0066601f: fmul dword ptr [0x9396ac] */ ST(0) = ST(0) * R_F32((u32)(0x9396acu));
    /* 00666025: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00666027: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00666029: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066602b: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0066602f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00666034: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00666039: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0066603d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00666041: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00666045: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00666049: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0066604d: add dword ptr [ebx + 0x5c], eax */ { u32 ad = (u32)(r_ebx+0x5cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00666050: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x666055u); f_0082d990();
    /* 00666055: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00666059: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066605b: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x666060u); f_008316b4();
    /* 00666060: fld dword ptr [0xa8fbbc] */ FPUSH(R_F32((u32)(0xa8fbbcu)));
    /* 00666066: fmul dword ptr [0x9396a8] */ ST(0) = ST(0) * R_F32((u32)(0x9396a8u));
    /* 0066606c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066606f: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00666072: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00666076: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0066607a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066607c: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x666081u); f_0082fa0c();
    /* 00666081: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00666084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666085: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x66608au); f_0082d710();
    /* 0066608a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066608b: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0066608f: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x666094u); f_0082def4();
    /* 00666094: fcomp dword ptr [0x9396bc] */ fx_compare(ST(0), R_F32((u32)(0x9396bcu))); FPOP();
    /* 0066609a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066609c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066609d: je 0x6660b0 */ if (fZ) goto L_006660b0;
L_0066609f:; BB(0x0066609f);
    /* 0066609f: push dword ptr [ebx + 0x340] */ { u32 v = R32((u32)(r_ebx+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 006660a5: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 006660a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006660ab: call 0x83cdb0 */ r_esp -= 4; W32(r_esp, 0x6660b0u); f_0083cdb0();
L_006660b0:; BB(0x006660b0);
    /* 006660b0: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006660b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006660b8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6660bdu); f_0082d8bc();
    /* 006660bd: mov eax, 0xa8fc20 */ r_eax = 0xa8fc20u;
    /* 006660c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660c4: je 0x6661d3 */ if (fZ) goto L_006661d3;
L_006660ca:; BB(0x006660ca);
    /* 006660ca: mov eax, dword ptr [0xa8fc1c] */ r_eax = R32((u32)(0xa8fc1cu));
    /* 006660cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660d1: je 0x6661d3 */ if (fZ) goto L_006661d3;
L_006660d7:; BB(0x006660d7);
    /* 006660d7: movzx eax, word ptr [0xa8fbe8] */ r_eax = (u32)R16((u32)(0xa8fbe8u));
    /* 006660de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660e0: je 0x666286 */ if (fZ) goto L_00666286;
L_006660e6:; BB(0x006660e6);
    /* 006660e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660e9: je 0x66623f */ if (fZ) goto L_0066623f;
L_006660ef:; BB(0x006660ef);
    /* 006660ef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660f2: je 0x666191 */ if (fZ) goto L_00666191;
L_006660f8:; BB(0x006660f8);
    /* 006660f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006660fb: jne 0x666144 */ if (!fZ) goto L_00666144;
L_006660fd:; BB(0x006660fd);
    /* 006660fd: mov ecx, dword ptr [0xa8fc2c] */ r_ecx = R32((u32)(0xa8fc2cu));
    /* 00666103: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x666108u); f_00829cc8();
    /* 00666108: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x66610du); f_007a954c();
    /* 0066610d: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666113: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666115: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66611au); f_005b8610();
    /* 0066611a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066611b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666120u); f_0082e1e8();
    /* 00666120: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666121: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x666126u); f_007a9558();
    /* 00666126: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066612c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066612e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666133u); f_005b8610();
    /* 00666133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666134: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666139u); f_0082e1e8();
    /* 00666139: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066613a: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x66613fu); f_007a9564();
    /* 0066613f: jmp 0x6661d3 */ goto L_006661d3;
L_00666144:; BB(0x00666144);
    /* 00666144: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666147: jne 0x6661d3 */ if (!fZ) goto L_006661d3;
L_0066614d:; BB(0x0066614d);
    /* 0066614d: mov ecx, dword ptr [0xa8fc38] */ r_ecx = R32((u32)(0xa8fc38u));
    /* 00666153: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x666158u); f_00829cc8();
    /* 00666158: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x66615du); f_007a954c();
    /* 0066615d: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666163: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00666165: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66616au); f_005b8610();
    /* 0066616a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066616b: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666170u); f_0082e1e8();
    /* 00666170: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666171: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x666176u); f_007a9558();
    /* 00666176: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066617c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066617e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666183u); f_005b8610();
    /* 00666183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666184: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666189u); f_0082e1e8();
    /* 00666189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066618a: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x66618fu); f_007a9564();
    /* 0066618f: jmp 0x6661d3 */ goto L_006661d3;
L_00666191:; BB(0x00666191);
    /* 00666191: mov ecx, dword ptr [0xa8fc28] */ r_ecx = R32((u32)(0xa8fc28u));
    /* 00666197: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66619cu); f_00829cc8();
    /* 0066619c: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x6661a1u); f_007a954c();
    /* 006661a1: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 006661a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661a9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6661aeu); f_005b8610();
    /* 006661ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006661af: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6661b4u); f_0082e1e8();
    /* 006661b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661b5: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x6661bau); f_007a9558();
    /* 006661ba: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 006661c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661c2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6661c7u); f_005b8610();
    /* 006661c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006661c8: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6661cdu); f_0082e1e8();
    /* 006661cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661ce: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x6661d3u); f_007a9564();
L_006661d3:; BB(0x006661d3);
    /* 006661d3: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006661d8: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6661ddu); f_0082d710();
    /* 006661dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006661de: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006661e3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6661e8u); f_0082eb80();
    /* 006661e8: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 006661ed: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 006661f3: mov esi, dword ptr [0xaab508] */ r_esi = R32((u32)(0xaab508u));
    /* 006661f9: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 006661fe: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 00666203: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00666209: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066620b: mov dword ptr [0xaf0370], esi */ W32((u32)(0xaf0370u), r_esi);
    /* 00666211: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 00666216: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 0066621b: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00666220: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00666225: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0066622a: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0066622f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00666234: call 0x6662d4 */ r_esp -= 4; W32(r_esp, 0x666239u); f_006662d4();
    /* 00666239: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066623c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066623d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066623e: ret  */ FN_RET(0x00665e00); r_esp += 4; return;
L_0066623f:; BB(0x0066623f);
    /* 0066623f: mov ecx, dword ptr [0xa8fc24] */ r_ecx = R32((u32)(0xa8fc24u));
    /* 00666245: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66624au); f_00829cc8();
    /* 0066624a: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x66624fu); f_007a954c();
    /* 0066624f: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 00666255: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666257: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66625cu); f_005b8610();
    /* 0066625c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066625d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x666262u); f_0082e1e8();
    /* 00666262: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666263: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x666268u); f_007a9558();
    /* 00666268: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066626e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00666270: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x666275u); f_005b8610();
    /* 00666275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666276: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x66627bu); f_0082e1e8();
    /* 0066627b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066627c: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x666281u); f_007a9564();
    /* 00666281: jmp 0x6661d3 */ goto L_006661d3;
L_00666286:; BB(0x00666286);
    /* 00666286: mov ecx, dword ptr [0xa8fc20] */ r_ecx = R32((u32)(0xa8fc20u));
    /* 0066628c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x666291u); f_00829cc8();
    /* 00666291: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x666296u); f_007a954c();
    /* 00666296: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066629c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066629e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6662a3u); f_005b8610();
    /* 006662a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006662a4: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6662a9u); f_0082e1e8();
    /* 006662a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006662aa: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x6662afu); f_007a9558();
    /* 006662af: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 006662b5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006662b7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6662bcu); f_005b8610();
    /* 006662bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006662bd: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6662c2u); f_0082e1e8();
    /* 006662c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006662c3: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x6662c8u); f_007a9564();
    /* 006662c8: jmp 0x6661d3 */ goto L_006661d3;
L_006662cd:; BB(0x006662cd);
    /* 006662cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006662cf: jmp 0x66601b */ goto L_0066601b;
}

