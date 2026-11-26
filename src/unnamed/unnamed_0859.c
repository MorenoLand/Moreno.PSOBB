#include "protos.h"

void f_0085903d(void) /* ___onexitinit */
{
    FN_ENTER(0x0085903d);
    /* 0085903d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00859042: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x859047u); f_00859c55();
    /* 00859047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859049: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085904a: mov dword ptr [0xaf1bd0], eax */ W32((u32)(0xaf1bd0u), r_eax);
    /* 0085904f: jne 0x859055 */ if (!fZ) goto L_00859055;
L_00859051:; BB(0x00859051);
    /* 00859051: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00859053: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00859054: ret  */ FN_RET(0x0085903d); r_esp += 4; return;
L_00859055:; BB(0x00859055);
    /* 00859055: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00859058: mov eax, dword ptr [0xaf1bd0] */ r_eax = R32((u32)(0xaf1bd0u));
    /* 0085905d: mov dword ptr [0xaf1bcc], eax */ W32((u32)(0xaf1bccu), r_eax);
    /* 00859062: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859064: ret  */ FN_RET(0x0085903d); r_esp += 4; return;
}

void f_00859065(void) /* __onexit */
{
    FN_ENTER(0x00859065);
    /* 00859065: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00859067: push 0x997e80 */ { u32 v = 0x997e80u; r_esp -= 4; W32(r_esp, v); }
    /* 0085906c: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x859071u); f_0085e5ac();
    /* 00859071: call 0x859edb */ r_esp -= 4; W32(r_esp, 0x859076u); f_00859edb();
    /* 00859076: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085907a: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0085907d: call 0x858fbd */ r_esp -= 4; W32(r_esp, 0x859082u); f_00858fbd();
    /* 00859082: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00859085: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859089: call 0x859097 */ r_esp -= 4; W32(r_esp, 0x85908eu); f_00859097();
    /* 0085908e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00859091: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x859096u); f_0085e5e7();
    /* 00859096: ret  */ FN_RET(0x00859065); r_esp += 4; return;
}

void f_00859097(void)
{
    FN_ENTER(0x00859097);
    /* 00859097: call 0x859ee4 */ r_esp -= 4; W32(r_esp, 0x85909cu); f_00859ee4();
    /* 0085909c: ret  */ FN_RET(0x00859097); r_esp += 4; return;
}

void f_0085909d(void) /* _atexit */
{
    FN_ENTER(0x0085909d);
    /* 0085909d: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008590a1: call 0x859065 */ r_esp -= 4; W32(r_esp, 0x8590a6u); f_00859065();
    /* 008590a6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008590a8: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008590aa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008590ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008590ad: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008590ae: ret  */ FN_RET(0x0085909d); r_esp += 4; return;
}

void f_008590af(void) /* ___dtoxmode */
{
    FN_ENTER(0x008590af);
    /* 008590af: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008590b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008590b4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008590b8: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008590bd: cmp byte ptr [esi + 1], 0x3a */ {  u32 a = R8((u32)(r_esi+0x1u)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008590c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008590c2: mov ecx, esi */ r_ecx = r_esi;
    /* 008590c4: jne 0x8590c9 */ if (!fZ) goto L_008590c9;
L_008590c6:; BB(0x008590c6);
    /* 008590c6: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
L_008590c9:; BB(0x008590c9);
    /* 008590c9: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008590cb: cmp dl, 0x5c */ {  u32 a = (u8)r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008590ce: je 0x8590d5 */ if (fZ) goto L_008590d5;
L_008590d0:; BB(0x008590d0);
    /* 008590d0: cmp dl, 0x2f */ {  u32 a = (u8)r_edx; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008590d3: jne 0x8590db */ if (!fZ) goto L_008590db;
L_008590d5:; BB(0x008590d5);
    /* 008590d5: cmp byte ptr [ecx + 1], 0 */ {  u32 a = R8((u32)(r_ecx+0x1u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008590d9: je 0x8590e8 */ if (fZ) goto L_008590e8;
L_008590db:; BB(0x008590db);
    /* 008590db: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008590dd: jne 0x8590e8 */ if (!fZ) goto L_008590e8;
L_008590df:; BB(0x008590df);
    /* 008590df: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008590e1: mov edi, 0x8000 */ r_edi = 0x8000u;
    /* 008590e6: jne 0x8590ed */ if (!fZ) goto L_008590ed;
L_008590e8:; BB(0x008590e8);
    /* 008590e8: mov edi, 0x4040 */ r_edi = 0x4040u;
L_008590ed:; BB(0x008590ed);
    /* 008590ed: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008590f0: not al */ r_eax = (r_eax & 0xffffff00u) | ((~(u8)r_eax) & 0xffu);
    /* 008590f2: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 008590f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008590f5: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008590fa: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008590ff: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00859101: call 0x8612da */ r_esp -= 4; W32(r_esp, 0x859106u); f_008612da();
    /* 00859106: mov esi, eax */ r_esi = r_eax;
    /* 00859108: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085910a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085910b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085910c: je 0x859155 */ if (fZ) goto L_00859155;
L_0085910e:; BB(0x0085910e);
    /* 0085910e: push 0x997ea4 */ { u32 v = 0x997ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 00859113: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859114: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x859119u); f_0086118f();
    /* 00859119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085911b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085911c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085911d: je 0x859152 */ if (fZ) goto L_00859152;
L_0085911f:; BB(0x0085911f);
    /* 0085911f: push 0x997e9c */ { u32 v = 0x997e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00859124: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859125: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x85912au); f_0086118f();
    /* 0085912a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085912c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085912d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085912e: je 0x859152 */ if (fZ) goto L_00859152;
L_00859130:; BB(0x00859130);
    /* 00859130: push 0x997e94 */ { u32 v = 0x997e94u; r_esp -= 4; W32(r_esp, v); }
    /* 00859135: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859136: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x85913bu); f_0086118f();
    /* 0085913b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085913d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085913e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085913f: je 0x859152 */ if (fZ) goto L_00859152;
L_00859141:; BB(0x00859141);
    /* 00859141: push 0x997e8c */ { u32 v = 0x997e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00859146: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859147: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x85914cu); f_0086118f();
    /* 0085914c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085914e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085914f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859150: jne 0x859155 */ if (!fZ) goto L_00859155;
L_00859152:; BB(0x00859152);
    /* 00859152: or edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_00859155:; BB(0x00859155);
    /* 00859155: mov eax, edi */ r_eax = r_edi;
    /* 00859157: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085915a: and eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085915d: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0085915f: mov eax, edi */ r_eax = r_edi;
    /* 00859161: shr eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00859164: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00859167: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859169: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085916a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085916b: ret  */ FN_RET(0x008590af); r_esp += 4; return;
}

void f_0085916c(void) /* _IsRootUNCName */
{
    FN_ENTER(0x0085916c);
    /* 0085916c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085916d: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x859172u); f_0085d760();
    /* 00859172: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859175: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859176: jb 0x8591d6 */ if (fC) goto L_008591d6;
L_00859178:; BB(0x00859178);
    /* 00859178: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0085917a: cmp al, 0x5c */ {  u32 a = (u8)r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085917c: je 0x859182 */ if (fZ) goto L_00859182;
L_0085917e:; BB(0x0085917e);
    /* 0085917e: cmp al, 0x2f */ {  u32 a = (u8)r_eax; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859180: jne 0x8591d6 */ if (!fZ) goto L_008591d6;
L_00859182:; BB(0x00859182);
    /* 00859182: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00859185: cmp al, 0x5c */ {  u32 a = (u8)r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859187: je 0x85918d */ if (fZ) goto L_0085918d;
L_00859189:; BB(0x00859189);
    /* 00859189: cmp al, 0x2f */ {  u32 a = (u8)r_eax; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085918b: jne 0x8591d6 */ if (!fZ) goto L_008591d6;
L_0085918d:; BB(0x0085918d);
    /* 0085918d: lea eax, [esi + 3] */ r_eax = (u32)(r_esi+0x3u);
    /* 00859190: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00859192: xor dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00859194: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859196: je 0x8591d6 */ if (fZ) goto L_008591d6;
L_00859198:; BB(0x00859198);
    /* 00859198: cmp cl, 0x5c */ {  u32 a = (u8)r_ecx; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085919b: je 0x8591a9 */ if (fZ) goto L_008591a9;
L_0085919d:; BB(0x0085919d);
    /* 0085919d: cmp cl, 0x2f */ {  u32 a = (u8)r_ecx; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591a0: je 0x8591a9 */ if (fZ) goto L_008591a9;
L_008591a2:; BB(0x008591a2);
    /* 008591a2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008591a3: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008591a5: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591a7: jne 0x859198 */ if (!fZ) goto L_00859198;
L_008591a9:; BB(0x008591a9);
    /* 008591a9: cmp byte ptr [eax], dl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591ab: je 0x8591d6 */ if (fZ) goto L_008591d6;
L_008591ad:; BB(0x008591ad);
    /* 008591ad: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008591ae: cmp byte ptr [eax], dl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591b0: je 0x8591d6 */ if (fZ) goto L_008591d6;
L_008591b2:; BB(0x008591b2);
    /* 008591b2: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008591b4: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591b6: je 0x8591d2 */ if (fZ) goto L_008591d2;
L_008591b8:; BB(0x008591b8);
    /* 008591b8: cmp cl, 0x5c */ {  u32 a = (u8)r_ecx; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591bb: je 0x8591c9 */ if (fZ) goto L_008591c9;
L_008591bd:; BB(0x008591bd);
    /* 008591bd: cmp cl, 0x2f */ {  u32 a = (u8)r_ecx; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591c0: je 0x8591c9 */ if (fZ) goto L_008591c9;
L_008591c2:; BB(0x008591c2);
    /* 008591c2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008591c3: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008591c5: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591c7: jne 0x8591b8 */ if (!fZ) goto L_008591b8;
L_008591c9:; BB(0x008591c9);
    /* 008591c9: cmp byte ptr [eax], dl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591cb: je 0x8591d2 */ if (fZ) goto L_008591d2;
L_008591cd:; BB(0x008591cd);
    /* 008591cd: cmp byte ptr [eax + 1], dl */ {  u32 a = R8((u32)(r_eax+0x1u)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008591d0: jne 0x8591d6 */ if (!fZ) goto L_008591d6;
L_008591d2:; BB(0x008591d2);
    /* 008591d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008591d4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008591d5: ret  */ FN_RET(0x0085916c); r_esp += 4; return;
L_008591d6:; BB(0x008591d6);
    /* 008591d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008591d8: ret  */ FN_RET(0x0085916c); r_esp += 4; return;
}

void f_008591d9(void) /* __stat */
{
    FN_ENTER(0x008591d9);
    /* 008591d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008591da: lea ebp, [esp - 0x70] */ r_ebp = (u32)(r_esp+0xffffff90u);
    /* 008591de: sub esp, 0x268 */ {  u32 a = r_esp; u32 b = 0x268u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008591e4: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 008591e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008591ea: mov esi, dword ptr [ebp + 0x78] */ r_esi = R32((u32)(r_ebp+0x78u));
    /* 008591ed: push 0x997eb0 */ { u32 v = 0x997eb0u; r_esp -= 4; W32(r_esp, v); }
    /* 008591f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008591f3: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 008591f6: call 0x8616e3 */ r_esp -= 4; W32(r_esp, 0x8591fbu); f_008616e3();
    /* 008591fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008591fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008591fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008591ff: je 0x85921a */ if (fZ) goto L_0085921a;
L_00859201:; BB(0x00859201);
    /* 00859201: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x859206u); f_00859dd6();
    /* 00859206: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00859208: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859209: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0085920b: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x859210u); f_00859ddf();
    /* 00859210: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00859212: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00859215: jmp 0x859512 */ goto L_00859512;
L_0085921a:; BB(0x0085921a);
    /* 0085921a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085921b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085921d: cmp byte ptr [esi + 1], 0x3a */ {  u32 a = R8((u32)(r_esi+0x1u)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859221: jne 0x859256 */ if (!fZ) goto L_00859256;
L_00859223:; BB(0x00859223);
    /* 00859223: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00859225: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859227: je 0x859247 */ if (fZ) goto L_00859247;
L_00859229:; BB(0x00859229);
    /* 00859229: cmp byte ptr [esi + 2], bl */ {  u32 a = R8((u32)(r_esi+0x2u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085922c: jne 0x859247 */ if (!fZ) goto L_00859247;
L_0085922e:; BB(0x0085922e);
    /* 0085922e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x859233u); f_00859dd6();
    /* 00859233: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00859235: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859236: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00859238: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x85923du); f_00859ddf();
    /* 0085923d: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0085923f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00859242: jmp 0x859511 */ goto L_00859511;
L_00859247:; BB(0x00859247);
    /* 00859247: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0085924a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085924b: call 0x8615e2 */ r_esp -= 4; W32(r_esp, 0x859250u); f_008615e2();
    /* 00859250: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859251: sub eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00859254: jmp 0x85925b */ goto L_0085925b;
L_00859256:; BB(0x00859256);
    /* 00859256: call 0x8614fd */ r_esp -= 4; W32(r_esp, 0x85925bu); f_008614fd();
L_0085925b:; BB(0x0085925b);
    /* 0085925b: mov dword ptr [ebp - 0x1f8], eax */ W32((u32)(r_ebp+0xfffffe08u), r_eax);
    /* 00859261: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859262: lea eax, [ebp - 0xd4] */ r_eax = (u32)(r_ebp+0xffffff2cu);
    /* 00859268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859269: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085926a: call dword ptr [0x8f81a8] */ { u32 t = R32((u32)(0x8f81a8u)); r_esp -= 4; W32(r_esp, 0x859270u); call_ind(t); }
    /* 00859270: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00859273: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859275: mov dword ptr [ebp - 0x1ec], eax */ W32((u32)(r_ebp+0xfffffe14u), r_eax);
    /* 0085927b: jne 0x859326 */ if (!fZ) goto L_00859326;
L_00859281:; BB(0x00859281);
    /* 00859281: push 0x997eac */ { u32 v = 0x997eacu; r_esp -= 4; W32(r_esp, v); }
    /* 00859286: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859287: call 0x8616e3 */ r_esp -= 4; W32(r_esp, 0x85928cu); f_008616e3();
    /* 0085928c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085928e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085928f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859290: je 0x859310 */ if (fZ) goto L_00859310;
L_00859292:; BB(0x00859292);
    /* 00859292: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00859297: lea eax, [ebp - 0x1d8] */ r_eax = (u32)(r_ebp+0xfffffe28u);
    /* 0085929d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085929e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085929f: call 0x861453 */ r_esp -= 4; W32(r_esp, 0x8592a4u); f_00861453();
    /* 008592a4: mov esi, eax */ r_esi = r_eax;
    /* 008592a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008592a9: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008592ab: je 0x859310 */ if (fZ) goto L_00859310;
L_008592ad:; BB(0x008592ad);
    /* 008592ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008592ae: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x8592b3u); f_0085d760();
    /* 008592b3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008592b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008592b7: je 0x8592c2 */ if (fZ) goto L_008592c2;
L_008592b9:; BB(0x008592b9);
    /* 008592b9: call 0x85916c */ r_esp -= 4; W32(r_esp, 0x8592beu); f_0085916c();
    /* 008592be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008592c0: je 0x859310 */ if (fZ) goto L_00859310;
L_008592c2:; BB(0x008592c2);
    /* 008592c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008592c3: call dword ptr [0x8f81cc] */ { u32 t = R32((u32)(0x8f81ccu)); r_esp -= 4; W32(r_esp, 0x8592c9u); call_ind(t); }
    /* 008592c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008592cc: jbe 0x859310 */ if ((fC||fZ)) goto L_00859310;
L_008592ce:; BB(0x008592ce);
    /* 008592ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008592cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008592d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008592d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008592d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008592d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008592d6: push 0x7bc */ { u32 v = 0x7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 008592db: mov dword ptr [ebp - 0xd4], 0x10 */ W32((u32)(r_ebp+0xffffff2cu), 0x10u);
    /* 008592e5: mov dword ptr [ebp - 0xb8], ebx */ W32((u32)(r_ebp+0xffffff48u), r_ebx);
    /* 008592eb: mov dword ptr [ebp - 0xb4], ebx */ W32((u32)(r_ebp+0xffffff4cu), r_ebx);
    /* 008592f1: mov byte ptr [ebp - 0xa8], bl */ W8((u32)(r_ebp+0xffffff58u), (u8)r_ebx);
    /* 008592f7: call 0x861345 */ r_esp -= 4; W32(r_esp, 0x8592fcu); f_00861345();
    /* 008592fc: mov esi, dword ptr [ebp + 0x7c] */ r_esi = R32((u32)(r_ebp+0x7cu));
    /* 008592ff: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859302: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00859305: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00859308: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0085930b: jmp 0x8594b6 */ goto L_008594b6;
L_00859310:; BB(0x00859310);
    /* 00859310: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x859315u); f_00859dd6();
    /* 00859315: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00859317: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859318: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0085931a: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x85931fu); f_00859ddf();
    /* 0085931f: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00859321: jmp 0x85950e */ goto L_0085950e;
L_00859326:; BB(0x00859326);
    /* 00859326: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 0085932c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085932d: lea eax, [ebp - 0xc0] */ r_eax = (u32)(r_ebp+0xffffff40u);
    /* 00859333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859334: call dword ptr [0x8f81e4] */ { u32 t = R32((u32)(0x8f81e4u)); r_esp -= 4; W32(r_esp, 0x85933au); call_ind(t); }
    /* 0085933a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085933c: je 0x8594f5 */ if (fZ) goto L_008594f5;
L_00859342:; BB(0x00859342);
    /* 00859342: lea eax, [ebp - 0x1e8] */ r_eax = (u32)(r_ebp+0xfffffe18u);
    /* 00859348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859349: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 0085934f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859350: call dword ptr [0x8f81e0] */ { u32 t = R32((u32)(0x8f81e0u)); r_esp -= 4; W32(r_esp, 0x859356u); call_ind(t); }
    /* 00859356: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859358: je 0x8594f5 */ if (fZ) goto L_008594f5;
L_0085935e:; BB(0x0085935e);
    /* 0085935e: movzx eax, word ptr [ebp - 0x1dc] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe24u));
    /* 00859365: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859367: movzx eax, word ptr [ebp - 0x1de] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe22u));
    /* 0085936e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085936f: movzx eax, word ptr [ebp - 0x1e0] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe20u));
    /* 00859376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859377: movzx eax, word ptr [ebp - 0x1e2] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe1eu));
    /* 0085937e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085937f: movzx eax, word ptr [ebp - 0x1e6] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe1au));
    /* 00859386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859387: movzx eax, word ptr [ebp - 0x1e8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe18u));
    /* 0085938e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085938f: call 0x861345 */ r_esp -= 4; W32(r_esp, 0x859394u); f_00861345();
    /* 00859394: mov esi, dword ptr [ebp + 0x7c] */ r_esi = R32((u32)(r_ebp+0x7cu));
    /* 00859397: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085939a: cmp dword ptr [ebp - 0xc8], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008593a0: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 008593a3: jne 0x8593ad */ if (!fZ) goto L_008593ad;
L_008593a5:; BB(0x008593a5);
    /* 008593a5: cmp dword ptr [ebp - 0xc4], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008593ab: je 0x85941e */ if (fZ) goto L_0085941e;
L_008593ad:; BB(0x008593ad);
    /* 008593ad: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 008593b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008593b4: lea eax, [ebp - 0xc8] */ r_eax = (u32)(r_ebp+0xffffff38u);
    /* 008593ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008593bb: call dword ptr [0x8f81e4] */ { u32 t = R32((u32)(0x8f81e4u)); r_esp -= 4; W32(r_esp, 0x8593c1u); call_ind(t); }
    /* 008593c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008593c3: je 0x8594f5 */ if (fZ) goto L_008594f5;
L_008593c9:; BB(0x008593c9);
    /* 008593c9: lea eax, [ebp - 0x1e8] */ r_eax = (u32)(r_ebp+0xfffffe18u);
    /* 008593cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008593d0: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 008593d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008593d7: call dword ptr [0x8f81e0] */ { u32 t = R32((u32)(0x8f81e0u)); r_esp -= 4; W32(r_esp, 0x8593ddu); call_ind(t); }
    /* 008593dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008593df: je 0x8594f5 */ if (fZ) goto L_008594f5;
L_008593e5:; BB(0x008593e5);
    /* 008593e5: movzx eax, word ptr [ebp - 0x1dc] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe24u));
    /* 008593ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008593ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008593ee: movzx eax, word ptr [ebp - 0x1de] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe22u));
    /* 008593f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008593f6: movzx eax, word ptr [ebp - 0x1e0] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe20u));
    /* 008593fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008593fe: movzx eax, word ptr [ebp - 0x1e2] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe1eu));
    /* 00859405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859406: movzx eax, word ptr [ebp - 0x1e6] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe1au));
    /* 0085940d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085940e: movzx eax, word ptr [ebp - 0x1e8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe18u));
    /* 00859415: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859416: call 0x861345 */ r_esp -= 4; W32(r_esp, 0x85941bu); f_00861345();
    /* 0085941b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085941e:; BB(0x0085941e);
    /* 0085941e: cmp dword ptr [ebp - 0xd0], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859424: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00859427: jne 0x859436 */ if (!fZ) goto L_00859436;
L_00859429:; BB(0x00859429);
    /* 00859429: cmp dword ptr [ebp - 0xcc], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085942f: jne 0x859436 */ if (!fZ) goto L_00859436;
L_00859431:; BB(0x00859431);
    /* 00859431: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00859434: jmp 0x8594a7 */ goto L_008594a7;
L_00859436:; BB(0x00859436);
    /* 00859436: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 0085943c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085943d: lea eax, [ebp - 0xd0] */ r_eax = (u32)(r_ebp+0xffffff30u);
    /* 00859443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859444: call dword ptr [0x8f81e4] */ { u32 t = R32((u32)(0x8f81e4u)); r_esp -= 4; W32(r_esp, 0x85944au); call_ind(t); }
    /* 0085944a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085944c: je 0x8594f5 */ if (fZ) goto L_008594f5;
L_00859452:; BB(0x00859452);
    /* 00859452: lea eax, [ebp - 0x1e8] */ r_eax = (u32)(r_ebp+0xfffffe18u);
    /* 00859458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859459: lea eax, [ebp - 0x1f4] */ r_eax = (u32)(r_ebp+0xfffffe0cu);
    /* 0085945f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859460: call dword ptr [0x8f81e0] */ { u32 t = R32((u32)(0x8f81e0u)); r_esp -= 4; W32(r_esp, 0x859466u); call_ind(t); }
    /* 00859466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859468: je 0x8594f5 */ if (fZ) goto L_008594f5;
L_0085946e:; BB(0x0085946e);
    /* 0085946e: movzx eax, word ptr [ebp - 0x1dc] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe24u));
    /* 00859475: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859477: movzx eax, word ptr [ebp - 0x1de] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe22u));
    /* 0085947e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085947f: movzx eax, word ptr [ebp - 0x1e0] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe20u));
    /* 00859486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859487: movzx eax, word ptr [ebp - 0x1e2] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe1eu));
    /* 0085948e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085948f: movzx eax, word ptr [ebp - 0x1e6] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe1au));
    /* 00859496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859497: movzx eax, word ptr [ebp - 0x1e8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffe18u));
    /* 0085949e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085949f: call 0x861345 */ r_esp -= 4; W32(r_esp, 0x8594a4u); f_00861345();
    /* 008594a4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008594a7:; BB(0x008594a7);
    /* 008594a7: push dword ptr [ebp - 0x1ec] */ { u32 v = R32((u32)(r_ebp+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008594ad: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 008594b0: call dword ptr [0x8f81ac] */ { u32 t = R32((u32)(0x8f81acu)); r_esp -= 4; W32(r_esp, 0x8594b6u); call_ind(t); }
L_008594b6:; BB(0x008594b6);
    /* 008594b6: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 008594b9: push dword ptr [ebp - 0xd4] */ { u32 v = R32((u32)(r_ebp+0xffffff2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008594bf: call 0x8590af */ r_esp -= 4; W32(r_esp, 0x8594c4u); f_008590af();
    /* 008594c4: mov word ptr [esi + 6], ax */ W16((u32)(r_esi+0x6u), (u16)r_eax);
    /* 008594c8: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 008594ce: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 008594d1: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 008594d7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008594d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008594d9: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008594db: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008594de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008594df: mov word ptr [esi + 8], 1 */ W16((u32)(r_esi+0x8u), 0x1u);
    /* 008594e5: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 008594e9: mov word ptr [esi + 0xc], bx */ W16((u32)(r_esi+0xcu), (u16)r_ebx);
    /* 008594ed: mov word ptr [esi + 0xa], bx */ W16((u32)(r_esi+0xau), (u16)r_ebx);
    /* 008594f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008594f3: jmp 0x859510 */ goto L_00859510;
L_008594f5:; BB(0x008594f5);
    /* 008594f5: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8594fbu); call_ind(t); }
    /* 008594fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008594fc: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x859501u); f_00859de8();
    /* 00859501: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859502: push dword ptr [ebp - 0x1ec] */ { u32 v = R32((u32)(r_ebp+0xfffffe14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859508: call dword ptr [0x8f81ac] */ { u32 t = R32((u32)(0x8f81acu)); r_esp -= 4; W32(r_esp, 0x85950eu); call_ind(t); }
L_0085950e:; BB(0x0085950e);
    /* 0085950e: mov eax, edi */ r_eax = r_edi;
L_00859510:; BB(0x00859510);
    /* 00859510: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00859511:; BB(0x00859511);
    /* 00859511: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00859512:; BB(0x00859512);
    /* 00859512: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 00859515: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859516: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85951bu); f_0085e419();
    /* 0085951b: add ebp, 0x70 */ {  u32 a = r_ebp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085951e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085951f: ret  */ FN_RET(0x008591d9); r_esp += 4; return;
}

void f_00859520(void) /* __fsopen */
{
    FN_ENTER(0x00859520);
    /* 00859520: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00859522: push 0x997eb8 */ { u32 v = 0x997eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859527: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85952cu); f_0085e5ac();
    /* 0085952c: call 0x861872 */ r_esp -= 4; W32(r_esp, 0x859531u); f_00861872();
    /* 00859531: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00859534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859536: jne 0x859547 */ if (!fZ) goto L_00859547;
L_00859538:; BB(0x00859538);
    /* 00859538: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85953du); f_00859dd6();
    /* 0085953d: mov dword ptr [eax], 0x18 */ W32((u32)(r_eax), 0x18u);
    /* 00859543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00859545: jmp 0x85956c */ goto L_0085956c;
L_00859547:; BB(0x00859547);
    /* 00859547: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085954b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085954c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085954f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859552: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859555: call 0x86170a */ r_esp -= 4; W32(r_esp, 0x85955au); f_0086170a();
    /* 0085955a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085955d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00859560: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859564: call 0x859572 */ r_esp -= 4; W32(r_esp, 0x859569u); f_00859572();
    /* 00859569: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0085956c:; BB(0x0085956c);
    /* 0085956c: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x859571u); f_0085e5e7();
    /* 00859571: ret  */ FN_RET(0x00859520); r_esp += 4; return;
}

void f_00859572(void)
{
    FN_ENTER(0x00859572);
    /* 00859572: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859575: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85957au); f_0085bc4e();
    /* 0085957a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085957b: ret  */ FN_RET(0x00859572); r_esp += 4; return;
}

void f_0085957c(void) /* _fopen */
{
    FN_ENTER(0x0085957c);
    /* 0085957c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0085957e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859582: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859586: call 0x859520 */ r_esp -= 4; W32(r_esp, 0x85958bu); f_00859520();
    /* 0085958b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085958e: ret  */ FN_RET(0x0085957c); r_esp += 4; return;
}

void f_0085958f(void) /* _fread */
{
    FN_ENTER(0x0085958f);
    /* 0085958f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859590: mov ebp, esp */ r_ebp = r_esp;
    /* 00859592: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859594: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00859595: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00859598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859599: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085959c: imul edi, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008595a0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008595a2: mov ecx, edi */ r_ecx = r_edi;
    /* 008595a4: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008595a7: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008595aa: jne 0x8595b3 */ if (!fZ) goto L_008595b3;
L_008595ac:; BB(0x008595ac);
    /* 008595ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008595ae: jmp 0x85965e */ goto L_0085965e;
L_008595b3:; BB(0x008595b3);
    /* 008595b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008595b4: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 008595b7: test word ptr [esi + 0xc], 0x10c */ {  u32 a = R16((u32)(r_esi+0xcu)); u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008595bd: je 0x8595c7 */ if (fZ) goto L_008595c7;
L_008595bf:; BB(0x008595bf);
    /* 008595bf: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008595c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008595c5: jmp 0x8595d3 */ goto L_008595d3;
L_008595c7:; BB(0x008595c7);
    /* 008595c7: mov dword ptr [ebp - 4], 0x1000 */ W32((u32)(r_ebp+0xfffffffcu), 0x1000u);
    /* 008595ce: jmp 0x8595d3 */ goto L_008595d3;
L_008595d0:; BB(0x008595d0);
    /* 008595d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
L_008595d3:; BB(0x008595d3);
    /* 008595d3: test word ptr [esi + 0xc], 0x10c */ {  u32 a = R16((u32)(r_esi+0xcu)); u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008595d9: je 0x859605 */ if (fZ) goto L_00859605;
L_008595db:; BB(0x008595db);
    /* 008595db: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008595de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008595e0: je 0x859605 */ if (fZ) goto L_00859605;
L_008595e2:; BB(0x008595e2);
    /* 008595e2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008595e4: mov edi, ecx */ r_edi = r_ecx;
    /* 008595e6: jb 0x8595ea */ if (fC) goto L_008595ea;
L_008595e8:; BB(0x008595e8);
    /* 008595e8: mov edi, eax */ r_edi = r_eax;
L_008595ea:; BB(0x008595ea);
    /* 008595ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008595eb: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008595ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008595ee: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x8595f3u); f_00861d00();
    /* 008595f3: sub dword ptr [ebp + 8], edi */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008595f6: sub dword ptr [esi + 4], edi */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008595f9: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008595fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008595fe: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00859600: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00859603: jmp 0x859650 */ goto L_00859650;
L_00859605:; BB(0x00859605);
    /* 00859605: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859608: jb 0x859638 */ if (fC) goto L_00859638;
L_0085960a:; BB(0x0085960a);
    /* 0085960a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085960e: mov eax, ecx */ r_eax = r_ecx;
    /* 00859610: je 0x85961b */ if (fZ) goto L_0085961b;
L_00859612:; BB(0x00859612);
    /* 00859612: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00859614: div dword ptr [ebp - 4] */ { u32 d = R32((u32)(r_ebp+0xfffffffcu)); if (!d) UNSUP(0x00859614, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00859614, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00859617: mov eax, ecx */ r_eax = r_ecx;
    /* 00859619: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0085961b:; BB(0x0085961b);
    /* 0085961b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085961c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085961d: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859620: call 0x861c50 */ r_esp -= 4; W32(r_esp, 0x859625u); f_00861c50();
    /* 00859625: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085962a: je 0x859662 */ if (fZ) goto L_00859662;
L_0085962c:; BB(0x0085962c);
    /* 0085962c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085962f: je 0x859672 */ if (fZ) goto L_00859672;
L_00859631:; BB(0x00859631);
    /* 00859631: sub dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00859634: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00859636: jmp 0x859650 */ goto L_00859650;
L_00859638:; BB(0x00859638);
    /* 00859638: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859639: call 0x861994 */ r_esp -= 4; W32(r_esp, 0x85963eu); f_00861994();
    /* 0085963e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859641: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859642: je 0x859666 */ if (fZ) goto L_00859666;
L_00859644:; BB(0x00859644);
    /* 00859644: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 00859646: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00859649: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085964a: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085964d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00859650:; BB(0x00859650);
    /* 00859650: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00859654: jne 0x8595d0 */ if (!fZ) goto L_008595d0;
L_0085965a:; BB(0x0085965a);
    /* 0085965a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0085965d:; BB(0x0085965d);
    /* 0085965d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085965e:; BB(0x0085965e);
    /* 0085965e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085965f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859660: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859661: ret  */ FN_RET(0x0085958f); r_esp += 4; return;
L_00859662:; BB(0x00859662);
    /* 00859662: or dword ptr [esi + 0xc], 0x10 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00859666:; BB(0x00859666);
    /* 00859666: mov eax, edi */ r_eax = r_edi;
    /* 00859668: sub eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085966b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085966d: div dword ptr [ebp + 0xc] */ { u32 d = R32((u32)(r_ebp+0xcu)); if (!d) UNSUP(0x0085966d, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0085966d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00859670: jmp 0x85965d */ goto L_0085965d;
L_00859672:; BB(0x00859672);
    /* 00859672: or dword ptr [esi + 0xc], 0x20 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859676: jmp 0x859666 */ goto L_00859666;
}

void f_00859678(void) /* sub_859678 */
{
    FN_ENTER(0x00859678);
    /* 00859678: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085967a: push 0x997ec8 */ { u32 v = 0x997ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085967f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x859684u); f_0085e5ac();
    /* 00859684: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859687: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85968cu); f_0085bbfc();
    /* 0085968c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085968d: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00859691: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859694: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859697: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085969a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085969d: call 0x85958f */ r_esp -= 4; W32(r_esp, 0x8596a2u); f_0085958f();
    /* 008596a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008596a5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008596a8: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008596ac: call 0x8596ba */ r_esp -= 4; W32(r_esp, 0x8596b1u); f_008596ba();
    /* 008596b1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008596b4: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8596b9u); f_0085e5e7();
    /* 008596b9: ret  */ FN_RET(0x00859678); r_esp += 4; return;
}

void f_008596ba(void)
{
    FN_ENTER(0x008596ba);
    /* 008596ba: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008596bd: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x8596c2u); f_0085bc4e();
    /* 008596c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008596c3: ret  */ FN_RET(0x008596ba); r_esp += 4; return;
}

void f_00859710(void) /* _fclose */
{
    FN_ENTER(0x00859710);
    /* 00859710: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00859712: push 0x997ed8 */ { u32 v = 0x997ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859717: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85971cu); f_0085e5ac();
    /* 0085971c: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859720: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859723: test byte ptr [esi + 0xc], 0x40 */ {  u32 a = R8((u32)(r_esi+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859727: je 0x859736 */ if (fZ) goto L_00859736;
L_00859729:; BB(0x00859729);
    /* 00859729: and dword ptr [esi + 0xc], 0 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085972d:; BB(0x0085972d);
    /* 0085972d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00859730: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x859735u); f_0085e5e7();
    /* 00859735: ret  */ FN_RET(0x00859710); r_esp += 4; return;
L_00859736:; BB(0x00859736);
    /* 00859736: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859737: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85973cu); f_0085bbfc();
    /* 0085973c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085973d: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00859741: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859742: call 0x8596c4 */ r_esp -= 4; W32(r_esp, 0x859747u); f_008596c4();
    /* 00859747: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859748: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085974b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085974f: call 0x859759 */ r_esp -= 4; W32(r_esp, 0x859754u); f_00859759();
    /* 00859754: jmp 0x85972d */ goto L_0085972d;
}

void f_00859756(void)
{
    FN_ENTER(0x00859756);
    /* 00859756: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859759: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085975a: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85975fu); f_0085bc4e();
    /* 0085975f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859760: ret  */ FN_RET(0x00859756); r_esp += 4; return;
}

void f_00859759(void)
{
    FN_ENTER(0x00859759);
    /* 00859759: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085975a: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85975fu); f_0085bc4e();
    /* 0085975f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859760: ret  */ FN_RET(0x00859759); r_esp += 4; return;
}

void f_00859761(void) /* _fwrite */
{
    FN_ENTER(0x00859761);
    /* 00859761: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859762: mov ebp, esp */ r_ebp = r_esp;
    /* 00859764: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859765: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859766: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00859769: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085976a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085976b: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085976e: imul edi, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00859772: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859774: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00859777: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0085977a: mov ebx, edi */ r_ebx = r_edi;
    /* 0085977c: jne 0x859785 */ if (!fZ) goto L_00859785;
L_0085977e:; BB(0x0085977e);
    /* 0085977e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859780: jmp 0x859850 */ goto L_00859850;
L_00859785:; BB(0x00859785);
    /* 00859785: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859786: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00859789: test word ptr [esi + 0xc], 0x10c */ {  u32 a = R16((u32)(r_esi+0xcu)); u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085978f: je 0x859799 */ if (fZ) goto L_00859799;
L_00859791:; BB(0x00859791);
    /* 00859791: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00859794: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00859797: jmp 0x8597a0 */ goto L_008597a0;
L_00859799:; BB(0x00859799);
    /* 00859799: mov dword ptr [ebp - 4], 0x1000 */ W32((u32)(r_ebp+0xfffffffcu), 0x1000u);
L_008597a0:; BB(0x008597a0);
    /* 008597a0: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008597a3: and ecx, 0x108 */ {  u32 a = r_ecx; u32 b = 0x108u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008597a9: je 0x8597d4 */ if (fZ) goto L_008597d4;
L_008597ab:; BB(0x008597ab);
    /* 008597ab: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008597ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597b0: je 0x8597d4 */ if (fZ) goto L_008597d4;
L_008597b2:; BB(0x008597b2);
    /* 008597b2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008597b4: mov edi, ebx */ r_edi = r_ebx;
    /* 008597b6: jb 0x8597ba */ if (fC) goto L_008597ba;
L_008597b8:; BB(0x008597b8);
    /* 008597b8: mov edi, eax */ r_edi = r_eax;
L_008597ba:; BB(0x008597ba);
    /* 008597ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008597bb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008597be: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008597c0: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x8597c5u); f_00861d00();
    /* 008597c5: sub dword ptr [esi + 4], edi */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008597c8: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008597ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008597cd: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008597cf: add dword ptr [ebp + 8], edi */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008597d2: jmp 0x859816 */ goto L_00859816;
L_008597d4:; BB(0x008597d4);
    /* 008597d4: cmp ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008597d7: jb 0x85981b */ if (fC) goto L_0085981b;
L_008597d9:; BB(0x008597d9);
    /* 008597d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597db: je 0x8597e8 */ if (fZ) goto L_008597e8;
L_008597dd:; BB(0x008597dd);
    /* 008597dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008597de: call 0x85b986 */ r_esp -= 4; W32(r_esp, 0x8597e3u); f_0085b986();
    /* 008597e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008597e6: jne 0x859854 */ if (!fZ) goto L_00859854;
L_008597e8:; BB(0x008597e8);
    /* 008597e8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597ec: mov edi, ebx */ r_edi = r_ebx;
    /* 008597ee: je 0x8597f9 */ if (fZ) goto L_008597f9;
L_008597f0:; BB(0x008597f0);
    /* 008597f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008597f2: mov eax, ebx */ r_eax = r_ebx;
    /* 008597f4: div dword ptr [ebp - 4] */ { u32 d = R32((u32)(r_ebp+0xfffffffcu)); if (!d) UNSUP(0x008597f4, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008597f4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008597f7: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_008597f9:; BB(0x008597f9);
    /* 008597f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008597fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008597fd: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859800: call 0x862354 */ r_esp -= 4; W32(r_esp, 0x859805u); f_00862354();
    /* 00859805: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859808: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085980b: je 0x85985f */ if (fZ) goto L_0085985f;
L_0085980d:; BB(0x0085980d);
    /* 0085980d: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00859810: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00859812: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859814: jb 0x85985f */ if (fC) goto L_0085985f;
L_00859816:; BB(0x00859816);
    /* 00859816: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00859819: jmp 0x859844 */ goto L_00859844;
L_0085981b:; BB(0x0085981b);
    /* 0085981b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085981e: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00859821: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859823: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x859828u); f_0085cd86();
    /* 00859828: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085982b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085982c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085982d: je 0x859854 */ if (fZ) goto L_00859854;
L_0085982f:; BB(0x0085982f);
    /* 0085982f: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00859832: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00859835: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00859836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00859838: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085983b: jg 0x859844 */ if ((!fZ&&fS==fO)) goto L_00859844;
L_0085983d:; BB(0x0085983d);
    /* 0085983d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00859844:; BB(0x00859844);
    /* 00859844: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859846: jne 0x8597a0 */ if (!fZ) goto L_008597a0;
L_0085984c:; BB(0x0085984c);
    /* 0085984c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0085984f:; BB(0x0085984f);
    /* 0085984f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00859850:; BB(0x00859850);
    /* 00859850: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859851: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859852: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859853: ret  */ FN_RET(0x00859761); r_esp += 4; return;
L_00859854:; BB(0x00859854);
    /* 00859854: mov eax, edi */ r_eax = r_edi;
L_00859856:; BB(0x00859856);
    /* 00859856: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00859858: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085985a: div dword ptr [ebp + 0xc] */ { u32 d = R32((u32)(r_ebp+0xcu)); if (!d) UNSUP(0x0085985a, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0085985a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085985d: jmp 0x85984f */ goto L_0085984f;
L_0085985f:; BB(0x0085985f);
    /* 0085985f: or dword ptr [esi + 0xc], 0x20 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859863: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00859866: jmp 0x859856 */ goto L_00859856;
}

void f_008597c1(void)
{
    FN_ENTER(0x008597c1);
    goto L_008597c1;
L_008597a0:; BB(0x008597a0);
    /* 008597a0: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008597a3: and ecx, 0x108 */ {  u32 a = r_ecx; u32 b = 0x108u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008597a9: je 0x8597d4 */ if (fZ) goto L_008597d4;
L_008597ab:; BB(0x008597ab);
    /* 008597ab: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008597ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597b0: je 0x8597d4 */ if (fZ) goto L_008597d4;
L_008597b2:; BB(0x008597b2);
    /* 008597b2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008597b4: mov edi, ebx */ r_edi = r_ebx;
    /* 008597b6: jb 0x8597ba */ if (fC) goto L_008597ba;
L_008597b8:; BB(0x008597b8);
    /* 008597b8: mov edi, eax */ r_edi = r_eax;
L_008597ba:; BB(0x008597ba);
    /* 008597ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008597bb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008597be: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008597c0: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x8597c5u); f_00861d00();
L_008597c1:; BB(0x008597c1);
    /* 008597c1: cmp eax, dword ptr [ebp + 0x7e290000] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x7e290000u)); u32 r = (a - b) & 0xffffffffu;   }
    /* 008597c5: sub dword ptr [esi + 4], edi */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008597c7: add al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008597c8: add dword ptr [esi], edi */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008597c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008597ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008597cd: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008597cf: add dword ptr [ebp + 8], edi */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008597d2: jmp 0x859816 */ goto L_00859816;
L_008597d4:; BB(0x008597d4);
    /* 008597d4: cmp ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008597d7: jb 0x85981b */ if (fC) goto L_0085981b;
L_008597d9:; BB(0x008597d9);
    /* 008597d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597db: je 0x8597e8 */ if (fZ) goto L_008597e8;
L_008597dd:; BB(0x008597dd);
    /* 008597dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008597de: call 0x85b986 */ r_esp -= 4; W32(r_esp, 0x8597e3u); f_0085b986();
    /* 008597e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008597e6: jne 0x859854 */ if (!fZ) goto L_00859854;
L_008597e8:; BB(0x008597e8);
    /* 008597e8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008597ec: mov edi, ebx */ r_edi = r_ebx;
    /* 008597ee: je 0x8597f9 */ if (fZ) goto L_008597f9;
L_008597f0:; BB(0x008597f0);
    /* 008597f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008597f2: mov eax, ebx */ r_eax = r_ebx;
    /* 008597f4: div dword ptr [ebp - 4] */ { u32 d = R32((u32)(r_ebp+0xfffffffcu)); if (!d) UNSUP(0x008597f4, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008597f4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008597f7: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_008597f9:; BB(0x008597f9);
    /* 008597f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008597fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008597fd: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859800: call 0x862354 */ r_esp -= 4; W32(r_esp, 0x859805u); f_00862354();
    /* 00859805: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859808: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085980b: je 0x85985f */ if (fZ) goto L_0085985f;
L_0085980d:; BB(0x0085980d);
    /* 0085980d: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00859810: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00859812: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859814: jb 0x85985f */ if (fC) goto L_0085985f;
L_00859816:; BB(0x00859816);
    /* 00859816: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00859819: jmp 0x859844 */ goto L_00859844;
L_0085981b:; BB(0x0085981b);
    /* 0085981b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085981e: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00859821: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859823: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x859828u); f_0085cd86();
    /* 00859828: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085982b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085982c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085982d: je 0x859854 */ if (fZ) goto L_00859854;
L_0085982f:; BB(0x0085982f);
    /* 0085982f: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00859832: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00859835: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00859836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00859838: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085983b: jg 0x859844 */ if ((!fZ&&fS==fO)) goto L_00859844;
L_0085983d:; BB(0x0085983d);
    /* 0085983d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00859844:; BB(0x00859844);
    /* 00859844: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859846: jne 0x8597a0 */ if (!fZ) goto L_008597a0;
L_0085984c:; BB(0x0085984c);
    /* 0085984c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0085984f:; BB(0x0085984f);
    /* 0085984f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859850: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859851: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859852: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859853: ret  */ FN_RET(0x008597c1); r_esp += 4; return;
L_00859854:; BB(0x00859854);
    /* 00859854: mov eax, edi */ r_eax = r_edi;
L_00859856:; BB(0x00859856);
    /* 00859856: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00859858: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085985a: div dword ptr [ebp + 0xc] */ { u32 d = R32((u32)(r_ebp+0xcu)); if (!d) UNSUP(0x0085985a, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0085985a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085985d: jmp 0x85984f */ goto L_0085984f;
L_0085985f:; BB(0x0085985f);
    /* 0085985f: or dword ptr [esi + 0xc], 0x20 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859863: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00859866: jmp 0x859856 */ goto L_00859856;
}

void f_00859868(void) /* sub_859868 */
{
    FN_ENTER(0x00859868);
    /* 00859868: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085986a: push 0x997ee8 */ { u32 v = 0x997ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085986f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x859874u); f_0085e5ac();
    /* 00859874: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859877: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85987cu); f_0085bbfc();
    /* 0085987c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085987d: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00859881: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859884: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859887: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085988a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085988d: call 0x859761 */ r_esp -= 4; W32(r_esp, 0x859892u); f_00859761();
    /* 00859892: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859895: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00859898: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085989c: call 0x8598aa */ r_esp -= 4; W32(r_esp, 0x8598a1u); f_008598aa();
    /* 008598a1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008598a4: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8598a9u); f_0085e5e7();
    /* 008598a9: ret  */ FN_RET(0x00859868); r_esp += 4; return;
}

void f_008598aa(void)
{
    FN_ENTER(0x008598aa);
    /* 008598aa: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008598ad: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x8598b2u); f_0085bc4e();
    /* 008598b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008598b3: ret  */ FN_RET(0x008598aa); r_esp += 4; return;
}

void f_008598c0(void) /* _strncmp */
{
    FN_ENTER(0x008598c0);
    /* 008598c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008598c1: mov ebp, esp */ r_ebp = r_esp;
    /* 008598c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008598c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008598c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008598c6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008598c9: jecxz 0x8598f2 */ if (!r_ecx) goto L_008598f2;
L_008598cb:; BB(0x008598cb);
    /* 008598cb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008598cd: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008598d0: mov esi, edi */ r_esi = r_edi;
    /* 008598d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008598d4: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008598d6: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008598d8: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008598da: mov edi, esi */ r_edi = r_esi;
    /* 008598dc: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008598df: repe cmpsb byte ptr [esi], byte ptr es:[edi] */ while (r_ecx) { { u32 a = R8(r_esi); u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 008598e1: mov al, byte ptr [esi - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0xffffffffu))) & 0xffu);
    /* 008598e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008598e6: cmp al, byte ptr [edi - 1] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi+0xffffffffu)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008598e9: ja 0x8598f0 */ if ((!fC&&!fZ)) goto L_008598f0;
L_008598eb:; BB(0x008598eb);
    /* 008598eb: je 0x8598f2 */ if (fZ) goto L_008598f2;
L_008598ed:; BB(0x008598ed);
    /* 008598ed: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
L_008598f0:; BB(0x008598f0);
    /* 008598f0: not ecx */ r_ecx = ~r_ecx;
L_008598f2:; BB(0x008598f2);
    /* 008598f2: mov eax, ecx */ r_eax = r_ecx;
    /* 008598f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008598f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008598f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008598f7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008598f8: ret  */ FN_RET(0x008598c0); r_esp += 4; return;
}

void f_008599c1(void) /* _tolower */
{
    FN_ENTER(0x008599c1);
    /* 008599c1: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8599c6u); f_0085c583();
    /* 008599c6: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 008599c9: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008599cf: je 0x8599d6 */ if (fZ) goto L_008599d6;
L_008599d1:; BB(0x008599d1);
    /* 008599d1: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x8599d6u); f_0085daca();
L_008599d6:; BB(0x008599d6);
    /* 008599d6: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008599da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008599db: call 0x8598f9 */ r_esp -= 4; W32(r_esp, 0x8599e0u); f_008598f9();
    /* 008599e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008599e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008599e2: ret  */ FN_RET(0x008599c1); r_esp += 4; return;
}

void f_008599e3(void) /* __stricmp */
{
    FN_ENTER(0x008599e3);
    /* 008599e3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008599e4: mov ebp, esp */ r_ebp = r_esp;
    /* 008599e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008599e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008599e8: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8599edu); f_0085c583();
    /* 008599ed: mov ebx, dword ptr [eax + 0x64] */ r_ebx = R32((u32)(r_eax+0x64u));
    /* 008599f0: cmp ebx, dword ptr [0xa23cec] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008599f6: je 0x8599ff */ if (fZ) goto L_008599ff;
L_008599f8:; BB(0x008599f8);
    /* 008599f8: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x8599fdu); f_0085daca();
    /* 008599fd: mov ebx, eax */ r_ebx = r_eax;
L_008599ff:; BB(0x008599ff);
    /* 008599ff: cmp dword ptr [ebx + 0x14], 0 */ {  u32 a = R32((u32)(r_ebx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859a03: jne 0x859a14 */ if (!fZ) goto L_00859a14;
L_00859a05:; BB(0x00859a05);
    /* 00859a05: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859a08: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859a0b: call 0x862400 */ r_esp -= 4; W32(r_esp, 0x859a10u); f_00862400();
    /* 00859a10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859a11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859a12: jmp 0x859a49 */ goto L_00859a49;
L_00859a14:; BB(0x00859a14);
    /* 00859a14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859a15: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859a18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859a19: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_00859a1c:; BB(0x00859a1c);
    /* 00859a1c: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 00859a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859a20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00859a21: call 0x8598f9 */ r_esp -= 4; W32(r_esp, 0x859a26u); f_008598f9();
    /* 00859a26: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00859a29: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 00859a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859a2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00859a2e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859a2f: call 0x8598f9 */ r_esp -= 4; W32(r_esp, 0x859a34u); f_008598f9();
    /* 00859a34: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859a37: mov ecx, eax */ r_ecx = r_eax;
    /* 00859a39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00859a3c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00859a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859a3f: je 0x859a45 */ if (fZ) goto L_00859a45;
L_00859a41:; BB(0x00859a41);
    /* 00859a41: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859a43: je 0x859a1c */ if (fZ) goto L_00859a1c;
L_00859a45:; BB(0x00859a45);
    /* 00859a45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859a46: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00859a48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00859a49:; BB(0x00859a49);
    /* 00859a49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859a4a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859a4b: ret  */ FN_RET(0x008599e3); r_esp += 4; return;
}

void f_00859a50(void) /* _strstr */
{
    FN_ENTER(0x00859a50);
    /* 00859a50: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00859a54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859a55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00859a56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859a57: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00859a59: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00859a5d: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859a5f: je 0x859ad0 */ if (fZ) goto L_00859ad0;
L_00859a61:; BB(0x00859a61);
    /* 00859a61: mov dh, byte ptr [ecx + 1] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_ecx+0x1u))) & 0xffu) << 8);
    /* 00859a64: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859a66: je 0x859abd */ if (fZ) goto L_00859abd;
L_00859a68:; BB(0x00859a68);
    /* 00859a68: mov esi, edi */ r_esi = r_edi;
    /* 00859a6a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00859a6e: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00859a70: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859a73: cmp al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859a75: je 0x859a8e */ if (fZ) goto L_00859a8e;
L_00859a77:; BB(0x00859a77);
    /* 00859a77: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859a79: je 0x859a88 */ if (fZ) goto L_00859a88;
L_00859a7b:; BB(0x00859a7b);
    /* 00859a7b: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00859a7d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00859a80:; BB(0x00859a80);
    /* 00859a80: cmp al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859a82: je 0x859a8e */ if (fZ) goto L_00859a8e;
L_00859a84:; BB(0x00859a84);
    /* 00859a84: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859a86: jne 0x859a7b */ if (!fZ) goto L_00859a7b;
L_00859a88:; BB(0x00859a88);
    /* 00859a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859a89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859a8a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859a8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859a8d: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_00859a8e:; BB(0x00859a8e);
    /* 00859a8e: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00859a90: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859a93: cmp al, dh */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_edx>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859a95: jne 0x859a80 */ if (!fZ) goto L_00859a80;
L_00859a97:; BB(0x00859a97);
    /* 00859a97: lea edi, [esi - 1] */ r_edi = (u32)(r_esi+0xffffffffu);
L_00859a9a:; BB(0x00859a9a);
    /* 00859a9a: mov ah, byte ptr [ecx + 2] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ecx+0x2u))) & 0xffu) << 8);
    /* 00859a9d: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859a9f: je 0x859ac9 */ if (fZ) goto L_00859ac9;
L_00859aa1:; BB(0x00859aa1);
    /* 00859aa1: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00859aa3: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859aa6: cmp al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859aa8: jne 0x859a68 */ if (!fZ) goto L_00859a68;
L_00859aaa:; BB(0x00859aaa);
    /* 00859aaa: mov al, byte ptr [ecx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x3u))) & 0xffu);
    /* 00859aad: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859aaf: je 0x859ac9 */ if (fZ) goto L_00859ac9;
L_00859ab1:; BB(0x00859ab1);
    /* 00859ab1: mov ah, byte ptr [esi - 1] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_esi+0xffffffffu))) & 0xffu) << 8);
    /* 00859ab4: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00859ab7: cmp al, ah */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_eax>>8); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859ab9: je 0x859a9a */ if (fZ) goto L_00859a9a;
L_00859abb:; BB(0x00859abb);
    /* 00859abb: jmp 0x859a68 */ goto L_00859a68;
L_00859abd:; BB(0x00859abd);
    /* 00859abd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00859abf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859ac0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859ac1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859ac2: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00859ac4: jmp 0x862466 */ goto L_00862466;
L_00859ac9:; BB(0x00859ac9);
    /* 00859ac9: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 00859acc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859acd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859ace: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859acf: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_00859ad0:; BB(0x00859ad0);
    /* 00859ad0: mov eax, edi */ r_eax = r_edi;
    /* 00859ad2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859ad3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859ad4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859ad5: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_00862450:; BB(0x00862450);
    /* 00862450: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00862453: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00862454: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_00862466:; BB(0x00862466);
    /* 00862466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862467: mov ebx, eax */ r_ebx = r_eax;
    /* 00862469: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086246c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00862470: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862476: je 0x86248d */ if (fZ) goto L_0086248d;
L_00862478:; BB(0x00862478);
    /* 00862478: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0086247a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086247d: cmp cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0086247f: je 0x862450 */ if (fZ) goto L_00862450;
L_00862481:; BB(0x00862481);
    /* 00862481: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862483: je 0x8624d6 */ if (fZ) goto L_008624d6;
L_00862485:; BB(0x00862485);
    /* 00862485: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086248b: jne 0x862478 */ if (!fZ) goto L_00862478;
L_0086248d:; BB(0x0086248d);
    /* 0086248d: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0086248f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862490: mov eax, ebx */ r_eax = r_ebx;
    /* 00862492: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00862495: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862496: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_00862498:; BB(0x00862498);
    /* 00862498: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0086249a: mov edi, 0x7efefeff */ r_edi = 0x7efefeffu;
    /* 0086249f: mov eax, ecx */ r_eax = r_ecx;
    /* 008624a1: mov esi, edi */ r_esi = r_edi;
    /* 008624a3: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008624a5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008624a7: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008624a9: xor ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008624ac: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008624af: xor ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008624b1: xor eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008624b3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008624b6: and ecx, 0x81010100 */ {  u32 a = r_ecx; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008624bc: jne 0x8624da */ if (!fZ) goto L_008624da;
L_008624be:; BB(0x008624be);
    /* 008624be: and eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008624c3: je 0x862498 */ if (fZ) goto L_00862498;
L_008624c5:; BB(0x008624c5);
    /* 008624c5: and eax, 0x1010100 */ {  u32 a = r_eax; u32 b = 0x1010100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008624ca: jne 0x8624d4 */ if (!fZ) goto L_008624d4;
L_008624cc:; BB(0x008624cc);
    /* 008624cc: and esi, 0x80000000 */ {  u32 a = r_esi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008624d2: jne 0x862498 */ if (!fZ) goto L_00862498;
L_008624d4:; BB(0x008624d4);
    /* 008624d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008624d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008624d6:; BB(0x008624d6);
    /* 008624d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008624d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008624d9: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_008624da:; BB(0x008624da);
    /* 008624da: mov eax, dword ptr [edx - 4] */ r_eax = R32((u32)(r_edx+0xfffffffcu));
    /* 008624dd: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624df: je 0x862517 */ if (fZ) goto L_00862517;
L_008624e1:; BB(0x008624e1);
    /* 008624e1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624e3: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_008624e5:; BB(0x008624e5);
    /* 008624e5: cmp ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624e7: je 0x862510 */ if (fZ) goto L_00862510;
L_008624e9:; BB(0x008624e9);
    /* 008624e9: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624eb: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_008624ed:; BB(0x008624ed);
    /* 008624ed: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008624f0: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624f2: je 0x862509 */ if (fZ) goto L_00862509;
L_008624f4:; BB(0x008624f4);
    /* 008624f4: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624f6: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_008624f8:; BB(0x008624f8);
    /* 008624f8: cmp ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624fa: je 0x862502 */ if (fZ) goto L_00862502;
L_008624fc:; BB(0x008624fc);
    /* 008624fc: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624fe: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_00862500:; BB(0x00862500);
    /* 00862500: jmp 0x862498 */ goto L_00862498;
L_00862502:; BB(0x00862502);
    /* 00862502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00862503: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00862504: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00862507: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00862508: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_00862509:; BB(0x00862509);
    /* 00862509: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 0086250c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086250d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086250e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086250f: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_00862510:; BB(0x00862510);
    /* 00862510: lea eax, [edx - 3] */ r_eax = (u32)(r_edx+0xfffffffdu);
    /* 00862513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00862514: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00862515: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00862516: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
L_00862517:; BB(0x00862517);
    /* 00862517: lea eax, [edx - 4] */ r_eax = (u32)(r_edx+0xfffffffcu);
    /* 0086251a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086251b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086251c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086251d: ret  */ FN_RET(0x00859a50); r_esp += 4; return;
}

void f_00859b37(void) /* _towupper */
{
    FN_ENTER(0x00859b37);
    /* 00859b37: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859b3cu); f_0085c583();
    /* 00859b3c: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00859b3f: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859b45: je 0x859b4c */ if (fZ) goto L_00859b4c;
L_00859b47:; BB(0x00859b47);
    /* 00859b47: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x859b4cu); f_0085daca();
L_00859b4c:; BB(0x00859b4c);
    /* 00859b4c: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859b50: jne 0x859b6d */ if (!fZ) goto L_00859b6d;
L_00859b52:; BB(0x00859b52);
    /* 00859b52: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00859b56: cmp ax, 0x61 */ {  u32 a = (u16)r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00859b5a: jb 0x859b69 */ if (fC) goto L_00859b69;
L_00859b5c:; BB(0x00859b5c);
    /* 00859b5c: cmp ax, 0x7a */ {  u32 a = (u16)r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00859b60: ja 0x859b69 */ if ((!fC&&!fZ)) goto L_00859b69;
L_00859b62:; BB(0x00859b62);
    /* 00859b62: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00859b65: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00859b68: ret  */ FN_RET(0x00859b37); r_esp += 4; return;
L_00859b69:; BB(0x00859b69);
    /* 00859b69: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00859b6c: ret  */ FN_RET(0x00859b37); r_esp += 4; return;
L_00859b6d:; BB(0x00859b6d);
    /* 00859b6d: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859b71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859b72: call 0x859ad6 */ r_esp -= 4; W32(r_esp, 0x859b77u); f_00859ad6();
    /* 00859b77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859b78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859b79: ret  */ FN_RET(0x00859b37); r_esp += 4; return;
}

void f_00859b7a(void) /* _sscanf */
{
    FN_ENTER(0x00859b7a);
    /* 00859b7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859b7b: mov ebp, esp */ r_ebp = r_esp;
    /* 00859b7d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00859b80: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00859b83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859b84: mov dword ptr [ebp - 0x14], 0x49 */ W32((u32)(r_ebp+0xffffffecu), 0x49u);
    /* 00859b8b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00859b8e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00859b91: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x859b96u); f_0085d760();
    /* 00859b96: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00859b99: lea eax, [ebp + 0x10] */ r_eax = (u32)(r_ebp+0x10u);
    /* 00859b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859b9d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859ba0: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00859ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859ba4: call 0x86278d */ r_esp -= 4; W32(r_esp, 0x859ba9u); f_0086278d();
    /* 00859ba9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00859bac: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859bad: ret  */ FN_RET(0x00859b7a); r_esp += 4; return;
}

void f_00859c1d(void)
{
    FN_ENTER(0x00859c1d);
    /* 00859c1d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859c20: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00859c22: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x859c27u); f_0085e4c5();
    /* 00859c27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859c28: ret  */ FN_RET(0x00859c1d); r_esp += 4; return;
}

void f_00859c20(void)
{
    FN_ENTER(0x00859c20);
    /* 00859c20: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00859c22: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x859c27u); f_0085e4c5();
    /* 00859c27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859c28: ret  */ FN_RET(0x00859c20); r_esp += 4; return;
}

void f_00859c55(void) /* _malloc */
{
    FN_ENTER(0x00859c55);
    /* 00859c55: push dword ptr [0xae7bfc] */ { u32 v = R32((u32)(0xae7bfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859c5b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859c5f: call 0x859c29 */ r_esp -= 4; W32(r_esp, 0x859c64u); f_00859c29();
    /* 00859c64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859c65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859c66: ret  */ FN_RET(0x00859c55); r_esp += 4; return;
}

void f_00859c67(void) /* _difftime */
{
    FN_ENTER(0x00859c67);
    /* 00859c67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859c68: mov ebp, esp */ r_ebp = r_esp;
    /* 00859c6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00859c6d: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00859c70: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00859c73: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 00859c76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00859c77: ret  */ FN_RET(0x00859c67); r_esp += 4; return;
}

void f_00859c78(void) /* _strtok */
{
    FN_ENTER(0x00859c78);
    /* 00859c78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859c79: mov ebp, esp */ r_ebp = r_esp;
    /* 00859c7b: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00859c7e: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00859c83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00859c84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859c85: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00859c88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859c89: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00859c8c: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859c91u); f_0085c583();
    /* 00859c91: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859c93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859c94: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00859c97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00859c99: lea edi, [ebp - 0x24] */ r_edi = (u32)(r_ebp+0xffffffdcu);
    /* 00859c9c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00859c9e: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00859ca0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00859ca1:; BB(0x00859ca1);
    /* 00859ca1: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00859ca3: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 00859ca6: mov eax, ecx */ r_eax = r_ecx;
    /* 00859ca8: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00859caa: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00859cac: shl bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 00859cae: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00859cb1: lea eax, [ebp + eax - 0x24] */ r_eax = (u32)(r_ebp+r_eax+0xffffffdcu);
    /* 00859cb5: or byte ptr [eax], bl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00859cb7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859cb8: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859cba: jne 0x859ca1 */ if (!fZ) goto L_00859ca1;
L_00859cbc:; BB(0x00859cbc);
    /* 00859cbc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00859cbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859cc1: jne 0x859cd0 */ if (!fZ) goto L_00859cd0;
L_00859cc3:; BB(0x00859cc3);
    /* 00859cc3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00859cc6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00859cc9: jmp 0x859cd0 */ goto L_00859cd0;
L_00859ccb:; BB(0x00859ccb);
    /* 00859ccb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859ccd: je 0x859ce9 */ if (fZ) goto L_00859ce9;
L_00859ccf:; BB(0x00859ccf);
    /* 00859ccf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00859cd0:; BB(0x00859cd0);
    /* 00859cd0: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00859cd2: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 00859cd5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00859cd7: mov ecx, esi */ r_ecx = r_esi;
    /* 00859cd9: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 00859cdb: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00859cdc: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00859cde: shr esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00859ce1: mov cl, byte ptr [ebp + esi - 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_esi+0xffffffdcu))) & 0xffu);
    /* 00859ce5: test cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859ce7: jne 0x859ccb */ if (!fZ) goto L_00859ccb;
L_00859ce9:; BB(0x00859ce9);
    /* 00859ce9: mov ebx, edx */ r_ebx = r_edx;
    /* 00859ceb: jmp 0x859d05 */ goto L_00859d05;
L_00859ced:; BB(0x00859ced);
    /* 00859ced: movzx esi, byte ptr [edx] */ r_esi = (u32)R8((u32)(r_edx));
    /* 00859cf0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00859cf2: mov ecx, esi */ r_ecx = r_esi;
    /* 00859cf4: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 00859cf6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00859cf7: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00859cf9: shr esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00859cfc: mov cl, byte ptr [ebp + esi - 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_esi+0xffffffdcu))) & 0xffu);
    /* 00859d00: test cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859d02: jne 0x859d0c */ if (!fZ) goto L_00859d0c;
L_00859d04:; BB(0x00859d04);
    /* 00859d04: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00859d05:; BB(0x00859d05);
    /* 00859d05: cmp byte ptr [edx], 0 */ {  u32 a = R8((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00859d08: jne 0x859ced */ if (!fZ) goto L_00859ced;
L_00859d0a:; BB(0x00859d0a);
    /* 00859d0a: jmp 0x859d10 */ goto L_00859d10;
L_00859d0c:; BB(0x00859d0c);
    /* 00859d0c: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 00859d0f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00859d10:; BB(0x00859d10);
    /* 00859d10: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00859d13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00859d16: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00859d19: mov eax, ebx */ r_eax = r_ebx;
    /* 00859d1b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00859d1d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00859d1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859d20: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00859d22: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00859d24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859d25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00859d26: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x859d2bu); f_0085e419();
    /* 00859d2b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859d2c: ret  */ FN_RET(0x00859c78); r_esp += 4; return;
}

void f_00859d2d(void) /* _time */
{
    FN_ENTER(0x00859d2d);
    /* 00859d2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859d2e: mov ebp, esp */ r_ebp = r_esp;
    /* 00859d30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859d31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859d32: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00859d35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859d36: call dword ptr [0x8f81e8] */ { u32 t = R32((u32)(0x8f81e8u)); r_esp -= 4; W32(r_esp, 0x859d3cu); call_ind(t); }
    /* 00859d3c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00859d3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00859d42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00859d44: add eax, 0x2ac18000 */ {  u32 a = r_eax; u32 b = 0x2ac18000u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00859d49: push 0x989680 */ { u32 v = 0x989680u; r_esp -= 4; W32(r_esp, v); }
    /* 00859d4e: adc ecx, 0xfe624e21 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0xfe624e21u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00859d54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859d55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859d56: call 0x863510 */ r_esp -= 4; W32(r_esp, 0x859d5bu); f_00863510();
    /* 00859d5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00859d5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859d60: je 0x859d64 */ if (fZ) goto L_00859d64;
L_00859d62:; BB(0x00859d62);
    /* 00859d62: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00859d64:; BB(0x00859d64);
    /* 00859d64: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859d65: ret  */ FN_RET(0x00859d2d); r_esp += 4; return;
}

void f_00859d66(void) /* __snwprintf */
{
    FN_ENTER(0x00859d66);
    /* 00859d66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859d67: mov ebp, esp */ r_ebp = r_esp;
    /* 00859d69: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00859d6c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00859d6f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00859d72: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00859d75: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00859d78: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00859d7a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00859d7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859d7e: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 00859d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859d82: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859d85: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00859d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859d89: mov dword ptr [ebp - 0x14], 0x42 */ W32((u32)(r_ebp+0xffffffecu), 0x42u);
    /* 00859d90: call 0x85cf26 */ r_esp -= 4; W32(r_esp, 0x859d95u); f_0085cf26();
    /* 00859d95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fC = (r < a); }
    /* 00859d98: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00859d9b: mov esi, eax */ r_esi = r_eax;
    /* 00859d9d: js 0x859daa */ if (fS) goto L_00859daa;
L_00859d9f:; BB(0x00859d9f);
    /* 00859d9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00859da2: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00859da5: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00859da8: jmp 0x859db7 */ goto L_00859db7;
L_00859daa:; BB(0x00859daa);
    /* 00859daa: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00859dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859dae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00859db0: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x859db5u); f_0085cd86();
    /* 00859db5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859db6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00859db7:; BB(0x00859db7);
    /* 00859db7: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00859dba: js 0x859dc4 */ if (fS) goto L_00859dc4;
L_00859dbc:; BB(0x00859dbc);
    /* 00859dbc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00859dbf: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00859dc2: jmp 0x859dd1 */ goto L_00859dd1;
L_00859dc4:; BB(0x00859dc4);
    /* 00859dc4: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00859dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859dc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00859dca: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x859dcfu); f_0085cd86();
    /* 00859dcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859dd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00859dd1:; BB(0x00859dd1);
    /* 00859dd1: mov eax, esi */ r_eax = r_esi;
    /* 00859dd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859dd4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859dd5: ret  */ FN_RET(0x00859d66); r_esp += 4; return;
}

void f_00859dd6(void) /* __errno */
{
    FN_ENTER(0x00859dd6);
    /* 00859dd6: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859ddbu); f_0085c583();
    /* 00859ddb: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00859dde: ret  */ FN_RET(0x00859dd6); r_esp += 4; return;
}

void f_00859ddf(void) /* ___doserrno */
{
    FN_ENTER(0x00859ddf);
    /* 00859ddf: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859de4u); f_0085c583();
    /* 00859de4: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00859de7: ret  */ FN_RET(0x00859ddf); r_esp += 4; return;
}

void f_00859de8(void) /* __dosmaperr */
{
    FN_ENTER(0x00859de8);
    /* 00859de8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859de9: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859deeu); f_0085c583();
    /* 00859dee: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00859df2: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00859df5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00859df7:; BB(0x00859df7);
    /* 00859df7: cmp ecx, dword ptr [esi*8 + 0xa23858] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi*8+0xa23858u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859dfe: je 0x859e1e */ if (fZ) goto L_00859e1e;
L_00859e00:; BB(0x00859e00);
    /* 00859e00: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859e01: cmp esi, 0x2d */ {  u32 a = r_esi; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859e04: jb 0x859df7 */ if (fC) goto L_00859df7;
L_00859e06:; BB(0x00859e06);
    /* 00859e06: cmp ecx, 0x13 */ {  u32 a = r_ecx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859e09: jb 0x859e2f */ if (fC) goto L_00859e2f;
L_00859e0b:; BB(0x00859e0b);
    /* 00859e0b: cmp ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00859e0e: ja 0x859e2f */ if ((!fC&&!fZ)) goto L_00859e2f;
L_00859e10:; BB(0x00859e10);
    /* 00859e10: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859e15u); f_0085c583();
    /* 00859e15: mov dword ptr [eax + 8], 0xd */ W32((u32)(r_eax+0x8u), 0xdu);
    /* 00859e1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859e1d: ret  */ FN_RET(0x00859de8); r_esp += 4; return;
L_00859e1e:; BB(0x00859e1e);
    /* 00859e1e: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859e23u); f_0085c583();
    /* 00859e23: mov ecx, dword ptr [esi*8 + 0xa2385c] */ r_ecx = R32((u32)(r_esi*8+0xa2385cu));
    /* 00859e2a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00859e2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859e2e: ret  */ FN_RET(0x00859de8); r_esp += 4; return;
L_00859e2f:; BB(0x00859e2f);
    /* 00859e2f: cmp ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859e35: jb 0x859e4d */ if (fC) goto L_00859e4d;
L_00859e37:; BB(0x00859e37);
    /* 00859e37: cmp ecx, 0xca */ {  u32 a = r_ecx; u32 b = 0xcau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00859e3d: ja 0x859e4d */ if ((!fC&&!fZ)) goto L_00859e4d;
L_00859e3f:; BB(0x00859e3f);
    /* 00859e3f: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859e44u); f_0085c583();
    /* 00859e44: mov dword ptr [eax + 8], 8 */ W32((u32)(r_eax+0x8u), 0x8u);
    /* 00859e4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859e4c: ret  */ FN_RET(0x00859de8); r_esp += 4; return;
L_00859e4d:; BB(0x00859e4d);
    /* 00859e4d: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x859e52u); f_0085c583();
    /* 00859e52: mov dword ptr [eax + 8], 0x16 */ W32((u32)(r_eax+0x8u), 0x16u);
    /* 00859e59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859e5a: ret  */ FN_RET(0x00859de8); r_esp += 4; return;
}

void f_00859e5b(void) /* _fgetc */
{
    FN_ENTER(0x00859e5b);
    /* 00859e5b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00859e5d: push 0x997f60 */ { u32 v = 0x997f60u; r_esp -= 4; W32(r_esp, v); }
    /* 00859e62: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x859e67u); f_0085e5ac();
    /* 00859e67: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859e6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859e6b: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x859e70u); f_0085bbfc();
    /* 00859e70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859e71: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00859e75: dec dword ptr [esi + 4] */ { u32 ad = (u32)(r_esi+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00859e78: js 0x859e84 */ if (fS) goto L_00859e84;
L_00859e7a:; BB(0x00859e7a);
    /* 00859e7a: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00859e7c: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 00859e7f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00859e80: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00859e82: jmp 0x859e8b */ goto L_00859e8b;
L_00859e84:; BB(0x00859e84);
    /* 00859e84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859e85: call 0x861994 */ r_esp -= 4; W32(r_esp, 0x859e8au); f_00861994();
    /* 00859e8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00859e8b:; BB(0x00859e8b);
    /* 00859e8b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00859e8e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859e92: call 0x859ea3 */ r_esp -= 4; W32(r_esp, 0x859e97u); f_00859ea3();
    /* 00859e97: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00859e9a: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x859e9fu); f_0085e5e7();
    /* 00859e9f: ret  */ FN_RET(0x00859e5b); r_esp += 4; return;
}

void f_00859ea0(void)
{
    FN_ENTER(0x00859ea0);
    /* 00859ea0: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859ea3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859ea4: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x859ea9u); f_0085bc4e();
    /* 00859ea9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859eaa: ret  */ FN_RET(0x00859ea0); r_esp += 4; return;
}

void f_00859ea3(void)
{
    FN_ENTER(0x00859ea3);
    /* 00859ea3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859ea4: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x859ea9u); f_0085bc4e();
    /* 00859ea9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859eaa: ret  */ FN_RET(0x00859ea3); r_esp += 4; return;
}

void f_00859eab(void) /* ___crtExitProcess */
{
    FN_ENTER(0x00859eab);
    /* 00859eab: push 0x997f7c */ { u32 v = 0x997f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00859eb0: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x859eb6u); call_ind(t); }
    /* 00859eb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859eb8: je 0x859ed0 */ if (fZ) goto L_00859ed0;
L_00859eba:; BB(0x00859eba);
    /* 00859eba: push 0x997f6c */ { u32 v = 0x997f6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00859ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859ec0: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x859ec6u); call_ind(t); }
    /* 00859ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859ec8: je 0x859ed0 */ if (fZ) goto L_00859ed0;
L_00859eca:; BB(0x00859eca);
    /* 00859eca: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859ece: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x859ed0u); call_ind(t); }
L_00859ed0:; BB(0x00859ed0);
    /* 00859ed0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859ed4: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x859edau); call_ind(t); }
    /* 00859eda: int3  */ UNSUP(0x00859eda, "int3");
}

void f_00859edb(void) /* __lockexit */
{
    FN_ENTER(0x00859edb);
    /* 00859edb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859edd: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x859ee2u); f_0085e57a();
    /* 00859ee2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859ee3: ret  */ FN_RET(0x00859edb); r_esp += 4; return;
}

void f_00859ee4(void) /* __unlockexit */
{
    FN_ENTER(0x00859ee4);
    /* 00859ee4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859ee6: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x859eebu); f_0085e4c5();
    /* 00859eeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859eec: ret  */ FN_RET(0x00859ee4); r_esp += 4; return;
}

void f_00859eed(void) /* __initterm */
{
    FN_ENTER(0x00859eed);
    /* 00859eed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859eee: mov esi, eax */ r_esi = r_eax;
    /* 00859ef0: jmp 0x859efd */ goto L_00859efd;
L_00859ef2:; BB(0x00859ef2);
    /* 00859ef2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00859ef4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859ef6: je 0x859efa */ if (fZ) goto L_00859efa;
L_00859ef8:; BB(0x00859ef8);
    /* 00859ef8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x859efau); call_ind(t); }
L_00859efa:; BB(0x00859efa);
    /* 00859efa: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00859efd:; BB(0x00859efd);
    /* 00859efd: cmp esi, dword ptr [esp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00859f01: jb 0x859ef2 */ if (fC) goto L_00859ef2;
L_00859f03:; BB(0x00859f03);
    /* 00859f03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859f04: ret  */ FN_RET(0x00859eed); r_esp += 4; return;
}

void f_00859f05(void) /* __cinit */
{
    FN_ENTER(0x00859f05);
    /* 00859f05: mov eax, dword ptr [0xa2380c] */ r_eax = R32((u32)(0xa2380cu));
    /* 00859f0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859f0c: je 0x859f15 */ if (fZ) goto L_00859f15;
L_00859f0e:; BB(0x00859f0e);
    /* 00859f0e: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859f12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x859f14u); call_ind(t); }
    /* 00859f14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00859f15:; BB(0x00859f15);
    /* 00859f15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859f16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859f17: mov ecx, 0x9a2c4c */ r_ecx = 0x9a2c4cu;
    /* 00859f1c: mov edi, 0x9a2c60 */ r_edi = 0x9a2c60u;
    /* 00859f21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00859f23: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859f25: mov esi, ecx */ r_esi = r_ecx;
    /* 00859f27: jae 0x859f40 */ if (!fC) goto L_00859f40;
L_00859f29:; BB(0x00859f29);
    /* 00859f29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859f2b: jne 0x859f6c */ if (!fZ) goto L_00859f6c;
L_00859f2d:; BB(0x00859f2d);
    /* 00859f2d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00859f2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859f31: je 0x859f35 */ if (fZ) goto L_00859f35;
L_00859f33:; BB(0x00859f33);
    /* 00859f33: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x859f35u); call_ind(t); }
L_00859f35:; BB(0x00859f35);
    /* 00859f35: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859f38: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859f3a: jb 0x859f29 */ if (fC) goto L_00859f29;
L_00859f3c:; BB(0x00859f3c);
    /* 00859f3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859f3e: jne 0x859f6c */ if (!fZ) goto L_00859f6c;
L_00859f40:; BB(0x00859f40);
    /* 00859f40: push 0x863d93 */ { u32 v = 0x863d93u; r_esp -= 4; W32(r_esp, v); }
    /* 00859f45: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x859f4au); f_0085909d();
    /* 00859f4a: mov esi, 0x9a2000 */ r_esi = 0x9a2000u;
    /* 00859f4f: mov eax, esi */ r_eax = r_esi;
    /* 00859f51: mov edi, 0x9a2c48 */ r_edi = 0x9a2c48u;
    /* 00859f56: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859f59: jae 0x859f6a */ if (!fC) goto L_00859f6a;
L_00859f5b:; BB(0x00859f5b);
    /* 00859f5b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00859f5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859f5f: je 0x859f63 */ if (fZ) goto L_00859f63;
L_00859f61:; BB(0x00859f61);
    /* 00859f61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x859f63u); call_ind(t); }
L_00859f63:; BB(0x00859f63);
    /* 00859f63: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859f66: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859f68: jb 0x859f5b */ if (fC) goto L_00859f5b;
L_00859f6a:; BB(0x00859f6a);
    /* 00859f6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00859f6c:; BB(0x00859f6c);
    /* 00859f6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00859f6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00859f6e: ret  */ FN_RET(0x00859f05); r_esp += 4; return;
}

void f_00859f6f(void) /* _doexit */
{
    FN_ENTER(0x00859f6f);
    /* 00859f6f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859f71: push 0x997f88 */ { u32 v = 0x997f88u; r_esp -= 4; W32(r_esp, v); }
    /* 00859f76: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x859f7bu); f_0085e5ac();
    /* 00859f7b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859f7d: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x859f82u); f_0085e57a();
    /* 00859f82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859f83: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00859f85: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 00859f88: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00859f8a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859f8b: cmp dword ptr [0xae7a50], esi */ {  u32 a = R32((u32)(0xae7a50u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859f91: jne 0x859fa3 */ if (!fZ) goto L_00859fa3;
L_00859f93:; BB(0x00859f93);
    /* 00859f93: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859f96: call dword ptr [0x8f81f8] */ { u32 t = R32((u32)(0x8f81f8u)); r_esp -= 4; W32(r_esp, 0x859f9cu); call_ind(t); }
    /* 00859f9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859f9d: call dword ptr [0x8f81f4] */ { u32 t = R32((u32)(0x8f81f4u)); r_esp -= 4; W32(r_esp, 0x859fa3u); call_ind(t); }
L_00859fa3:; BB(0x00859fa3);
    /* 00859fa3: mov dword ptr [0xae7a4c], esi */ W32((u32)(0xae7a4cu), r_esi);
    /* 00859fa9: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00859fac: mov byte ptr [0xae7a48], al */ W8((u32)(0xae7a48u), (u8)r_eax);
    /* 00859fb1: cmp dword ptr [ebp + 0xc], edi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859fb4: jne 0x859fed */ if (!fZ) goto L_00859fed;
L_00859fb6:; BB(0x00859fb6);
    /* 00859fb6: cmp dword ptr [0xaf1bd0], edi */ {  u32 a = R32((u32)(0xaf1bd0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859fbc: je 0x859fdd */ if (fZ) goto L_00859fdd;
L_00859fbe:; BB(0x00859fbe);
    /* 00859fbe: mov eax, dword ptr [0xaf1bcc] */ r_eax = R32((u32)(0xaf1bccu));
    /* 00859fc3: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00859fc6: mov dword ptr [0xaf1bcc], eax */ W32((u32)(0xaf1bccu), r_eax);
    /* 00859fcb: cmp eax, dword ptr [0xaf1bd0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf1bd0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859fd1: jb 0x859fdd */ if (fC) goto L_00859fdd;
L_00859fd3:; BB(0x00859fd3);
    /* 00859fd3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00859fd5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859fd7: je 0x859fbe */ if (fZ) goto L_00859fbe;
L_00859fd9:; BB(0x00859fd9);
    /* 00859fd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x859fdbu); call_ind(t); }
    /* 00859fdb: jmp 0x859fbe */ goto L_00859fbe;
L_00859fdd:; BB(0x00859fdd);
    /* 00859fdd: push 0x9a2c6c */ { u32 v = 0x9a2c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00859fe2: mov eax, 0x9a2c64 */ r_eax = 0x9a2c64u;
    /* 00859fe7: call 0x859eed */ r_esp -= 4; W32(r_esp, 0x859fecu); f_00859eed();
    /* 00859fec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00859fed:; BB(0x00859fed);
    /* 00859fed: push 0x9a2c78 */ { u32 v = 0x9a2c78u; r_esp -= 4; W32(r_esp, v); }
    /* 00859ff2: mov eax, 0x9a2c70 */ r_eax = 0x9a2c70u;
    /* 00859ff7: call 0x859eed */ r_esp -= 4; W32(r_esp, 0x859ffcu); f_00859eed();
    /* 00859ffc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859ffd: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a001: call 0x85a01e */ r_esp -= 4; W32(r_esp, 0x85a006u); f_0085a01e();
    /* 0085a006: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a009: jne 0x85a02c */ if (!fZ) goto L_0085a02c;
L_0085a00b:; BB(0x0085a00b);
    /* 0085a00b: mov dword ptr [0xae7a50], esi */ W32((u32)(0xae7a50u), r_esi);
    /* 0085a011: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a014: call 0x859eab */ r_esp -= 4; W32(r_esp, 0x85a019u); f_00859eab();
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
    /* 0085a02b: ret  */ FN_RET(0x00859f6f); r_esp += 4; return;
L_0085a02c:; BB(0x0085a02c);
    /* 0085a02c: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85a031u); f_0085e5e7();
    /* 0085a031: ret  */ FN_RET(0x00859f6f); r_esp += 4; return;
}

