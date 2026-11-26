#include "protos.h"

void f_008390ec(void) /* sub_8390EC */
{
    FN_ENTER(0x008390ec);
    /* 008390ec: call 0x839124 */ r_esp -= 4; W32(r_esp, 0x8390f1u); f_00839124();
    /* 008390f1: mov eax, dword ptr [0xacd540] */ r_eax = R32((u32)(0xacd540u));
    /* 008390f6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008390f9: je 0x839122 */ if (fZ) goto L_00839122;
L_008390fb:; BB(0x008390fb);
    /* 008390fb: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839101: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839103: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00839105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839108: call dword ptr [ecx + 0xf4] */ { u32 t = R32((u32)(r_ecx+0xf4u)); r_esp -= 4; W32(r_esp, 0x83910eu); call_ind(t); }
    /* 0083910e: mov dword ptr [0xacd540], 0xffffffff */ W32((u32)(0xacd540u), 0xffffffffu);
    /* 00839118: mov dword ptr [0xacd550], 0 */ W32((u32)(0xacd550u), 0x0u);
L_00839122:; BB(0x00839122);
    /* 00839122: ret  */ FN_RET(0x008390ec); r_esp += 4; return;
}

void f_00839124(void) /* sub_839124 */
{
    FN_ENTER(0x00839124);
    /* 00839124: mov eax, dword ptr [0xacd560] */ r_eax = R32((u32)(0xacd560u));
    /* 00839129: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083912c: je 0x839138 */ if (fZ) goto L_00839138;
L_0083912e:; BB(0x0083912e);
    /* 0083912e: mov dword ptr [0xacd560], 0xffffffff */ W32((u32)(0xacd560u), 0xffffffffu);
L_00839138:; BB(0x00839138);
    /* 00839138: ret  */ FN_RET(0x00839124); r_esp += 4; return;
}

void f_0083913c(void) /* sub_83913C */
{
    FN_ENTER(0x0083913c);
    /* 0083913c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083913d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083913e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083913f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00839140: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00839143: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00839145: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00839147: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 0083914b: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 0083914f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00839153: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839155: je 0x8395a9 */ if (fZ) goto L_008395a9;
L_0083915b:; BB(0x0083915b);
    /* 0083915b: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0083915f: mov edx, dword ptr [eax*4 + 0xa21b40] */ r_edx = R32((u32)(r_eax*4+0xa21b40u));
    /* 00839166: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 0083916a: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0083916e: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00839171: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00839175: jne 0x839182 */ if (!fZ) goto L_00839182;
L_00839177:; BB(0x00839177);
    /* 00839177: mov eax, 1 */ r_eax = 0x1u;
    /* 0083917c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00839180: jmp 0x8391a6 */ goto L_008391a6;
L_00839182:; BB(0x00839182);
    /* 00839182: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00839186: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0083918a: mov edx, 1 */ r_edx = 0x1u;
    /* 0083918f: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00839193: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839196: je 0x8391a6 */ if (fZ) goto L_008391a6;
L_00839198:; BB(0x00839198);
    /* 00839198: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083919a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083919d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391a0: jne 0x839198 */ if (!fZ) goto L_00839198;
L_008391a2:; BB(0x008391a2);
    /* 008391a2: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
L_008391a6:; BB(0x008391a6);
    /* 008391a6: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391ac: je 0x8391b5 */ if (fZ) goto L_008391b5;
L_008391ae:; BB(0x008391ae);
    /* 008391ae: mov edi, 1 */ r_edi = 0x1u;
    /* 008391b3: jmp 0x8391b7 */ goto L_008391b7;
L_008391b5:; BB(0x008391b5);
    /* 008391b5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008391b7:; BB(0x008391b7);
    /* 008391b7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391b9: jne 0x8391c7 */ if (!fZ) goto L_008391c7;
L_008391bb:; BB(0x008391bb);
    /* 008391bb: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391c1: jne 0x8391c7 */ if (!fZ) goto L_008391c7;
L_008391c3:; BB(0x008391c3);
    /* 008391c3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008391c5: jmp 0x8391cc */ goto L_008391cc;
L_008391c7:; BB(0x008391c7);
    /* 008391c7: mov esi, 1 */ r_esi = 0x1u;
L_008391cc:; BB(0x008391cc);
    /* 008391cc: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008391cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391d1: je 0x839535 */ if (fZ) goto L_00839535;
L_008391d7:; BB(0x008391d7);
    /* 008391d7: je 0x839380 */ if (fZ) goto L_00839380;
L_008391dd:; BB(0x008391dd);
    /* 008391dd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391df: jne 0x839249 */ if (!fZ) goto L_00839249;
L_008391e1:; BB(0x008391e1);
    /* 008391e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391e3: jne 0x839249 */ if (!fZ) goto L_00839249;
L_008391e5:; BB(0x008391e5);
    /* 008391e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008391e7: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 008391eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008391ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008391ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008391ef: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 008391f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008391f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008391f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008391f6: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 008391fa: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x8391fdu); call_ind(t); }
    /* 008391fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008391ff: jne 0x839249 */ if (!fZ) goto L_00839249;
L_00839201:; BB(0x00839201);
    /* 00839201: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00839205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839207: je 0x8392bf */ if (fZ) goto L_008392bf;
L_0083920d:; BB(0x0083920d);
    /* 0083920d: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00839211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839213: je 0x839228 */ if (fZ) goto L_00839228;
L_00839215:; BB(0x00839215);
    /* 00839215: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00839219: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0083921d: sub edx, dword ptr [eax*4 + 0xa21ae0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0xa21ae0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00839224: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
L_00839228:; BB(0x00839228);
    /* 00839228: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0083922c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083922d: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 00839231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839232: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00839236: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x83923bu); f_0086b6b8();
    /* 0083923b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083923e:; BB(0x0083923e);
    /* 0083923e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839240: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00839243: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839244: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839246: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x839249u); call_ind(t); }
L_00839249:; BB(0x00839249);
    /* 00839249: mov eax, dword ptr [0xad93c0] */ r_eax = R32((u32)(0xad93c0u));
    /* 0083924e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839250: je 0x8392b3 */ if (fZ) goto L_008392b3;
L_00839252:; BB(0x00839252);
    /* 00839252: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839254: je 0x8392b3 */ if (fZ) goto L_008392b3;
L_00839256:; BB(0x00839256);
    /* 00839256: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839258: jne 0x8392b3 */ if (!fZ) goto L_008392b3;
L_0083925a:; BB(0x0083925a);
    /* 0083925a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083925c: jne 0x8392b3 */ if (!fZ) goto L_008392b3;
L_0083925e:; BB(0x0083925e);
    /* 0083925e: mov eax, dword ptr [0xad93c4] */ r_eax = R32((u32)(0xad93c4u));
    /* 00839263: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00839265: jne 0x8392b3 */ if (!fZ) goto L_008392b3;
L_00839267:; BB(0x00839267);
    /* 00839267: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0083926b: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0083926e: jbe 0x8392b3 */ if ((fC||fZ)) goto L_008392b3;
L_00839270:; BB(0x00839270);
    /* 00839270: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00839274: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00839277: jbe 0x8392b3 */ if ((fC||fZ)) goto L_008392b3;
L_00839279:; BB(0x00839279);
    /* 00839279: mov esi, dword ptr [0xacd528] */ r_esi = R32((u32)(0xacd528u));
    /* 0083927f: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 00839283: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00839287: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0083928b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083928d: shr ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0083928f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00839293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00839294: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839296: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00839298: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0083929c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083929d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083929e: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008392a0: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 008392a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008392a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008392a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008392a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008392a8: call dword ptr [edi + 0x50] */ { u32 t = R32((u32)(r_edi+0x50u)); r_esp -= 4; W32(r_esp, 0x8392abu); call_ind(t); }
    /* 008392ab: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008392af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008392b1: jne 0x8392d7 */ if (!fZ) goto L_008392d7;
L_008392b3:; BB(0x008392b3);
    /* 008392b3: mov eax, ebx */ r_eax = r_ebx;
    /* 008392b5: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008392b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008392b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008392ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008392bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008392bc: ret 0x20 */ FN_RET(0x0083913c); r_esp += 36; return;
L_008392bf:; BB(0x008392bf);
    /* 008392bf: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 008392c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008392c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008392c6: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008392ca: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8392cfu); f_0086b688();
    /* 008392cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008392d2: jmp 0x83923e */ goto L_0083923e;
L_008392d7:; BB(0x008392d7);
    /* 008392d7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008392da: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008392dc: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 008392e0: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008392e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008392e4: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 008392e6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008392e8: call dword ptr [esi + 0x34] */ { u32 t = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, 0x8392ebu); call_ind(t); }
    /* 008392eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008392ed: jbe 0x839366 */ if ((fC||fZ)) goto L_00839366;
L_008392ef:; BB(0x008392ef);
    /* 008392ef: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 008392f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008392f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008392f5: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008392f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008392f9: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 008392fb: call dword ptr [esi + 0x3c] */ { u32 t = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, 0x8392feu); call_ind(t); }
    /* 008392fe: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00839302: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00839305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839306: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00839308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00839309: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083930a: call dword ptr [esi + 0x3c] */ { u32 t = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, 0x83930du); call_ind(t); }
    /* 0083930d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00839311: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839313: je 0x83937b */ if (fZ) goto L_0083937b;
L_00839315:; BB(0x00839315);
    /* 00839315: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00839318: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083931a: je 0x83932f */ if (fZ) goto L_0083932f;
L_0083931c:; BB(0x0083931c);
    /* 0083931c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083931e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083931f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00839321: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839322: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839324: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839325: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839326: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00839327: call 0x88fd39 */ r_esp -= 4; W32(r_esp, 0x83932cu); f_0088fd39();
    /* 0083932c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0083932f:; BB(0x0083932f);
    /* 0083932f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839331: je 0x839340 */ if (fZ) goto L_00839340;
L_00839333:; BB(0x00839333);
    /* 00839333: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00839334: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00839336: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x839339u); call_ind(t); }
    /* 00839339: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_00839340:; BB(0x00839340);
    /* 00839340: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00839344: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839346: je 0x839356 */ if (fZ) goto L_00839356;
L_00839348:; BB(0x00839348);
    /* 00839348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839349: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083934b: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x83934eu); call_ind(t); }
    /* 0083934e: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
L_00839356:; BB(0x00839356);
    /* 00839356: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00839359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083935a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083935c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083935f: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x839362u); call_ind(t); }
    /* 00839362: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00839364: jb 0x8392ef */ if (fC) goto L_008392ef;
L_00839366:; BB(0x00839366);
    /* 00839366: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00839369: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083936a: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0083936c: call dword ptr [ebp + 8] */ { u32 t = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, 0x83936fu); call_ind(t); }
    /* 0083936f: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00839373: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 00839376: jmp 0x8392b3 */ goto L_008392b3;
L_0083937b:; BB(0x0083937b);
    /* 0083937b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0083937e: jmp 0x83932f */ goto L_0083932f;
L_00839380:; BB(0x00839380);
    /* 00839380: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00839384: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00839387: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0083938b: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0083938f: cmp edx, 0x31545844 */ {  u32 a = r_edx; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839395: je 0x839522 */ if (fZ) goto L_00839522;
L_0083939b:; BB(0x0083939b);
    /* 0083939b: cmp edx, 0x32545844 */ {  u32 a = r_edx; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008393a1: je 0x83950d */ if (fZ) goto L_0083950d;
L_008393a7:; BB(0x008393a7);
    /* 008393a7: cmp edx, 0x33545844 */ {  u32 a = r_edx; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008393ad: je 0x8393e7 */ if (fZ) goto L_008393e7;
L_008393af:; BB(0x008393af);
    /* 008393af: cmp edx, 0x34545844 */ {  u32 a = r_edx; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008393b5: jne 0x8393c9 */ if (!fZ) goto L_008393c9;
L_008393b7:; BB(0x008393b7);
    /* 008393b7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008393bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393bd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393c3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 008393c7: jmp 0x8393f7 */ goto L_008393f7;
L_008393c9:; BB(0x008393c9);
    /* 008393c9: cmp edx, 0x35545844 */ {  u32 a = r_edx; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008393cf: jne 0x839249 */ if (!fZ) goto L_00839249;
L_008393d5:; BB(0x008393d5);
    /* 008393d5: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008393d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393e1: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 008393e5: jmp 0x8393f7 */ goto L_008393f7;
L_008393e7:; BB(0x008393e7);
    /* 008393e7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008393eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393ed: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008393f3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_008393f7:; BB(0x008393f7);
    /* 008393f7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008393fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008393fe: lea ebp, [ebx + 8] */ r_ebp = (u32)(r_ebx+0x8u);
    /* 00839401: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00839402: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839404: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00839406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839408: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0083940c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083940d: mov ebp, dword ptr [esp + 0x84] */ r_ebp = R32((u32)(r_esp+0x84u));
    /* 00839414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00839415: mov ebp, dword ptr [esp + 0x84] */ r_ebp = R32((u32)(r_esp+0x84u));
    /* 0083941c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083941d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083941e: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x839421u); call_ind(t); }
    /* 00839421: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00839424: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839426: je 0x8394f2 */ if (fZ) goto L_008394f2;
L_0083942c:; BB(0x0083942c);
    /* 0083942c: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00839430: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00839434: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00839438: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0083943d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083943f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00839443: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00839447: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0083944b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0083944f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00839451: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00839455: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00839458: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839459: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0083945b: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x83945eu); call_ind(t); }
    /* 0083945e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00839460: jbe 0x8394e4 */ if ((fC||fZ)) goto L_008394e4;
L_00839466:; BB(0x00839466);
    /* 00839466: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 0083946a: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0083946e: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00839472: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00839476: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0083947a: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_0083947e:; BB(0x0083947e);
    /* 0083947e: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00839482: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839483: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00839484: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00839487: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839488: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0083948a: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x83948du); call_ind(t); }
    /* 0083948d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00839491: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839493: je 0x8394c8 */ if (fZ) goto L_008394c8;
L_00839495:; BB(0x00839495);
    /* 00839495: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00839499: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083949b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083949c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0083949e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083949f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008394a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008394a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008394a2: mov ecx, dword ptr [esp + 0x8c] */ r_ecx = R32((u32)(r_esp+0x8cu));
    /* 008394a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008394aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008394ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008394ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008394ad: call 0x88f838 */ r_esp -= 4; W32(r_esp, 0x8394b2u); f_0088f838();
    /* 008394b2: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008394b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008394b8: je 0x8394c8 */ if (fZ) goto L_008394c8;
L_008394ba:; BB(0x008394ba);
    /* 008394ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008394bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008394bd: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8394c0u); call_ind(t); }
    /* 008394c0: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
L_008394c8:; BB(0x008394c8);
    /* 008394c8: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008394cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008394cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008394ce: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008394d1: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x8394d4u); call_ind(t); }
    /* 008394d4: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008394d6: jb 0x83947e */ if (fC) goto L_0083947e;
L_008394d8:; BB(0x008394d8);
    /* 008394d8: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 008394dc: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 008394e0: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
L_008394e4:; BB(0x008394e4);
    /* 008394e4: mov edx, 0x15 */ r_edx = 0x15u;
    /* 008394e9: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 008394ed: jmp 0x839249 */ goto L_00839249;
L_008394f2:; BB(0x008394f2);
    /* 008394f2: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008394f7: mov edx, 0x98aac0 */ r_edx = 0x98aac0u;
    /* 008394fc: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x839501u); f_0083bf84();
L_00839501:; BB(0x00839501);
    /* 00839501: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00839503: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00839506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00839507: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00839508: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00839509: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083950a: ret 0x20 */ FN_RET(0x0083913c); r_esp += 36; return;
L_0083950d:; BB(0x0083950d);
    /* 0083950d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00839511: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00839513: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00839515: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00839517: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00839519: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0083951d: jmp 0x8393f7 */ goto L_008393f7;
L_00839522:; BB(0x00839522);
    /* 00839522: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00839526: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00839528: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083952a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083952c: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00839530: jmp 0x8393f7 */ goto L_008393f7;
L_00839535:; BB(0x00839535);
    /* 00839535: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083953b: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0083953f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839541: je 0x83954a */ if (fZ) goto L_0083954a;
L_00839543:; BB(0x00839543);
    /* 00839543: mov edx, 1 */ r_edx = 0x1u;
    /* 00839548: jmp 0x83954c */ goto L_0083954c;
L_0083954a:; BB(0x0083954a);
    /* 0083954a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0083954c:; BB(0x0083954c);
    /* 0083954c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083954e: je 0x839554 */ if (fZ) goto L_00839554;
L_00839550:; BB(0x00839550);
    /* 00839550: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00839552: jmp 0x839559 */ goto L_00839559;
L_00839554:; BB(0x00839554);
    /* 00839554: mov eax, 1 */ r_eax = 0x1u;
L_00839559:; BB(0x00839559);
    /* 00839559: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 0083955d: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 00839561: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00839565: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00839568: lea ebx, [ebx + 8] */ r_ebx = (u32)(r_ebx+0x8u);
    /* 0083956b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083956c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083956d: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00839571: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839572: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839573: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00839577: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839578: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 0083957f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839580: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00839587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839588: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00839589: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0083958d: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 00839591: call dword ptr [ecx + 0x50] */ { u32 t = R32((u32)(r_ecx+0x50u)); r_esp -= 4; W32(r_esp, 0x839594u); call_ind(t); }
    /* 00839594: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00839597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839599: je 0x8391d7 */ if (fZ) goto L_008391d7;
L_0083959f:; BB(0x0083959f);
    /* 0083959f: mov ebp, 1 */ r_ebp = 0x1u;
    /* 008395a4: jmp 0x8391d7 */ goto L_008391d7;
L_008395a9:; BB(0x008395a9);
    /* 008395a9: mov ebx, 0xacd5c0 */ r_ebx = 0xacd5c0u;
    /* 008395ae: mov eax, 0x400 */ r_eax = 0x400u;
L_008395b3:; BB(0x008395b3);
    /* 008395b3: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008395b5: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008395b8: je 0x8395e4 */ if (fZ) goto L_008395e4;
L_008395ba:; BB(0x008395ba);
    /* 008395ba: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008395bd: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008395bf: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008395c2: je 0x8395e4 */ if (fZ) goto L_008395e4;
L_008395c4:; BB(0x008395c4);
    /* 008395c4: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008395c7: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008395c9: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008395cc: je 0x8395e4 */ if (fZ) goto L_008395e4;
L_008395ce:; BB(0x008395ce);
    /* 008395ce: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008395d1: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008395d3: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008395d6: je 0x8395e4 */ if (fZ) goto L_008395e4;
L_008395d8:; BB(0x008395d8);
    /* 008395d8: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008395db: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008395de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008395e0: jg 0x8395b3 */ if ((!fZ&&fS==fO)) goto L_008395b3;
L_008395e2:; BB(0x008395e2);
    /* 008395e2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_008395e4:; BB(0x008395e4);
    /* 008395e4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008395e6: je 0x839501 */ if (fZ) goto L_00839501;
L_008395ec:; BB(0x008395ec);
    /* 008395ec: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 008395f0: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 008395f4: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 008395f6: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 008395fa: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 008395fd: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00839601: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00839604: mov dword ptr [ebx + 0x14], edi */ W32((u32)(r_ebx+0x14u), r_edi);
    /* 00839607: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0083960a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083960d: je 0x839642 */ if (fZ) goto L_00839642;
L_0083960f:; BB(0x0083960f);
    /* 0083960f: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00839613: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839616: je 0x839642 */ if (fZ) goto L_00839642;
L_00839618:; BB(0x00839618);
    /* 00839618: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0083961c: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083961f: jb 0x839636 */ if (fC) goto L_00839636;
L_00839621:; BB(0x00839621);
    /* 00839621: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00839625: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00839628: jbe 0x839642 */ if ((fC||fZ)) goto L_00839642;
L_0083962a:; BB(0x0083962a);
    /* 0083962a: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0083962e: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 00839631: jmp 0x83915b */ goto L_0083915b;
L_00839636:; BB(0x00839636);
    /* 00839636: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 0083963a: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 0083963d: jmp 0x83915b */ goto L_0083915b;
L_00839642:; BB(0x00839642);
    /* 00839642: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00839646: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0083964c: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 0083964f: jmp 0x83915b */ goto L_0083915b;
}

void f_00839654(void) /* sub_839654 */
{
    FN_ENTER(0x00839654);
    /* 00839654: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00839655: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00839656: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00839658: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083965a: je 0x8396c1 */ if (fZ) goto L_008396c1;
L_0083965c:; BB(0x0083965c);
    /* 0083965c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0083965f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00839661: mov esi, eax */ r_esi = r_eax;
L_00839663:; BB(0x00839663);
    /* 00839663: mov edx, dword ptr [esi*4 + 0xacd540] */ r_edx = R32((u32)(r_esi*4+0xacd540u));
    /* 0083966a: cmp edx, dword ptr [ebx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083966c: jne 0x83969b */ if (!fZ) goto L_0083969b;
L_0083966e:; BB(0x0083966e);
    /* 0083966e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839671: je 0x83969b */ if (fZ) goto L_0083969b;
L_00839673:; BB(0x00839673);
    /* 00839673: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839679: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083967b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083967c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083967e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083967f: call dword ptr [ecx + 0xf4] */ { u32 t = R32((u32)(r_ecx+0xf4u)); r_esp -= 4; W32(r_esp, 0x839685u); call_ind(t); }
    /* 00839685: mov dword ptr [esi*4 + 0xacd540], 0xffffffff */ W32((u32)(r_esi*4+0xacd540u), 0xffffffffu);
    /* 00839690: mov dword ptr [esi*4 + 0xacd550], 0 */ W32((u32)(r_esi*4+0xacd550u), 0x0u);
L_0083969b:; BB(0x0083969b);
    /* 0083969b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083969e: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008396a1: jb 0x839663 */ if (fC) goto L_00839663;
L_008396a3:; BB(0x008396a3);
    /* 008396a3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 008396a6: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008396a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008396ab: je 0x8396ba */ if (fZ) goto L_008396ba;
L_008396ad:; BB(0x008396ad);
    /* 008396ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008396ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008396b0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x8396b3u); call_ind(t); }
    /* 008396b3: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
L_008396ba:; BB(0x008396ba);
    /* 008396ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008396bc: call 0x839dcc */ r_esp -= 4; W32(r_esp, 0x8396c1u); f_00839dcc();
L_008396c1:; BB(0x008396c1);
    /* 008396c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008396c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008396c3: ret  */ FN_RET(0x00839654); r_esp += 4; return;
}

void f_008396c4(void) /* sub_8396C4 */
{
    FN_ENTER(0x008396c4);
    /* 008396c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008396c5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 008396c8: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 008396ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008396cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008396cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008396ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008396cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008396d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008396d1: call dword ptr [ebp + 0x40] */ { u32 t = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, 0x8396d4u); call_ind(t); }
    /* 008396d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008396d5: ret  */ FN_RET(0x008396c4); r_esp += 4; return;
}

void f_008396d8(void) /* sub_8396D8 */
{
    FN_ENTER(0x008396d8);
    /* 008396d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008396da: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 008396dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008396df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008396e0: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x8396e3u); call_ind(t); }
    /* 008396e3: ret  */ FN_RET(0x008396d8); r_esp += 4; return;
}

void f_008396e4(void) /* sub_8396E4 */
{
    FN_ENTER(0x008396e4);
    /* 008396e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008396e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008396e6: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008396e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008396eb: mov eax, dword ptr [0xacd540] */ r_eax = R32((u32)(0xacd540u));
    /* 008396f0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008396f3: je 0x83971c */ if (fZ) goto L_0083971c;
L_008396f5:; BB(0x008396f5);
    /* 008396f5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008396fb: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008396fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008396ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839701: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839702: call dword ptr [edi + 0xf4] */ { u32 t = R32((u32)(r_edi+0xf4u)); r_esp -= 4; W32(r_esp, 0x839708u); call_ind(t); }
    /* 00839708: mov dword ptr [0xacd540], 0xffffffff */ W32((u32)(0xacd540u), 0xffffffffu);
    /* 00839712: mov dword ptr [0xacd550], 0 */ W32((u32)(0xacd550u), 0x0u);
L_0083971c:; BB(0x0083971c);
    /* 0083971c: mov edi, dword ptr [0xacd528] */ r_edi = R32((u32)(0xacd528u));
    /* 00839722: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00839725: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00839727: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0083972a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0083972e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083972f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839730: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00839732: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839733: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839734: call dword ptr [ecx + 0x40] */ { u32 t = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, 0x839737u); call_ind(t); }
    /* 00839737: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0083973b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083973c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083973e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00839741: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839742: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00839744: call dword ptr [edi + 0x3c] */ { u32 t = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, 0x839747u); call_ind(t); }
    /* 00839747: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083974b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083974d: je 0x839830 */ if (fZ) goto L_00839830;
L_00839753:; BB(0x00839753);
    /* 00839753: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00839756: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839758: je 0x83980b */ if (fZ) goto L_0083980b;
L_0083975e:; BB(0x0083975e);
    /* 0083975e: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 00839762: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00839764: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00839766: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839767: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083976a: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x83976du); call_ind(t); }
    /* 0083976d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083976f: je 0x839787 */ if (fZ) goto L_00839787;
L_00839771:; BB(0x00839771);
    /* 00839771: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00839774: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00839778: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0083977a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083977c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083977d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083977e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083977f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00839780: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x839783u); call_ind(t); }
    /* 00839783: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839785: jne 0x839771 */ if (!fZ) goto L_00839771;
L_00839787:; BB(0x00839787);
    /* 00839787: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0083978a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083978b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083978d: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x839790u); call_ind(t); }
    /* 00839790: mov eax, dword ptr [0x98aa98] */ r_eax = R32((u32)(0x98aa98u));
    /* 00839795: mov edx, dword ptr [0x98aa9c] */ r_edx = R32((u32)(0x98aa9cu));
    /* 0083979b: mov ecx, dword ptr [0x98aa90] */ r_ecx = R32((u32)(0x98aa90u));
    /* 008397a1: mov edi, dword ptr [0x98aa94] */ r_edi = R32((u32)(0x98aa94u));
    /* 008397a7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008397ab: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008397ae: cmp eax, dword ptr [0xaf0350] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0350u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008397b4: mov ebp, dword ptr [ebp + 0x18] */ r_ebp = R32((u32)(r_ebp+0x18u));
    /* 008397b7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008397bb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008397bf: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 008397c3: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 008397c7: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 008397cb: jle 0x8397d5 */ if ((fZ||fS!=fO)) goto L_008397d5;
L_008397cd:; BB(0x008397cd);
    /* 008397cd: mov dword ptr [esp + 0x18], 0x280 */ W32((u32)(r_esp+0x18u), 0x280u);
L_008397d5:; BB(0x008397d5);
    /* 008397d5: mov eax, dword ptr [0xaf0354] */ r_eax = R32((u32)(0xaf0354u));
    /* 008397da: cmp eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008397de: jge 0x8397e8 */ if ((fS==fO)) goto L_008397e8;
L_008397e0:; BB(0x008397e0);
    /* 008397e0: mov dword ptr [esp + 0x1c], 0x1e0 */ W32((u32)(r_esp+0x1cu), 0x1e0u);
L_008397e8:; BB(0x008397e8);
    /* 008397e8: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008397ee: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008397f2: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 008397f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008397f7: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 008397f9: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008397fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008397ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839800: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00839804: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00839805: call dword ptr [ebp + 0x70] */ { u32 t = R32((u32)(r_ebp+0x70u)); r_esp -= 4; W32(r_esp, 0x839808u); call_ind(t); }
    /* 00839808: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
L_0083980b:; BB(0x0083980b);
    /* 0083980b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083980d: je 0x83981c */ if (fZ) goto L_0083981c;
L_0083980f:; BB(0x0083980f);
    /* 0083980f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839810: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839812: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x839815u); call_ind(t); }
    /* 00839815: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_0083981c:; BB(0x0083981c);
    /* 0083981c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00839820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839822: je 0x83982a */ if (fZ) goto L_0083982a;
L_00839824:; BB(0x00839824);
    /* 00839824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839825: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839827: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x83982au); call_ind(t); }
L_0083982a:; BB(0x0083982a);
    /* 0083982a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083982d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083982e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083982f: ret  */ FN_RET(0x008396e4); r_esp += 4; return;
L_00839830:; BB(0x00839830);
    /* 00839830: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00839833: jmp 0x83980b */ goto L_0083980b;
}

void f_00839838(void) /* sub_839838 */
{
    FN_ENTER(0x00839838);
    /* 00839838: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839839: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083983a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083983b: mov edi, edx */ r_edi = r_edx;
    /* 0083983d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0083983f: mov eax, dword ptr [0xacd568] */ r_eax = R32((u32)(0xacd568u));
    /* 00839844: mov ebx, dword ptr [eax + edi*4] */ r_ebx = R32((u32)(r_eax+r_edi*4));
    /* 00839847: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00839849: mov edx, ebx */ r_edx = r_ebx;
    /* 0083984b: call 0x839934 */ r_esp -= 4; W32(r_esp, 0x839850u); f_00839934();
    /* 00839850: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839852: jne 0x839899 */ if (!fZ) goto L_00839899;
L_00839854:; BB(0x00839854);
    /* 00839854: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 00839859: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083985b: je 0x839919 */ if (fZ) goto L_00839919;
L_00839861:; BB(0x00839861);
    /* 00839861: mov eax, dword ptr [0xacd57c] */ r_eax = R32((u32)(0xacd57cu));
    /* 00839866: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 00839869: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083986b: je 0x83988d */ if (fZ) goto L_0083988d;
L_0083986d:; BB(0x0083986d);
    /* 0083986d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083986f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00839871: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00839873: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00839875: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00839877: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00839879: add edi, dword ptr [0xacd578] */ {  u32 a = r_edi; u32 b = R32((u32)(0xacd578u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083987f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00839881: mov edx, edi */ r_edx = r_edi;
    /* 00839883: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x839888u); f_00835cfc();
    /* 00839888: jmp 0x839919 */ goto L_00839919;
L_0083988d:; BB(0x0083988d);
    /* 0083988d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083988f: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x839894u); f_00835de8();
    /* 00839894: jmp 0x839919 */ goto L_00839919;
L_00839899:; BB(0x00839899);
    /* 00839899: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083989c: jne 0x839919 */ if (!fZ) goto L_00839919;
L_0083989e:; BB(0x0083989e);
    /* 0083989e: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 008398a3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008398a5: je 0x839919 */ if (fZ) goto L_00839919;
L_008398a7:; BB(0x008398a7);
    /* 008398a7: mov ebp, dword ptr [0xacd550] */ r_ebp = R32((u32)(0xacd550u));
    /* 008398ad: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 008398b0: fild dword ptr [ebp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x18u)));
    /* 008398b3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008398b6: mov ecx, dword ptr [0xacd554] */ r_ecx = R32((u32)(0xacd554u));
    /* 008398bc: fild dword ptr [ecx + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x14u)));
    /* 008398bf: fild dword ptr [ecx + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x18u)));
    /* 008398c2: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008398c5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008398c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008398ca: fadd dword ptr [eax*4 + 0x98aaa8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98aaa8u));
    /* 008398d1: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 008398d4: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008398d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008398d9: fadd dword ptr [edi*4 + 0x98aaa8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x98aaa8u));
    /* 008398e0: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008398e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008398e5: fadd dword ptr [eax*4 + 0x98aaa8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98aaa8u));
    /* 008398ec: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 008398ee: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008398f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008398f3: fstp dword ptr [0xa21aa0] */ W_F32((u32)(0xa21aa0u), ST(0)); FPOP();
    /* 008398f9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008398fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008398fe: fadd dword ptr [eax*4 + 0x98aaa8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98aaa8u));
    /* 00839905: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00839907: fstp dword ptr [0xa21ab4] */ W_F32((u32)(0xa21ab4u), ST(0)); FPOP();
    /* 0083990d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083990f: mov edx, 0xa21aa0 */ r_edx = 0xa21aa0u;
    /* 00839914: call 0x835d6c */ r_esp -= 4; W32(r_esp, 0x839919u); f_00835d6c();
L_00839919:; BB(0x00839919);
    /* 00839919: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0083991c: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00839921: je 0x839929 */ if (fZ) goto L_00839929;
L_00839923:; BB(0x00839923);
    /* 00839923: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00839925: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00839926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00839927: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839928: ret  */ FN_RET(0x00839838); r_esp += 4; return;
L_00839929:; BB(0x00839929);
    /* 00839929: mov eax, 1 */ r_eax = 0x1u;
    /* 0083992e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083992f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00839930: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839931: ret  */ FN_RET(0x00839838); r_esp += 4; return;
}

void f_00839934(void) /* sub_839934 */
{
    FN_ENTER(0x00839934);
    /* 00839934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839935: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00839936: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00839937: mov edi, edx */ r_edi = r_edx;
    /* 00839939: mov esi, ecx */ r_esi = r_ecx;
    /* 0083993b: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 00839940: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00839942: jne 0x839977 */ if (!fZ) goto L_00839977;
L_00839944:; BB(0x00839944);
    /* 00839944: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00839946: cmp ebx, dword ptr [esi*4 + 0xacd540] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi*4+0xacd540u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083994d: je 0x839977 */ if (fZ) goto L_00839977;
L_0083994f:; BB(0x0083994f);
    /* 0083994f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839954: mov dword ptr [esi*4 + 0xacd550], edi */ W32((u32)(r_esi*4+0xacd550u), r_edi);
    /* 0083995b: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083995e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083995f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839960: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839962: call dword ptr [edx + 0xf4] */ { u32 t = R32((u32)(r_edx+0xf4u)); r_esp -= 4; W32(r_esp, 0x839968u); call_ind(t); }
    /* 00839968: mov dword ptr [esi*4 + 0xacd540], ebx */ W32((u32)(r_esi*4+0xacd540u), r_ebx);
    /* 0083996f: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00839972: call 0x83997c */ r_esp -= 4; W32(r_esp, 0x839977u); f_0083997c();
L_00839977:; BB(0x00839977);
    /* 00839977: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00839978: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00839979: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083997a: ret  */ FN_RET(0x00839934); r_esp += 4; return;
}

void f_0083997c(void) /* sub_83997C */
{
    FN_ENTER(0x0083997c);
    /* 0083997c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083997d: mov esi, ecx */ r_esi = r_ecx;
    /* 0083997f: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00839982: je 0x8399d0 */ if (fZ) goto L_008399d0;
L_00839984:; BB(0x00839984);
    /* 00839984: mov eax, 0xad46c0 */ r_eax = 0xad46c0u;
    /* 00839989: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0083998b:; BB(0x0083998b);
    /* 0083998b: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083998d: je 0x8399b4 */ if (fZ) goto L_008399b4;
L_0083998f:; BB(0x0083998f);
    /* 0083998f: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00839992: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839994: je 0x8399b4 */ if (fZ) goto L_008399b4;
L_00839996:; BB(0x00839996);
    /* 00839996: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00839999: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083999b: je 0x8399b4 */ if (fZ) goto L_008399b4;
L_0083999d:; BB(0x0083999d);
    /* 0083999d: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008399a0: cmp esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008399a2: je 0x8399b4 */ if (fZ) goto L_008399b4;
L_008399a4:; BB(0x008399a4);
    /* 008399a4: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008399a7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008399aa: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008399b0: jl 0x83998b */ if ((fS!=fO)) goto L_0083998b;
L_008399b2:; BB(0x008399b2);
    /* 008399b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008399b4:; BB(0x008399b4);
    /* 008399b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008399b6: je 0x8399d0 */ if (fZ) goto L_008399d0;
L_008399b8:; BB(0x008399b8);
    /* 008399b8: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008399be: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008399c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008399c2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008399c4: call dword ptr [ecx + 0x110] */ { u32 t = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, 0x8399cau); call_ind(t); }
    /* 008399ca: mov dword ptr [0xacd560], esi */ W32((u32)(0xacd560u), r_esi);
L_008399d0:; BB(0x008399d0);
    /* 008399d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008399d1: ret  */ FN_RET(0x0083997c); r_esp += 4; return;
}

void f_008399d4(void) /* sub_8399D4 */
{
    FN_ENTER(0x008399d4);
    /* 008399d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008399d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008399d6: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 008399db: mov dword ptr [0xacd568], ecx */ W32((u32)(0xacd568u), r_ecx);
    /* 008399e1: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 008399e3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008399e5: jne 0x839a18 */ if (!fZ) goto L_00839a18;
L_008399e7:; BB(0x008399e7);
    /* 008399e7: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008399e9: cmp esi, dword ptr [0xacd540] */ {  u32 a = r_esi; u32 b = R32((u32)(0xacd540u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008399ef: je 0x839a18 */ if (fZ) goto L_00839a18;
L_008399f1:; BB(0x008399f1);
    /* 008399f1: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008399f6: mov dword ptr [0xacd550], edi */ W32((u32)(0xacd550u), r_edi);
    /* 008399fc: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008399ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839a03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839a04: call dword ptr [edx + 0xf4] */ { u32 t = R32((u32)(r_edx+0xf4u)); r_esp -= 4; W32(r_esp, 0x839a0au); call_ind(t); }
    /* 00839a0a: mov dword ptr [0xacd540], esi */ W32((u32)(0xacd540u), r_esi);
    /* 00839a10: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00839a13: call 0x83997c */ r_esp -= 4; W32(r_esp, 0x839a18u); f_0083997c();
L_00839a18:; BB(0x00839a18);
    /* 00839a18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00839a19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839a1a: ret  */ FN_RET(0x008399d4); r_esp += 4; return;
}

void f_00839a1c(void) /* sub_839A1C */
{
    FN_ENTER(0x00839a1c);
    /* 00839a1c: mov eax, dword ptr [ecx*4 + 0xacd550] */ r_eax = R32((u32)(r_ecx*4+0xacd550u));
    /* 00839a23: ret  */ FN_RET(0x00839a1c); r_esp += 4; return;
}

void f_00839a24(void) /* sub_839A24 */
{
    FN_ENTER(0x00839a24);
    /* 00839a24: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00839a27: ret  */ FN_RET(0x00839a24); r_esp += 4; return;
}

void f_00839a28(void) /* sub_839A28 */
{
    FN_ENTER(0x00839a28);
    /* 00839a28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839a29: mov edi, ecx */ r_edi = r_ecx;
    /* 00839a2b: mov eax, dword ptr [edi*4 + 0xacd540] */ r_eax = R32((u32)(r_edi*4+0xacd540u));
    /* 00839a32: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00839a35: je 0x839a5e */ if (fZ) goto L_00839a5e;
L_00839a37:; BB(0x00839a37);
    /* 00839a37: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839a3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839a3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839a3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839a42: call dword ptr [edx + 0xf4] */ { u32 t = R32((u32)(r_edx+0xf4u)); r_esp -= 4; W32(r_esp, 0x839a48u); call_ind(t); }
    /* 00839a48: mov dword ptr [edi*4 + 0xacd540], 0xffffffff */ W32((u32)(r_edi*4+0xacd540u), 0xffffffffu);
    /* 00839a53: mov dword ptr [edi*4 + 0xacd550], 0 */ W32((u32)(r_edi*4+0xacd550u), 0x0u);
L_00839a5e:; BB(0x00839a5e);
    /* 00839a5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839a5f: ret  */ FN_RET(0x00839a28); r_esp += 4; return;
}

void f_00839a60(void) /* sub_839A60 */
{
    FN_ENTER(0x00839a60);
    /* 00839a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839a61: test ecx, 0x2000 */ {  u32 a = r_ecx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839a67: je 0x839a70 */ if (fZ) goto L_00839a70;
L_00839a69:; BB(0x00839a69);
    /* 00839a69: mov eax, 3 */ r_eax = 0x3u;
    /* 00839a6e: jmp 0x839a84 */ goto L_00839a84;
L_00839a70:; BB(0x00839a70);
    /* 00839a70: test ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839a76: je 0x839a7f */ if (fZ) goto L_00839a7f;
L_00839a78:; BB(0x00839a78);
    /* 00839a78: mov eax, 2 */ r_eax = 0x2u;
    /* 00839a7d: jmp 0x839a84 */ goto L_00839a84;
L_00839a7f:; BB(0x00839a7f);
    /* 00839a7f: mov eax, 1 */ r_eax = 0x1u;
L_00839a84:; BB(0x00839a84);
    /* 00839a84: test ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839a8a: je 0x839a93 */ if (fZ) goto L_00839a93;
L_00839a8c:; BB(0x00839a8c);
    /* 00839a8c: mov edi, 3 */ r_edi = 0x3u;
    /* 00839a91: jmp 0x839aa7 */ goto L_00839aa7;
L_00839a93:; BB(0x00839a93);
    /* 00839a93: test ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839a99: je 0x839aa2 */ if (fZ) goto L_00839aa2;
L_00839a9b:; BB(0x00839a9b);
    /* 00839a9b: mov edi, 2 */ r_edi = 0x2u;
    /* 00839aa0: jmp 0x839aa7 */ goto L_00839aa7;
L_00839aa2:; BB(0x00839aa2);
    /* 00839aa2: mov edi, 1 */ r_edi = 0x1u;
L_00839aa7:; BB(0x00839aa7);
    /* 00839aa7: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839aad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839aae: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00839ab0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839ab2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ab4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839ab5: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839abbu); call_ind(t); }
    /* 00839abb: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839ac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839ac1: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00839ac3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839ac5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ac8: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839aceu); call_ind(t); }
    /* 00839ace: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839acf: ret  */ FN_RET(0x00839a60); r_esp += 4; return;
}

void f_00839ad0(void) /* sub_839AD0 */
{
    FN_ENTER(0x00839ad0);
    /* 00839ad0: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839ad6: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839ad8: mov eax, 4 */ r_eax = 0x4u;
    /* 00839add: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ade: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839adf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839ae2: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839ae8u); call_ind(t); }
    /* 00839ae8: ret  */ FN_RET(0x00839ad0); r_esp += 4; return;
}

void f_00839aec(void) /* sub_839AEC */
{
    FN_ENTER(0x00839aec);
    /* 00839aec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839aed: mov edi, ecx */ r_edi = r_ecx;
    /* 00839aef: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00839af2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839af4: push 0xacd574 */ { u32 v = 0xacd574u; r_esp -= 4; W32(r_esp, v); }
    /* 00839af9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839afc: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x839affu); call_ind(t); }
    /* 00839aff: push 0xacd56c */ { u32 v = 0xacd56cu; r_esp -= 4; W32(r_esp, v); }
    /* 00839b04: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839b09: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839b0c: call dword ptr [edx + 0x80] */ { u32 t = R32((u32)(r_edx+0x80u)); r_esp -= 4; W32(r_esp, 0x839b12u); call_ind(t); }
    /* 00839b12: push 0xacd570 */ { u32 v = 0xacd570u; r_esp -= 4; W32(r_esp, v); }
    /* 00839b17: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839b1c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839b1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839b1f: call dword ptr [edx + 0x84] */ { u32 t = R32((u32)(r_edx+0x84u)); r_esp -= 4; W32(r_esp, 0x839b25u); call_ind(t); }
    /* 00839b25: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00839b28: cmp eax, dword ptr [0xaf0350] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0350u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839b2e: jne 0x839b54 */ if (!fZ) goto L_00839b54;
L_00839b30:; BB(0x00839b30);
    /* 00839b30: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00839b33: cmp eax, dword ptr [0xaf0354] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0354u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839b39: jne 0x839b54 */ if (!fZ) goto L_00839b54;
L_00839b3b:; BB(0x00839b3b);
    /* 00839b3b: push dword ptr [0xacd570] */ { u32 v = R32((u32)(0xacd570u)); r_esp -= 4; W32(r_esp, v); }
    /* 00839b41: push dword ptr [0xacd574] */ { u32 v = R32((u32)(0xacd574u)); r_esp -= 4; W32(r_esp, v); }
    /* 00839b47: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839b4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839b4f: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x839b52u); call_ind(t); }
    /* 00839b52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839b53: ret  */ FN_RET(0x00839aec); r_esp += 4; return;
L_00839b54:; BB(0x00839b54);
    /* 00839b54: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839b5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839b5d: push dword ptr [0xacd574] */ { u32 v = R32((u32)(0xacd574u)); r_esp -= 4; W32(r_esp, v); }
    /* 00839b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839b64: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x839b67u); call_ind(t); }
    /* 00839b67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839b68: ret  */ FN_RET(0x00839aec); r_esp += 4; return;
}

void f_00839b6c(void) /* sub_839B6C */
{
    FN_ENTER(0x00839b6c);
    /* 00839b6c: push dword ptr [0xacd570] */ { u32 v = R32((u32)(0xacd570u)); r_esp -= 4; W32(r_esp, v); }
    /* 00839b72: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839b77: push dword ptr [0xacd56c] */ { u32 v = R32((u32)(0xacd56cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00839b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839b7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839b80: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x839b83u); call_ind(t); }
    /* 00839b83: mov eax, dword ptr [0xacd570] */ r_eax = R32((u32)(0xacd570u));
    /* 00839b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839b8a: je 0x839b9c */ if (fZ) goto L_00839b9c;
L_00839b8c:; BB(0x00839b8c);
    /* 00839b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839b8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839b8f: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x839b92u); call_ind(t); }
    /* 00839b92: mov dword ptr [0xacd570], 0 */ W32((u32)(0xacd570u), 0x0u);
L_00839b9c:; BB(0x00839b9c);
    /* 00839b9c: mov eax, dword ptr [0xacd56c] */ r_eax = R32((u32)(0xacd56cu));
    /* 00839ba1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839ba3: je 0x839bb5 */ if (fZ) goto L_00839bb5;
L_00839ba5:; BB(0x00839ba5);
    /* 00839ba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ba6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839ba8: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x839babu); call_ind(t); }
    /* 00839bab: mov dword ptr [0xacd56c], 0 */ W32((u32)(0xacd56cu), 0x0u);
L_00839bb5:; BB(0x00839bb5);
    /* 00839bb5: mov eax, dword ptr [0xacd574] */ r_eax = R32((u32)(0xacd574u));
    /* 00839bba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00839bbc: je 0x839bce */ if (fZ) goto L_00839bce;
L_00839bbe:; BB(0x00839bbe);
    /* 00839bbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839bbf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839bc1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x839bc4u); call_ind(t); }
    /* 00839bc4: mov dword ptr [0xacd574], 0 */ W32((u32)(0xacd574u), 0x0u);
L_00839bce:; BB(0x00839bce);
    /* 00839bce: ret  */ FN_RET(0x00839b6c); r_esp += 4; return;
}

void f_00839bd0(void) /* sub_839BD0 */
{
    FN_ENTER(0x00839bd0);
    /* 00839bd0: call 0x83997c */ r_esp -= 4; W32(r_esp, 0x839bd5u); f_0083997c();
    /* 00839bd5: ret  */ FN_RET(0x00839bd0); r_esp += 4; return;
}

void f_00839bd8(void) /* sub_839BD8 */
{
    FN_ENTER(0x00839bd8);
    /* 00839bd8: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 00839bdd: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00839be0: mov dword ptr [0xacd578], ecx */ W32((u32)(0xacd578u), r_ecx);
    /* 00839be6: mov dword ptr [0xacd57c], edx */ W32((u32)(0xacd57cu), r_edx);
    /* 00839bec: mov dword ptr [0xacd564], eax */ W32((u32)(0xacd564u), r_eax);
    /* 00839bf1: ret  */ FN_RET(0x00839bd8); r_esp += 4; return;
}

void f_00839bf4(void) /* sub_839BF4 */
{
    FN_ENTER(0x00839bf4);
    /* 00839bf4: mov edx, dword ptr [0xacd564] */ r_edx = R32((u32)(0xacd564u));
    /* 00839bfa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00839bfc: mov dword ptr [0xacd578], eax */ W32((u32)(0xacd578u), r_eax);
    /* 00839c01: and edx, 0xfffffff7 */ {  u32 a = r_edx; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00839c04: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00839c06: mov dword ptr [0xacd57c], eax */ W32((u32)(0xacd57cu), r_eax);
    /* 00839c0b: mov dword ptr [0xacd564], edx */ W32((u32)(0xacd564u), r_edx);
    /* 00839c11: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x839c16u); f_00835de8();
    /* 00839c16: ret  */ FN_RET(0x00839bf4); r_esp += 4; return;
}

void f_00839c18(void) /* sub_839C18 */
{
    FN_ENTER(0x00839c18);
    /* 00839c18: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 00839c1d: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00839c20: mov dword ptr [0xacd564], eax */ W32((u32)(0xacd564u), r_eax);
    /* 00839c25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00839c27: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839c2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839c2d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00839c2f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00839c31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839c32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839c33: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839c39u); call_ind(t); }
    /* 00839c39: ret  */ FN_RET(0x00839c18); r_esp += 4; return;
}

void f_00839c3c(void) /* sub_839C3C */
{
    FN_ENTER(0x00839c3c);
    /* 00839c3c: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 00839c41: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00839c44: mov dword ptr [0xacd564], eax */ W32((u32)(0xacd564u), r_eax);
    /* 00839c49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00839c4b: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x839c50u); f_00835de8();
    /* 00839c50: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839c55: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839c57: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00839c59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839c5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839c5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839c5e: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839c64u); call_ind(t); }
    /* 00839c64: ret  */ FN_RET(0x00839c3c); r_esp += 4; return;
}

void f_00839c68(void) /* sub_839C68 */
{
    FN_ENTER(0x00839c68);
    /* 00839c68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839c69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00839c6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00839c6b: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00839c6e: mov edi, edx */ r_edi = r_edx;
    /* 00839c70: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00839c72: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00839c76: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839c79: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00839c80: je 0x839c9f */ if (fZ) goto L_00839c9f;
L_00839c82:; BB(0x00839c82);
    /* 00839c82: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00839c85: jl 0x839c93 */ if ((fS!=fO)) goto L_00839c93;
L_00839c87:; BB(0x00839c87);
    /* 00839c87: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00839c8a: jg 0x839c93 */ if ((!fZ&&fS==fO)) goto L_00839c93;
L_00839c8c:; BB(0x00839c8c);
    /* 00839c8c: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00839c91: jmp 0x839ca4 */ goto L_00839ca4;
L_00839c93:; BB(0x00839c93);
    /* 00839c93: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839c96: jne 0x839ca4 */ if (!fZ) goto L_00839ca4;
L_00839c98:; BB(0x00839c98);
    /* 00839c98: mov ebx, 4 */ r_ebx = 0x4u;
    /* 00839c9d: jmp 0x839ca4 */ goto L_00839ca4;
L_00839c9f:; BB(0x00839c9f);
    /* 00839c9f: mov ebx, 1 */ r_ebx = 0x1u;
L_00839ca4:; BB(0x00839ca4);
    /* 00839ca4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00839ca7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00839ca8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00839caa: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00839caf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cb1: push 0xff000000 */ { u32 v = 0xff000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00839cb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cb8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839cba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839cbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cbd: push dword ptr [esp + 0x6c] */ { u32 v = R32((u32)(r_esp+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00839cc1: push dword ptr [esp + 0x6c] */ { u32 v = R32((u32)(r_esp+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00839cc5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839cc6: push dword ptr [0xacd528] */ { u32 v = R32((u32)(0xacd528u)); r_esp -= 4; W32(r_esp, v); }
    /* 00839ccc: call 0x89095f */ r_esp -= 4; W32(r_esp, 0x839cd1u); f_0089095f();
    /* 00839cd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839cd3: jne 0x839d2d */ if (!fZ) goto L_00839d2d;
L_00839cd5:; BB(0x00839cd5);
    /* 00839cd5: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00839cd8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00839cda: je 0x839d1f */ if (fZ) goto L_00839d1f;
L_00839cdc:; BB(0x00839cdc);
    /* 00839cdc: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00839ce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ce1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ce3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00839ce5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839ce6: call dword ptr [edi + 0x38] */ { u32 t = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, 0x839ce9u); call_ind(t); }
    /* 00839ce9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00839cec: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00839cf0: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00839cf2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00839cf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839cf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839cf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839cf9: call dword ptr [ecx + 0x40] */ { u32 t = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, 0x839cfcu); call_ind(t); }
    /* 00839cfc: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00839d00: imul eax, dword ptr [esp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00839d05: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00839d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839d09: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00839d0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00839d0e: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x839d13u); f_0086b6b8();
    /* 00839d13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00839d16: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00839d19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839d1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839d1c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x839d1fu); call_ind(t); }
L_00839d1f:; BB(0x00839d1f);
    /* 00839d1f: mov eax, 1 */ r_eax = 0x1u;
    /* 00839d24: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00839d27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00839d28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00839d29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839d2a: ret 0xc */ FN_RET(0x00839c68); r_esp += 16; return;
L_00839d2d:; BB(0x00839d2d);
    /* 00839d2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00839d2f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00839d32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00839d33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00839d34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00839d35: ret 0xc */ FN_RET(0x00839c68); r_esp += 16; return;
}

void f_00839d38(void) /* sub_839D38 */
{
    FN_ENTER(0x00839d38);
    /* 00839d38: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839d3d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839d41: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839d46: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839d4cu); call_ind(t); }
    /* 00839d4c: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839d51: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d53: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839d57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839d5a: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839d60u); call_ind(t); }
    /* 00839d60: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839d65: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d67: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839d6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839d6e: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839d74u); call_ind(t); }
    /* 00839d74: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839d79: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d7b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d7d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839d7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839d82: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839d88u); call_ind(t); }
    /* 00839d88: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 00839d8d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00839d8f: jne 0x839da7 */ if (!fZ) goto L_00839da7;
L_00839d91:; BB(0x00839d91);
    /* 00839d91: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839d96: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d98: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839d9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839d9f: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839da5u); call_ind(t); }
    /* 00839da5: jmp 0x839dbc */ goto L_00839dbc;
L_00839da7:; BB(0x00839da7);
    /* 00839da7: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839dad: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839daf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00839db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839db2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00839db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839db5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839db6: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839dbcu); call_ind(t); }
L_00839dbc:; BB(0x00839dbc);
    /* 00839dbc: mov eax, dword ptr [0xacd564] */ r_eax = R32((u32)(0xacd564u));
    /* 00839dc1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00839dc4: mov dword ptr [0xacd564], eax */ W32((u32)(0xacd564u), r_eax);
    /* 00839dc9: ret  */ FN_RET(0x00839d38); r_esp += 4; return;
}

void f_00839dcc(void) /* sub_839DCC */
{
    FN_ENTER(0x00839dcc);
    /* 00839dcc: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00839dd3: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00839dd8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00839dda: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00839ddd: ret  */ FN_RET(0x00839dcc); r_esp += 4; return;
}

void f_00839de0(void) /* sub_839DE0 */
{
    FN_ENTER(0x00839de0);
    /* 00839de0: call 0x839d38 */ r_esp -= 4; W32(r_esp, 0x839de5u); f_00839d38();
    /* 00839de5: call 0x836550 */ r_esp -= 4; W32(r_esp, 0x839deau); f_00836550();
    /* 00839dea: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839def: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00839df1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839df3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839df5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839df7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839df8: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839dfeu); call_ind(t); }
    /* 00839dfe: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839e04: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839e06: mov eax, 2 */ r_eax = 0x2u;
    /* 00839e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839e10: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839e16u); call_ind(t); }
    /* 00839e16: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839e1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e1d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839e21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e24: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839e2au); call_ind(t); }
    /* 00839e2a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839e2f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e31: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839e35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e38: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839e3eu); call_ind(t); }
    /* 00839e3e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839e43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e45: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839e49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e4c: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839e52u); call_ind(t); }
    /* 00839e52: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839e57: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e59: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e5b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839e5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e60: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839e66u); call_ind(t); }
    /* 00839e66: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839e6c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839e6e: mov eax, 1 */ r_eax = 0x1u;
    /* 00839e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839e77: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839e7du); call_ind(t); }
    /* 00839e7d: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839e83: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839e85: mov eax, 2 */ r_eax = 0x2u;
    /* 00839e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839e8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839e8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839e8f: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839e95u); call_ind(t); }
    /* 00839e95: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839e9b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839e9d: mov eax, 1 */ r_eax = 0x1u;
    /* 00839ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ea3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ea6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839ea7: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839eadu); call_ind(t); }
    /* 00839ead: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839eb3: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839eb5: mov eax, 1 */ r_eax = 0x1u;
    /* 00839eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ebb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ebd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ebe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839ebf: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839ec5u); call_ind(t); }
    /* 00839ec5: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839eca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ecc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ece: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839ed0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ed2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ed3: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839ed9u); call_ind(t); }
    /* 00839ed9: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00839edf: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00839ee1: mov eax, 1 */ r_eax = 0x1u;
    /* 00839ee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839ee7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839eea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00839eeb: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839ef1u); call_ind(t); }
    /* 00839ef1: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839ef6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00839ef8: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00839efa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839efc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839eff: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839f05u); call_ind(t); }
    /* 00839f05: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839f0a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00839f0c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00839f0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839f10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839f12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839f13: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839f19u); call_ind(t); }
    /* 00839f19: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00839f1e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00839f20: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00839f22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00839f24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00839f26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00839f27: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x839f2du); call_ind(t); }
    /* 00839f2d: ret  */ FN_RET(0x00839de0); r_esp += 4; return;
}

void f_00839f30(void) /* sub_839F30 */
{
    FN_ENTER(0x00839f30);
    /* 00839f30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00839f31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00839f32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00839f34: mov dword ptr [0xacd58c], 0 */ W32((u32)(0xacd58cu), 0x0u);
    /* 00839f3e: mov dword ptr [0xacd564], edx */ W32((u32)(0xacd564u), r_edx);
    /* 00839f44: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00839f49: mov dword ptr [0xacd588], 0 */ W32((u32)(0xacd588u), 0x0u);
    /* 00839f53: mov dword ptr [0xacd540], eax */ W32((u32)(0xacd540u), r_eax);
    /* 00839f58: mov ecx, 0xacd5c0 */ r_ecx = 0xacd5c0u;
    /* 00839f5d: mov dword ptr [0xacd550], edx */ W32((u32)(0xacd550u), r_edx);
    /* 00839f63: mov esi, ecx */ r_esi = r_ecx;
    /* 00839f65: mov dword ptr [0xacd584], 0 */ W32((u32)(0xacd584u), 0x0u);
    /* 00839f6f: mov dword ptr [0xacd544], eax */ W32((u32)(0xacd544u), r_eax);
    /* 00839f74: mov dword ptr [0xacd580], 0x3f800000 */ W32((u32)(0xacd580u), 0x3f800000u);
    /* 00839f7e: mov dword ptr [0xacd554], edx */ W32((u32)(0xacd554u), r_edx);
    /* 00839f84: mov dword ptr [0xacd548], eax */ W32((u32)(0xacd548u), r_eax);
    /* 00839f89: mov dword ptr [0xacd558], edx */ W32((u32)(0xacd558u), r_edx);
    /* 00839f8f: mov dword ptr [0xacd54c], eax */ W32((u32)(0xacd54cu), r_eax);
    /* 00839f94: mov dword ptr [0xacd55c], edx */ W32((u32)(0xacd55cu), r_edx);
    /* 00839f9a: mov dword ptr [0xacd560], eax */ W32((u32)(0xacd560u), r_eax);
    /* 00839f9f: mov dword ptr [0xacd568], edx */ W32((u32)(0xacd568u), r_edx);
    /* 00839fa5: mov dword ptr [0xacd56c], edx */ W32((u32)(0xacd56cu), r_edx);
    /* 00839fab: mov dword ptr [0xacd570], edx */ W32((u32)(0xacd570u), r_edx);
    /* 00839fb1: mov dword ptr [0xacd574], edx */ W32((u32)(0xacd574u), r_edx);
    /* 00839fb7: mov eax, 0x400 */ r_eax = 0x400u;
    /* 00839fbc: mov dword ptr [0xacd578], edx */ W32((u32)(0xacd578u), r_edx);
    /* 00839fc2: mov ebx, eax */ r_ebx = r_eax;
    /* 00839fc4: mov dword ptr [0xacd57c], edx */ W32((u32)(0xacd57cu), r_edx);
    /* 00839fca: mov dword ptr [0xacd5b8], 0 */ W32((u32)(0xacd5b8u), 0x0u);
    /* 00839fd4: mov dword ptr [0xacd5b4], 0 */ W32((u32)(0xacd5b4u), 0x0u);
    /* 00839fde: mov dword ptr [0xacd5b0], 0 */ W32((u32)(0xacd5b0u), 0x0u);
    /* 00839fe8: mov dword ptr [0xacd5ac], 0 */ W32((u32)(0xacd5acu), 0x0u);
    /* 00839ff2: mov dword ptr [0xacd5a4], 0 */ W32((u32)(0xacd5a4u), 0x0u);
    /* 00839ffc: mov dword ptr [0xacd5a0], 0 */ W32((u32)(0xacd5a0u), 0x0u);
    /* 0083a006: mov dword ptr [0xacd59c], 0 */ W32((u32)(0xacd59cu), 0x0u);
    /* 0083a010: mov dword ptr [0xacd598], 0 */ W32((u32)(0xacd598u), 0x0u);
    /* 0083a01a: mov dword ptr [0xacd590], 0 */ W32((u32)(0xacd590u), 0x0u);
    /* 0083a024: mov dword ptr [0xacd5bc], 0x3f800000 */ W32((u32)(0xacd5bcu), 0x3f800000u);
    /* 0083a02e: mov dword ptr [0xacd5a8], 0x3f800000 */ W32((u32)(0xacd5a8u), 0x3f800000u);
    /* 0083a038: mov dword ptr [0xacd594], 0x3f800000 */ W32((u32)(0xacd594u), 0x3f800000u);
L_0083a042:; BB(0x0083a042);
    /* 0083a042: mov ecx, esi */ r_ecx = r_esi;
    /* 0083a044: call 0x839dcc */ r_esp -= 4; W32(r_esp, 0x83a049u); f_00839dcc();
    /* 0083a049: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083a04c: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0083a04f: jne 0x83a042 */ if (!fZ) goto L_0083a042;
L_0083a051:; BB(0x0083a051);
    /* 0083a051: mov edx, 0xad46c0 */ r_edx = 0xad46c0u;
    /* 0083a056: mov eax, 0x100 */ r_eax = 0x100u;
L_0083a05b:; BB(0x0083a05b);
    /* 0083a05b: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0083a060: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0083a062: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083a064: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0083a067: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 0083a06a: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0083a06d: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 0083a070: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 0083a073: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0083a076: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 0083a079: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 0083a07c: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0083a07f: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0083a082: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 0083a085: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083a088: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0083a08b: jne 0x83a05b */ if (!fZ) goto L_0083a05b;
L_0083a08d:; BB(0x0083a08d);
    /* 0083a08d: mov edx, 0xad52c0 */ r_edx = 0xad52c0u;
    /* 0083a092: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083a094:; BB(0x0083a094);
    /* 0083a094: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083a096: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0083a098: mov byte ptr [edx + 1], cl */ W8((u32)(r_edx+0x1u), (u8)r_ecx);
    /* 0083a09b: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0083a09e: mov byte ptr [edx + 3], cl */ W8((u32)(r_edx+0x3u), (u8)r_ecx);
    /* 0083a0a1: mov byte ptr [edx + 4], cl */ W8((u32)(r_edx+0x4u), (u8)r_ecx);
    /* 0083a0a4: mov byte ptr [edx + 5], cl */ W8((u32)(r_edx+0x5u), (u8)r_ecx);
    /* 0083a0a7: mov byte ptr [edx + 6], cl */ W8((u32)(r_edx+0x6u), (u8)r_ecx);
    /* 0083a0aa: mov byte ptr [edx + 7], cl */ W8((u32)(r_edx+0x7u), (u8)r_ecx);
    /* 0083a0ad: mov byte ptr [edx + 8], cl */ W8((u32)(r_edx+0x8u), (u8)r_ecx);
    /* 0083a0b0: mov byte ptr [edx + 9], cl */ W8((u32)(r_edx+0x9u), (u8)r_ecx);
    /* 0083a0b3: mov byte ptr [edx + 0xa], cl */ W8((u32)(r_edx+0xau), (u8)r_ecx);
    /* 0083a0b6: mov byte ptr [edx + 0xb], cl */ W8((u32)(r_edx+0xbu), (u8)r_ecx);
    /* 0083a0b9: mov byte ptr [edx + 0xc], cl */ W8((u32)(r_edx+0xcu), (u8)r_ecx);
    /* 0083a0bc: mov byte ptr [edx + 0xd], cl */ W8((u32)(r_edx+0xdu), (u8)r_ecx);
    /* 0083a0bf: mov byte ptr [edx + 0xe], cl */ W8((u32)(r_edx+0xeu), (u8)r_ecx);
    /* 0083a0c2: mov byte ptr [edx + 0xf], cl */ W8((u32)(r_edx+0xfu), (u8)r_ecx);
    /* 0083a0c5: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083a0c8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083a0cb: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083a0d0: jb 0x83a094 */ if (fC) goto L_0083a094;
L_0083a0d2:; BB(0x0083a0d2);
    /* 0083a0d2: call 0x839de0 */ r_esp -= 4; W32(r_esp, 0x83a0d7u); f_00839de0();
    /* 0083a0d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083a0d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083a0d9: ret  */ FN_RET(0x00839f30); r_esp += 4; return;
}

