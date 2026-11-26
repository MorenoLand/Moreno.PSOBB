#include "protos.h"

void f_0049f010(void)
{
    FN_ENTER(0x0049f010);
    /* 0049f010: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f011: mov esi, ecx */ r_esi = r_ecx;
    /* 0049f013: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0049f019: mov edx, dword ptr [esi + 0x478] */ r_edx = R32((u32)(r_esi+0x478u));
    /* 0049f01f: add eax, -7 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f022: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f024: jne 0x49f041 */ if (!fZ) goto L_0049f041;
L_0049f026:; BB(0x0049f026);
    /* 0049f026: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0049f029: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049f02b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f02c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f02d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f02e: push 0x594 */ { u32 v = 0x594u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f033: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f038u); f_00814298();
    /* 0049f038: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f03b: mov edx, dword ptr [esi + 0x478] */ r_edx = R32((u32)(r_esi+0x478u));
L_0049f041:; BB(0x0049f041);
    /* 0049f041: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049f044: mov dword ptr [esi + 0x478], edx */ W32((u32)(r_esi+0x478u), r_edx);
    /* 0049f04a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f04c: jl 0x49f050 */ if ((fS!=fO)) goto L_0049f050;
L_0049f04e:; BB(0x0049f04e);
    /* 0049f04e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f04f: ret  */ FN_RET(0x0049f010); r_esp += 4; return;
L_0049f050:; BB(0x0049f050);
    /* 0049f050: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f052: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f054: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f059u); f_0049bd50();
    /* 0049f059: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f05a: ret  */ FN_RET(0x0049f010); r_esp += 4; return;
}

void f_0049f05c(void)
{
    FN_ENTER(0x0049f05c);
    /* 0049f05c: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 0049f062: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049f065: je 0x49f068 */ if (fZ) goto L_0049f068;
L_0049f067:; BB(0x0049f067);
    /* 0049f067: ret  */ FN_RET(0x0049f05c); r_esp += 4; return;
L_0049f068:; BB(0x0049f068);
    /* 0049f068: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f06a: call 0x49c214 */ r_esp -= 4; W32(r_esp, 0x49f06fu); f_0049c214();
    /* 0049f06f: ret  */ FN_RET(0x0049f05c); r_esp += 4; return;
}

void f_0049f070(void)
{
    FN_ENTER(0x0049f070);
    /* 0049f070: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f071: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f072: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049f074: push dword ptr [ebx + 0x474] */ { u32 v = R32((u32)(r_ebx+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049f07a: push dword ptr [ebx + 0x478] */ { u32 v = R32((u32)(r_ebx+0x478u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049f080: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f082: call 0x49c9e0 */ r_esp -= 4; W32(r_esp, 0x49f087u); f_0049c9e0();
    /* 0049f087: mov esi, dword ptr [ebx + 0x474] */ r_esi = R32((u32)(r_ebx+0x474u));
    /* 0049f08d: mov edx, dword ptr [ebx + 0x478] */ r_edx = R32((u32)(r_ebx+0x478u));
    /* 0049f093: lea eax, [esi - 7] */ r_eax = (u32)(r_esi+0xfffffff9u);
    /* 0049f096: add esi, -0x16 */ {  u32 a = r_esi; u32 b = 0xffffffeau; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049f099: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f09b: jne 0x49f0b8 */ if (!fZ) goto L_0049f0b8;
L_0049f09d:; BB(0x0049f09d);
    /* 0049f09d: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0049f0a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049f0a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0a5: push 0x591 */ { u32 v = 0x591u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0aa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f0afu); f_00814298();
    /* 0049f0af: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f0b2: mov edx, dword ptr [ebx + 0x478] */ r_edx = R32((u32)(r_ebx+0x478u));
L_0049f0b8:; BB(0x0049f0b8);
    /* 0049f0b8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f0ba: jne 0x49f0d1 */ if (!fZ) goto L_0049f0d1;
L_0049f0bc:; BB(0x0049f0bc);
    /* 0049f0bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0c0: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0049f0c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0c4: push 0x593 */ { u32 v = 0x593u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0c9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f0ceu); f_00814298();
    /* 0049f0ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f0d1:; BB(0x0049f0d1);
    /* 0049f0d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f0d3: call 0x49c6e4 */ r_esp -= 4; W32(r_esp, 0x49f0d8u); f_0049c6e4();
    /* 0049f0d8: mov eax, dword ptr [ebx + 0x478] */ r_eax = R32((u32)(r_ebx+0x478u));
    /* 0049f0de: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f0e1: je 0x49f0ed */ if (fZ) goto L_0049f0ed;
L_0049f0e3:; BB(0x0049f0e3);
    /* 0049f0e3: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f0e6: je 0x49f0ed */ if (fZ) goto L_0049f0ed;
L_0049f0e8:; BB(0x0049f0e8);
    /* 0049f0e8: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f0eb: jne 0x49f113 */ if (!fZ) goto L_0049f113;
L_0049f0ed:; BB(0x0049f0ed);
    /* 0049f0ed: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0ef: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0f4: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0049f0f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0f8: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49f0fdu); f_0050b7a4();
    /* 0049f0fd: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f0ff: push 0x22f */ { u32 v = 0x22fu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f104: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f105: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49f10au); f_0050b7a4();
    /* 0049f10a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f10d: mov eax, dword ptr [ebx + 0x478] */ r_eax = R32((u32)(r_ebx+0x478u));
L_0049f113:; BB(0x0049f113);
    /* 0049f113: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f116: je 0x49f147 */ if (fZ) goto L_0049f147;
L_0049f118:; BB(0x0049f118);
    /* 0049f118: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f11b: mov dword ptr [ebx + 0x478], eax */ W32((u32)(r_ebx+0x478u), r_eax);
    /* 0049f121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f123: jge 0x49f144 */ if ((fS==fO)) goto L_0049f144;
L_0049f125:; BB(0x0049f125);
    /* 0049f125: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 0049f12b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f12d: je 0x49f13b */ if (fZ) goto L_0049f13b;
L_0049f12f:; BB(0x0049f12f);
    /* 0049f12f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f131: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f133: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f138u); f_0049bd50();
    /* 0049f138: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f139: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f13a: ret  */ FN_RET(0x0049f070); r_esp += 4; return;
L_0049f13b:; BB(0x0049f13b);
    /* 0049f13b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f13d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f13f: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f144u); f_0049bd50();
L_0049f144:; BB(0x0049f144);
    /* 0049f144: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f145: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f146: ret  */ FN_RET(0x0049f070); r_esp += 4; return;
L_0049f147:; BB(0x0049f147);
    /* 0049f147: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f149: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x49f14eu); f_004d4288();
    /* 0049f14e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049f14f: mov eax, dword ptr [ebx + 0x478] */ r_eax = R32((u32)(r_ebx+0x478u));
    /* 0049f155: jmp 0x49f118 */ goto L_0049f118;
}

void f_0049f158(void)
{
    FN_ENTER(0x0049f158);
    /* 0049f158: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 0049f15e: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049f161: je 0x49f164 */ if (fZ) goto L_0049f164;
L_0049f163:; BB(0x0049f163);
    /* 0049f163: ret  */ FN_RET(0x0049f158); r_esp += 4; return;
L_0049f164:; BB(0x0049f164);
    /* 0049f164: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f166: call 0x49c214 */ r_esp -= 4; W32(r_esp, 0x49f16bu); f_0049c214();
    /* 0049f16b: ret  */ FN_RET(0x0049f158); r_esp += 4; return;
}

void f_0049f16c(void)
{
    FN_ENTER(0x0049f16c);
    /* 0049f16c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f16d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049f16f: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 0049f175: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
    /* 0049f17b: lea eax, [edx - 0x3c] */ r_eax = (u32)(r_edx+0xffffffc4u);
    /* 0049f17e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f180: jne 0x49f1a3 */ if (!fZ) goto L_0049f1a3;
L_0049f182:; BB(0x0049f182);
    /* 0049f182: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f186: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0049f189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f18a: push 0x59f */ { u32 v = 0x59fu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f18f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f194u); f_00814298();
    /* 0049f194: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f197: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 0049f19d: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
L_0049f1a3:; BB(0x0049f1a3);
    /* 0049f1a3: add edx, -0x78 */ {  u32 a = r_edx; u32 b = 0xffffff88u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049f1a6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f1a8: jne 0x49f1b7 */ if (!fZ) goto L_0049f1b7;
L_0049f1aa:; BB(0x0049f1aa);
    /* 0049f1aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f1ac: call 0x49c528 */ r_esp -= 4; W32(r_esp, 0x49f1b1u); f_0049c528();
    /* 0049f1b1: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
L_0049f1b7:; BB(0x0049f1b7);
    /* 0049f1b7: cmp ecx, 0xa0 */ {  u32 a = r_ecx; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f1bd: je 0x49f275 */ if (fZ) goto L_0049f275;
L_0049f1c3:; BB(0x0049f1c3);
    /* 0049f1c3: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f1c6: je 0x49f209 */ if (fZ) goto L_0049f209;
L_0049f1c8:; BB(0x0049f1c8);
    /* 0049f1c8: cmp ecx, 0x82 */ {  u32 a = r_ecx; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f1ce: jne 0x49f1ea */ if (!fZ) goto L_0049f1ea;
L_0049f1d0:; BB(0x0049f1d0);
    /* 0049f1d0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f1d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f1d4: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49f1d9u); f_0049cc24();
    /* 0049f1d9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f1db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f1dd: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49f1e2u); f_0049cc24();
    /* 0049f1e2: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
    /* 0049f1e8: jmp 0x49f22a */ goto L_0049f22a;
L_0049f1ea:; BB(0x0049f1ea);
    /* 0049f1ea: cmp ecx, 0x49 */ {  u32 a = r_ecx; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f1ed: jne 0x49f22a */ if (!fZ) goto L_0049f22a;
L_0049f1ef:; BB(0x0049f1ef);
    /* 0049f1ef: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f1f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f1f3: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f1f8u); f_0049cc88();
    /* 0049f1f8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f1fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f1fc: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f201u); f_0049cc88();
    /* 0049f201: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
    /* 0049f207: jmp 0x49f22a */ goto L_0049f22a;
L_0049f209:; BB(0x0049f209);
    /* 0049f209: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f20b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f20d: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f212u); f_0049cc88();
    /* 0049f212: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f214: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f216: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f21bu); f_0049cc88();
    /* 0049f21b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0049f21d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f21f: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f224u); f_0049cc88();
    /* 0049f224: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
L_0049f22a:; BB(0x0049f22a);
    /* 0049f22a: cmp ecx, 0x36 */ {  u32 a = r_ecx; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f22d: je 0x49f265 */ if (fZ) goto L_0049f265;
L_0049f22f:; BB(0x0049f22f);
    /* 0049f22f: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049f232: mov dword ptr [ebp + 0x478], ecx */ W32((u32)(r_ebp+0x478u), r_ecx);
    /* 0049f238: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f23a: jl 0x49f23e */ if ((fS!=fO)) goto L_0049f23e;
L_0049f23c:; BB(0x0049f23c);
    /* 0049f23c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f23d: ret  */ FN_RET(0x0049f16c); r_esp += 4; return;
L_0049f23e:; BB(0x0049f23e);
    /* 0049f23e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f240: call 0x49bf8c */ r_esp -= 4; W32(r_esp, 0x49f245u); f_0049bf8c();
    /* 0049f245: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 0049f24b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f24d: je 0x49f25a */ if (fZ) goto L_0049f25a;
L_0049f24f:; BB(0x0049f24f);
    /* 0049f24f: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f251: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f253: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f258u); f_0049bd50();
    /* 0049f258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f259: ret  */ FN_RET(0x0049f16c); r_esp += 4; return;
L_0049f25a:; BB(0x0049f25a);
    /* 0049f25a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f25c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f25e: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f263u); f_0049bd50();
    /* 0049f263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f264: ret  */ FN_RET(0x0049f16c); r_esp += 4; return;
L_0049f265:; BB(0x0049f265);
    /* 0049f265: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f267: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x49f26cu); f_004d4288();
    /* 0049f26c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049f26d: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
    /* 0049f273: jmp 0x49f22f */ goto L_0049f22f;
L_0049f275:; BB(0x0049f275);
    /* 0049f275: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f277: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f279: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49f27eu); f_0049cc24();
    /* 0049f27e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f280: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f282: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49f287u); f_0049cc24();
    /* 0049f287: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0049f289: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f28b: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49f290u); f_0049cc24();
    /* 0049f290: mov ecx, dword ptr [ebp + 0x478] */ r_ecx = R32((u32)(r_ebp+0x478u));
    /* 0049f296: jmp 0x49f22a */ goto L_0049f22a;
}

void f_0049f298(void)
{
    FN_ENTER(0x0049f298);
    /* 0049f298: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 0049f29e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049f2a1: je 0x49f2a4 */ if (fZ) goto L_0049f2a4;
L_0049f2a3:; BB(0x0049f2a3);
    /* 0049f2a3: ret  */ FN_RET(0x0049f298); r_esp += 4; return;
L_0049f2a4:; BB(0x0049f2a4);
    /* 0049f2a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f2a6: call 0x49c214 */ r_esp -= 4; W32(r_esp, 0x49f2abu); f_0049c214();
    /* 0049f2ab: ret  */ FN_RET(0x0049f298); r_esp += 4; return;
}

void f_0049f2ac(void) /* sub_49F2AC */
{
    FN_ENTER(0x0049f2ac);
    /* 0049f2ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f2ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f2ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f2af: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049f2b2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049f2b4: movzx edx, byte ptr [0xa47458] */ r_edx = (u32)R8((u32)(0xa47458u));
    /* 0049f2bb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049f2be: jne 0x49f2f8 */ if (!fZ) goto L_0049f2f8;
L_0049f2c0:; BB(0x0049f2c0);
    /* 0049f2c0: fld dword ptr [0x903640] */ FPUSH(R_F32((u32)(0x903640u)));
    /* 0049f2c6: fdiv dword ptr [0xa47450] */ ST(0) = ST(0) / R_F32((u32)(0xa47450u));
    /* 0049f2cc: fadd dword ptr [0x903644] */ ST(0) = ST(0) + R_F32((u32)(0x903644u));
    /* 0049f2d2: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049f2d5: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049f2d9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049f2de: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049f2e2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049f2e6: fistp dword ptr [0xa4745c] */ W32((u32)(0xa4745cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0049f2ec: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049f2ef: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049f2f2: mov byte ptr [0xa47458], dl */ W8((u32)(0xa47458u), (u8)r_edx);
L_0049f2f8:; BB(0x0049f2f8);
    /* 0049f2f8: mov eax, dword ptr [0xa4745c] */ r_eax = R32((u32)(0xa4745cu));
    /* 0049f2fd: mov ebp, dword ptr [ebx + 0x474] */ r_ebp = R32((u32)(r_ebx+0x474u));
    /* 0049f303: mov esi, dword ptr [ebx + 0x478] */ r_esi = R32((u32)(r_ebx+0x478u));
    /* 0049f309: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049f30b: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f30d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f30f: jne 0x49f354 */ if (!fZ) goto L_0049f354;
L_0049f311:; BB(0x0049f311);
    /* 0049f311: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0049f317: mov ebp, 0x595 */ r_ebp = 0x595u;
    /* 0049f31c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f31f: je 0x49f32b */ if (fZ) goto L_0049f32b;
L_0049f321:; BB(0x0049f321);
    /* 0049f321: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f324: je 0x49f32b */ if (fZ) goto L_0049f32b;
L_0049f326:; BB(0x0049f326);
    /* 0049f326: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f329: jne 0x49f330 */ if (!fZ) goto L_0049f330;
L_0049f32b:; BB(0x0049f32b);
    /* 0049f32b: mov ebp, 0x596 */ r_ebp = 0x596u;
L_0049f330:; BB(0x0049f330);
    /* 0049f330: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0049f333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049f335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f337: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f339: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f33eu); f_00814298();
    /* 0049f33e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f341: movzx edx, byte ptr [0xa47458] */ r_edx = (u32)R8((u32)(0xa47458u));
    /* 0049f348: mov ebp, dword ptr [ebx + 0x474] */ r_ebp = R32((u32)(r_ebx+0x474u));
    /* 0049f34e: mov esi, dword ptr [ebx + 0x478] */ r_esi = R32((u32)(r_ebx+0x478u));
L_0049f354:; BB(0x0049f354);
    /* 0049f354: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049f357: jne 0x49f38e */ if (!fZ) goto L_0049f38e;
L_0049f359:; BB(0x0049f359);
    /* 0049f359: fld dword ptr [0x903640] */ FPUSH(R_F32((u32)(0x903640u)));
    /* 0049f35f: fdiv dword ptr [0xa47450] */ ST(0) = ST(0) / R_F32((u32)(0xa47450u));
    /* 0049f365: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049f368: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049f36c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049f371: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049f375: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049f379: fistp dword ptr [0xa47460] */ W32((u32)(0xa47460u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049f37f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049f382: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049f388: mov byte ptr [0xa47458], dl */ W8((u32)(0xa47458u), (u8)r_edx);
L_0049f38e:; BB(0x0049f38e);
    /* 0049f38e: sub ebp, dword ptr [0xa47460] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xa47460u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0049f394: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f396: jne 0x49f3cf */ if (!fZ) goto L_0049f3cf;
L_0049f398:; BB(0x0049f398);
    /* 0049f398: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0049f39e: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f3a1: je 0x49f3ad */ if (fZ) goto L_0049f3ad;
L_0049f3a3:; BB(0x0049f3a3);
    /* 0049f3a3: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f3a6: je 0x49f3ad */ if (fZ) goto L_0049f3ad;
L_0049f3a8:; BB(0x0049f3a8);
    /* 0049f3a8: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f3ab: jne 0x49f3c2 */ if (!fZ) goto L_0049f3c2;
L_0049f3ad:; BB(0x0049f3ad);
    /* 0049f3ad: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0049f3b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049f3b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f3b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f3b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f3b5: push 0x597 */ { u32 v = 0x597u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f3ba: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f3bfu); f_00814298();
    /* 0049f3bf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f3c2:; BB(0x0049f3c2);
    /* 0049f3c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f3c4: call 0x49bf98 */ r_esp -= 4; W32(r_esp, 0x49f3c9u); f_0049bf98();
    /* 0049f3c9: mov esi, dword ptr [ebx + 0x478] */ r_esi = R32((u32)(r_ebx+0x478u));
L_0049f3cf:; BB(0x0049f3cf);
    /* 0049f3cf: cmp esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f3d2: je 0x49f477 */ if (fZ) goto L_0049f477;
L_0049f3d8:; BB(0x0049f3d8);
    /* 0049f3d8: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049f3db: mov dword ptr [ebx + 0x478], esi */ W32((u32)(r_ebx+0x478u), r_esi);
    /* 0049f3e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049f3e3: jge 0x49f418 */ if ((fS==fO)) goto L_0049f418;
L_0049f3e5:; BB(0x0049f3e5);
    /* 0049f3e5: mov ebp, dword ptr [ebx + 0x37c] */ r_ebp = R32((u32)(r_ebx+0x37cu));
    /* 0049f3eb: cmp ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049f3ee: jl 0x49f41f */ if ((fS!=fO)) goto L_0049f41f;
L_0049f3f0:; BB(0x0049f3f0);
    /* 0049f3f0: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049f3f3: jg 0x49f41f */ if ((!fZ&&fS==fO)) goto L_0049f41f;
L_0049f3f5:; BB(0x0049f3f5);
    /* 0049f3f5: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 0049f3fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f3fd: je 0x49f40f */ if (fZ) goto L_0049f40f;
L_0049f3ff:; BB(0x0049f3ff);
    /* 0049f3ff: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f401: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f403: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f408u); f_0049bd50();
    /* 0049f408: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049f40b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f40c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f40d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f40e: ret  */ FN_RET(0x0049f2ac); r_esp += 4; return;
L_0049f40f:; BB(0x0049f40f);
    /* 0049f40f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f411: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f413: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f418u); f_0049bd50();
L_0049f418:; BB(0x0049f418);
    /* 0049f418: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049f41b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f41c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f41d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f41e: ret  */ FN_RET(0x0049f2ac); r_esp += 4; return;
L_0049f41f:; BB(0x0049f41f);
    /* 0049f41f: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0049f424: movzx esi, byte ptr [ebx + 0x490] */ r_esi = (u32)R8((u32)(r_ebx+0x490u));
    /* 0049f42b: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0049f42e: add ebp, -0xf */ {  u32 a = r_ebp; u32 b = 0xfffffff1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049f431: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0049f433: mov eax, ebp */ r_eax = r_ebp;
    /* 0049f435: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0049f438: mov ecx, edx */ r_ecx = r_edx;
    /* 0049f43a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0049f43c: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0049f43f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f441: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0049f443: lea ebp, [ebp + esi + 1] */ r_ebp = (u32)(r_ebp+r_esi+0x1u);
    /* 0049f447: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0049f44c: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0049f44e: mov eax, ebp */ r_eax = r_ebp;
    /* 0049f450: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0049f453: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0049f455: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0049f458: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f45a: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0049f45c: lea eax, [ecx + ecx - 2] */ r_eax = (u32)(r_ecx+r_ecx+0xfffffffeu);
    /* 0049f460: lea eax, [eax + ecx - 1] */ r_eax = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 0049f464: lea eax, [ebp + eax + 0xf] */ r_eax = (u32)(r_ebp+r_eax+0xfu);
    /* 0049f468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049f46b: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f470u); f_0049bd50();
    /* 0049f470: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049f473: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f474: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f475: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f476: ret  */ FN_RET(0x0049f2ac); r_esp += 4; return;
L_0049f477:; BB(0x0049f477);
    /* 0049f477: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f479: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x49f47eu); f_004d4288();
    /* 0049f47e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049f47f: mov esi, dword ptr [ebx + 0x478] */ r_esi = R32((u32)(r_ebx+0x478u));
    /* 0049f485: jmp 0x49f3d8 */ goto L_0049f3d8;
}

void f_0049f48c(void)
{
    FN_ENTER(0x0049f48c);
    /* 0049f48c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f48d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f48e: mov esi, ecx */ r_esi = r_ecx;
    /* 0049f490: fild dword ptr [esi + 0x478] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x478u)));
    /* 0049f496: fild dword ptr [esi + 0x474] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x474u)));
    /* 0049f49c: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049f49e: fld dword ptr [0x90363c] */ FPUSH(R_F32((u32)(0x90363cu)));
    /* 0049f4a4: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 0049f4a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049f4a8: fcom dword ptr [0x903638] */ fx_compare(ST(0), R_F32((u32)(0x903638u))); 
    /* 0049f4ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049f4b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049f4b1: jae 0x49f4c1 */ if (!fC) goto L_0049f4c1;
L_0049f4b3:; BB(0x0049f4b3);
    /* 0049f4b3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049f4b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049f4b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049f4b9: mov dword ptr [esi + 0x434], eax */ W32((u32)(r_esi+0x434u), r_eax);
    /* 0049f4bf: jmp 0x49f4d4 */ goto L_0049f4d4;
L_0049f4c1:; BB(0x0049f4c1);
    /* 0049f4c1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049f4c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049f4c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049f4c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0049f4c8: jb 0x49f4cc */ if (fC) goto L_0049f4cc;
L_0049f4ca:; BB(0x0049f4ca);
    /* 0049f4ca: fst st(1) */ ST(1) = ST(0);
L_0049f4cc:; BB(0x0049f4cc);
    /* 0049f4cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049f4ce: fstp dword ptr [esi + 0x434] */ W_F32((u32)(r_esi+0x434u), ST(0)); FPOP();
L_0049f4d4:; BB(0x0049f4d4);
    /* 0049f4d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f4d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f4d8: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0049f4db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f4dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f4dd: push 0x59b */ { u32 v = 0x59bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f4e2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x49f4e7u); f_008144b0();
    /* 0049f4e7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f4ea: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 0049f4f0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f4f3: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049f4f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f4fb: jl 0x49f500 */ if ((fS!=fO)) goto L_0049f500;
L_0049f4fd:; BB(0x0049f4fd);
    /* 0049f4fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f4fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f4ff: ret  */ FN_RET(0x0049f48c); r_esp += 4; return;
L_0049f500:; BB(0x0049f500);
    /* 0049f500: mov dword ptr [esi + 0x430], 1 */ W32((u32)(r_esi+0x430u), 0x1u);
    /* 0049f50a: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f50c: mov dword ptr [esi + 0x434], 0x3f800000 */ W32((u32)(r_esi+0x434u), 0x3f800000u);
    /* 0049f516: call 0x49caa4 */ r_esp -= 4; W32(r_esp, 0x49f51bu); f_0049caa4();
    /* 0049f51b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f51d: je 0x49f55c */ if (fZ) goto L_0049f55c;
L_0049f51f:; BB(0x0049f51f);
    /* 0049f51f: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f521: call 0x49a438 */ r_esp -= 4; W32(r_esp, 0x49f526u); f_0049a438();
    /* 0049f526: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f528: jne 0x49f53c */ if (!fZ) goto L_0049f53c;
L_0049f52a:; BB(0x0049f52a);
    /* 0049f52a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f52c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f52e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f52f: push 0x5a3 */ { u32 v = 0x5a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f534: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f539u); f_00814298();
    /* 0049f539: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f53c:; BB(0x0049f53c);
    /* 0049f53c: movzx eax, word ptr [esi + 0x574] */ r_eax = (u32)R16((u32)(r_esi+0x574u));
    /* 0049f543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f544: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49f549u); f_0068d5a8();
    /* 0049f549: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049f54a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f54c: je 0x49f55c */ if (fZ) goto L_0049f55c;
L_0049f54e:; BB(0x0049f54e);
    /* 0049f54e: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f550: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f554: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49f559u); f_0050b510();
    /* 0049f559: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f55c:; BB(0x0049f55c);
    /* 0049f55c: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f55e: call 0x49e250 */ r_esp -= 4; W32(r_esp, 0x49f563u); f_0049e250();
    /* 0049f563: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f565: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f567: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f56cu); f_0049cc88();
    /* 0049f56c: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f56e: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f570: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f575u); f_0049bd50();
    /* 0049f575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f576: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f577: ret  */ FN_RET(0x0049f48c); r_esp += 4; return;
}

void f_0049f540(void)
{
    FN_ENTER(0x0049f540);
    /* 0049f540: add eax, 0xe8500000 */ {  u32 a = r_eax; u32 b = 0xe8500000u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0049f545: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049f546: loopne 0x49f566 */ r_ecx--; if (r_ecx && !fZ) goto L_0049f566;
    /* 0049f548: add byte ptr [ecx - 0x7b], bl */ { u32 ad = (u32)(r_ecx+0xffffff85u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0049f54b: sal byte ptr [esi + ecx + 0x6a], 0x36 */ { u32 ad = (u32)(r_esi+r_ecx+0x6au); u32 c = (22u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0049f550: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f554: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49f559u); f_0050b510();
    /* 0049f559: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f55c: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f55e: call 0x49e250 */ r_esp -= 4; W32(r_esp, 0x49f563u); f_0049e250();
    /* 0049f563: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f565: mov ecx, esi */ r_ecx = r_esi;
L_0049f566:; BB(0x0049f566);
    /* 0049f566: into  */ UNSUP(0x0049f566, "into ");
    /* 0049f567: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f56cu); f_0049cc88();
    /* 0049f56c: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f56e: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f570: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f575u); f_0049bd50();
    /* 0049f575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f576: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f577: ret  */ FN_RET(0x0049f540); r_esp += 4; return;
}

void f_0049f578(void)
{
    FN_ENTER(0x0049f578);
    /* 0049f578: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f579: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f57a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049f57c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f57e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f580: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0049f583: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f584: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f585: push 0x59b */ { u32 v = 0x59bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f58a: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x49f58fu); f_008144b0();
    /* 0049f58f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f592: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 0049f598: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f59b: mov dword ptr [ebp + 0x478], eax */ W32((u32)(r_ebp+0x478u), r_eax);
    /* 0049f5a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f5a3: jl 0x49f5a8 */ if ((fS!=fO)) goto L_0049f5a8;
L_0049f5a5:; BB(0x0049f5a5);
    /* 0049f5a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f5a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f5a7: ret  */ FN_RET(0x0049f578); r_esp += 4; return;
L_0049f5a8:; BB(0x0049f5a8);
    /* 0049f5a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f5aa: call 0x49caa4 */ r_esp -= 4; W32(r_esp, 0x49f5afu); f_0049caa4();
    /* 0049f5af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f5b1: je 0x49f5f0 */ if (fZ) goto L_0049f5f0;
L_0049f5b3:; BB(0x0049f5b3);
    /* 0049f5b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f5b5: call 0x49a438 */ r_esp -= 4; W32(r_esp, 0x49f5bau); f_0049a438();
    /* 0049f5ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f5bc: jne 0x49f5d0 */ if (!fZ) goto L_0049f5d0;
L_0049f5be:; BB(0x0049f5be);
    /* 0049f5be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5c3: push 0x5a3 */ { u32 v = 0x5a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5c8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f5cdu); f_00814298();
    /* 0049f5cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f5d0:; BB(0x0049f5d0);
    /* 0049f5d0: movzx eax, word ptr [ebp + 0x574] */ r_eax = (u32)R16((u32)(r_ebp+0x574u));
    /* 0049f5d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5d8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49f5ddu); f_0068d5a8();
    /* 0049f5dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049f5de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f5e0: je 0x49f5f0 */ if (fZ) goto L_0049f5f0;
L_0049f5e2:; BB(0x0049f5e2);
    /* 0049f5e2: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5e4: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f5e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5e8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49f5edu); f_0050b510();
    /* 0049f5ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f5f0:; BB(0x0049f5f0);
    /* 0049f5f0: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f5f4: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f5f9u); f_0049bd50();
    /* 0049f5f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f5fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f5fb: ret  */ FN_RET(0x0049f578); r_esp += 4; return;
}

void f_0049f5fc(void)
{
    FN_ENTER(0x0049f5fc);
    /* 0049f5fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f5fd: mov esi, ecx */ r_esi = r_ecx;
    /* 0049f5ff: fild dword ptr [esi + 0x478] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x478u)));
    /* 0049f605: fild dword ptr [esi + 0x474] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x474u)));
    /* 0049f60b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0049f60d: fcom dword ptr [0x903634] */ fx_compare(ST(0), R_F32((u32)(0x903634u))); 
    /* 0049f613: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049f615: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049f616: jae 0x49f624 */ if (!fC) goto L_0049f624;
L_0049f618:; BB(0x0049f618);
    /* 0049f618: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049f61a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049f61c: mov dword ptr [esi + 0x434], eax */ W32((u32)(r_esi+0x434u), r_eax);
    /* 0049f622: jmp 0x49f63b */ goto L_0049f63b;
L_0049f624:; BB(0x0049f624);
    /* 0049f624: fld dword ptr [0x903630] */ FPUSH(R_F32((u32)(0x903630u)));
    /* 0049f62a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049f62c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049f62e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049f62f: ja 0x49f633 */ if ((!fC&&!fZ)) goto L_0049f633;
L_0049f631:; BB(0x0049f631);
    /* 0049f631: fst st(1) */ ST(1) = ST(0);
L_0049f633:; BB(0x0049f633);
    /* 0049f633: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049f635: fstp dword ptr [esi + 0x434] */ W_F32((u32)(r_esi+0x434u), ST(0)); FPOP();
L_0049f63b:; BB(0x0049f63b);
    /* 0049f63b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049f63d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f63e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f63f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f641: push 0x59b */ { u32 v = 0x59bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f646: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x49f64bu); f_008144b0();
    /* 0049f64b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f64e: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 0049f654: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f657: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049f65d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f65f: jl 0x49f663 */ if ((fS!=fO)) goto L_0049f663;
L_0049f661:; BB(0x0049f661);
    /* 0049f661: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f662: ret  */ FN_RET(0x0049f5fc); r_esp += 4; return;
L_0049f663:; BB(0x0049f663);
    /* 0049f663: mov dword ptr [esi + 0x430], 0 */ W32((u32)(r_esi+0x430u), 0x0u);
    /* 0049f66d: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f66f: mov dword ptr [esi + 0x434], 0 */ W32((u32)(r_esi+0x434u), 0x0u);
    /* 0049f679: call 0x49e250 */ r_esp -= 4; W32(r_esp, 0x49f67eu); f_0049e250();
    /* 0049f67e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f680: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f682: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49f687u); f_0049cc88();
    /* 0049f687: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f689: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f68b: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f690u); f_0049bd50();
    /* 0049f690: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f691: ret  */ FN_RET(0x0049f5fc); r_esp += 4; return;
}

void f_0049f694(void) /* sub_49F694 */
{
    FN_ENTER(0x0049f694);
    /* 0049f694: mov eax, dword ptr [ecx + 0x478] */ r_eax = R32((u32)(r_ecx+0x478u));
    /* 0049f69a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f69d: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049f6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f6a5: jl 0x49f6a8 */ if ((fS!=fO)) goto L_0049f6a8;
L_0049f6a7:; BB(0x0049f6a7);
    /* 0049f6a7: ret  */ FN_RET(0x0049f694); r_esp += 4; return;
L_0049f6a8:; BB(0x0049f6a8);
    /* 0049f6a8: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f6aa: call 0x49bd50 */ r_esp -= 4; W32(r_esp, 0x49f6afu); f_0049bd50();
    /* 0049f6af: ret  */ FN_RET(0x0049f694); r_esp += 4; return;
}

void f_0049f6b0(void)
{
    FN_ENTER(0x0049f6b0);
    /* 0049f6b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f6b1: mov edi, ecx */ r_edi = r_ecx;
    /* 0049f6b3: mov eax, dword ptr [edi + 0x478] */ r_eax = R32((u32)(r_edi+0x478u));
    /* 0049f6b9: mov ecx, dword ptr [edi + 0x474] */ r_ecx = R32((u32)(r_edi+0x474u));
    /* 0049f6bf: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0049f6c1: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049f6c4: jl 0x49f6fd */ if ((fS!=fO)) goto L_0049f6fd;
L_0049f6c6:; BB(0x0049f6c6);
    /* 0049f6c6: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 0049f6cb: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0049f6cd: mov eax, ecx */ r_eax = r_ecx;
    /* 0049f6cf: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0049f6d2: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049f6d4: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0049f6d7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0049f6d9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0049f6dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f6de: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f6e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f6e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049f6e4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049f6e6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0049f6e8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0049f6ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f6ec: jne 0x49f6fd */ if (!fZ) goto L_0049f6fd;
L_0049f6ee:; BB(0x0049f6ee);
    /* 0049f6ee: mov ecx, edi */ r_ecx = r_edi;
    /* 0049f6f0: call 0x49c358 */ r_esp -= 4; W32(r_esp, 0x49f6f5u); f_0049c358();
    /* 0049f6f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f6f7: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x49f6fcu); f_004d4288();
    /* 0049f6fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0049f6fd:; BB(0x0049f6fd);
    /* 0049f6fd: mov ecx, edi */ r_ecx = r_edi;
    /* 0049f6ff: call 0x49f708 */ r_esp -= 4; W32(r_esp, 0x49f704u); f_0049f708();
    /* 0049f704: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049f705: ret  */ FN_RET(0x0049f6b0); r_esp += 4; return;
}

void f_0049f708(void) /* sub_49F708 */
{
    FN_ENTER(0x0049f708);
    /* 0049f708: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f709: mov esi, ecx */ r_esi = r_ecx;
    /* 0049f70b: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 0049f711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f713: jne 0x49f7a2 */ if (!fZ) goto L_0049f7a2;
L_0049f719:; BB(0x0049f719);
    /* 0049f719: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f71b: call 0x49ccb4 */ r_esp -= 4; W32(r_esp, 0x49f720u); f_0049ccb4();
    /* 0049f720: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f723: je 0x49f75a */ if (fZ) goto L_0049f75a;
L_0049f725:; BB(0x0049f725);
    /* 0049f725: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f727: call 0x49c758 */ r_esp -= 4; W32(r_esp, 0x49f72cu); f_0049c758();
    /* 0049f72c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f72e: je 0x49f73b */ if (fZ) goto L_0049f73b;
L_0049f730:; BB(0x0049f730);
    /* 0049f730: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f732: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f734: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f739u); f_0049b19c();
    /* 0049f739: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f73a: ret  */ FN_RET(0x0049f708); r_esp += 4; return;
L_0049f73b:; BB(0x0049f73b);
    /* 0049f73b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f73d: call 0x49c788 */ r_esp -= 4; W32(r_esp, 0x49f742u); f_0049c788();
    /* 0049f742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f744: je 0x49f751 */ if (fZ) goto L_0049f751;
L_0049f746:; BB(0x0049f746);
    /* 0049f746: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f748: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f74a: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f74fu); f_0049b19c();
    /* 0049f74f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f750: ret  */ FN_RET(0x0049f708); r_esp += 4; return;
L_0049f751:; BB(0x0049f751);
    /* 0049f751: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f753: call 0x49ba80 */ r_esp -= 4; W32(r_esp, 0x49f758u); f_0049ba80();
    /* 0049f758: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f759: ret  */ FN_RET(0x0049f708); r_esp += 4; return;
L_0049f75a:; BB(0x0049f75a);
    /* 0049f75a: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f75c: call 0x49c814 */ r_esp -= 4; W32(r_esp, 0x49f761u); f_0049c814();
    /* 0049f761: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f763: jne 0x49f775 */ if (!fZ) goto L_0049f775;
L_0049f765:; BB(0x0049f765);
    /* 0049f765: movzx eax, word ptr [esi + 0x574] */ r_eax = (u32)R16((u32)(r_esi+0x574u));
    /* 0049f76c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f771: je 0x49f780 */ if (fZ) goto L_0049f780;
L_0049f773:; BB(0x0049f773);
    /* 0049f773: jmp 0x49f725 */ goto L_0049f725;
L_0049f775:; BB(0x0049f775);
    /* 0049f775: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0049f777: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f779: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f77eu); f_0049b19c();
    /* 0049f77e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f77f: ret  */ FN_RET(0x0049f708); r_esp += 4; return;
L_0049f780:; BB(0x0049f780);
    /* 0049f780: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f782: call 0x49ca9c */ r_esp -= 4; W32(r_esp, 0x49f787u); f_0049ca9c();
    /* 0049f787: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0049f78a: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f790: je 0x49f725 */ if (fZ) goto L_0049f725;
L_0049f792:; BB(0x0049f792);
    /* 0049f792: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f794: mov word ptr [esi + 0x47c], ax */ W16((u32)(r_esi+0x47cu), (u16)r_eax);
    /* 0049f79b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f79d: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f7a2u); f_0049b19c();
L_0049f7a2:; BB(0x0049f7a2);
    /* 0049f7a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f7a3: ret  */ FN_RET(0x0049f708); r_esp += 4; return;
}

void f_0049f7a4(void)
{
    FN_ENTER(0x0049f7a4);
    /* 0049f7a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f7a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049f7a7: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 0049f7ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049f7af: jne 0x49f7d4 */ if (!fZ) goto L_0049f7d4;
L_0049f7b1:; BB(0x0049f7b1);
    /* 0049f7b1: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0049f7b7: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f7ba: je 0x49f7c5 */ if (fZ) goto L_0049f7c5;
L_0049f7bc:; BB(0x0049f7bc);
    /* 0049f7bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f7be: call 0x49ba80 */ r_esp -= 4; W32(r_esp, 0x49f7c3u); f_0049ba80();
    /* 0049f7c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f7c4: ret  */ FN_RET(0x0049f7a4); r_esp += 4; return;
L_0049f7c5:; BB(0x0049f7c5);
    /* 0049f7c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f7c7: call 0x49b284 */ r_esp -= 4; W32(r_esp, 0x49f7ccu); f_0049b284();
    /* 0049f7cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f7cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049f7cf: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f7d4u); f_0049b19c();
L_0049f7d4:; BB(0x0049f7d4);
    /* 0049f7d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f7d5: ret  */ FN_RET(0x0049f7a4); r_esp += 4; return;
}

void f_0049f7d8(void)
{
    FN_ENTER(0x0049f7d8);
    /* 0049f7d8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0049f7db: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f7e0: jne 0x49f7fc */ if (!fZ) goto L_0049f7fc;
L_0049f7e2:; BB(0x0049f7e2);
    /* 0049f7e2: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 0049f7e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f7ea: je 0x49f7f4 */ if (fZ) goto L_0049f7f4;
L_0049f7ec:; BB(0x0049f7ec);
    /* 0049f7ec: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0049f7ee: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f7f3u); f_0049b19c();
    /* 0049f7f3: ret  */ FN_RET(0x0049f7d8); r_esp += 4; return;
L_0049f7f4:; BB(0x0049f7f4);
    /* 0049f7f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f7f6: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f7fbu); f_0049b19c();
    /* 0049f7fb: ret  */ FN_RET(0x0049f7d8); r_esp += 4; return;
L_0049f7fc:; BB(0x0049f7fc);
    /* 0049f7fc: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f7fe: call 0x49b19c */ r_esp -= 4; W32(r_esp, 0x49f803u); f_0049b19c();
    /* 0049f803: ret  */ FN_RET(0x0049f7d8); r_esp += 4; return;
}

void f_0049f804(void) /* sub_49F804 */
{
    FN_ENTER(0x0049f804);
    /* 0049f804: mov dword ptr [0xa4749c], 0x3f800000 */ W32((u32)(0xa4749cu), 0x3f800000u);
    /* 0049f80e: mov dword ptr [0xa474a0], 0x41000000 */ W32((u32)(0xa474a0u), 0x41000000u);
    /* 0049f818: mov dword ptr [0xa474a4], 0x3fc00000 */ W32((u32)(0xa474a4u), 0x3fc00000u);
    /* 0049f822: ret  */ FN_RET(0x0049f804); r_esp += 4; return;
}

void f_0049f824(void)
{
    FN_ENTER(0x0049f824);
    /* 0049f824: mov dword ptr [ecx + 0x51c], 0 */ W32((u32)(r_ecx+0x51cu), 0x0u);
    /* 0049f82e: mov eax, 0x4b */ r_eax = 0x4bu;
    /* 0049f833: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049f839: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049f83f: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49f844u); f_0049e278();
    /* 0049f844: ret  */ FN_RET(0x0049f824); r_esp += 4; return;
}

void f_0049f848(void) /* sub_49F848 */
{
    FN_ENTER(0x0049f848);
    /* 0049f848: mov eax, dword ptr [ecx + 0x4ec] */ r_eax = R32((u32)(r_ecx+0x4ecu));
    /* 0049f84e: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049f854: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049f85a: add dword ptr [ecx + 0x438], 1 */ { u32 ad = (u32)(r_ecx+0x438u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049f861: ret  */ FN_RET(0x0049f848); r_esp += 4; return;
}

void f_0049f864(void) /* sub_49F864 */
{
    FN_ENTER(0x0049f864);
    /* 0049f864: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049f867: movzx edx, byte ptr [0xa47464] */ r_edx = (u32)R8((u32)(0xa47464u));
    /* 0049f86e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049f871: jne 0x49f8a8 */ if (!fZ) goto L_0049f8a8;
L_0049f873:; BB(0x0049f873);
    /* 0049f873: fld dword ptr [0x903620] */ FPUSH(R_F32((u32)(0x903620u)));
    /* 0049f879: fdiv dword ptr [0x903360] */ ST(0) = ST(0) / R_F32((u32)(0x903360u));
    /* 0049f87f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049f882: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049f886: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049f88b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049f88f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049f893: fistp dword ptr [0xa47468] */ W32((u32)(0xa47468u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049f899: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049f89c: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049f8a2: mov byte ptr [0xa47464], dl */ W8((u32)(0xa47464u), (u8)r_edx);
L_0049f8a8:; BB(0x0049f8a8);
    /* 0049f8a8: mov eax, dword ptr [0xa47468] */ r_eax = R32((u32)(0xa47468u));
    /* 0049f8ad: add dword ptr [ecx + 0x438], 1 */ { u32 ad = (u32)(r_ecx+0x438u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0049f8b4: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049f8ba: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049f8c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049f8c3: ret  */ FN_RET(0x0049f864); r_esp += 4; return;
}

void f_0049f8c4(void) /* sub_49F8C4 */
{
    FN_ENTER(0x0049f8c4);
    /* 0049f8c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f8c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f8c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f8c7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049f8ca: mov esi, ecx */ r_esi = r_ecx;
    /* 0049f8cc: movzx edx, byte ptr [0xa4746c] */ r_edx = (u32)R8((u32)(0xa4746cu));
    /* 0049f8d3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049f8d6: jne 0x49f910 */ if (!fZ) goto L_0049f910;
L_0049f8d8:; BB(0x0049f8d8);
    /* 0049f8d8: fld dword ptr [0x90361c] */ FPUSH(R_F32((u32)(0x90361cu)));
    /* 0049f8de: fdiv dword ptr [0x90335c] */ ST(0) = ST(0) / R_F32((u32)(0x90335cu));
    /* 0049f8e4: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0049f8e8: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0049f8ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049f8f2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049f8f6: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0049f8fa: fistp dword ptr [0xa47470] */ W32((u32)(0xa47470u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049f900: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0049f904: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049f90a: mov byte ptr [0xa4746c], dl */ W8((u32)(0xa4746cu), (u8)r_edx);
L_0049f910:; BB(0x0049f910);
    /* 0049f910: mov eax, dword ptr [0xa47470] */ r_eax = R32((u32)(0xa47470u));
    /* 0049f915: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f917: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f919: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0049f91f: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049f925: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0049f928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f929: push 0x5b5 */ { u32 v = 0x5b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f92e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f933u); f_00814298();
    /* 0049f933: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f936: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f938: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f93a: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49f93fu); f_0049cc24();
    /* 0049f93f: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f941: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49f946u); f_0049e278();
    /* 0049f946: movzx eax, word ptr [esi + 0x574] */ r_eax = (u32)R16((u32)(r_esi+0x574u));
    /* 0049f94d: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f952: je 0x49f9dc */ if (fZ) goto L_0049f9dc;
L_0049f958:; BB(0x0049f958);
    /* 0049f958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f959: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x49f95eu); f_0068d5a8();
    /* 0049f95e: mov ebx, eax */ r_ebx = r_eax;
    /* 0049f960: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f963: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f965: je 0x49f9a7 */ if (fZ) goto L_0049f9a7;
L_0049f967:; BB(0x0049f967);
    /* 0049f967: fld dword ptr [0x903618] */ FPUSH(R_F32((u32)(0x903618u)));
    /* 0049f96d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0049f970: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0049f973: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0049f976: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0049f97a: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0049f97e: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0049f981: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0049f985: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0049f989: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0049f98c: push dword ptr [esi + 0x474] */ { u32 v = R32((u32)(r_esi+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049f992: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f993: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f994: call 0x486e24 */ r_esp -= 4; W32(r_esp, 0x49f999u); f_00486e24();
    /* 0049f999: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f99b: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049f99e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049f99f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49f9a4u); f_0050b510();
    /* 0049f9a4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f9a7:; BB(0x0049f9a7);
    /* 0049f9a7: push dword ptr [esi + 0x474] */ { u32 v = R32((u32)(r_esi+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049f9ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f9af: movzx eax, word ptr [esi + 0x574] */ r_eax = (u32)R16((u32)(r_esi+0x574u));
    /* 0049f9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049f9b7: call 0x48701c */ r_esp -= 4; W32(r_esp, 0x49f9bcu); f_0048701c();
    /* 0049f9bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049f9bf: mov ecx, esi */ r_ecx = r_esi;
    /* 0049f9c1: call 0x49a438 */ r_esp -= 4; W32(r_esp, 0x49f9c6u); f_0049a438();
    /* 0049f9c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049f9c8: jne 0x49f9dc */ if (!fZ) goto L_0049f9dc;
L_0049f9ca:; BB(0x0049f9ca);
    /* 0049f9ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f9cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f9ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049f9cf: push 0x5a3 */ { u32 v = 0x5a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049f9d4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49f9d9u); f_00814298();
    /* 0049f9d9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049f9dc:; BB(0x0049f9dc);
    /* 0049f9dc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049f9df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049f9e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049f9e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049f9e2: ret  */ FN_RET(0x0049f8c4); r_esp += 4; return;
}

void f_0049f9e4(void) /* sub_49F9E4 */
{
    FN_ENTER(0x0049f9e4);
    /* 0049f9e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049f9e5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049f9e8: mov esi, ecx */ r_esi = r_ecx;
    /* 0049f9ea: movzx edx, byte ptr [0xa47474] */ r_edx = (u32)R8((u32)(0xa47474u));
    /* 0049f9f1: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049f9f4: jne 0x49fa2b */ if (!fZ) goto L_0049fa2b;
L_0049f9f6:; BB(0x0049f9f6);
    /* 0049f9f6: fld dword ptr [0x903614] */ FPUSH(R_F32((u32)(0x903614u)));
    /* 0049f9fc: fdiv dword ptr [0x903358] */ ST(0) = ST(0) / R_F32((u32)(0x903358u));
    /* 0049fa02: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049fa05: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049fa09: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049fa0e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049fa12: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049fa16: fistp dword ptr [0xa47478] */ W32((u32)(0xa47478u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049fa1c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049fa1f: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049fa25: mov byte ptr [0xa47474], dl */ W8((u32)(0xa47474u), (u8)r_edx);
L_0049fa2b:; BB(0x0049fa2b);
    /* 0049fa2b: mov eax, dword ptr [0xa47478] */ r_eax = R32((u32)(0xa47478u));
    /* 0049fa30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa34: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0049fa3a: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049fa40: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0049fa43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa44: push 0x5b5 */ { u32 v = 0x5b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa49: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49fa4eu); f_00814298();
    /* 0049fa4e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049fa51: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fa53: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49fa58u); f_0049e278();
    /* 0049fa58: movzx eax, word ptr [esi + 0x47c] */ r_eax = (u32)R16((u32)(r_esi+0x47cu));
    /* 0049fa5f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fa64: je 0x49fa92 */ if (fZ) goto L_0049fa92;
L_0049fa66:; BB(0x0049fa66);
    /* 0049fa66: push dword ptr [esi + 0x474] */ { u32 v = R32((u32)(r_esi+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049fa6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa6d: lea edx, [esi + 0x638] */ r_edx = (u32)(r_esi+0x638u);
    /* 0049fa73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa75: call 0x486cd0 */ r_esp -= 4; W32(r_esp, 0x49fa7au); f_00486cd0();
    /* 0049fa7a: push dword ptr [esi + 0x474] */ { u32 v = R32((u32)(r_esi+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049fa80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa82: movzx eax, word ptr [esi + 0x47c] */ r_eax = (u32)R16((u32)(r_esi+0x47cu));
    /* 0049fa89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa8a: call 0x48701c */ r_esp -= 4; W32(r_esp, 0x49fa8fu); f_0048701c();
    /* 0049fa8f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049fa92:; BB(0x0049fa92);
    /* 0049fa92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049fa95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049fa96: ret  */ FN_RET(0x0049f9e4); r_esp += 4; return;
}

void f_0049fa98(void) /* sub_49FA98 */
{
    FN_ENTER(0x0049fa98);
    /* 0049fa98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049fa99: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049fa9c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049fa9e: movzx edx, byte ptr [0xa4747c] */ r_edx = (u32)R8((u32)(0xa4747cu));
    /* 0049faa5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049faa8: jne 0x49fadf */ if (!fZ) goto L_0049fadf;
L_0049faaa:; BB(0x0049faaa);
    /* 0049faaa: fld dword ptr [0x903610] */ FPUSH(R_F32((u32)(0x903610u)));
    /* 0049fab0: fdiv dword ptr [0x903358] */ ST(0) = ST(0) / R_F32((u32)(0x903358u));
    /* 0049fab6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049fab9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049fabd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049fac2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049fac6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049faca: fistp dword ptr [0xa47480] */ W32((u32)(0xa47480u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049fad0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049fad3: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049fad9: mov byte ptr [0xa4747c], dl */ W8((u32)(0xa4747cu), (u8)r_edx);
L_0049fadf:; BB(0x0049fadf);
    /* 0049fadf: mov eax, dword ptr [0xa47480] */ r_eax = R32((u32)(0xa47480u));
    /* 0049fae4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fae6: mov dword ptr [ebp + 0x474], eax */ W32((u32)(r_ebp+0x474u), r_eax);
    /* 0049faec: mov dword ptr [ebp + 0x478], eax */ W32((u32)(r_ebp+0x478u), r_eax);
    /* 0049faf2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049faf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049faf5: mov dword ptr [ebp + 0x438], edx */ W32((u32)(r_ebp+0x438u), r_edx);
    /* 0049fafb: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0049fafe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049faff: push 0x5b5 */ { u32 v = 0x5b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fb04: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49fb09u); f_00814298();
    /* 0049fb09: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049fb0c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fb0e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049fb10: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49fb15u); f_0049cc24();
    /* 0049fb15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0049fb17: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49fb1cu); f_0049e278();
    /* 0049fb1c: movzx eax, word ptr [ebp + 0x47c] */ r_eax = (u32)R16((u32)(r_ebp+0x47cu));
    /* 0049fb23: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fb28: je 0x49fb56 */ if (fZ) goto L_0049fb56;
L_0049fb2a:; BB(0x0049fb2a);
    /* 0049fb2a: push dword ptr [ebp + 0x474] */ { u32 v = R32((u32)(r_ebp+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049fb30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049fb31: lea edx, [ebp + 0x638] */ r_edx = (u32)(r_ebp+0x638u);
    /* 0049fb37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049fb38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049fb39: call 0x486cd0 */ r_esp -= 4; W32(r_esp, 0x49fb3eu); f_00486cd0();
    /* 0049fb3e: push dword ptr [ebp + 0x474] */ { u32 v = R32((u32)(r_ebp+0x474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049fb44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fb46: movzx eax, word ptr [ebp + 0x47c] */ r_eax = (u32)R16((u32)(r_ebp+0x47cu));
    /* 0049fb4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049fb4e: call 0x48701c */ r_esp -= 4; W32(r_esp, 0x49fb53u); f_0048701c();
    /* 0049fb53: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049fb56:; BB(0x0049fb56);
    /* 0049fb56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049fb59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049fb5a: ret  */ FN_RET(0x0049fa98); r_esp += 4; return;
}

void f_0049fb5c(void) /* sub_49FB5C */
{
    FN_ENTER(0x0049fb5c);
    /* 0049fb5c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049fb5f: movzx edx, byte ptr [0xa47484] */ r_edx = (u32)R8((u32)(0xa47484u));
    /* 0049fb66: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049fb69: jne 0x49fba0 */ if (!fZ) goto L_0049fba0;
L_0049fb6b:; BB(0x0049fb6b);
    /* 0049fb6b: fld dword ptr [0x90360c] */ FPUSH(R_F32((u32)(0x90360cu)));
    /* 0049fb71: fdiv dword ptr [0xa47450] */ ST(0) = ST(0) / R_F32((u32)(0xa47450u));
    /* 0049fb77: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049fb7a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049fb7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049fb83: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049fb87: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049fb8b: fistp dword ptr [0xa47488] */ W32((u32)(0xa47488u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049fb91: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049fb94: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049fb9a: mov byte ptr [0xa47484], dl */ W8((u32)(0xa47484u), (u8)r_edx);
L_0049fba0:; BB(0x0049fba0);
    /* 0049fba0: mov eax, dword ptr [0xa47488] */ r_eax = R32((u32)(0xa47488u));
    /* 0049fba5: add dword ptr [ecx + 0x488], 1 */ { u32 ad = (u32)(r_ecx+0x488u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0049fbac: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049fbb2: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049fbb8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049fbbb: ret  */ FN_RET(0x0049fb5c); r_esp += 4; return;
}

void f_0049fbbc(void)
{
    FN_ENTER(0x0049fbbc);
    /* 0049fbbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049fbbd: mov esi, ecx */ r_esi = r_ecx;
    /* 0049fbbf: mov eax, 0xb4 */ r_eax = 0xb4u;
    /* 0049fbc4: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0049fbca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fbcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fbce: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049fbd4: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0049fbd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049fbd8: push 0x59e */ { u32 v = 0x59eu; r_esp -= 4; W32(r_esp, v); }
    /* 0049fbdd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49fbe2u); f_00814298();
    /* 0049fbe2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049fbe5: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 0049fbeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fbed: jne 0x49fbf8 */ if (!fZ) goto L_0049fbf8;
L_0049fbef:; BB(0x0049fbef);
    /* 0049fbef: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fbf1: call 0x49c020 */ r_esp -= 4; W32(r_esp, 0x49fbf6u); f_0049c020();
    /* 0049fbf6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049fbf7: ret  */ FN_RET(0x0049fbbc); r_esp += 4; return;
L_0049fbf8:; BB(0x0049fbf8);
    /* 0049fbf8: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fbfa: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49fbffu); f_0049e278();
    /* 0049fbff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049fc00: ret  */ FN_RET(0x0049fbbc); r_esp += 4; return;
}

void f_0049fc04(void) /* sub_49FC04 */
{
    FN_ENTER(0x0049fc04);
    /* 0049fc04: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049fc07: movzx edx, byte ptr [0xa4748c] */ r_edx = (u32)R8((u32)(0xa4748cu));
    /* 0049fc0e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049fc11: jne 0x49fc4e */ if (!fZ) goto L_0049fc4e;
L_0049fc13:; BB(0x0049fc13);
    /* 0049fc13: fld dword ptr [0x903604] */ FPUSH(R_F32((u32)(0x903604u)));
    /* 0049fc19: fdiv dword ptr [0x903344] */ ST(0) = ST(0) / R_F32((u32)(0x903344u));
    /* 0049fc1f: fadd dword ptr [0x903608] */ ST(0) = ST(0) + R_F32((u32)(0x903608u));
    /* 0049fc25: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049fc28: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049fc2c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049fc31: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049fc35: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049fc39: fistp dword ptr [0xa47490] */ W32((u32)(0xa47490u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049fc3f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049fc42: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049fc48: mov byte ptr [0xa4748c], dl */ W8((u32)(0xa4748cu), (u8)r_edx);
L_0049fc4e:; BB(0x0049fc4e);
    /* 0049fc4e: mov eax, dword ptr [0xa47490] */ r_eax = R32((u32)(0xa47490u));
    /* 0049fc53: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0049fc56: mov dword ptr [ecx + 0x488], 0 */ W32((u32)(r_ecx+0x488u), 0x0u);
    /* 0049fc60: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049fc66: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049fc6c: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0049fc6f: mov dword ptr [ecx + 0x524], edx */ W32((u32)(r_ecx+0x524u), r_edx);
    /* 0049fc75: mov dword ptr [ecx + 0x528], eax */ W32((u32)(r_ecx+0x528u), r_eax);
    /* 0049fc7b: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0049fc7e: mov dword ptr [ecx + 0x52c], eax */ W32((u32)(r_ecx+0x52cu), r_eax);
    /* 0049fc84: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 0049fc8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fc8c: jne 0x49fc93 */ if (!fZ) goto L_0049fc93;
L_0049fc8e:; BB(0x0049fc8e);
    /* 0049fc8e: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49fc93u); f_0049e278();
L_0049fc93:; BB(0x0049fc93);
    /* 0049fc93: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049fc96: ret  */ FN_RET(0x0049fc04); r_esp += 4; return;
}

void f_0049fc98(void)
{
    FN_ENTER(0x0049fc98);
    /* 0049fc98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049fc99: mov esi, ecx */ r_esi = r_ecx;
    /* 0049fc9b: mov eax, dword ptr [esi + 0x4e0] */ r_eax = R32((u32)(r_esi+0x4e0u));
    /* 0049fca1: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0049fca7: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049fcad: mov eax, dword ptr [esi + 0x494] */ r_eax = R32((u32)(r_esi+0x494u));
    /* 0049fcb3: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fcb6: je 0x49fcd0 */ if (fZ) goto L_0049fcd0;
L_0049fcb8:; BB(0x0049fcb8);
    /* 0049fcb8: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fcbb: jne 0x49fcc4 */ if (!fZ) goto L_0049fcc4;
L_0049fcbd:; BB(0x0049fcbd);
    /* 0049fcbd: mov edx, 0x5b1 */ r_edx = 0x5b1u;
    /* 0049fcc2: jmp 0x49fcd5 */ goto L_0049fcd5;
L_0049fcc4:; BB(0x0049fcc4);
    /* 0049fcc4: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fcc7: jne 0x49fcd5 */ if (!fZ) goto L_0049fcd5;
L_0049fcc9:; BB(0x0049fcc9);
    /* 0049fcc9: mov edx, 0x5b3 */ r_edx = 0x5b3u;
    /* 0049fcce: jmp 0x49fcd5 */ goto L_0049fcd5;
L_0049fcd0:; BB(0x0049fcd0);
    /* 0049fcd0: mov edx, 0x5b2 */ r_edx = 0x5b2u;
L_0049fcd5:; BB(0x0049fcd5);
    /* 0049fcd5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fcd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fcd9: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0049fcdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049fcdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049fcde: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49fce3u); f_00814298();
    /* 0049fce3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049fce6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049fce8: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fcea: call 0x49cc88 */ r_esp -= 4; W32(r_esp, 0x49fcefu); f_0049cc88();
    /* 0049fcef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049fcf0: ret  */ FN_RET(0x0049fc98); r_esp += 4; return;
}

void f_0049fcf4(void)
{
    FN_ENTER(0x0049fcf4);
    /* 0049fcf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049fcf5: mov esi, ecx */ r_esi = r_ecx;
    /* 0049fcf7: mov eax, 0x4b */ r_eax = 0x4bu;
    /* 0049fcfc: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0049fd02: mov dword ptr [esi + 0x51c], 0 */ W32((u32)(r_esi+0x51cu), 0x0u);
    /* 0049fd0c: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049fd12: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fd14: call 0x49c020 */ r_esp -= 4; W32(r_esp, 0x49fd19u); f_0049c020();
    /* 0049fd19: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0049fd1f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049fd22: jl 0x49fd32 */ if ((fS!=fO)) goto L_0049fd32;
L_0049fd24:; BB(0x0049fd24);
    /* 0049fd24: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049fd27: jg 0x49fd32 */ if ((!fZ&&fS==fO)) goto L_0049fd32;
L_0049fd29:; BB(0x0049fd29);
    /* 0049fd29: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049fd2b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fd2d: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49fd32u); f_0049cc24();
L_0049fd32:; BB(0x0049fd32);
    /* 0049fd32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049fd33: ret  */ FN_RET(0x0049fcf4); r_esp += 4; return;
}

void f_0049fd34(void)
{
    FN_ENTER(0x0049fd34);
    /* 0049fd34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049fd35: mov esi, ecx */ r_esi = r_ecx;
    /* 0049fd37: mov eax, 0x4b */ r_eax = 0x4bu;
    /* 0049fd3c: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0049fd42: mov dword ptr [esi + 0x51c], 0 */ W32((u32)(r_esi+0x51cu), 0x0u);
    /* 0049fd4c: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 0049fd52: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0049fd58: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fd5b: jne 0x49fd69 */ if (!fZ) goto L_0049fd69;
L_0049fd5d:; BB(0x0049fd5d);
    /* 0049fd5d: mov dword ptr [esi + 0x484], 0 */ W32((u32)(r_esi+0x484u), 0x0u);
    /* 0049fd67: jmp 0x49fd84 */ goto L_0049fd84;
L_0049fd69:; BB(0x0049fd69);
    /* 0049fd69: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049fd6c: jne 0x49fd7a */ if (!fZ) goto L_0049fd7a;
L_0049fd6e:; BB(0x0049fd6e);
    /* 0049fd6e: mov dword ptr [esi + 0x484], 1 */ W32((u32)(r_esi+0x484u), 0x1u);
    /* 0049fd78: jmp 0x49fd84 */ goto L_0049fd84;
L_0049fd7a:; BB(0x0049fd7a);
    /* 0049fd7a: mov dword ptr [esi + 0x484], 0 */ W32((u32)(r_esi+0x484u), 0x0u);
L_0049fd84:; BB(0x0049fd84);
    /* 0049fd84: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fd86: call 0x49c020 */ r_esp -= 4; W32(r_esp, 0x49fd8bu); f_0049c020();
    /* 0049fd8b: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0049fd91: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049fd94: jne 0x49fd9f */ if (!fZ) goto L_0049fd9f;
L_0049fd96:; BB(0x0049fd96);
    /* 0049fd96: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049fd98: mov ecx, esi */ r_ecx = r_esi;
    /* 0049fd9a: call 0x49cc24 */ r_esp -= 4; W32(r_esp, 0x49fd9fu); f_0049cc24();
L_0049fd9f:; BB(0x0049fd9f);
    /* 0049fd9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049fda0: ret  */ FN_RET(0x0049fd34); r_esp += 4; return;
}

void f_0049fda4(void) /* sub_49FDA4 */
{
    FN_ENTER(0x0049fda4);
    /* 0049fda4: mov eax, 0x2d */ r_eax = 0x2du;
    /* 0049fda9: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049fdaf: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049fdb5: ret  */ FN_RET(0x0049fda4); r_esp += 4; return;
}

void f_0049fdb8(void) /* sub_49FDB8 */
{
    FN_ENTER(0x0049fdb8);
    /* 0049fdb8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049fdbb: movzx edx, byte ptr [0xa47494] */ r_edx = (u32)R8((u32)(0xa47494u));
    /* 0049fdc2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049fdc5: jne 0x49fdfc */ if (!fZ) goto L_0049fdfc;
L_0049fdc7:; BB(0x0049fdc7);
    /* 0049fdc7: fld dword ptr [0x903600] */ FPUSH(R_F32((u32)(0x903600u)));
    /* 0049fdcd: fdiv dword ptr [0x903330] */ ST(0) = ST(0) / R_F32((u32)(0x903330u));
    /* 0049fdd3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0049fdd6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0049fdda: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049fddf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049fde3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0049fde7: fistp dword ptr [0xa47498] */ W32((u32)(0xa47498u), (u32)fx_int32(ST(0))); FPOP();
    /* 0049fded: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0049fdf0: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0049fdf6: mov byte ptr [0xa47494], dl */ W8((u32)(0xa47494u), (u8)r_edx);
L_0049fdfc:; BB(0x0049fdfc);
    /* 0049fdfc: mov eax, dword ptr [0xa47498] */ r_eax = R32((u32)(0xa47498u));
    /* 0049fe01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe05: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049fe0b: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049fe11: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049fe14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe15: push 0x5b6 */ { u32 v = 0x5b6u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe1a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49fe1fu); f_00814298();
    /* 0049fe1f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049fe22: ret  */ FN_RET(0x0049fdb8); r_esp += 4; return;
}

void f_0049fe24(void)
{
    FN_ENTER(0x0049fe24);
    /* 0049fe24: mov eax, dword ptr [ecx + 0x504] */ r_eax = R32((u32)(r_ecx+0x504u));
    /* 0049fe2a: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049fe30: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049fe36: call 0x49e278 */ r_esp -= 4; W32(r_esp, 0x49fe3bu); f_0049e278();
    /* 0049fe3b: ret  */ FN_RET(0x0049fe24); r_esp += 4; return;
}

void f_0049fe3c(void) /* sub_49FE3C */
{
    FN_ENTER(0x0049fe3c);
    /* 0049fe3c: mov eax, 0x5a */ r_eax = 0x5au;
    /* 0049fe41: mov dword ptr [ecx + 0x474], eax */ W32((u32)(r_ecx+0x474u), r_eax);
    /* 0049fe47: mov dword ptr [ecx + 0x478], eax */ W32((u32)(r_ecx+0x478u), r_eax);
    /* 0049fe4d: ret  */ FN_RET(0x0049fe3c); r_esp += 4; return;
}

void f_0049fe50(void) /* sub_49FE50 */
{
    FN_ENTER(0x0049fe50);
    /* 0049fe50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe51: mov ebp, esp */ r_ebp = r_esp;
    /* 0049fe53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe55: push 0x8d0380 */ { u32 v = 0x8d0380u; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049fe60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049fe61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0049fe68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049fe6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049fe6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0049fe71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0049fe74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0049fe77: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0049fe7a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0049fe7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049fe84: mov eax, ecx */ r_eax = r_ecx;
    /* 0049fe86: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0049fe89: mov dword ptr [eax], 0xaf9bb8 */ W32((u32)(r_eax), 0xaf9bb8u);
    /* 0049fe8f: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049fe92: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x49fe97u); f_00857e98();
    /* 0049fe97: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049fe9a: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049fe9d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x49fea2u); f_00857e98();
    /* 0049fea2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049fea5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049fea8: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 0049feab: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 0049feae: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049feb0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049feb2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049feb4: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049feb6: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049feb8: jae 0x49fed0 */ if (!fC) goto L_0049fed0;
L_0049feba:; BB(0x0049feba);
    /* 0049feba: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049febd: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x49fec2u); f_00857e98();
    /* 0049fec2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049fec3: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049fec6: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049fec8: jb 0x49feba */ if (fC) goto L_0049feba;
L_0049feca:; BB(0x0049feca);
    /* 0049feca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049fecd: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
L_0049fed0:; BB(0x0049fed0);
    /* 0049fed0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049fed1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x49fed6u); f_00857e98();
    /* 0049fed6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049fed7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049fede: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049fee1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x49fee6u); f_008171e8();
    /* 0049fee6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0049fee9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049feeb: jne 0x49ff06 */ if (!fZ) goto L_0049ff06;
L_0049feed:; BB(0x0049feed);
    /* 0049feed: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049fef0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049fef3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049fef6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049fef9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0049ff00: mov esp, ebp */ r_esp = r_ebp;
    /* 0049ff02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049ff03: ret 4 */ FN_RET(0x0049fe50); r_esp += 8; return;
L_0049ff06:; BB(0x0049ff06);
    /* 0049ff06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049ff09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ff0a: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x49ff0fu); f_005c2f74();
    /* 0049ff0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049ff10: jmp 0x49feed */ goto L_0049feed;
}

void f_0049ff14(void) /* sub_49FF14 */
{
    FN_ENTER(0x0049ff14);
    /* 0049ff14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049ff15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049ff16: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049ff19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049ff1b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x49ff20u); f_004f7c84();
    /* 0049ff20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ff22: jne 0x4a00f0 */ if (!fZ) goto L_004a00f0;
L_0049ff28:; BB(0x0049ff28);
    /* 0049ff28: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0049ff2b: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0049ff2e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049ff30: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049ff32: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049ff34: lea edx, [edx + eax - 8] */ r_edx = (u32)(r_edx+r_eax+0xfffffff8u);
    /* 0049ff38: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049ff3a: jbe 0x4a001d */ if ((fC||fZ)) goto L_004a001d;
L_0049ff40:; BB(0x0049ff40);
    /* 0049ff40: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0049ff44: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0049ff47:; BB(0x0049ff47);
    /* 0049ff47: mov ecx, dword ptr [edx - 8] */ r_ecx = R32((u32)(r_edx+0xfffffff8u));
    /* 0049ff4a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0049ff4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049ff4e: je 0x4a000b */ if (fZ) goto L_004a000b;
L_0049ff54:; BB(0x0049ff54);
    /* 0049ff54: mov edi, dword ptr [edx - 4] */ r_edi = R32((u32)(r_edx+0xfffffffcu));
    /* 0049ff57: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0049ff5a: mov ebx, dword ptr [ebp + 0x24] */ r_ebx = R32((u32)(r_ebp+0x24u));
    /* 0049ff5d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff5f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff61: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff63: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff65: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0049ff67: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049ff69: jae 0x4a000b */ if (!fC) goto L_004a000b;
L_0049ff6f:; BB(0x0049ff6f);
    /* 0049ff6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049ff71: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0049ff73: cmp ecx, 0x50 */ {  u32 a = r_ecx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0049ff76: jb 0x49ffeb */ if (fC) goto L_0049ffeb;
L_0049ff78:; BB(0x0049ff78);
    /* 0049ff78: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0049ff7c: lea ecx, [ebx - 0x50] */ r_ecx = (u32)(r_ebx+0xffffffb0u);
L_0049ff7f:; BB(0x0049ff7f);
    /* 0049ff7f: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0049ff81: mov dword ptr [esi], ebp */ W32((u32)(r_esi), r_ebp);
    /* 0049ff83: mov ebp, dword ptr [edi + 4] */ r_ebp = R32((u32)(r_edi+0x4u));
    /* 0049ff86: mov dword ptr [esi + 4], ebp */ W32((u32)(r_esi+0x4u), r_ebp);
    /* 0049ff89: mov ebp, dword ptr [edi + 8] */ r_ebp = R32((u32)(r_edi+0x8u));
    /* 0049ff8c: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 0049ff8f: mov ebp, dword ptr [edi + 0xc] */ r_ebp = R32((u32)(r_edi+0xcu));
    /* 0049ff92: mov dword ptr [esi + 0xc], ebp */ W32((u32)(r_esi+0xcu), r_ebp);
    /* 0049ff95: mov ebp, dword ptr [edi + 0x10] */ r_ebp = R32((u32)(r_edi+0x10u));
    /* 0049ff98: mov dword ptr [esi + 0x10], ebp */ W32((u32)(r_esi+0x10u), r_ebp);
    /* 0049ff9b: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 0049ff9e: mov dword ptr [esi + 0x14], ebp */ W32((u32)(r_esi+0x14u), r_ebp);
    /* 0049ffa1: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 0049ffa4: mov dword ptr [esi + 0x18], ebp */ W32((u32)(r_esi+0x18u), r_ebp);
    /* 0049ffa7: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 0049ffaa: mov dword ptr [esi + 0x1c], ebp */ W32((u32)(r_esi+0x1cu), r_ebp);
    /* 0049ffad: mov ebp, dword ptr [edi + 0x20] */ r_ebp = R32((u32)(r_edi+0x20u));
    /* 0049ffb0: mov dword ptr [esi + 0x20], ebp */ W32((u32)(r_esi+0x20u), r_ebp);
    /* 0049ffb3: mov ebp, dword ptr [edi + 0x24] */ r_ebp = R32((u32)(r_edi+0x24u));
    /* 0049ffb6: mov dword ptr [esi + 0x24], ebp */ W32((u32)(r_esi+0x24u), r_ebp);
    /* 0049ffb9: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 0049ffbc: mov dword ptr [esi + 0x28], ebp */ W32((u32)(r_esi+0x28u), r_ebp);
    /* 0049ffbf: mov ebp, dword ptr [edi + 0x2c] */ r_ebp = R32((u32)(r_edi+0x2cu));
    /* 0049ffc2: mov dword ptr [esi + 0x2c], ebp */ W32((u32)(r_esi+0x2cu), r_ebp);
    /* 0049ffc5: mov ebp, dword ptr [edi + 0x30] */ r_ebp = R32((u32)(r_edi+0x30u));
    /* 0049ffc8: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 0049ffcb: mov ebp, dword ptr [edi + 0x34] */ r_ebp = R32((u32)(r_edi+0x34u));
    /* 0049ffce: mov dword ptr [esi + 0x34], ebp */ W32((u32)(r_esi+0x34u), r_ebp);
    /* 0049ffd1: mov ebp, dword ptr [edi + 0x38] */ r_ebp = R32((u32)(r_edi+0x38u));
    /* 0049ffd4: mov dword ptr [esi + 0x38], ebp */ W32((u32)(r_esi+0x38u), r_ebp);
    /* 0049ffd7: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 0049ffda: mov dword ptr [esi + 0x3c], ebp */ W32((u32)(r_esi+0x3cu), r_ebp);
    /* 0049ffdd: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049ffe0: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049ffe3: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0049ffe5: jbe 0x49ff7f */ if ((fC||fZ)) goto L_0049ff7f;
L_0049ffe7:; BB(0x0049ffe7);
    /* 0049ffe7: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_0049ffeb:; BB(0x0049ffeb);
    /* 0049ffeb: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0049ffed: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0049ffef: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0049fff2: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0049fff5: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0049fff8: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0049fffb: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0049fffe: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004a0001: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a0004: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a0007: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a0009: jb 0x49ffeb */ if (fC) goto L_0049ffeb;
L_004a000b:; BB(0x004a000b);
    /* 004a000b: add edx, -8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a000e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a0010: ja 0x49ff47 */ if ((!fC&&!fZ)) goto L_0049ff47;
L_004a0016:; BB(0x004a0016);
    /* 004a0016: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004a001a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004a001d:; BB(0x004a001d);
    /* 004a001d: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
    /* 004a0020: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004a0022: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004a0024: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a0026: je 0x4a00e1 */ if (fZ) goto L_004a00e1;
L_004a002c:; BB(0x004a002c);
    /* 004a002c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 004a002f: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004a0032: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004a0035: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a0037: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a0039: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003d: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a003f: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a0041: jae 0x4a00e1 */ if (!fC) goto L_004a00e1;
L_004a0047:; BB(0x004a0047);
    /* 004a0047: mov edx, ecx */ r_edx = r_ecx;
    /* 004a0049: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a004b: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a004e: jb 0x4a00c1 */ if (fC) goto L_004a00c1;
L_004a0050:; BB(0x004a0050);
    /* 004a0050: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004a0053: lea edx, [ecx - 0x50] */ r_edx = (u32)(r_ecx+0xffffffb0u);
L_004a0056:; BB(0x004a0056);
    /* 004a0056: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004a0058: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 004a005a: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004a005d: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 004a0060: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 004a0063: mov dword ptr [edi + 8], esi */ W32((u32)(r_edi+0x8u), r_esi);
    /* 004a0066: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 004a0069: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 004a006c: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 004a006f: mov dword ptr [edi + 0x10], esi */ W32((u32)(r_edi+0x10u), r_esi);
    /* 004a0072: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 004a0075: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 004a0078: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 004a007b: mov dword ptr [edi + 0x18], esi */ W32((u32)(r_edi+0x18u), r_esi);
    /* 004a007e: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 004a0081: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 004a0084: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 004a0087: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004a008a: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 004a008d: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004a0090: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 004a0093: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 004a0096: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 004a0099: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 004a009c: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 004a009f: mov dword ptr [edi + 0x30], esi */ W32((u32)(r_edi+0x30u), r_esi);
    /* 004a00a2: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 004a00a5: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004a00a8: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 004a00ab: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
    /* 004a00ae: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 004a00b1: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 004a00b4: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00b7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00ba: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a00bc: jbe 0x4a0056 */ if ((fC||fZ)) goto L_004a0056;
L_004a00be:; BB(0x004a00be);
    /* 004a00be: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004a00c1:; BB(0x004a00c1);
    /* 004a00c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004a00c3: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 004a00c5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004a00c8: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004a00cb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a00ce: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 004a00d1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004a00d4: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 004a00d7: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a00da: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a00dd: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004a00df: jb 0x4a00c1 */ if (fC) goto L_004a00c1;
L_004a00e1:; BB(0x004a00e1);
    /* 004a00e1: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004a00e4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004a00ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a00ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a00ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a00ef: ret  */ FN_RET(0x0049ff14); r_esp += 4; return;
L_004a00f0:; BB(0x004a00f0);
    /* 004a00f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a00f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a00f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a00f5: ret  */ FN_RET(0x0049ff14); r_esp += 4; return;
}

