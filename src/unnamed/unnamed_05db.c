#include "protos.h"

void f_005db164(void) /* sub_5DB164 */
{
    FN_ENTER(0x005db164);
    /* 005db164: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005db165: movzx ebx, byte ptr [ecx + 0xf3] */ r_ebx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005db16c: mov eax, 0x52 */ r_eax = 0x52u;
    /* 005db171: cmp ebx, 0x52 */ {  u32 a = r_ebx; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db174: jl 0x5db178 */ if ((fS!=fO)) goto L_005db178;
L_005db176:; BB(0x005db176);
    /* 005db176: mov ebx, eax */ r_ebx = r_eax;
L_005db178:; BB(0x005db178);
    /* 005db178: cmp ebx, 0x52 */ {  u32 a = r_ebx; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db17b: jg 0x5db191 */ if ((!fZ&&fS==fO)) goto L_005db191;
L_005db17d:; BB(0x005db17d);
    /* 005db17d: mov ecx, dword ptr [0xa8da3c] */ r_ecx = R32((u32)(0xa8da3cu));
    /* 005db183: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005db185: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5db188u); call_ind(t); }
    /* 005db188: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005db18b: movsx eax, byte ptr [edx + ebx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ebx));
    /* 005db18f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db190: ret  */ FN_RET(0x005db164); r_esp += 4; return;
L_005db191:; BB(0x005db191);
    /* 005db191: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005db193: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db194: ret  */ FN_RET(0x005db164); r_esp += 4; return;
}

void f_005db198(void) /* sub_5DB198 */
{
    FN_ENTER(0x005db198);
    /* 005db198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005db199: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db19c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005db19e: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005db1a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db1a6: call 0x5e4b64 */ r_esp -= 4; W32(r_esp, 0x5db1abu); f_005e4b64();
    /* 005db1ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db1ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db1ae: je 0x5db1c0 */ if (fZ) goto L_005db1c0;
L_005db1b0:; BB(0x005db1b0);
    /* 005db1b0: movzx eax, byte ptr [eax + 0xe] */ r_eax = (u32)R8((u32)(r_eax+0xeu));
    /* 005db1b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db1b5: lea ecx, [ebx + 0x1bc] */ r_ecx = (u32)(r_ebx+0x1bcu);
    /* 005db1bb: call 0x5dbff8 */ r_esp -= 4; W32(r_esp, 0x5db1c0u); f_005dbff8();
L_005db1c0:; BB(0x005db1c0);
    /* 005db1c0: movsx eax, byte ptr [ebx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0xf1u));
    /* 005db1c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db1ca: je 0x5db1fa */ if (fZ) goto L_005db1fa;
L_005db1cc:; BB(0x005db1cc);
    /* 005db1cc: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 005db1d2: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005db1d4: jne 0x5db1ee */ if (!fZ) goto L_005db1ee;
L_005db1d6:; BB(0x005db1d6);
    /* 005db1d6: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005db1dc: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005db1df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db1e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db1e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db1e4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005db1e6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5db1ebu); f_00814298();
    /* 005db1eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005db1ee:; BB(0x005db1ee);
    /* 005db1ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005db1f0: call 0x5d8e90 */ r_esp -= 4; W32(r_esp, 0x5db1f5u); f_005d8e90();
    /* 005db1f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db1f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db1f9: ret  */ FN_RET(0x005db198); r_esp += 4; return;
L_005db1fa:; BB(0x005db1fa);
    /* 005db1fa: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005db1fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005db1fe: call dword ptr [eax + 0xb4] */ { u32 t = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, 0x5db204u); call_ind(t); }
    /* 005db204: mov eax, dword ptr [ebx + 0x1b0] */ r_eax = R32((u32)(r_ebx+0x1b0u));
    /* 005db20a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005db20c: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005db20f: mov dword ptr [ebx + 0x1b0], eax */ W32((u32)(r_ebx+0x1b0u), r_eax);
    /* 005db215: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005db217: call dword ptr [edx + 0xb0] */ { u32 t = R32((u32)(r_edx+0xb0u)); r_esp -= 4; W32(r_esp, 0x5db21du); call_ind(t); }
    /* 005db21d: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005db223: add ecx, 0x538 */ {  u32 a = r_ecx; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db229: call 0x6abb88 */ r_esp -= 4; W32(r_esp, 0x5db22eu); f_006abb88();
    /* 005db22e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005db232: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005db235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db237: lea ecx, [ebx + 0x1bc] */ r_ecx = (u32)(r_ebx+0x1bcu);
    /* 005db23d: mov edi, eax */ r_edi = r_eax;
    /* 005db23f: mov esi, ecx */ r_esi = r_ecx;
L_005db241:; BB(0x005db241);
    /* 005db241: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005db242: mov ecx, esi */ r_ecx = r_esi;
    /* 005db244: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x5db249u); f_005dbc08();
    /* 005db249: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db24c: je 0x5db277 */ if (fZ) goto L_005db277;
L_005db24e:; BB(0x005db24e);
    /* 005db24e: movzx edx, byte ptr [ebx + 0xf4] */ r_edx = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005db255: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005db25b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005db25e: mov byte ptr [eax + ecx + 0x528], dl */ W8((u32)(r_eax+r_ecx+0x528u), (u8)r_edx);
    /* 005db265: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005db26b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db26c: add ecx, 0x538 */ {  u32 a = r_ecx; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db272: call 0x6abb30 */ r_esp -= 4; W32(r_esp, 0x5db277u); f_006abb30();
L_005db277:; BB(0x005db277);
    /* 005db277: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005db27a: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db27d: jl 0x5db241 */ if ((fS!=fO)) goto L_005db241;
L_005db27f:; BB(0x005db27f);
    /* 005db27f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005db283: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 005db286: jmp 0x5db1cc */ goto L_005db1cc;
}

void f_005db28c(void) /* sub_5DB28C */
{
    FN_ENTER(0x005db28c);
    /* 005db28c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005db28d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005db28e: mov edi, ecx */ r_edi = r_ecx;
    /* 005db290: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 005db295: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db29c: mov ebx, edx */ r_ebx = r_edx;
    /* 005db29e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db2a0: je 0x5db3d7 */ if (fZ) goto L_005db3d7;
L_005db2a6:; BB(0x005db2a6);
    /* 005db2a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db2a9: je 0x5db371 */ if (fZ) goto L_005db371;
L_005db2af:; BB(0x005db2af);
    /* 005db2af: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db2b2: je 0x5db34a */ if (fZ) goto L_005db34a;
L_005db2b8:; BB(0x005db2b8);
    /* 005db2b8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db2bb: je 0x5db315 */ if (fZ) goto L_005db315;
L_005db2bd:; BB(0x005db2bd);
    /* 005db2bd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db2c0: jne 0x5db2e9 */ if (!fZ) goto L_005db2e9;
L_005db2c2:; BB(0x005db2c2);
    /* 005db2c2: mov ecx, edi */ r_ecx = r_edi;
    /* 005db2c4: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db2c9u); f_005db164();
    /* 005db2c9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db2cc: jl 0x5db2d7 */ if ((fS!=fO)) goto L_005db2d7;
L_005db2ce:; BB(0x005db2ce);
    /* 005db2ce: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db2d5: jmp 0x5db33a */ goto L_005db33a;
L_005db2d7:; BB(0x005db2d7);
    /* 005db2d7: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 005db2d9: mov ecx, edi */ r_ecx = r_edi;
    /* 005db2db: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db2e0u); f_005c4fec();
    /* 005db2e0: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db2e7: jmp 0x5db33a */ goto L_005db33a;
L_005db2e9:; BB(0x005db2e9);
    /* 005db2e9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db2ec: jne 0x5db33a */ if (!fZ) goto L_005db33a;
L_005db2ee:; BB(0x005db2ee);
    /* 005db2ee: mov ecx, edi */ r_ecx = r_edi;
    /* 005db2f0: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db2f5u); f_005db164();
    /* 005db2f5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db2f8: jl 0x5db303 */ if ((fS!=fO)) goto L_005db303;
L_005db2fa:; BB(0x005db2fa);
    /* 005db2fa: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db301: jmp 0x5db33a */ goto L_005db33a;
L_005db303:; BB(0x005db303);
    /* 005db303: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005db305: mov ecx, edi */ r_ecx = r_edi;
    /* 005db307: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db30cu); f_005c4fec();
    /* 005db30c: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db313: jmp 0x5db33a */ goto L_005db33a;
L_005db315:; BB(0x005db315);
    /* 005db315: mov ecx, edi */ r_ecx = r_edi;
    /* 005db317: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db31cu); f_005db164();
    /* 005db31c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db31f: jl 0x5db32a */ if ((fS!=fO)) goto L_005db32a;
L_005db321:; BB(0x005db321);
    /* 005db321: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db328: jmp 0x5db33a */ goto L_005db33a;
L_005db32a:; BB(0x005db32a);
    /* 005db32a: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 005db32c: mov ecx, edi */ r_ecx = r_edi;
    /* 005db32e: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db333u); f_005c4fec();
    /* 005db333: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
L_005db33a:; BB(0x005db33a);
    /* 005db33a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db33c: je 0x5db345 */ if (fZ) goto L_005db345;
L_005db33e:; BB(0x005db33e);
    /* 005db33e: mov ecx, edi */ r_ecx = r_edi;
    /* 005db340: call 0x5db198 */ r_esp -= 4; W32(r_esp, 0x5db345u); f_005db198();
L_005db345:; BB(0x005db345);
    /* 005db345: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db346: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db347: ret 4 */ FN_RET(0x005db28c); r_esp += 8; return;
L_005db34a:; BB(0x005db34a);
    /* 005db34a: mov ecx, edi */ r_ecx = r_edi;
    /* 005db34c: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db351u); f_005db164();
    /* 005db351: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db354: jl 0x5db35f */ if ((fS!=fO)) goto L_005db35f;
L_005db356:; BB(0x005db356);
    /* 005db356: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db35d: jmp 0x5db33a */ goto L_005db33a;
L_005db35f:; BB(0x005db35f);
    /* 005db35f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005db361: mov ecx, edi */ r_ecx = r_edi;
    /* 005db363: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db368u); f_005c4fec();
    /* 005db368: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db36f: jmp 0x5db33a */ goto L_005db33a;
L_005db371:; BB(0x005db371);
    /* 005db371: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005db377: movzx edx, byte ptr [eax + 0x960] */ r_edx = (u32)R8((u32)(r_eax+0x960u));
    /* 005db37e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005db381: je 0x5db3aa */ if (fZ) goto L_005db3aa;
L_005db383:; BB(0x005db383);
    /* 005db383: mov ecx, edi */ r_ecx = r_edi;
    /* 005db385: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db38au); f_005db164();
    /* 005db38a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db38d: jl 0x5db398 */ if ((fS!=fO)) goto L_005db398;
L_005db38f:; BB(0x005db38f);
    /* 005db38f: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db396: jmp 0x5db33a */ goto L_005db33a;
L_005db398:; BB(0x005db398);
    /* 005db398: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005db39a: mov ecx, edi */ r_ecx = r_edi;
    /* 005db39c: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db3a1u); f_005c4fec();
    /* 005db3a1: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db3a8: jmp 0x5db33a */ goto L_005db33a;
L_005db3aa:; BB(0x005db3aa);
    /* 005db3aa: mov ecx, edi */ r_ecx = r_edi;
    /* 005db3ac: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db3b1u); f_005db164();
    /* 005db3b1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db3b4: jl 0x5db3c2 */ if ((fS!=fO)) goto L_005db3c2;
L_005db3b6:; BB(0x005db3b6);
    /* 005db3b6: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db3bd: jmp 0x5db33a */ goto L_005db33a;
L_005db3c2:; BB(0x005db3c2);
    /* 005db3c2: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 005db3c4: mov ecx, edi */ r_ecx = r_edi;
    /* 005db3c6: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db3cbu); f_005c4fec();
    /* 005db3cb: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db3d2: jmp 0x5db33a */ goto L_005db33a;
L_005db3d7:; BB(0x005db3d7);
    /* 005db3d7: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005db3dd: movzx edx, byte ptr [eax + 0x960] */ r_edx = (u32)R8((u32)(r_eax+0x960u));
    /* 005db3e4: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005db3e7: je 0x5db416 */ if (fZ) goto L_005db416;
L_005db3e9:; BB(0x005db3e9);
    /* 005db3e9: mov ecx, edi */ r_ecx = r_edi;
    /* 005db3eb: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db3f0u); f_005db164();
    /* 005db3f0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db3f3: jl 0x5db401 */ if ((fS!=fO)) goto L_005db401;
L_005db3f5:; BB(0x005db3f5);
    /* 005db3f5: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db3fc: jmp 0x5db33a */ goto L_005db33a;
L_005db401:; BB(0x005db401);
    /* 005db401: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 005db403: mov ecx, edi */ r_ecx = r_edi;
    /* 005db405: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db40au); f_005c4fec();
    /* 005db40a: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db411: jmp 0x5db33a */ goto L_005db33a;
L_005db416:; BB(0x005db416);
    /* 005db416: mov ecx, edi */ r_ecx = r_edi;
    /* 005db418: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db41du); f_005db164();
    /* 005db41d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db420: jl 0x5db42e */ if ((fS!=fO)) goto L_005db42e;
L_005db422:; BB(0x005db422);
    /* 005db422: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db429: jmp 0x5db33a */ goto L_005db33a;
L_005db42e:; BB(0x005db42e);
    /* 005db42e: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005db430: mov ecx, edi */ r_ecx = r_edi;
    /* 005db432: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db437u); f_005c4fec();
    /* 005db437: movzx edx, byte ptr [edi + 0xf3] */ r_edx = (u32)R8((u32)(r_edi+0xf3u));
    /* 005db43e: jmp 0x5db33a */ goto L_005db33a;
}

void f_005db444(void) /* sub_5DB444 */
{
    FN_ENTER(0x005db444);
    /* 005db444: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005db44a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db44c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005db44e: je 0x5db463 */ if (fZ) goto L_005db463;
L_005db450:; BB(0x005db450);
    /* 005db450: mov edx, dword ptr [edx + 0x33c] */ r_edx = R32((u32)(r_edx+0x33cu));
    /* 005db456: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005db45c: je 0x5db463 */ if (fZ) goto L_005db463;
L_005db45e:; BB(0x005db45e);
    /* 005db45e: mov eax, 1 */ r_eax = 0x1u;
L_005db463:; BB(0x005db463);
    /* 005db463: ret  */ FN_RET(0x005db444); r_esp += 4; return;
}

void f_005db470(void) /* sub_5DB470 */
{
    FN_ENTER(0x005db470);
    /* 005db470: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005db471: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005db472: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005db476: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005db47a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db47c: je 0x5db591 */ if (fZ) goto L_005db591;
L_005db482:; BB(0x005db482);
    /* 005db482: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db484: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 005db48a: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5db48fu); f_0069792c();
    /* 005db48f: mov esi, eax */ r_esi = r_eax;
    /* 005db491: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db493: je 0x5db591 */ if (fZ) goto L_005db591;
L_005db499:; BB(0x005db499);
    /* 005db499: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db49b: je 0x5db647 */ if (fZ) goto L_005db647;
L_005db4a1:; BB(0x005db4a1);
    /* 005db4a1: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db4a4: je 0x5db62f */ if (fZ) goto L_005db62f;
L_005db4aa:; BB(0x005db4aa);
    /* 005db4aa: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db4ad: je 0x5db596 */ if (fZ) goto L_005db596;
L_005db4b3:; BB(0x005db4b3);
    /* 005db4b3: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db4b6: je 0x5db585 */ if (fZ) goto L_005db585;
L_005db4bc:; BB(0x005db4bc);
    /* 005db4bc: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db4bf: jne 0x5db4fc */ if (!fZ) goto L_005db4fc;
L_005db4c1:; BB(0x005db4c1);
    /* 005db4c1: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005db4c8: cmp edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db4cb: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db4d1:; BB(0x005db4d1);
    /* 005db4d1: movsx edx, word ptr [esi + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x1bcu));
    /* 005db4d8: cmp edx, 0xb4 */ {  u32 a = r_edx; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db4de: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db4e4:; BB(0x005db4e4);
    /* 005db4e4: movsx eax, word ptr [esi + 0x1be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1beu));
    /* 005db4eb: cmp eax, 0x6e */ {  u32 a = r_eax; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db4ee: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db4f4:; BB(0x005db4f4);
    /* 005db4f4: mov eax, 1 */ r_eax = 0x1u;
    /* 005db4f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db4fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db4fb: ret  */ FN_RET(0x005db470); r_esp += 4; return;
L_005db4fc:; BB(0x005db4fc);
    /* 005db4fc: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db4ff: jne 0x5db591 */ if (!fZ) goto L_005db591;
L_005db505:; BB(0x005db505);
    /* 005db505: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db50a: movsx ecx, word ptr [esi + 0x1c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c0u));
    /* 005db511: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db513: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005db516: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db519: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db51b: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 005db51e: cmp edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db521: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db523:; BB(0x005db523);
    /* 005db523: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db528: movsx ecx, word ptr [esi + 0x1c2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c2u));
    /* 005db52f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db531: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005db534: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db537: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db539: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 005db53c: cmp edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db53f: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db541:; BB(0x005db541);
    /* 005db541: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db546: movsx ecx, word ptr [esi + 0x1c4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c4u));
    /* 005db54d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db54f: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005db552: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db555: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db557: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 005db55a: cmp edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db55d: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db55f:; BB(0x005db55f);
    /* 005db55f: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db564: movsx ecx, word ptr [esi + 0x1c6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x1c6u));
    /* 005db56b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db56d: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005db570: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db573: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db575: movsx esi, dx */ r_esi = (u32)(i32)(i16)(u16)r_edx;
    /* 005db578: cmp esi, 0x23 */ {  u32 a = r_esi; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db57b: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db57d:; BB(0x005db57d);
    /* 005db57d: mov eax, 1 */ r_eax = 0x1u;
    /* 005db582: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db583: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db584: ret  */ FN_RET(0x005db470); r_esp += 4; return;
L_005db585:; BB(0x005db585);
    /* 005db585: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005db58c: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db58f: jge 0x5db57d */ if ((fS==fO)) goto L_005db57d;
L_005db591:; BB(0x005db591);
    /* 005db591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005db593: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db594: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db595: ret  */ FN_RET(0x005db470); r_esp += 4; return;
L_005db596:; BB(0x005db596);
    /* 005db596: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db59b: movsx edi, word ptr [esi + 0x1c0] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x1c0u));
    /* 005db5a2: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db5a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005db5a6: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005db5a9: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db5ac: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db5ae: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005db5b1: cmp edx, 0x46 */ {  u32 a = r_edx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db5b4: jl 0x5db5bb */ if ((fS!=fO)) goto L_005db5bb;
L_005db5b6:; BB(0x005db5b6);
    /* 005db5b6: mov ecx, 1 */ r_ecx = 0x1u;
L_005db5bb:; BB(0x005db5bb);
    /* 005db5bb: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db5c0: movsx edi, word ptr [esi + 0x1c2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x1c2u));
    /* 005db5c7: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db5c9: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005db5cc: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db5cf: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db5d1: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005db5d4: cmp edx, 0x46 */ {  u32 a = r_edx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db5d7: jl 0x5db5dc */ if ((fS!=fO)) goto L_005db5dc;
L_005db5d9:; BB(0x005db5d9);
    /* 005db5d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_005db5dc:; BB(0x005db5dc);
    /* 005db5dc: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db5e1: movsx edi, word ptr [esi + 0x1c4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x1c4u));
    /* 005db5e8: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db5ea: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005db5ed: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db5f0: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db5f2: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005db5f5: cmp edx, 0x46 */ {  u32 a = r_edx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db5f8: jl 0x5db5fd */ if ((fS!=fO)) goto L_005db5fd;
L_005db5fa:; BB(0x005db5fa);
    /* 005db5fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_005db5fd:; BB(0x005db5fd);
    /* 005db5fd: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005db602: movsx esi, word ptr [esi + 0x1c6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x1c6u));
    /* 005db609: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005db60b: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005db60e: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005db611: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005db613: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 005db616: cmp edi, 0x46 */ {  u32 a = r_edi; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db619: jl 0x5db61e */ if ((fS!=fO)) goto L_005db61e;
L_005db61b:; BB(0x005db61b);
    /* 005db61b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_005db61e:; BB(0x005db61e);
    /* 005db61e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db621: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db627:; BB(0x005db627);
    /* 005db627: mov eax, 1 */ r_eax = 0x1u;
    /* 005db62c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db62d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db62e: ret  */ FN_RET(0x005db470); r_esp += 4; return;
L_005db62f:; BB(0x005db62f);
    /* 005db62f: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005db636: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db639: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db63f:; BB(0x005db63f);
    /* 005db63f: mov eax, 1 */ r_eax = 0x1u;
    /* 005db644: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db645: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db646: ret  */ FN_RET(0x005db470); r_esp += 4; return;
L_005db647:; BB(0x005db647);
    /* 005db647: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005db64e: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db651: jl 0x5db591 */ if ((fS!=fO)) goto L_005db591;
L_005db657:; BB(0x005db657);
    /* 005db657: mov eax, 1 */ r_eax = 0x1u;
    /* 005db65c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db65d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db65e: ret  */ FN_RET(0x005db470); r_esp += 4; return;
}

void f_005db660(void) /* sub_5DB660 */
{
    FN_ENTER(0x005db660);
    /* 005db660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db661: mov ebp, esp */ r_ebp = r_esp;
    /* 005db663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db665: push 0x8da9b0 */ { u32 v = 0x8da9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db66a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db671: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005db678: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db67b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005db67e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005db681: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005db684: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005db687: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005db68a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db68c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005db68f:; BB(0x005db68f);
    /* 005db68f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db692: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db695: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005db698: mov edx, dword ptr [eax + edx*4 + 0x1cc] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1ccu));
    /* 005db69f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6a1: je 0x5db701 */ if (fZ) goto L_005db701;
L_005db6a3:; BB(0x005db6a3);
    /* 005db6a3: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005db6a6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005db6a9: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 005db6ac: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db6af: mov ecx, dword ptr [edx + ecx*2 + 0x1cc] */ r_ecx = R32((u32)(r_edx+r_ecx*2+0x1ccu));
    /* 005db6b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6b8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005db6bb: je 0x5db701 */ if (fZ) goto L_005db701;
L_005db6bd:; BB(0x005db6bd);
    /* 005db6bd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005db6c4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005db6c6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5db6cbu); f_005caba4();
    /* 005db6cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db6cc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005db6cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6d1: je 0x5db6fa */ if (fZ) goto L_005db6fa;
L_005db6d3:; BB(0x005db6d3);
    /* 005db6d3: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005db6da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db6e1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db6e4: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005db6e6: push 0x5dd34c */ { u32 v = 0x5dd34cu; r_esp -= 4; W32(r_esp, v); }
    /* 005db6eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db6ec: mov ecx, eax */ r_ecx = r_eax;
    /* 005db6ee: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5db6f3u); f_005e5b88();
    /* 005db6f3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005db6fa:; BB(0x005db6fa);
    /* 005db6fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005db701:; BB(0x005db701);
    /* 005db701: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005db704: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005db707: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005db70a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005db70d: jl 0x5db68f */ if ((fS!=fO)) goto L_005db68f;
L_005db70f:; BB(0x005db70f);
    /* 005db70f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005db712: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005db715: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005db718: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db71b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005db722: mov esp, ebp */ r_esp = r_ebp;
    /* 005db724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db725: ret  */ FN_RET(0x005db660); r_esp += 4; return;
}

void f_005db728(void) /* sub_5DB728 */
{
    FN_ENTER(0x005db728);
    /* 005db728: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005db729: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005db72a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005db72e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005db72f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 005db733: movzx ebx, byte ptr [esi + 1] */ r_ebx = (u32)R8((u32)(r_esi+0x1u));
    /* 005db737: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5db73cu); f_005c425c();
    /* 005db73c: mov byte ptr [esi + 1], bl */ W8((u32)(r_esi+0x1u), (u8)r_ebx);
    /* 005db73f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db740: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db741: ret  */ FN_RET(0x005db728); r_esp += 4; return;
}

void f_005db744(void) /* sub_5DB744 */
{
    FN_ENTER(0x005db744);
    /* 005db744: mov dword ptr [0xa8da28], 0x3f800000 */ W32((u32)(0xa8da28u), 0x3f800000u);
    /* 005db74e: mov dword ptr [0xa8da2c], 0x41000000 */ W32((u32)(0xa8da2cu), 0x41000000u);
    /* 005db758: mov dword ptr [0xa8da30], 0x3fc00000 */ W32((u32)(0xa8da30u), 0x3fc00000u);
    /* 005db762: ret  */ FN_RET(0x005db744); r_esp += 4; return;
}

void f_005db764(void) /* sub_5DB764 */
{
    FN_ENTER(0x005db764);
    /* 005db764: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005db76a: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005db770: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005db772: je 0x5db77a */ if (fZ) goto L_005db77a;
L_005db774:; BB(0x005db774);
    /* 005db774: mov eax, 1 */ r_eax = 0x1u;
    /* 005db779: ret  */ FN_RET(0x005db764); r_esp += 4; return;
L_005db77a:; BB(0x005db77a);
    /* 005db77a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005db77c: je 0x5db784 */ if (fZ) goto L_005db784;
L_005db77e:; BB(0x005db77e);
    /* 005db77e: mov eax, 1 */ r_eax = 0x1u;
    /* 005db783: ret  */ FN_RET(0x005db764); r_esp += 4; return;
L_005db784:; BB(0x005db784);
    /* 005db784: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005db786: ret  */ FN_RET(0x005db764); r_esp += 4; return;
}

void f_005db788(void) /* sub_5DB788 */
{
    FN_ENTER(0x005db788);
    /* 005db788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db789: mov ebp, esp */ r_ebp = r_esp;
    /* 005db78b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db78d: push 0x8da9f2 */ { u32 v = 0x8da9f2u; r_esp -= 4; W32(r_esp, v); }
    /* 005db792: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db799: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005db7a0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db7a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005db7a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005db7a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005db7ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005db7af: push 0x92cba0 */ { u32 v = 0x92cba0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db7b4: call 0x5b9be8 */ r_esp -= 4; W32(r_esp, 0x5db7b9u); f_005b9be8();
    /* 005db7b9: mov edx, eax */ r_edx = r_eax;
    /* 005db7bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db7be: mov dword ptr [0xa8da34], edx */ W32((u32)(0xa8da34u), r_edx);
    /* 005db7c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005db7c6:; BB(0x005db7c6);
    /* 005db7c6: cmp ecx, 0x53 */ {  u32 a = r_ecx; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db7c9: je 0x5dbaa7 */ if (fZ) goto L_005dbaa7;
L_005db7cf:; BB(0x005db7cf);
    /* 005db7cf: cmp ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db7d2: je 0x5db926 */ if (fZ) goto L_005db926;
L_005db7d8:; BB(0x005db7d8);
    /* 005db7d8: cmp ecx, 0x55 */ {  u32 a = r_ecx; u32 b = 0x55u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db7db: jne 0x5db87f */ if (!fZ) goto L_005db87f;
L_005db7e1:; BB(0x005db7e1);
    /* 005db7e1: mov eax, 0x92ca20 */ r_eax = 0x92ca20u;
    /* 005db7e6: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005db7e8: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005db7eb: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 005db7ee: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 005db7f0: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 005db7f3: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 005db7f6: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 005db7f9: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 005db7fc: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 005db7ff: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 005db802: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 005db805: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 005db808: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 005db80b: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 005db80e: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 005db811: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 005db814: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 005db817: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 005db81a: mov ebx, dword ptr [eax + 0x24] */ r_ebx = R32((u32)(r_eax+0x24u));
    /* 005db81d: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 005db820: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 005db823: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 005db826: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 005db829: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 005db82c: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 005db82f: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 005db832: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 005db835: mov dword ptr [edx + 0x34], ebx */ W32((u32)(r_edx+0x34u), r_ebx);
    /* 005db838: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 005db83b: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 005db83e: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 005db841: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 005db844: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 005db847: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 005db84a: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 005db84d: mov dword ptr [edx + 0x44], ebx */ W32((u32)(r_edx+0x44u), r_ebx);
    /* 005db850: mov ebx, dword ptr [eax + 0x48] */ r_ebx = R32((u32)(r_eax+0x48u));
    /* 005db853: mov dword ptr [edx + 0x48], ebx */ W32((u32)(r_edx+0x48u), r_ebx);
    /* 005db856: mov ebx, dword ptr [eax + 0x4c] */ r_ebx = R32((u32)(r_eax+0x4cu));
    /* 005db859: mov dword ptr [edx + 0x4c], ebx */ W32((u32)(r_edx+0x4cu), r_ebx);
    /* 005db85c: mov ebx, dword ptr [eax + 0x50] */ r_ebx = R32((u32)(r_eax+0x50u));
    /* 005db85f: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 005db862: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 005db865: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 005db868: mov ebx, dword ptr [eax + 0x58] */ r_ebx = R32((u32)(r_eax+0x58u));
    /* 005db86b: mov dword ptr [edx + 0x58], ebx */ W32((u32)(r_edx+0x58u), r_ebx);
    /* 005db86e: mov ebx, dword ptr [eax + 0x5c] */ r_ebx = R32((u32)(r_eax+0x5cu));
    /* 005db871: mov dword ptr [edx + 0x5c], ebx */ W32((u32)(r_edx+0x5cu), r_ebx);
    /* 005db874: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 005db877: mov dword ptr [edx + 0x60], ebx */ W32((u32)(r_edx+0x60u), r_ebx);
    /* 005db87a: jmp 0x5db9bf */ goto L_005db9bf;
L_005db87f:; BB(0x005db87f);
    /* 005db87f: cmp ecx, 0x56 */ {  u32 a = r_ecx; u32 b = 0x56u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db882: jne 0x5db9bf */ if (!fZ) goto L_005db9bf;
L_005db888:; BB(0x005db888);
    /* 005db888: mov eax, 0x92caa0 */ r_eax = 0x92caa0u;
    /* 005db88d: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005db88f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005db892: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 005db895: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 005db897: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 005db89a: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 005db89d: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 005db8a0: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 005db8a3: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 005db8a6: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 005db8a9: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 005db8ac: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 005db8af: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 005db8b2: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 005db8b5: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 005db8b8: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 005db8bb: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 005db8be: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 005db8c1: mov ebx, dword ptr [eax + 0x24] */ r_ebx = R32((u32)(r_eax+0x24u));
    /* 005db8c4: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 005db8c7: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 005db8ca: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 005db8cd: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 005db8d0: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 005db8d3: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 005db8d6: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 005db8d9: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 005db8dc: mov dword ptr [edx + 0x34], ebx */ W32((u32)(r_edx+0x34u), r_ebx);
    /* 005db8df: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 005db8e2: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 005db8e5: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 005db8e8: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 005db8eb: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 005db8ee: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 005db8f1: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 005db8f4: mov dword ptr [edx + 0x44], ebx */ W32((u32)(r_edx+0x44u), r_ebx);
    /* 005db8f7: mov ebx, dword ptr [eax + 0x48] */ r_ebx = R32((u32)(r_eax+0x48u));
    /* 005db8fa: mov dword ptr [edx + 0x48], ebx */ W32((u32)(r_edx+0x48u), r_ebx);
    /* 005db8fd: mov ebx, dword ptr [eax + 0x4c] */ r_ebx = R32((u32)(r_eax+0x4cu));
    /* 005db900: mov dword ptr [edx + 0x4c], ebx */ W32((u32)(r_edx+0x4cu), r_ebx);
    /* 005db903: mov ebx, dword ptr [eax + 0x50] */ r_ebx = R32((u32)(r_eax+0x50u));
    /* 005db906: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 005db909: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 005db90c: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 005db90f: mov ebx, dword ptr [eax + 0x58] */ r_ebx = R32((u32)(r_eax+0x58u));
    /* 005db912: mov dword ptr [edx + 0x58], ebx */ W32((u32)(r_edx+0x58u), r_ebx);
    /* 005db915: mov ebx, dword ptr [eax + 0x5c] */ r_ebx = R32((u32)(r_eax+0x5cu));
    /* 005db918: mov dword ptr [edx + 0x5c], ebx */ W32((u32)(r_edx+0x5cu), r_ebx);
    /* 005db91b: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 005db91e: mov dword ptr [edx + 0x60], ebx */ W32((u32)(r_edx+0x60u), r_ebx);
    /* 005db921: jmp 0x5db9bf */ goto L_005db9bf;
L_005db926:; BB(0x005db926);
    /* 005db926: mov eax, 0x92c9a0 */ r_eax = 0x92c9a0u;
    /* 005db92b: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005db92d: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005db930: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 005db933: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 005db935: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 005db938: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 005db93b: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 005db93e: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 005db941: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 005db944: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 005db947: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 005db94a: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 005db94d: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 005db950: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 005db953: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 005db956: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 005db959: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 005db95c: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 005db95f: mov ebx, dword ptr [eax + 0x24] */ r_ebx = R32((u32)(r_eax+0x24u));
    /* 005db962: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 005db965: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 005db968: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 005db96b: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 005db96e: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 005db971: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 005db974: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 005db977: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 005db97a: mov dword ptr [edx + 0x34], ebx */ W32((u32)(r_edx+0x34u), r_ebx);
    /* 005db97d: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 005db980: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 005db983: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 005db986: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 005db989: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 005db98c: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 005db98f: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 005db992: mov dword ptr [edx + 0x44], ebx */ W32((u32)(r_edx+0x44u), r_ebx);
    /* 005db995: mov ebx, dword ptr [eax + 0x48] */ r_ebx = R32((u32)(r_eax+0x48u));
    /* 005db998: mov dword ptr [edx + 0x48], ebx */ W32((u32)(r_edx+0x48u), r_ebx);
    /* 005db99b: mov ebx, dword ptr [eax + 0x4c] */ r_ebx = R32((u32)(r_eax+0x4cu));
    /* 005db99e: mov dword ptr [edx + 0x4c], ebx */ W32((u32)(r_edx+0x4cu), r_ebx);
    /* 005db9a1: mov ebx, dword ptr [eax + 0x50] */ r_ebx = R32((u32)(r_eax+0x50u));
    /* 005db9a4: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 005db9a7: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 005db9aa: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 005db9ad: mov ebx, dword ptr [eax + 0x58] */ r_ebx = R32((u32)(r_eax+0x58u));
    /* 005db9b0: mov dword ptr [edx + 0x58], ebx */ W32((u32)(r_edx+0x58u), r_ebx);
    /* 005db9b3: mov ebx, dword ptr [eax + 0x5c] */ r_ebx = R32((u32)(r_eax+0x5cu));
    /* 005db9b6: mov dword ptr [edx + 0x5c], ebx */ W32((u32)(r_edx+0x5cu), r_ebx);
    /* 005db9b9: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 005db9bc: mov dword ptr [edx + 0x60], ebx */ W32((u32)(r_edx+0x60u), r_ebx);
L_005db9bf:; BB(0x005db9bf);
    /* 005db9bf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db9c2: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005db9c5: cmp ecx, 0x5a */ {  u32 a = r_ecx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db9c8: jl 0x5db7c6 */ if ((fS!=fO)) goto L_005db7c6;
L_005db9ce:; BB(0x005db9ce);
    /* 005db9ce: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5db9d3u); f_007a61a4();
    /* 005db9d3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db9d6: je 0x5dba54 */ if (fZ) goto L_005dba54;
L_005db9d8:; BB(0x005db9d8);
    /* 005db9d8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005db9df: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005db9e1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5db9e6u); f_008581c5();
    /* 005db9e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db9e7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005db9ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db9ec: je 0x5dba50 */ if (fZ) goto L_005dba50;
L_005db9ee:; BB(0x005db9ee);
    /* 005db9ee: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005db9f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db9fc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005db9ff: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005dba04: push 0x92cbb4 */ { u32 v = 0x92cbb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dba09: call 0x5d7150 */ r_esp -= 4; W32(r_esp, 0x5dba0eu); f_005d7150();
    /* 005dba0e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dba11: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005dba18:; BB(0x005dba18);
    /* 005dba18: mov dword ptr [0xa8da3c], ecx */ W32((u32)(0xa8da3cu), r_ecx);
    /* 005dba1e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005dba25:; BB(0x005dba25);
    /* 005dba25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dba27: je 0x5dba39 */ if (fZ) goto L_005dba39;
L_005dba29:; BB(0x005dba29);
    /* 005dba29: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005dba2b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5dba2eu); call_ind(t); }
    /* 005dba2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dba30: je 0x5dba39 */ if (fZ) goto L_005dba39;
L_005dba32:; BB(0x005dba32);
    /* 005dba32: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005dba34: mov dword ptr [0xa8da38], eax */ W32((u32)(0xa8da38u), r_eax);
L_005dba39:; BB(0x005dba39);
    /* 005dba39: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dba3c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dba3f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dba42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dba45: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dba4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dba4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dba4f: ret  */ FN_RET(0x005db788); r_esp += 4; return;
L_005dba50:; BB(0x005dba50);
    /* 005dba50: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dba52: jmp 0x5dba18 */ goto L_005dba18;
L_005dba54:; BB(0x005dba54);
    /* 005dba54: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dba5b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dba5d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5dba62u); f_008581c5();
    /* 005dba62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dba63: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dba66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dba68: je 0x5dbaa3 */ if (fZ) goto L_005dbaa3;
L_005dba6a:; BB(0x005dba6a);
    /* 005dba6a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dba71: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005dba78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dba7b: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005dba80: push 0x92cbb4 */ { u32 v = 0x92cbb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dba85: call 0x5d7268 */ r_esp -= 4; W32(r_esp, 0x5dba8au); f_005d7268();
    /* 005dba8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dba8d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dba94:; BB(0x005dba94);
    /* 005dba94: mov dword ptr [0xa8da3c], ecx */ W32((u32)(0xa8da3cu), r_ecx);
    /* 005dba9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dbaa1: jmp 0x5dba25 */ goto L_005dba25;
L_005dbaa3:; BB(0x005dbaa3);
    /* 005dbaa3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbaa5: jmp 0x5dba94 */ goto L_005dba94;
L_005dbaa7:; BB(0x005dbaa7);
    /* 005dbaa7: mov eax, 0x92c920 */ r_eax = 0x92c920u;
    /* 005dbaac: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005dbaae: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005dbab1: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 005dbab4: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 005dbab6: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 005dbab9: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 005dbabc: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 005dbabf: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 005dbac2: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 005dbac5: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 005dbac8: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 005dbacb: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 005dbace: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 005dbad1: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 005dbad4: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 005dbad7: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 005dbada: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 005dbadd: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 005dbae0: mov ebx, dword ptr [eax + 0x24] */ r_ebx = R32((u32)(r_eax+0x24u));
    /* 005dbae3: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 005dbae6: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 005dbae9: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 005dbaec: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 005dbaef: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 005dbaf2: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 005dbaf5: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 005dbaf8: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 005dbafb: mov dword ptr [edx + 0x34], ebx */ W32((u32)(r_edx+0x34u), r_ebx);
    /* 005dbafe: mov ebx, dword ptr [eax + 0x38] */ r_ebx = R32((u32)(r_eax+0x38u));
    /* 005dbb01: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 005dbb04: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 005dbb07: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 005dbb0a: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 005dbb0d: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 005dbb10: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 005dbb13: mov dword ptr [edx + 0x44], ebx */ W32((u32)(r_edx+0x44u), r_ebx);
    /* 005dbb16: mov ebx, dword ptr [eax + 0x48] */ r_ebx = R32((u32)(r_eax+0x48u));
    /* 005dbb19: mov dword ptr [edx + 0x48], ebx */ W32((u32)(r_edx+0x48u), r_ebx);
    /* 005dbb1c: mov ebx, dword ptr [eax + 0x4c] */ r_ebx = R32((u32)(r_eax+0x4cu));
    /* 005dbb1f: mov dword ptr [edx + 0x4c], ebx */ W32((u32)(r_edx+0x4cu), r_ebx);
    /* 005dbb22: mov ebx, dword ptr [eax + 0x50] */ r_ebx = R32((u32)(r_eax+0x50u));
    /* 005dbb25: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 005dbb28: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 005dbb2b: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 005dbb2e: mov ebx, dword ptr [eax + 0x58] */ r_ebx = R32((u32)(r_eax+0x58u));
    /* 005dbb31: mov dword ptr [edx + 0x58], ebx */ W32((u32)(r_edx+0x58u), r_ebx);
    /* 005dbb34: mov ebx, dword ptr [eax + 0x5c] */ r_ebx = R32((u32)(r_eax+0x5cu));
    /* 005dbb37: mov dword ptr [edx + 0x5c], ebx */ W32((u32)(r_edx+0x5cu), r_ebx);
    /* 005dbb3a: mov ebx, dword ptr [eax + 0x60] */ r_ebx = R32((u32)(r_eax+0x60u));
    /* 005dbb3d: mov dword ptr [edx + 0x60], ebx */ W32((u32)(r_edx+0x60u), r_ebx);
    /* 005dbb40: jmp 0x5db9bf */ goto L_005db9bf;
}

void f_005dbb48(void) /* sub_5DBB48 */
{
    FN_ENTER(0x005dbb48);
    /* 005dbb48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb49: movsx eax, byte ptr [ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005dbb4c: mov edx, eax */ r_edx = r_eax;
    /* 005dbb4e: and edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005dbb54: cmp edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbb5a: je 0x5dbbe1 */ if (fZ) goto L_005dbbe1;
L_005dbb60:; BB(0x005dbb60);
    /* 005dbb60: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dbb62: je 0x5dbb8f */ if (fZ) goto L_005dbb8f;
L_005dbb64:; BB(0x005dbb64);
    /* 005dbb64: movsx edx, word ptr [ecx + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 005dbb68: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005dbb6c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbb6e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbb71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbb73: jne 0x5dbb7b */ if (!fZ) goto L_005dbb7b;
L_005dbb75:; BB(0x005dbb75);
    /* 005dbb75: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 005dbb79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbb7a: ret  */ FN_RET(0x005dbb48); r_esp += 4; return;
L_005dbb7b:; BB(0x005dbb7b);
    /* 005dbb7b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbb7d: jl 0x5dbb85 */ if ((fS!=fO)) goto L_005dbb85;
L_005dbb7f:; BB(0x005dbb7f);
    /* 005dbb7f: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 005dbb83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbb84: ret  */ FN_RET(0x005dbb48); r_esp += 4; return;
L_005dbb85:; BB(0x005dbb85);
    /* 005dbb85: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 005dbb89: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 005dbb8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbb8e: ret  */ FN_RET(0x005dbb48); r_esp += 4; return;
L_005dbb8f:; BB(0x005dbb8f);
    /* 005dbb8f: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dbb91: je 0x5dbbbb */ if (fZ) goto L_005dbbbb;
L_005dbb93:; BB(0x005dbb93);
    /* 005dbb93: movzx ebx, word ptr [ecx + 2] */ r_ebx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005dbb97: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 005dbb9b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbb9d: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 005dbba0: movsx ebx, word ptr [ecx + 6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x6u));
    /* 005dbba4: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbba6: jl 0x5dbbae */ if ((fS!=fO)) goto L_005dbbae;
L_005dbba8:; BB(0x005dbba8);
    /* 005dbba8: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005dbbac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbbad: ret  */ FN_RET(0x005dbb48); r_esp += 4; return;
L_005dbbae:; BB(0x005dbbae);
    /* 005dbbae: mov word ptr [ecx + 2], bx */ W16((u32)(r_ecx+0x2u), (u16)r_ebx);
    /* 005dbbb2: and eax, 0xf7 */ {  u32 a = r_eax; u32 b = 0xf7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbbb7: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 005dbbb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbbba: ret  */ FN_RET(0x005dbb48); r_esp += 4; return;
L_005dbbbb:; BB(0x005dbbbb);
    /* 005dbbbb: movzx ebx, word ptr [ecx + 2] */ r_ebx = (u32)R16((u32)(r_ecx+0x2u));
    /* 005dbbbf: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 005dbbc3: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbbc5: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 005dbbc8: movsx ebx, word ptr [ecx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 005dbbcc: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbbce: jl 0x5dbbd6 */ if ((fS!=fO)) goto L_005dbbd6;
L_005dbbd0:; BB(0x005dbbd0);
    /* 005dbbd0: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005dbbd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbbd5: ret  */ FN_RET(0x005dbb48); r_esp += 4; return;
L_005dbbd6:; BB(0x005dbbd6);
    /* 005dbbd6: mov word ptr [ecx + 2], bx */ W16((u32)(r_ecx+0x2u), (u16)r_ebx);
    /* 005dbbda: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbbdf: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
L_005dbbe1:; BB(0x005dbbe1);
    /* 005dbbe1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbbe2: ret  */ FN_RET(0x005dbb48); r_esp += 4; return;
}

void f_005dbbe4(void) /* sub_5DBBE4 */
{
    FN_ENTER(0x005dbbe4);
    /* 005dbbe4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005dbbe7: and eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbbeb: ret 4 */ FN_RET(0x005dbbe4); r_esp += 8; return;
}

void f_005dbbf0(void) /* sub_5DBBF0 */
{
    FN_ENTER(0x005dbbf0);
    /* 005dbbf0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dbbf4: or dword ptr [ecx + 4], eax */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbbf7: ret 4 */ FN_RET(0x005dbbf0); r_esp += 8; return;
}

void f_005dbbfc(void) /* sub_5DBBFC */
{
    FN_ENTER(0x005dbbfc);
    /* 005dbbfc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dbc00: not eax */ r_eax = ~r_eax;
    /* 005dbc02: and dword ptr [ecx + 4], eax */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbc05: ret 4 */ FN_RET(0x005dbbfc); r_esp += 8; return;
}

void f_005dbc08(void) /* sub_5DBC08 */
{
    FN_ENTER(0x005dbc08);
    /* 005dbc08: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dbc0b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dbc0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc11: je 0x5dbd12 */ if (fZ) goto L_005dbd12;
L_005dbc17:; BB(0x005dbc17);
    /* 005dbc17: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc1a: jne 0x5dbc38 */ if (!fZ) goto L_005dbc38;
L_005dbc1c:; BB(0x005dbc1c);
    /* 005dbc1c: movzx eax, byte ptr [ecx + 0xc] */ r_eax = (u32)R8((u32)(r_ecx+0xcu));
    /* 005dbc20: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dbc22: je 0x5dbd1a */ if (fZ) goto L_005dbd1a;
L_005dbc28:; BB(0x005dbc28);
    /* 005dbc28: movzx eax, byte ptr [ecx + 0xd] */ r_eax = (u32)R8((u32)(r_ecx+0xdu));
    /* 005dbc2c: and eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dbc2f: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005dbc32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbc35: ret 4 */ FN_RET(0x005dbc08); r_esp += 8; return;
L_005dbc38:; BB(0x005dbc38);
    /* 005dbc38: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc3b: jne 0x5dbd1a */ if (!fZ) goto L_005dbd1a;
L_005dbc41:; BB(0x005dbc41);
    /* 005dbc41: movzx eax, byte ptr [ecx + 0xc] */ r_eax = (u32)R8((u32)(r_ecx+0xcu));
    /* 005dbc45: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dbc47: je 0x5dbd1a */ if (fZ) goto L_005dbd1a;
L_005dbc4d:; BB(0x005dbc4d);
    /* 005dbc4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dbc4f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005dbc52: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 005dbc57: movzx edx, byte ptr [ecx + 0xd] */ r_edx = (u32)R8((u32)(r_ecx+0xdu));
    /* 005dbc5b: mov ecx, edx */ r_ecx = r_edx;
    /* 005dbc5d: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbc60: mov eax, 1 */ r_eax = 0x1u;
    /* 005dbc65: mov byte ptr [esp + ecx], al */ W8((u32)(r_esp+r_ecx), (u8)r_eax);
    /* 005dbc68: mov ecx, edx */ r_ecx = r_edx;
    /* 005dbc6a: and ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbc6d: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005dbc70: and edx, 0xc0 */ {  u32 a = r_edx; u32 b = 0xc0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005dbc76: mov byte ptr [esp + ecx], al */ W8((u32)(r_esp+r_ecx), (u8)r_eax);
    /* 005dbc79: movzx ecx, byte ptr [esp] */ r_ecx = (u32)R8((u32)(r_esp));
    /* 005dbc7d: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005dbc80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dbc82: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc85: je 0x5dbc92 */ if (fZ) goto L_005dbc92;
L_005dbc87:; BB(0x005dbc87);
    /* 005dbc87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc89: je 0x5dbd32 */ if (fZ) goto L_005dbd32;
L_005dbc8f:; BB(0x005dbc8f);
    /* 005dbc8f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005dbc92:; BB(0x005dbc92);
    /* 005dbc92: movzx ecx, byte ptr [esp + 1] */ r_ecx = (u32)R8((u32)(r_esp+0x1u));
    /* 005dbc97: mov eax, 1 */ r_eax = 0x1u;
    /* 005dbc9c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc9f: je 0x5dbcaf */ if (fZ) goto L_005dbcaf;
L_005dbca1:; BB(0x005dbca1);
    /* 005dbca1: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 005dbca4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbca6: je 0x5dbd32 */ if (fZ) goto L_005dbd32;
L_005dbcac:; BB(0x005dbcac);
    /* 005dbcac: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005dbcaf:; BB(0x005dbcaf);
    /* 005dbcaf: movzx ecx, byte ptr [esp + 2] */ r_ecx = (u32)R8((u32)(r_esp+0x2u));
    /* 005dbcb4: mov eax, 2 */ r_eax = 0x2u;
    /* 005dbcb9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcbc: je 0x5dbcc8 */ if (fZ) goto L_005dbcc8;
L_005dbcbe:; BB(0x005dbcbe);
    /* 005dbcbe: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 005dbcc1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcc3: je 0x5dbd32 */ if (fZ) goto L_005dbd32;
L_005dbcc5:; BB(0x005dbcc5);
    /* 005dbcc5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005dbcc8:; BB(0x005dbcc8);
    /* 005dbcc8: movzx ecx, byte ptr [esp + 3] */ r_ecx = (u32)R8((u32)(r_esp+0x3u));
    /* 005dbccd: mov eax, 3 */ r_eax = 0x3u;
    /* 005dbcd2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcd5: je 0x5dbce1 */ if (fZ) goto L_005dbce1;
L_005dbcd7:; BB(0x005dbcd7);
    /* 005dbcd7: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 005dbcda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcdc: je 0x5dbd32 */ if (fZ) goto L_005dbd32;
L_005dbcde:; BB(0x005dbcde);
    /* 005dbcde: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005dbce1:; BB(0x005dbce1);
    /* 005dbce1: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 005dbce6: mov eax, 4 */ r_eax = 0x4u;
    /* 005dbceb: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcee: je 0x5dbcfa */ if (fZ) goto L_005dbcfa;
L_005dbcf0:; BB(0x005dbcf0);
    /* 005dbcf0: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 005dbcf3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcf5: je 0x5dbd32 */ if (fZ) goto L_005dbd32;
L_005dbcf7:; BB(0x005dbcf7);
    /* 005dbcf7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005dbcfa:; BB(0x005dbcfa);
    /* 005dbcfa: movzx ecx, byte ptr [esp + 5] */ r_ecx = (u32)R8((u32)(r_esp+0x5u));
    /* 005dbcff: mov eax, 5 */ r_eax = 0x5u;
    /* 005dbd04: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbd07: je 0x5dbd1a */ if (fZ) goto L_005dbd1a;
L_005dbd09:; BB(0x005dbd09);
    /* 005dbd09: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 005dbd0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbd0e: je 0x5dbd32 */ if (fZ) goto L_005dbd32;
L_005dbd10:; BB(0x005dbd10);
    /* 005dbd10: jmp 0x5dbd1a */ goto L_005dbd1a;
L_005dbd12:; BB(0x005dbd12);
    /* 005dbd12: movzx eax, byte ptr [ecx + 0xc] */ r_eax = (u32)R8((u32)(r_ecx+0xcu));
    /* 005dbd16: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dbd18: jne 0x5dbd25 */ if (!fZ) goto L_005dbd25;
L_005dbd1a:; BB(0x005dbd1a);
    /* 005dbd1a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005dbd1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbd22: ret 4 */ FN_RET(0x005dbc08); r_esp += 8; return;
L_005dbd25:; BB(0x005dbd25);
    /* 005dbd25: movzx eax, byte ptr [ecx + 0xd] */ r_eax = (u32)R8((u32)(r_ecx+0xdu));
    /* 005dbd29: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbd2f: ret 4 */ FN_RET(0x005dbc08); r_esp += 8; return;
L_005dbd32:; BB(0x005dbd32);
    /* 005dbd32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbd35: ret 4 */ FN_RET(0x005dbc08); r_esp += 8; return;
}

void f_005dbd38(void) /* sub_5DBD38 */
{
    FN_ENTER(0x005dbd38);
    /* 005dbd38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd3c: mov edi, ecx */ r_edi = r_ecx;
    /* 005dbd3e: movsx ebp, word ptr [edi + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 005dbd42: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 005dbd47: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbd4c: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbd4e: mov eax, ebp */ r_eax = r_ebp;
    /* 005dbd50: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005dbd53: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005dbd56: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbd58: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005dbd5b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd5d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd5f: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 005dbd62: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd64: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd66: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd68: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd6a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbd6d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbd6f: jle 0x5dbdac */ if ((fZ||fS!=fO)) goto L_005dbdac;
L_005dbd71:; BB(0x005dbd71);
    /* 005dbd71: mov ecx, edi */ r_ecx = r_edi;
    /* 005dbd73: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5dbd78u); f_005dbdb8();
    /* 005dbd78: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbd7b: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbd80: jge 0x5dbd8f */ if ((fS==fO)) goto L_005dbd8f;
L_005dbd82:; BB(0x005dbd82);
    /* 005dbd82: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbd84: mov word ptr [edi + 4], bp */ W16((u32)(r_edi+0x4u), (u16)r_ebp);
    /* 005dbd88: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbd89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbd8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbd8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbd8c: ret 4 */ FN_RET(0x005dbd38); r_esp += 8; return;
L_005dbd8f:; BB(0x005dbd8f);
    /* 005dbd8f: jne 0x5dbda5 */ if (!fZ) goto L_005dbda5;
L_005dbd91:; BB(0x005dbd91);
    /* 005dbd91: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbd93: add ebx, 0x63 */ {  u32 a = r_ebx; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbd96: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 005dbd99: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbd9b: jl 0x5dbd9f */ if ((fS!=fO)) goto L_005dbd9f;
L_005dbd9d:; BB(0x005dbd9d);
    /* 005dbd9d: mov eax, esi */ r_eax = r_esi;
L_005dbd9f:; BB(0x005dbd9f);
    /* 005dbd9f: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbda1: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
L_005dbda5:; BB(0x005dbda5);
    /* 005dbda5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbda6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbda7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbda8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbda9: ret 4 */ FN_RET(0x005dbd38); r_esp += 8; return;
L_005dbdac:; BB(0x005dbdac);
    /* 005dbdac: jge 0x5dbda5 */ if ((fS==fO)) goto L_005dbda5;
L_005dbdae:; BB(0x005dbdae);
    /* 005dbdae: mov eax, esi */ r_eax = r_esi;
    /* 005dbdb0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbdb2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbdb4: jge 0x5dbda5 */ if ((fS==fO)) goto L_005dbda5;
L_005dbdb6:; BB(0x005dbdb6);
    /* 005dbdb6: jmp 0x5dbd71 */ goto L_005dbd71;
}

void f_005dbdb8(void) /* sub_5DBDB8 */
{
    FN_ENTER(0x005dbdb8);
    /* 005dbdb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbdb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbdba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbdbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbdbc: mov esi, ecx */ r_esi = r_ecx;
    /* 005dbdbe: movsx ebx, word ptr [esi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 005dbdc2: movsx edi, word ptr [esi + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 005dbdc6: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbdcb: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbdcd: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005dbdd0: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbdd5: mov ebp, edx */ r_ebp = r_edx;
    /* 005dbdd7: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbdd9: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbdde: sar ebp, 5 */ { u32 c = (5u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005dbde1: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005dbde3: mov ebx, edx */ r_ebx = r_edx;
    /* 005dbde5: sar ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005dbde8: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005dbdeb: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbded: movsx edi, word ptr [esi + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 005dbdf1: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbdf3: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbdf8: movsx esi, word ptr [esi + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 005dbdfc: mov ecx, edx */ r_ecx = r_edx;
    /* 005dbdfe: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbe00: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005dbe03: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005dbe06: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbe08: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005dbe0b: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005dbe0e: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbe10: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005dbe12: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dbe14: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbe16: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 005dbe19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbe1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbe1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbe1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbe1d: ret  */ FN_RET(0x005dbdb8); r_esp += 4; return;
}

void f_005dbe20(void) /* sub_5DBE20 */
{
    FN_ENTER(0x005dbe20);
    /* 005dbe20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe24: mov edi, ecx */ r_edi = r_ecx;
    /* 005dbe26: movsx ebp, word ptr [edi + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 005dbe2a: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 005dbe2f: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbe34: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbe36: mov eax, ebp */ r_eax = r_ebp;
    /* 005dbe38: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005dbe3b: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005dbe3e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbe40: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005dbe43: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe45: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe47: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 005dbe4a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe4e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe50: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe52: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbe55: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbe57: jle 0x5dbe94 */ if ((fZ||fS!=fO)) goto L_005dbe94;
L_005dbe59:; BB(0x005dbe59);
    /* 005dbe59: mov ecx, edi */ r_ecx = r_edi;
    /* 005dbe5b: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5dbe60u); f_005dbdb8();
    /* 005dbe60: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbe63: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbe68: jge 0x5dbe77 */ if ((fS==fO)) goto L_005dbe77;
L_005dbe6a:; BB(0x005dbe6a);
    /* 005dbe6a: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbe6c: mov word ptr [edi + 6], bp */ W16((u32)(r_edi+0x6u), (u16)r_ebp);
    /* 005dbe70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbe71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbe72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbe73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbe74: ret 4 */ FN_RET(0x005dbe20); r_esp += 8; return;
L_005dbe77:; BB(0x005dbe77);
    /* 005dbe77: jne 0x5dbe8d */ if (!fZ) goto L_005dbe8d;
L_005dbe79:; BB(0x005dbe79);
    /* 005dbe79: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbe7b: add ebx, 0x63 */ {  u32 a = r_ebx; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbe7e: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 005dbe81: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbe83: jl 0x5dbe87 */ if ((fS!=fO)) goto L_005dbe87;
L_005dbe85:; BB(0x005dbe85);
    /* 005dbe85: mov eax, esi */ r_eax = r_esi;
L_005dbe87:; BB(0x005dbe87);
    /* 005dbe87: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbe89: mov word ptr [edi + 6], ax */ W16((u32)(r_edi+0x6u), (u16)r_eax);
L_005dbe8d:; BB(0x005dbe8d);
    /* 005dbe8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbe8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbe8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbe90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbe91: ret 4 */ FN_RET(0x005dbe20); r_esp += 8; return;
L_005dbe94:; BB(0x005dbe94);
    /* 005dbe94: jge 0x5dbe8d */ if ((fS==fO)) goto L_005dbe8d;
L_005dbe96:; BB(0x005dbe96);
    /* 005dbe96: mov eax, esi */ r_eax = r_esi;
    /* 005dbe98: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe9a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbe9c: jge 0x5dbe8d */ if ((fS==fO)) goto L_005dbe8d;
L_005dbe9e:; BB(0x005dbe9e);
    /* 005dbe9e: jmp 0x5dbe59 */ goto L_005dbe59;
}

void f_005dbea0(void) /* sub_5DBEA0 */
{
    FN_ENTER(0x005dbea0);
    /* 005dbea0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbea1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbea2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbea3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbea4: mov edi, ecx */ r_edi = r_ecx;
    /* 005dbea6: movsx ebp, word ptr [edi + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 005dbeaa: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 005dbeaf: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbeb4: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbeb6: mov eax, ebp */ r_eax = r_ebp;
    /* 005dbeb8: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005dbebb: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005dbebe: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbec0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005dbec3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbec5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbec7: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 005dbeca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbecc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbece: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbed0: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbed2: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbed5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbed7: jle 0x5dbf14 */ if ((fZ||fS!=fO)) goto L_005dbf14;
L_005dbed9:; BB(0x005dbed9);
    /* 005dbed9: mov ecx, edi */ r_ecx = r_edi;
    /* 005dbedb: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5dbee0u); f_005dbdb8();
    /* 005dbee0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbee3: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbee8: jge 0x5dbef7 */ if ((fS==fO)) goto L_005dbef7;
L_005dbeea:; BB(0x005dbeea);
    /* 005dbeea: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbeec: mov word ptr [edi + 8], bp */ W16((u32)(r_edi+0x8u), (u16)r_ebp);
    /* 005dbef0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbef1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbef2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbef3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbef4: ret 4 */ FN_RET(0x005dbea0); r_esp += 8; return;
L_005dbef7:; BB(0x005dbef7);
    /* 005dbef7: jne 0x5dbf0d */ if (!fZ) goto L_005dbf0d;
L_005dbef9:; BB(0x005dbef9);
    /* 005dbef9: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbefb: add ebx, 0x63 */ {  u32 a = r_ebx; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbefe: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 005dbf01: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbf03: jl 0x5dbf07 */ if ((fS!=fO)) goto L_005dbf07;
L_005dbf05:; BB(0x005dbf05);
    /* 005dbf05: mov eax, esi */ r_eax = r_esi;
L_005dbf07:; BB(0x005dbf07);
    /* 005dbf07: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbf09: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_005dbf0d:; BB(0x005dbf0d);
    /* 005dbf0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbf0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbf0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbf10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbf11: ret 4 */ FN_RET(0x005dbea0); r_esp += 8; return;
L_005dbf14:; BB(0x005dbf14);
    /* 005dbf14: jge 0x5dbf0d */ if ((fS==fO)) goto L_005dbf0d;
L_005dbf16:; BB(0x005dbf16);
    /* 005dbf16: mov eax, esi */ r_eax = r_esi;
    /* 005dbf18: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf1a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbf1c: jge 0x5dbf0d */ if ((fS==fO)) goto L_005dbf0d;
L_005dbf1e:; BB(0x005dbf1e);
    /* 005dbf1e: jmp 0x5dbed9 */ goto L_005dbed9;
}

void f_005dbf20(void) /* sub_5DBF20 */
{
    FN_ENTER(0x005dbf20);
    /* 005dbf20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf24: mov edi, ecx */ r_edi = r_ecx;
    /* 005dbf26: movsx ebp, word ptr [edi + 0xa] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 005dbf2a: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 005dbf2f: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005dbf34: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dbf36: mov eax, ebp */ r_eax = r_ebp;
    /* 005dbf38: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005dbf3b: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005dbf3e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dbf40: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005dbf43: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf45: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf47: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 005dbf4a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf4e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf50: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf52: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbf55: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dbf57: jle 0x5dbf94 */ if ((fZ||fS!=fO)) goto L_005dbf94;
L_005dbf59:; BB(0x005dbf59);
    /* 005dbf59: mov ecx, edi */ r_ecx = r_edi;
    /* 005dbf5b: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5dbf60u); f_005dbdb8();
    /* 005dbf60: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbf63: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbf68: jge 0x5dbf77 */ if ((fS==fO)) goto L_005dbf77;
L_005dbf6a:; BB(0x005dbf6a);
    /* 005dbf6a: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbf6c: mov word ptr [edi + 0xa], bp */ W16((u32)(r_edi+0xau), (u16)r_ebp);
    /* 005dbf70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbf71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbf72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbf73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbf74: ret 4 */ FN_RET(0x005dbf20); r_esp += 8; return;
L_005dbf77:; BB(0x005dbf77);
    /* 005dbf77: jne 0x5dbf8d */ if (!fZ) goto L_005dbf8d;
L_005dbf79:; BB(0x005dbf79);
    /* 005dbf79: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbf7b: add ebx, 0x63 */ {  u32 a = r_ebx; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005dbf7e: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 005dbf81: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbf83: jl 0x5dbf87 */ if ((fS!=fO)) goto L_005dbf87;
L_005dbf85:; BB(0x005dbf85);
    /* 005dbf85: mov eax, esi */ r_eax = r_esi;
L_005dbf87:; BB(0x005dbf87);
    /* 005dbf87: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dbf89: mov word ptr [edi + 0xa], ax */ W16((u32)(r_edi+0xau), (u16)r_eax);
L_005dbf8d:; BB(0x005dbf8d);
    /* 005dbf8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dbf8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbf8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbf90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dbf91: ret 4 */ FN_RET(0x005dbf20); r_esp += 8; return;
L_005dbf94:; BB(0x005dbf94);
    /* 005dbf94: jge 0x5dbf8d */ if ((fS==fO)) goto L_005dbf8d;
L_005dbf96:; BB(0x005dbf96);
    /* 005dbf96: mov eax, esi */ r_eax = r_esi;
    /* 005dbf98: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf9a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbf9c: jge 0x5dbf8d */ if ((fS==fO)) goto L_005dbf8d;
L_005dbf9e:; BB(0x005dbf9e);
    /* 005dbf9e: jmp 0x5dbf59 */ goto L_005dbf59;
}

void f_005dbfa0(void) /* sub_5DBFA0 */
{
    FN_ENTER(0x005dbfa0);
    /* 005dbfa0: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 005dbfa5: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 005dbfa8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbfaa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbfad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005dbfaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005dbfb1: jg 0x5dbfb5 */ if ((!fZ&&fS==fO)) goto L_005dbfb5;
L_005dbfb3:; BB(0x005dbfb3);
    /* 005dbfb3: mov eax, edx */ r_eax = r_edx;
L_005dbfb5:; BB(0x005dbfb5);
    /* 005dbfb5: mov edx, 0xc8 */ r_edx = 0xc8u;
    /* 005dbfba: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbfbf: jl 0x5dbfc3 */ if ((fS!=fO)) goto L_005dbfc3;
L_005dbfc1:; BB(0x005dbfc1);
    /* 005dbfc1: mov eax, edx */ r_eax = r_edx;
L_005dbfc3:; BB(0x005dbfc3);
    /* 005dbfc3: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 005dbfc6: ret 4 */ FN_RET(0x005dbfa0); r_esp += 8; return;
}

void f_005dbfcc(void) /* sub_5DBFCC */
{
    FN_ENTER(0x005dbfcc);
    /* 005dbfcc: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 005dbfd1: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 005dbfd5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dbfd7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005dbfda: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005dbfdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005dbfde: jg 0x5dbfe2 */ if ((!fZ&&fS==fO)) goto L_005dbfe2;
L_005dbfe0:; BB(0x005dbfe0);
    /* 005dbfe0: mov eax, edx */ r_eax = r_edx;
L_005dbfe2:; BB(0x005dbfe2);
    /* 005dbfe2: mov edx, 0x78 */ r_edx = 0x78u;
    /* 005dbfe7: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dbfea: jl 0x5dbfee */ if ((fS!=fO)) goto L_005dbfee;
L_005dbfec:; BB(0x005dbfec);
    /* 005dbfec: mov eax, edx */ r_eax = r_edx;
L_005dbfee:; BB(0x005dbfee);
    /* 005dbfee: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 005dbff2: ret 4 */ FN_RET(0x005dbfcc); r_esp += 8; return;
}

void f_005dbff8(void) /* sub_5DBFF8 */
{
    FN_ENTER(0x005dbff8);
    /* 005dbff8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbff9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbffa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbffb: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dbffe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dc000: movzx ebx, byte ptr [esp + 0x1c] */ r_ebx = (u32)R8((u32)(r_esp+0x1cu));
    /* 005dc005: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dc007: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc00a: jge 0x5dc1d0 */ if ((fS==fO)) goto L_005dc1d0;
L_005dc010:; BB(0x005dc010);
    /* 005dc010: jge 0x5dc163 */ if ((fS==fO)) goto L_005dc163;
L_005dc016:; BB(0x005dc016);
    /* 005dc016: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005dc01a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005dc01c:; BB(0x005dc01c);
    /* 005dc01c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc01e: je 0x5dc135 */ if (fZ) goto L_005dc135;
L_005dc024:; BB(0x005dc024);
    /* 005dc024: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc027: jne 0x5dc044 */ if (!fZ) goto L_005dc044;
L_005dc029:; BB(0x005dc029);
    /* 005dc029: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 005dc02d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc02f: je 0x5dc13d */ if (fZ) goto L_005dc13d;
L_005dc035:; BB(0x005dc035);
    /* 005dc035: movzx eax, byte ptr [ebp + 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xdu));
    /* 005dc039: and eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dc03c: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005dc03f: jmp 0x5dc14b */ goto L_005dc14b;
L_005dc044:; BB(0x005dc044);
    /* 005dc044: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc047: jne 0x5dc13d */ if (!fZ) goto L_005dc13d;
L_005dc04d:; BB(0x005dc04d);
    /* 005dc04d: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 005dc051: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc053: je 0x5dc13d */ if (fZ) goto L_005dc13d;
L_005dc059:; BB(0x005dc059);
    /* 005dc059: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc05b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005dc05e: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 005dc063: movzx esi, byte ptr [ebp + 0xd] */ r_esi = (u32)R8((u32)(r_ebp+0xdu));
    /* 005dc067: mov edi, esi */ r_edi = r_esi;
    /* 005dc069: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc06c: mov eax, 1 */ r_eax = 0x1u;
    /* 005dc071: mov byte ptr [esp + edi], al */ W8((u32)(r_esp+r_edi), (u8)r_eax);
    /* 005dc074: mov edi, esi */ r_edi = r_esi;
    /* 005dc076: and edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc079: sar edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005dc07c: and esi, 0xc0 */ {  u32 a = r_esi; u32 b = 0xc0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005dc082: mov byte ptr [esp + edi], al */ W8((u32)(r_esp+r_edi), (u8)r_eax);
    /* 005dc085: movzx edi, byte ptr [esp] */ r_edi = (u32)R8((u32)(r_esp));
    /* 005dc089: sar esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005dc08c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dc08e: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc091: je 0x5dc09e */ if (fZ) goto L_005dc09e;
L_005dc093:; BB(0x005dc093);
    /* 005dc093: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc095: je 0x5dc14b */ if (fZ) goto L_005dc14b;
L_005dc09b:; BB(0x005dc09b);
    /* 005dc09b: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005dc09e:; BB(0x005dc09e);
    /* 005dc09e: movzx edi, byte ptr [esp + 1] */ r_edi = (u32)R8((u32)(r_esp+0x1u));
    /* 005dc0a3: mov eax, 1 */ r_eax = 0x1u;
    /* 005dc0a8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0ab: je 0x5dc0c0 */ if (fZ) goto L_005dc0c0;
L_005dc0ad:; BB(0x005dc0ad);
    /* 005dc0ad: mov edi, esi */ r_edi = r_esi;
    /* 005dc0af: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc0b5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0b7: je 0x5dc14b */ if (fZ) goto L_005dc14b;
L_005dc0bd:; BB(0x005dc0bd);
    /* 005dc0bd: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005dc0c0:; BB(0x005dc0c0);
    /* 005dc0c0: movzx edi, byte ptr [esp + 2] */ r_edi = (u32)R8((u32)(r_esp+0x2u));
    /* 005dc0c5: mov eax, 2 */ r_eax = 0x2u;
    /* 005dc0ca: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0cd: je 0x5dc0de */ if (fZ) goto L_005dc0de;
L_005dc0cf:; BB(0x005dc0cf);
    /* 005dc0cf: mov edi, esi */ r_edi = r_esi;
    /* 005dc0d1: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc0d7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0d9: je 0x5dc14b */ if (fZ) goto L_005dc14b;
L_005dc0db:; BB(0x005dc0db);
    /* 005dc0db: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005dc0de:; BB(0x005dc0de);
    /* 005dc0de: movzx edi, byte ptr [esp + 3] */ r_edi = (u32)R8((u32)(r_esp+0x3u));
    /* 005dc0e3: mov eax, 3 */ r_eax = 0x3u;
    /* 005dc0e8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0eb: je 0x5dc0fc */ if (fZ) goto L_005dc0fc;
L_005dc0ed:; BB(0x005dc0ed);
    /* 005dc0ed: mov edi, esi */ r_edi = r_esi;
    /* 005dc0ef: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc0f5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc0f7: je 0x5dc14b */ if (fZ) goto L_005dc14b;
L_005dc0f9:; BB(0x005dc0f9);
    /* 005dc0f9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005dc0fc:; BB(0x005dc0fc);
    /* 005dc0fc: movzx edi, byte ptr [esp + 4] */ r_edi = (u32)R8((u32)(r_esp+0x4u));
    /* 005dc101: mov eax, 4 */ r_eax = 0x4u;
    /* 005dc106: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc109: je 0x5dc11a */ if (fZ) goto L_005dc11a;
L_005dc10b:; BB(0x005dc10b);
    /* 005dc10b: mov edi, esi */ r_edi = r_esi;
    /* 005dc10d: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc113: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc115: je 0x5dc14b */ if (fZ) goto L_005dc14b;
L_005dc117:; BB(0x005dc117);
    /* 005dc117: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005dc11a:; BB(0x005dc11a);
    /* 005dc11a: movzx edi, byte ptr [esp + 5] */ r_edi = (u32)R8((u32)(r_esp+0x5u));
    /* 005dc11f: mov eax, 5 */ r_eax = 0x5u;
    /* 005dc124: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc127: je 0x5dc13d */ if (fZ) goto L_005dc13d;
L_005dc129:; BB(0x005dc129);
    /* 005dc129: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005dc12f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc131: je 0x5dc14b */ if (fZ) goto L_005dc14b;
L_005dc133:; BB(0x005dc133);
    /* 005dc133: jmp 0x5dc13d */ goto L_005dc13d;
L_005dc135:; BB(0x005dc135);
    /* 005dc135: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 005dc139: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc13b: jne 0x5dc144 */ if (!fZ) goto L_005dc144;
L_005dc13d:; BB(0x005dc13d);
    /* 005dc13d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005dc142: jmp 0x5dc14b */ goto L_005dc14b;
L_005dc144:; BB(0x005dc144);
    /* 005dc144: movzx eax, byte ptr [ebp + 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xdu));
    /* 005dc148: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_005dc14b:; BB(0x005dc14b);
    /* 005dc14b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc14d: je 0x5dc1d9 */ if (fZ) goto L_005dc1d9;
L_005dc153:; BB(0x005dc153);
    /* 005dc153: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dc156: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc159: jl 0x5dc01c */ if ((fS!=fO)) goto L_005dc01c;
L_005dc15f:; BB(0x005dc15f);
    /* 005dc15f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_005dc163:; BB(0x005dc163);
    /* 005dc163: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005dc167: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc16a: jne 0x5dc17a */ if (!fZ) goto L_005dc17a;
L_005dc16c:; BB(0x005dc16c);
    /* 005dc16c: or byte ptr [ebp + 0xd], cl */ { u32 ad = (u32)(r_ebp+0xdu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 005dc16f: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005dc175: mov byte ptr [ebp + 0xc], dl */ W8((u32)(r_ebp+0xcu), (u8)r_edx);
    /* 005dc178: jmp 0x5dc1d0 */ goto L_005dc1d0;
L_005dc17a:; BB(0x005dc17a);
    /* 005dc17a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc17d: jne 0x5dc193 */ if (!fZ) goto L_005dc193;
L_005dc17f:; BB(0x005dc17f);
    /* 005dc17f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc181: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc183: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc185: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005dc18b: mov byte ptr [ebp + 0xc], dl */ W8((u32)(r_ebp+0xcu), (u8)r_edx);
    /* 005dc18e: or byte ptr [ebp + 0xd], cl */ { u32 ad = (u32)(r_ebp+0xdu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 005dc191: jmp 0x5dc1d0 */ goto L_005dc1d0;
L_005dc193:; BB(0x005dc193);
    /* 005dc193: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc196: jne 0x5dc1d0 */ if (!fZ) goto L_005dc1d0;
L_005dc198:; BB(0x005dc198);
    /* 005dc198: movzx eax, byte ptr [ebp + 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xdu));
    /* 005dc19c: mov edi, eax */ r_edi = r_eax;
    /* 005dc19e: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc1a1: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc1a3: jge 0x5dc1a8 */ if ((fS==fO)) goto L_005dc1a8;
L_005dc1a5:; BB(0x005dc1a5);
    /* 005dc1a5: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_005dc1a8:; BB(0x005dc1a8);
    /* 005dc1a8: mov edi, eax */ r_edi = r_eax;
    /* 005dc1aa: and edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005dc1ad: sar edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005dc1b0: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc1b2: jge 0x5dc1b7 */ if ((fS==fO)) goto L_005dc1b7;
L_005dc1b4:; BB(0x005dc1b4);
    /* 005dc1b4: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_005dc1b7:; BB(0x005dc1b7);
    /* 005dc1b7: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 005dc1ba: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc1bd: jge 0x5dc1c7 */ if ((fS==fO)) goto L_005dc1c7;
L_005dc1bf:; BB(0x005dc1bf);
    /* 005dc1bf: shl ebx, 6 */ { u32 c = (6u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005dc1c2: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc1c4: mov byte ptr [ebp + 0xd], al */ W8((u32)(r_ebp+0xdu), (u8)r_eax);
L_005dc1c7:; BB(0x005dc1c7);
    /* 005dc1c7: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005dc1cd: mov byte ptr [ebp + 0xc], dl */ W8((u32)(r_ebp+0xcu), (u8)r_edx);
L_005dc1d0:; BB(0x005dc1d0);
    /* 005dc1d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dc1d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc1d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc1d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dc1d6: ret 4 */ FN_RET(0x005dbff8); r_esp += 8; return;
L_005dc1d9:; BB(0x005dc1d9);
    /* 005dc1d9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005dc1dd: jmp 0x5dc1d0 */ goto L_005dc1d0;
}

