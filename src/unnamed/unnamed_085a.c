#include "protos.h"

void f_0085a019(void)
{
    FN_ENTER(0x0085a019);
    /* 0085a019: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085a01b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085a01d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a01e: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a021: je 0x85a02b */ if (fZ) goto L_0085a02b;
L_0085a023:; BB(0x0085a023);
    /* 0085a023: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a025: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85a02au); f_0085e4c5();
    /* 0085a02a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085a02b:; BB(0x0085a02b);
    /* 0085a02b: ret  */ FN_RET(0x0085a019); r_esp += 4; return;
}

void f_0085a01e(void)
{
    FN_ENTER(0x0085a01e);
    /* 0085a01e: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a021: je 0x85a02b */ if (fZ) goto L_0085a02b;
L_0085a023:; BB(0x0085a023);
    /* 0085a023: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a025: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85a02au); f_0085e4c5();
    /* 0085a02a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085a02b:; BB(0x0085a02b);
    /* 0085a02b: ret  */ FN_RET(0x0085a01e); r_esp += 4; return;
}

void f_0085a032(void) /* _exit */
{
    FN_ENTER(0x0085a032);
    /* 0085a032: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a034: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a036: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a03a: call 0x859f6f */ r_esp -= 4; W32(r_esp, 0x85a03fu); f_00859f6f();
    /* 0085a03f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085a042: ret  */ FN_RET(0x0085a032); r_esp += 4; return;
}

void f_0085a043(void) /* __exit */
{
    FN_ENTER(0x0085a043);
    /* 0085a043: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a045: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a047: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a04b: call 0x859f6f */ r_esp -= 4; W32(r_esp, 0x85a050u); f_00859f6f();
    /* 0085a050: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085a053: ret  */ FN_RET(0x0085a043); r_esp += 4; return;
}

void f_0085a054(void) /* __cexit */
{
    FN_ENTER(0x0085a054);
    /* 0085a054: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a056: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a058: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a05a: call 0x859f6f */ r_esp -= 4; W32(r_esp, 0x85a05fu); f_00859f6f();
    /* 0085a05f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085a062: ret  */ FN_RET(0x0085a054); r_esp += 4; return;
}

void f_0085a072(void) /* _atol */
{
    FN_ENTER(0x0085a072);
    /* 0085a072: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a073: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a074: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85a079u); f_0085c583();
    /* 0085a079: mov edi, dword ptr [eax + 0x64] */ r_edi = R32((u32)(r_eax+0x64u));
    /* 0085a07c: cmp edi, dword ptr [0xa23cec] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a082: je 0x85a08b */ if (fZ) goto L_0085a08b;
L_0085a084:; BB(0x0085a084);
    /* 0085a084: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85a089u); f_0085daca();
    /* 0085a089: mov edi, eax */ r_edi = r_eax;
L_0085a08b:; BB(0x0085a08b);
    /* 0085a08b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0085a08f:; BB(0x0085a08f);
    /* 0085a08f: cmp dword ptr [edi + 0x28], 1 */ {  u32 a = R32((u32)(r_edi+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a093: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 0085a096: jle 0x85a0a6 */ if ((fZ||fS!=fO)) goto L_0085a0a6;
L_0085a098:; BB(0x0085a098);
    /* 0085a098: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a09a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a09b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a09c: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x85a0a1u); f_0085e5f8();
    /* 0085a0a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a0a4: jmp 0x85a0b0 */ goto L_0085a0b0;
L_0085a0a6:; BB(0x0085a0a6);
    /* 0085a0a6: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 0085a0a9: movzx eax, byte ptr [ecx + eax*2] */ r_eax = (u32)R8((u32)(r_ecx+r_eax*2));
    /* 0085a0ad: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0085a0b0:; BB(0x0085a0b0);
    /* 0085a0b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a0b2: je 0x85a0b7 */ if (fZ) goto L_0085a0b7;
L_0085a0b4:; BB(0x0085a0b4);
    /* 0085a0b4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a0b5: jmp 0x85a08f */ goto L_0085a08f;
L_0085a0b7:; BB(0x0085a0b7);
    /* 0085a0b7: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 0085a0ba: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a0bb: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a0be: mov edx, ecx */ r_edx = r_ecx;
    /* 0085a0c0: je 0x85a0c7 */ if (fZ) goto L_0085a0c7;
L_0085a0c2:; BB(0x0085a0c2);
    /* 0085a0c2: cmp ecx, 0x2b */ {  u32 a = r_ecx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a0c5: jne 0x85a0cb */ if (!fZ) goto L_0085a0cb;
L_0085a0c7:; BB(0x0085a0c7);
    /* 0085a0c7: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 0085a0ca: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0085a0cb:; BB(0x0085a0cb);
    /* 0085a0cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085a0cd:; BB(0x0085a0cd);
    /* 0085a0cd: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a0d0: jl 0x85a0dc */ if ((fS!=fO)) goto L_0085a0dc;
L_0085a0d2:; BB(0x0085a0d2);
    /* 0085a0d2: cmp ecx, 0x39 */ {  u32 a = r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a0d5: jg 0x85a0dc */ if ((!fZ&&fS==fO)) goto L_0085a0dc;
L_0085a0d7:; BB(0x0085a0d7);
    /* 0085a0d7: sub ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085a0da: jmp 0x85a0df */ goto L_0085a0df;
L_0085a0dc:; BB(0x0085a0dc);
    /* 0085a0dc: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_0085a0df:; BB(0x0085a0df);
    /* 0085a0df: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a0e2: je 0x85a0f0 */ if (fZ) goto L_0085a0f0;
L_0085a0e4:; BB(0x0085a0e4);
    /* 0085a0e4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085a0e7: lea eax, [ecx + eax*2] */ r_eax = (u32)(r_ecx+r_eax*2);
    /* 0085a0ea: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 0085a0ed: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a0ee: jmp 0x85a0cd */ goto L_0085a0cd;
L_0085a0f0:; BB(0x0085a0f0);
    /* 0085a0f0: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a0f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085a0f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a0f5: jne 0x85a0f9 */ if (!fZ) goto L_0085a0f9;
L_0085a0f7:; BB(0x0085a0f7);
    /* 0085a0f7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); fC = (b != 0); }
L_0085a0f9:; BB(0x0085a0f9);
    /* 0085a0f9: ret  */ FN_RET(0x0085a072); r_esp += 4; return;
}

void f_0085a0ff(void) /* __atoi64 */
{
    FN_ENTER(0x0085a0ff);
    /* 0085a0ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a101: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a102: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a103: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85a108u); f_0085c583();
    /* 0085a108: mov edi, dword ptr [eax + 0x64] */ r_edi = R32((u32)(r_eax+0x64u));
    /* 0085a10b: cmp edi, dword ptr [0xa23cec] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a111: je 0x85a11a */ if (fZ) goto L_0085a11a;
L_0085a113:; BB(0x0085a113);
    /* 0085a113: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85a118u); f_0085daca();
    /* 0085a118: mov edi, eax */ r_edi = r_eax;
L_0085a11a:; BB(0x0085a11a);
    /* 0085a11a: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0085a11e:; BB(0x0085a11e);
    /* 0085a11e: cmp dword ptr [edi + 0x28], 1 */ {  u32 a = R32((u32)(r_edi+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a122: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 0085a125: jle 0x85a135 */ if ((fZ||fS!=fO)) goto L_0085a135;
L_0085a127:; BB(0x0085a127);
    /* 0085a127: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a12a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a12b: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x85a130u); f_0085e5f8();
    /* 0085a130: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a133: jmp 0x85a13f */ goto L_0085a13f;
L_0085a135:; BB(0x0085a135);
    /* 0085a135: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 0085a138: movzx eax, byte ptr [ecx + eax*2] */ r_eax = (u32)R8((u32)(r_ecx+r_eax*2));
    /* 0085a13c: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0085a13f:; BB(0x0085a13f);
    /* 0085a13f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a141: je 0x85a146 */ if (fZ) goto L_0085a146;
L_0085a143:; BB(0x0085a143);
    /* 0085a143: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a144: jmp 0x85a11e */ goto L_0085a11e;
L_0085a146:; BB(0x0085a146);
    /* 0085a146: movzx edi, byte ptr [esi] */ r_edi = (u32)R8((u32)(r_esi));
    /* 0085a149: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a14a: cmp edi, 0x2d */ {  u32 a = r_edi; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a14d: mov ebx, edi */ r_ebx = r_edi;
    /* 0085a14f: je 0x85a156 */ if (fZ) goto L_0085a156;
L_0085a151:; BB(0x0085a151);
    /* 0085a151: cmp edi, 0x2b */ {  u32 a = r_edi; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a154: jne 0x85a15a */ if (!fZ) goto L_0085a15a;
L_0085a156:; BB(0x0085a156);
    /* 0085a156: movzx edi, byte ptr [esi] */ r_edi = (u32)R8((u32)(r_esi));
    /* 0085a159: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0085a15a:; BB(0x0085a15a);
    /* 0085a15a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085a15c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0085a15e:; BB(0x0085a15e);
    /* 0085a15e: cmp edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a161: jl 0x85a16d */ if ((fS!=fO)) goto L_0085a16d;
L_0085a163:; BB(0x0085a163);
    /* 0085a163: cmp edi, 0x39 */ {  u32 a = r_edi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a166: jg 0x85a16d */ if ((!fZ&&fS==fO)) goto L_0085a16d;
L_0085a168:; BB(0x0085a168);
    /* 0085a168: sub edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0085a16b: jmp 0x85a170 */ goto L_0085a170;
L_0085a16d:; BB(0x0085a16d);
    /* 0085a16d: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_0085a170:; BB(0x0085a170);
    /* 0085a170: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a173: je 0x85a195 */ if (fZ) goto L_0085a195;
L_0085a175:; BB(0x0085a175);
    /* 0085a175: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a177: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085a179: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a17a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a17b: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x85a180u); f_0085ada0();
    /* 0085a180: mov ecx, eax */ r_ecx = r_eax;
    /* 0085a182: mov ebp, edx */ r_ebp = r_edx;
    /* 0085a184: mov eax, edi */ r_eax = r_edi;
    /* 0085a186: movzx edi, byte ptr [esi] */ r_edi = (u32)R8((u32)(r_esi));
    /* 0085a189: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a18a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0085a18c: adc ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 0085a18e: mov eax, ecx */ r_eax = r_ecx;
    /* 0085a190: mov edx, ebp */ r_edx = r_ebp;
    /* 0085a192: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a193: jmp 0x85a15e */ goto L_0085a15e;
L_0085a195:; BB(0x0085a195);
    /* 0085a195: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085a196: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a197: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085a198: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a19b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085a19c: jne 0x85a1a5 */ if (!fZ) goto L_0085a1a5;
L_0085a19e:; BB(0x0085a19e);
    /* 0085a19e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0085a1a0: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0085a1a3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); fC = (b != 0); }
L_0085a1a5:; BB(0x0085a1a5);
    /* 0085a1a5: ret  */ FN_RET(0x0085a0ff); r_esp += 4; return;
}

void f_0085a1a6(void) /* _remove */
{
    FN_ENTER(0x0085a1a6);
    /* 0085a1a6: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a1aa: call dword ptr [0x8f81fc] */ { u32 t = R32((u32)(0x8f81fcu)); r_esp -= 4; W32(r_esp, 0x85a1b0u); call_ind(t); }
    /* 0085a1b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a1b2: jne 0x85a1bc */ if (!fZ) goto L_0085a1bc;
L_0085a1b4:; BB(0x0085a1b4);
    /* 0085a1b4: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85a1bau); call_ind(t); }
    /* 0085a1ba: jmp 0x85a1be */ goto L_0085a1be;
L_0085a1bc:; BB(0x0085a1bc);
    /* 0085a1bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085a1be:; BB(0x0085a1be);
    /* 0085a1be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a1c0: je 0x85a1cd */ if (fZ) goto L_0085a1cd;
L_0085a1c2:; BB(0x0085a1c2);
    /* 0085a1c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a1c3: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x85a1c8u); f_00859de8();
    /* 0085a1c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a1c9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a1cc: ret  */ FN_RET(0x0085a1a6); r_esp += 4; return;
L_0085a1cd:; BB(0x0085a1cd);
    /* 0085a1cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a1cf: ret  */ FN_RET(0x0085a1a6); r_esp += 4; return;
}

void f_0085a1d0(void) /* _rename */
{
    FN_ENTER(0x0085a1d0);
    /* 0085a1d0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a1d4: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a1d8: call dword ptr [0x8f8200] */ { u32 t = R32((u32)(0x8f8200u)); r_esp -= 4; W32(r_esp, 0x85a1deu); call_ind(t); }
    /* 0085a1de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a1e0: jne 0x85a1ea */ if (!fZ) goto L_0085a1ea;
L_0085a1e2:; BB(0x0085a1e2);
    /* 0085a1e2: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85a1e8u); call_ind(t); }
    /* 0085a1e8: jmp 0x85a1ec */ goto L_0085a1ec;
L_0085a1ea:; BB(0x0085a1ea);
    /* 0085a1ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085a1ec:; BB(0x0085a1ec);
    /* 0085a1ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a1ee: je 0x85a1fb */ if (fZ) goto L_0085a1fb;
L_0085a1f0:; BB(0x0085a1f0);
    /* 0085a1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a1f1: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x85a1f6u); f_00859de8();
    /* 0085a1f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a1f7: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a1fa: ret  */ FN_RET(0x0085a1d0); r_esp += 4; return;
L_0085a1fb:; BB(0x0085a1fb);
    /* 0085a1fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a1fd: ret  */ FN_RET(0x0085a1d0); r_esp += 4; return;
}

void f_0085a1fe(void) /* __strnicmp */
{
    FN_ENTER(0x0085a1fe);
    /* 0085a1fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a1ff: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a201: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a202: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a203: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85a208u); f_0085c583();
    /* 0085a208: mov ebx, dword ptr [eax + 0x64] */ r_ebx = R32((u32)(r_eax+0x64u));
    /* 0085a20b: cmp ebx, dword ptr [0xa23cec] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a211: je 0x85a21a */ if (fZ) goto L_0085a21a;
L_0085a213:; BB(0x0085a213);
    /* 0085a213: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85a218u); f_0085daca();
    /* 0085a218: mov ebx, eax */ r_ebx = r_eax;
L_0085a21a:; BB(0x0085a21a);
    /* 0085a21a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a21e: je 0x85a278 */ if (fZ) goto L_0085a278;
L_0085a220:; BB(0x0085a220);
    /* 0085a220: cmp dword ptr [ebx + 0x14], 0 */ {  u32 a = R32((u32)(r_ebx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a224: jne 0x85a239 */ if (!fZ) goto L_0085a239;
L_0085a226:; BB(0x0085a226);
    /* 0085a226: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a229: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a22c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a22f: call 0x863de0 */ r_esp -= 4; W32(r_esp, 0x85a234u); f_00863de0();
    /* 0085a234: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085a237: jmp 0x85a27a */ goto L_0085a27a;
L_0085a239:; BB(0x0085a239);
    /* 0085a239: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a23a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085a23d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a23e: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_0085a241:; BB(0x0085a241);
    /* 0085a241: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 0085a244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a245: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a246: call 0x8598f9 */ r_esp -= 4; W32(r_esp, 0x85a24bu); f_008598f9();
    /* 0085a24b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085a24e: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 0085a251: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a252: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a253: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085a254: call 0x8598f9 */ r_esp -= 4; W32(r_esp, 0x85a259u); f_008598f9();
    /* 0085a259: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a25c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085a25d: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085a260: mov ecx, eax */ r_ecx = r_eax;
    /* 0085a262: je 0x85a26f */ if (fZ) goto L_0085a26f;
L_0085a264:; BB(0x0085a264);
    /* 0085a264: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a268: je 0x85a26f */ if (fZ) goto L_0085a26f;
L_0085a26a:; BB(0x0085a26a);
    /* 0085a26a: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a26d: je 0x85a241 */ if (fZ) goto L_0085a241;
L_0085a26f:; BB(0x0085a26f);
    /* 0085a26f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085a272: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085a273: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a275: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a276: jmp 0x85a27a */ goto L_0085a27a;
L_0085a278:; BB(0x0085a278);
    /* 0085a278: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085a27a:; BB(0x0085a27a);
    /* 0085a27a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085a27b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085a27c: ret  */ FN_RET(0x0085a1fe); r_esp += 4; return;
}

void f_0085a27d(void) /* _localtime */
{
    FN_ENTER(0x0085a27d);
    /* 0085a27d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a27e: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a280: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a281: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085a284: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a287: jge 0x85a290 */ if ((fS==fO)) goto L_0085a290;
L_0085a289:; BB(0x0085a289);
    /* 0085a289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a28b: jmp 0x85a3c2 */ goto L_0085a3c2;
L_0085a290:; BB(0x0085a290);
    /* 0085a290: call 0x864428 */ r_esp -= 4; W32(r_esp, 0x85a295u); f_00864428();
    /* 0085a295: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0085a297: cmp eax, 0x3f480 */ {  u32 a = r_eax; u32 b = 0x3f480u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a29c: jle 0x85a2f6 */ if ((fZ||fS!=fO)) goto L_0085a2f6;
L_0085a29e:; BB(0x0085a29e);
    /* 0085a29e: cmp eax, 0x7ffc0b7f */ {  u32 a = r_eax; u32 b = 0x7ffc0b7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a2a3: jge 0x85a2f6 */ if ((fS==fO)) goto L_0085a2f6;
L_0085a2a5:; BB(0x0085a2a5);
    /* 0085a2a5: sub eax, dword ptr [0xa24070] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa24070u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085a2ab: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0085a2ae: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0085a2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a2b2: call 0x85b4f6 */ r_esp -= 4; W32(r_esp, 0x85a2b7u); f_0085b4f6();
    /* 0085a2b7: cmp dword ptr [0xa24074], 0 */ {  u32 a = R32((u32)(0xa24074u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a2be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a2bf: mov esi, eax */ r_esi = r_eax;
    /* 0085a2c1: je 0x85a3c0 */ if (fZ) goto L_0085a3c0;
L_0085a2c7:; BB(0x0085a2c7);
    /* 0085a2c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a2c8: call 0x864474 */ r_esp -= 4; W32(r_esp, 0x85a2cdu); f_00864474();
    /* 0085a2cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a2cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a2d0: je 0x85a3c0 */ if (fZ) goto L_0085a3c0;
L_0085a2d6:; BB(0x0085a2d6);
    /* 0085a2d6: mov eax, dword ptr [0xa24078] */ r_eax = R32((u32)(0xa24078u));
    /* 0085a2db: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a2de: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0085a2e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a2e2: call 0x85b4f6 */ r_esp -= 4; W32(r_esp, 0x85a2e7u); f_0085b4f6();
    /* 0085a2e7: mov esi, eax */ r_esi = r_eax;
    /* 0085a2e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a2ea: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 0085a2f1: jmp 0x85a3c0 */ goto L_0085a3c0;
L_0085a2f6:; BB(0x0085a2f6);
    /* 0085a2f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a2f7: call 0x85b4f6 */ r_esp -= 4; W32(r_esp, 0x85a2fcu); f_0085b4f6();
    /* 0085a2fc: cmp dword ptr [0xa24074], 0 */ {  u32 a = R32((u32)(0xa24074u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a303: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a304: mov esi, eax */ r_esi = r_eax;
    /* 0085a306: je 0x85a330 */ if (fZ) goto L_0085a330;
L_0085a308:; BB(0x0085a308);
    /* 0085a308: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a309: call 0x864474 */ r_esp -= 4; W32(r_esp, 0x85a30eu); f_00864474();
    /* 0085a30e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a310: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a311: je 0x85a330 */ if (fZ) goto L_0085a330;
L_0085a313:; BB(0x0085a313);
    /* 0085a313: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0085a315: sub eax, dword ptr [0xa24078] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa24078u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085a31b: sub eax, dword ptr [0xa24070] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa24070u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085a321: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0085a324: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 0085a32b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085a32e: jmp 0x85a33b */ goto L_0085a33b;
L_0085a330:; BB(0x0085a330);
    /* 0085a330: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0085a332: sub eax, dword ptr [0xa24070] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa24070u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085a338: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0085a33b:; BB(0x0085a33b);
    /* 0085a33b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a33c: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085a33e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a33f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a340: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0085a342: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0085a342, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a342, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a344: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085a346: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0085a348: jge 0x85a351 */ if ((fS==fO)) goto L_0085a351;
L_0085a34a:; BB(0x0085a34a);
    /* 0085a34a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085a34c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0085a34e: sub dword ptr [ebp + 8], ecx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085a351:; BB(0x0085a351);
    /* 0085a351: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085a354: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a355: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0085a357: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0085a357, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a357, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a359: add eax, dword ptr [esi + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085a35c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0085a35f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a360: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0085a360, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a360, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a362: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085a363: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085a365: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0085a368: jge 0x85a373 */ if ((fS==fO)) goto L_0085a373;
L_0085a36a:; BB(0x0085a36a);
    /* 0085a36a: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085a36d: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0085a370: sub dword ptr [ebp + 8], ecx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085a373:; BB(0x0085a373);
    /* 0085a373: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085a376: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a377: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0085a377, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a377, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a379: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a37b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a37c: add eax, dword ptr [esi + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085a37f: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0085a382: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a383: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0085a383, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a383, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a385: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085a387: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0085a38a: jge 0x85a394 */ if ((fS==fO)) goto L_0085a394;
L_0085a38c:; BB(0x0085a38c);
    /* 0085a38c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085a38e: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0085a391: sub dword ptr [ebp + 8], ecx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085a394:; BB(0x0085a394);
    /* 0085a394: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085a397: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a399: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a39a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a39b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0085a39b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a39b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a39d: mov ecx, eax */ r_ecx = r_eax;
    /* 0085a39f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a3a1: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0085a3a4: jle 0x85a3c5 */ if ((fZ||fS!=fO)) goto L_0085a3c5;
L_0085a3a6:; BB(0x0085a3a6);
    /* 0085a3a6: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0085a3a9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085a3ab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a3ac: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a3ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a3af: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0085a3af, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a3af, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a3b1: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 0085a3b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085a3b7: add dword ptr [esi + 0xc], eax */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085a3ba:; BB(0x0085a3ba);
    /* 0085a3ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085a3bd: add dword ptr [esi + 0x1c], eax */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0085a3c0:; BB(0x0085a3c0);
    /* 0085a3c0: mov eax, esi */ r_eax = r_esi;
L_0085a3c2:; BB(0x0085a3c2);
    /* 0085a3c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a3c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085a3c4: ret  */ FN_RET(0x0085a27d); r_esp += 4; return;
L_0085a3c5:; BB(0x0085a3c5);
    /* 0085a3c5: jge 0x85a3c0 */ if ((fS==fO)) goto L_0085a3c0;
L_0085a3c7:; BB(0x0085a3c7);
    /* 0085a3c7: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0085a3ca: lea eax, [eax + ecx + 7] */ r_eax = (u32)(r_eax+r_ecx+0x7u);
    /* 0085a3ce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a3cf: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a3d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a3d2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0085a3d2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a3d2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a3d4: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 0085a3d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085a3da: add dword ptr [esi + 0xc], eax */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a3dd: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085a3e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085a3e2: jg 0x85a3ba */ if ((!fZ&&fS==fO)) goto L_0085a3ba;
L_0085a3e4:; BB(0x0085a3e4);
    /* 0085a3e4: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0085a3e7: dec dword ptr [esi + 0x14] */ { u32 ad = (u32)(r_esi+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a3ea: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0085a3ed: mov dword ptr [esi + 0x1c], 0x16c */ W32((u32)(r_esi+0x1cu), 0x16cu);
    /* 0085a3f4: mov dword ptr [esi + 0x10], 0xb */ W32((u32)(r_esi+0x10u), 0xbu);
    /* 0085a3fb: jmp 0x85a3c0 */ goto L_0085a3c0;
}

void f_0085a3fd(void) /* _fwprintf */
{
    FN_ENTER(0x0085a3fd);
    /* 0085a3fd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a3ff: push 0x997f98 */ { u32 v = 0x997f98u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a404: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85a409u); f_0085e5ac();
    /* 0085a409: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085a40c: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0085a40f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a410: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85a415u); f_0085bbfc();
    /* 0085a415: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a416: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a41a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a41b: call 0x8644b2 */ r_esp -= 4; W32(r_esp, 0x85a420u); f_008644b2();
    /* 0085a420: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085a423: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 0085a426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a427: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a42a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a42b: call 0x85cf26 */ r_esp -= 4; W32(r_esp, 0x85a430u); f_0085cf26();
    /* 0085a430: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0085a433: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a434: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a437: call 0x86453a */ r_esp -= 4; W32(r_esp, 0x85a43cu); f_0086453a();
    /* 0085a43c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a43f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a443: call 0x85a451 */ r_esp -= 4; W32(r_esp, 0x85a448u); f_0085a451();
    /* 0085a448: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0085a44b: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85a450u); f_0085e5e7();
    /* 0085a450: ret  */ FN_RET(0x0085a3fd); r_esp += 4; return;
}

void f_0085a451(void)
{
    FN_ENTER(0x0085a451);
    /* 0085a451: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a454: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85a459u); f_0085bc4e();
    /* 0085a459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a45a: ret  */ FN_RET(0x0085a451); r_esp += 4; return;
}

void f_0085a45b(void) /* _fputc */
{
    FN_ENTER(0x0085a45b);
    /* 0085a45b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085a45d: push 0x997fa8 */ { u32 v = 0x997fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a462: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85a467u); f_0085e5ac();
    /* 0085a467: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085a46a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a46b: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85a470u); f_0085bbfc();
    /* 0085a470: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a471: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a475: dec dword ptr [esi + 4] */ { u32 ad = (u32)(r_esi+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 0085a478: js 0x85a488 */ if (fS) goto L_0085a488;
L_0085a47a:; BB(0x0085a47a);
    /* 0085a47a: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0085a47c: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0085a47f: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0085a481: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0085a484: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a486: jmp 0x85a493 */ goto L_0085a493;
L_0085a488:; BB(0x0085a488);
    /* 0085a488: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a489: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a48c: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x85a491u); f_0085cd86();
    /* 0085a491: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a492: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085a493:; BB(0x0085a493);
    /* 0085a493: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085a496: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a49a: call 0x85a4ab */ r_esp -= 4; W32(r_esp, 0x85a49fu); f_0085a4ab();
    /* 0085a49f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085a4a2: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85a4a7u); f_0085e5e7();
    /* 0085a4a7: ret  */ FN_RET(0x0085a45b); r_esp += 4; return;
}

void f_0085a4a8(void)
{
    FN_ENTER(0x0085a4a8);
    /* 0085a4a8: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085a4ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4ac: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85a4b1u); f_0085bc4e();
    /* 0085a4b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a4b2: ret  */ FN_RET(0x0085a4a8); r_esp += 4; return;
}

void f_0085a4ab(void)
{
    FN_ENTER(0x0085a4ab);
    /* 0085a4ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4ac: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85a4b1u); f_0085bc4e();
    /* 0085a4b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a4b2: ret  */ FN_RET(0x0085a4ab); r_esp += 4; return;
}

void f_0085a514(void) /* _towlower */
{
    FN_ENTER(0x0085a514);
    /* 0085a514: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85a519u); f_0085c583();
    /* 0085a519: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0085a51c: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a522: je 0x85a529 */ if (fZ) goto L_0085a529;
L_0085a524:; BB(0x0085a524);
    /* 0085a524: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85a529u); f_0085daca();
L_0085a529:; BB(0x0085a529);
    /* 0085a529: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085a52d: cmp cx, 0xffff */ {  u32 a = (u16)r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085a532: jne 0x85a538 */ if (!fZ) goto L_0085a538;
L_0085a534:; BB(0x0085a534);
    /* 0085a534: or ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a537: ret  */ FN_RET(0x0085a514); r_esp += 4; return;
L_0085a538:; BB(0x0085a538);
    /* 0085a538: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a53c: jne 0x85a555 */ if (!fZ) goto L_0085a555;
L_0085a53e:; BB(0x0085a53e);
    /* 0085a53e: cmp cx, 0x41 */ {  u32 a = (u16)r_ecx; u32 b = 0x41u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085a542: jb 0x85a551 */ if (fC) goto L_0085a551;
L_0085a544:; BB(0x0085a544);
    /* 0085a544: cmp cx, 0x5a */ {  u32 a = (u16)r_ecx; u32 b = 0x5au; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085a548: ja 0x85a551 */ if ((!fC&&!fZ)) goto L_0085a551;
L_0085a54a:; BB(0x0085a54a);
    /* 0085a54a: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 0085a54d: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085a550: ret  */ FN_RET(0x0085a514); r_esp += 4; return;
L_0085a551:; BB(0x0085a551);
    /* 0085a551: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 0085a554: ret  */ FN_RET(0x0085a514); r_esp += 4; return;
L_0085a555:; BB(0x0085a555);
    /* 0085a555: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a557: call 0x85a4b3 */ r_esp -= 4; W32(r_esp, 0x85a55cu); f_0085a4b3();
    /* 0085a55c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a55d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a55e: ret  */ FN_RET(0x0085a514); r_esp += 4; return;
}

void f_0085a55f(void) /* _wcschr */
{
    FN_ENTER(0x0085a55f);
    /* 0085a55f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085a563: mov dx, word ptr [esp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esp+0x8u))) & 0xffffu);
    /* 0085a568: jmp 0x85a571 */ goto L_0085a571;
L_0085a56a:; BB(0x0085a56a);
    /* 0085a56a: cmp cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085a56d: je 0x85a580 */ if (fZ) goto L_0085a580;
L_0085a56f:; BB(0x0085a56f);
    /* 0085a56f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085a570: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085a571:; BB(0x0085a571);
    /* 0085a571: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0085a574: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085a577: jne 0x85a56a */ if (!fZ) goto L_0085a56a;
L_0085a579:; BB(0x0085a579);
    /* 0085a579: cmp cx, dx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_edx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085a57c: je 0x85a580 */ if (fZ) goto L_0085a580;
L_0085a57e:; BB(0x0085a57e);
    /* 0085a57e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085a580:; BB(0x0085a580);
    /* 0085a580: ret  */ FN_RET(0x0085a55f); r_esp += 4; return;
}

void f_0085a581(void) /* _vsprintf */
{
    FN_ENTER(0x0085a581);
    /* 0085a581: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a582: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a584: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085a587: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a588: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085a58b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a58c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a58f: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0085a592: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a595: mov dword ptr [ebp - 0x1c], 0x7fffffff */ W32((u32)(r_ebp+0xffffffe4u), 0x7fffffffu);
    /* 0085a59c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a59d: mov dword ptr [ebp - 0x14], 0x42 */ W32((u32)(r_ebp+0xffffffecu), 0x42u);
    /* 0085a5a4: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0085a5a7: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0085a5aa: call 0x860772 */ r_esp -= 4; W32(r_esp, 0x85a5afu); f_00860772();
    /* 0085a5af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a5b2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a5b4: mov edi, eax */ r_edi = r_eax;
    /* 0085a5b6: je 0x85a5d2 */ if (fZ) goto L_0085a5d2;
L_0085a5b8:; BB(0x0085a5b8);
    /* 0085a5b8: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a5bb: js 0x85a5c5 */ if (fS) goto L_0085a5c5;
L_0085a5bd:; BB(0x0085a5bd);
    /* 0085a5bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0085a5c0: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0085a5c3: jmp 0x85a5d2 */ goto L_0085a5d2;
L_0085a5c5:; BB(0x0085a5c5);
    /* 0085a5c5: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0085a5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a5c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a5cb: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x85a5d0u); f_0085cd86();
    /* 0085a5d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a5d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085a5d2:; BB(0x0085a5d2);
    /* 0085a5d2: mov eax, edi */ r_eax = r_edi;
    /* 0085a5d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085a5d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a5d6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085a5d7: ret  */ FN_RET(0x0085a581); r_esp += 4; return;
}

void f_0085a5d8(void) /* _fprintf */
{
    FN_ENTER(0x0085a5d8);
    /* 0085a5d8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a5da: push 0x997fb8 */ { u32 v = 0x997fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a5df: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85a5e4u); f_0085e5ac();
    /* 0085a5e4: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085a5e7: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0085a5ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a5eb: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85a5f0u); f_0085bbfc();
    /* 0085a5f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a5f1: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a5f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a5f6: call 0x8644b2 */ r_esp -= 4; W32(r_esp, 0x85a5fbu); f_008644b2();
    /* 0085a5fb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085a5fe: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 0085a601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a602: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a605: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a606: call 0x860772 */ r_esp -= 4; W32(r_esp, 0x85a60bu); f_00860772();
    /* 0085a60b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0085a60e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a60f: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a612: call 0x86453a */ r_esp -= 4; W32(r_esp, 0x85a617u); f_0086453a();
    /* 0085a617: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a61a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a61e: call 0x85a62c */ r_esp -= 4; W32(r_esp, 0x85a623u); f_0085a62c();
    /* 0085a623: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0085a626: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85a62bu); f_0085e5e7();
    /* 0085a62b: ret  */ FN_RET(0x0085a5d8); r_esp += 4; return;
}

void f_0085a62c(void)
{
    FN_ENTER(0x0085a62c);
    /* 0085a62c: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a62f: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85a634u); f_0085bc4e();
    /* 0085a634: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a635: ret  */ FN_RET(0x0085a62c); r_esp += 4; return;
}

void f_0085a673(void)
{
    FN_ENTER(0x0085a673);
    /* 0085a673: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0085a675: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85a67au); f_0085e4c5();
    /* 0085a67a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a67b: ret  */ FN_RET(0x0085a673); r_esp += 4; return;
}

void f_0085a698(void) /* __strdate */
{
    FN_ENTER(0x0085a698);
    /* 0085a698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a699: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a69b: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085a69e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a69f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a6a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a6a1: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0085a6a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a6a5: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x85a6abu); call_ind(t); }
    /* 0085a6ab: movzx eax, word ptr [ebp - 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffecu));
    /* 0085a6af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a6b0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a6b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a6b3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0085a6b3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a6b3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a6b5: movzx esi, word ptr [ebp - 0x12] */ r_esi = (u32)R16((u32)(r_ebp+0xffffffeeu));
    /* 0085a6b9: mov eax, esi */ r_eax = r_esi;
    /* 0085a6bb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085a6bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a6be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085a6c1: movzx edi, word ptr [ebp - 0xe] */ r_edi = (u32)R16((u32)(r_ebp+0xfffffff2u));
    /* 0085a6c5: mov bl, 0x30 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x30u) & 0xffu);
    /* 0085a6c7: mov byte ptr [ecx + 5], 0x2f */ W8((u32)(r_ecx+0x5u), 0x2fu);
    /* 0085a6cb: mov byte ptr [ecx + 2], 0x2f */ W8((u32)(r_ecx+0x2u), 0x2fu);
    /* 0085a6cf: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0085a6d3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0085a6d6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a6d7: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085a6d7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a6d7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a6d9: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a6db: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0085a6dd: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a6df: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 0085a6e2: mov eax, edi */ r_eax = r_edi;
    /* 0085a6e4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a6e5: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085a6e5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a6e5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a6e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085a6e8: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a6ea: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 0085a6ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085a6f0: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a6f2: mov byte ptr [ecx + 4], dl */ W8((u32)(r_ecx+0x4u), (u8)r_edx);
    /* 0085a6f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a6f6: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085a6f6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a6f6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a6f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a6f9: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a6fb: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0085a6fd: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 0085a700: mov byte ptr [ecx + 7], dl */ W8((u32)(r_ecx+0x7u), (u8)r_edx);
    /* 0085a703: mov eax, ecx */ r_eax = r_ecx;
    /* 0085a705: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085a706: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085a707: ret  */ FN_RET(0x0085a698); r_esp += 4; return;
}

void f_0085a708(void) /* __strtime */
{
    FN_ENTER(0x0085a708);
    /* 0085a708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a709: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a70b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085a70e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a70f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a710: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a711: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085a714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a715: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x85a71bu); call_ind(t); }
    /* 0085a71b: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0085a71f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a720: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085a722: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085a723: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0085a723, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a723, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a725: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085a728: movzx esi, word ptr [ebp - 6] */ r_esi = (u32)R16((u32)(r_ebp+0xfffffffau));
    /* 0085a72c: mov bl, 0x30 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x30u) & 0xffu);
    /* 0085a72e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085a730: movzx edi, word ptr [ebp - 4] */ r_edi = (u32)R16((u32)(r_ebp+0xfffffffcu));
    /* 0085a734: mov byte ptr [ecx + 5], 0x3a */ W8((u32)(r_ecx+0x5u), 0x3au);
    /* 0085a738: mov byte ptr [ecx + 2], 0x3a */ W8((u32)(r_ecx+0x2u), 0x3au);
    /* 0085a73c: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0085a740: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a742: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0085a744: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a746: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 0085a749: mov eax, esi */ r_eax = r_esi;
    /* 0085a74b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a74c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a74d: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085a74d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a74d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a74f: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a751: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 0085a754: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a756: mov byte ptr [ecx + 4], dl */ W8((u32)(r_ecx+0x4u), (u8)r_edx);
    /* 0085a759: mov eax, edi */ r_eax = r_edi;
    /* 0085a75b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085a75c: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085a75c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085a75c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085a75e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085a75f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a760: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085a762: add dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0085a764: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 0085a767: mov byte ptr [ecx + 7], dl */ W8((u32)(r_ecx+0x7u), (u8)r_edx);
    /* 0085a76a: mov eax, ecx */ r_eax = r_ecx;
    /* 0085a76c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085a76d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085a76e: ret  */ FN_RET(0x0085a708); r_esp += 4; return;
}

void f_0085a76f(void) /* __time64 */
{
    FN_ENTER(0x0085a76f);
    /* 0085a76f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a770: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a772: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a774: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0085a777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a778: call dword ptr [0x8f81e8] */ { u32 t = R32((u32)(0x8f81e8u)); r_esp -= 4; W32(r_esp, 0x85a77eu); call_ind(t); }
    /* 0085a77e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085a781: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085a784: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a786: add eax, 0x2ac18000 */ {  u32 a = r_eax; u32 b = 0x2ac18000u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0085a78b: push 0x989680 */ { u32 v = 0x989680u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a790: adc ecx, 0xfe624e21 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0xfe624e21u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0085a796: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a798: call 0x863510 */ r_esp -= 4; W32(r_esp, 0x85a79du); f_00863510();
    /* 0085a79d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085a7a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a7a2: je 0x85a7a9 */ if (fZ) goto L_0085a7a9;
L_0085a7a4:; BB(0x0085a7a4);
    /* 0085a7a4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0085a7a6: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0085a7a9:; BB(0x0085a7a9);
    /* 0085a7a9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085a7aa: ret  */ FN_RET(0x0085a76f); r_esp += 4; return;
}

void f_0085a7ab(void) /* __wfsopen */
{
    FN_ENTER(0x0085a7ab);
    /* 0085a7ab: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a7ad: push 0x997fe0 */ { u32 v = 0x997fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a7b2: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85a7b7u); f_0085e5ac();
    /* 0085a7b7: call 0x861872 */ r_esp -= 4; W32(r_esp, 0x85a7bcu); f_00861872();
    /* 0085a7bc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085a7bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a7c1: jne 0x85a7d2 */ if (!fZ) goto L_0085a7d2;
L_0085a7c3:; BB(0x0085a7c3);
    /* 0085a7c3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85a7c8u); f_00859dd6();
    /* 0085a7c8: mov dword ptr [eax], 0x18 */ W32((u32)(r_eax), 0x18u);
    /* 0085a7ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085a7d0: jmp 0x85a7f7 */ goto L_0085a7f7;
L_0085a7d2:; BB(0x0085a7d2);
    /* 0085a7d2: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a7d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a7d7: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a7da: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a7dd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a7e0: call 0x8645f8 */ r_esp -= 4; W32(r_esp, 0x85a7e5u); f_008645f8();
    /* 0085a7e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a7e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085a7eb: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a7ef: call 0x85a7fd */ r_esp -= 4; W32(r_esp, 0x85a7f4u); f_0085a7fd();
    /* 0085a7f4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0085a7f7:; BB(0x0085a7f7);
    /* 0085a7f7: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85a7fcu); f_0085e5e7();
    /* 0085a7fc: ret  */ FN_RET(0x0085a7ab); r_esp += 4; return;
}

void f_0085a7fd(void)
{
    FN_ENTER(0x0085a7fd);
    /* 0085a7fd: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a800: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85a805u); f_0085bc4e();
    /* 0085a805: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a806: ret  */ FN_RET(0x0085a7fd); r_esp += 4; return;
}

void f_0085a807(void) /* __wfopen */
{
    FN_ENTER(0x0085a807);
    /* 0085a807: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a809: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a80d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a811: call 0x85a7ab */ r_esp -= 4; W32(r_esp, 0x85a816u); f_0085a7ab();
    /* 0085a816: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085a819: ret  */ FN_RET(0x0085a807); r_esp += 4; return;
}

void f_0085a8a9(void) /* _fseek */
{
    FN_ENTER(0x0085a8a9);
    /* 0085a8a9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085a8ab: push 0x997ff0 */ { u32 v = 0x997ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a8b0: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85a8b5u); f_0085e5ac();
    /* 0085a8b5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a8b8: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85a8bdu); f_0085bbfc();
    /* 0085a8bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a8be: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a8c2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a8c5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a8c8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a8cb: call 0x85a81a */ r_esp -= 4; W32(r_esp, 0x85a8d0u); f_0085a81a();
    /* 0085a8d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a8d3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085a8d6: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a8da: call 0x85a8e8 */ r_esp -= 4; W32(r_esp, 0x85a8dfu); f_0085a8e8();
    /* 0085a8df: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085a8e2: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85a8e7u); f_0085e5e7();
    /* 0085a8e7: ret  */ FN_RET(0x0085a8a9); r_esp += 4; return;
}

void f_0085a8e8(void)
{
    FN_ENTER(0x0085a8e8);
    /* 0085a8e8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a8eb: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85a8f0u); f_0085bc4e();
    /* 0085a8f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a8f1: ret  */ FN_RET(0x0085a8e8); r_esp += 4; return;
}

void f_0085aa54(void) /* _ftell */
{
    FN_ENTER(0x0085aa54);
    /* 0085aa54: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085aa56: push 0x998000 */ { u32 v = 0x998000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085aa5b: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85aa60u); f_0085e5ac();
    /* 0085aa60: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aa63: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85aa68u); f_0085bbfc();
    /* 0085aa68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085aa69: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085aa6d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aa70: call 0x85a8f2 */ r_esp -= 4; W32(r_esp, 0x85aa75u); f_0085a8f2();
    /* 0085aa75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085aa76: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085aa79: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085aa7d: call 0x85aa8b */ r_esp -= 4; W32(r_esp, 0x85aa82u); f_0085aa8b();
    /* 0085aa82: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085aa85: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85aa8au); f_0085e5e7();
    /* 0085aa8a: ret  */ FN_RET(0x0085aa54); r_esp += 4; return;
}

void f_0085aa8b(void)
{
    FN_ENTER(0x0085aa8b);
    /* 0085aa8b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aa8e: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85aa93u); f_0085bc4e();
    /* 0085aa93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085aa94: ret  */ FN_RET(0x0085aa8b); r_esp += 4; return;
}

void f_0085aa95(void) /* _wcsstr */
{
    FN_ENTER(0x0085aa95);
    /* 0085aa95: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0085aa99: cmp word ptr [ecx], 0 */ {  u32 a = R16((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085aa9d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085aaa1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085aaa2: mov edi, eax */ r_edi = r_eax;
    /* 0085aaa4: je 0x85aaed */ if (fZ) goto L_0085aaed;
L_0085aaa6:; BB(0x0085aaa6);
    /* 0085aaa6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085aaa8: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0085aaab: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085aaae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085aaaf: je 0x85aaea */ if (fZ) goto L_0085aaea;
L_0085aab1:; BB(0x0085aab1);
    /* 0085aab1: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0085aab3:; BB(0x0085aab3);
    /* 0085aab3: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085aab6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0085aaba: je 0x85aad8 */ if (fZ) goto L_0085aad8;
L_0085aabc:; BB(0x0085aabc);
    /* 0085aabc: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0085aabf: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085aac2: je 0x85aaef */ if (fZ) goto L_0085aaef;
L_0085aac4:; BB(0x0085aac4);
    /* 0085aac4: movzx ebx, word ptr [eax + ecx] */ r_ebx = (u32)R16((u32)(r_eax+r_ecx));
    /* 0085aac8: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0085aacb: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0085aacd: jne 0x85aad8 */ if (!fZ) goto L_0085aad8;
L_0085aacf:; BB(0x0085aacf);
    /* 0085aacf: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085aad0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085aad1: cmp word ptr [eax + ecx], 0 */ {  u32 a = R16((u32)(r_eax+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085aad6: jne 0x85aabc */ if (!fZ) goto L_0085aabc;
L_0085aad8:; BB(0x0085aad8);
    /* 0085aad8: cmp word ptr [ecx], 0 */ {  u32 a = R16((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085aadc: je 0x85aaef */ if (fZ) goto L_0085aaef;
L_0085aade:; BB(0x0085aade);
    /* 0085aade: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085aadf: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085aae0: mov dx, word ptr [edi] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 0085aae3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085aae4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085aae5: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085aae8: jne 0x85aab3 */ if (!fZ) goto L_0085aab3;
L_0085aaea:; BB(0x0085aaea);
    /* 0085aaea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085aaec:; BB(0x0085aaec);
    /* 0085aaec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0085aaed:; BB(0x0085aaed);
    /* 0085aaed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085aaee: ret  */ FN_RET(0x0085aa95); r_esp += 4; return;
L_0085aaef:; BB(0x0085aaef);
    /* 0085aaef: mov eax, edi */ r_eax = r_edi;
    /* 0085aaf1: jmp 0x85aaec */ goto L_0085aaec;
}

void f_0085ab43(void)
{
    FN_ENTER(0x0085ab43);
    /* 0085ab43: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85ab48u); f_0085e5ac();
    /* 0085ab48: mov edi, 0x94 */ r_edi = 0x94u;
    /* 0085ab4d: mov eax, edi */ r_eax = r_edi;
    /* 0085ab4f: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x85ab54u); f_00858020();
    /* 0085ab54: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085ab57: mov esi, esp */ r_esi = r_esp;
    /* 0085ab59: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 0085ab5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ab5c: call dword ptr [0x8f820c] */ { u32 t = R32((u32)(0x8f820cu)); r_esp -= 4; W32(r_esp, 0x85ab62u); call_ind(t); }
    /* 0085ab62: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 0085ab65: mov dword ptr [0xae7a10], ecx */ W32((u32)(0xae7a10u), r_ecx);
    /* 0085ab6b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0085ab6e: mov dword ptr [0xae7a1c], eax */ W32((u32)(0xae7a1cu), r_eax);
    /* 0085ab73: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0085ab76: mov dword ptr [0xae7a20], edx */ W32((u32)(0xae7a20u), r_edx);
    /* 0085ab7c: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 0085ab7f: and esi, 0x7fff */ {  u32 a = r_esi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0085ab85: mov dword ptr [0xae7a14], esi */ W32((u32)(0xae7a14u), r_esi);
    /* 0085ab8b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ab8e: je 0x85ab9c */ if (fZ) goto L_0085ab9c;
L_0085ab90:; BB(0x0085ab90);
    /* 0085ab90: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0085ab96: mov dword ptr [0xae7a14], esi */ W32((u32)(0xae7a14u), r_esi);
L_0085ab9c:; BB(0x0085ab9c);
    /* 0085ab9c: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085ab9f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085aba1: mov dword ptr [0xae7a18], eax */ W32((u32)(0xae7a18u), r_eax);
    /* 0085aba6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085aba8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085aba9: mov edi, dword ptr [0x8f81f0] */ r_edi = R32((u32)(0x8f81f0u));
    /* 0085abaf: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x85abb1u); call_ind(t); }
    /* 0085abb1: cmp word ptr [eax], 0x5a4d */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x5a4du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085abb6: jne 0x85abd7 */ if (!fZ) goto L_0085abd7;
L_0085abb8:; BB(0x0085abb8);
    /* 0085abb8: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0085abbb: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085abbd: cmp dword ptr [ecx], 0x4550 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x4550u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085abc3: jne 0x85abd7 */ if (!fZ) goto L_0085abd7;
L_0085abc5:; BB(0x0085abc5);
    /* 0085abc5: movzx eax, word ptr [ecx + 0x18] */ r_eax = (u32)R16((u32)(r_ecx+0x18u));
    /* 0085abc9: cmp eax, 0x10b */ {  u32 a = r_eax; u32 b = 0x10bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085abce: je 0x85abef */ if (fZ) goto L_0085abef;
L_0085abd0:; BB(0x0085abd0);
    /* 0085abd0: cmp eax, 0x20b */ {  u32 a = r_eax; u32 b = 0x20bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085abd5: je 0x85abdc */ if (fZ) goto L_0085abdc;
L_0085abd7:; BB(0x0085abd7);
    /* 0085abd7: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0085abda: jmp 0x85ac03 */ goto L_0085ac03;
L_0085abdc:; BB(0x0085abdc);
    /* 0085abdc: cmp dword ptr [ecx + 0x84], 0xe */ {  u32 a = R32((u32)(r_ecx+0x84u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085abe3: jbe 0x85abd7 */ if ((fC||fZ)) goto L_0085abd7;
L_0085abe5:; BB(0x0085abe5);
    /* 0085abe5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085abe7: cmp dword ptr [ecx + 0xf8], esi */ {  u32 a = R32((u32)(r_ecx+0xf8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085abed: jmp 0x85abfd */ goto L_0085abfd;
L_0085abef:; BB(0x0085abef);
    /* 0085abef: cmp dword ptr [ecx + 0x74], 0xe */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085abf3: jbe 0x85abd7 */ if ((fC||fZ)) goto L_0085abd7;
L_0085abf5:; BB(0x0085abf5);
    /* 0085abf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085abf7: cmp dword ptr [ecx + 0xe8], esi */ {  u32 a = R32((u32)(r_ecx+0xe8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_0085abfd:; BB(0x0085abfd);
    /* 0085abfd: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0085ac00: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0085ac03:; BB(0x0085ac03);
    /* 0085ac03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac05: call 0x85f529 */ r_esp -= 4; W32(r_esp, 0x85ac0au); f_0085f529();
    /* 0085ac0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ac0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ac0d: jne 0x85ac17 */ if (!fZ) goto L_0085ac17;
L_0085ac0f:; BB(0x0085ac0f);
    /* 0085ac0f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac11: call 0x85ab18 */ r_esp -= 4; W32(r_esp, 0x85ac16u); f_0085ab18();
    /* 0085ac16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ac17:; BB(0x0085ac17);
    /* 0085ac17: call 0x85c76a */ r_esp -= 4; W32(r_esp, 0x85ac1cu); f_0085c76a();
    /* 0085ac1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ac1e: jne 0x85ac28 */ if (!fZ) goto L_0085ac28;
L_0085ac20:; BB(0x0085ac20);
    /* 0085ac20: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac22: call 0x85ab18 */ r_esp -= 4; W32(r_esp, 0x85ac27u); f_0085ab18();
    /* 0085ac27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ac28:; BB(0x0085ac28);
    /* 0085ac28: call 0x863d4f */ r_esp -= 4; W32(r_esp, 0x85ac2du); f_00863d4f();
    /* 0085ac2d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0085ac30: call 0x86497a */ r_esp -= 4; W32(r_esp, 0x85ac35u); f_0086497a();
    /* 0085ac35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085ac37: jge 0x85ac41 */ if ((fS==fO)) goto L_0085ac41;
L_0085ac39:; BB(0x0085ac39);
    /* 0085ac39: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac3b: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85ac40u); f_0085aaf3();
    /* 0085ac40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ac41:; BB(0x0085ac41);
    /* 0085ac41: call dword ptr [0x8f8208] */ { u32 t = R32((u32)(0x8f8208u)); r_esp -= 4; W32(r_esp, 0x85ac47u); call_ind(t); }
    /* 0085ac47: mov dword ptr [0xaf1bc4], eax */ W32((u32)(0xaf1bc4u), r_eax);
    /* 0085ac4c: call 0x8651be */ r_esp -= 4; W32(r_esp, 0x85ac51u); f_008651be();
    /* 0085ac51: mov dword ptr [0xae7a54], eax */ W32((u32)(0xae7a54u), r_eax);
    /* 0085ac56: call 0x86511c */ r_esp -= 4; W32(r_esp, 0x85ac5bu); f_0086511c();
    /* 0085ac5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085ac5d: jge 0x85ac67 */ if ((fS==fO)) goto L_0085ac67;
L_0085ac5f:; BB(0x0085ac5f);
    /* 0085ac5f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac61: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85ac66u); f_0085aaf3();
    /* 0085ac66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ac67:; BB(0x0085ac67);
    /* 0085ac67: call 0x864ee9 */ r_esp -= 4; W32(r_esp, 0x85ac6cu); f_00864ee9();
    /* 0085ac6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085ac6e: jge 0x85ac78 */ if ((fS==fO)) goto L_0085ac78;
L_0085ac70:; BB(0x0085ac70);
    /* 0085ac70: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac72: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85ac77u); f_0085aaf3();
    /* 0085ac77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ac78:; BB(0x0085ac78);
    /* 0085ac78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac7a: call 0x859f05 */ r_esp -= 4; W32(r_esp, 0x85ac7fu); f_00859f05();
    /* 0085ac7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ac80: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0085ac83: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ac85: je 0x85ac8e */ if (fZ) goto L_0085ac8e;
L_0085ac87:; BB(0x0085ac87);
    /* 0085ac87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac88: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85ac8du); f_0085aaf3();
    /* 0085ac8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ac8e:; BB(0x0085ac8e);
    /* 0085ac8e: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 0085ac91: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0085ac94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ac95: call dword ptr [0x8f8204] */ { u32 t = R32((u32)(0x8f8204u)); r_esp -= 4; W32(r_esp, 0x85ac9bu); call_ind(t); }
    /* 0085ac9b: call 0x864e8c */ r_esp -= 4; W32(r_esp, 0x85aca0u); f_00864e8c();
    /* 0085aca0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085aca3: test byte ptr [ebp - 0x44], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffffbcu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085aca7: je 0x85acaf */ if (fZ) goto L_0085acaf;
L_0085aca9:; BB(0x0085aca9);
    /* 0085aca9: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0085acad: jmp 0x85acb2 */ goto L_0085acb2;
L_0085acaf:; BB(0x0085acaf);
    /* 0085acaf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085acb1: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_0085acb2:; BB(0x0085acb2);
    /* 0085acb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085acb3: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085acb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085acb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085acb8: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x85acbau); call_ind(t); }
    /* 0085acba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085acbb: call 0x82cb18 */ r_esp -= 4; W32(r_esp, 0x85acc0u); f_0082cb18();
    /* 0085acc0: mov edi, eax */ r_edi = r_eax;
    /* 0085acc2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0085acc5: cmp dword ptr [ebp - 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085acc8: jne 0x85acd0 */ if (!fZ) goto L_0085acd0;
L_0085acca:; BB(0x0085acca);
    /* 0085acca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085accb: call 0x85a032 */ r_esp -= 4; W32(r_esp, 0x85acd0u); f_0085a032();
L_0085acd0:; BB(0x0085acd0);
    /* 0085acd0: call 0x85a054 */ r_esp -= 4; W32(r_esp, 0x85acd5u); f_0085a054();
    /* 0085acd5: jmp 0x85ad02 */ goto L_0085ad02;
L_0085ad02:; BB(0x0085ad02);
    /* 0085ad02: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ad06: mov eax, edi */ r_eax = r_edi;
    /* 0085ad08: lea esp, [ebp - 0x7c] */ r_esp = (u32)(r_ebp+0xffffff84u);
    /* 0085ad0b: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85ad10u); f_0085e5e7();
    /* 0085ad10: ret  */ FN_RET(0x0085ab43); r_esp += 4; return;
}

void f_0085acd7(void)
{
    FN_ENTER(0x0085acd7);
    /* 0085acd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0085acda: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0085acdc: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0085acde: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0085ace1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ace2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ace3: call 0x864d28 */ r_esp -= 4; W32(r_esp, 0x85ace8u); f_00864d28();
    /* 0085ace8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ace9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085acea: ret  */ FN_RET(0x0085acd7); r_esp += 4; return;
}

void f_0085aceb(void)
{
    FN_ENTER(0x0085aceb);
    /* 0085aceb: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085acee: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0085acf1: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085acf5: jne 0x85acfd */ if (!fZ) goto L_0085acfd;
L_0085acf7:; BB(0x0085acf7);
    /* 0085acf7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085acf8: call 0x85a043 */ r_esp -= 4; W32(r_esp, 0x85acfdu); f_0085a043();
L_0085acfd:; BB(0x0085acfd);
    /* 0085acfd: call 0x85a063 */ r_esp -= 4; W32(r_esp, 0x85ad02u); f_0085a063();
    /* 0085ad02: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ad06: mov eax, edi */ r_eax = r_edi;
    /* 0085ad08: lea esp, [ebp - 0x7c] */ r_esp = (u32)(r_ebp+0xffffff84u);
    /* 0085ad0b: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85ad10u); f_0085e5e7();
    /* 0085ad10: ret  */ FN_RET(0x0085aceb); r_esp += 4; return;
}

void f_0085ad71(void) /* _wctomb */
{
    FN_ENTER(0x0085ad71);
    /* 0085ad71: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85ad76u); f_0085c583();
    /* 0085ad76: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0085ad79: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ad7f: je 0x85ad86 */ if (fZ) goto L_0085ad86;
L_0085ad81:; BB(0x0085ad81);
    /* 0085ad81: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85ad86u); f_0085daca();
L_0085ad86:; BB(0x0085ad86);
    /* 0085ad86: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ad8a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ad8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad8f: call 0x85ad11 */ r_esp -= 4; W32(r_esp, 0x85ad94u); f_0085ad11();
    /* 0085ad94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085ad97: ret  */ FN_RET(0x0085ad71); r_esp += 4; return;
}

void f_0085ada0(void) /* __allmul */
{
    FN_ENTER(0x0085ada0);
    /* 0085ada0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085ada4: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0085ada8: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0085adaa: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0085adae: jne 0x85adb9 */ if (!fZ) goto L_0085adb9;
L_0085adb0:; BB(0x0085adb0);
    /* 0085adb0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085adb4: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0085adb6: ret 0x10 */ FN_RET(0x0085ada0); r_esp += 20; return;
L_0085adb9:; BB(0x0085adb9);
    /* 0085adb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085adba: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0085adbc: mov ebx, eax */ r_ebx = r_eax;
    /* 0085adbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085adc2: mul dword ptr [esp + 0x14] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x14u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0085adc6: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085adc8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085adcc: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0085adce: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085add0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085add1: ret 0x10 */ FN_RET(0x0085ada0); r_esp += 20; return;
}

void f_0085ade0(void) /* __alldiv */
{
    FN_ENTER(0x0085ade0);
    /* 0085ade0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ade1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ade2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ade3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085ade5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0085ade9: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 0085adeb: jge 0x85ae01 */ if ((fS==fO)) goto L_0085ae01;
L_0085aded:; BB(0x0085aded);
    /* 0085aded: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085adee: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0085adf2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085adf4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0085adf6: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0085adf9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0085adfd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_0085ae01:; BB(0x0085ae01);
    /* 0085ae01: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0085ae05: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = 0; }
    /* 0085ae07: jge 0x85ae1d */ if ((fS==fO)) goto L_0085ae1d;
L_0085ae09:; BB(0x0085ae09);
    /* 0085ae09: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ae0a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0085ae0e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085ae10: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0085ae12: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0085ae15: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0085ae19: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
L_0085ae1d:; BB(0x0085ae1d);
    /* 0085ae1d: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0085ae1f: jne 0x85ae39 */ if (!fZ) goto L_0085ae39;
L_0085ae21:; BB(0x0085ae21);
    /* 0085ae21: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0085ae25: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0085ae29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 0085ae2b: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0085ae2b, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0085ae2b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085ae2d: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ae2f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0085ae33: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0085ae33, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0085ae33, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085ae35: mov edx, ebx */ r_edx = r_ebx;
    /* 0085ae37: jmp 0x85ae7a */ goto L_0085ae7a;
L_0085ae39:; BB(0x0085ae39);
    /* 0085ae39: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ae3b: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0085ae3f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0085ae43: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_0085ae47:; BB(0x0085ae47);
    /* 0085ae47: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0085ae49: rcr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ecx = a; }
    /* 0085ae4b: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0085ae4d: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 0085ae4f: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0085ae51: jne 0x85ae47 */ if (!fZ) goto L_0085ae47;
L_0085ae53:; BB(0x0085ae53);
    /* 0085ae53: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0085ae53, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0085ae53, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085ae55: mov esi, eax */ r_esi = r_eax;
    /* 0085ae57: mul dword ptr [esp + 0x1c] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x1cu)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0085ae5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0085ae5d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0085ae61: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0085ae63: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0085ae65: jb 0x85ae75 */ if (fC) goto L_0085ae75;
L_0085ae67:; BB(0x0085ae67);
    /* 0085ae67: cmp edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ae6b: ja 0x85ae75 */ if ((!fC&&!fZ)) goto L_0085ae75;
L_0085ae6d:; BB(0x0085ae6d);
    /* 0085ae6d: jb 0x85ae76 */ if (fC) goto L_0085ae76;
L_0085ae6f:; BB(0x0085ae6f);
    /* 0085ae6f: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ae73: jbe 0x85ae76 */ if ((fC||fZ)) goto L_0085ae76;
L_0085ae75:; BB(0x0085ae75);
    /* 0085ae75: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0085ae76:; BB(0x0085ae76);
    /* 0085ae76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 0085ae78: mov eax, esi */ r_eax = r_esi;
L_0085ae7a:; BB(0x0085ae7a);
    /* 0085ae7a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ae7b: jne 0x85ae84 */ if (!fZ) goto L_0085ae84;
L_0085ae7d:; BB(0x0085ae7d);
    /* 0085ae7d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085ae7f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0085ae81: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
L_0085ae84:; BB(0x0085ae84);
    /* 0085ae84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085ae85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ae86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085ae87: ret 0x10 */ FN_RET(0x0085ade0); r_esp += 20; return;
}

void f_0085ae8a(void) /* __endthreadex */
{
    FN_ENTER(0x0085ae8a);
    /* 0085ae8a: mov eax, dword ptr [0xa23814] */ r_eax = R32((u32)(0xa23814u));
    /* 0085ae8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ae91: je 0x85ae95 */ if (fZ) goto L_0085ae95;
L_0085ae93:; BB(0x0085ae93);
    /* 0085ae93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85ae95u); call_ind(t); }
L_0085ae95:; BB(0x0085ae95);
    /* 0085ae95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ae96: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85ae9bu); f_0085c583();
    /* 0085ae9b: mov esi, eax */ r_esi = r_eax;
    /* 0085ae9d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ae9f: jne 0x85aea9 */ if (!fZ) goto L_0085aea9;
L_0085aea1:; BB(0x0085aea1);
    /* 0085aea1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085aea3: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85aea8u); f_0085aaf3();
    /* 0085aea8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085aea9:; BB(0x0085aea9);
    /* 0085aea9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085aeaa: call 0x85c73b */ r_esp -= 4; W32(r_esp, 0x85aeafu); f_0085c73b();
    /* 0085aeaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085aeb0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aeb4: call dword ptr [0x8f8210] */ { u32 t = R32((u32)(0x8f8210u)); r_esp -= 4; W32(r_esp, 0x85aebau); call_ind(t); }
    /* 0085aeba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085aebb: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085aebd: push 0x998020 */ { u32 v = 0x998020u; r_esp -= 4; W32(r_esp, v); }
    /* 0085aec2: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85aec7u); f_0085e5ac();
    /* 0085aec7: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aecd: call dword ptr [0xae7a90] */ { u32 t = R32((u32)(0xae7a90u)); r_esp -= 4; W32(r_esp, 0x85aed3u); call_ind(t); }
    /* 0085aed3: mov esi, eax */ r_esi = r_eax;
    /* 0085aed5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085aed7: jne 0x85aeff */ if (!fZ) goto L_0085aeff;
L_0085aed9:; BB(0x0085aed9);
    /* 0085aed9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085aedc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085aedd: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aee3: call dword ptr [0xae7a94] */ { u32 t = R32((u32)(0xae7a94u)); r_esp -= 4; W32(r_esp, 0x85aee9u); call_ind(t); }
    /* 0085aee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085aeeb: jne 0x85aef5 */ if (!fZ) goto L_0085aef5;
L_0085aeed:; BB(0x0085aeed);
    /* 0085aeed: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085aeef: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85aef4u); f_0085aaf3();
    /* 0085aef4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085aef5:; BB(0x0085aef5);
    /* 0085aef5: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x85aefbu); call_ind(t); }
    /* 0085aefb: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0085aefd: jmp 0x85af15 */ goto L_0085af15;
L_0085aeff:; BB(0x0085aeff);
    /* 0085aeff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085af02: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0085af05: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 0085af08: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0085af0b: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 0085af0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085af0f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85af14u); f_00858882();
    /* 0085af14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085af15:; BB(0x0085af15);
    /* 0085af15: mov eax, dword ptr [0xa23810] */ r_eax = R32((u32)(0xa23810u));
    /* 0085af1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085af1c: je 0x85af20 */ if (fZ) goto L_0085af20;
L_0085af1e:; BB(0x0085af1e);
    /* 0085af1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85af20u); call_ind(t); }
L_0085af20:; BB(0x0085af20);
    /* 0085af20: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085af24: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085af27: call dword ptr [esi + 0x4c] */ { u32 t = R32((u32)(r_esi+0x4cu)); r_esp -= 4; W32(r_esp, 0x85af2au); call_ind(t); }
    /* 0085af2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085af2b: call 0x85ae8a */ r_esp -= 4; W32(r_esp, 0x85af30u); f_0085ae8a();
    /* 0085af30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0085af33: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0085af35: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0085af37: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0085af3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085af3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085af3c: call 0x864d28 */ r_esp -= 4; W32(r_esp, 0x85af41u); f_00864d28();
    /* 0085af41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af43: ret  */ FN_RET(0x0085ae8a); r_esp += 4; return;
}

void f_0085aebb(void) /* __threadstartex@4 */
{
    FN_ENTER(0x0085aebb);
    /* 0085aebb: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085aebd: push 0x998020 */ { u32 v = 0x998020u; r_esp -= 4; W32(r_esp, v); }
    /* 0085aec2: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85aec7u); f_0085e5ac();
    /* 0085aec7: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aecd: call dword ptr [0xae7a90] */ { u32 t = R32((u32)(0xae7a90u)); r_esp -= 4; W32(r_esp, 0x85aed3u); call_ind(t); }
    /* 0085aed3: mov esi, eax */ r_esi = r_eax;
    /* 0085aed5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085aed7: jne 0x85aeff */ if (!fZ) goto L_0085aeff;
L_0085aed9:; BB(0x0085aed9);
    /* 0085aed9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085aedc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085aedd: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aee3: call dword ptr [0xae7a94] */ { u32 t = R32((u32)(0xae7a94u)); r_esp -= 4; W32(r_esp, 0x85aee9u); call_ind(t); }
    /* 0085aee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085aeeb: jne 0x85aef5 */ if (!fZ) goto L_0085aef5;
L_0085aeed:; BB(0x0085aeed);
    /* 0085aeed: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085aeef: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85aef4u); f_0085aaf3();
    /* 0085aef4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085aef5:; BB(0x0085aef5);
    /* 0085aef5: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x85aefbu); call_ind(t); }
    /* 0085aefb: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0085aefd: jmp 0x85af15 */ goto L_0085af15;
L_0085aeff:; BB(0x0085aeff);
    /* 0085aeff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085af02: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0085af05: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 0085af08: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0085af0b: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 0085af0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085af0f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85af14u); f_00858882();
    /* 0085af14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085af15:; BB(0x0085af15);
    /* 0085af15: mov eax, dword ptr [0xa23810] */ r_eax = R32((u32)(0xa23810u));
    /* 0085af1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085af1c: je 0x85af20 */ if (fZ) goto L_0085af20;
L_0085af1e:; BB(0x0085af1e);
    /* 0085af1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85af20u); call_ind(t); }
L_0085af20:; BB(0x0085af20);
    /* 0085af20: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085af24: push dword ptr [esi + 0x50] */ { u32 v = R32((u32)(r_esi+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085af27: call dword ptr [esi + 0x4c] */ { u32 t = R32((u32)(r_esi+0x4cu)); r_esp -= 4; W32(r_esp, 0x85af2au); call_ind(t); }
    /* 0085af2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085af2b: call 0x85ae8a */ r_esp -= 4; W32(r_esp, 0x85af30u); f_0085ae8a();
    /* 0085af30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0085af33: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0085af35: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0085af37: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0085af3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085af3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085af3c: call 0x864d28 */ r_esp -= 4; W32(r_esp, 0x85af41u); f_00864d28();
    /* 0085af41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af43: ret  */ FN_RET(0x0085aebb); r_esp += 4; return;
}

void f_0085af30(void)
{
    FN_ENTER(0x0085af30);
    /* 0085af30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0085af33: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0085af35: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0085af37: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0085af3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085af3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085af3c: call 0x864d28 */ r_esp -= 4; W32(r_esp, 0x85af41u); f_00864d28();
    /* 0085af41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af43: ret  */ FN_RET(0x0085af30); r_esp += 4; return;
}

void f_0085af44(void)
{
    FN_ENTER(0x0085af44);
    /* 0085af44: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085af47: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085af4a: call 0x85a043 */ r_esp -= 4; W32(r_esp, 0x85af4fu); f_0085a043();
    /* 0085af4f: int3  */ UNSUP(0x0085af4f, "int3");
}

void f_0085af50(void) /* __beginthreadex */
{
    FN_ENTER(0x0085af50);
    /* 0085af50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085af51: mov ebp, esp */ r_ebp = r_esp;
    /* 0085af53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085af54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085af55: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0085af58: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085af5a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085af5c: jne 0x85af6d */ if (!fZ) goto L_0085af6d;
L_0085af5e:; BB(0x0085af5e);
    /* 0085af5e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85af63u); f_00859dd6();
    /* 0085af63: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0085af69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085af6b: jmp 0x85afd7 */ goto L_0085afd7;
L_0085af6d:; BB(0x0085af6d);
    /* 0085af6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085af6e: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085af73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085af75: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x85af7au); f_008587c7();
    /* 0085af7a: mov esi, eax */ r_esi = r_eax;
    /* 0085af7c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085af7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af80: je 0x85afc2 */ if (fZ) goto L_0085afc2;
L_0085af82:; BB(0x0085af82);
    /* 0085af82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085af83: call 0x85c570 */ r_esp -= 4; W32(r_esp, 0x85af88u); f_0085c570();
    /* 0085af88: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0085af8b: or dword ptr [esi + 4], 0xffffffff */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085af8f: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0085af92: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0085af95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085af97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085af98: mov dword ptr [esi + 0x4c], edi */ W32((u32)(r_esi+0x4cu), r_edi);
    /* 0085af9b: jne 0x85afa0 */ if (!fZ) goto L_0085afa0;
L_0085af9d:; BB(0x0085af9d);
    /* 0085af9d: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
L_0085afa0:; BB(0x0085afa0);
    /* 0085afa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085afa1: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085afa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085afa5: push 0x85aebb */ { u32 v = 0x85aebbu; r_esp -= 4; W32(r_esp, v); }
    /* 0085afaa: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085afad: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085afb0: call dword ptr [0x8f8218] */ { u32 t = R32((u32)(0x8f8218u)); r_esp -= 4; W32(r_esp, 0x85afb6u); call_ind(t); }
    /* 0085afb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085afb8: jne 0x85afd6 */ if (!fZ) goto L_0085afd6;
L_0085afba:; BB(0x0085afba);
    /* 0085afba: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85afc0u); call_ind(t); }
    /* 0085afc0: mov ebx, eax */ r_ebx = r_eax;
L_0085afc2:; BB(0x0085afc2);
    /* 0085afc2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085afc3: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85afc8u); f_00858882();
    /* 0085afc8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085afca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085afcb: je 0x85afd4 */ if (fZ) goto L_0085afd4;
L_0085afcd:; BB(0x0085afcd);
    /* 0085afcd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085afce: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x85afd3u); f_00859de8();
    /* 0085afd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085afd4:; BB(0x0085afd4);
    /* 0085afd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085afd6:; BB(0x0085afd6);
    /* 0085afd6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085afd7:; BB(0x0085afd7);
    /* 0085afd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085afd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085afd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085afda: ret  */ FN_RET(0x0085af50); r_esp += 4; return;
}

void f_0085afdb(void) /* __chdir */
{
    FN_ENTER(0x0085afdb);
    /* 0085afdb: push 0x128 */ { u32 v = 0x128u; r_esp -= 4; W32(r_esp, v); }
    /* 0085afe0: push 0x998030 */ { u32 v = 0x998030u; r_esp -= 4; W32(r_esp, v); }
    /* 0085afe5: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85afeau); f_0085e5ac();
    /* 0085afea: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085afef: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085aff2: lea edi, [ebp - 0x124] */ r_edi = (u32)(r_ebp+0xfffffedcu);
    /* 0085aff8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085affa: mov dword ptr [ebp - 0x130], ebx */ W32((u32)(r_ebp+0xfffffed0u), r_ebx);
    /* 0085b000: or dword ptr [ebp - 0x12c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffed4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b007: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b00a: call dword ptr [0x8f8148] */ { u32 t = R32((u32)(0x8f8148u)); r_esp -= 4; W32(r_esp, 0x85b010u); call_ind(t); }
    /* 0085b010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b012: je 0x85b0e8 */ if (fZ) goto L_0085b0e8;
L_0085b018:; BB(0x0085b018);
    /* 0085b018: mov eax, edi */ r_eax = r_edi;
    /* 0085b01a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b01b: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b020: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x85b026u); call_ind(t); }
    /* 0085b026: mov esi, eax */ r_esi = r_eax;
    /* 0085b028: mov dword ptr [ebp - 0x134], esi */ W32((u32)(r_ebp+0xfffffeccu), r_esi);
    /* 0085b02e: cmp esi, 0x104 */ {  u32 a = r_esi; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b034: jle 0x85b099 */ if ((fZ||fS!=fO)) goto L_0085b099;
L_0085b036:; BB(0x0085b036);
    /* 0085b036: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0085b039: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0085b03c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b03f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b042: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x85b047u); f_00858020();
    /* 0085b047: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085b04a: mov edi, esp */ r_edi = r_esp;
    /* 0085b04c: mov dword ptr [ebp - 0x138], edi */ W32((u32)(r_ebp+0xfffffec8u), r_edi);
    /* 0085b052: jmp 0x85b086 */ goto L_0085b086;
L_0085b086:; BB(0x0085b086);
    /* 0085b086: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b08a: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b08c: je 0x85b0e8 */ if (fZ) goto L_0085b0e8;
L_0085b08e:; BB(0x0085b08e);
    /* 0085b08e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b08f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085b090: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b091: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x85b097u); call_ind(t); }
    /* 0085b097: mov esi, eax */ r_esi = r_eax;
L_0085b099:; BB(0x0085b099);
    /* 0085b099: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b09b: je 0x85b0e8 */ if (fZ) goto L_0085b0e8;
L_0085b09d:; BB(0x0085b09d);
    /* 0085b09d: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0085b09f: cmp al, 0x5c */ {  u32 a = (u8)r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085b0a1: je 0x85b0a7 */ if (fZ) goto L_0085b0a7;
L_0085b0a3:; BB(0x0085b0a3);
    /* 0085b0a3: cmp al, 0x2f */ {  u32 a = (u8)r_eax; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085b0a5: jne 0x85b0ac */ if (!fZ) goto L_0085b0ac;
L_0085b0a7:; BB(0x0085b0a7);
    /* 0085b0a7: cmp al, byte ptr [edi + 1] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085b0aa: je 0x85b0e2 */ if (fZ) goto L_0085b0e2;
L_0085b0ac:; BB(0x0085b0ac);
    /* 0085b0ac: mov byte ptr [ebp - 0x128], 0x3d */ W8((u32)(r_ebp+0xfffffed8u), 0x3du);
    /* 0085b0b3: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 0085b0b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0b7: call 0x8652e0 */ r_esp -= 4; W32(r_esp, 0x85b0bcu); f_008652e0();
    /* 0085b0bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b0bd: mov byte ptr [ebp - 0x127], al */ W8((u32)(r_ebp+0xfffffed9u), (u8)r_eax);
    /* 0085b0c3: mov byte ptr [ebp - 0x126], 0x3a */ W8((u32)(r_ebp+0xfffffedau), 0x3au);
    /* 0085b0ca: mov byte ptr [ebp - 0x125], bl */ W8((u32)(r_ebp+0xfffffedbu), (u8)r_ebx);
    /* 0085b0d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0d1: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0085b0d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0d8: call dword ptr [0x8f821c] */ { u32 t = R32((u32)(0x8f821cu)); r_esp -= 4; W32(r_esp, 0x85b0deu); call_ind(t); }
    /* 0085b0de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b0e0: je 0x85b0e8 */ if (fZ) goto L_0085b0e8;
L_0085b0e2:; BB(0x0085b0e2);
    /* 0085b0e2: mov dword ptr [ebp - 0x12c], ebx */ W32((u32)(r_ebp+0xfffffed4u), r_ebx);
L_0085b0e8:; BB(0x0085b0e8);
    /* 0085b0e8: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85b0eeu); call_ind(t); }
    /* 0085b0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0ef: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x85b0f4u); f_00859de8();
    /* 0085b0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b0f5: cmp dword ptr [ebp - 0x130], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b0fb: je 0x85b104 */ if (fZ) goto L_0085b104;
L_0085b0fd:; BB(0x0085b0fd);
    /* 0085b0fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0fe: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b103u); f_00858882();
    /* 0085b103: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b104:; BB(0x0085b104);
    /* 0085b104: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0085b10a: lea esp, [ebp - 0x144] */ r_esp = (u32)(r_ebp+0xfffffebcu);
    /* 0085b110: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085b113: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85b118u); f_0085e419();
    /* 0085b118: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85b11du); f_0085e5e7();
    /* 0085b11d: ret  */ FN_RET(0x0085afdb); r_esp += 4; return;
}

