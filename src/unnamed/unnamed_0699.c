#include "protos.h"

void f_00699058(void) /* sub_699058 */
{
    FN_ENTER(0x00699058);
    /* 00699058: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699059: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069905a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069905b: mov edi, ecx */ r_edi = r_ecx;
    /* 0069905d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069905f: lea ecx, [edi + 0xdf8] */ r_ecx = (u32)(r_edi+0xdf8u);
    /* 00699065: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x69906au); f_0069792c();
    /* 0069906a: mov esi, eax */ r_esi = r_eax;
    /* 0069906c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069906e: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x699073u); f_00687670();
    /* 00699073: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00699076: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699079: jne 0x6990fd */ if (!fZ) goto L_006990fd;
L_0069907f:; BB(0x0069907f);
    /* 0069907f: mov edx, dword ptr [edi + 0x8ac] */ r_edx = R32((u32)(r_edi+0x8acu));
    /* 00699085: lea ebp, [edi + 0x8a4] */ r_ebp = (u32)(r_edi+0x8a4u);
    /* 0069908b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069908e: jne 0x699152 */ if (!fZ) goto L_00699152;
L_00699094:; BB(0x00699094);
    /* 00699094: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699095: call 0x6ac48c */ r_esp -= 4; W32(r_esp, 0x69909au); f_006ac48c();
    /* 0069909a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069909b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069909c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069909f: mov ecx, edi */ r_ecx = r_edi;
    /* 006990a1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x6990a6u); f_007aaa30();
    /* 006990a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006990a8: je 0x699152 */ if (fZ) goto L_00699152;
L_006990ae:; BB(0x006990ae);
    /* 006990ae: mov ecx, edi */ r_ecx = r_edi;
    /* 006990b0: call 0x699248 */ r_esp -= 4; W32(r_esp, 0x6990b5u); f_00699248();
    /* 006990b5: mov edx, dword ptr [edi + 0x8b8] */ r_edx = R32((u32)(r_edi+0x8b8u));
    /* 006990bb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006990be: mov dword ptr [edi + 0x8b8], edx */ W32((u32)(r_edi+0x8b8u), r_edx);
    /* 006990c4: movsx eax, byte ptr [esi + 0x1f4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1f4u));
    /* 006990cb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006990cd: jl 0x699152 */ if ((fS!=fO)) goto L_00699152;
L_006990d3:; BB(0x006990d3);
    /* 006990d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006990d4: mov eax, dword ptr [edi + 0x8ac] */ r_eax = R32((u32)(r_edi+0x8acu));
    /* 006990da: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006990dd: mov dword ptr [edi + 0x8ac], eax */ W32((u32)(r_edi+0x8acu), r_eax);
    /* 006990e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006990e5: call 0x6a2fb4 */ r_esp -= 4; W32(r_esp, 0x6990eau); f_006a2fb4();
    /* 006990ea: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006990f0: or eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006990f3: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006990f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006990fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006990fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006990fc: ret  */ FN_RET(0x00699058); r_esp += 4; return;
L_006990fd:; BB(0x006990fd);
    /* 006990fd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006990ff: je 0x69911f */ if (fZ) goto L_0069911f;
L_00699101:; BB(0x00699101);
    /* 00699101: movzx ebp, byte ptr [esi + 0xf3] */ r_ebp = (u32)R8((u32)(r_esi+0xf3u));
    /* 00699108: cmp ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069910b: je 0x699231 */ if (fZ) goto L_00699231;
L_00699111:; BB(0x00699111);
    /* 00699111: cmp ebp, 0x42 */ {  u32 a = r_ebp; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699114: je 0x69921c */ if (fZ) goto L_0069921c;
L_0069911a:; BB(0x0069911a);
    /* 0069911a: cmp ebp, 0x43 */ {  u32 a = r_ebp; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069911d: je 0x699156 */ if (fZ) goto L_00699156;
L_0069911f:; BB(0x0069911f);
    /* 0069911f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699120: call 0x6ac48c */ r_esp -= 4; W32(r_esp, 0x699125u); f_006ac48c();
    /* 00699125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699126: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699127: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069912a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069912c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x699131u); f_007aaa30();
    /* 00699131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699133: je 0x699152 */ if (fZ) goto L_00699152;
L_00699135:; BB(0x00699135);
    /* 00699135: mov ecx, edi */ r_ecx = r_edi;
    /* 00699137: call 0x699248 */ r_esp -= 4; W32(r_esp, 0x69913cu); f_00699248();
    /* 0069913c: add word ptr [edi + 0x8b2], 1 */ { u32 ad = (u32)(r_edi+0x8b2u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00699144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699145: lea eax, [edi + 0x8a4] */ r_eax = (u32)(r_edi+0x8a4u);
    /* 0069914b: mov ecx, eax */ r_ecx = r_eax;
    /* 0069914d: call 0x6a2fb4 */ r_esp -= 4; W32(r_esp, 0x699152u); f_006a2fb4();
L_00699152:; BB(0x00699152);
    /* 00699152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699155: ret  */ FN_RET(0x00699058); r_esp += 4; return;
L_00699156:; BB(0x00699156);
    /* 00699156: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 0069915d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699160: jne 0x69911f */ if (!fZ) goto L_0069911f;
L_00699162:; BB(0x00699162);
    /* 00699162: mov edx, dword ptr [edi + 0x8ac] */ r_edx = R32((u32)(r_edi+0x8acu));
    /* 00699168: lea ebp, [edi + 0x8a4] */ r_ebp = (u32)(r_edi+0x8a4u);
    /* 0069916e: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699171: jne 0x699152 */ if (!fZ) goto L_00699152;
L_00699173:; BB(0x00699173);
    /* 00699173: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699174: call 0x6ac48c */ r_esp -= 4; W32(r_esp, 0x699179u); f_006ac48c();
    /* 00699179: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069917a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069917b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069917e: mov ecx, edi */ r_ecx = r_edi;
    /* 00699180: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x699185u); f_007aaa30();
    /* 00699185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699187: je 0x699152 */ if (fZ) goto L_00699152;
L_00699189:; BB(0x00699189);
    /* 00699189: mov ecx, dword ptr [edi + 0x8b8] */ r_ecx = R32((u32)(r_edi+0x8b8u));
    /* 0069918f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699191: je 0x699208 */ if (fZ) goto L_00699208;
L_00699193:; BB(0x00699193);
    /* 00699193: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 00699198: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069919a: mov eax, ecx */ r_eax = r_ecx;
    /* 0069919c: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069919f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006991a1: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006991a4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006991a6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006991a8: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006991ab: jne 0x6991b4 */ if (!fZ) goto L_006991b4;
L_006991ad:; BB(0x006991ad);
    /* 006991ad: mov ecx, edi */ r_ecx = r_edi;
    /* 006991af: call 0x699248 */ r_esp -= 4; W32(r_esp, 0x6991b4u); f_00699248();
L_006991b4:; BB(0x006991b4);
    /* 006991b4: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 006991b9: mov ecx, dword ptr [edi + 0x8b8] */ r_ecx = R32((u32)(r_edi+0x8b8u));
    /* 006991bf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006991c2: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006991c4: mov dword ptr [edi + 0x8b8], ecx */ W32((u32)(r_edi+0x8b8u), r_ecx);
    /* 006991ca: movsx esi, byte ptr [esi + 0x1f4] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esi+0x1f4u));
    /* 006991d1: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006991d4: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006991d6: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006991d8: jl 0x699152 */ if ((fS!=fO)) goto L_00699152;
L_006991de:; BB(0x006991de);
    /* 006991de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006991df: mov eax, dword ptr [edi + 0x8ac] */ r_eax = R32((u32)(r_edi+0x8acu));
    /* 006991e5: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006991e8: mov dword ptr [edi + 0x8ac], eax */ W32((u32)(r_edi+0x8acu), r_eax);
    /* 006991ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006991f0: call 0x6a2fb4 */ r_esp -= 4; W32(r_esp, 0x6991f5u); f_006a2fb4();
    /* 006991f5: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006991fb: or eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006991fe: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 00699204: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699205: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699206: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699207: ret  */ FN_RET(0x00699058); r_esp += 4; return;
L_00699208:; BB(0x00699208);
    /* 00699208: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 0069920e: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00699211: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 00699217: jmp 0x699193 */ goto L_00699193;
L_0069921c:; BB(0x0069921c);
    /* 0069921c: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 00699223: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699226: je 0x699162 */ if (fZ) goto L_00699162;
L_0069922c:; BB(0x0069922c);
    /* 0069922c: jmp 0x69911a */ goto L_0069911a;
L_00699231:; BB(0x00699231);
    /* 00699231: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 00699238: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069923b: je 0x699162 */ if (fZ) goto L_00699162;
L_00699241:; BB(0x00699241);
    /* 00699241: jmp 0x699111 */ goto L_00699111;
}

void f_00699248(void) /* sub_699248 */
{
    FN_ENTER(0x00699248);
    /* 00699248: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699249: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069924c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069924e: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00699255: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699258: jne 0x699271 */ if (!fZ) goto L_00699271;
L_0069925a:; BB(0x0069925a);
    /* 0069925a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069925c: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x699261u); f_0068a3fc();
    /* 00699261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699263: jne 0x69926a */ if (!fZ) goto L_0069926a;
L_00699265:; BB(0x00699265);
    /* 00699265: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699269: ret  */ FN_RET(0x00699248); r_esp += 4; return;
L_0069926a:; BB(0x0069926a);
    /* 0069926a: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
L_00699271:; BB(0x00699271);
    /* 00699271: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699274: je 0x69928a */ if (fZ) goto L_0069928a;
L_00699276:; BB(0x00699276);
    /* 00699276: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699277: lea ecx, [ebp + 0x8a4] */ r_ecx = (u32)(r_ebp+0x8a4u);
    /* 0069927d: call 0x6a3004 */ r_esp -= 4; W32(r_esp, 0x699282u); f_006a3004();
    /* 00699282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699284: je 0x69937e */ if (fZ) goto L_0069937e;
L_0069928a:; BB(0x0069928a);
    /* 0069928a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069928c: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x699291u); f_00689b44();
    /* 00699291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699293: jne 0x69937e */ if (!fZ) goto L_0069937e;
L_00699299:; BB(0x00699299);
    /* 00699299: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069929b: je 0x6992ae */ if (fZ) goto L_006992ae;
L_0069929d:; BB(0x0069929d);
    /* 0069929d: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006992a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006992a7: jne 0x6992ae */ if (!fZ) goto L_006992ae;
L_006992a9:; BB(0x006992a9);
    /* 006992a9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006992ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006992ad: ret  */ FN_RET(0x00699248); r_esp += 4; return;
L_006992ae:; BB(0x006992ae);
    /* 006992ae: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 006992b2: mov eax, 0xa */ r_eax = 0xau;
L_006992b7:; BB(0x006992b7);
    /* 006992b7: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 006992bc: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 006992bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006992c1: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 006992c5: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006992c8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006992cb: jne 0x6992b7 */ if (!fZ) goto L_006992b7;
L_006992cd:; BB(0x006992cd);
    /* 006992cd: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006992d1: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x6992d6u); f_006a2e30();
    /* 006992d6: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006992da: mov byte ptr [esp], 0x46 */ W8((u32)(r_esp), 0x46u);
    /* 006992de: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006992e3: mov byte ptr [esp + 1], 0xc */ W8((u32)(r_esp+0x1u), 0xcu);
    /* 006992e8: mov eax, dword ptr [ebp + 0x8d0] */ r_eax = R32((u32)(r_ebp+0x8d0u));
    /* 006992ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006992f0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006992f4: mov edx, dword ptr [ebp + 0x8d4] */ r_edx = R32((u32)(r_ebp+0x8d4u));
    /* 006992fa: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006992fe: mov edx, dword ptr [ebp + 0x8d8] */ r_edx = R32((u32)(r_ebp+0x8d8u));
    /* 00699304: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00699308: mov edx, dword ptr [ebp + 0x8dc] */ r_edx = R32((u32)(r_ebp+0x8dcu));
    /* 0069930e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00699312: mov edx, dword ptr [ebp + 0x8e0] */ r_edx = R32((u32)(r_ebp+0x8e0u));
    /* 00699318: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069931c: mov edx, dword ptr [ebp + 0x8e4] */ r_edx = R32((u32)(r_ebp+0x8e4u));
    /* 00699322: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00699326: mov edx, dword ptr [ebp + 0x8e8] */ r_edx = R32((u32)(r_ebp+0x8e8u));
    /* 0069932c: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00699330: mov edx, dword ptr [ebp + 0x8ec] */ r_edx = R32((u32)(r_ebp+0x8ecu));
    /* 00699336: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069933a: mov edx, dword ptr [ebp + 0x8f0] */ r_edx = R32((u32)(r_ebp+0x8f0u));
    /* 00699340: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00699344: mov edx, dword ptr [ebp + 0x8f4] */ r_edx = R32((u32)(r_ebp+0x8f4u));
    /* 0069934a: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0069934e: mov ecx, dword ptr [ebp + 0x8f8] */ r_ecx = R32((u32)(r_ebp+0x8f8u));
    /* 00699354: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00699358: jl 0x69935f */ if ((fS!=fO)) goto L_0069935f;
L_0069935a:; BB(0x0069935a);
    /* 0069935a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069935d: jle 0x699361 */ if ((fZ||fS!=fO)) goto L_00699361;
L_0069935f:; BB(0x0069935f);
    /* 0069935f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00699361:; BB(0x00699361);
    /* 00699361: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00699364: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00699366: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699368: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069936a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069936c: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069936f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00699372: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00699375: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 00699379: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69937eu); f_008003e0();
L_0069937e:; BB(0x0069937e);
    /* 0069937e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699381: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699382: ret  */ FN_RET(0x00699248); r_esp += 4; return;
}

void f_00699384(void) /* sub_699384 */
{
    FN_ENTER(0x00699384);
    /* 00699384: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699385: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00699387: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699389: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x69938eu); f_00687670();
    /* 0069938e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00699391: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699394: jl 0x6993a0 */ if ((fS!=fO)) goto L_006993a0;
L_00699396:; BB(0x00699396);
    /* 00699396: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00699399: jle 0x6993c8 */ if ((fZ||fS!=fO)) goto L_006993c8;
L_0069939b:; BB(0x0069939b);
    /* 0069939b: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069939e: je 0x6993c8 */ if (fZ) goto L_006993c8;
L_006993a0:; BB(0x006993a0);
    /* 006993a0: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 006993a6: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006993a9: jne 0x6993c8 */ if (!fZ) goto L_006993c8;
L_006993ab:; BB(0x006993ab);
    /* 006993ab: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 006993b2: cmp ax, word ptr [ebp + 0xba] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0xbau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 006993b9: jne 0x6993c8 */ if (!fZ) goto L_006993c8;
L_006993bb:; BB(0x006993bb);
    /* 006993bb: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 006993c1: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006993c6: jne 0x6993ca */ if (!fZ) goto L_006993ca;
L_006993c8:; BB(0x006993c8);
    /* 006993c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006993c9: ret  */ FN_RET(0x00699384); r_esp += 4; return;
L_006993ca:; BB(0x006993ca);
    /* 006993ca: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006993cd: jne 0x6993c8 */ if (!fZ) goto L_006993c8;
L_006993cf:; BB(0x006993cf);
    /* 006993cf: lea edx, [ebp + 0x30c] */ r_edx = (u32)(r_ebp+0x30cu);
    /* 006993d5: lea eax, [ebp + 0x314] */ r_eax = (u32)(r_ebp+0x314u);
    /* 006993db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006993dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006993de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006993df: call 0x7aac60 */ r_esp -= 4; W32(r_esp, 0x6993e4u); f_007aac60();
    /* 006993e4: fcomp dword ptr [0x93daec] */ fx_compare(ST(0), R_F32((u32)(0x93daecu))); FPOP();
    /* 006993ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006993ec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006993ed: jae 0x6993f6 */ if (!fC) goto L_006993f6;
L_006993ef:; BB(0x006993ef);
    /* 006993ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006993f1: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6993f6u); f_0077774c();
L_006993f6:; BB(0x006993f6);
    /* 006993f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006993f8: call 0x694198 */ r_esp -= 4; W32(r_esp, 0x6993fdu); f_00694198();
    /* 006993fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006993ff: je 0x699408 */ if (fZ) goto L_00699408;
L_00699401:; BB(0x00699401);
    /* 00699401: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699403: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x699408u); f_0077774c();
L_00699408:; BB(0x00699408);
    /* 00699408: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069940a: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69940fu); f_00693844();
    /* 0069940f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699411: jne 0x6993c8 */ if (!fZ) goto L_006993c8;
L_00699413:; BB(0x00699413);
    /* 00699413: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699415: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69941au); f_00777724();
    /* 0069941a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069941b: ret  */ FN_RET(0x00699384); r_esp += 4; return;
}

void f_0069941c(void) /* sub_69941C */
{
    FN_ENTER(0x0069941c);
    /* 0069941c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069941d: mov esi, ecx */ r_esi = r_ecx;
    /* 0069941f: mov ecx, esi */ r_ecx = r_esi;
    /* 00699421: call 0x687670 */ r_esp -= 4; W32(r_esp, 0x699426u); f_00687670();
    /* 00699426: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00699429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069942b: jne 0x699448 */ if (!fZ) goto L_00699448;
L_0069942d:; BB(0x0069942d);
    /* 0069942d: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00699433: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699435: je 0x69949a */ if (fZ) goto L_0069949a;
L_00699437:; BB(0x00699437);
    /* 00699437: mov eax, dword ptr [esi + 0x8ac] */ r_eax = R32((u32)(r_esi+0x8acu));
    /* 0069943d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699440: mov dword ptr [esi + 0x8ac], eax */ W32((u32)(r_esi+0x8acu), r_eax);
    /* 00699446: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699447: ret  */ FN_RET(0x0069941c); r_esp += 4; return;
L_00699448:; BB(0x00699448);
    /* 00699448: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069944b: jne 0x69945c */ if (!fZ) goto L_0069945c;
L_0069944d:; BB(0x0069944d);
    /* 0069944d: add esi, 0x8a4 */ {  u32 a = r_esi; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699453: mov ecx, esi */ r_ecx = r_esi;
    /* 00699455: call 0x6a3180 */ r_esp -= 4; W32(r_esp, 0x69945au); f_006a3180();
    /* 0069945a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069945b: ret  */ FN_RET(0x0069941c); r_esp += 4; return;
L_0069945c:; BB(0x0069945c);
    /* 0069945c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069945e: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 00699464: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x699469u); f_0069792c();
    /* 00699469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069946b: je 0x699483 */ if (fZ) goto L_00699483;
L_0069946d:; BB(0x0069946d);
    /* 0069946d: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 00699474: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699477: je 0x6994c5 */ if (fZ) goto L_006994c5;
L_00699479:; BB(0x00699479);
    /* 00699479: cmp edx, 0x42 */ {  u32 a = r_edx; u32 b = 0x42u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069947c: je 0x6994b7 */ if (fZ) goto L_006994b7;
L_0069947e:; BB(0x0069947e);
    /* 0069947e: cmp edx, 0x43 */ {  u32 a = r_edx; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699481: je 0x69949c */ if (fZ) goto L_0069949c;
L_00699483:; BB(0x00699483);
    /* 00699483: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00699489: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069948b: je 0x69949a */ if (fZ) goto L_0069949a;
L_0069948d:; BB(0x0069948d);
    /* 0069948d: add esi, 0x8a4 */ {  u32 a = r_esi; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699493: mov ecx, esi */ r_ecx = r_esi;
    /* 00699495: call 0x6a3190 */ r_esp -= 4; W32(r_esp, 0x69949au); f_006a3190();
L_0069949a:; BB(0x0069949a);
    /* 0069949a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069949b: ret  */ FN_RET(0x0069941c); r_esp += 4; return;
L_0069949c:; BB(0x0069949c);
    /* 0069949c: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 006994a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006994a6: jne 0x699483 */ if (!fZ) goto L_00699483;
L_006994a8:; BB(0x006994a8);
    /* 006994a8: add esi, 0x8a4 */ {  u32 a = r_esi; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006994ae: mov ecx, esi */ r_ecx = r_esi;
    /* 006994b0: call 0x6a3180 */ r_esp -= 4; W32(r_esp, 0x6994b5u); f_006a3180();
    /* 006994b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006994b6: ret  */ FN_RET(0x0069941c); r_esp += 4; return;
L_006994b7:; BB(0x006994b7);
    /* 006994b7: movzx ecx, byte ptr [eax + 0xf4] */ r_ecx = (u32)R8((u32)(r_eax+0xf4u));
    /* 006994be: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006994c1: je 0x6994a8 */ if (fZ) goto L_006994a8;
L_006994c3:; BB(0x006994c3);
    /* 006994c3: jmp 0x69947e */ goto L_0069947e;
L_006994c5:; BB(0x006994c5);
    /* 006994c5: movzx ecx, byte ptr [eax + 0xf4] */ r_ecx = (u32)R8((u32)(r_eax+0xf4u));
    /* 006994cc: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006994cf: je 0x6994a8 */ if (fZ) goto L_006994a8;
L_006994d1:; BB(0x006994d1);
    /* 006994d1: jmp 0x699479 */ goto L_00699479;
}

void f_006994d4(void) /* sub_6994D4 */
{
    FN_ENTER(0x006994d4);
    /* 006994d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006994d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006994d7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006994db: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006994de: je 0x6994eb */ if (fZ) goto L_006994eb;
L_006994e0:; BB(0x006994e0);
    /* 006994e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006994e2: call 0x699510 */ r_esp -= 4; W32(r_esp, 0x6994e7u); f_00699510();
    /* 006994e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006994e8: ret 4 */ FN_RET(0x006994d4); r_esp += 8; return;
L_006994eb:; BB(0x006994eb);
    /* 006994eb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006994ed: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 006994f3: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6994f8u); f_0069792c();
    /* 006994f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006994fa: je 0x699507 */ if (fZ) goto L_00699507;
L_006994fc:; BB(0x006994fc);
    /* 006994fc: mov ecx, eax */ r_ecx = r_eax;
    /* 006994fe: call 0x5e9534 */ r_esp -= 4; W32(r_esp, 0x699503u); f_005e9534();
    /* 00699503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699505: jne 0x6994e0 */ if (!fZ) goto L_006994e0;
L_00699507:; BB(0x00699507);
    /* 00699507: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699509: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069950a: ret 4 */ FN_RET(0x006994d4); r_esp += 8; return;
}

void f_00699510(void) /* sub_699510 */
{
    FN_ENTER(0x00699510);
    /* 00699510: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699511: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00699513: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00699516: test eax, 0x20006 */ {  u32 a = r_eax; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069951b: jne 0x699568 */ if (!fZ) goto L_00699568;
L_0069951d:; BB(0x0069951d);
    /* 0069951d: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699522: jne 0x699568 */ if (!fZ) goto L_00699568;
L_00699524:; BB(0x00699524);
    /* 00699524: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 0069952a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069952c: jne 0x699568 */ if (!fZ) goto L_00699568;
L_0069952e:; BB(0x0069952e);
    /* 0069952e: mov eax, dword ptr [ebx + 0x328] */ r_eax = R32((u32)(r_ebx+0x328u));
    /* 00699534: test eax, 0x548000 */ {  u32 a = r_eax; u32 b = 0x548000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699539: jne 0x699568 */ if (!fZ) goto L_00699568;
L_0069953b:; BB(0x0069953b);
    /* 0069953b: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00699542: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699545: jne 0x69955d */ if (!fZ) goto L_0069955d;
L_00699547:; BB(0x00699547);
    /* 00699547: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00699549: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x69954eu); f_00689410();
    /* 0069954e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699550: jne 0x699568 */ if (!fZ) goto L_00699568;
L_00699552:; BB(0x00699552);
    /* 00699552: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00699554: call 0x68aabc */ r_esp -= 4; W32(r_esp, 0x699559u); f_0068aabc();
    /* 00699559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069955b: je 0x699568 */ if (fZ) goto L_00699568;
L_0069955d:; BB(0x0069955d);
    /* 0069955d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069955f: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x699564u); f_0068a3fc();
    /* 00699564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00699566: jne 0x69956c */ if (!fZ) goto L_0069956c;
L_00699568:; BB(0x00699568);
    /* 00699568: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069956a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069956b: ret  */ FN_RET(0x00699510); r_esp += 4; return;
L_0069956c:; BB(0x0069956c);
    /* 0069956c: mov eax, 1 */ r_eax = 0x1u;
    /* 00699571: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699572: ret  */ FN_RET(0x00699510); r_esp += 4; return;
}

void f_00699574(void) /* sub_699574 */
{
    FN_ENTER(0x00699574);
    /* 00699574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699575: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699578: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0069957c: mov eax, 0xa */ r_eax = 0xau;
    /* 00699581: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
L_00699585:; BB(0x00699585);
    /* 00699585: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0069958a: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0069958d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069958f: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 00699593: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699596: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00699599: jne 0x699585 */ if (!fZ) goto L_00699585;
L_0069959b:; BB(0x0069959b);
    /* 0069959b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0069959f: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x6995a4u); f_006a2e30();
    /* 006995a4: mov byte ptr [esp], 0x46 */ W8((u32)(r_esp), 0x46u);
    /* 006995a8: mov byte ptr [esp + 1], 0xc */ W8((u32)(r_esp+0x1u), 0xcu);
    /* 006995ad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006995b0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006995b3: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006995b6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006995ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006995bd: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006995c1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006995c4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006995c7: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006995cb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006995ce: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006995d2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006995d5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006995d9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006995dc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006995e0: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006995e3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006995e7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006995ea: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006995ee: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 006995f1: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006995f5: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 006995f8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006995fc: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 006995ff: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00699603: call 0x6a9c00 */ r_esp -= 4; W32(r_esp, 0x699608u); f_006a9c00();
    /* 00699608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069960a: je 0x6996cc */ if (fZ) goto L_006996cc;
L_00699610:; BB(0x00699610);
    /* 00699610: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00699615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699616: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69961bu); f_0068d5a8();
    /* 0069961b: mov ebp, eax */ r_ebp = r_eax;
    /* 0069961d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699620: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699622: je 0x6996cc */ if (fZ) goto L_006996cc;
L_00699628:; BB(0x00699628);
    /* 00699628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699629: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x69962eu); f_00693468();
    /* 0069962e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069962f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699631: je 0x6996cc */ if (fZ) goto L_006996cc;
L_00699637:; BB(0x00699637);
    /* 00699637: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699639: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69963eu); f_0068a3fc();
    /* 0069963e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699640: je 0x6996cc */ if (fZ) goto L_006996cc;
L_00699646:; BB(0x00699646);
    /* 00699646: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069964a: mov dword ptr [ebp + 0x8d0], edx */ W32((u32)(r_ebp+0x8d0u), r_edx);
    /* 00699650: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00699654: mov dword ptr [ebp + 0x8d4], edx */ W32((u32)(r_ebp+0x8d4u), r_edx);
    /* 0069965a: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 00699660: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00699664: mov dword ptr [ebp + 0x8d8], edx */ W32((u32)(r_ebp+0x8d8u), r_edx);
    /* 0069966a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0069966e: mov dword ptr [ebp + 0x8dc], edx */ W32((u32)(r_ebp+0x8dcu), r_edx);
    /* 00699674: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00699678: mov dword ptr [ebp + 0x8e0], edx */ W32((u32)(r_ebp+0x8e0u), r_edx);
    /* 0069967e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00699682: mov dword ptr [ebp + 0x8e4], edx */ W32((u32)(r_ebp+0x8e4u), r_edx);
    /* 00699688: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069968c: mov dword ptr [ebp + 0x8e8], edx */ W32((u32)(r_ebp+0x8e8u), r_edx);
    /* 00699692: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00699696: mov dword ptr [ebp + 0x8ec], edx */ W32((u32)(r_ebp+0x8ecu), r_edx);
    /* 0069969c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006996a0: mov dword ptr [ebp + 0x8f0], edx */ W32((u32)(r_ebp+0x8f0u), r_edx);
    /* 006996a6: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006996aa: mov dword ptr [ebp + 0x8f4], edx */ W32((u32)(r_ebp+0x8f4u), r_edx);
    /* 006996b0: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006996b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006996b6: mov dword ptr [ebp + 0x8f8], edx */ W32((u32)(r_ebp+0x8f8u), r_edx);
    /* 006996bc: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6996c1u); f_0069792c();
    /* 006996c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006996c3: je 0x6996d1 */ if (fZ) goto L_006996d1;
L_006996c5:; BB(0x006996c5);
    /* 006996c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006996c7: mov ecx, eax */ r_ecx = r_eax;
    /* 006996c9: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x6996ccu); call_ind(t); }
L_006996cc:; BB(0x006996cc);
    /* 006996cc: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006996cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006996d0: ret  */ FN_RET(0x00699574); r_esp += 4; return;
L_006996d1:; BB(0x006996d1);
    /* 006996d1: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006996d6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006996d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006996db: call dword ptr [edx + 0x114] */ { u32 t = R32((u32)(r_edx+0x114u)); r_esp -= 4; W32(r_esp, 0x6996e1u); call_ind(t); }
    /* 006996e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006996e3: jne 0x6996cc */ if (!fZ) goto L_006996cc;
L_006996e5:; BB(0x006996e5);
    /* 006996e5: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 006996e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006996e9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x6996eeu); f_006904cc();
    /* 006996ee: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006996f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006996f2: ret  */ FN_RET(0x00699574); r_esp += 4; return;
}

void f_006996f4(void) /* sub_6996F4 */
{
    FN_ENTER(0x006996f4);
    /* 006996f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006996f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006996f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006996f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006996f8: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006996fb: mov edx, dword ptr [ecx + 0x8d0] */ r_edx = R32((u32)(r_ecx+0x8d0u));
    /* 00699701: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699703: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00699707: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0069970b: lea esi, [ecx + 0x8a4] */ r_esi = (u32)(r_ecx+0x8a4u);
    /* 00699711: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00699713: jl 0x69971a */ if ((fS!=fO)) goto L_0069971a;
L_00699715:; BB(0x00699715);
    /* 00699715: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699718: jle 0x69971c */ if ((fZ||fS!=fO)) goto L_0069971c;
L_0069971a:; BB(0x0069971a);
    /* 0069971a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069971c:; BB(0x0069971c);
    /* 0069971c: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00699720: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00699722: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00699726: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 0069972a: lea eax, [ecx + 0x8d4] */ r_eax = (u32)(r_ecx+0x8d4u);
    /* 00699730: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00699732: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
L_00699736:; BB(0x00699736);
    /* 00699736: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0069973a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069973c: jge 0x699c31 */ if ((fS==fO)) goto L_00699c31;
L_00699742:; BB(0x00699742);
    /* 00699742: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 00699746: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00699749: movsx esi, word ptr [esi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 0069974d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069974e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069974f: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x699754u); f_007b9df0();
    /* 00699754: mov ebp, eax */ r_ebp = r_eax;
    /* 00699756: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699759: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069975b: je 0x699c29 */ if (fZ) goto L_00699c29;
L_00699761:; BB(0x00699761);
    /* 00699761: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699765: mov edi, dword ptr [edx + 0x8fc] */ r_edi = R32((u32)(r_edx+0x8fcu));
    /* 0069976b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069976d: je 0x699790 */ if (fZ) goto L_00699790;
L_0069976f:; BB(0x0069976f);
    /* 0069976f: movsx edi, word ptr [edx + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 00699776: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699779: jne 0x699790 */ if (!fZ) goto L_00699790;
L_0069977b:; BB(0x0069977b);
    /* 0069977b: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00699780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699781: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699783: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x699788u); f_007b5290();
    /* 00699788: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069978a: je 0x699c29 */ if (fZ) goto L_00699c29;
L_00699790:; BB(0x00699790);
    /* 00699790: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00699793: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699795: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00699797: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699799: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069979b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069979d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006997a0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006997a2: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 006997a6: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 006997aa: mov edi, dword ptr [edi + 0xa4] */ r_edi = R32((u32)(r_edi+0xa4u));
    /* 006997b0: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 006997b3: mov edi, dword ptr [ebp + 0xa4] */ r_edi = R32((u32)(r_ebp+0xa4u));
    /* 006997b9: xor eax, dword ptr [edi + edx*4 + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+r_edx*4+0x18u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006997bd: test al, 6 */ {  u32 a = (u8)r_eax; u32 b = 0x6u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006997bf: jne 0x699c29 */ if (!fZ) goto L_00699c29;
L_006997c5:; BB(0x006997c5);
    /* 006997c5: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 006997c9: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x6997ceu); f_006a2e8c();
    /* 006997ce: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006997d1: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006997d4: je 0x699c3f */ if (fZ) goto L_00699c3f;
L_006997da:; BB(0x006997da);
    /* 006997da: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 006997de: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x6997e3u); f_006a3250();
    /* 006997e3: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 006997e7: movzx edi, word ptr [edx + 0x8a4] */ r_edi = (u32)R16((u32)(r_edx+0x8a4u));
    /* 006997ee: fld dword ptr [edi*4 + 0x9cb9dc] */ FPUSH(R_F32((u32)(r_edi*4+0x9cb9dcu)));
    /* 006997f5: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006997f8: fmul dword ptr [edx*4 + 0x9cb9e8] */ ST(0) = ST(0) * R_F32((u32)(r_edx*4+0x9cb9e8u));
L_006997ff:; BB(0x006997ff);
    /* 006997ff: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00699802: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699805: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00699809: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0069980d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069980f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00699812: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00699816: call dword ptr [edi + 0x70] */ { u32 t = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, 0x699819u); call_ind(t); }
    /* 00699819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069981b: je 0x699a7c */ if (fZ) goto L_00699a7c;
L_00699821:; BB(0x00699821);
    /* 00699821: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00699825: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x69982au); f_006a2e8c();
    /* 0069982a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0069982d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069982f: je 0x699959 */ if (fZ) goto L_00699959;
L_00699835:; BB(0x00699835);
    /* 00699835: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699838: jne 0x699931 */ if (!fZ) goto L_00699931;
L_0069983e:; BB(0x0069983e);
    /* 0069983e: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00699842: movzx edx, word ptr [edi + 0x8a4] */ r_edx = (u32)R16((u32)(r_edi+0x8a4u));
    /* 00699849: fld dword ptr [edx*4 + 0x9cb9d0] */ FPUSH(R_F32((u32)(r_edx*4+0x9cb9d0u)));
    /* 00699850: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00699853: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699856: fmul dword ptr [esp + 0x84] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x84u));
    /* 0069985d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00699861: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699863: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00699866: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x699869u); call_ind(t); }
    /* 00699869: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0069986d: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00699871: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00699875: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0069987a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069987f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00699883: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00699887: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069988b: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0069988f: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00699893: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00699897: mov edx, dword ptr [edi + 0x2b4] */ r_edx = R32((u32)(r_edi+0x2b4u));
    /* 0069989d: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 006998a0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006998a2: jge 0x6998a8 */ if ((fS==fO)) goto L_006998a8;
L_006998a4:; BB(0x006998a4);
    /* 006998a4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006998a6: jmp 0x6998b8 */ goto L_006998b8;
L_006998a8:; BB(0x006998a8);
    /* 006998a8: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6998adu); f_006931f8();
    /* 006998ad: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006998af: jle 0x6998b8 */ if ((fZ||fS!=fO)) goto L_006998b8;
L_006998b1:; BB(0x006998b1);
    /* 006998b1: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6998b6u); f_006931f8();
    /* 006998b6: mov edi, eax */ r_edi = r_eax;
L_006998b8:; BB(0x006998b8);
    /* 006998b8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006998bc: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006998c0: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 006998c4: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 006998c8: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 006998cc: fadd dword ptr [0x93dadc] */ ST(0) = ST(0) + R_F32((u32)(0x93dadcu));
    /* 006998d2: fmul dword ptr [0x93dad8] */ ST(0) = ST(0) * R_F32((u32)(0x93dad8u));
    /* 006998d8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006998da: fcom dword ptr [0x93dae4] */ fx_compare(ST(0), R_F32((u32)(0x93dae4u))); 
    /* 006998e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006998e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006998e3: jae 0x6998ed */ if (!fC) goto L_006998ed;
L_006998e5:; BB(0x006998e5);
    /* 006998e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006998e7: fld dword ptr [0x93dae4] */ FPUSH(R_F32((u32)(0x93dae4u)));
L_006998ed:; BB(0x006998ed);
    /* 006998ed: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 006998f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006998f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006998f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006998f7: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x6998fdu); call_ind(t); }
    /* 006998fd: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00699901: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699902: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699903: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00699907: call 0x6918b4 */ r_esp -= 4; W32(r_esp, 0x69990cu); f_006918b4();
    /* 0069990c: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0069990f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699912: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00699916: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0069991a: fmul dword ptr [0x93dae0] */ ST(0) = ST(0) * R_F32((u32)(0x93dae0u));
    /* 00699920: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00699924: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00699927: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699929: call dword ptr [edi + 0x68] */ { u32 t = R32((u32)(r_edi+0x68u)); r_esp -= 4; W32(r_esp, 0x69992cu); call_ind(t); }
    /* 0069992c: jmp 0x699a1f */ goto L_00699a1f;
L_00699931:; BB(0x00699931);
    /* 00699931: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699934: jne 0x699a1f */ if (!fZ) goto L_00699a1f;
L_0069993a:; BB(0x0069993a);
    /* 0069993a: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0069993e: add edx, dword ptr [ebp + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699945: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00699948: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0069994c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069994d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069994f: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x699952u); call_ind(t); }
    /* 00699952: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00699954: jmp 0x699a1f */ goto L_00699a1f;
L_00699959:; BB(0x00699959);
    /* 00699959: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 0069995d: movzx edx, word ptr [edi + 0x8a4] */ r_edx = (u32)R16((u32)(r_edi+0x8a4u));
    /* 00699964: fld dword ptr [edx*4 + 0x9cb9d0] */ FPUSH(R_F32((u32)(r_edx*4+0x9cb9d0u)));
    /* 0069996b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0069996e: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699971: fmul dword ptr [esp + 0x84] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x84u));
    /* 00699978: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0069997c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069997e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00699981: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x699984u); call_ind(t); }
    /* 00699984: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00699988: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0069998d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00699992: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00699996: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0069999a: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069999e: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 006999a2: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 006999a6: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006999aa: mov edx, dword ptr [edi + 0x2b4] */ r_edx = R32((u32)(r_edi+0x2b4u));
    /* 006999b0: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 006999b3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006999b5: jge 0x6999bb */ if ((fS==fO)) goto L_006999bb;
L_006999b7:; BB(0x006999b7);
    /* 006999b7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006999b9: jmp 0x6999cb */ goto L_006999cb;
L_006999bb:; BB(0x006999bb);
    /* 006999bb: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6999c0u); f_006931f8();
    /* 006999c0: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006999c2: jle 0x6999cb */ if ((fZ||fS!=fO)) goto L_006999cb;
L_006999c4:; BB(0x006999c4);
    /* 006999c4: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6999c9u); f_006931f8();
    /* 006999c9: mov edi, eax */ r_edi = r_eax;
L_006999cb:; BB(0x006999cb);
    /* 006999cb: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006999cf: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006999d3: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 006999d7: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 006999db: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 006999df: fadd dword ptr [0x93dadc] */ ST(0) = ST(0) + R_F32((u32)(0x93dadcu));
    /* 006999e5: fmul dword ptr [0x93dad8] */ ST(0) = ST(0) * R_F32((u32)(0x93dad8u));
    /* 006999eb: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006999ed: fcom dword ptr [0x93dae4] */ fx_compare(ST(0), R_F32((u32)(0x93dae4u))); 
    /* 006999f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006999f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006999f6: jae 0x699a00 */ if (!fC) goto L_00699a00;
L_006999f8:; BB(0x006999f8);
    /* 006999f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006999fa: fld dword ptr [0x93dae4] */ FPUSH(R_F32((u32)(0x93dae4u)));
L_00699a00:; BB(0x00699a00);
    /* 00699a00: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00699a04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00699a06: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699a07: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00699a0a: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x699a10u); call_ind(t); }
    /* 00699a10: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00699a14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699a15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699a16: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00699a1a: call 0x6918b4 */ r_esp -= 4; W32(r_esp, 0x699a1fu); f_006918b4();
L_00699a1f:; BB(0x00699a1f);
    /* 00699a1f: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00699a23: mov edx, 1 */ r_edx = 0x1u;
    /* 00699a28: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00699a2c: call 0x5e4aac */ r_esp -= 4; W32(r_esp, 0x699a31u); f_005e4aac();
    /* 00699a31: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699a35: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00699a37: lea ecx, [edx + 0xdf8] */ r_ecx = (u32)(r_edx+0xdf8u);
    /* 00699a3d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x699a42u); f_0069792c();
    /* 00699a42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699a44: je 0x699a5c */ if (fZ) goto L_00699a5c;
L_00699a46:; BB(0x00699a46);
    /* 00699a46: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 00699a4d: mov byte ptr [esp + 0x14], dl */ W8((u32)(r_esp+0x14u), (u8)r_edx);
    /* 00699a51: movzx edx, byte ptr [eax + 0xf4] */ r_edx = (u32)R8((u32)(r_eax+0xf4u));
    /* 00699a58: mov byte ptr [esp + 0x15], dl */ W8((u32)(r_esp+0x15u), (u8)r_edx);
L_00699a5c:; BB(0x00699a5c);
    /* 00699a5c: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699a60: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00699a64: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00699a68: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00699a6c: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00699a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699a71: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x699a76u); f_005e5098();
    /* 00699a76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699a77: jmp 0x699c24 */ goto L_00699c24;
L_00699a7c:; BB(0x00699a7c);
    /* 00699a7c: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699a80: movsx edx, word ptr [edx + 0x116] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x116u));
    /* 00699a87: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699a8a: jge 0x699a93 */ if ((fS==fO)) goto L_00699a93;
L_00699a8c:; BB(0x00699a8c);
    /* 00699a8c: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699a8f: jge 0x699aa7 */ if ((fS==fO)) goto L_00699aa7;
L_00699a91:; BB(0x00699a91);
    /* 00699a91: jmp 0x699ab4 */ goto L_00699ab4;
L_00699a93:; BB(0x00699a93);
    /* 00699a93: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699a96: jle 0x699aa7 */ if ((fZ||fS!=fO)) goto L_00699aa7;
L_00699a98:; BB(0x00699a98);
    /* 00699a98: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699a9b: jl 0x699ab4 */ if ((fS!=fO)) goto L_00699ab4;
L_00699a9d:; BB(0x00699a9d);
    /* 00699a9d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699aa0: jle 0x699aa7 */ if ((fZ||fS!=fO)) goto L_00699aa7;
L_00699aa2:; BB(0x00699aa2);
    /* 00699aa2: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699aa5: jne 0x699ab4 */ if (!fZ) goto L_00699ab4;
L_00699aa7:; BB(0x00699aa7);
    /* 00699aa7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699aa8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699aaa: call 0x7775c4 */ r_esp -= 4; W32(r_esp, 0x699aafu); f_007775c4();
    /* 00699aaf: jmp 0x699c24 */ goto L_00699c24;
L_00699ab4:; BB(0x00699ab4);
    /* 00699ab4: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00699ab8: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x699abdu); f_006a2e8c();
    /* 00699abd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00699ac0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ac3: jne 0x699c1c */ if (!fZ) goto L_00699c1c;
L_00699ac9:; BB(0x00699ac9);
    /* 00699ac9: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00699acd: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x699ad2u); f_006a3250();
    /* 00699ad2: fld dword ptr [0x9cb9e4] */ FPUSH(R_F32((u32)(0x9cb9e4u)));
    /* 00699ad8: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00699adb: fmul dword ptr [edx*4 + 0x9cb9e8] */ ST(0) = ST(0) * R_F32((u32)(r_edx*4+0x9cb9e8u));
    /* 00699ae2: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00699ae5: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699ae8: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 00699aec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00699af0: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00699af3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699af5: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00699af9: call dword ptr [edx + 0x70] */ { u32 t = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, 0x699afcu); call_ind(t); }
    /* 00699afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699afe: je 0x699c12 */ if (fZ) goto L_00699c12;
L_00699b04:; BB(0x00699b04);
    /* 00699b04: movzx edx, word ptr [edi + 0x8a4] */ r_edx = (u32)R16((u32)(r_edi+0x8a4u));
    /* 00699b0b: fld dword ptr [edx*4 + 0x9cb9d0] */ FPUSH(R_F32((u32)(r_edx*4+0x9cb9d0u)));
    /* 00699b12: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00699b15: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699b18: fmul dword ptr [esp + 0x84] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x84u));
    /* 00699b1f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00699b23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699b25: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00699b28: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x699b2bu); call_ind(t); }
    /* 00699b2b: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00699b2f: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00699b34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00699b39: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00699b3d: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00699b41: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00699b45: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00699b49: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00699b4d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00699b51: mov edx, dword ptr [edi + 0x2b4] */ r_edx = R32((u32)(r_edi+0x2b4u));
    /* 00699b57: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00699b5a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00699b5c: jge 0x699b62 */ if ((fS==fO)) goto L_00699b62;
L_00699b5e:; BB(0x00699b5e);
    /* 00699b5e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00699b60: jmp 0x699b72 */ goto L_00699b72;
L_00699b62:; BB(0x00699b62);
    /* 00699b62: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x699b67u); f_006931f8();
    /* 00699b67: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699b69: jle 0x699b72 */ if ((fZ||fS!=fO)) goto L_00699b72;
L_00699b6b:; BB(0x00699b6b);
    /* 00699b6b: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x699b70u); f_006931f8();
    /* 00699b70: mov edi, eax */ r_edi = r_eax;
L_00699b72:; BB(0x00699b72);
    /* 00699b72: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00699b76: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00699b7a: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00699b7e: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00699b82: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00699b86: fadd dword ptr [0x93dadc] */ ST(0) = ST(0) + R_F32((u32)(0x93dadcu));
    /* 00699b8c: fmul dword ptr [0x93dad8] */ ST(0) = ST(0) * R_F32((u32)(0x93dad8u));
    /* 00699b92: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00699b94: fcom dword ptr [0x93dae4] */ fx_compare(ST(0), R_F32((u32)(0x93dae4u))); 
    /* 00699b9a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00699b9c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00699b9d: jae 0x699ba7 */ if (!fC) goto L_00699ba7;
L_00699b9f:; BB(0x00699b9f);
    /* 00699b9f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00699ba1: fld dword ptr [0x93dae4] */ FPUSH(R_F32((u32)(0x93dae4u)));
L_00699ba7:; BB(0x00699ba7);
    /* 00699ba7: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00699bab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00699bad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699bae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00699bb1: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x699bb7u); call_ind(t); }
    /* 00699bb7: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00699bbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699bbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699bbd: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00699bc1: call 0x6918b4 */ r_esp -= 4; W32(r_esp, 0x699bc6u); f_006918b4();
    /* 00699bc6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00699bc9: mov edx, 1 */ r_edx = 0x1u;
    /* 00699bce: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00699bd2: call 0x5e4aac */ r_esp -= 4; W32(r_esp, 0x699bd7u); f_005e4aac();
    /* 00699bd7: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699bdb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00699bdd: lea ecx, [edx + 0xdf8] */ r_ecx = (u32)(r_edx+0xdf8u);
    /* 00699be3: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x699be8u); f_0069792c();
    /* 00699be8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699bea: je 0x699bf6 */ if (fZ) goto L_00699bf6;
L_00699bec:; BB(0x00699bec);
    /* 00699bec: movzx edx, byte ptr [eax + 0xf3] */ r_edx = (u32)R8((u32)(r_eax+0xf3u));
    /* 00699bf3: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
L_00699bf6:; BB(0x00699bf6);
    /* 00699bf6: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699bfa: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00699bfe: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00699c02: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00699c06: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00699c09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699c0a: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x699c0fu); f_005e5098();
    /* 00699c0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699c10: jmp 0x699c24 */ goto L_00699c24;
L_00699c12:; BB(0x00699c12);
    /* 00699c12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699c13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699c15: call 0x7775c4 */ r_esp -= 4; W32(r_esp, 0x699c1au); f_007775c4();
    /* 00699c1a: jmp 0x699c24 */ goto L_00699c24;
L_00699c1c:; BB(0x00699c1c);
    /* 00699c1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699c1d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699c1f: call 0x7775c4 */ r_esp -= 4; W32(r_esp, 0x699c24u); f_007775c4();
L_00699c24:; BB(0x00699c24);
    /* 00699c24: add dword ptr [esp + 0x5c], 4 */ { u32 ad = (u32)(r_esp+0x5cu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00699c29:; BB(0x00699c29);
    /* 00699c29: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00699c2c: jmp 0x699736 */ goto L_00699736;
L_00699c31:; BB(0x00699c31);
    /* 00699c31: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00699c35: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699c38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699c39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699c3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699c3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699c3c: ret 4 */ FN_RET(0x006996f4); r_esp += 8; return;
L_00699c3f:; BB(0x00699c3f);
    /* 00699c3f: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699c43: lea ecx, [edx + 0xdf8] */ r_ecx = (u32)(r_edx+0xdf8u);
    /* 00699c49: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00699c4d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00699c4f: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x699c54u); f_0069792c();
    /* 00699c54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699c56: je 0x6997da */ if (fZ) goto L_006997da;
L_00699c5c:; BB(0x00699c5c);
    /* 00699c5c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00699c5e: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00699c62: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x699c67u); f_0069792c();
    /* 00699c67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00699c69: mov ecx, eax */ r_ecx = r_eax;
    /* 00699c6b: call dword ptr [edx + 0x84] */ { u32 t = R32((u32)(r_edx+0x84u)); r_esp -= 4; W32(r_esp, 0x699c71u); call_ind(t); }
    /* 00699c71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699c73: jne 0x6997da */ if (!fZ) goto L_006997da;
L_00699c79:; BB(0x00699c79);
    /* 00699c79: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00699c7d: fld dword ptr [0x93dae4] */ FPUSH(R_F32((u32)(0x93dae4u)));
    /* 00699c83: movsx edi, word ptr [edx + 0x2d4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2d4u));
    /* 00699c8a: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00699c8e: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00699c92: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00699c94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00699c96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00699c97: jb 0x6997ff */ if (fC) goto L_006997ff;
L_00699c9d:; BB(0x00699c9d);
    /* 00699c9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00699c9f: fld dword ptr [0x93dae0] */ FPUSH(R_F32((u32)(0x93dae0u)));
    /* 00699ca5: jmp 0x6997ff */ goto L_006997ff;
}

void f_00699cac(void) /* sub_699CAC */
{
    FN_ENTER(0x00699cac);
    /* 00699cac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699cad: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699cb0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00699cb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699cb6: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00699cbb: mov byte ptr [esp], 0x44 */ W8((u32)(r_esp), 0x44u);
    /* 00699cbf: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00699cc4: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00699cc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00699ccb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00699cce: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00699cd1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00699cd5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00699cd8: call 0x6a9bd8 */ r_esp -= 4; W32(r_esp, 0x699cddu); f_006a9bd8();
    /* 00699cdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699cdf: je 0x699d4a */ if (fZ) goto L_00699d4a;
L_00699ce1:; BB(0x00699ce1);
    /* 00699ce1: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00699ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699ce7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x699cecu); f_0068d5a8();
    /* 00699cec: mov esi, eax */ r_esi = r_eax;
    /* 00699cee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699cf1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699cf3: je 0x699d4a */ if (fZ) goto L_00699d4a;
L_00699cf5:; BB(0x00699cf5);
    /* 00699cf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699cf6: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x699cfbu); f_00693468();
    /* 00699cfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699cfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699cfe: je 0x699d4a */ if (fZ) goto L_00699d4a;
L_00699d00:; BB(0x00699d00);
    /* 00699d00: mov ecx, esi */ r_ecx = r_esi;
    /* 00699d02: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x699d07u); f_0068a3fc();
    /* 00699d07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699d09: je 0x699d4a */ if (fZ) goto L_00699d4a;
L_00699d0b:; BB(0x00699d0b);
    /* 00699d0b: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 00699d11: test edx, 0x8200 */ {  u32 a = r_edx; u32 b = 0x8200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699d17: je 0x699d1e */ if (fZ) goto L_00699d1e;
L_00699d19:; BB(0x00699d19);
    /* 00699d19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699d1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699d1d: ret  */ FN_RET(0x00699cac); r_esp += 4; return;
L_00699d1e:; BB(0x00699d1e);
    /* 00699d1e: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 00699d23: mov word ptr [esi + 0x8a4], dx */ W16((u32)(r_esi+0x8a4u), (u16)r_edx);
    /* 00699d2a: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 00699d2f: mov word ptr [esi + 0x8a6], dx */ W16((u32)(r_esi+0x8a6u), (u16)r_edx);
    /* 00699d36: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00699d3b: mov dword ptr [esi + 0x3fc], edx */ W32((u32)(r_esi+0x3fcu), r_edx);
    /* 00699d41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00699d43: mov ecx, esi */ r_ecx = r_esi;
    /* 00699d45: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x699d4au); f_006a0994();
L_00699d4a:; BB(0x00699d4a);
    /* 00699d4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699d4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699d4e: ret  */ FN_RET(0x00699cac); r_esp += 4; return;
}

void f_00699d50(void) /* sub_699D50 */
{
    FN_ENTER(0x00699d50);
    /* 00699d50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699d51: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699d54: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00699d58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699d5a: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00699d5f: mov byte ptr [esp], 0x45 */ W8((u32)(r_esp), 0x45u);
    /* 00699d63: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00699d68: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00699d6d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00699d6f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00699d72: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00699d75: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00699d79: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00699d7c: call 0x6a9bd8 */ r_esp -= 4; W32(r_esp, 0x699d81u); f_006a9bd8();
    /* 00699d81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699d83: je 0x699dee */ if (fZ) goto L_00699dee;
L_00699d85:; BB(0x00699d85);
    /* 00699d85: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00699d8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699d8b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x699d90u); f_0068d5a8();
    /* 00699d90: mov esi, eax */ r_esi = r_eax;
    /* 00699d92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699d95: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699d97: je 0x699dee */ if (fZ) goto L_00699dee;
L_00699d99:; BB(0x00699d99);
    /* 00699d99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699d9a: call 0x693468 */ r_esp -= 4; W32(r_esp, 0x699d9fu); f_00693468();
    /* 00699d9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699da0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699da2: je 0x699dee */ if (fZ) goto L_00699dee;
L_00699da4:; BB(0x00699da4);
    /* 00699da4: mov ecx, esi */ r_ecx = r_esi;
    /* 00699da6: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x699dabu); f_0068a3fc();
    /* 00699dab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699dad: je 0x699dee */ if (fZ) goto L_00699dee;
L_00699daf:; BB(0x00699daf);
    /* 00699daf: mov edx, dword ptr [esi + 0x328] */ r_edx = R32((u32)(r_esi+0x328u));
    /* 00699db5: test edx, 0x8200 */ {  u32 a = r_edx; u32 b = 0x8200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699dbb: je 0x699dc2 */ if (fZ) goto L_00699dc2;
L_00699dbd:; BB(0x00699dbd);
    /* 00699dbd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699dc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699dc1: ret  */ FN_RET(0x00699d50); r_esp += 4; return;
L_00699dc2:; BB(0x00699dc2);
    /* 00699dc2: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 00699dc7: mov word ptr [esi + 0x8a4], dx */ W16((u32)(r_esi+0x8a4u), (u16)r_edx);
    /* 00699dce: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 00699dd3: mov word ptr [esi + 0x8a6], dx */ W16((u32)(r_esi+0x8a6u), (u16)r_edx);
    /* 00699dda: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00699ddf: mov dword ptr [esi + 0x3fc], edx */ W32((u32)(r_esi+0x3fcu), r_edx);
    /* 00699de5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00699de7: mov ecx, esi */ r_ecx = r_esi;
    /* 00699de9: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x699deeu); f_006a0624();
L_00699dee:; BB(0x00699dee);
    /* 00699dee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699df1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699df2: ret  */ FN_RET(0x00699d50); r_esp += 4; return;
}

void f_00699df4(void) /* sub_699DF4 */
{
    FN_ENTER(0x00699df4);
    /* 00699df4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699df5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699df6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699df7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699df8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699dfb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00699dff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00699e01: mov byte ptr [esp + 7], dl */ W8((u32)(r_esp+0x7u), (u8)r_edx);
    /* 00699e05: mov byte ptr [esp + 6], dl */ W8((u32)(r_esp+0x6u), (u8)r_edx);
    /* 00699e09: mov byte ptr [esp + 5], dl */ W8((u32)(r_esp+0x5u), (u8)r_edx);
    /* 00699e0d: mov byte ptr [esp + 4], dl */ W8((u32)(r_esp+0x4u), (u8)r_edx);
    /* 00699e11: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00699e15: mov edx, 0xa */ r_edx = 0xau;
L_00699e1a:; BB(0x00699e1a);
    /* 00699e1a: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00699e1f: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 00699e22: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00699e24: mov word ptr [ecx + 2], bp */ W16((u32)(r_ecx+0x2u), (u16)r_ebp);
    /* 00699e28: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699e2b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00699e2e: jne 0x699e1a */ if (!fZ) goto L_00699e1a;
L_00699e30:; BB(0x00699e30);
    /* 00699e30: mov byte ptr [esp], 0x47 */ W8((u32)(r_esp), 0x47u);
    /* 00699e34: mov byte ptr [esp + 1], 0xc */ W8((u32)(r_esp+0x1u), 0xcu);
    /* 00699e39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00699e3b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00699e3e: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00699e41: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00699e45: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 00699e48: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00699e4c: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00699e4f: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00699e53: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00699e56: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00699e5a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00699e5d: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00699e61: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00699e64: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00699e67: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00699e6b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00699e6e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00699e72: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00699e75: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00699e79: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00699e7c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00699e80: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00699e83: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00699e87: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00699e8a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00699e8e: call 0x6a9c48 */ r_esp -= 4; W32(r_esp, 0x699e93u); f_006a9c48();
    /* 00699e93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699e95: je 0x699fcf */ if (fZ) goto L_00699fcf;
L_00699e9b:; BB(0x00699e9b);
    /* 00699e9b: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00699ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699ea1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x699ea6u); f_0068d5a8();
    /* 00699ea6: mov ebp, eax */ r_ebp = r_eax;
    /* 00699ea8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699eab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ead: je 0x699fcf */ if (fZ) goto L_00699fcf;
L_00699eb3:; BB(0x00699eb3);
    /* 00699eb3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699eb5: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x699ebau); f_0068a3fc();
    /* 00699eba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ebc: je 0x699fcf */ if (fZ) goto L_00699fcf;
L_00699ec2:; BB(0x00699ec2);
    /* 00699ec2: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 00699ec8: test edx, 0x8200 */ {  u32 a = r_edx; u32 b = 0x8200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ece: jne 0x699fcf */ if (!fZ) goto L_00699fcf;
L_00699ed4:; BB(0x00699ed4);
    /* 00699ed4: movsx esi, byte ptr [esp + 4] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 00699ed9: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 00699edf: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00699ee3: mov word ptr [ebp + 0x464], si */ W16((u32)(r_ebp+0x464u), (u16)r_esi);
    /* 00699eea: movsx ebx, byte ptr [esp + 6] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x6u));
    /* 00699eef: call 0x6ad1e0 */ r_esp -= 4; W32(r_esp, 0x699ef4u); f_006ad1e0();
    /* 00699ef4: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 00699ef7: mov edx, edi */ r_edx = r_edi;
    /* 00699ef9: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00699eff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f00: call 0x6ad144 */ r_esp -= 4; W32(r_esp, 0x699f05u); f_006ad144();
    /* 00699f05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699f06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f08: jne 0x699f0c */ if (!fZ) goto L_00699f0c;
L_00699f0a:; BB(0x00699f0a);
    /* 00699f0a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00699f0c:; BB(0x00699f0c);
    /* 00699f0c: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f0f: jne 0x699f16 */ if (!fZ) goto L_00699f16;
L_00699f11:; BB(0x00699f11);
    /* 00699f11: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00699f13: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
L_00699f16:; BB(0x00699f16);
    /* 00699f16: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00699f19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699f1b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00699f1f: call 0x6acec8 */ r_esp -= 4; W32(r_esp, 0x699f24u); f_006acec8();
    /* 00699f24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f26: jne 0x699f2a */ if (!fZ) goto L_00699f2a;
L_00699f28:; BB(0x00699f28);
    /* 00699f28: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00699f2a:; BB(0x00699f2a);
    /* 00699f2a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699f2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f2c: mov byte ptr [ebp + 0x460], bl */ W8((u32)(r_ebp+0x460u), (u8)r_ebx);
    /* 00699f32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699f34: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x699f39u); f_00699fd8();
    /* 00699f39: movsx ebx, byte ptr [esp + 7] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x7u));
    /* 00699f3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f3f: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00699f43: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x699f48u); f_006ad1ec();
    /* 00699f48: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00699f4c: lea esi, [ebp + 0x480] */ r_esi = (u32)(r_ebp+0x480u);
    /* 00699f52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00699f54: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699f56: jle 0x699fc6 */ if ((fZ||fS!=fO)) goto L_00699fc6;
L_00699f58:; BB(0x00699f58);
    /* 00699f58: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699f5b: jl 0x699fab */ if ((fS!=fO)) goto L_00699fab;
L_00699f5d:; BB(0x00699f5d);
    /* 00699f5d: lea eax, [ebx - 5] */ r_eax = (u32)(r_ebx+0xfffffffbu);
L_00699f60:; BB(0x00699f60);
    /* 00699f60: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 00699f63: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 00699f66: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 00699f6a: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 00699f6e: movzx edi, word ptr [ecx + 4] */ r_edi = (u32)R16((u32)(r_ecx+0x4u));
    /* 00699f72: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 00699f76: movzx edi, word ptr [ecx + 6] */ r_edi = (u32)R16((u32)(r_ecx+0x6u));
    /* 00699f7a: mov word ptr [esi + 6], di */ W16((u32)(r_esi+0x6u), (u16)r_edi);
    /* 00699f7e: movzx edi, word ptr [ecx + 8] */ r_edi = (u32)R16((u32)(r_ecx+0x8u));
    /* 00699f82: mov word ptr [esi + 8], di */ W16((u32)(r_esi+0x8u), (u16)r_edi);
    /* 00699f86: movzx edi, word ptr [ecx + 0xa] */ r_edi = (u32)R16((u32)(r_ecx+0xau));
    /* 00699f8a: mov word ptr [esi + 0xa], di */ W16((u32)(r_esi+0xau), (u16)r_edi);
    /* 00699f8e: movzx edi, word ptr [ecx + 0xc] */ r_edi = (u32)R16((u32)(r_ecx+0xcu));
    /* 00699f92: mov word ptr [esi + 0xc], di */ W16((u32)(r_esi+0xcu), (u16)r_edi);
    /* 00699f96: movzx edi, word ptr [ecx + 0xe] */ r_edi = (u32)R16((u32)(r_ecx+0xeu));
    /* 00699f9a: mov word ptr [esi + 0xe], di */ W16((u32)(r_esi+0xeu), (u16)r_edi);
    /* 00699f9e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699fa1: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699fa4: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699fa7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699fa9: jle 0x699f60 */ if ((fZ||fS!=fO)) goto L_00699f60;
L_00699fab:; BB(0x00699fab);
    /* 00699fab: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 00699fae: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00699fb1: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 00699fb5: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 00699fb9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699fbc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699fbf: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699fc2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699fc4: jl 0x699fab */ if ((fS!=fO)) goto L_00699fab;
L_00699fc6:; BB(0x00699fc6);
    /* 00699fc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00699fc8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699fca: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x699fcfu); f_0069fe2c();
L_00699fcf:; BB(0x00699fcf);
    /* 00699fcf: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699fd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699fd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699fd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699fd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699fd6: ret  */ FN_RET(0x00699df4); r_esp += 4; return;
}

void f_00699e9c(void)
{
    FN_ENTER(0x00699e9c);
    /* 00699e9c: mov bh, 0x44 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x44u) & 0xffu) << 8);
    /* 00699e9e: and al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00699ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699ea1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x699ea6u); f_0068d5a8();
    /* 00699ea6: mov ebp, eax */ r_ebp = r_eax;
    /* 00699ea8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699eab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ead: je 0x699fcf */ if (fZ) goto L_00699fcf;
L_00699eb3:; BB(0x00699eb3);
    /* 00699eb3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699eb5: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x699ebau); f_0068a3fc();
    /* 00699eba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ebc: je 0x699fcf */ if (fZ) goto L_00699fcf;
L_00699ec2:; BB(0x00699ec2);
    /* 00699ec2: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 00699ec8: test edx, 0x8200 */ {  u32 a = r_edx; u32 b = 0x8200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ece: jne 0x699fcf */ if (!fZ) goto L_00699fcf;
L_00699ed4:; BB(0x00699ed4);
    /* 00699ed4: movsx esi, byte ptr [esp + 4] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 00699ed9: lea ecx, [ebp + 0x460] */ r_ecx = (u32)(r_ebp+0x460u);
    /* 00699edf: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00699ee3: mov word ptr [ebp + 0x464], si */ W16((u32)(r_ebp+0x464u), (u16)r_esi);
    /* 00699eea: movsx ebx, byte ptr [esp + 6] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x6u));
    /* 00699eef: call 0x6ad1e0 */ r_esp -= 4; W32(r_esp, 0x699ef4u); f_006ad1e0();
    /* 00699ef4: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 00699ef7: mov edx, edi */ r_edx = r_edi;
    /* 00699ef9: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00699eff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f00: call 0x6ad144 */ r_esp -= 4; W32(r_esp, 0x699f05u); f_006ad144();
    /* 00699f05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699f06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f08: jne 0x699f0c */ if (!fZ) goto L_00699f0c;
L_00699f0a:; BB(0x00699f0a);
    /* 00699f0a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00699f0c:; BB(0x00699f0c);
    /* 00699f0c: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f0f: jne 0x699f16 */ if (!fZ) goto L_00699f16;
L_00699f11:; BB(0x00699f11);
    /* 00699f11: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00699f13: movsx ebx, bl */ r_ebx = (u32)(i32)(i8)(u8)r_ebx;
L_00699f16:; BB(0x00699f16);
    /* 00699f16: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00699f19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699f1b: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00699f1f: call 0x6acec8 */ r_esp -= 4; W32(r_esp, 0x699f24u); f_006acec8();
    /* 00699f24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699f26: jne 0x699f2a */ if (!fZ) goto L_00699f2a;
L_00699f28:; BB(0x00699f28);
    /* 00699f28: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00699f2a:; BB(0x00699f2a);
    /* 00699f2a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699f2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f2c: mov byte ptr [ebp + 0x460], bl */ W8((u32)(r_ebp+0x460u), (u8)r_ebx);
    /* 00699f32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699f34: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x699f39u); f_00699fd8();
    /* 00699f39: movsx ebx, byte ptr [esp + 7] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x7u));
    /* 00699f3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699f3f: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00699f43: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x699f48u); f_006ad1ec();
    /* 00699f48: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00699f4c: lea esi, [ebp + 0x480] */ r_esi = (u32)(r_ebp+0x480u);
    /* 00699f52: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00699f54: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699f56: jle 0x699fc6 */ if ((fZ||fS!=fO)) goto L_00699fc6;
L_00699f58:; BB(0x00699f58);
    /* 00699f58: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699f5b: jl 0x699fab */ if ((fS!=fO)) goto L_00699fab;
L_00699f5d:; BB(0x00699f5d);
    /* 00699f5d: lea eax, [ebx - 5] */ r_eax = (u32)(r_ebx+0xfffffffbu);
L_00699f60:; BB(0x00699f60);
    /* 00699f60: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 00699f63: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 00699f66: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 00699f6a: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 00699f6e: movzx edi, word ptr [ecx + 4] */ r_edi = (u32)R16((u32)(r_ecx+0x4u));
    /* 00699f72: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 00699f76: movzx edi, word ptr [ecx + 6] */ r_edi = (u32)R16((u32)(r_ecx+0x6u));
    /* 00699f7a: mov word ptr [esi + 6], di */ W16((u32)(r_esi+0x6u), (u16)r_edi);
    /* 00699f7e: movzx edi, word ptr [ecx + 8] */ r_edi = (u32)R16((u32)(r_ecx+0x8u));
    /* 00699f82: mov word ptr [esi + 8], di */ W16((u32)(r_esi+0x8u), (u16)r_edi);
    /* 00699f86: movzx edi, word ptr [ecx + 0xa] */ r_edi = (u32)R16((u32)(r_ecx+0xau));
    /* 00699f8a: mov word ptr [esi + 0xa], di */ W16((u32)(r_esi+0xau), (u16)r_edi);
    /* 00699f8e: movzx edi, word ptr [ecx + 0xc] */ r_edi = (u32)R16((u32)(r_ecx+0xcu));
    /* 00699f92: mov word ptr [esi + 0xc], di */ W16((u32)(r_esi+0xcu), (u16)r_edi);
    /* 00699f96: movzx edi, word ptr [ecx + 0xe] */ r_edi = (u32)R16((u32)(r_ecx+0xeu));
    /* 00699f9a: mov word ptr [esi + 0xe], di */ W16((u32)(r_esi+0xeu), (u16)r_edi);
    /* 00699f9e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699fa1: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699fa4: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699fa7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699fa9: jle 0x699f60 */ if ((fZ||fS!=fO)) goto L_00699f60;
L_00699fab:; BB(0x00699fab);
    /* 00699fab: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 00699fae: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00699fb1: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 00699fb5: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 00699fb9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699fbc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699fbf: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00699fc2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699fc4: jl 0x699fab */ if ((fS!=fO)) goto L_00699fab;
L_00699fc6:; BB(0x00699fc6);
    /* 00699fc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00699fc8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00699fca: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x699fcfu); f_0069fe2c();
L_00699fcf:; BB(0x00699fcf);
    /* 00699fcf: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00699fd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699fd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699fd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699fd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699fd6: ret  */ FN_RET(0x00699e9c); r_esp += 4; return;
}

void f_00699fd8(void) /* sub_699FD8 */
{
    FN_ENTER(0x00699fd8);
    /* 00699fd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699fd9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699fda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699fdb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00699fdd: movzx ebx, byte ptr [esp + 0x10] */ r_ebx = (u32)R8((u32)(r_esp+0x10u));
    /* 00699fe2: movsx edi, word ptr [esp + 0x14] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00699fe7: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00699fee: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ff1: jne 0x69a019 */ if (!fZ) goto L_0069a019;
L_00699ff3:; BB(0x00699ff3);
    /* 00699ff3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699ff4: call 0x6ad1cc */ r_esp -= 4; W32(r_esp, 0x699ff9u); f_006ad1cc();
    /* 00699ff9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699ffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ffc: je 0x69a006 */ if (fZ) goto L_0069a006;
L_00699ffe:; BB(0x00699ffe);
    /* 00699ffe: add ebp, 0x460 */ {  u32 a = r_ebp; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a004: jmp 0x69a01f */ goto L_0069a01f;
L_0069a006:; BB(0x0069a006);
    /* 0069a006: add ebp, 0x460 */ {  u32 a = r_ebp; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069a00c: movzx eax, byte ptr [edi + ebp + 0x5c] */ r_eax = (u32)R8((u32)(r_edi+r_ebp+0x5cu));
    /* 0069a011: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069a013: jle 0x69a01f */ if ((fZ||fS!=fO)) goto L_0069a01f;
L_0069a015:; BB(0x0069a015);
    /* 0069a015: mov ebx, eax */ r_ebx = r_eax;
    /* 0069a017: jmp 0x69a01f */ goto L_0069a01f;
L_0069a019:; BB(0x0069a019);
    /* 0069a019: add ebp, 0x460 */ {  u32 a = r_ebp; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0069a01f:; BB(0x0069a01f);
    /* 0069a01f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069a020: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069a021: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069a023: call 0x6acf64 */ r_esp -= 4; W32(r_esp, 0x69a028u); f_006acf64();
    /* 0069a028: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069a029: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069a02a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069a02b: ret 8 */ FN_RET(0x00699fd8); r_esp += 12; return;
}

