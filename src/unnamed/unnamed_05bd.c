#include "protos.h"

void f_005bd010(void) /* sub_5BD010 */
{
    FN_ENTER(0x005bd010);
    /* 005bd010: mov edx, dword ptr [0xa8d774] */ r_edx = R32((u32)(0xa8d774u));
    /* 005bd016: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd018: je 0x5bd064 */ if (fZ) goto L_005bd064;
L_005bd01a:; BB(0x005bd01a);
    /* 005bd01a: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005bd020: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd022: jne 0x5bd064 */ if (!fZ) goto L_005bd064;
L_005bd024:; BB(0x005bd024);
    /* 005bd024: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 005bd02a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd02c: je 0x5bd064 */ if (fZ) goto L_005bd064;
L_005bd02e:; BB(0x005bd02e);
    /* 005bd02e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd031: je 0x5bd162 */ if (fZ) goto L_005bd162;
L_005bd037:; BB(0x005bd037);
    /* 005bd037: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005bd03b: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bd03e: je 0x5bd049 */ if (fZ) goto L_005bd049;
L_005bd040:; BB(0x005bd040);
    /* 005bd040: mov dword ptr [edx + 0x20], 1 */ W32((u32)(r_edx+0x20u), 0x1u);
    /* 005bd047: jmp 0x5bd050 */ goto L_005bd050;
L_005bd049:; BB(0x005bd049);
    /* 005bd049: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
L_005bd050:; BB(0x005bd050);
    /* 005bd050: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 005bd056: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bd058: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 005bd05e: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
L_005bd064:; BB(0x005bd064);
    /* 005bd064: mov edx, dword ptr [0xa8d778] */ r_edx = R32((u32)(0xa8d778u));
    /* 005bd06a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd06c: je 0x5bd0b8 */ if (fZ) goto L_005bd0b8;
L_005bd06e:; BB(0x005bd06e);
    /* 005bd06e: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005bd074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd076: jne 0x5bd0b8 */ if (!fZ) goto L_005bd0b8;
L_005bd078:; BB(0x005bd078);
    /* 005bd078: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 005bd07e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd080: je 0x5bd0b8 */ if (fZ) goto L_005bd0b8;
L_005bd082:; BB(0x005bd082);
    /* 005bd082: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd085: je 0x5bd175 */ if (fZ) goto L_005bd175;
L_005bd08b:; BB(0x005bd08b);
    /* 005bd08b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005bd08f: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bd092: je 0x5bd09d */ if (fZ) goto L_005bd09d;
L_005bd094:; BB(0x005bd094);
    /* 005bd094: mov dword ptr [edx + 0x20], 1 */ W32((u32)(r_edx+0x20u), 0x1u);
    /* 005bd09b: jmp 0x5bd0a4 */ goto L_005bd0a4;
L_005bd09d:; BB(0x005bd09d);
    /* 005bd09d: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
L_005bd0a4:; BB(0x005bd0a4);
    /* 005bd0a4: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 005bd0aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bd0ac: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 005bd0b2: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
L_005bd0b8:; BB(0x005bd0b8);
    /* 005bd0b8: mov edx, dword ptr [0xa8d77c] */ r_edx = R32((u32)(0xa8d77cu));
    /* 005bd0be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd0c0: je 0x5bd10c */ if (fZ) goto L_005bd10c;
L_005bd0c2:; BB(0x005bd0c2);
    /* 005bd0c2: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005bd0c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd0ca: jne 0x5bd10c */ if (!fZ) goto L_005bd10c;
L_005bd0cc:; BB(0x005bd0cc);
    /* 005bd0cc: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 005bd0d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd0d4: je 0x5bd10c */ if (fZ) goto L_005bd10c;
L_005bd0d6:; BB(0x005bd0d6);
    /* 005bd0d6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd0d9: je 0x5bd188 */ if (fZ) goto L_005bd188;
L_005bd0df:; BB(0x005bd0df);
    /* 005bd0df: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005bd0e3: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bd0e6: je 0x5bd0f1 */ if (fZ) goto L_005bd0f1;
L_005bd0e8:; BB(0x005bd0e8);
    /* 005bd0e8: mov dword ptr [edx + 0x20], 1 */ W32((u32)(r_edx+0x20u), 0x1u);
    /* 005bd0ef: jmp 0x5bd0f8 */ goto L_005bd0f8;
L_005bd0f1:; BB(0x005bd0f1);
    /* 005bd0f1: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
L_005bd0f8:; BB(0x005bd0f8);
    /* 005bd0f8: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 005bd0fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bd100: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 005bd106: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
L_005bd10c:; BB(0x005bd10c);
    /* 005bd10c: mov edx, dword ptr [0xa8d780] */ r_edx = R32((u32)(0xa8d780u));
    /* 005bd112: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd114: je 0x5bd15c */ if (fZ) goto L_005bd15c;
L_005bd116:; BB(0x005bd116);
    /* 005bd116: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005bd11c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd11e: jne 0x5bd15c */ if (!fZ) goto L_005bd15c;
L_005bd120:; BB(0x005bd120);
    /* 005bd120: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 005bd126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd128: je 0x5bd15c */ if (fZ) goto L_005bd15c;
L_005bd12a:; BB(0x005bd12a);
    /* 005bd12a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd12d: je 0x5bd19b */ if (fZ) goto L_005bd19b;
L_005bd12f:; BB(0x005bd12f);
    /* 005bd12f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005bd133: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bd136: je 0x5bd141 */ if (fZ) goto L_005bd141;
L_005bd138:; BB(0x005bd138);
    /* 005bd138: mov dword ptr [edx + 0x20], 1 */ W32((u32)(r_edx+0x20u), 0x1u);
    /* 005bd13f: jmp 0x5bd148 */ goto L_005bd148;
L_005bd141:; BB(0x005bd141);
    /* 005bd141: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
L_005bd148:; BB(0x005bd148);
    /* 005bd148: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 005bd14e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd150: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 005bd156: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
L_005bd15c:; BB(0x005bd15c);
    /* 005bd15c: mov eax, 1 */ r_eax = 0x1u;
    /* 005bd161: ret  */ FN_RET(0x005bd010); r_esp += 4; return;
L_005bd162:; BB(0x005bd162);
    /* 005bd162: mov ecx, dword ptr [edx + 0x1b4] */ r_ecx = R32((u32)(r_edx+0x1b4u));
    /* 005bd168: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd16a: je 0x5bd064 */ if (fZ) goto L_005bd064;
L_005bd170:; BB(0x005bd170);
    /* 005bd170: jmp 0x5bd037 */ goto L_005bd037;
L_005bd175:; BB(0x005bd175);
    /* 005bd175: mov ecx, dword ptr [edx + 0x1b4] */ r_ecx = R32((u32)(r_edx+0x1b4u));
    /* 005bd17b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd17d: je 0x5bd0b8 */ if (fZ) goto L_005bd0b8;
L_005bd183:; BB(0x005bd183);
    /* 005bd183: jmp 0x5bd08b */ goto L_005bd08b;
L_005bd188:; BB(0x005bd188);
    /* 005bd188: mov ecx, dword ptr [edx + 0x1b4] */ r_ecx = R32((u32)(r_edx+0x1b4u));
    /* 005bd18e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd190: je 0x5bd10c */ if (fZ) goto L_005bd10c;
L_005bd196:; BB(0x005bd196);
    /* 005bd196: jmp 0x5bd0df */ goto L_005bd0df;
L_005bd19b:; BB(0x005bd19b);
    /* 005bd19b: mov ecx, dword ptr [edx + 0x1b4] */ r_ecx = R32((u32)(r_edx+0x1b4u));
    /* 005bd1a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd1a3: je 0x5bd15c */ if (fZ) goto L_005bd15c;
L_005bd1a5:; BB(0x005bd1a5);
    /* 005bd1a5: jmp 0x5bd12f */ goto L_005bd12f;
}

void f_005bd1a8(void) /* sub_5BD1A8 */
{
    FN_ENTER(0x005bd1a8);
    /* 005bd1a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd1a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd1aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd1ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd1ac: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005bd1b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005bd1b2:; BB(0x005bd1b2);
    /* 005bd1b2: mov esi, dword ptr [eax + 0xa8d774] */ r_esi = R32((u32)(r_eax+0xa8d774u));
    /* 005bd1b8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bd1bb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd1bd: je 0x5bd2b7 */ if (fZ) goto L_005bd2b7;
L_005bd1c3:; BB(0x005bd1c3);
    /* 005bd1c3: mov ecx, dword ptr [esi + 0x1c0] */ r_ecx = R32((u32)(r_esi+0x1c0u));
    /* 005bd1c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd1cb: jne 0x5bd2b7 */ if (!fZ) goto L_005bd2b7;
L_005bd1d1:; BB(0x005bd1d1);
    /* 005bd1d1: mov ecx, dword ptr [esi + 0x184] */ r_ecx = R32((u32)(r_esi+0x184u));
    /* 005bd1d7: mov ebx, dword ptr [esi + ecx*4 + 0x174] */ r_ebx = R32((u32)(r_esi+r_ecx*4+0x174u));
    /* 005bd1de: cmp edx, dword ptr [ebx + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd1e1: je 0x5bd2b7 */ if (fZ) goto L_005bd2b7;
L_005bd1e7:; BB(0x005bd1e7);
    /* 005bd1e7: mov ecx, dword ptr [0xa8d770] */ r_ecx = R32((u32)(0xa8d770u));
    /* 005bd1ed: mov ebp, dword ptr [esi + 0x17c] */ r_ebp = R32((u32)(r_esi+0x17cu));
    /* 005bd1f3: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 005bd1f6: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 005bd1f9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bd1fb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bd1fd: mov edi, dword ptr [ecx + ebx*8] */ r_edi = R32((u32)(r_ecx+r_ebx*8));
    /* 005bd200: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
    /* 005bd203: mov edi, dword ptr [ecx + ebx*8 + 4] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 005bd207: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 005bd20a: mov edi, dword ptr [ecx + ebx*8 + 8] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x8u));
    /* 005bd20e: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 005bd211: mov edi, dword ptr [ecx + ebx*8 + 0xc] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0xcu));
    /* 005bd215: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 005bd218: mov edi, dword ptr [ecx + ebx*8 + 0x10] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x10u));
    /* 005bd21c: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 005bd21f: mov edi, dword ptr [ecx + ebx*8 + 0x14] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x14u));
    /* 005bd223: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 005bd226: mov edi, dword ptr [ecx + ebx*8 + 0x18] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x18u));
    /* 005bd22a: mov dword ptr [ebp + 0x18], edi */ W32((u32)(r_ebp+0x18u), r_edi);
    /* 005bd22d: mov edi, dword ptr [ecx + ebx*8 + 0x1c] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x1cu));
    /* 005bd231: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 005bd234: mov edi, dword ptr [ecx + ebx*8 + 0x20] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x20u));
    /* 005bd238: mov dword ptr [ebp + 0x20], edi */ W32((u32)(r_ebp+0x20u), r_edi);
    /* 005bd23b: mov edi, dword ptr [ecx + ebx*8 + 0x24] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x24u));
    /* 005bd23f: mov dword ptr [ebp + 0x24], edi */ W32((u32)(r_ebp+0x24u), r_edi);
    /* 005bd242: mov edi, dword ptr [ecx + ebx*8 + 0x28] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x28u));
    /* 005bd246: mov dword ptr [ebp + 0x28], edi */ W32((u32)(r_ebp+0x28u), r_edi);
    /* 005bd249: mov edi, dword ptr [ecx + ebx*8 + 0x2c] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x2cu));
    /* 005bd24d: mov dword ptr [ebp + 0x2c], edi */ W32((u32)(r_ebp+0x2cu), r_edi);
    /* 005bd250: mov edi, dword ptr [ecx + ebx*8 + 0x30] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x30u));
    /* 005bd254: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 005bd257: mov edi, dword ptr [ecx + ebx*8 + 0x34] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x34u));
    /* 005bd25b: mov dword ptr [ebp + 0x34], edi */ W32((u32)(r_ebp+0x34u), r_edi);
    /* 005bd25e: mov edi, dword ptr [ecx + ebx*8 + 0x38] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x38u));
    /* 005bd262: mov dword ptr [ebp + 0x38], edi */ W32((u32)(r_ebp+0x38u), r_edi);
    /* 005bd265: mov ecx, dword ptr [ecx + ebx*8 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x3cu));
    /* 005bd269: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 005bd270: mov dword ptr [ebp + 0x3c], ecx */ W32((u32)(r_ebp+0x3cu), r_ecx);
    /* 005bd273: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd275: mov dword ptr [ebp + 0x48], ecx */ W32((u32)(r_ebp+0x48u), r_ecx);
    /* 005bd278: mov dword ptr [ebp + 0x4c], ecx */ W32((u32)(r_ebp+0x4cu), r_ecx);
    /* 005bd27b: mov dword ptr [ebp + 0x50], ecx */ W32((u32)(r_ebp+0x50u), r_ecx);
    /* 005bd27e: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005bd282: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bd285: je 0x5bd290 */ if (fZ) goto L_005bd290;
L_005bd287:; BB(0x005bd287);
    /* 005bd287: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 005bd28e: jmp 0x5bd297 */ goto L_005bd297;
L_005bd290:; BB(0x005bd290);
    /* 005bd290: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
L_005bd297:; BB(0x005bd297);
    /* 005bd297: mov ecx, dword ptr [esi + 0x184] */ r_ecx = R32((u32)(r_esi+0x184u));
    /* 005bd29d: mov dword ptr [esi + 0x1a0], 2 */ W32((u32)(r_esi+0x1a0u), 0x2u);
    /* 005bd2a7: mov dword ptr [esi + 0x19c], ecx */ W32((u32)(r_esi+0x19cu), r_ecx);
    /* 005bd2ad: mov dword ptr [esi + 0x1a4], 1 */ W32((u32)(r_esi+0x1a4u), 0x1u);
L_005bd2b7:; BB(0x005bd2b7);
    /* 005bd2b7: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bd2ba: jl 0x5bd1b2 */ if ((fS!=fO)) goto L_005bd1b2;
L_005bd2c0:; BB(0x005bd2c0);
    /* 005bd2c0: mov eax, 1 */ r_eax = 0x1u;
    /* 005bd2c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bd2c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd2c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bd2c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bd2c9: ret  */ FN_RET(0x005bd1a8); r_esp += 4; return;
}

void f_005bd2cc(void) /* sub_5BD2CC */
{
    FN_ENTER(0x005bd2cc);
    /* 005bd2cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd2cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd2ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd2cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd2d0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd2d3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bd2d5: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005bd2d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd2da: je 0x5bd691 */ if (fZ) goto L_005bd691;
L_005bd2e0:; BB(0x005bd2e0);
    /* 005bd2e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd2e3: je 0x5bd65b */ if (fZ) goto L_005bd65b;
L_005bd2e9:; BB(0x005bd2e9);
    /* 005bd2e9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd2ec: jne 0x5bd385 */ if (!fZ) goto L_005bd385;
L_005bd2f2:; BB(0x005bd2f2);
    /* 005bd2f2: fld dword ptr [0x92b734] */ FPUSH(R_F32((u32)(0x92b734u)));
    /* 005bd2f8: mov ebp, dword ptr [ebx + 0x19c] */ r_ebp = R32((u32)(r_ebx+0x19cu));
    /* 005bd2fe: mov eax, dword ptr [ebx + 0x1a0] */ r_eax = R32((u32)(r_ebx+0x1a0u));
    /* 005bd304: mov edx, dword ptr [ebx + 0x1a4] */ r_edx = R32((u32)(r_ebx+0x1a4u));
    /* 005bd30a: mov dword ptr [ebx + 0x1ac], ebp */ W32((u32)(r_ebx+0x1acu), r_ebp);
    /* 005bd310: mov dword ptr [ebx + 0x1b0], eax */ W32((u32)(r_ebx+0x1b0u), r_eax);
    /* 005bd316: mov dword ptr [ebx + 0x1b8], 0 */ W32((u32)(r_ebx+0x1b8u), 0x0u);
    /* 005bd320: mov dword ptr [ebx + 0x1b4], edx */ W32((u32)(r_ebx+0x1b4u), r_edx);
    /* 005bd326: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005bd329: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd32b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd32d: jne 0x5bd33d */ if (!fZ) goto L_005bd33d;
L_005bd32f:; BB(0x005bd32f);
    /* 005bd32f: mov eax, dword ptr [ebx + ebp*4 + 0x174] */ r_eax = R32((u32)(r_ebx+r_ebp*4+0x174u));
    /* 005bd336: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005bd339: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd33b: jmp 0x5bd348 */ goto L_005bd348;
L_005bd33d:; BB(0x005bd33d);
    /* 005bd33d: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd33f: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 005bd345: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
L_005bd348:; BB(0x005bd348);
    /* 005bd348: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005bd34a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd34c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd34d: ja 0x5bd35d */ if ((!fC&&!fZ)) goto L_005bd35d;
L_005bd34f:; BB(0x005bd34f);
    /* 005bd34f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bd351: mov dword ptr [ebx + 0x1bc], 0x3a83126f */ W32((u32)(r_ebx+0x1bcu), 0x3a83126fu);
    /* 005bd35b: jmp 0x5bd363 */ goto L_005bd363;
L_005bd35d:; BB(0x005bd35d);
    /* 005bd35d: fstp dword ptr [ebx + 0x1bc] */ W_F32((u32)(r_ebx+0x1bcu), ST(0)); FPOP();
L_005bd363:; BB(0x005bd363);
    /* 005bd363: mov ebp, dword ptr [ebx + 0x180] */ r_ebp = R32((u32)(r_ebx+0x180u));
    /* 005bd369: mov esi, 3 */ r_esi = 0x3u;
    /* 005bd36e: mov dword ptr [ebx + 0x184], esi */ W32((u32)(r_ebx+0x184u), r_esi);
    /* 005bd374: mov edx, dword ptr [edx + 0x174] */ r_edx = R32((u32)(r_edx+0x174u));
    /* 005bd37a: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005bd37d: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 005bd380: mov dword ptr [ebx + 0x20], esi */ W32((u32)(r_ebx+0x20u), r_esi);
    /* 005bd383: jmp 0x5bd394 */ goto L_005bd394;
L_005bd385:; BB(0x005bd385);
    /* 005bd385: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd388: jne 0x5bd689 */ if (!fZ) goto L_005bd689;
L_005bd38e:; BB(0x005bd38e);
    /* 005bd38e: fld dword ptr [0x92b734] */ FPUSH(R_F32((u32)(0x92b734u)));
L_005bd394:; BB(0x005bd394);
    /* 005bd394: fld dword ptr [0x92b72c] */ FPUSH(R_F32((u32)(0x92b72cu)));
    /* 005bd39a: mov ebp, dword ptr [ebx + 0x180] */ r_ebp = R32((u32)(r_ebx+0x180u));
    /* 005bd3a0: mov edx, dword ptr [ebx + 0x1ac] */ r_edx = R32((u32)(r_ebx+0x1acu));
    /* 005bd3a6: mov edx, dword ptr [ebx + edx*4 + 0x174] */ r_edx = R32((u32)(r_ebx+r_edx*4+0x174u));
    /* 005bd3ad: mov esi, dword ptr [ebx + 0x1b0] */ r_esi = R32((u32)(r_ebx+0x1b0u));
    /* 005bd3b3: mov ecx, dword ptr [ebx + esi*4 + 0x174] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x174u));
    /* 005bd3ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bd3bc: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 005bd3bf: fld dword ptr [ebx + 0x1b8] */ FPUSH(R_F32((u32)(r_ebx+0x1b8u)));
    /* 005bd3c5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005bd3c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd3c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd3ca: jae 0x5bd62f */ if (!fC) goto L_005bd62f;
L_005bd3d0:; BB(0x005bd3d0);
    /* 005bd3d0: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 005bd3d3: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 005bd3d5: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 005bd3d9: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 005bd3dc: mov eax, ebx */ r_eax = r_ebx;
    /* 005bd3de: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd3e1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bd3e4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005bd3e7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005bd3ea: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd3ed: fadd dword ptr [eax*4 + 0x92b6e0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92b6e0u));
    /* 005bd3f4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd3f6: mov eax, edi */ r_eax = r_edi;
    /* 005bd3f8: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd3fb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bd3fe: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005bd402: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd406: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd409: fadd dword ptr [eax*4 + 0x92b6e0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92b6e0u));
    /* 005bd410: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd412: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd414: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005bd418: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005bd41d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd422: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005bd426: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005bd42a: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005bd42e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd432: mov eax, ebx */ r_eax = r_ebx;
    /* 005bd434: movzx esi, byte ptr [esp + 0x20] */ r_esi = (u32)R8((u32)(r_esp+0x20u));
    /* 005bd439: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005bd43c: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd43f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bd442: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005bd446: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd44a: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd44d: fadd dword ptr [eax*4 + 0x92b6e0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92b6e0u));
    /* 005bd454: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd456: mov eax, edi */ r_eax = r_edi;
    /* 005bd458: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd45b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bd45e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005bd462: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd466: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005bd469: fadd dword ptr [eax*4 + 0x92b6e0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92b6e0u));
    /* 005bd470: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd472: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd474: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 005bd477: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005bd47b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005bd480: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd485: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005bd489: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005bd48d: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005bd491: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd495: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 005bd49a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bd49d: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 005bd49f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005bd4a3: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd4a7: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 005bd4aa: fadd dword ptr [ebx*4 + 0x92b6e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x92b6e0u));
    /* 005bd4b1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd4b3: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 005bd4b7: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005bd4bd: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005bd4c1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd4c5: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005bd4c8: fadd dword ptr [edi*4 + 0x92b6e0] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x92b6e0u));
    /* 005bd4cf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd4d1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd4d3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005bd4d7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005bd4dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd4e1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005bd4e5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005bd4e9: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005bd4ed: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd4f1: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 005bd4f6: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 005bd4f8: mov dword ptr [ebp + 4], esi */ W32((u32)(r_ebp+0x4u), r_esi);
    /* 005bd4fb: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005bd4fe: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd500: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 005bd503: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd505: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd507: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 005bd50a: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005bd50d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd50f: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 005bd512: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd514: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd516: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 005bd519: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005bd51c: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 005bd51f: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 005bd522: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd524: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 005bd527: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd529: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd52b: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 005bd52e: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 005bd531: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd533: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 005bd536: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd538: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd53a: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 005bd53d: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 005bd540: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd542: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 005bd545: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd547: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd549: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 005bd54c: movzx eax, byte ptr [edx + 0x3a] */ r_eax = (u32)R8((u32)(r_edx+0x3au));
    /* 005bd550: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005bd554: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd558: movzx eax, byte ptr [ecx + 0x3a] */ r_eax = (u32)R8((u32)(r_ecx+0x3au));
    /* 005bd55c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd55e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005bd562: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd566: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd568: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd56a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005bd56e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005bd573: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd578: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005bd57c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005bd580: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005bd584: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd588: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005bd58c: mov byte ptr [ebp + 0x3a], al */ W8((u32)(r_ebp+0x3au), (u8)r_eax);
    /* 005bd58f: movzx eax, byte ptr [edx + 0x3c] */ r_eax = (u32)R8((u32)(r_edx+0x3cu));
    /* 005bd593: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005bd597: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd59b: movzx eax, byte ptr [ecx + 0x3c] */ r_eax = (u32)R8((u32)(r_ecx+0x3cu));
    /* 005bd59f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd5a1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005bd5a5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd5a9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005bd5ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd5ad: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005bd5b1: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005bd5b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd5bb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005bd5bf: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005bd5c3: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005bd5c7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd5cb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005bd5cf: mov byte ptr [ebp + 0x3c], al */ W8((u32)(r_ebp+0x3cu), (u8)r_eax);
    /* 005bd5d2: movzx edx, byte ptr [edx + 0x3e] */ r_edx = (u32)R8((u32)(r_edx+0x3eu));
    /* 005bd5d6: movzx ecx, byte ptr [ecx + 0x3e] */ r_ecx = (u32)R8((u32)(r_ecx+0x3eu));
    /* 005bd5da: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005bd5de: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd5e2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005bd5e4: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005bd5e8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005bd5ec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bd5ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd5f0: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005bd5f4: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005bd5f9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd5fe: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005bd602: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005bd606: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005bd60a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd60e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005bd612: mov byte ptr [ebp + 0x3e], al */ W8((u32)(r_ebp+0x3eu), (u8)r_eax);
    /* 005bd615: fld dword ptr [ebx + 0x1b8] */ FPUSH(R_F32((u32)(r_ebx+0x1b8u)));
    /* 005bd61b: fadd dword ptr [ebx + 0x1bc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1bcu));
    /* 005bd621: mov eax, dword ptr [ebx + 0x184] */ r_eax = R32((u32)(r_ebx+0x184u));
    /* 005bd627: fstp dword ptr [ebx + 0x1b8] */ W_F32((u32)(r_ebx+0x1b8u), ST(0)); FPOP();
    /* 005bd62d: jmp 0x5bd681 */ goto L_005bd681;
L_005bd62f:; BB(0x005bd62f);
    /* 005bd62f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bd631: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bd633: push dword ptr [ebx + 0x1a4] */ { u32 v = R32((u32)(r_ebx+0x1a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bd639: push dword ptr [ebx + 0x1a0] */ { u32 v = R32((u32)(r_ebx+0x1a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bd63f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bd641: call 0x5bd6ac */ r_esp -= 4; W32(r_esp, 0x5bd646u); f_005bd6ac();
    /* 005bd646: mov eax, dword ptr [ebx + 0x1b4] */ r_eax = R32((u32)(r_ebx+0x1b4u));
    /* 005bd64c: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 005bd653: mov dword ptr [ebx + 0x184], eax */ W32((u32)(r_ebx+0x184u), r_eax);
    /* 005bd659: jmp 0x5bd681 */ goto L_005bd681;
L_005bd65b:; BB(0x005bd65b);
    /* 005bd65b: push dword ptr [ebx + 0x1a4] */ { u32 v = R32((u32)(r_ebx+0x1a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bd661: push dword ptr [ebx + 0x1a0] */ { u32 v = R32((u32)(r_ebx+0x1a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bd667: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bd669: call 0x5bd6ac */ r_esp -= 4; W32(r_esp, 0x5bd66eu); f_005bd6ac();
    /* 005bd66e: mov eax, dword ptr [ebx + 0x1a4] */ r_eax = R32((u32)(r_ebx+0x1a4u));
    /* 005bd674: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 005bd67b: mov dword ptr [ebx + 0x184], eax */ W32((u32)(r_ebx+0x184u), r_eax);
L_005bd681:; BB(0x005bd681);
    /* 005bd681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd682: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bd684: call 0x5bd750 */ r_esp -= 4; W32(r_esp, 0x5bd689u); f_005bd750();
L_005bd689:; BB(0x005bd689);
    /* 005bd689: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bd68c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bd68d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd68e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bd68f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bd690: ret  */ FN_RET(0x005bd2cc); r_esp += 4; return;
L_005bd691:; BB(0x005bd691);
    /* 005bd691: push dword ptr [ebx + 0x184] */ { u32 v = R32((u32)(r_ebx+0x184u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bd697: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bd699: call 0x5bd6d8 */ r_esp -= 4; W32(r_esp, 0x5bd69eu); f_005bd6d8();
    /* 005bd69e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd6a0: je 0x5bd689 */ if (fZ) goto L_005bd689;
L_005bd6a2:; BB(0x005bd6a2);
    /* 005bd6a2: mov eax, dword ptr [ebx + 0x184] */ r_eax = R32((u32)(r_ebx+0x184u));
    /* 005bd6a8: jmp 0x5bd681 */ goto L_005bd681;
}

void f_005bd6ac(void) /* sub_5BD6AC */
{
    FN_ENTER(0x005bd6ac);
    /* 005bd6ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6ae: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005bd6b2: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005bd6b6: mov esi, dword ptr [ecx + edx*4 + 0x174] */ r_esi = R32((u32)(r_ecx+r_edx*4+0x174u));
    /* 005bd6bd: mov eax, dword ptr [ecx + edi*4 + 0x174] */ r_eax = R32((u32)(r_ecx+r_edi*4+0x174u));
    /* 005bd6c4: mov dword ptr [ecx + edx*4 + 0x174], eax */ W32((u32)(r_ecx+r_edx*4+0x174u), r_eax);
    /* 005bd6cb: mov dword ptr [ecx + edi*4 + 0x174], esi */ W32((u32)(r_ecx+r_edi*4+0x174u), r_esi);
    /* 005bd6d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bd6d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bd6d4: ret 8 */ FN_RET(0x005bd6ac); r_esp += 12; return;
}

void f_005bd6d8(void) /* sub_5BD6D8 */
{
    FN_ENTER(0x005bd6d8);
    /* 005bd6d8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005bd6dc: mov edx, dword ptr [ecx + eax*4 + 0x174] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x174u));
    /* 005bd6e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bd6e5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 005bd6e7: je 0x5bd701 */ if (fZ) goto L_005bd701;
L_005bd6e9:; BB(0x005bd6e9);
    /* 005bd6e9: fld dword ptr [0x92b728] */ FPUSH(R_F32((u32)(0x92b728u)));
    /* 005bd6ef: fcom dword ptr [edx + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x20u))); 
    /* 005bd6f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd6f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd6f5: je 0x5bd73a */ if (fZ) goto L_005bd73a;
L_005bd6f7:; BB(0x005bd6f7);
    /* 005bd6f7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005bd6f9:; BB(0x005bd6f9);
    /* 005bd6f9: mov eax, 1 */ r_eax = 0x1u;
    /* 005bd6fe: ret 4 */ FN_RET(0x005bd6d8); r_esp += 8; return;
L_005bd701:; BB(0x005bd701);
    /* 005bd701: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 005bd703: je 0x5bd74a */ if (fZ) goto L_005bd74a;
L_005bd705:; BB(0x005bd705);
    /* 005bd705: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 005bd708: fadd dword ptr [edx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x44u));
    /* 005bd70b: fcom dword ptr [0x92b728] */ fx_compare(ST(0), R_F32((u32)(0x92b728u))); 
    /* 005bd711: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd713: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd714: jae 0x5bd71e */ if (!fC) goto L_005bd71e;
L_005bd716:; BB(0x005bd716);
    /* 005bd716: fadd dword ptr [0x92b724] */ ST(0) = ST(0) + R_F32((u32)(0x92b724u));
    /* 005bd71c: jmp 0x5bd72f */ goto L_005bd72f;
L_005bd71e:; BB(0x005bd71e);
    /* 005bd71e: fcom dword ptr [0x92b724] */ fx_compare(ST(0), R_F32((u32)(0x92b724u))); 
    /* 005bd724: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd726: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd727: jb 0x5bd72f */ if (fC) goto L_005bd72f;
L_005bd729:; BB(0x005bd729);
    /* 005bd729: fadd dword ptr [0x92b720] */ ST(0) = ST(0) + R_F32((u32)(0x92b720u));
L_005bd72f:; BB(0x005bd72f);
    /* 005bd72f: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 005bd732: mov eax, 1 */ r_eax = 0x1u;
    /* 005bd737: ret 4 */ FN_RET(0x005bd6d8); r_esp += 8; return;
L_005bd73a:; BB(0x005bd73a);
    /* 005bd73a: fcomp dword ptr [edx + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x28u))); FPOP();
    /* 005bd73d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd73f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd740: jne 0x5bd6f9 */ if (!fZ) goto L_005bd6f9;
L_005bd742:; BB(0x005bd742);
    /* 005bd742: movzx eax, byte ptr [edx + 0x3e] */ r_eax = (u32)R8((u32)(r_edx+0x3eu));
    /* 005bd746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd748: jne 0x5bd6f9 */ if (!fZ) goto L_005bd6f9;
L_005bd74a:; BB(0x005bd74a);
    /* 005bd74a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd74c: ret 4 */ FN_RET(0x005bd6d8); r_esp += 8; return;
}

void f_005bd750(void) /* sub_5BD750 */
{
    FN_ENTER(0x005bd750);
    /* 005bd750: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd751: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd752: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd755: mov edi, ecx */ r_edi = r_ecx;
    /* 005bd757: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005bd75b: fld dword ptr [0x92b718] */ FPUSH(R_F32((u32)(0x92b718u)));
    /* 005bd761: mov ebp, dword ptr [edi + edx*4 + 0x174] */ r_ebp = R32((u32)(r_edi+r_edx*4+0x174u));
    /* 005bd768: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005bd76b: mov dword ptr [edi + 0x188], eax */ W32((u32)(r_edi+0x188u), r_eax);
    /* 005bd771: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bd774: mov dword ptr [edi + 0x18c], eax */ W32((u32)(r_edi+0x18cu), r_eax);
    /* 005bd77a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bd77d: mov dword ptr [edi + 0x194], 0x44200000 */ W32((u32)(r_edi+0x194u), 0x44200000u);
    /* 005bd787: mov dword ptr [edi + 0x190], eax */ W32((u32)(r_edi+0x190u), r_eax);
    /* 005bd78d: fcom dword ptr [ebp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x20u))); 
    /* 005bd790: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd792: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd793: je 0x5bd7f8 */ if (fZ) goto L_005bd7f8;
L_005bd795:; BB(0x005bd795);
    /* 005bd795: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bd797: fild dword ptr [0xa9c4ec] */ FPUSH((long double)(i32)R32((u32)(0xa9c4ecu)));
    /* 005bd79d: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 005bd7a0: movzx edx, byte ptr [ebp + 0x3a] */ r_edx = (u32)R8((u32)(r_ebp+0x3au));
    /* 005bd7a4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005bd7a7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005bd7aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd7ac: fmul dword ptr [0x92b714] */ ST(0) = ST(0) * R_F32((u32)(0x92b714u));
    /* 005bd7b2: fdiv dword ptr [0x92b710] */ ST(0) = ST(0) / R_F32((u32)(0x92b710u));
    /* 005bd7b8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bd7bc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bd7c1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd7c6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bd7ca: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd7ce: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bd7d2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bd7d6: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005bd7da: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bd7dfu); f_0082dcbc();
    /* 005bd7df: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 005bd7e2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bd7e4: fadd dword ptr [edi + 0x18c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x18cu));
    /* 005bd7ea: fld dword ptr [0x92b718] */ FPUSH(R_F32((u32)(0x92b718u)));
    /* 005bd7f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bd7f2: fstp dword ptr [edi + 0x18c] */ W_F32((u32)(r_edi+0x18cu), ST(0)); FPOP();
L_005bd7f8:; BB(0x005bd7f8);
    /* 005bd7f8: fcom dword ptr [ebp + 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x28u))); 
    /* 005bd7fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd7fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd7fe: je 0x5bd865 */ if (fZ) goto L_005bd865;
L_005bd800:; BB(0x005bd800);
    /* 005bd800: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bd802: fild dword ptr [0xa9c4ec] */ FPUSH((long double)(i32)R32((u32)(0xa9c4ecu)));
    /* 005bd808: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 005bd80b: movzx edx, byte ptr [ebp + 0x3c] */ r_edx = (u32)R8((u32)(r_ebp+0x3cu));
    /* 005bd80f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005bd813: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005bd817: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005bd819: fmul dword ptr [0x92b714] */ ST(0) = ST(0) * R_F32((u32)(0x92b714u));
    /* 005bd81f: fdiv dword ptr [0x92b710] */ ST(0) = ST(0) / R_F32((u32)(0x92b710u));
    /* 005bd825: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bd829: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bd82e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd833: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bd837: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd83b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bd83f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bd843: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005bd847: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bd84cu); f_0082dcbc();
    /* 005bd84c: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 005bd84f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bd851: fadd dword ptr [edi + 0x190] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x190u));
    /* 005bd857: fld dword ptr [0x92b718] */ FPUSH(R_F32((u32)(0x92b718u)));
    /* 005bd85d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bd85f: fstp dword ptr [edi + 0x190] */ W_F32((u32)(r_edi+0x190u), ST(0)); FPOP();
L_005bd865:; BB(0x005bd865);
    /* 005bd865: fcomp dword ptr [ebp + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x30u))); FPOP();
    /* 005bd868: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bd86a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bd86b: je 0x5bd8c0 */ if (fZ) goto L_005bd8c0;
L_005bd86d:; BB(0x005bd86d);
    /* 005bd86d: fild dword ptr [0xa9c4ec] */ FPUSH((long double)(i32)R32((u32)(0xa9c4ecu)));
    /* 005bd873: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 005bd876: fmul dword ptr [0x92b714] */ ST(0) = ST(0) * R_F32((u32)(0x92b714u));
    /* 005bd87c: fdiv dword ptr [0x92b710] */ ST(0) = ST(0) / R_F32((u32)(0x92b710u));
    /* 005bd882: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bd886: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bd88b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd890: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bd894: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bd898: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bd89c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bd8a0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005bd8a4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bd8a9u); f_0082dcbc();
    /* 005bd8a9: movzx eax, byte ptr [ebp + 0x3e] */ r_eax = (u32)R8((u32)(r_ebp+0x3eu));
    /* 005bd8ad: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005bd8b1: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005bd8b5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bd8b7: fadd dword ptr [ebp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x30u));
    /* 005bd8ba: fstp dword ptr [edi + 0x194] */ W_F32((u32)(r_edi+0x194u), ST(0)); FPOP();
L_005bd8c0:; BB(0x005bd8c0);
    /* 005bd8c0: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005bd8c3: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bd8c6: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005bd8c9: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bd8cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bd8cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bd8ce: ret 4 */ FN_RET(0x005bd750); r_esp += 8; return;
}

void f_005bd8d4(void) /* sub_5BD8D4 */
{
    FN_ENTER(0x005bd8d4);
    /* 005bd8d4: mov dword ptr [0xa8d760], 0x3f800000 */ W32((u32)(0xa8d760u), 0x3f800000u);
    /* 005bd8de: mov dword ptr [0xa8d764], 0x41000000 */ W32((u32)(0xa8d764u), 0x41000000u);
    /* 005bd8e8: mov dword ptr [0xa8d768], 0x3fc00000 */ W32((u32)(0xa8d768u), 0x3fc00000u);
    /* 005bd8f2: ret  */ FN_RET(0x005bd8d4); r_esp += 4; return;
}

void f_005bd8f4(void) /* sub_5BD8F4 */
{
    FN_ENTER(0x005bd8f4);
    /* 005bd8f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bd8f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bd8f9: push 0xaca2c8 */ { u32 v = 0xaca2c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8fe: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5bd903u); f_008193cc();
    /* 005bd903: mov dword ptr [ebx], 0xb0baf0 */ W32((u32)(r_ebx), 0xb0baf0u);
    /* 005bd909: mov edx, dword ptr [0x9c1f80] */ r_edx = R32((u32)(0x9c1f80u));
    /* 005bd90f: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005bd912: mov eax, ebx */ r_eax = r_ebx;
    /* 005bd914: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bd915: ret  */ FN_RET(0x005bd8f4); r_esp += 4; return;
}

void f_005bd918(void) /* sub_5BD918 */
{
    FN_ENTER(0x005bd918);
    /* 005bd918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bd91b: mov ebx, eax */ r_ebx = r_eax;
L_005bd91d:; BB(0x005bd91d);
    /* 005bd91d: mov ecx, dword ptr [ebx + 0xa8d774] */ r_ecx = R32((u32)(r_ebx+0xa8d774u));
    /* 005bd923: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bd926: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd928: je 0x5bd937 */ if (fZ) goto L_005bd937;
L_005bd92a:; BB(0x005bd92a);
    /* 005bd92a: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bd92e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bd932: call 0x5bd968 */ r_esp -= 4; W32(r_esp, 0x5bd937u); f_005bd968();
L_005bd937:; BB(0x005bd937);
    /* 005bd937: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bd93a: jl 0x5bd91d */ if ((fS!=fO)) goto L_005bd91d;
L_005bd93c:; BB(0x005bd93c);
    /* 005bd93c: mov eax, 1 */ r_eax = 0x1u;
    /* 005bd941: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bd942: ret  */ FN_RET(0x005bd918); r_esp += 4; return;
}

void f_005bd944(void) /* sub_5BD944 */
{
    FN_ENTER(0x005bd944);
    /* 005bd944: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005bd946:; BB(0x005bd946);
    /* 005bd946: mov eax, dword ptr [edx + 0xa8d774] */ r_eax = R32((u32)(r_edx+0xa8d774u));
    /* 005bd94c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd951: jne 0x5bd95b */ if (!fZ) goto L_005bd95b;
L_005bd953:; BB(0x005bd953);
    /* 005bd953: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd956: jl 0x5bd946 */ if ((fS!=fO)) goto L_005bd946;
L_005bd958:; BB(0x005bd958);
    /* 005bd958: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bd95a: ret  */ FN_RET(0x005bd944); r_esp += 4; return;
L_005bd95b:; BB(0x005bd95b);
    /* 005bd95b: mov edx, dword ptr [eax + 0x174] */ r_edx = R32((u32)(r_eax+0x174u));
    /* 005bd961: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005bd964: ret  */ FN_RET(0x005bd944); r_esp += 4; return;
}

void f_005bd968(void) /* sub_5BD968 */
{
    FN_ENTER(0x005bd968);
    /* 005bd968: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd969: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bd96a: mov esi, ecx */ r_esi = r_ecx;
    /* 005bd96c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005bd970: mov edx, dword ptr [esi + 0x1c0] */ r_edx = R32((u32)(r_esi+0x1c0u));
    /* 005bd976: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd978: jne 0x5bda71 */ if (!fZ) goto L_005bda71;
L_005bd97e:; BB(0x005bd97e);
    /* 005bd97e: mov edx, dword ptr [esi + 0x184] */ r_edx = R32((u32)(r_esi+0x184u));
    /* 005bd984: mov edi, dword ptr [esi + edx*4 + 0x174] */ r_edi = R32((u32)(r_esi+r_edx*4+0x174u));
    /* 005bd98b: cmp eax, dword ptr [edi + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x40u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005bd98e: jne 0x5bd99a */ if (!fZ) goto L_005bd99a;
L_005bd990:; BB(0x005bd990);
    /* 005bd990: mov eax, 1 */ r_eax = 0x1u;
    /* 005bd995: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bd996: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bd997: ret 8 */ FN_RET(0x005bd968); r_esp += 12; return;
L_005bd99a:; BB(0x005bd99a);
    /* 005bd99a: mov ecx, dword ptr [esi + 0x17c] */ r_ecx = R32((u32)(r_esi+0x17cu));
    /* 005bd9a0: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005bd9a3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005bd9a6: mov eax, dword ptr [0xa8d770] */ r_eax = R32((u32)(0xa8d770u));
    /* 005bd9ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd9ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd9af: mov edi, dword ptr [eax + edx*8] */ r_edi = R32((u32)(r_eax+r_edx*8));
    /* 005bd9b2: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 005bd9b4: mov edi, dword ptr [eax + edx*8 + 4] */ r_edi = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 005bd9b8: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 005bd9bb: mov edi, dword ptr [eax + edx*8 + 8] */ r_edi = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 005bd9bf: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 005bd9c2: mov edi, dword ptr [eax + edx*8 + 0xc] */ r_edi = R32((u32)(r_eax+r_edx*8+0xcu));
    /* 005bd9c6: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005bd9c9: mov edi, dword ptr [eax + edx*8 + 0x10] */ r_edi = R32((u32)(r_eax+r_edx*8+0x10u));
    /* 005bd9cd: mov dword ptr [ecx + 0x10], edi */ W32((u32)(r_ecx+0x10u), r_edi);
    /* 005bd9d0: mov edi, dword ptr [eax + edx*8 + 0x14] */ r_edi = R32((u32)(r_eax+r_edx*8+0x14u));
    /* 005bd9d4: mov dword ptr [ecx + 0x14], edi */ W32((u32)(r_ecx+0x14u), r_edi);
    /* 005bd9d7: mov edi, dword ptr [eax + edx*8 + 0x18] */ r_edi = R32((u32)(r_eax+r_edx*8+0x18u));
    /* 005bd9db: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 005bd9de: mov edi, dword ptr [eax + edx*8 + 0x1c] */ r_edi = R32((u32)(r_eax+r_edx*8+0x1cu));
    /* 005bd9e2: mov dword ptr [ecx + 0x1c], edi */ W32((u32)(r_ecx+0x1cu), r_edi);
    /* 005bd9e5: mov edi, dword ptr [eax + edx*8 + 0x20] */ r_edi = R32((u32)(r_eax+r_edx*8+0x20u));
    /* 005bd9e9: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 005bd9ec: mov edi, dword ptr [eax + edx*8 + 0x24] */ r_edi = R32((u32)(r_eax+r_edx*8+0x24u));
    /* 005bd9f0: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 005bd9f3: mov edi, dword ptr [eax + edx*8 + 0x28] */ r_edi = R32((u32)(r_eax+r_edx*8+0x28u));
    /* 005bd9f7: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 005bd9fa: mov edi, dword ptr [eax + edx*8 + 0x2c] */ r_edi = R32((u32)(r_eax+r_edx*8+0x2cu));
    /* 005bd9fe: mov dword ptr [ecx + 0x2c], edi */ W32((u32)(r_ecx+0x2cu), r_edi);
    /* 005bda01: mov edi, dword ptr [eax + edx*8 + 0x30] */ r_edi = R32((u32)(r_eax+r_edx*8+0x30u));
    /* 005bda05: mov dword ptr [ecx + 0x30], edi */ W32((u32)(r_ecx+0x30u), r_edi);
    /* 005bda08: mov edi, dword ptr [eax + edx*8 + 0x34] */ r_edi = R32((u32)(r_eax+r_edx*8+0x34u));
    /* 005bda0c: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 005bda0f: mov edi, dword ptr [eax + edx*8 + 0x38] */ r_edi = R32((u32)(r_eax+r_edx*8+0x38u));
    /* 005bda13: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 005bda16: mov eax, dword ptr [eax + edx*8 + 0x3c] */ r_eax = R32((u32)(r_eax+r_edx*8+0x3cu));
    /* 005bda1a: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 005bda21: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 005bda24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bda26: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005bda29: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 005bda2c: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005bda2f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005bda33: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bda35: je 0x5bda40 */ if (fZ) goto L_005bda40;
L_005bda37:; BB(0x005bda37);
    /* 005bda37: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 005bda3e: jmp 0x5bda47 */ goto L_005bda47;
L_005bda40:; BB(0x005bda40);
    /* 005bda40: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
L_005bda47:; BB(0x005bda47);
    /* 005bda47: mov edx, dword ptr [esi + 0x184] */ r_edx = R32((u32)(r_esi+0x184u));
    /* 005bda4d: mov dword ptr [esi + 0x1a0], 2 */ W32((u32)(r_esi+0x1a0u), 0x2u);
    /* 005bda57: mov dword ptr [esi + 0x19c], edx */ W32((u32)(r_esi+0x19cu), r_edx);
    /* 005bda5d: mov eax, 1 */ r_eax = 0x1u;
    /* 005bda62: mov dword ptr [esi + 0x1a4], 0 */ W32((u32)(r_esi+0x1a4u), 0x0u);
    /* 005bda6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bda6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bda6e: ret 8 */ FN_RET(0x005bd968); r_esp += 12; return;
L_005bda71:; BB(0x005bda71);
    /* 005bda71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bda73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bda74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bda75: ret 8 */ FN_RET(0x005bd968); r_esp += 12; return;
}

void f_005bda78(void) /* sub_5BDA78 */
{
    FN_ENTER(0x005bda78);
    /* 005bda78: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x5bda7du); f_0078b220();
    /* 005bda7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bda7f: je 0x5bdaac */ if (fZ) goto L_005bdaac;
L_005bda81:; BB(0x005bda81);
    /* 005bda81: mov eax, dword ptr [0xa8d76c] */ r_eax = R32((u32)(0xa8d76cu));
    /* 005bda86: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bda88: jne 0x5bdad5 */ if (!fZ) goto L_005bdad5;
L_005bda8a:; BB(0x005bda8a);
    /* 005bda8a: push dword ptr [0xa8d770] */ { u32 v = R32((u32)(0xa8d770u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bda90: push 0x92b758 */ { u32 v = 0x92b758u; r_esp -= 4; W32(r_esp, v); }
    /* 005bda95: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x5bda9au); f_005b9910();
    /* 005bda9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bda9d: mov eax, dword ptr [0xa8d76c] */ r_eax = R32((u32)(0xa8d76cu));
    /* 005bdaa2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bdaa5: mov dword ptr [0xa8d76c], eax */ W32((u32)(0xa8d76cu), r_eax);
    /* 005bdaaa: jmp 0x5bdad5 */ goto L_005bdad5;
L_005bdaac:; BB(0x005bdaac);
    /* 005bdaac: mov eax, dword ptr [0xa8d76c] */ r_eax = R32((u32)(0xa8d76cu));
    /* 005bdab1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bdab3: je 0x5bdad5 */ if (fZ) goto L_005bdad5;
L_005bdab5:; BB(0x005bdab5);
    /* 005bdab5: push dword ptr [0xa8d770] */ { u32 v = R32((u32)(0xa8d770u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdabb: push 0x92b768 */ { u32 v = 0x92b768u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdac0: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x5bdac5u); f_005b9910();
    /* 005bdac5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdac8: mov eax, dword ptr [0xa8d76c] */ r_eax = R32((u32)(0xa8d76cu));
    /* 005bdacd: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bdad0: mov dword ptr [0xa8d76c], eax */ W32((u32)(0xa8d76cu), r_eax);
L_005bdad5:; BB(0x005bdad5);
    /* 005bdad5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5bdadau); f_0082dab0();
    /* 005bdada: ret  */ FN_RET(0x005bda78); r_esp += 4; return;
}

void f_005bdaa0(void)
{
    FN_ENTER(0x005bdaa0);
    /* 005bdaa0: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 005bdaa2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bdaa5: mov dword ptr [0xa8d76c], eax */ W32((u32)(0xa8d76cu), r_eax);
    /* 005bdaaa: jmp 0x5bdad5 */ goto L_005bdad5;
L_005bdad5:; BB(0x005bdad5);
    /* 005bdad5: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5bdadau); f_0082dab0();
    /* 005bdada: ret  */ FN_RET(0x005bdaa0); r_esp += 4; return;
}

void f_005bdadc(void) /* sub_5BDADC */
{
    FN_ENTER(0x005bdadc);
    /* 005bdadc: mov dword ptr [0xa8d720], 1 */ W32((u32)(0xa8d720u), 0x1u);
    /* 005bdae6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bdae8: mov dword ptr [0xa8d76c], eax */ W32((u32)(0xa8d76cu), r_eax);
    /* 005bdaed: mov dword ptr [0xa8d728], 0x457a0000 */ W32((u32)(0xa8d728u), 0x457a0000u);
    /* 005bdaf7: mov dword ptr [0xa8d724], eax */ W32((u32)(0xa8d724u), r_eax);
    /* 005bdafc: mov dword ptr [0xa8d72c], 0x42c80000 */ W32((u32)(0xa8d72cu), 0x42c80000u);
    /* 005bdb06: mov dword ptr [0xa8d730], 0x3c23d70a */ W32((u32)(0xa8d730u), 0x3c23d70au);
    /* 005bdb10: mov dword ptr [0xa8d734], eax */ W32((u32)(0xa8d734u), r_eax);
    /* 005bdb15: mov byte ptr [0xa8d758], al */ W8((u32)(0xa8d758u), (u8)r_eax);
    /* 005bdb1a: mov dword ptr [0xa8d738], 0 */ W32((u32)(0xa8d738u), 0x0u);
    /* 005bdb24: mov dword ptr [0xa8d73c], 0 */ W32((u32)(0xa8d73cu), 0x0u);
    /* 005bdb2e: mov byte ptr [0xa8d759], al */ W8((u32)(0xa8d759u), (u8)r_eax);
    /* 005bdb33: mov byte ptr [0xa8d75a], al */ W8((u32)(0xa8d75au), (u8)r_eax);
    /* 005bdb38: mov dword ptr [0xa8d740], 0 */ W32((u32)(0xa8d740u), 0x0u);
    /* 005bdb42: mov dword ptr [0xa8d744], 0 */ W32((u32)(0xa8d744u), 0x0u);
    /* 005bdb4c: mov byte ptr [0xa8d75b], al */ W8((u32)(0xa8d75bu), (u8)r_eax);
    /* 005bdb51: mov byte ptr [0xa8d75c], al */ W8((u32)(0xa8d75cu), (u8)r_eax);
    /* 005bdb56: mov dword ptr [0xa8d748], 0 */ W32((u32)(0xa8d748u), 0x0u);
    /* 005bdb60: mov dword ptr [0xa8d74c], 0 */ W32((u32)(0xa8d74cu), 0x0u);
    /* 005bdb6a: mov byte ptr [0xa8d75d], al */ W8((u32)(0xa8d75du), (u8)r_eax);
    /* 005bdb6f: mov byte ptr [0xa8d75e], al */ W8((u32)(0xa8d75eu), (u8)r_eax);
    /* 005bdb74: mov dword ptr [0xa8d754], 0 */ W32((u32)(0xa8d754u), 0x0u);
    /* 005bdb7e: mov byte ptr [0xa8d75f], al */ W8((u32)(0xa8d75fu), (u8)r_eax);
    /* 005bdb83: mov dword ptr [0xa8d750], 0x44200000 */ W32((u32)(0xa8d750u), 0x44200000u);
    /* 005bdb8d: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdb92: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5bdb97u); f_008581c5();
    /* 005bdb97: mov edx, eax */ r_edx = r_eax;
    /* 005bdb99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdb9c: mov dword ptr [0xa8d770], edx */ W32((u32)(0xa8d770u), r_edx);
    /* 005bdba2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bdba4: jmp 0x5bdbac */ goto L_005bdbac;
L_005bdba6:; BB(0x005bdba6);
    /* 005bdba6: mov edx, dword ptr [0xa8d770] */ r_edx = R32((u32)(0xa8d770u));
L_005bdbac:; BB(0x005bdbac);
    /* 005bdbac: mov ecx, dword ptr [0xa8d720] */ r_ecx = R32((u32)(0xa8d720u));
    /* 005bdbb2: mov dword ptr [eax + edx], ecx */ W32((u32)(r_eax+r_edx), r_ecx);
    /* 005bdbb5: mov ecx, dword ptr [0xa8d724] */ r_ecx = R32((u32)(0xa8d724u));
    /* 005bdbbb: mov dword ptr [eax + edx + 4], ecx */ W32((u32)(r_eax+r_edx+0x4u), r_ecx);
    /* 005bdbbf: mov ecx, dword ptr [0xa8d728] */ r_ecx = R32((u32)(0xa8d728u));
    /* 005bdbc5: mov dword ptr [eax + edx + 8], ecx */ W32((u32)(r_eax+r_edx+0x8u), r_ecx);
    /* 005bdbc9: mov ecx, dword ptr [0xa8d72c] */ r_ecx = R32((u32)(0xa8d72cu));
    /* 005bdbcf: mov dword ptr [eax + edx + 0xc], ecx */ W32((u32)(r_eax+r_edx+0xcu), r_ecx);
    /* 005bdbd3: mov ecx, dword ptr [0xa8d730] */ r_ecx = R32((u32)(0xa8d730u));
    /* 005bdbd9: mov dword ptr [eax + edx + 0x10], ecx */ W32((u32)(r_eax+r_edx+0x10u), r_ecx);
    /* 005bdbdd: mov ecx, dword ptr [0xa8d734] */ r_ecx = R32((u32)(0xa8d734u));
    /* 005bdbe3: mov dword ptr [eax + edx + 0x14], ecx */ W32((u32)(r_eax+r_edx+0x14u), r_ecx);
    /* 005bdbe7: mov ecx, dword ptr [0xa8d738] */ r_ecx = R32((u32)(0xa8d738u));
    /* 005bdbed: mov dword ptr [eax + edx + 0x18], ecx */ W32((u32)(r_eax+r_edx+0x18u), r_ecx);
    /* 005bdbf1: mov ecx, dword ptr [0xa8d73c] */ r_ecx = R32((u32)(0xa8d73cu));
    /* 005bdbf7: mov dword ptr [eax + edx + 0x1c], ecx */ W32((u32)(r_eax+r_edx+0x1cu), r_ecx);
    /* 005bdbfb: mov ecx, dword ptr [0xa8d740] */ r_ecx = R32((u32)(0xa8d740u));
    /* 005bdc01: mov dword ptr [eax + edx + 0x20], ecx */ W32((u32)(r_eax+r_edx+0x20u), r_ecx);
    /* 005bdc05: mov ecx, dword ptr [0xa8d744] */ r_ecx = R32((u32)(0xa8d744u));
    /* 005bdc0b: mov dword ptr [eax + edx + 0x24], ecx */ W32((u32)(r_eax+r_edx+0x24u), r_ecx);
    /* 005bdc0f: mov ecx, dword ptr [0xa8d748] */ r_ecx = R32((u32)(0xa8d748u));
    /* 005bdc15: mov dword ptr [eax + edx + 0x28], ecx */ W32((u32)(r_eax+r_edx+0x28u), r_ecx);
    /* 005bdc19: mov ecx, dword ptr [0xa8d74c] */ r_ecx = R32((u32)(0xa8d74cu));
    /* 005bdc1f: mov dword ptr [eax + edx + 0x2c], ecx */ W32((u32)(r_eax+r_edx+0x2cu), r_ecx);
    /* 005bdc23: mov ecx, dword ptr [0xa8d750] */ r_ecx = R32((u32)(0xa8d750u));
    /* 005bdc29: mov dword ptr [eax + edx + 0x30], ecx */ W32((u32)(r_eax+r_edx+0x30u), r_ecx);
    /* 005bdc2d: mov ecx, dword ptr [0xa8d754] */ r_ecx = R32((u32)(0xa8d754u));
    /* 005bdc33: mov dword ptr [eax + edx + 0x34], ecx */ W32((u32)(r_eax+r_edx+0x34u), r_ecx);
    /* 005bdc37: mov ecx, dword ptr [0xa8d758] */ r_ecx = R32((u32)(0xa8d758u));
    /* 005bdc3d: mov dword ptr [eax + edx + 0x38], ecx */ W32((u32)(r_eax+r_edx+0x38u), r_ecx);
    /* 005bdc41: mov ecx, dword ptr [0xa8d75c] */ r_ecx = R32((u32)(0xa8d75cu));
    /* 005bdc47: mov dword ptr [eax + edx + 0x3c], ecx */ W32((u32)(r_eax+r_edx+0x3cu), r_ecx);
    /* 005bdc4b: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bdc4e: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdc53: jl 0x5bdba6 */ if ((fS!=fO)) goto L_005bdba6;
L_005bdc59:; BB(0x005bdc59);
    /* 005bdc59: push dword ptr [0xa8d770] */ { u32 v = R32((u32)(0xa8d770u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdc5f: push 0x92b768 */ { u32 v = 0x92b768u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc64: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x5bdc69u); f_005b9910();
    /* 005bdc69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdc6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bdc6e: mov dword ptr [0xa8d774], eax */ W32((u32)(0xa8d774u), r_eax);
    /* 005bdc73: mov dword ptr [0xa8d778], eax */ W32((u32)(0xa8d778u), r_eax);
    /* 005bdc78: mov dword ptr [0xa8d77c], eax */ W32((u32)(0xa8d77cu), r_eax);
    /* 005bdc7d: mov dword ptr [0xa8d780], eax */ W32((u32)(0xa8d780u), r_eax);
    /* 005bdc82: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5bdc87u); f_0082dab0();
    /* 005bdc87: call 0x5bdc94 */ r_esp -= 4; W32(r_esp, 0x5bdc8cu); f_005bdc94();
    /* 005bdc8c: call 0x5c2dc8 */ r_esp -= 4; W32(r_esp, 0x5bdc91u); f_005c2dc8();
    /* 005bdc91: ret  */ FN_RET(0x005bdadc); r_esp += 4; return;
}

void f_005bdc94(void) /* sub_5BDC94 */
{
    FN_ENTER(0x005bdc94);
    /* 005bdc94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc95: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdc97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc99: push 0x8d944c */ { u32 v = 0x8d944cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bdca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bdcac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdcaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bdcb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005bdcb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005bdcb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005bdcbb: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bdcbd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005bdcc4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5bdcc9u); f_005caba4();
    /* 005bdcc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bdcca: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bdccd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdccf: je 0x5bdd04 */ if (fZ) goto L_005bdd04;
L_005bdcd1:; BB(0x005bdcd1);
    /* 005bdcd1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005bdcd8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bdcdf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bdce2: call 0x5bd8f4 */ r_esp -= 4; W32(r_esp, 0x5bdce7u); f_005bd8f4();
    /* 005bdce7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bdcea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005bdcf1:; BB(0x005bdcf1);
    /* 005bdcf1: mov dword ptr [0xa8d784], eax */ W32((u32)(0xa8d784u), r_eax);
    /* 005bdcf6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdcf9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bdd00: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdd02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdd03: ret  */ FN_RET(0x005bdc94); r_esp += 4; return;
L_005bdd04:; BB(0x005bdd04);
    /* 005bdd04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bdd06: jmp 0x5bdcf1 */ goto L_005bdcf1;
}

void f_005bdd08(void) /* sub_5BDD08 */
{
    FN_ENTER(0x005bdd08);
    /* 005bdd08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bdd0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005bdd0d: call 0x5bdd2c */ r_esp -= 4; W32(r_esp, 0x5bdd12u); f_005bdd2c();
    /* 005bdd12: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005bdd16: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bdd18: jne 0x5bdd1e */ if (!fZ) goto L_005bdd1e;
L_005bdd1a:; BB(0x005bdd1a);
    /* 005bdd1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bdd1b: ret 4 */ FN_RET(0x005bdd08); r_esp += 8; return;
L_005bdd1e:; BB(0x005bdd1e);
    /* 005bdd1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd1f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5bdd24u); f_005c2f74();
    /* 005bdd24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bdd25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bdd26: ret 4 */ FN_RET(0x005bdd08); r_esp += 8; return;
}

void f_005bdd2c(void) /* sub_5BDD2C */
{
    FN_ENTER(0x005bdd2c);
    /* 005bdd2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd2d: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdd2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd31: push 0x8d94e6 */ { u32 v = 0x8d94e6u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bdd3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005bdd44: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdd47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bdd4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005bdd4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005bdd50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005bdd53: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005bdd56: mov dword ptr [ecx], 0xb0bc20 */ W32((u32)(r_ecx), 0xb0bc20u);
    /* 005bdd5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bdd63: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bdd66: add ecx, 0x82c */ {  u32 a = r_ecx; u32 b = 0x82cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdd6c: call 0x4ff6d4 */ r_esp -= 4; W32(r_esp, 0x5bdd71u); f_004ff6d4();
    /* 005bdd71: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bdd78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bdd7b: add ecx, 0x80c */ {  u32 a = r_ecx; u32 b = 0x80cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdd81: call 0x4ff6d4 */ r_esp -= 4; W32(r_esp, 0x5bdd86u); f_004ff6d4();
    /* 005bdd86: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bdd8d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bdd90: add ecx, 0x7e4 */ {  u32 a = r_ecx; u32 b = 0x7e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdd96: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x5bdd9bu); f_004ff470();
    /* 005bdd9b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bdda2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bdda5: add ecx, 0x7bc */ {  u32 a = r_ecx; u32 b = 0x7bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bddab: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x5bddb0u); f_004ff470();
    /* 005bddb0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005bddb7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bddba: add ecx, 0x794 */ {  u32 a = r_ecx; u32 b = 0x794u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bddc0: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x5bddc5u); f_004ff470();
    /* 005bddc5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bddcc: push 0x4ff6d4 */ { u32 v = 0x4ff6d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bddd1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bddd4: add eax, 0x728 */ {  u32 a = r_eax; u32 b = 0x728u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bddd9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdddb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bddde: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5bdde3u); f_008586d6();
    /* 005bdde3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005bddea: push 0x4ff6d4 */ { u32 v = 0x4ff6d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bddef: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bddf2: add eax, 0x6bc */ {  u32 a = r_eax; u32 b = 0x6bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bddf7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005bddf9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005bddfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bddfc: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5bde01u); f_008586d6();
    /* 005bde01: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bde08: push 0x4ff470 */ { u32 v = 0x4ff470u; r_esp -= 4; W32(r_esp, v); }
    /* 005bde0d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bde10: add eax, 0x638 */ {  u32 a = r_eax; u32 b = 0x638u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bde15: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005bde17: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005bde19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bde1a: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5bde1fu); f_008586d6();
    /* 005bde1f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005bde26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bde29: add ecx, 0x610 */ {  u32 a = r_ecx; u32 b = 0x610u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bde2f: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x5bde34u); f_004ff470();
    /* 005bde34: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bde3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bde3e: add ecx, 0x5c8 */ {  u32 a = r_ecx; u32 b = 0x5c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bde44: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x5bde49u); f_004ff470();
    /* 005bde49: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005bde50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bde53: add ecx, 0x5a0 */ {  u32 a = r_ecx; u32 b = 0x5a0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bde59: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x5bde5eu); f_004ff470();
    /* 005bde5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bde65: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bde68: add ecx, 0x578 */ {  u32 a = r_ecx; u32 b = 0x578u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bde6e: call 0x4ff470 */ r_esp -= 4; W32(r_esp, 0x5bde73u); f_004ff470();
    /* 005bde73: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005bde7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bde7d: add ecx, 0x558 */ {  u32 a = r_ecx; u32 b = 0x558u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bde83: call 0x4ff748 */ r_esp -= 4; W32(r_esp, 0x5bde88u); f_004ff748();
    /* 005bde88: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bde8f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bde92: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x5bde97u); f_004f7078();
    /* 005bde97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bde9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bdea1: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdea4: ret  */ FN_RET(0x005bdd2c); r_esp += 4; return;
}

void f_005bdea8(void) /* sub_5BDEA8 */
{
    FN_ENTER(0x005bdea8);
    /* 005bdea8: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdeae: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005bdeb1: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bdeb4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdeb6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdeb8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdeba: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bdec1: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x5bdec6u); f_007c1100();
    /* 005bdec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bdec8: mov eax, 0 */ r_eax = 0x0u;
    /* 005bdecd: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005bded0: ret  */ FN_RET(0x005bdea8); r_esp += 4; return;
}

void f_005bded4(void) /* sub_5BDED4 */
{
    FN_ENTER(0x005bded4);
    /* 005bded4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bded5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bded6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005bded8: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005bdedb: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bdede: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdee4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdee6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdee8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdeea: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bdef1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bdef6u); f_007c1160();
    /* 005bdef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdef8: je 0x5bdf12 */ if (fZ) goto L_005bdf12;
L_005bdefa:; BB(0x005bdefa);
    /* 005bdefa: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdeff: push dword ptr [0xa8d770] */ { u32 v = R32((u32)(0xa8d770u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdf05: push 0x92b8f4 */ { u32 v = 0x92b8f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdf0a: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x5bdf0fu); f_005b9f68();
    /* 005bdf0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bdf12:; BB(0x005bdf12);
    /* 005bdf12: mov eax, dword ptr [ebx + 0x538] */ r_eax = R32((u32)(r_ebx+0x538u));
    /* 005bdf18: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bdf1a: je 0x5bdf28 */ if (fZ) goto L_005bdf28;
L_005bdf1c:; BB(0x005bdf1c);
    /* 005bdf1c: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bdf1f: mov dword ptr [ebx + 0x538], eax */ W32((u32)(r_ebx+0x538u), r_eax);
    /* 005bdf25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bdf26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bdf27: ret  */ FN_RET(0x005bded4); r_esp += 4; return;
L_005bdf28:; BB(0x005bdf28);
    /* 005bdf28: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005bdf2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bdf2d: mov esi, eax */ r_esi = r_eax;
L_005bdf2f:; BB(0x005bdf2f);
    /* 005bdf2f: push dword ptr [esi*4 + 0xa8d7a0] */ { u32 v = R32((u32)(r_esi*4+0xa8d7a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdf36: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005bdf39: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 005bdf3c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf3e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf40: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf42: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bdf49: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x5bdf4eu); f_007c1100();
    /* 005bdf4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdf50: je 0x5bdf5c */ if (fZ) goto L_005bdf5c;
L_005bdf52:; BB(0x005bdf52);
    /* 005bdf52: add dword ptr [ebx + esi*4 + 0x84c], 1 */ { u32 ad = (u32)(r_ebx+r_esi*4+0x84cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bdf5a: jmp 0x5bdf67 */ goto L_005bdf67;
L_005bdf5c:; BB(0x005bdf5c);
    /* 005bdf5c: mov dword ptr [ebx + esi*4 + 0x84c], 0 */ W32((u32)(r_ebx+r_esi*4+0x84cu), 0x0u);
L_005bdf67:; BB(0x005bdf67);
    /* 005bdf67: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bdf6a: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdf6d: jl 0x5bdf2f */ if ((fS!=fO)) goto L_005bdf2f;
L_005bdf6f:; BB(0x005bdf6f);
    /* 005bdf6f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005bdf72: mov eax, dword ptr [ebx + 0x538] */ r_eax = R32((u32)(r_ebx+0x538u));
    /* 005bdf78: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bdf7a: jne 0x5be02d */ if (!fZ) goto L_005be02d;
L_005bdf80:; BB(0x005bdf80);
    /* 005bdf80: push dword ptr [0xa8d7b4] */ { u32 v = R32((u32)(0xa8d7b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdf86: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005bdf89: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bdf8c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf8e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf90: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf92: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bdf99: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bdf9eu); f_007c1160();
    /* 005bdf9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdfa0: jne 0x5bdfb1 */ if (!fZ) goto L_005bdfb1;
L_005bdfa2:; BB(0x005bdfa2);
    /* 005bdfa2: mov eax, dword ptr [ebx + 0x860] */ r_eax = R32((u32)(r_ebx+0x860u));
    /* 005bdfa8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdfab: jge 0x5bdfb1 */ if ((fS==fO)) goto L_005bdfb1;
L_005bdfad:; BB(0x005bdfad);
    /* 005bdfad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bdfaf: jmp 0x5bdfb6 */ goto L_005bdfb6;
L_005bdfb1:; BB(0x005bdfb1);
    /* 005bdfb1: mov eax, 1 */ r_eax = 0x1u;
L_005bdfb6:; BB(0x005bdfb6);
    /* 005bdfb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdfb8: je 0x5bdfdc */ if (fZ) goto L_005bdfdc;
L_005bdfba:; BB(0x005bdfba);
    /* 005bdfba: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005bdfc0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bdfc3: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdfc6: jl 0x5bdfd4 */ if ((fS!=fO)) goto L_005bdfd4;
L_005bdfc8:; BB(0x005bdfc8);
    /* 005bdfc8: mov dword ptr [ebx + 0x53c], 0 */ W32((u32)(r_ebx+0x53cu), 0x0u);
    /* 005bdfd2: jmp 0x5be02d */ goto L_005be02d;
L_005bdfd4:; BB(0x005bdfd4);
    /* 005bdfd4: mov dword ptr [ebx + 0x53c], eax */ W32((u32)(r_ebx+0x53cu), r_eax);
    /* 005bdfda: jmp 0x5be02d */ goto L_005be02d;
L_005bdfdc:; BB(0x005bdfdc);
    /* 005bdfdc: push dword ptr [0xa8d7b0] */ { u32 v = R32((u32)(0xa8d7b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bdfe2: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005bdfe5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bdfe8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdfea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdfec: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdfee: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bdff5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bdffau); f_007c1160();
    /* 005bdffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdffc: jne 0x5be00d */ if (!fZ) goto L_005be00d;
L_005bdffe:; BB(0x005bdffe);
    /* 005bdffe: mov eax, dword ptr [ebx + 0x85c] */ r_eax = R32((u32)(r_ebx+0x85cu));
    /* 005be004: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be007: jge 0x5be00d */ if ((fS==fO)) goto L_005be00d;
L_005be009:; BB(0x005be009);
    /* 005be009: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005be00b: jmp 0x5be012 */ goto L_005be012;
L_005be00d:; BB(0x005be00d);
    /* 005be00d: mov eax, 1 */ r_eax = 0x1u;
L_005be012:; BB(0x005be012);
    /* 005be012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be014: je 0x5be02d */ if (fZ) goto L_005be02d;
L_005be016:; BB(0x005be016);
    /* 005be016: mov eax, dword ptr [ebx + 0x53c] */ r_eax = R32((u32)(r_ebx+0x53cu));
    /* 005be01c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be01f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005be021: jl 0x5be167 */ if ((fS!=fO)) goto L_005be167;
L_005be027:; BB(0x005be027);
    /* 005be027: mov dword ptr [ebx + 0x53c], eax */ W32((u32)(r_ebx+0x53cu), r_eax);
L_005be02d:; BB(0x005be02d);
    /* 005be02d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be02f: call 0x5be178 */ r_esp -= 4; W32(r_esp, 0x5be034u); f_005be178();
    /* 005be034: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be036: call 0x5be764 */ r_esp -= 4; W32(r_esp, 0x5be03bu); f_005be764();
    /* 005be03b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be03d: call 0x5be8dc */ r_esp -= 4; W32(r_esp, 0x5be042u); f_005be8dc();
    /* 005be042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be044: call 0x5be9c4 */ r_esp -= 4; W32(r_esp, 0x5be049u); f_005be9c4();
    /* 005be049: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be04b: call 0x5be9fc */ r_esp -= 4; W32(r_esp, 0x5be050u); f_005be9fc();
    /* 005be050: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be052: call 0x5bea28 */ r_esp -= 4; W32(r_esp, 0x5be057u); f_005bea28();
    /* 005be057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be059: call 0x5bea54 */ r_esp -= 4; W32(r_esp, 0x5be05eu); f_005bea54();
    /* 005be05e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be060: call 0x5bea80 */ r_esp -= 4; W32(r_esp, 0x5be065u); f_005bea80();
    /* 005be065: mov eax, dword ptr [ebx + 0x554] */ r_eax = R32((u32)(r_ebx+0x554u));
    /* 005be06b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be06d: je 0x5be08b */ if (fZ) goto L_005be08b;
L_005be06f:; BB(0x005be06f);
    /* 005be06f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be072: jne 0x5be07d */ if (!fZ) goto L_005be07d;
L_005be074:; BB(0x005be074);
    /* 005be074: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be076: call 0x5bf8c0 */ r_esp -= 4; W32(r_esp, 0x5be07bu); f_005bf8c0();
    /* 005be07b: jmp 0x5be092 */ goto L_005be092;
L_005be07d:; BB(0x005be07d);
    /* 005be07d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be080: jne 0x5be092 */ if (!fZ) goto L_005be092;
L_005be082:; BB(0x005be082);
    /* 005be082: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be084: call 0x5beb48 */ r_esp -= 4; W32(r_esp, 0x5be089u); f_005beb48();
    /* 005be089: jmp 0x5be092 */ goto L_005be092;
L_005be08b:; BB(0x005be08b);
    /* 005be08b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be08d: call 0x5c03f8 */ r_esp -= 4; W32(r_esp, 0x5be092u); f_005c03f8();
L_005be092:; BB(0x005be092);
    /* 005be092: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be094: call 0x5c0b70 */ r_esp -= 4; W32(r_esp, 0x5be099u); f_005c0b70();
    /* 005be099: mov eax, dword ptr [ebx + 0x538] */ r_eax = R32((u32)(r_ebx+0x538u));
    /* 005be09f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005be0a1: je 0x5be153 */ if (fZ) goto L_005be153;
L_005be0a7:; BB(0x005be0a7);
    /* 005be0a7: mov edx, dword ptr [ebx + 0x554] */ r_edx = R32((u32)(r_ebx+0x554u));
    /* 005be0ad: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005be0b0: mov dword ptr [ebx + 0x538], eax */ W32((u32)(r_ebx+0x538u), r_eax);
    /* 005be0b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be0b8: je 0x5be0d4 */ if (fZ) goto L_005be0d4;
L_005be0ba:; BB(0x005be0ba);
    /* 005be0ba: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be0bd: jne 0x5be0c7 */ if (!fZ) goto L_005be0c7;
L_005be0bf:; BB(0x005be0bf);
    /* 005be0bf: lea eax, [ebx + 0xb8] */ r_eax = (u32)(r_ebx+0xb8u);
    /* 005be0c5: jmp 0x5be0d7 */ goto L_005be0d7;
L_005be0c7:; BB(0x005be0c7);
    /* 005be0c7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be0ca: jne 0x5be0d7 */ if (!fZ) goto L_005be0d7;
L_005be0cc:; BB(0x005be0cc);
    /* 005be0cc: lea eax, [ebx + 0xf8] */ r_eax = (u32)(r_ebx+0xf8u);
    /* 005be0d2: jmp 0x5be0d7 */ goto L_005be0d7;
L_005be0d4:; BB(0x005be0d4);
    /* 005be0d4: lea eax, [ebx + 0x78] */ r_eax = (u32)(r_ebx+0x78u);
L_005be0d7:; BB(0x005be0d7);
    /* 005be0d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005be0d9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005be0dc: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 005be0df: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005be0e2: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 005be0e5: movzx edx, byte ptr [eax + 0x38] */ r_edx = (u32)R8((u32)(r_eax+0x38u));
    /* 005be0e9: mov byte ptr [ebx + 0x70], dl */ W8((u32)(r_ebx+0x70u), (u8)r_edx);
    /* 005be0ec: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005be0ef: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 005be0f2: movzx edx, byte ptr [eax + 0x39] */ r_edx = (u32)R8((u32)(r_eax+0x39u));
    /* 005be0f6: mov byte ptr [ebx + 0x71], dl */ W8((u32)(r_ebx+0x71u), (u8)r_edx);
    /* 005be0f9: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005be0fc: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 005be0ff: movzx edx, byte ptr [eax + 0x3a] */ r_edx = (u32)R8((u32)(r_eax+0x3au));
    /* 005be103: mov byte ptr [ebx + 0x72], dl */ W8((u32)(r_ebx+0x72u), (u8)r_edx);
    /* 005be106: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005be109: mov dword ptr [ebx + 0x5c], edx */ W32((u32)(r_ebx+0x5cu), r_edx);
    /* 005be10c: movzx edx, byte ptr [eax + 0x3b] */ r_edx = (u32)R8((u32)(r_eax+0x3bu));
    /* 005be110: mov byte ptr [ebx + 0x73], dl */ W8((u32)(r_ebx+0x73u), (u8)r_edx);
    /* 005be113: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005be116: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 005be119: movzx edx, byte ptr [eax + 0x3c] */ r_edx = (u32)R8((u32)(r_eax+0x3cu));
    /* 005be11d: mov byte ptr [ebx + 0x74], dl */ W8((u32)(r_ebx+0x74u), (u8)r_edx);
    /* 005be120: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005be123: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 005be126: movzx edx, byte ptr [eax + 0x3d] */ r_edx = (u32)R8((u32)(r_eax+0x3du));
    /* 005be12a: mov byte ptr [ebx + 0x75], dl */ W8((u32)(r_ebx+0x75u), (u8)r_edx);
    /* 005be12d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005be130: mov dword ptr [ebx + 0x68], edx */ W32((u32)(r_ebx+0x68u), r_edx);
    /* 005be133: movzx edx, byte ptr [eax + 0x3e] */ r_edx = (u32)R8((u32)(r_eax+0x3eu));
    /* 005be137: mov byte ptr [ebx + 0x76], dl */ W8((u32)(r_ebx+0x76u), (u8)r_edx);
    /* 005be13a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005be13d: mov dword ptr [ebx + 0x6c], edx */ W32((u32)(r_ebx+0x6cu), r_edx);
    /* 005be140: movzx eax, byte ptr [eax + 0x3f] */ r_eax = (u32)R8((u32)(r_eax+0x3fu));
    /* 005be144: mov byte ptr [ebx + 0x77], al */ W8((u32)(r_ebx+0x77u), (u8)r_eax);
    /* 005be147: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005be14a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be14b: call 0x5bcab8 */ r_esp -= 4; W32(r_esp, 0x5be150u); f_005bcab8();
    /* 005be150: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005be153:; BB(0x005be153);
    /* 005be153: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5be158u); f_0082dbac();
    /* 005be158: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005be15a: call 0x5c0c2c */ r_esp -= 4; W32(r_esp, 0x5be15fu); f_005c0c2c();
    /* 005be15f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5be164u); f_0082dab0();
    /* 005be164: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005be165: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005be166: ret  */ FN_RET(0x005bded4); r_esp += 4; return;
L_005be167:; BB(0x005be167);
    /* 005be167: mov dword ptr [ebx + 0x53c], 8 */ W32((u32)(r_ebx+0x53cu), 0x8u);
    /* 005be171: jmp 0x5be02d */ goto L_005be02d;
}

