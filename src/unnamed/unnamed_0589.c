#include "protos.h"

void f_00589040(void) /* sub_589040 */
{
    FN_ENTER(0x00589040);
    /* 00589040: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589043: mov eax, ecx */ r_eax = r_ecx;
    /* 00589045: mov edx, dword ptr [eax + 0x418] */ r_edx = R32((u32)(r_eax+0x418u));
    /* 0058904b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058904d: jle 0x589092 */ if ((fZ||fS!=fO)) goto L_00589092;
L_0058904f:; BB(0x0058904f);
    /* 0058904f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00589053: mov ebx, eax */ r_ebx = r_eax;
    /* 00589055: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00589058: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058905a: mov esi, edx */ r_esi = r_edx;
L_0058905c:; BB(0x0058905c);
    /* 0058905c: movzx eax, word ptr [ebx + esi*2 + 0x420] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*2+0x420u));
    /* 00589064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589065: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x58906au); f_007b4d18();
    /* 0058906a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058906b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058906d: je 0x58907b */ if (fZ) goto L_0058907b;
L_0058906f:; BB(0x0058906f);
    /* 0058906f: mov ecx, eax */ r_ecx = r_eax;
    /* 00589071: call 0x58c1f0 */ r_esp -= 4; W32(r_esp, 0x589076u); f_0058c1f0();
    /* 00589076: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589079: je 0x5890b5 */ if (fZ) goto L_005890b5;
L_0058907b:; BB(0x0058907b);
    /* 0058907b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058907e: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589081: jl 0x58905c */ if ((fS!=fO)) goto L_0058905c;
L_00589083:; BB(0x00589083);
    /* 00589083: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00589086: mov eax, ebx */ r_eax = r_ebx;
    /* 00589088: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0058908c: mov edx, dword ptr [eax + 0x418] */ r_edx = R32((u32)(r_eax+0x418u));
L_00589092:; BB(0x00589092);
    /* 00589092: cmp edx, dword ptr [eax + 0x400] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x400u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589098: jge 0x5890ac */ if ((fS==fO)) goto L_005890ac;
L_0058909a:; BB(0x0058909a);
    /* 0058909a: mov edx, dword ptr [eax + 0x41c] */ r_edx = R32((u32)(r_eax+0x41cu));
    /* 005890a0: cmp edx, dword ptr [eax + 0x3fc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3fcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005890a6: jge 0x5890ac */ if ((fS==fO)) goto L_005890ac;
L_005890a8:; BB(0x005890a8);
    /* 005890a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005890aa: jmp 0x5890b1 */ goto L_005890b1;
L_005890ac:; BB(0x005890ac);
    /* 005890ac: mov eax, 1 */ r_eax = 0x1u;
L_005890b1:; BB(0x005890b1);
    /* 005890b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005890b4: ret  */ FN_RET(0x00589040); r_esp += 4; return;
L_005890b5:; BB(0x005890b5);
    /* 005890b5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005890b9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005890bc: mov eax, 1 */ r_eax = 0x1u;
    /* 005890c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005890c4: ret  */ FN_RET(0x00589040); r_esp += 4; return;
}

void f_005890c8(void) /* sub_5890C8 */
{
    FN_ENTER(0x005890c8);
    /* 005890c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005890c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005890cb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005890cf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005890d2: je 0x589113 */ if (fZ) goto L_00589113;
L_005890d4:; BB(0x005890d4);
    /* 005890d4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005890d7: je 0x5890e8 */ if (fZ) goto L_005890e8;
L_005890d9:; BB(0x005890d9);
    /* 005890d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005890db: jne 0x58910f */ if (!fZ) goto L_0058910f;
L_005890dd:; BB(0x005890dd);
    /* 005890dd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005890df: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5890e4u); f_007aa094();
    /* 005890e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005890e5: ret 4 */ FN_RET(0x005890c8); r_esp += 8; return;
L_005890e8:; BB(0x005890e8);
    /* 005890e8: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 005890ee: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005890f0: je 0x58910f */ if (fZ) goto L_0058910f;
L_005890f2:; BB(0x005890f2);
    /* 005890f2: mov dword ptr [ebp + 0x4e0], 0 */ W32((u32)(r_ebp+0x4e0u), 0x0u);
    /* 005890fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005890fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00589100: mov dword ptr [ebp + 0x4e4], 0x1e */ W32((u32)(r_ebp+0x4e4u), 0x1eu);
    /* 0058910a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58910fu); f_0051f62c();
L_0058910f:; BB(0x0058910f);
    /* 0058910f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589110: ret 4 */ FN_RET(0x005890c8); r_esp += 8; return;
L_00589113:; BB(0x00589113);
    /* 00589113: mov eax, dword ptr [ebp + 0x414] */ r_eax = R32((u32)(r_ebp+0x414u));
    /* 00589119: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058911c: mov dword ptr [ebp + 0x414], eax */ W32((u32)(r_ebp+0x414u), r_eax);
    /* 00589122: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00589125: mov edx, 1 */ r_edx = 0x1u;
    /* 0058912a: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00589131: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00589133: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x589139u); call_ind(t); }
    /* 00589139: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0058913b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058913d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x589142u); f_0051f664();
    /* 00589142: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589143: ret 4 */ FN_RET(0x005890c8); r_esp += 8; return;
}

void f_00589148(void) /* sub_589148 */
{
    FN_ENTER(0x00589148);
    /* 00589148: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00589149: mov edi, ecx */ r_edi = r_ecx;
    /* 0058914b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058914f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589152: je 0x589193 */ if (fZ) goto L_00589193;
L_00589154:; BB(0x00589154);
    /* 00589154: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589157: je 0x589168 */ if (fZ) goto L_00589168;
L_00589159:; BB(0x00589159);
    /* 00589159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058915b: jne 0x58918f */ if (!fZ) goto L_0058918f;
L_0058915d:; BB(0x0058915d);
    /* 0058915d: mov ecx, edi */ r_ecx = r_edi;
    /* 0058915f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x589164u); f_007aa094();
    /* 00589164: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589165: ret 4 */ FN_RET(0x00589148); r_esp += 8; return;
L_00589168:; BB(0x00589168);
    /* 00589168: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058916d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0058916f: mov ecx, edi */ r_ecx = r_edi;
    /* 00589171: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x589177u); call_ind(t); }
    /* 00589177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589179: je 0x58918f */ if (fZ) goto L_0058918f;
L_0058917b:; BB(0x0058917b);
    /* 0058917b: mov ecx, edi */ r_ecx = r_edi;
    /* 0058917d: call 0x5891c4 */ r_esp -= 4; W32(r_esp, 0x589182u); f_005891c4();
    /* 00589182: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589184: je 0x58918f */ if (fZ) goto L_0058918f;
L_00589186:; BB(0x00589186);
    /* 00589186: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00589188: mov ecx, edi */ r_ecx = r_edi;
    /* 0058918a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58918fu); f_0051f62c();
L_0058918f:; BB(0x0058918f);
    /* 0058918f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589190: ret 4 */ FN_RET(0x00589148); r_esp += 8; return;
L_00589193:; BB(0x00589193);
    /* 00589193: mov eax, dword ptr [edi + 0x414] */ r_eax = R32((u32)(r_edi+0x414u));
    /* 00589199: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058919c: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 005891a2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005891a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005891a6: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005891ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005891af: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5891b5u); call_ind(t); }
    /* 005891b5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005891b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005891b9: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5891beu); f_0051f664();
    /* 005891be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005891bf: ret 4 */ FN_RET(0x00589148); r_esp += 8; return;
}

void f_005891c4(void) /* sub_5891C4 */
{
    FN_ENTER(0x005891c4);
    /* 005891c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005891c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005891c6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005891c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005891cb: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 005891d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005891d3: jle 0x589200 */ if ((fZ||fS!=fO)) goto L_00589200;
L_005891d5:; BB(0x005891d5);
    /* 005891d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005891d7: mov esi, eax */ r_esi = r_eax;
L_005891d9:; BB(0x005891d9);
    /* 005891d9: movzx edx, word ptr [ebx + esi*2 + 0x420] */ r_edx = (u32)R16((u32)(r_ebx+r_esi*2+0x420u));
    /* 005891e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005891e2: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5891e7u); f_007b4d18();
    /* 005891e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005891e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005891ea: je 0x5891f8 */ if (fZ) goto L_005891f8;
L_005891ec:; BB(0x005891ec);
    /* 005891ec: mov ecx, eax */ r_ecx = r_eax;
    /* 005891ee: call 0x58c1f0 */ r_esp -= 4; W32(r_esp, 0x5891f3u); f_0058c1f0();
    /* 005891f3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005891f6: je 0x58925d */ if (fZ) goto L_0058925d;
L_005891f8:; BB(0x005891f8);
    /* 005891f8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005891fb: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005891fe: jl 0x5891d9 */ if ((fS!=fO)) goto L_005891d9;
L_00589200:; BB(0x00589200);
    /* 00589200: fild dword ptr [ebx + 0x400] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x400u)));
    /* 00589206: fdiv dword ptr [0x928624] */ ST(0) = ST(0) / R_F32((u32)(0x928624u));
    /* 0058920c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058920d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00589210: call 0x83c230 */ r_esp -= 4; W32(r_esp, 0x589215u); f_0083c230();
    /* 00589215: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00589218: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0058921c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00589221: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00589225: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00589229: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0058922d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00589230: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00589234: cmp eax, dword ptr [ebx + 0x418] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x418u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058923a: jl 0x589255 */ if ((fS!=fO)) goto L_00589255;
L_0058923c:; BB(0x0058923c);
    /* 0058923c: mov eax, dword ptr [ebx + 0x41c] */ r_eax = R32((u32)(r_ebx+0x41cu));
    /* 00589242: cmp eax, dword ptr [ebx + 0x3fc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x3fcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589248: jge 0x589255 */ if ((fS==fO)) goto L_00589255;
L_0058924a:; BB(0x0058924a);
    /* 0058924a: mov eax, 1 */ r_eax = 0x1u;
    /* 0058924f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589252: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589253: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589254: ret  */ FN_RET(0x005891c4); r_esp += 4; return;
L_00589255:; BB(0x00589255);
    /* 00589255: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00589257: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058925a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058925b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058925c: ret  */ FN_RET(0x005891c4); r_esp += 4; return;
L_0058925d:; BB(0x0058925d);
    /* 0058925d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058925f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589262: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589263: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589264: ret  */ FN_RET(0x005891c4); r_esp += 4; return;
}

void f_00589268(void) /* sub_589268 */
{
    FN_ENTER(0x00589268);
    /* 00589268: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00589269: mov edi, ecx */ r_edi = r_ecx;
    /* 0058926b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058926f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589272: je 0x5892a8 */ if (fZ) goto L_005892a8;
L_00589274:; BB(0x00589274);
    /* 00589274: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589277: je 0x589288 */ if (fZ) goto L_00589288;
L_00589279:; BB(0x00589279);
    /* 00589279: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058927b: jne 0x5892a4 */ if (!fZ) goto L_005892a4;
L_0058927d:; BB(0x0058927d);
    /* 0058927d: mov ecx, edi */ r_ecx = r_edi;
    /* 0058927f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x589284u); f_007aa094();
    /* 00589284: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589285: ret 4 */ FN_RET(0x00589268); r_esp += 8; return;
L_00589288:; BB(0x00589288);
    /* 00589288: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0058928e: lea ecx, [edi + 0x3c8] */ r_ecx = (u32)(r_edi+0x3c8u);
    /* 00589294: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x589297u); call_ind(t); }
    /* 00589297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589299: je 0x5892a4 */ if (fZ) goto L_005892a4;
L_0058929b:; BB(0x0058929b);
    /* 0058929b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058929d: mov ecx, edi */ r_ecx = r_edi;
    /* 0058929f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5892a4u); f_0051f62c();
L_005892a4:; BB(0x005892a4);
    /* 005892a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005892a5: ret 4 */ FN_RET(0x00589268); r_esp += 8; return;
L_005892a8:; BB(0x005892a8);
    /* 005892a8: mov eax, dword ptr [edi + 0x414] */ r_eax = R32((u32)(r_edi+0x414u));
    /* 005892ae: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005892b1: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 005892b7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005892b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005892bb: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005892c2: mov ecx, edi */ r_ecx = r_edi;
    /* 005892c4: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5892cau); call_ind(t); }
    /* 005892ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005892cc: mov ecx, edi */ r_ecx = r_edi;
    /* 005892ce: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5892d3u); f_0051f664();
    /* 005892d3: add edi, 0x3c8 */ {  u32 a = r_edi; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005892d9: mov ecx, edi */ r_ecx = r_edi;
    /* 005892db: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5892e0u); f_00576c48();
    /* 005892e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005892e1: ret 4 */ FN_RET(0x00589268); r_esp += 8; return;
}

void f_005892e4(void) /* sub_5892E4 */
{
    FN_ENTER(0x005892e4);
    /* 005892e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005892e5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005892e8: mov esi, ecx */ r_esi = r_ecx;
    /* 005892ea: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005892f0: fld dword ptr [esi + 0x304] */ FPUSH(R_F32((u32)(r_esi+0x304u)));
    /* 005892f6: fld dword ptr [0x928620] */ FPUSH(R_F32((u32)(0x928620u)));
    /* 005892fc: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 00589302: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00589305: mov eax, dword ptr [esi + 0x3e4] */ r_eax = R32((u32)(r_esi+0x3e4u));
    /* 0058930b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058930e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00589312: je 0x589369 */ if (fZ) goto L_00589369;
L_00589314:; BB(0x00589314);
    /* 00589314: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00589316: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_0058931a:; BB(0x0058931a);
    /* 0058931a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0058931d: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0058931f: lea eax, [esi + 0x128] */ r_eax = (u32)(r_esi+0x128u);
    /* 00589325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589326: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589327: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x58932cu); f_007806dc();
    /* 0058932c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058932f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589331: je 0x58934a */ if (fZ) goto L_0058934a;
L_00589333:; BB(0x00589333);
    /* 00589333: fld dword ptr [0x92861c] */ FPUSH(R_F32((u32)(0x92861cu)));
    /* 00589339: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0058933c: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 0058933f: fcomp dword ptr [esi + 0x304] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x304u))); FPOP();
    /* 00589345: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00589347: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00589348: ja 0x589354 */ if ((!fC&&!fZ)) goto L_00589354;
L_0058934a:; BB(0x0058934a);
    /* 0058934a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058934c: mov ecx, esi */ r_ecx = r_esi;
    /* 0058934e: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x589354u); call_ind(t); }
L_00589354:; BB(0x00589354);
    /* 00589354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589356: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0058935c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058935d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058935f: call 0x520068 */ r_esp -= 4; W32(r_esp, 0x589364u); f_00520068();
    /* 00589364: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589367: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589368: ret  */ FN_RET(0x005892e4); r_esp += 4; return;
L_00589369:; BB(0x00589369);
    /* 00589369: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0058936b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058936f: jmp 0x58931a */ goto L_0058931a;
}

void f_00589374(void) /* sub_589374 */
{
    FN_ENTER(0x00589374);
    /* 00589374: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589377: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 0058937d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058937f: jle 0x58942d */ if ((fZ||fS!=fO)) goto L_0058942d;
L_00589385:; BB(0x00589385);
    /* 00589385: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589388: jl 0x589396 */ if ((fS!=fO)) goto L_00589396;
L_0058938a:; BB(0x0058938a);
    /* 0058938a: mov dword ptr [ecx + 0x3e4], 2 */ W32((u32)(r_ecx+0x3e4u), 0x2u);
    /* 00589394: jmp 0x58939c */ goto L_0058939c;
L_00589396:; BB(0x00589396);
    /* 00589396: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
L_0058939c:; BB(0x0058939c);
    /* 0058939c: fld dword ptr [0x928618] */ FPUSH(R_F32((u32)(0x928618u)));
    /* 005893a2: mov eax, dword ptr [ecx + 0x35c] */ r_eax = R32((u32)(r_ecx+0x35cu));
    /* 005893a8: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 005893ae: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 005893b4: mov dword ptr [ecx + 0x4d8], eax */ W32((u32)(r_ecx+0x4d8u), r_eax);
    /* 005893ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005893bc: fchs  */ ST(0) = -ST(0);
    /* 005893be: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005893c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005893c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005893c3: jb 0x5893c7 */ if (fC) goto L_005893c7;
L_005893c5:; BB(0x005893c5);
    /* 005893c5: fst st(1) */ ST(1) = ST(0);
L_005893c7:; BB(0x005893c7);
    /* 005893c7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005893c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005893cb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005893ce: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005893d2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005893d7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005893db: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005893df: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005893e3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005893e6: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005893ea: fstp dword ptr [ecx + 0x4dc] */ W_F32((u32)(r_ecx+0x4dcu), ST(0)); FPOP();
    /* 005893f0: mov eax, 6 */ r_eax = 0x6u;
    /* 005893f5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005893f8: jl 0x5893fc */ if ((fS!=fO)) goto L_005893fc;
L_005893fa:; BB(0x005893fa);
    /* 005893fa: mov edx, eax */ r_edx = r_eax;
L_005893fc:; BB(0x005893fc);
    /* 005893fc: mov eax, 0 */ r_eax = 0x0u;
    /* 00589401: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00589403: jg 0x589407 */ if ((!fZ&&fS==fO)) goto L_00589407;
L_00589405:; BB(0x00589405);
    /* 00589405: mov edx, eax */ r_edx = r_eax;
L_00589407:; BB(0x00589407);
    /* 00589407: mov dword ptr [ecx + 0x400], edx */ W32((u32)(r_ecx+0x400u), r_edx);
    /* 0058940d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058940f: jne 0x58941f */ if (!fZ) goto L_0058941f;
L_00589411:; BB(0x00589411);
    /* 00589411: mov dword ptr [ecx + 0x3fc], 0 */ W32((u32)(r_ecx+0x3fcu), 0x0u);
    /* 0058941b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058941e: ret  */ FN_RET(0x00589374); r_esp += 4; return;
L_0058941f:; BB(0x0058941f);
    /* 0058941f: mov dword ptr [ecx + 0x3fc], 0x1e */ W32((u32)(r_ecx+0x3fcu), 0x1eu);
    /* 00589429: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058942c: ret  */ FN_RET(0x00589374); r_esp += 4; return;
L_0058942d:; BB(0x0058942d);
    /* 0058942d: mov dword ptr [ecx + 0x3e4], 0 */ W32((u32)(r_ecx+0x3e4u), 0x0u);
    /* 00589437: jmp 0x58939c */ goto L_0058939c;
}

void f_0058943c(void) /* sub_58943C */
{
    FN_ENTER(0x0058943c);
    /* 0058943c: mov eax, dword ptr [0xa743b8] */ r_eax = R32((u32)(0xa743b8u));
    /* 00589441: ret  */ FN_RET(0x0058943c); r_esp += 4; return;
}

void f_00589444(void) /* sub_589444 */
{
    FN_ENTER(0x00589444);
    /* 00589444: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00589445: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00589447: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x58944cu); f_004f7c84();
    /* 0058944c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058944e: je 0x58945c */ if (fZ) goto L_0058945c;
L_00589450:; BB(0x00589450);
    /* 00589450: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00589452: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00589454: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x58945au); call_ind(t); }
    /* 0058945a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058945b: ret  */ FN_RET(0x00589444); r_esp += 4; return;
L_0058945c:; BB(0x0058945c);
    /* 0058945c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058945e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00589460: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x589466u); call_ind(t); }
    /* 00589466: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589469: je 0x589477 */ if (fZ) goto L_00589477;
L_0058946b:; BB(0x0058946b);
    /* 0058946b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058946d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058946f: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x589475u); call_ind(t); }
    /* 00589475: jmp 0x589483 */ goto L_00589483;
L_00589477:; BB(0x00589477);
    /* 00589477: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0058947e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589481: je 0x5894ae */ if (fZ) goto L_005894ae;
L_00589483:; BB(0x00589483);
    /* 00589483: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00589485: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00589487: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x58948du); call_ind(t); }
    /* 0058948d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058948f: call 0x590294 */ r_esp -= 4; W32(r_esp, 0x589494u); f_00590294();
    /* 00589494: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00589496: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x58949bu); f_006401f0();
    /* 0058949b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058949d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058949f: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x5894a5u); call_ind(t); }
    /* 005894a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005894a7: call 0x5894bc */ r_esp -= 4; W32(r_esp, 0x5894acu); f_005894bc();
    /* 005894ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005894ad: ret  */ FN_RET(0x00589444); r_esp += 4; return;
L_005894ae:; BB(0x005894ae);
    /* 005894ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005894b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005894b2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5894b7u); f_0051f62c();
    /* 005894b7: jmp 0x589483 */ goto L_00589483;
}

void f_005894bc(void) /* sub_5894BC */
{
    FN_ENTER(0x005894bc);
    /* 005894bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005894bd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005894c0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005894c2: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 005894c8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005894cd: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005894cf: mov eax, ecx */ r_eax = r_ecx;
    /* 005894d1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005894d4: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005894d6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005894d8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005894db: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005894dd: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005894df: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005894e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005894e3: je 0x5894ed */ if (fZ) goto L_005894ed;
L_005894e5:; BB(0x005894e5);
    /* 005894e5: mov edx, dword ptr [ebx + 0x3e8] */ r_edx = R32((u32)(r_ebx+0x3e8u));
    /* 005894eb: jmp 0x589554 */ goto L_00589554;
L_005894ed:; BB(0x005894ed);
    /* 005894ed: fld dword ptr [0x928614] */ FPUSH(R_F32((u32)(0x928614u)));
    /* 005894f3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005894f6: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005894f9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005894fc: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005894ff: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00589503: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00589507: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058950b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058950f: lea eax, [ebx + 0x128] */ r_eax = (u32)(r_ebx+0x128u);
    /* 00589515: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00589518: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058951d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058951e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058951f: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x589524u); f_007806dc();
    /* 00589524: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589527: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589529: je 0x589568 */ if (fZ) goto L_00589568;
L_0058952b:; BB(0x0058952b);
    /* 0058952b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0058952e: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 00589531: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
    /* 00589537: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0058953a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0058953c: mov dword ptr [ebx + 0x3ec], ecx */ W32((u32)(r_ebx+0x3ecu), r_ecx);
    /* 00589542: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00589545: mov dword ptr [ebx + 0x3f0], ecx */ W32((u32)(r_ebx+0x3f0u), r_ecx);
    /* 0058954b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0058954e: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
L_00589554:; BB(0x00589554);
    /* 00589554: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058955a: je 0x589563 */ if (fZ) goto L_00589563;
L_0058955c:; BB(0x0058955c);
    /* 0058955c: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_00589563:; BB(0x00589563);
    /* 00589563: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589566: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589567: ret  */ FN_RET(0x005894bc); r_esp += 4; return;
L_00589568:; BB(0x00589568);
    /* 00589568: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0058956b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0058956e: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
    /* 00589574: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00589577: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 0058957d: mov edx, dword ptr [ebx + 0x3e8] */ r_edx = R32((u32)(r_ebx+0x3e8u));
    /* 00589583: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
    /* 00589589: jmp 0x589554 */ goto L_00589554;
}

void f_0058958c(void) /* sub_58958C */
{
    FN_ENTER(0x0058958c);
    /* 0058958c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058958d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058958e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058958f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00589590: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00589591: mov esi, ecx */ r_esi = r_ecx;
    /* 00589593: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x589598u); f_004f7c84();
    /* 00589598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058959a: je 0x5895ac */ if (fZ) goto L_005895ac;
L_0058959c:; BB(0x0058959c);
    /* 0058959c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058959e: mov ecx, esi */ r_ecx = r_esi;
    /* 005895a0: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5895a6u); call_ind(t); }
L_005895a6:; BB(0x005895a6);
    /* 005895a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005895a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005895a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005895a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005895aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005895ab: ret  */ FN_RET(0x0058958c); r_esp += 4; return;
L_005895ac:; BB(0x005895ac);
    /* 005895ac: mov eax, dword ptr [esi + 0x414] */ r_eax = R32((u32)(r_esi+0x414u));
    /* 005895b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005895b4: jne 0x58978e */ if (!fZ) goto L_0058978e;
L_005895ba:; BB(0x005895ba);
    /* 005895ba: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x5895bfu); f_00694cc8();
    /* 005895bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005895c1: je 0x589602 */ if (fZ) goto L_00589602;
L_005895c3:; BB(0x005895c3);
    /* 005895c3: fld dword ptr [0x928604] */ FPUSH(R_F32((u32)(0x928604u)));
    /* 005895c9: fadd dword ptr [0xa72eb0] */ ST(0) = ST(0) + R_F32((u32)(0xa72eb0u));
    /* 005895cf: fld dword ptr [0x928608] */ FPUSH(R_F32((u32)(0x928608u)));
    /* 005895d5: fadd dword ptr [0x921684] */ ST(0) = ST(0) + R_F32((u32)(0x921684u));
    /* 005895db: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005895dd: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005895e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005895e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005895e5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005895e9: mov dword ptr [esp + 8], 0x42f00000 */ W32((u32)(r_esp+0x8u), 0x42f00000u);
    /* 005895f1: mov ecx, esi */ r_ecx = r_esi;
    /* 005895f3: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5895f6u); call_ind(t); }
    /* 005895f6: mov ebp, eax */ r_ebp = r_eax;
    /* 005895f8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005895fa: je 0x58978e */ if (fZ) goto L_0058978e;
L_00589600:; BB(0x00589600);
    /* 00589600: jmp 0x589620 */ goto L_00589620;
L_00589602:; BB(0x00589602);
    /* 00589602: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00589607: mov ecx, esi */ r_ecx = r_esi;
    /* 00589609: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0058960b: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00589610: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x589613u); call_ind(t); }
    /* 00589613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589615: je 0x58978e */ if (fZ) goto L_0058978e;
L_0058961b:; BB(0x0058961b);
    /* 0058961b: mov ebp, 1 */ r_ebp = 0x1u;
L_00589620:; BB(0x00589620);
    /* 00589620: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00589622: mov ecx, esi */ r_ecx = r_esi;
    /* 00589624: call 0x589840 */ r_esp -= 4; W32(r_esp, 0x589629u); f_00589840();
    /* 00589629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058962b: jne 0x5895a6 */ if (!fZ) goto L_005895a6;
L_00589631:; BB(0x00589631);
    /* 00589631: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00589637: mov edi, dword ptr [0xaf0360] */ r_edi = R32((u32)(0xaf0360u));
    /* 0058963d: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00589643: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00589649: mov dword ptr [0xaab504], edi */ W32((u32)(0xaab504u), r_edi);
    /* 0058964f: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00589655: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0058965c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058965f: je 0x5897bb */ if (fZ) goto L_005897bb;
L_00589665:; BB(0x00589665);
    /* 00589665: lea ecx, [esi + 0x468] */ r_ecx = (u32)(r_esi+0x468u);
    /* 0058966b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0058966e: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x589673u); f_005771a4();
    /* 00589673: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00589679: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058967a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0058967e: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x589683u); f_0057725c();
    /* 00589683: mov edi, eax */ r_edi = r_eax;
    /* 00589685: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589687: jne 0x5896cc */ if (!fZ) goto L_005896cc;
L_00589689:; BB(0x00589689);
    /* 00589689: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058968b: je 0x5896cc */ if (fZ) goto L_005896cc;
L_0058968d:; BB(0x0058968d);
    /* 0058968d: mov ecx, esi */ r_ecx = r_esi;
    /* 0058968f: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x589694u); f_008173d0();
    /* 00589694: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589696: je 0x5896c0 */ if (fZ) goto L_005896c0;
L_00589698:; BB(0x00589698);
    /* 00589698: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0058969d: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 005896a3: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 005896a9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005896ae: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 005896b4: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 005896ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005896bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005896bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005896bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005896be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005896bf: ret  */ FN_RET(0x0058958c); r_esp += 4; return;
L_005896c0:; BB(0x005896c0);
    /* 005896c0: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 005896c3: mov edx, dword ptr [esi + 0x468] */ r_edx = R32((u32)(r_esi+0x468u));
    /* 005896c9: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5896ccu); call_ind(t); }
L_005896cc:; BB(0x005896cc);
    /* 005896cc: mov ecx, esi */ r_ecx = r_esi;
    /* 005896ce: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x5896d3u); f_00520608();
    /* 005896d3: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005896d6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5896dbu); f_00829cc8();
    /* 005896db: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5896e0u); f_0082d7b0();
    /* 005896e0: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 005896e3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5896e8u); f_0082d838();
    /* 005896e8: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005896eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005896ed: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5896f2u); f_0082d8bc();
    /* 005896f2: mov edx, dword ptr [esi + 0x3e4] */ r_edx = R32((u32)(r_esi+0x3e4u));
    /* 005896f8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005896fb: jne 0x58970b */ if (!fZ) goto L_0058970b;
L_005896fd:; BB(0x005896fd);
    /* 005896fd: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 00589702: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00589704: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x589709u); f_0082e9e4();
    /* 00589709: jmp 0x58971c */ goto L_0058971c;
L_0058970b:; BB(0x0058970b);
    /* 0058970b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058970e: jne 0x58971c */ if (!fZ) goto L_0058971c;
L_00589710:; BB(0x00589710);
    /* 00589710: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00589712: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 00589717: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x58971cu); f_0082e9e4();
L_0058971c:; BB(0x0058971c);
    /* 0058971c: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x589721u); f_00520d08();
    /* 00589721: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x589726u); f_00578b38();
    /* 00589726: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589729: je 0x5897af */ if (fZ) goto L_005897af;
L_0058972f:; BB(0x0058972f);
    /* 0058972f: mov ecx, esi */ r_ecx = r_esi;
    /* 00589731: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x589736u); f_007aa7b8();
L_00589736:; BB(0x00589736);
    /* 00589736: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x58973bu); f_0082dab0();
    /* 0058973b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x589740u); f_0082da80();
    /* 00589740: mov ecx, esi */ r_ecx = r_esi;
    /* 00589742: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x589747u); f_00520610();
    /* 00589747: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589749: jne 0x58975d */ if (!fZ) goto L_0058975d;
L_0058974b:; BB(0x0058974b);
    /* 0058974b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058974d: je 0x58976c */ if (fZ) goto L_0058976c;
L_0058974f:; BB(0x0058974f);
    /* 0058974f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00589752: mov eax, dword ptr [esi + 0x468] */ r_eax = R32((u32)(r_esi+0x468u));
    /* 00589758: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x58975bu); call_ind(t); }
    /* 0058975b: jmp 0x58976c */ goto L_0058976c;
L_0058975d:; BB(0x0058975d);
    /* 0058975d: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00589763: lea ecx, [esi + 0x3c8] */ r_ecx = (u32)(r_esi+0x3c8u);
    /* 00589769: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x58976cu); call_ind(t); }
L_0058976c:; BB(0x0058976c);
    /* 0058976c: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00589771: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 00589777: mov ebx, dword ptr [0xaab500] */ r_ebx = R32((u32)(0xaab500u));
    /* 0058977d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00589782: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 00589788: mov dword ptr [0xaf0364], ebx */ W32((u32)(0xaf0364u), r_ebx);
L_0058978e:; BB(0x0058978e);
    /* 0058978e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00589791: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00589794: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00589797: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 0058979d: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 005897a3: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 005897a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005897aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005897ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005897ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005897ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005897ae: ret  */ FN_RET(0x0058958c); r_esp += 4; return;
L_005897af:; BB(0x005897af);
    /* 005897af: mov ecx, esi */ r_ecx = r_esi;
    /* 005897b1: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5897b6u); f_007aa668();
    /* 005897b6: jmp 0x589736 */ goto L_00589736;
L_005897bb:; BB(0x005897bb);
    /* 005897bb: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 005897c1: lea edi, [esi + 0x3c8] */ r_edi = (u32)(r_esi+0x3c8u);
    /* 005897c7: mov ecx, edi */ r_ecx = r_edi;
    /* 005897c9: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x5897ccu); call_ind(t); }
    /* 005897cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005897ce: je 0x589818 */ if (fZ) goto L_00589818;
L_005897d0:; BB(0x005897d0);
    /* 005897d0: mov ecx, esi */ r_ecx = r_esi;
    /* 005897d2: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5897d7u); f_008173d0();
    /* 005897d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005897d9: je 0x589803 */ if (fZ) goto L_00589803;
L_005897db:; BB(0x005897db);
    /* 005897db: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005897e0: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 005897e6: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 005897ec: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005897f1: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 005897f7: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 005897fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005897fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005897ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589800: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589801: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589802: ret  */ FN_RET(0x0058958c); r_esp += 4; return;
L_00589803:; BB(0x00589803);
    /* 00589803: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 00589809: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0058980e: mov ecx, edi */ r_ecx = r_edi;
    /* 00589810: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x589813u); call_ind(t); }
    /* 00589813: jmp 0x589665 */ goto L_00589665;
L_00589818:; BB(0x00589818);
    /* 00589818: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0058981d: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 00589823: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 00589829: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0058982e: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 00589834: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0058983a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058983b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058983c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058983d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058983e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058983f: ret  */ FN_RET(0x0058958c); r_esp += 4; return;
}

void f_00589840(void) /* sub_589840 */
{
    FN_ENTER(0x00589840);
    /* 00589840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00589841: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00589843: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 00589848: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058984a: je 0x5898a0 */ if (fZ) goto L_005898a0;
L_0058984c:; BB(0x0058984c);
    /* 0058984c: call 0x505a34 */ r_esp -= 4; W32(r_esp, 0x589851u); f_00505a34();
    /* 00589851: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589853: je 0x589899 */ if (fZ) goto L_00589899;
L_00589855:; BB(0x00589855);
    /* 00589855: lea eax, [ebp + 0x3ec] */ r_eax = (u32)(r_ebp+0x3ecu);
    /* 0058985b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058985c: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x589861u); f_00505a3c();
    /* 00589861: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589862: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589864: je 0x589899 */ if (fZ) goto L_00589899;
L_00589866:; BB(0x00589866);
    /* 00589866: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00589869: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58986eu); f_00829cc8();
    /* 0058986e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x589873u); f_0082d7b0();
    /* 00589873: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00589876: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x58987bu); f_0082d838();
    /* 0058987b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0058987e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00589880: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x589885u); f_0082d8bc();
    /* 00589885: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00589887: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x58988cu); f_007aa668();
    /* 0058988c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x589891u); f_0082da80();
    /* 00589891: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589893: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x589898u); f_00505bf8();
    /* 00589898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00589899:; BB(0x00589899);
    /* 00589899: mov eax, 1 */ r_eax = 0x1u;
    /* 0058989e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058989f: ret  */ FN_RET(0x00589840); r_esp += 4; return;
L_005898a0:; BB(0x005898a0);
    /* 005898a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005898a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005898a3: ret  */ FN_RET(0x00589840); r_esp += 4; return;
}

void f_005898a4(void) /* sub_5898A4 */
{
    FN_ENTER(0x005898a4);
    /* 005898a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005898a5: mov edi, ecx */ r_edi = r_ecx;
    /* 005898a7: mov ecx, edi */ r_ecx = r_edi;
    /* 005898a9: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x5898aeu); f_0051f814();
    /* 005898ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005898b0: je 0x5898b9 */ if (fZ) goto L_005898b9;
L_005898b2:; BB(0x005898b2);
    /* 005898b2: mov ecx, edi */ r_ecx = r_edi;
    /* 005898b4: call 0x589374 */ r_esp -= 4; W32(r_esp, 0x5898b9u); f_00589374();
L_005898b9:; BB(0x005898b9);
    /* 005898b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005898ba: ret  */ FN_RET(0x005898a4); r_esp += 4; return;
}

void f_005898bc(void) /* sub_5898BC */
{
    FN_ENTER(0x005898bc);
    /* 005898bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005898bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005898be: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005898c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005898c2: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x5898c7u); f_0051f814();
    /* 005898c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005898c9: je 0x58997f */ if (fZ) goto L_0058997f;
L_005898cf:; BB(0x005898cf);
    /* 005898cf: mov eax, dword ptr [ebp + 0x3e4] */ r_eax = R32((u32)(r_ebp+0x3e4u));
    /* 005898d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005898d7: je 0x589915 */ if (fZ) goto L_00589915;
L_005898d9:; BB(0x005898d9);
    /* 005898d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005898dc: jne 0x5898f7 */ if (!fZ) goto L_005898f7;
L_005898de:; BB(0x005898de);
    /* 005898de: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005898e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005898e2: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x5898e7u); f_0051f7fc();
    /* 005898e7: push 0x92881c */ { u32 v = 0x92881cu; r_esp -= 4; W32(r_esp, v); }
    /* 005898ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005898ed: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5898f2u); f_0061cdb0();
    /* 005898f2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005898f5: jmp 0x58992c */ goto L_0058992c;
L_005898f7:; BB(0x005898f7);
    /* 005898f7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005898fa: jne 0x58992c */ if (!fZ) goto L_0058992c;
L_005898fc:; BB(0x005898fc);
    /* 005898fc: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005898fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589900: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x589905u); f_0051f7fc();
    /* 00589905: push 0x92882c */ { u32 v = 0x92882cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058990a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058990b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x589910u); f_0061cdb0();
    /* 00589910: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589913: jmp 0x58992c */ goto L_0058992c;
L_00589915:; BB(0x00589915);
    /* 00589915: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00589917: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589919: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x58991eu); f_0051f7fc();
    /* 0058991e: push 0x92880c */ { u32 v = 0x92880cu; r_esp -= 4; W32(r_esp, v); }
    /* 00589923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589924: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x589929u); f_0061cdb0();
    /* 00589929: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058992c:; BB(0x0058992c);
    /* 0058992c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058992e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589930: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x589935u); f_0051f7fc();
    /* 00589935: push 0x928838 */ { u32 v = 0x928838u; r_esp -= 4; W32(r_esp, v); }
    /* 0058993a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058993b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x589940u); f_0061cdb0();
    /* 00589940: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00589942: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589944: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x589949u); f_0051f7fc();
    /* 00589949: push 0x928848 */ { u32 v = 0x928848u; r_esp -= 4; W32(r_esp, v); }
    /* 0058994e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058994f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x589954u); f_0061cdb0();
    /* 00589954: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00589956: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589958: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x58995du); f_0051f7fc();
    /* 0058995d: push 0x928860 */ { u32 v = 0x928860u; r_esp -= 4; W32(r_esp, v); }
    /* 00589962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589963: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x589968u); f_0061cdb0();
    /* 00589968: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058996a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058996c: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x589971u); f_0051f7fc();
    /* 00589971: push 0x928878 */ { u32 v = 0x928878u; r_esp -= 4; W32(r_esp, v); }
    /* 00589976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589977: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x58997cu); f_0061cdb0();
    /* 0058997c: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058997f:; BB(0x0058997f);
    /* 0058997f: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00589984: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00589986: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00589989: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058998e: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x589991u); call_ind(t); }
    /* 00589991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589993: jne 0x58999a */ if (!fZ) goto L_0058999a;
L_00589995:; BB(0x00589995);
    /* 00589995: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00589998: jmp 0x589a02 */ goto L_00589a02;
L_0058999a:; BB(0x0058999a);
    /* 0058999a: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0058999d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5899a2u); f_00829cc8();
    /* 005899a2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5899a7u); f_0082d7b0();
    /* 005899a7: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 005899aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005899ac: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5899b1u); f_0082d838();
    /* 005899b1: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005899b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005899b6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5899bbu); f_0082d8bc();
    /* 005899bb: mov eax, dword ptr [ebp + 0x3e4] */ r_eax = R32((u32)(r_ebp+0x3e4u));
    /* 005899c1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005899c4: jne 0x5899d4 */ if (!fZ) goto L_005899d4;
L_005899c6:; BB(0x005899c6);
    /* 005899c6: mov edx, 0x8000 */ r_edx = 0x8000u;
    /* 005899cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005899cd: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5899d2u); f_0082e9e4();
    /* 005899d2: jmp 0x5899e5 */ goto L_005899e5;
L_005899d4:; BB(0x005899d4);
    /* 005899d4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005899d7: jne 0x5899e5 */ if (!fZ) goto L_005899e5;
L_005899d9:; BB(0x005899d9);
    /* 005899d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005899db: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 005899e0: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5899e5u); f_0082e9e4();
L_005899e5:; BB(0x005899e5);
    /* 005899e5: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x5899eau); f_00520d08();
    /* 005899ea: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5899efu); f_00578b38();
    /* 005899ef: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005899f2: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5899f7u); f_0082e1e8();
    /* 005899f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005899f8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5899fdu); f_0082dab0();
    /* 005899fd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x589a02u); f_0082da80();
L_00589a02:; BB(0x00589a02);
    /* 00589a02: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x589a07u); f_0082d7b0();
    /* 00589a07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00589a09: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x589a0eu); f_0082d838();
    /* 00589a0e: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00589a11: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00589a13: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x589a18u); f_0082d8bc();
    /* 00589a18: push dword ptr [0x9f982c] */ { u32 v = R32((u32)(0x9f982cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00589a1e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x589a23u); f_0082e1e8();
    /* 00589a23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589a24: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x589a29u); f_0082da80();
    /* 00589a29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589a2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589a2b: ret  */ FN_RET(0x005898bc); r_esp += 4; return;
}

void f_00589a2c(void) /* sub_589A2C */
{
    FN_ENTER(0x00589a2c);
    /* 00589a2c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00589a30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589a32: je 0x589aa0 */ if (fZ) goto L_00589aa0;
L_00589a34:; BB(0x00589a34);
    /* 00589a34: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589a37: je 0x589a93 */ if (fZ) goto L_00589a93;
L_00589a39:; BB(0x00589a39);
    /* 00589a39: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589a3c: je 0x589a86 */ if (fZ) goto L_00589a86;
L_00589a3e:; BB(0x00589a3e);
    /* 00589a3e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589a41: je 0x589a79 */ if (fZ) goto L_00589a79;
L_00589a43:; BB(0x00589a43);
    /* 00589a43: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589a46: je 0x589a6c */ if (fZ) goto L_00589a6c;
L_00589a48:; BB(0x00589a48);
    /* 00589a48: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589a4b: jne 0x589a5a */ if (!fZ) goto L_00589a5a;
L_00589a4d:; BB(0x00589a4d);
    /* 00589a4d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589a51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589a52: call 0x588d30 */ r_esp -= 4; W32(r_esp, 0x589a57u); f_00588d30();
    /* 00589a57: ret 8 */ FN_RET(0x00589a2c); r_esp += 12; return;
L_00589a5a:; BB(0x00589a5a);
    /* 00589a5a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589a5d: jne 0x589a76 */ if (!fZ) goto L_00589a76;
L_00589a5f:; BB(0x00589a5f);
    /* 00589a5f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589a63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589a64: call 0x58892c */ r_esp -= 4; W32(r_esp, 0x589a69u); f_0058892c();
    /* 00589a69: ret 8 */ FN_RET(0x00589a2c); r_esp += 12; return;
L_00589a6c:; BB(0x00589a6c);
    /* 00589a6c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589a71: call 0x588d9c */ r_esp -= 4; W32(r_esp, 0x589a76u); f_00588d9c();
L_00589a76:; BB(0x00589a76);
    /* 00589a76: ret 8 */ FN_RET(0x00589a2c); r_esp += 12; return;
L_00589a79:; BB(0x00589a79);
    /* 00589a79: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589a7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589a7e: call 0x5890c8 */ r_esp -= 4; W32(r_esp, 0x589a83u); f_005890c8();
    /* 00589a83: ret 8 */ FN_RET(0x00589a2c); r_esp += 12; return;
L_00589a86:; BB(0x00589a86);
    /* 00589a86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589a8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589a8b: call 0x589148 */ r_esp -= 4; W32(r_esp, 0x589a90u); f_00589148();
    /* 00589a90: ret 8 */ FN_RET(0x00589a2c); r_esp += 12; return;
L_00589a93:; BB(0x00589a93);
    /* 00589a93: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589a97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589a98: call 0x589268 */ r_esp -= 4; W32(r_esp, 0x589a9du); f_00589268();
    /* 00589a9d: ret 8 */ FN_RET(0x00589a2c); r_esp += 12; return;
L_00589aa0:; BB(0x00589aa0);
    /* 00589aa0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589aa5: call 0x589df0 */ r_esp -= 4; W32(r_esp, 0x589aaau); f_00589df0();
    /* 00589aaa: ret 8 */ FN_RET(0x00589a2c); r_esp += 12; return;
}

void f_00589ab0(void) /* sub_589AB0 */
{
    FN_ENTER(0x00589ab0);
    /* 00589ab0: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00589ab7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589aba: je 0x589ac3 */ if (fZ) goto L_00589ac3;
L_00589abc:; BB(0x00589abc);
    /* 00589abc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00589abe: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x589ac3u); f_0051f62c();
L_00589ac3:; BB(0x00589ac3);
    /* 00589ac3: ret  */ FN_RET(0x00589ab0); r_esp += 4; return;
}

void f_00589ac4(void) /* sub_589AC4 */
{
    FN_ENTER(0x00589ac4);
    /* 00589ac4: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x589ac9u); f_0051f81c();
    /* 00589ac9: ret  */ FN_RET(0x00589ac4); r_esp += 4; return;
}

void f_00589acc(void) /* sub_589ACC */
{
    FN_ENTER(0x00589acc);
    /* 00589acc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00589acd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589ad0: mov edx, ecx */ r_edx = r_ecx;
    /* 00589ad2: mov ecx, dword ptr [edx + 0x418] */ r_ecx = R32((u32)(r_edx+0x418u));
    /* 00589ad8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00589ada: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00589adc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00589ade: jle 0x589b2e */ if ((fZ||fS!=fO)) goto L_00589b2e;
L_00589ae0:; BB(0x00589ae0);
    /* 00589ae0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00589ae4: mov esi, edx */ r_esi = r_edx;
    /* 00589ae6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00589aea: movzx edi, word ptr [esp + 0x14] */ r_edi = (u32)R16((u32)(r_esp+0x14u));
    /* 00589aef: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00589af2: mov ebp, eax */ r_ebp = r_eax;
L_00589af4:; BB(0x00589af4);
    /* 00589af4: movzx ecx, word ptr [esi + ebp*2 + 0x420] */ r_ecx = (u32)R16((u32)(r_esi+r_ebp*2+0x420u));
    /* 00589afc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00589afd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x589b02u); f_007b4d18();
    /* 00589b02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589b03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589b05: je 0x589b18 */ if (fZ) goto L_00589b18;
L_00589b07:; BB(0x00589b07);
    /* 00589b07: mov ecx, eax */ r_ecx = r_eax;
    /* 00589b09: call 0x58c204 */ r_esp -= 4; W32(r_esp, 0x589b0eu); f_0058c204();
    /* 00589b0e: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 00589b11: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589b13: jne 0x589b18 */ if (!fZ) goto L_00589b18;
L_00589b15:; BB(0x00589b15);
    /* 00589b15: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00589b18:; BB(0x00589b18);
    /* 00589b18: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00589b1b: cmp ebp, dword ptr [esi + 0x418] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x418u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589b21: jl 0x589af4 */ if ((fS!=fO)) goto L_00589af4;
L_00589b23:; BB(0x00589b23);
    /* 00589b23: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00589b27: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00589b2b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00589b2e:; BB(0x00589b2e);
    /* 00589b2e: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x589b33u); f_00520e6c();
    /* 00589b33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589b35: je 0x589b49 */ if (fZ) goto L_00589b49;
L_00589b37:; BB(0x00589b37);
    /* 00589b37: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589b3a: mov eax, 0 */ r_eax = 0x0u;
    /* 00589b3f: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00589b42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589b45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589b46: ret 4 */ FN_RET(0x00589acc); r_esp += 8; return;
L_00589b49:; BB(0x00589b49);
    /* 00589b49: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589b4c: mov eax, 0 */ r_eax = 0x0u;
    /* 00589b51: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00589b54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589b57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589b58: ret 4 */ FN_RET(0x00589acc); r_esp += 8; return;
}

void f_00589b5c(void) /* sub_589B5C */
{
    FN_ENTER(0x00589b5c);
    /* 00589b5c: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00589b63: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589b66: mov eax, 0 */ r_eax = 0x0u;
    /* 00589b6b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00589b6e: ret  */ FN_RET(0x00589b5c); r_esp += 4; return;
}

void f_00589b70(void) /* sub_589B70 */
{
    FN_ENTER(0x00589b70);
    /* 00589b70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00589b71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00589b72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00589b73: mov edx, ecx */ r_edx = r_ecx;
    /* 00589b75: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00589b77: mov edi, edx */ r_edi = r_edx;
L_00589b79:; BB(0x00589b79);
    /* 00589b79: movzx eax, word ptr [edi + ebx*2 + 0x420] */ r_eax = (u32)R16((u32)(r_edi+r_ebx*2+0x420u));
    /* 00589b81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589b82: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00589b85: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x589b8au); f_007b4d18();
    /* 00589b8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589b8b: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589b8f: je 0x589b9f */ if (fZ) goto L_00589b9f;
L_00589b91:; BB(0x00589b91);
    /* 00589b91: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00589b94: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589b97: jl 0x589b79 */ if ((fS!=fO)) goto L_00589b79;
L_00589b99:; BB(0x00589b99);
    /* 00589b99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589b9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589b9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589b9c: ret 4 */ FN_RET(0x00589b70); r_esp += 8; return;
L_00589b9f:; BB(0x00589b9f);
    /* 00589b9f: mov eax, esi */ r_eax = r_esi;
    /* 00589ba1: mov edx, edi */ r_edx = r_edi;
    /* 00589ba3: mov ecx, dword ptr [edx + 0x418] */ r_ecx = R32((u32)(r_edx+0x418u));
    /* 00589ba9: lea ebx, [ecx - 1] */ r_ebx = (u32)(r_ecx+0xffffffffu);
    /* 00589bac: mov dword ptr [edx + 0x418], ebx */ W32((u32)(r_edx+0x418u), r_ebx);
    /* 00589bb2: movzx ebx, word ptr [edx + ecx*2 + 0x41e] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*2+0x41eu));
    /* 00589bba: mov word ptr [edx + eax + 0x420], bx */ W16((u32)(r_edx+r_eax+0x420u), (u16)r_ebx);
    /* 00589bc2: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00589bc7: mov ebx, dword ptr [edx + 0x418] */ r_ebx = R32((u32)(r_edx+0x418u));
    /* 00589bcd: mov word ptr [edx + ebx*2 + 0x420], ax */ W16((u32)(r_edx+r_ebx*2+0x420u), (u16)r_eax);
    /* 00589bd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589bd6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589bd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589bd8: ret 4 */ FN_RET(0x00589b70); r_esp += 8; return;
}

void f_00589b89(void)
{
    FN_ENTER(0x00589b89);
    goto L_00589b89;
L_00589b79:; BB(0x00589b79);
    /* 00589b79: movzx eax, word ptr [edi + ebx*2 + 0x420] */ r_eax = (u32)R16((u32)(r_edi+r_ebx*2+0x420u));
    /* 00589b81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589b82: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00589b85: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x589b8au); f_007b4d18();
L_00589b89:; BB(0x00589b89);
    /* 00589b89: add byte ptr [ecx + 0x3b], bl */ { u32 ad = (u32)(r_ecx+0x3bu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00589b8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589b8b: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589b8c: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589b8d: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589b8f: je 0x589b9f */ if (fZ) goto L_00589b9f;
L_00589b91:; BB(0x00589b91);
    /* 00589b91: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00589b94: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589b97: jl 0x589b79 */ if ((fS!=fO)) goto L_00589b79;
L_00589b99:; BB(0x00589b99);
    /* 00589b99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589b9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589b9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589b9c: ret 4 */ FN_RET(0x00589b89); r_esp += 8; return;
L_00589b9f:; BB(0x00589b9f);
    /* 00589b9f: mov eax, esi */ r_eax = r_esi;
    /* 00589ba1: mov edx, edi */ r_edx = r_edi;
    /* 00589ba3: mov ecx, dword ptr [edx + 0x418] */ r_ecx = R32((u32)(r_edx+0x418u));
    /* 00589ba9: lea ebx, [ecx - 1] */ r_ebx = (u32)(r_ecx+0xffffffffu);
    /* 00589bac: mov dword ptr [edx + 0x418], ebx */ W32((u32)(r_edx+0x418u), r_ebx);
    /* 00589bb2: movzx ebx, word ptr [edx + ecx*2 + 0x41e] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*2+0x41eu));
    /* 00589bba: mov word ptr [edx + eax + 0x420], bx */ W16((u32)(r_edx+r_eax+0x420u), (u16)r_ebx);
    /* 00589bc2: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00589bc7: mov ebx, dword ptr [edx + 0x418] */ r_ebx = R32((u32)(r_edx+0x418u));
    /* 00589bcd: mov word ptr [edx + ebx*2 + 0x420], ax */ W16((u32)(r_edx+r_ebx*2+0x420u), (u16)r_eax);
    /* 00589bd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589bd6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589bd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589bd8: ret 4 */ FN_RET(0x00589b89); r_esp += 8; return;
}

void f_00589bdc(void) /* sub_589BDC */
{
    FN_ENTER(0x00589bdc);
    /* 00589bdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00589bdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00589bde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00589bdf: mov eax, ecx */ r_eax = r_ecx;
    /* 00589be1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00589be3: mov edi, eax */ r_edi = r_eax;
L_00589be5:; BB(0x00589be5);
    /* 00589be5: movzx edx, word ptr [edi + esi*2 + 0x420] */ r_edx = (u32)R16((u32)(r_edi+r_esi*2+0x420u));
    /* 00589bed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589bee: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00589bf1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x589bf6u); f_007b4d18();
    /* 00589bf6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589bf7: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589bfb: je 0x589c0b */ if (fZ) goto L_00589c0b;
L_00589bfd:; BB(0x00589bfd);
    /* 00589bfd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00589c00: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589c03: jl 0x589be5 */ if ((fS!=fO)) goto L_00589be5;
L_00589c05:; BB(0x00589c05);
    /* 00589c05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589c06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589c07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589c08: ret 4 */ FN_RET(0x00589bdc); r_esp += 8; return;
L_00589c0b:; BB(0x00589c0b);
    /* 00589c0b: mov esi, ebp */ r_esi = r_ebp;
    /* 00589c0d: mov eax, edi */ r_eax = r_edi;
    /* 00589c0f: movzx ecx, word ptr [eax + esi + 0x420] */ r_ecx = (u32)R16((u32)(r_eax+r_esi+0x420u));
    /* 00589c17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00589c19:; BB(0x00589c19);
    /* 00589c19: movzx edi, word ptr [eax + edx*2 + 0x42c] */ r_edi = (u32)R16((u32)(r_eax+r_edx*2+0x42cu));
    /* 00589c21: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00589c24: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589c26: je 0x589c8b */ if (fZ) goto L_00589c8b;
L_00589c28:; BB(0x00589c28);
    /* 00589c28: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00589c2b: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00589c2e: jl 0x589c19 */ if ((fS!=fO)) goto L_00589c19;
L_00589c30:; BB(0x00589c30);
    /* 00589c30: mov ecx, dword ptr [eax + 0x418] */ r_ecx = R32((u32)(r_eax+0x418u));
    /* 00589c36: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 00589c39: mov dword ptr [eax + 0x418], edx */ W32((u32)(r_eax+0x418u), r_edx);
    /* 00589c3f: movzx edx, word ptr [eax + ecx*2 + 0x41e] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*2+0x41eu));
    /* 00589c47: mov word ptr [eax + esi + 0x420], dx */ W16((u32)(r_eax+r_esi+0x420u), (u16)r_edx);
    /* 00589c4f: mov esi, 0xffff */ r_esi = 0xffffu;
    /* 00589c54: mov edx, dword ptr [eax + 0x418] */ r_edx = R32((u32)(r_eax+0x418u));
    /* 00589c5a: mov word ptr [eax + edx*2 + 0x420], si */ W16((u32)(r_eax+r_edx*2+0x420u), (u16)r_esi);
    /* 00589c62: mov edx, dword ptr [eax + 0x41c] */ r_edx = R32((u32)(r_eax+0x41cu));
    /* 00589c68: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00589c6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589c6d: jl 0x589c7b */ if ((fS!=fO)) goto L_00589c7b;
L_00589c6f:; BB(0x00589c6f);
    /* 00589c6f: mov dword ptr [eax + 0x41c], edx */ W32((u32)(r_eax+0x41cu), r_edx);
    /* 00589c75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589c77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589c78: ret 4 */ FN_RET(0x00589bdc); r_esp += 8; return;
L_00589c7b:; BB(0x00589c7b);
    /* 00589c7b: mov dword ptr [eax + 0x41c], 0 */ W32((u32)(r_eax+0x41cu), 0x0u);
    /* 00589c85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589c86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589c87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00589c88: ret 4 */ FN_RET(0x00589bdc); r_esp += 8; return;
L_00589c8b:; BB(0x00589c8b);
    /* 00589c8b: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 00589c90: mov edx, ebp */ r_edx = r_ebp;
    /* 00589c92: mov word ptr [eax + edx + 0x42c], cx */ W16((u32)(r_eax+r_edx+0x42cu), (u16)r_ecx);
    /* 00589c9a: jmp 0x589c30 */ goto L_00589c30;
}

void f_00589c9c(void) /* sub_589C9C */
{
    FN_ENTER(0x00589c9c);
    /* 00589c9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00589c9d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00589ca1: mov eax, esi */ r_eax = r_esi;
    /* 00589ca3: and eax, 0x10070000 */ {  u32 a = r_eax; u32 b = 0x10070000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00589ca8: cmp eax, 0x30000 */ {  u32 a = r_eax; u32 b = 0x30000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589cad: je 0x589cb3 */ if (fZ) goto L_00589cb3;
L_00589caf:; BB(0x00589caf);
    /* 00589caf: mov eax, esi */ r_eax = r_esi;
    /* 00589cb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589cb2: ret  */ FN_RET(0x00589c9c); r_esp += 4; return;
L_00589cb3:; BB(0x00589cb3);
    /* 00589cb3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x589cb8u); f_00807ac0();
    /* 00589cb8: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589cbb: jne 0x589cc5 */ if (!fZ) goto L_00589cc5;
L_00589cbd:; BB(0x00589cbd);
    /* 00589cbd: lea edx, [esi + 0x2fdc4] */ r_edx = (u32)(r_esi+0x2fdc4u);
    /* 00589cc3: jmp 0x589cd0 */ goto L_00589cd0;
L_00589cc5:; BB(0x00589cc5);
    /* 00589cc5: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589cc8: jne 0x589caf */ if (!fZ) goto L_00589caf;
L_00589cca:; BB(0x00589cca);
    /* 00589cca: lea edx, [esi + 0x2fdd3] */ r_edx = (u32)(r_esi+0x2fdd3u);
L_00589cd0:; BB(0x00589cd0);
    /* 00589cd0: and esi, 0x8fffff00 */ {  u32 a = r_esi; u32 b = 0x8fffff00u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00589cd6: or esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589cd8: mov eax, esi */ r_eax = r_esi;
    /* 00589cda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589cdb: ret  */ FN_RET(0x00589c9c); r_esp += 4; return;
}

void f_00589d08(void) /* sub_589D08 */
{
    FN_ENTER(0x00589d08);
    /* 00589d08: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589d0b: mov dword ptr [0xa743ac], 0 */ W32((u32)(0xa743acu), 0x0u);
    /* 00589d15: mov dword ptr [0xa743b0], 0 */ W32((u32)(0xa743b0u), 0x0u);
    /* 00589d1f: mov dword ptr [0xa743b4], 0 */ W32((u32)(0xa743b4u), 0x0u);
    /* 00589d29: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x589d2eu); f_00482a20();
    /* 00589d2e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00589d31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589d33: jne 0x589d47 */ if (!fZ) goto L_00589d47;
L_00589d35:; BB(0x00589d35);
    /* 00589d35: push 0x9bf760 */ { u32 v = 0x9bf760u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d3a: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x589d3fu); f_0051f6b0();
    /* 00589d3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589d40: mov dword ptr [0xa743b8], eax */ W32((u32)(0xa743b8u), r_eax);
    /* 00589d45: jmp 0x589d57 */ goto L_00589d57;
L_00589d47:; BB(0x00589d47);
    /* 00589d47: push 0x9bf708 */ { u32 v = 0x9bf708u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d4c: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x589d51u); f_0051f6b0();
    /* 00589d51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589d52: mov dword ptr [0xa743b8], eax */ W32((u32)(0xa743b8u), r_eax);
L_00589d57:; BB(0x00589d57);
    /* 00589d57: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d59: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x589d5eu); f_0077a684();
    /* 00589d5e: mov dword ptr [0xa743c8], eax */ W32((u32)(0xa743c8u), r_eax);
    /* 00589d63: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d65: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x589d6au); f_0077a698();
    /* 00589d6a: mov dword ptr [0xa743c4], eax */ W32((u32)(0xa743c4u), r_eax);
    /* 00589d6f: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d71: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x589d76u); f_0077a6b4();
    /* 00589d76: mov dword ptr [0xa743c0], eax */ W32((u32)(0xa743c0u), r_eax);
    /* 00589d7b: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00589d7d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x589d82u); f_0077a6cc();
    /* 00589d82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00589d85: mov dword ptr [0xa743bc], eax */ W32((u32)(0xa743bcu), r_eax);
    /* 00589d8a: call 0x58c4d8 */ r_esp -= 4; W32(r_esp, 0x589d8fu); f_0058c4d8();
    /* 00589d8f: mov eax, dword ptr [0x9285dc] */ r_eax = R32((u32)(0x9285dcu));
    /* 00589d94: movzx edx, word ptr [0x9285e0] */ r_edx = (u32)R16((u32)(0x9285e0u));
    /* 00589d9b: movzx ecx, word ptr [0x9285e2] */ r_ecx = (u32)R16((u32)(0x9285e2u));
    /* 00589da2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00589da6: movzx eax, word ptr [0x9285e4] */ r_eax = (u32)R16((u32)(0x9285e4u));
    /* 00589dad: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 00589db2: mov edx, dword ptr [0xa743b8] */ r_edx = R32((u32)(0xa743b8u));
    /* 00589db8: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 00589dbd: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00589dc2: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00589dc8: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00589dce: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00589dd1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00589dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589dd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589dd7: push dword ptr [0x9bf79c] */ { u32 v = R32((u32)(0x9bf79cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00589ddd: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00589de0: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00589de3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00589de5: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x589deau); f_00608470();
    /* 00589dea: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589ded: ret  */ FN_RET(0x00589d08); r_esp += 4; return;
}

void f_00589df0(void) /* sub_589DF0 */
{
    FN_ENTER(0x00589df0);
    /* 00589df0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00589df1: mov esi, ecx */ r_esi = r_ecx;
    /* 00589df3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589df7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589dfa: je 0x589e0e */ if (fZ) goto L_00589e0e;
L_00589dfc:; BB(0x00589dfc);
    /* 00589dfc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00589dff: jne 0x589e0a */ if (!fZ) goto L_00589e0a;
L_00589e01:; BB(0x00589e01);
    /* 00589e01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00589e03: mov ecx, esi */ r_ecx = r_esi;
    /* 00589e05: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x589e0au); f_0051f62c();
L_00589e0a:; BB(0x00589e0a);
    /* 00589e0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589e0b: ret 4 */ FN_RET(0x00589df0); r_esp += 8; return;
L_00589e0e:; BB(0x00589e0e);
    /* 00589e0e: mov eax, dword ptr [esi + 0x414] */ r_eax = R32((u32)(r_esi+0x414u));
    /* 00589e14: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00589e17: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 00589e1d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00589e1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00589e21: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00589e28: mov ecx, esi */ r_ecx = r_esi;
    /* 00589e2a: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x589e30u); call_ind(t); }
    /* 00589e30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00589e32: mov ecx, esi */ r_ecx = r_esi;
    /* 00589e34: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x589e39u); f_0051f664();
    /* 00589e39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589e3a: ret 4 */ FN_RET(0x00589df0); r_esp += 8; return;
}

void f_00589e40(void) /* sub_589E40 */
{
    FN_ENTER(0x00589e40);
    /* 00589e40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00589e41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00589e43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00589e45: call 0x589e64 */ r_esp -= 4; W32(r_esp, 0x589e4au); f_00589e64();
    /* 00589e4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589e4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00589e50: jne 0x589e56 */ if (!fZ) goto L_00589e56;
L_00589e52:; BB(0x00589e52);
    /* 00589e52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589e53: ret 4 */ FN_RET(0x00589e40); r_esp += 8; return;
L_00589e56:; BB(0x00589e56);
    /* 00589e56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00589e57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x589e5cu); f_005c2f74();
    /* 00589e5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589e5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00589e5e: ret 4 */ FN_RET(0x00589e40); r_esp += 8; return;
}

void f_00589e64(void) /* sub_589E64 */
{
    FN_ENTER(0x00589e64);
    /* 00589e64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00589e65: mov ebp, esp */ r_ebp = r_esp;
    /* 00589e67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00589e69: push 0x8d7f5c */ { u32 v = 0x8d7f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00589e6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00589e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589e75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00589e7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589e7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00589e82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00589e85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00589e88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00589e8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00589e8e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00589e95: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00589e98: mov dword ptr [eax], 0xb08100 */ W32((u32)(r_eax), 0xb08100u);
    /* 00589e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589e9f: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x589ea4u); f_008113e4();
    /* 00589ea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589ea5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00589ea8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x589eadu); f_007b9c8c();
    /* 00589ead: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00589eb0: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 00589eb6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589eb8: je 0x589ed8 */ if (fZ) goto L_00589ed8;
L_00589ebe:; BB(0x00589ebe);
    /* 00589ebe: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00589ec2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00589ec7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00589ecb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00589ece: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
L_00589ed8:; BB(0x00589ed8);
    /* 00589ed8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00589edf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00589ee2: add ecx, 0x488 */ {  u32 a = r_ecx; u32 b = 0x488u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00589ee8: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x589eedu); f_005769f8();
    /* 00589eed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00589ef4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00589ef7: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x589efcu); f_0051f4fc();
    /* 00589efc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00589eff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00589f06: mov esp, ebp */ r_esp = r_ebp;
    /* 00589f08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00589f09: ret  */ FN_RET(0x00589e64); r_esp += 4; return;
}

void f_00589f0c(void) /* sub_589F0C */
{
    FN_ENTER(0x00589f0c);
    /* 00589f0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00589f0d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00589f10: mov esi, ecx */ r_esi = r_ecx;
    /* 00589f12: mov edx, dword ptr [esi + 0x398] */ r_edx = R32((u32)(r_esi+0x398u));
    /* 00589f18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589f1a: je 0x589f36 */ if (fZ) goto L_00589f36;
L_00589f1c:; BB(0x00589f1c);
    /* 00589f1c: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00589f23: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589f26: jne 0x589f36 */ if (!fZ) goto L_00589f36;
L_00589f28:; BB(0x00589f28);
    /* 00589f28: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00589f2b: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00589f2e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00589f31: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00589f34: jmp 0x589f7e */ goto L_00589f7e;
L_00589f36:; BB(0x00589f36);
    /* 00589f36: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00589f39: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00589f3c: fadd dword ptr [esi + 0x450] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x450u));
    /* 00589f42: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00589f45: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00589f49: mov ecx, esi */ r_ecx = r_esi;
    /* 00589f4b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00589f4f: lea eax, [esi + 0x250] */ r_eax = (u32)(r_esi+0x250u);
    /* 00589f55: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00589f59: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00589f5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589f5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00589f5f: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x589f64u); f_007b4c58();
    /* 00589f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00589f66: je 0x589f78 */ if (fZ) goto L_00589f78;
L_00589f68:; BB(0x00589f68);
    /* 00589f68: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00589f6c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00589f70: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00589f73: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00589f76: jmp 0x589f7e */ goto L_00589f7e;
L_00589f78:; BB(0x00589f78);
    /* 00589f78: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00589f7b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00589f7e:; BB(0x00589f7e);
    /* 00589f7e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00589f81: fsubr dword ptr [esi + 0x450] */ ST(0) = R_F32((u32)(r_esi+0x450u)) - ST(0);
    /* 00589f87: fcom dword ptr [0x928a10] */ fx_compare(ST(0), R_F32((u32)(0x928a10u))); 
    /* 00589f8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00589f8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00589f92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00589f93: jb 0x589fa1 */ if (fC) goto L_00589fa1;
L_00589f95:; BB(0x00589f95);
    /* 00589f95: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00589f97: mov ecx, esi */ r_ecx = r_esi;
    /* 00589f99: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x589f9fu); call_ind(t); }
    /* 00589f9f: jmp 0x589fab */ goto L_00589fab;
L_00589fa1:; BB(0x00589fa1);
    /* 00589fa1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00589fa3: mov ecx, esi */ r_ecx = r_esi;
    /* 00589fa5: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x589fabu); call_ind(t); }
L_00589fab:; BB(0x00589fab);
    /* 00589fab: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00589fae: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00589fb4: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00589fb7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00589fba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589fbb: ret  */ FN_RET(0x00589f0c); r_esp += 4; return;
}

void f_00589fbc(void) /* sub_589FBC */
{
    FN_ENTER(0x00589fbc);
    /* 00589fbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00589fbd: mov esi, ecx */ r_esi = r_ecx;
    /* 00589fbf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00589fc1: mov ecx, esi */ r_ecx = r_esi;
    /* 00589fc3: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x589fc9u); call_ind(t); }
    /* 00589fc9: mov ecx, esi */ r_ecx = r_esi;
    /* 00589fcb: call 0x520220 */ r_esp -= 4; W32(r_esp, 0x589fd0u); f_00520220();
    /* 00589fd0: mov ecx, esi */ r_ecx = r_esi;
    /* 00589fd2: call 0x589fdc */ r_esp -= 4; W32(r_esp, 0x589fd7u); f_00589fdc();
    /* 00589fd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00589fd8: ret  */ FN_RET(0x00589fbc); r_esp += 4; return;
}

void f_00589fdc(void) /* sub_589FDC */
{
    FN_ENTER(0x00589fdc);
    /* 00589fdc: fld dword ptr [0x928a0c] */ FPUSH(R_F32((u32)(0x928a0cu)));
    /* 00589fe2: fld dword ptr [ecx + 0x450] */ FPUSH(R_F32((u32)(r_ecx+0x450u)));
    /* 00589fe8: fld dword ptr [ecx + 0x450] */ FPUSH(R_F32((u32)(r_ecx+0x450u)));
    /* 00589fee: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00589ff1: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00589ff3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00589ff5: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00589ff7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00589ff9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00589ffa: jae 0x58a00a */ if (!fC) goto L_0058a00a;
L_00589ffc:; BB(0x00589ffc);
    /* 00589ffc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00589ffe: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0058a000: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0058a002: fst dword ptr [ecx + 0x450] */ W_F32((u32)(r_ecx+0x450u), ST(0));
    /* 0058a008: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0058a00a:; BB(0x0058a00a);
    /* 0058a00a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058a00c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0058a00e: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 0058a014: ret  */ FN_RET(0x00589fdc); r_esp += 4; return;
}

