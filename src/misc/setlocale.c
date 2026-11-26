#include "protos.h"

void f_0085db05(void) /* __setlocale_get_all */
{
    FN_ENTER(0x0085db05);
    /* 0085db05: mov eax, dword ptr [0xa23e2c] */ r_eax = R32((u32)(0xa23e2cu));
    /* 0085db0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085db0b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0085db0d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0085db0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085db10: jne 0x85db28 */ if (!fZ) goto L_0085db28;
L_0085db12:; BB(0x0085db12);
    /* 0085db12: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 0085db17: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85db1cu); f_00859c55();
    /* 0085db1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085db1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085db1f: mov dword ptr [0xa23e2c], eax */ W32((u32)(0xa23e2cu), r_eax);
    /* 0085db24: jne 0x85db28 */ if (!fZ) goto L_0085db28;
L_0085db26:; BB(0x0085db26);
    /* 0085db26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085db27: ret  */ FN_RET(0x0085db05); r_esp += 4; return;
L_0085db28:; BB(0x0085db28);
    /* 0085db28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085db29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085db2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085db2b: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0085db2e: push dword ptr [0xa23e38] */ { u32 v = R32((u32)(0xa23e38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db34: mov edi, 0x998398 */ r_edi = 0x998398u;
    /* 0085db39: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085db3a: push dword ptr [0xa23e34] */ { u32 v = R32((u32)(0xa23e34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db40: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0085db42: push dword ptr [0xa23e2c] */ { u32 v = R32((u32)(0xa23e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db48: call 0x85d97c */ r_esp -= 4; W32(r_esp, 0x85db4du); f_0085d97c();
    /* 0085db4d: mov esi, 0xa23e38 */ r_esi = 0xa23e38u;
    /* 0085db52: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085db55: mov ebx, esi */ r_ebx = r_esi;
L_0085db57:; BB(0x0085db57);
    /* 0085db57: push 0x998394 */ { u32 v = 0x998394u; r_esp -= 4; W32(r_esp, v); }
    /* 0085db5c: push dword ptr [0xa23e2c] */ { u32 v = R32((u32)(0xa23e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db62: call 0x85e300 */ r_esp -= 4; W32(r_esp, 0x85db67u); f_0085e300();
    /* 0085db67: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085db6a: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db6c: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db6e: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x85db73u); f_00864570();
    /* 0085db73: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085db76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085db78: je 0x85db7c */ if (fZ) goto L_0085db7c;
L_0085db7a:; BB(0x0085db7a);
    /* 0085db7a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0085db7c:; BB(0x0085db7c);
    /* 0085db7c: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db7e: mov ebx, esi */ r_ebx = r_esi;
    /* 0085db80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085db81: push dword ptr [esi - 4] */ { u32 v = R32((u32)(r_esi+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db84: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0085db86: push dword ptr [0xa23e2c] */ { u32 v = R32((u32)(0xa23e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085db8c: call 0x85d97c */ r_esp -= 4; W32(r_esp, 0x85db91u); f_0085d97c();
    /* 0085db91: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085db94: cmp esi, 0xa23e68 */ {  u32 a = r_esi; u32 b = 0xa23e68u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085db9a: jl 0x85db57 */ if ((fS!=fO)) goto L_0085db57;
L_0085db9c:; BB(0x0085db9c);
    /* 0085db9c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085db9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085db9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085dba0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085dba1: jne 0x85dbaa */ if (!fZ) goto L_0085dbaa;
L_0085dba3:; BB(0x0085dba3);
    /* 0085dba3: mov eax, dword ptr [0xa23e2c] */ r_eax = R32((u32)(0xa23e2cu));
    /* 0085dba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085dba9: ret  */ FN_RET(0x0085db05); r_esp += 4; return;
L_0085dbaa:; BB(0x0085dbaa);
    /* 0085dbaa: push dword ptr [0xa23e2c] */ { u32 v = R32((u32)(0xa23e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dbb0: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85dbb5u); f_00858882();
    /* 0085dbb5: and dword ptr [0xa23e2c], 0 */ { u32 ad = (u32)(0xa23e2cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085dbbc: mov eax, dword ptr [0xa23e44] */ r_eax = R32((u32)(0xa23e44u));
    /* 0085dbc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dbc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085dbc3: ret  */ FN_RET(0x0085db05); r_esp += 4; return;
}

void f_0085dd20(void) /* __setlocale_set_cat */
{
    FN_ENTER(0x0085dd20);
    /* 0085dd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd21: lea ebp, [esp - 0x74] */ r_ebp = (u32)(r_esp+0xffffff8cu);
    /* 0085dd25: sub esp, 0x1c0 */ {  u32 a = r_esp; u32 b = 0x1c0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085dd2b: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085dd30: mov dword ptr [ebp + 0x70], eax */ W32((u32)(r_ebp+0x70u), r_eax);
    /* 0085dd33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd34: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 0085dd3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd3b: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 0085dd41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd42: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0085dd45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd46: push dword ptr [ebp + 0x7c] */ { u32 v = R32((u32)(r_ebp+0x7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dd49: call 0x85dbc4 */ r_esp -= 4; W32(r_esp, 0x85dd4eu); f_0085dbc4();
    /* 0085dd4e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085dd51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dd53: je 0x85dfa2 */ if (fZ) goto L_0085dfa2;
L_0085dd59:; BB(0x0085dd59);
    /* 0085dd59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd5a: lea ebx, [esi + esi*2] */ r_ebx = (u32)(r_esi+r_esi*2);
    /* 0085dd5d: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0085dd60: push dword ptr [ebx + 0xa23e2c] */ { u32 v = R32((u32)(r_ebx+0xa23e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dd66: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0085dd69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd6a: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x85dd6fu); f_00864570();
    /* 0085dd6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dd71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dd72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dd73: jne 0x85dd80 */ if (!fZ) goto L_0085dd80;
L_0085dd75:; BB(0x0085dd75);
    /* 0085dd75: mov eax, dword ptr [ebx + 0xa23e2c] */ r_eax = R32((u32)(r_ebx+0xa23e2cu));
    /* 0085dd7b: jmp 0x85dfa1 */ goto L_0085dfa1;
L_0085dd80:; BB(0x0085dd80);
    /* 0085dd80: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0085dd83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd84: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x85dd89u); f_0085d760();
    /* 0085dd89: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085dd8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085dd8b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85dd90u); f_00859c55();
    /* 0085dd90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dd92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dd93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dd94: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0085dd9a: je 0x85dfa1 */ if (fZ) goto L_0085dfa1;
L_0085dda0:; BB(0x0085dda0);
    /* 0085dda0: mov eax, dword ptr [ebx + 0xa23e2c] */ r_eax = R32((u32)(r_ebx+0xa23e2cu));
    /* 0085dda6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dda7: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0085ddad: lea edi, [esi*4 + 0xae7e94] */ r_edi = (u32)(r_esi*4+0xae7e94u);
    /* 0085ddb4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0085ddb6: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 0085ddbc: lea eax, [esi + esi*2] */ r_eax = (u32)(r_esi+r_esi*2);
    /* 0085ddbf: lea eax, [eax*2 + 0xae7eb8] */ r_eax = (u32)(r_eax*2+0xae7eb8u);
    /* 0085ddc6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ddc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ddc9: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0085ddcf: lea eax, [ebp - 0x14c] */ r_eax = (u32)(r_ebp+0xfffffeb4u);
    /* 0085ddd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ddd6: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x85dddbu); f_00861d00();
    /* 0085dddb: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 0085dde0: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 0085dde6: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0085dde9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ddea: push dword ptr [ebp - 0x124] */ { u32 v = R32((u32)(r_ebp+0xfffffedcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ddf0: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x85ddf5u); f_0085e2f0();
    /* 0085ddf5: mov dword ptr [ebx + 0xa23e2c], eax */ W32((u32)(r_ebx+0xa23e2cu), r_eax);
    /* 0085ddfb: movzx eax, word ptr [ebp - 0x138] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffec8u));
    /* 0085de02: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0085de04: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0085de06: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 0085de0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085de0d: push dword ptr [ebp - 0x118] */ { u32 v = R32((u32)(r_ebp+0xfffffee8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085de13: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x85de18u); f_00861d00();
    /* 0085de18: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085de1b: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085de1e: jne 0x85df39 */ if (!fZ) goto L_0085df39;
L_0085de24:; BB(0x0085de24);
    /* 0085de24: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0085de2a: mov ecx, dword ptr [0xa23d10] */ r_ecx = R32((u32)(0xa23d10u));
    /* 0085de30: and dword ptr [ebp - 0x118], 0 */ { u32 ad = (u32)(r_ebp+0xfffffee8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085de37: mov dword ptr [0xae7eac], eax */ W32((u32)(0xae7eacu), r_eax);
    /* 0085de3c: mov eax, dword ptr [0xa23d14] */ r_eax = R32((u32)(0xa23d14u));
    /* 0085de41: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0085de47: mov eax, 0xa23cf0 */ r_eax = 0xa23cf0u;
L_0085de4c:; BB(0x0085de4c);
    /* 0085de4c: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0085de52: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085de54: je 0x85de8a */ if (fZ) goto L_0085de8a;
L_0085de56:; BB(0x0085de56);
    /* 0085de56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085de58: inc dword ptr [ebp - 0x118] */ { u32 ad = (u32)(r_ebp+0xfffffee8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085de5e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0085de60: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0085de66: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 0085de6c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0085de6f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0085de72: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0085de78: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085de7b: cmp eax, 0xa23d18 */ {  u32 a = r_eax; u32 b = 0xa23d18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085de80: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0085de86: jl 0x85de4c */ if ((fS!=fO)) goto L_0085de4c;
L_0085de88:; BB(0x0085de88);
    /* 0085de88: jmp 0x85deb7 */ goto L_0085deb7;
L_0085de8a:; BB(0x0085de8a);
    /* 0085de8a: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0085de90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085de92: je 0x85deb7 */ if (fZ) goto L_0085deb7;
L_0085de94:; BB(0x0085de94);
    /* 0085de94: lea eax, [eax*8 + 0xa23cf0] */ r_eax = (u32)(r_eax*8+0xa23cf0u);
    /* 0085de9b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0085de9d: mov dword ptr [0xa23cf0], edx */ W32((u32)(0xa23cf0u), r_edx);
    /* 0085dea3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0085dea6: mov dword ptr [0xa23cf4], edx */ W32((u32)(0xa23cf4u), r_edx);
    /* 0085deac: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0085deae: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0085deb4: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_0085deb7:; BB(0x0085deb7);
    /* 0085deb7: cmp dword ptr [ebp - 0x118], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085debe: jne 0x85df2f */ if (!fZ) goto L_0085df2f;
L_0085dec0:; BB(0x0085dec0);
    /* 0085dec0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dec2: push dword ptr [0xae7e9c] */ { u32 v = R32((u32)(0xae7e9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085dec8: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0085dece: push dword ptr [ebp - 0x11c] */ { u32 v = R32((u32)(r_ebp+0xfffffee4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ded4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ded5: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0085ded7: push 0x9982b8 */ { u32 v = 0x9982b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dedc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085dede: call 0x8686c8 */ r_esp -= 4; W32(r_esp, 0x85dee3u); f_008686c8();
    /* 0085dee3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085dee6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dee8: je 0x85df1a */ if (fZ) goto L_0085df1a;
L_0085deea:; BB(0x0085deea);
    /* 0085deea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085deec:; BB(0x0085deec);
    /* 0085deec: and byte ptr [ebp + eax*2 - 0x113], 1 */ { u32 ad = (u32)(r_ebp+r_eax*2+0xfffffeedu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0085def4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085def5: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085def8: jb 0x85deec */ if (fC) goto L_0085deec;
L_0085defa:; BB(0x0085defa);
    /* 0085defa: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 0085deff: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0085df05: push 0x9981b8 */ { u32 v = 0x9981b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085df0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085df0b: call 0x868610 */ r_esp -= 4; W32(r_esp, 0x85df10u); f_00868610();
    /* 0085df10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085df13: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0085df15: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0085df17: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085df18: jmp 0x85df1c */ goto L_0085df1c;
L_0085df1a:; BB(0x0085df1a);
    /* 0085df1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085df1c:; BB(0x0085df1c);
    /* 0085df1c: mov ecx, dword ptr [0xae7eac] */ r_ecx = R32((u32)(0xae7eacu));
    /* 0085df22: mov dword ptr [0xa23cf4], eax */ W32((u32)(0xa23cf4u), r_eax);
    /* 0085df27: mov dword ptr [0xa23cf0], ecx */ W32((u32)(0xa23cf0u), r_ecx);
    /* 0085df2d: jmp 0x85df34 */ goto L_0085df34;
L_0085df2f:; BB(0x0085df2f);
    /* 0085df2f: mov eax, dword ptr [0xa23cf4] */ r_eax = R32((u32)(0xa23cf4u));
L_0085df34:; BB(0x0085df34);
    /* 0085df34: mov dword ptr [0xa24500], eax */ W32((u32)(0xa24500u), r_eax);
L_0085df39:; BB(0x0085df39);
    /* 0085df39: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085df3c: jne 0x85df49 */ if (!fZ) goto L_0085df49;
L_0085df3e:; BB(0x0085df3e);
    /* 0085df3e: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 0085df44: mov dword ptr [0xae7eb0], eax */ W32((u32)(0xae7eb0u), r_eax);
L_0085df49:; BB(0x0085df49);
    /* 0085df49: call dword ptr [ebx + 0xa23e30] */ { u32 t = R32((u32)(r_ebx+0xa23e30u)); r_esp -= 4; W32(r_esp, 0x85df4fu); call_ind(t); }
    /* 0085df4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085df51: je 0x85df82 */ if (fZ) goto L_0085df82;
L_0085df53:; BB(0x0085df53);
    /* 0085df53: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 0085df59: push dword ptr [ebp - 0x124] */ { u32 v = R32((u32)(r_ebp+0xfffffedcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085df5f: mov dword ptr [ebx + 0xa23e2c], eax */ W32((u32)(r_ebx+0xa23e2cu), r_eax);
    /* 0085df65: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85df6au); f_00858882();
    /* 0085df6a: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 0085df70: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0085df72: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 0085df78: mov dword ptr [0xae7eac], eax */ W32((u32)(0xae7eacu), r_eax);
    /* 0085df7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085df7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085df80: jmp 0x85dfa0 */ goto L_0085dfa0;
L_0085df82:; BB(0x0085df82);
    /* 0085df82: cmp dword ptr [ebp - 0x120], 0xa23c90 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0xa23c90u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085df8c: je 0x85df9a */ if (fZ) goto L_0085df9a;
L_0085df8e:; BB(0x0085df8e);
    /* 0085df8e: push dword ptr [ebp - 0x120] */ { u32 v = R32((u32)(r_ebp+0xfffffee0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085df94: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85df99u); f_00858882();
    /* 0085df99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085df9a:; BB(0x0085df9a);
    /* 0085df9a: mov eax, dword ptr [ebx + 0xa23e2c] */ r_eax = R32((u32)(r_ebx+0xa23e2cu));
L_0085dfa0:; BB(0x0085dfa0);
    /* 0085dfa0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0085dfa1:; BB(0x0085dfa1);
    /* 0085dfa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0085dfa2:; BB(0x0085dfa2);
    /* 0085dfa2: mov ecx, dword ptr [ebp + 0x70] */ r_ecx = R32((u32)(r_ebp+0x70u));
    /* 0085dfa5: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85dfaau); f_0085e419();
    /* 0085dfaa: add ebp, 0x74 */ {  u32 a = r_ebp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085dfad: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085dfae: ret  */ FN_RET(0x0085dd20); r_esp += 4; return;
}

void f_0085dfaf(void) /* __setlocale_lk */
{
    FN_ENTER(0x0085dfaf);
    /* 0085dfaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085dfb0: lea ebp, [esp - 0x78] */ r_ebp = (u32)(r_esp+0xffffff88u);
    /* 0085dfb4: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085dfba: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085dfbf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085dfc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dfc1: mov esi, edx */ r_esi = r_edx;
    /* 0085dfc3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085dfc5: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dfc7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dfc8: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0085dfcb: mov edi, ecx */ r_edi = r_ecx;
    /* 0085dfcd: je 0x85dfee */ if (fZ) goto L_0085dfee;
L_0085dfcf:; BB(0x0085dfcf);
    /* 0085dfcf: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dfd1: je 0x85dfdf */ if (fZ) goto L_0085dfdf;
L_0085dfd3:; BB(0x0085dfd3);
    /* 0085dfd3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085dfd4: call 0x85dd20 */ r_esp -= 4; W32(r_esp, 0x85dfd9u); f_0085dd20();
    /* 0085dfd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085dfda: jmp 0x85e0e5 */ goto L_0085e0e5;
L_0085dfdf:; BB(0x0085dfdf);
    /* 0085dfdf: lea eax, [esi + esi*2] */ r_eax = (u32)(r_esi+r_esi*2);
    /* 0085dfe2: mov esi, dword ptr [eax*4 + 0xa23e2c] */ r_esi = R32((u32)(r_eax*4+0xa23e2cu));
    /* 0085dfe9: jmp 0x85e0e7 */ goto L_0085e0e7;
L_0085dfee:; BB(0x0085dfee);
    /* 0085dfee: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085dff0: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0085dff7: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0085dffa: je 0x85e0e0 */ if (fZ) goto L_0085e0e0;
L_0085e000:; BB(0x0085e000);
    /* 0085e000: cmp byte ptr [edi], 0x4c */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x4cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e003: jne 0x85e0fd */ if (!fZ) goto L_0085e0fd;
L_0085e009:; BB(0x0085e009);
    /* 0085e009: cmp byte ptr [edi + 1], 0x43 */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x43u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e00d: jne 0x85e0fd */ if (!fZ) goto L_0085e0fd;
L_0085e013:; BB(0x0085e013);
    /* 0085e013: cmp byte ptr [edi + 2], 0x5f */ {  u32 a = R8((u32)(r_edi+0x2u)); u32 b = 0x5fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e017: jne 0x85e0fd */ if (!fZ) goto L_0085e0fd;
L_0085e01d:; BB(0x0085e01d);
    /* 0085e01d: push 0x99839c */ { u32 v = 0x99839cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085e022: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e023: call 0x868890 */ r_esp -= 4; W32(r_esp, 0x85e028u); f_00868890();
    /* 0085e028: mov ebx, eax */ r_ebx = r_eax;
    /* 0085e02a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e02c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e02d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e02e: je 0x85e0f9 */ if (fZ) goto L_0085e0f9;
L_0085e034:; BB(0x0085e034);
    /* 0085e034: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085e036: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0085e039: je 0x85e0f9 */ if (fZ) goto L_0085e0f9;
L_0085e03f:; BB(0x0085e03f);
    /* 0085e03f: cmp byte ptr [ebx], 0x3b */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x3bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e042: je 0x85e0f9 */ if (fZ) goto L_0085e0f9;
L_0085e048:; BB(0x0085e048);
    /* 0085e048: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0085e04f: mov esi, 0xa23e34 */ r_esi = 0xa23e34u;
    /* 0085e054: jmp 0x85e059 */ goto L_0085e059;
L_0085e056:; BB(0x0085e056);
    /* 0085e056: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_0085e059:; BB(0x0085e059);
    /* 0085e059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e05a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e05b: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e05d: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x85e062u); f_008598c0();
    /* 0085e062: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085e065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e067: jne 0x85e076 */ if (!fZ) goto L_0085e076;
L_0085e069:; BB(0x0085e069);
    /* 0085e069: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e06b: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x85e070u); f_0085d760();
    /* 0085e070: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e073: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e074: je 0x85e084 */ if (fZ) goto L_0085e084;
L_0085e076:; BB(0x0085e076);
    /* 0085e076: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e079: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085e07c: cmp esi, 0xa23e64 */ {  u32 a = r_esi; u32 b = 0xa23e64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e082: jle 0x85e056 */ if ((fZ||fS!=fO)) goto L_0085e056;
L_0085e084:; BB(0x0085e084);
    /* 0085e084: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085e085: push 0x998394 */ { u32 v = 0x998394u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e08a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e08b: call 0x867cd0 */ r_esp -= 4; W32(r_esp, 0x85e090u); f_00867cd0();
    /* 0085e090: mov edi, eax */ r_edi = r_eax;
    /* 0085e092: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e095: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e096: jne 0x85e09d */ if (!fZ) goto L_0085e09d;
L_0085e098:; BB(0x0085e098);
    /* 0085e098: cmp byte ptr [ebx], 0x3b */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x3bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e09b: jne 0x85e0f9 */ if (!fZ) goto L_0085e0f9;
L_0085e09d:; BB(0x0085e09d);
    /* 0085e09d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085e0a0: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e0a3: jg 0x85e0c8 */ if ((!fZ&&fS==fO)) goto L_0085e0c8;
L_0085e0a5:; BB(0x0085e0a5);
    /* 0085e0a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e0a6: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e0a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e0aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e0ab: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x85e0b0u); f_00858900();
    /* 0085e0b0: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e0b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e0b4: mov byte ptr [ebp + edi - 0x10], 0 */ W8((u32)(r_ebp+r_edi+0xfffffff0u), 0x0u);
    /* 0085e0b9: call 0x85dd20 */ r_esp -= 4; W32(r_esp, 0x85e0beu); f_0085dd20();
    /* 0085e0be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085e0c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e0c3: je 0x85e0c8 */ if (fZ) goto L_0085e0c8;
L_0085e0c5:; BB(0x0085e0c5);
    /* 0085e0c5: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085e0c8:; BB(0x0085e0c8);
    /* 0085e0c8: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e0ca: cmp byte ptr [edi], 0 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e0cd: je 0x85e0d9 */ if (fZ) goto L_0085e0d9;
L_0085e0cf:; BB(0x0085e0cf);
    /* 0085e0cf: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e0d0: cmp byte ptr [edi], 0 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e0d3: jne 0x85e01d */ if (!fZ) goto L_0085e01d;
L_0085e0d9:; BB(0x0085e0d9);
    /* 0085e0d9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085e0db: cmp dword ptr [ebp - 0x14], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e0de: je 0x85e0e7 */ if (fZ) goto L_0085e0e7;
L_0085e0e0:; BB(0x0085e0e0);
    /* 0085e0e0: call 0x85db05 */ r_esp -= 4; W32(r_esp, 0x85e0e5u); f_0085db05();
L_0085e0e5:; BB(0x0085e0e5);
    /* 0085e0e5: mov esi, eax */ r_esi = r_eax;
L_0085e0e7:; BB(0x0085e0e7);
    /* 0085e0e7: mov eax, esi */ r_eax = r_esi;
L_0085e0e9:; BB(0x0085e0e9);
    /* 0085e0e9: mov ecx, dword ptr [ebp + 0x74] */ r_ecx = R32((u32)(r_ebp+0x74u));
    /* 0085e0ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e0ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e0ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085e0ef: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85e0f4u); f_0085e419();
    /* 0085e0f4: add ebp, 0x78 */ {  u32 a = r_ebp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085e0f7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085e0f8: ret  */ FN_RET(0x0085dfaf); r_esp += 4; return;
L_0085e0f9:; BB(0x0085e0f9);
    /* 0085e0f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e0fb: jmp 0x85e0e9 */ goto L_0085e0e9;
L_0085e0fd:; BB(0x0085e0fd);
    /* 0085e0fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e0fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e0ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e100: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e104: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e105: call 0x85dbc4 */ r_esp -= 4; W32(r_esp, 0x85e10au); f_0085dbc4();
    /* 0085e10a: mov esi, eax */ r_esi = r_eax;
    /* 0085e10c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085e10f: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e111: je 0x85e0e7 */ if (fZ) goto L_0085e0e7;
L_0085e113:; BB(0x0085e113);
    /* 0085e113: mov edi, 0xa23e2c */ r_edi = 0xa23e2cu;
    /* 0085e118: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085e11a: mov ebx, edi */ r_ebx = r_edi;
L_0085e11c:; BB(0x0085e11c);
    /* 0085e11c: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e11e: je 0x85e147 */ if (fZ) goto L_0085e147;
L_0085e120:; BB(0x0085e120);
    /* 0085e120: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e122: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e126: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x85e12bu); f_00864570();
    /* 0085e12b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e12d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e12e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e12f: je 0x85e144 */ if (fZ) goto L_0085e144;
L_0085e131:; BB(0x0085e131);
    /* 0085e131: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e135: call 0x85dd20 */ r_esp -= 4; W32(r_esp, 0x85e13au); f_0085dd20();
    /* 0085e13a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e13c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e13d: jne 0x85e144 */ if (!fZ) goto L_0085e144;
L_0085e13f:; BB(0x0085e13f);
    /* 0085e13f: and dword ptr [ebp - 0x18], eax */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e142: jmp 0x85e147 */ goto L_0085e147;
L_0085e144:; BB(0x0085e144);
    /* 0085e144: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085e147:; BB(0x0085e147);
    /* 0085e147: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085e14a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085e14b: cmp ebx, 0xa23e68 */ {  u32 a = r_ebx; u32 b = 0xa23e68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e151: jle 0x85e11c */ if ((fZ||fS!=fO)) goto L_0085e11c;
L_0085e153:; BB(0x0085e153);
    /* 0085e153: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085e155: cmp dword ptr [ebp - 0x18], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e158: je 0x85e178 */ if (fZ) goto L_0085e178;
L_0085e15a:; BB(0x0085e15a);
    /* 0085e15a: call 0x85db05 */ r_esp -= 4; W32(r_esp, 0x85e15fu); f_0085db05();
    /* 0085e15f: push dword ptr [0xa23e2c] */ { u32 v = R32((u32)(0xa23e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e165: mov esi, eax */ r_esi = r_eax;
    /* 0085e167: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85e16cu); f_00858882();
    /* 0085e16c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e16d: mov dword ptr [0xa23e2c], edi */ W32((u32)(0xa23e2cu), r_edi);
    /* 0085e173: jmp 0x85e0e7 */ goto L_0085e0e7;
L_0085e178:; BB(0x0085e178);
    /* 0085e178: cmp dword ptr [ebp - 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e17b: jne 0x85e0e0 */ if (!fZ) goto L_0085e0e0;
L_0085e181:; BB(0x0085e181);
    /* 0085e181: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085e183: jmp 0x85e0e7 */ goto L_0085e0e7;
}

