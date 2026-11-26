#include "protos.h"

void f_0076b034(void) /* sub_76B034 */
{
    FN_ENTER(0x0076b034);
    /* 0076b034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076b035: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b038: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0076b03c: mov eax, 0x976928 */ r_eax = 0x976928u;
    /* 0076b041: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0076b043: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0076b046: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0076b049: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0076b04d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0076b050: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0076b054: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0076b057: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0076b05b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0076b05e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0076b062: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0076b065: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0076b069: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0076b06c: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0076b070: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0076b073: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0076b077: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0076b07a: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0076b07d: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0076b081: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0076b085: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 0076b08b: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0076b08f: movsx esi, word ptr [edx + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0076b093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076b095: jl 0x76b0b0 */ if ((fS!=fO)) goto L_0076b0b0;
L_0076b097:; BB(0x0076b097);
    /* 0076b097: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076b09a: jg 0x76b0b0 */ if ((!fZ&&fS==fO)) goto L_0076b0b0;
L_0076b09c:; BB(0x0076b09c);
    /* 0076b09c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b09e: je 0x76b0ab */ if (fZ) goto L_0076b0ab;
L_0076b0a0:; BB(0x0076b0a0);
    /* 0076b0a0: mov edx, dword ptr [esp + eax*8 + 4] */ r_edx = R32((u32)(r_esp+r_eax*8+0x4u));
    /* 0076b0a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076b0a5: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076b0a7: call dword ptr [esp + eax*8 + 4] */ { u32 t = R32((u32)(r_esp+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, 0x76b0abu); call_ind(t); }
L_0076b0ab:; BB(0x0076b0ab);
    /* 0076b0ab: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b0ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076b0af: ret  */ FN_RET(0x0076b034); r_esp += 4; return;
L_0076b0b0:; BB(0x0076b0b0);
    /* 0076b0b0: push 0x9778d0 */ { u32 v = 0x9778d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b0b5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76b0bau); f_0061cdb0();
    /* 0076b0ba: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b0bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076b0be: ret  */ FN_RET(0x0076b034); r_esp += 4; return;
}

void f_0076b0c0(void)
{
    FN_ENTER(0x0076b0c0);
    /* 0076b0c0: mov dword ptr [0xa9b04c], 0x3f800000 */ W32((u32)(0xa9b04cu), 0x3f800000u);
    /* 0076b0ca: mov dword ptr [0xa9b050], 0x41000000 */ W32((u32)(0xa9b050u), 0x41000000u);
    /* 0076b0d4: mov dword ptr [0xa9b054], 0x3fc00000 */ W32((u32)(0xa9b054u), 0x3fc00000u);
    /* 0076b0de: fld dword ptr [0xa9b054] */ FPUSH(R_F32((u32)(0xa9b054u)));
    /* 0076b0e4: fmul dword ptr [0x977384] */ ST(0) = ST(0) * R_F32((u32)(0x977384u));
    /* 0076b0ea: fstp dword ptr [0xa9b048] */ W_F32((u32)(0xa9b048u), ST(0)); FPOP();
    /* 0076b0f0: mov dword ptr [0xa9b058], 0x469c4000 */ W32((u32)(0xa9b058u), 0x469c4000u);
    /* 0076b0fa: mov dword ptr [0xa9b05c], 0 */ W32((u32)(0xa9b05cu), 0x0u);
    /* 0076b104: mov dword ptr [0xa9b060], 0xc2c80000 */ W32((u32)(0xa9b060u), 0xc2c80000u);
    /* 0076b10e: ret  */ FN_RET(0x0076b0c0); r_esp += 4; return;
}

void f_0076b110(void) /* sub_76B110 */
{
    FN_ENTER(0x0076b110);
    /* 0076b110: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076b114: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076b117: jge 0x76b127 */ if ((fS==fO)) goto L_0076b127;
L_0076b119:; BB(0x0076b119);
    /* 0076b119: mov dword ptr [ecx + 0xf78], eax */ W32((u32)(r_ecx+0xf78u), r_eax);
    /* 0076b11f: mov eax, 1 */ r_eax = 0x1u;
    /* 0076b124: ret 4 */ FN_RET(0x0076b110); r_esp += 8; return;
L_0076b127:; BB(0x0076b127);
    /* 0076b127: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b12a: push 0x97785c */ { u32 v = 0x97785cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b12f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76b134u); f_0061cdb0();
    /* 0076b134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b136: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b139: ret 4 */ FN_RET(0x0076b110); r_esp += 8; return;
}

void f_0076b13c(void) /* sub_76B13C */
{
    FN_ENTER(0x0076b13c);
    /* 0076b13c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b13f: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0076b146: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b149: je 0x76b1b7 */ if (fZ) goto L_0076b1b7;
L_0076b14b:; BB(0x0076b14b);
    /* 0076b14b: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b14e: je 0x76b1b3 */ if (fZ) goto L_0076b1b3;
L_0076b150:; BB(0x0076b150);
    /* 0076b150: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b153: je 0x76b173 */ if (fZ) goto L_0076b173;
L_0076b155:; BB(0x0076b155);
    /* 0076b155: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b158: jne 0x76b161 */ if (!fZ) goto L_0076b161;
L_0076b15a:; BB(0x0076b15a);
    /* 0076b15a: mov eax, 3 */ r_eax = 0x3u;
    /* 0076b15f: jmp 0x76b178 */ goto L_0076b178;
L_0076b161:; BB(0x0076b161);
    /* 0076b161: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b164: jne 0x76b16d */ if (!fZ) goto L_0076b16d;
L_0076b166:; BB(0x0076b166);
    /* 0076b166: mov eax, 4 */ r_eax = 0x4u;
    /* 0076b16b: jmp 0x76b178 */ goto L_0076b178;
L_0076b16d:; BB(0x0076b16d);
    /* 0076b16d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b16f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b172: ret  */ FN_RET(0x0076b13c); r_esp += 4; return;
L_0076b173:; BB(0x0076b173);
    /* 0076b173: mov eax, 1 */ r_eax = 0x1u;
L_0076b178:; BB(0x0076b178);
    /* 0076b178: mov byte ptr [esp], 1 */ W8((u32)(r_esp), 0x1u);
    /* 0076b17c: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 0076b180: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b182: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0076b18a: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0076b18f: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0076b197: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b199: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x76b19eu); f_004d31f4();
    /* 0076b19e: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0076b1a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b1a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b1a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x76b1aau); f_004d6770();
    /* 0076b1aa: mov eax, 1 */ r_eax = 0x1u;
    /* 0076b1af: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b1b2: ret  */ FN_RET(0x0076b13c); r_esp += 4; return;
L_0076b1b3:; BB(0x0076b1b3);
    /* 0076b1b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b1b5: jmp 0x76b178 */ goto L_0076b178;
L_0076b1b7:; BB(0x0076b1b7);
    /* 0076b1b7: mov eax, 2 */ r_eax = 0x2u;
    /* 0076b1bc: jmp 0x76b178 */ goto L_0076b178;
}

void f_0076b1c0(void) /* sub_76B1C0 */
{
    FN_ENTER(0x0076b1c0);
    /* 0076b1c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b1c3: mov eax, dword ptr [0x976950] */ r_eax = R32((u32)(0x976950u));
    /* 0076b1c8: mov edx, dword ptr [0x976954] */ r_edx = R32((u32)(0x976954u));
    /* 0076b1ce: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0076b1d2: mov eax, dword ptr [0x976958] */ r_eax = R32((u32)(0x976958u));
    /* 0076b1d7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0076b1db: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0076b1df: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0076b1e6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076b1e9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0076b1f1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0076b1f5: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0076b1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b1fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b1ff: call 0x7679d0 */ r_esp -= 4; W32(r_esp, 0x76b204u); f_007679d0();
    /* 0076b204: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b207: ret  */ FN_RET(0x0076b1c0); r_esp += 4; return;
}

void f_0076b208(void) /* sub_76B208 */
{
    FN_ENTER(0x0076b208);
    /* 0076b208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076b209: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076b20a: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b20d: mov esi, ecx */ r_esi = r_ecx;
    /* 0076b20f: mov dword ptr [esp + 0x10], 4 */ W32((u32)(r_esp+0x10u), 0x4u);
    /* 0076b217: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b219: mov edx, 1 */ r_edx = 0x1u;
    /* 0076b21e: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0076b223: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076b226: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0076b22a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0076b22e: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0076b232: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0076b236: mov edi, 3 */ r_edi = 0x3u;
    /* 0076b23b: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0076b23f: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0076b243: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0076b246: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0076b24a: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0076b24e: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0076b252: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0076b256: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076b25b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0076b25f: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b264: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0076b268: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0076b26c: je 0x76b275 */ if (fZ) goto L_0076b275;
L_0076b26e:; BB(0x0076b26e);
    /* 0076b26e: mov eax, 1 */ r_eax = 0x1u;
    /* 0076b273: jmp 0x76b277 */ goto L_0076b277;
L_0076b275:; BB(0x0076b275);
    /* 0076b275: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076b277:; BB(0x0076b277);
    /* 0076b277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b279: je 0x76b282 */ if (fZ) goto L_0076b282;
L_0076b27b:; BB(0x0076b27b);
    /* 0076b27b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 0076b280: jmp 0x76b2c2 */ goto L_0076b2c2;
L_0076b282:; BB(0x0076b282);
    /* 0076b282: mov ecx, esi */ r_ecx = r_esi;
    /* 0076b284: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x76b289u); f_007751b0();
    /* 0076b289: mov edx, dword ptr [esi + 0xf7c] */ r_edx = R32((u32)(r_esi+0xf7cu));
    /* 0076b28f: mov ecx, dword ptr [esp + edx*4 + 0x24] */ r_ecx = R32((u32)(r_esp+r_edx*4+0x24u));
    /* 0076b293: fild dword ptr [esp + ecx*8 + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+r_ecx*8+0x18u)));
    /* 0076b297: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0076b299: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0076b29d: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0076b2a2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076b2a7: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0076b2ab: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0076b2af: fistp dword ptr [esp + 0x50] */ W32((u32)(r_esp+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076b2b3: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0076b2b7: mov eax, dword ptr [esp + ecx*8 + 0x14] */ r_eax = R32((u32)(r_esp+r_ecx*8+0x14u));
    /* 0076b2bb: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0076b2bf: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
L_0076b2c2:; BB(0x0076b2c2);
    /* 0076b2c2: mov byte ptr [esp + 0x38], 0xdc */ W8((u32)(r_esp+0x38u), 0xdcu);
    /* 0076b2c7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0076b2cc: mov edx, 3 */ r_edx = 0x3u;
    /* 0076b2d1: mov byte ptr [esp + 0x39], 2 */ W8((u32)(r_esp+0x39u), 0x2u);
    /* 0076b2d6: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 0076b2db: mov word ptr [esp + 0x3c], dx */ W16((u32)(r_esp+0x3cu), (u16)r_edx);
    /* 0076b2e0: mov word ptr [esp + 0x3e], cx */ W16((u32)(r_esp+0x3eu), (u16)r_ecx);
    /* 0076b2e5: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x76b2eau); f_0052cf54();
    /* 0076b2ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b2ec: je 0x76b2f7 */ if (fZ) goto L_0076b2f7;
L_0076b2ee:; BB(0x0076b2ee);
    /* 0076b2ee: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0076b2f2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x76b2f7u); f_008003e0();
L_0076b2f7:; BB(0x0076b2f7);
    /* 0076b2f7: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b2fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076b2fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076b2fc: ret  */ FN_RET(0x0076b208); r_esp += 4; return;
}

void f_0076b300(void) /* sub_76B300 */
{
    FN_ENTER(0x0076b300);
    /* 0076b300: mov ecx, dword ptr [ecx + 0x3cc] */ r_ecx = R32((u32)(r_ecx+0x3ccu));
    /* 0076b306: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076b308: je 0x76b30f */ if (fZ) goto L_0076b30f;
L_0076b30a:; BB(0x0076b30a);
    /* 0076b30a: call 0x8172ac */ r_esp -= 4; W32(r_esp, 0x76b30fu); f_008172ac();
L_0076b30f:; BB(0x0076b30f);
    /* 0076b30f: ret  */ FN_RET(0x0076b300); r_esp += 4; return;
}

void f_0076b310(void) /* sub_76B310 */
{
    FN_ENTER(0x0076b310);
    /* 0076b310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076b311: mov ebp, esp */ r_ebp = r_esp;
    /* 0076b313: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b315: push 0x8f3c6e */ { u32 v = 0x8f3c6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b31a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076b320: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b321: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076b328: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b32b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076b32e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0076b331: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0076b334: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0076b337: call 0x76bfd4 */ r_esp -= 4; W32(r_esp, 0x76b33cu); f_0076bfd4();
    /* 0076b33c: mov eax, dword ptr [0xa9b074] */ r_eax = R32((u32)(0xa9b074u));
    /* 0076b341: mov dword ptr [0xa9b078], 0 */ W32((u32)(0xa9b078u), 0x0u);
    /* 0076b34b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b34e: je 0x76b35a */ if (fZ) goto L_0076b35a;
L_0076b350:; BB(0x0076b350);
    /* 0076b350: mov dword ptr [0xa9b074], 0 */ W32((u32)(0xa9b074u), 0x0u);
L_0076b35a:; BB(0x0076b35a);
    /* 0076b35a: mov dword ptr [0xa9b070], 0 */ W32((u32)(0xa9b070u), 0x0u);
    /* 0076b364: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b369: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0076b370: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76b375u); f_008581c5();
    /* 0076b375: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076b378: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b37b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0076b37e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b380: je 0x76b5df */ if (fZ) goto L_0076b5df;
L_0076b386:; BB(0x0076b386);
    /* 0076b386: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0076b38d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076b394: mov ecx, eax */ r_ecx = r_eax;
    /* 0076b396: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b39a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b39b: push 0x9f7680 */ { u32 v = 0x9f7680u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b3a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b3a2: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x76b3a7u); f_005b7a84();
    /* 0076b3a7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0076b3ae:; BB(0x0076b3ae);
    /* 0076b3ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b3b1: mov dword ptr [0xa9b06c], eax */ W32((u32)(0xa9b06cu), r_eax);
    /* 0076b3b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076b3bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b3bf: je 0x76b5a1 */ if (fZ) goto L_0076b5a1;
L_0076b3c5:; BB(0x0076b3c5);
    /* 0076b3c5: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0076b3cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b3cd: je 0x76b5a1 */ if (fZ) goto L_0076b5a1;
L_0076b3d3:; BB(0x0076b3d3);
    /* 0076b3d3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0076b3d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b3db: je 0x76b5a1 */ if (fZ) goto L_0076b5a1;
L_0076b3e1:; BB(0x0076b3e1);
    /* 0076b3e1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0076b3e8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b3ea: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76b3efu); f_008581c5();
    /* 0076b3ef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076b3f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b3f5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0076b3f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b3fa: je 0x76b597 */ if (fZ) goto L_0076b597;
L_0076b400:; BB(0x0076b400);
    /* 0076b400: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0076b407: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076b40e: push dword ptr [0x9f7690] */ { u32 v = R32((u32)(0x9f7690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b414: mov ecx, eax */ r_ecx = r_eax;
    /* 0076b416: call 0x6612a0 */ r_esp -= 4; W32(r_esp, 0x76b41bu); f_006612a0();
    /* 0076b41b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0076b422:; BB(0x0076b422);
    /* 0076b422: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b425: mov dword ptr [0xa9b068], eax */ W32((u32)(0xa9b068u), r_eax);
    /* 0076b42a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076b431: mov ecx, eax */ r_ecx = r_eax;
    /* 0076b433: call 0x661430 */ r_esp -= 4; W32(r_esp, 0x76b438u); f_00661430();
    /* 0076b438: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b43a: je 0x76b55a */ if (fZ) goto L_0076b55a;
L_0076b440:; BB(0x0076b440);
    /* 0076b440: call 0x767460 */ r_esp -= 4; W32(r_esp, 0x76b445u); f_00767460();
    /* 0076b445: call 0x766974 */ r_esp -= 4; W32(r_esp, 0x76b44au); f_00766974();
    /* 0076b44a: call 0x765fdc */ r_esp -= 4; W32(r_esp, 0x76b44fu); f_00765fdc();
    /* 0076b44f: call 0x76ced8 */ r_esp -= 4; W32(r_esp, 0x76b454u); f_0076ced8();
    /* 0076b454: call 0x766f1c */ r_esp -= 4; W32(r_esp, 0x76b459u); f_00766f1c();
    /* 0076b459: call 0x76c804 */ r_esp -= 4; W32(r_esp, 0x76b45eu); f_0076c804();
    /* 0076b45e: call 0x76f58c */ r_esp -= 4; W32(r_esp, 0x76b463u); f_0076f58c();
    /* 0076b463: call 0x67afcc */ r_esp -= 4; W32(r_esp, 0x76b468u); f_0067afcc();
    /* 0076b468: call 0x764f6c */ r_esp -= 4; W32(r_esp, 0x76b46du); f_00764f6c();
    /* 0076b46d: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b472: call 0x8148a8 */ r_esp -= 4; W32(r_esp, 0x76b477u); f_008148a8();
    /* 0076b477: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b478: fstp dword ptr [0xa9b064] */ W_F32((u32)(0xa9b064u), ST(0)); FPOP();
    /* 0076b47e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b480: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0076b483:; BB(0x0076b483);
    /* 0076b483: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0076b48a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b48c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76b491u); f_008581c5();
    /* 0076b491: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076b494: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b497: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0076b49a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b49c: je 0x76b550 */ if (fZ) goto L_0076b550;
L_0076b4a2:; BB(0x0076b4a2);
    /* 0076b4a2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0076b4a9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0076b4b0: mov ecx, eax */ r_ecx = r_eax;
    /* 0076b4b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b4b4: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b4b9: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b4be: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b4c3: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x76b4c8u); f_005795a0();
    /* 0076b4c8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0076b4cf:; BB(0x0076b4cf);
    /* 0076b4cf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b4d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b4d5: mov dword ptr [edx*4 + 0xa9b080], eax */ W32((u32)(r_edx*4+0xa9b080u), r_eax);
    /* 0076b4dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076b4e3: mov eax, edx */ r_eax = r_edx;
    /* 0076b4e5: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 0076b4eb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0076b4ee: push dword ptr [edx*8 + 0x9f75c8] */ { u32 v = R32((u32)(r_edx*8+0x9f75c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b4f5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76b4fau); f_005b8610();
    /* 0076b4fa: mov edx, dword ptr [0xa9b06c] */ r_edx = R32((u32)(0xa9b06cu));
    /* 0076b500: mov edi, dword ptr [0x9f6b74] */ r_edi = R32((u32)(0x9f6b74u));
    /* 0076b506: mov esi, dword ptr [edx + 0x430] */ r_esi = R32((u32)(r_edx+0x430u));
    /* 0076b50c: mov ebx, 0x55 */ r_ebx = 0x55u;
    /* 0076b511: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b512: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b513: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b518: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b51b: mov ecx, dword ptr [eax*4 + 0xa9b080] */ r_ecx = R32((u32)(r_eax*4+0xa9b080u));
    /* 0076b522: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x76b527u); f_00579a28();
    /* 0076b527: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b52a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076b52d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076b530: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076b533: jb 0x76b483 */ if (fC) goto L_0076b483;
L_0076b539:; BB(0x0076b539);
    /* 0076b539: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076b53c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076b53f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076b542: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076b545: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076b54c: mov esp, ebp */ r_esp = r_ebp;
    /* 0076b54e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076b54f: ret  */ FN_RET(0x0076b310); r_esp += 4; return;
L_0076b550:; BB(0x0076b550);
    /* 0076b550: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b552: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076b555: jmp 0x76b4cf */ goto L_0076b4cf;
L_0076b55a:; BB(0x0076b55a);
    /* 0076b55a: push dword ptr [0x9f7690] */ { u32 v = R32((u32)(0x9f7690u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b560: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b565: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76b56au); f_0061cdb0();
    /* 0076b56a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b56d: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 0076b573: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076b575: je 0x76b589 */ if (fZ) goto L_0076b589;
L_0076b577:; BB(0x0076b577);
    /* 0076b577: je 0x76b57f */ if (fZ) goto L_0076b57f;
L_0076b579:; BB(0x0076b579);
    /* 0076b579: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b57b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076b57d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x76b57fu); call_ind(t); }
L_0076b57f:; BB(0x0076b57f);
    /* 0076b57f: mov dword ptr [0xa9b068], 0 */ W32((u32)(0xa9b068u), 0x0u);
L_0076b589:; BB(0x0076b589);
    /* 0076b589: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076b58c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076b593: mov esp, ebp */ r_esp = r_ebp;
    /* 0076b595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076b596: ret  */ FN_RET(0x0076b310); r_esp += 4; return;
L_0076b597:; BB(0x0076b597);
    /* 0076b597: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b599: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076b59c: jmp 0x76b422 */ goto L_0076b422;
L_0076b5a1:; BB(0x0076b5a1);
    /* 0076b5a1: push dword ptr [0x9f7680] */ { u32 v = R32((u32)(0x9f7680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b5a7: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b5ac: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76b5b1u); f_0061cdb0();
    /* 0076b5b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b5b4: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 0076b5ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076b5bc: je 0x76b5d1 */ if (fZ) goto L_0076b5d1;
L_0076b5be:; BB(0x0076b5be);
    /* 0076b5be: je 0x76b5c7 */ if (fZ) goto L_0076b5c7;
L_0076b5c0:; BB(0x0076b5c0);
    /* 0076b5c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b5c2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76b5c7u); f_004066a8();
L_0076b5c7:; BB(0x0076b5c7);
    /* 0076b5c7: mov dword ptr [0xa9b06c], 0 */ W32((u32)(0xa9b06cu), 0x0u);
L_0076b5d1:; BB(0x0076b5d1);
    /* 0076b5d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076b5d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076b5db: mov esp, ebp */ r_esp = r_ebp;
    /* 0076b5dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076b5de: ret  */ FN_RET(0x0076b310); r_esp += 4; return;
L_0076b5df:; BB(0x0076b5df);
    /* 0076b5df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b5e1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076b5e4: jmp 0x76b3ae */ goto L_0076b3ae;
}

void f_0076b5ec(void) /* sub_76B5EC */
{
    FN_ENTER(0x0076b5ec);
    /* 0076b5ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b5ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076b5ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b5f1: call 0x788f38 */ r_esp -= 4; W32(r_esp, 0x76b5f6u); f_00788f38();
    /* 0076b5f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b5f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076b5f9: call 0x76b300 */ r_esp -= 4; W32(r_esp, 0x76b5feu); f_0076b300();
    /* 0076b5fe: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076b603: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b604: or eax, 0x1002 */ {  u32 a = r_eax; u32 b = 0x1002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076b609: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 0076b60e: call 0x67ab80 */ r_esp -= 4; W32(r_esp, 0x76b613u); f_0067ab80();
    /* 0076b613: mov dword ptr [ebx + 0x2b8], 0 */ W32((u32)(r_ebx+0x2b8u), 0x0u);
    /* 0076b61d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b61e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076b61f: ret  */ FN_RET(0x0076b5ec); r_esp += 4; return;
}

void f_0076b620(void) /* sub_76B620 */
{
    FN_ENTER(0x0076b620);
    /* 0076b620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b621: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076b622: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076b624: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0076b62b: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b62e: je 0x76b650 */ if (fZ) goto L_0076b650;
L_0076b630:; BB(0x0076b630);
    /* 0076b630: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b633: jne 0x76b64b */ if (!fZ) goto L_0076b64b;
L_0076b635:; BB(0x0076b635);
    /* 0076b635: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b636: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x76b63bu); f_008113e4();
    /* 0076b63b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b63c: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076b641: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076b646: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
L_0076b64b:; BB(0x0076b64b);
    /* 0076b64b: call 0x44bf4c */ r_esp -= 4; W32(r_esp, 0x76b650u); f_0044bf4c();
L_0076b650:; BB(0x0076b650);
    /* 0076b650: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0076b653: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b655: mov esi, eax */ r_esi = r_eax;
L_0076b657:; BB(0x0076b657);
    /* 0076b657: mov edx, dword ptr [ebx + 0xfb0] */ r_edx = R32((u32)(r_ebx+0xfb0u));
    /* 0076b65d: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0076b660: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076b663: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b665: je 0x76b66c */ if (fZ) goto L_0076b66c;
L_0076b667:; BB(0x0076b667);
    /* 0076b667: call 0x764f54 */ r_esp -= 4; W32(r_esp, 0x76b66cu); f_00764f54();
L_0076b66c:; BB(0x0076b66c);
    /* 0076b66c: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076b66f: jl 0x76b657 */ if ((fS!=fO)) goto L_0076b657;
L_0076b671:; BB(0x0076b671);
    /* 0076b671: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0076b674: mov eax, dword ptr [ebx + 0xf74] */ r_eax = R32((u32)(r_ebx+0xf74u));
    /* 0076b67a: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076b67f: mov dword ptr [ebx + 0xf74], eax */ W32((u32)(r_ebx+0xf74u), r_eax);
    /* 0076b685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b686: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076b687: ret  */ FN_RET(0x0076b620); r_esp += 4; return;
}

void f_0076b688(void) /* sub_76B688 */
{
    FN_ENTER(0x0076b688);
    /* 0076b688: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076b689: mov esi, ecx */ r_esi = r_ecx;
    /* 0076b68b: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x76b690u); f_0048dc3c();
    /* 0076b690: mov ecx, esi */ r_ecx = r_esi;
    /* 0076b692: call 0x76b300 */ r_esp -= 4; W32(r_esp, 0x76b697u); f_0076b300();
    /* 0076b697: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0076b69e: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b6a1: jne 0x76b6d4 */ if (!fZ) goto L_0076b6d4;
L_0076b6a3:; BB(0x0076b6a3);
    /* 0076b6a3: mov eax, dword ptr [0xa9b078] */ r_eax = R32((u32)(0xa9b078u));
    /* 0076b6a8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b6ab: jne 0x76b6ba */ if (!fZ) goto L_0076b6ba;
L_0076b6ad:; BB(0x0076b6ad);
    /* 0076b6ad: push 0x9778a8 */ { u32 v = 0x9778a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b6b2: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x76b6b7u); f_00814afc();
    /* 0076b6b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b6b8: jmp 0x76b6c5 */ goto L_0076b6c5;
L_0076b6ba:; BB(0x0076b6ba);
    /* 0076b6ba: push 0x9778bc */ { u32 v = 0x9778bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b6bf: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x76b6c4u); f_00814afc();
    /* 0076b6c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0076b6c5:; BB(0x0076b6c5);
    /* 0076b6c5: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076b6ca: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076b6cd: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 0076b6d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076b6d3: ret  */ FN_RET(0x0076b688); r_esp += 4; return;
L_0076b6d4:; BB(0x0076b6d4);
    /* 0076b6d4: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076b6d7: jl 0x76b6de */ if ((fS!=fO)) goto L_0076b6de;
L_0076b6d9:; BB(0x0076b6d9);
    /* 0076b6d9: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076b6dc: jle 0x76b6f2 */ if ((fZ||fS!=fO)) goto L_0076b6f2;
L_0076b6de:; BB(0x0076b6de);
    /* 0076b6de: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076b6e3: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076b6e6: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 0076b6eb: call 0x76f4f4 */ r_esp -= 4; W32(r_esp, 0x76b6f0u); f_0076f4f4();
    /* 0076b6f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076b6f1: ret  */ FN_RET(0x0076b688); r_esp += 4; return;
L_0076b6f2:; BB(0x0076b6f2);
    /* 0076b6f2: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x76b6f7u); f_00815434();
    /* 0076b6f7: call 0x8148e4 */ r_esp -= 4; W32(r_esp, 0x76b6fcu); f_008148e4();
    /* 0076b6fc: jmp 0x76b6de */ goto L_0076b6de;
}

void f_0076b700(void) /* sub_76B700 */
{
    FN_ENTER(0x0076b700);
    /* 0076b700: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b703: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b705: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076b708: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076b70a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0076b70e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076b712: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0076b716: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0076b71a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0076b71e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0076b722: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0076b726: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0076b72b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076b72d: jle 0x76b76a */ if ((fZ||fS!=fO)) goto L_0076b76a;
L_0076b72f:; BB(0x0076b72f);
    /* 0076b72f: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0076b733: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
L_0076b737:; BB(0x0076b737);
    /* 0076b737: mov ebp, dword ptr [edx*4 + 0xaad720] */ r_ebp = R32((u32)(r_edx*4+0xaad720u));
    /* 0076b73e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076b741: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b743: je 0x76b75e */ if (fZ) goto L_0076b75e;
L_0076b745:; BB(0x0076b745);
    /* 0076b745: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 0076b748: test edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b74e: jne 0x76b75e */ if (!fZ) goto L_0076b75e;
L_0076b750:; BB(0x0076b750);
    /* 0076b750: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0076b753: mov ebp, dword ptr [ebp + 0x60] */ r_ebp = R32((u32)(r_ebp+0x60u));
    /* 0076b756: mov dword ptr [esp + edx*4 - 4], edi */ W32((u32)(r_esp+r_edx*4+0xfffffffcu), r_edi);
    /* 0076b75a: mov dword ptr [esp + edx*4 + 0xc], ebp */ W32((u32)(r_esp+r_edx*4+0xcu), r_ebp);
L_0076b75e:; BB(0x0076b75e);
    /* 0076b75e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076b760: jl 0x76b737 */ if ((fS!=fO)) goto L_0076b737;
L_0076b762:; BB(0x0076b762);
    /* 0076b762: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0076b766: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_0076b76a:; BB(0x0076b76a);
    /* 0076b76a: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0076b76e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b76f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b771: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076b773: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x76b779u); call_ind(t); }
    /* 0076b779: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0076b77d: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b781: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b785: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b789: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b78d: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b791: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b795: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b799: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b79d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b79e: call 0x76f420 */ r_esp -= 4; W32(r_esp, 0x76b7a3u); f_0076f420();
    /* 0076b7a3: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076b7a6: ret  */ FN_RET(0x0076b700); r_esp += 4; return;
}

void f_0076b7a8(void) /* sub_76B7A8 */
{
    FN_ENTER(0x0076b7a8);
    /* 0076b7a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076b7a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076b7ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b7ad: push 0x8f3c94 */ { u32 v = 0x8f3c94u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b7b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076b7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b7b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076b7c0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b7c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076b7c6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0076b7c9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0076b7cc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0076b7cf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0076b7d2: call 0x76b300 */ r_esp -= 4; W32(r_esp, 0x76b7d7u); f_0076b300();
    /* 0076b7d7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0076b7de: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b7e0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76b7e5u); f_005caba4();
    /* 0076b7e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076b7e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b7eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0076b7ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b7f0: je 0x76b834 */ if (fZ) goto L_0076b834;
L_0076b7f2:; BB(0x0076b7f2);
    /* 0076b7f2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0076b7f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076b800: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b803: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0076b805: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76b80au); f_00768964();
    /* 0076b80a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b80c: jne 0x76b812 */ if (!fZ) goto L_0076b812;
L_0076b80e:; BB(0x0076b80e);
    /* 0076b80e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b810: jmp 0x76b81b */ goto L_0076b81b;
L_0076b812:; BB(0x0076b812);
    /* 0076b812: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b815: lea eax, [eax + 0xe94] */ r_eax = (u32)(r_eax+0xe94u);
L_0076b81b:; BB(0x0076b81b);
    /* 0076b81b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b81e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b81f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b822: push dword ptr [eax + 0x3c8] */ { u32 v = R32((u32)(r_eax+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b828: call 0x766b20 */ r_esp -= 4; W32(r_esp, 0x76b82du); f_00766b20();
    /* 0076b82d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0076b834:; BB(0x0076b834);
    /* 0076b834: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076b83b: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076b840: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076b843: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 0076b848: call 0x76f4f4 */ r_esp -= 4; W32(r_esp, 0x76b84du); f_0076f4f4();
    /* 0076b84d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076b850: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076b857: mov esp, ebp */ r_esp = r_ebp;
    /* 0076b859: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076b85a: ret  */ FN_RET(0x0076b7a8); r_esp += 4; return;
}

void f_0076b85c(void) /* sub_76B85C */
{
    FN_ENTER(0x0076b85c);
    /* 0076b85c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076b85d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076b85f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b861: push 0x8f3cbc */ { u32 v = 0x8f3cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b866: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076b86c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b86d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076b874: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b877: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076b87a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0076b87d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0076b880: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0076b883: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0076b886: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0076b88d: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b88f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76b894u); f_005caba4();
    /* 0076b894: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076b897: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076b89a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0076b89d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076b89f: je 0x76b8e3 */ if (fZ) goto L_0076b8e3;
L_0076b8a1:; BB(0x0076b8a1);
    /* 0076b8a1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0076b8a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076b8af: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b8b2: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0076b8b4: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76b8b9u); f_00768964();
    /* 0076b8b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b8bb: jne 0x76b8c1 */ if (!fZ) goto L_0076b8c1;
L_0076b8bd:; BB(0x0076b8bd);
    /* 0076b8bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076b8bf: jmp 0x76b8ca */ goto L_0076b8ca;
L_0076b8c1:; BB(0x0076b8c1);
    /* 0076b8c1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b8c4: lea eax, [eax + 0xe94] */ r_eax = (u32)(r_eax+0xe94u);
L_0076b8ca:; BB(0x0076b8ca);
    /* 0076b8ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b8cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b8ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076b8d1: push dword ptr [eax + 0x3cc] */ { u32 v = R32((u32)(r_eax+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b8d7: call 0x765c68 */ r_esp -= 4; W32(r_esp, 0x76b8dcu); f_00765c68();
    /* 0076b8dc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0076b8e3:; BB(0x0076b8e3);
    /* 0076b8e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076b8e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076b8ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0076b8ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076b8f0: ret  */ FN_RET(0x0076b85c); r_esp += 4; return;
}

void f_0076b8f4(void) /* sub_76B8F4 */
{
    FN_ENTER(0x0076b8f4);
    /* 0076b8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076b8f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0076b8f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b8f9: push 0x8f3cfe */ { u32 v = 0x8f3cfeu; r_esp -= 4; W32(r_esp, v); }
    /* 0076b8fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076b904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076b90c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076b90f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076b912: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0076b915: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0076b918: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0076b91b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0076b91e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0076b925: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b92a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76b92fu); f_005caba4();
    /* 0076b92f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b930: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0076b933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b935: je 0x76b98a */ if (fZ) goto L_0076b98a;
L_0076b937:; BB(0x0076b937);
    /* 0076b937: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0076b93e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076b945: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b948: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b94a: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76b94fu); f_00768964();
    /* 0076b94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b951: jne 0x76b957 */ if (!fZ) goto L_0076b957;
L_0076b953:; BB(0x0076b953);
    /* 0076b953: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076b955: jmp 0x76b960 */ goto L_0076b960;
L_0076b957:; BB(0x0076b957);
    /* 0076b957: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b95a: lea edx, [eax + 0xdd4] */ r_edx = (u32)(r_eax+0xdd4u);
L_0076b960:; BB(0x0076b960);
    /* 0076b960: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b963: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076b966: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0076b96d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b96e: push dword ptr [0xa9b078] */ { u32 v = R32((u32)(0xa9b078u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b974: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b978: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b97e: call 0x76619c */ r_esp -= 4; W32(r_esp, 0x76b983u); f_0076619c();
    /* 0076b983: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0076b98a:; BB(0x0076b98a);
    /* 0076b98a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076b991: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076b998: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b99d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76b9a2u); f_005caba4();
    /* 0076b9a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076b9a3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0076b9a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076b9a8: je 0x76ba00 */ if (fZ) goto L_0076ba00;
L_0076b9aa:; BB(0x0076b9aa);
    /* 0076b9aa: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0076b9b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076b9b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b9bb: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0076b9bd: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76b9c2u); f_00768964();
    /* 0076b9c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076b9c4: jne 0x76b9ca */ if (!fZ) goto L_0076b9ca;
L_0076b9c6:; BB(0x0076b9c6);
    /* 0076b9c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076b9c8: jmp 0x76b9d3 */ goto L_0076b9d3;
L_0076b9ca:; BB(0x0076b9ca);
    /* 0076b9ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b9cd: lea edx, [eax + 0xe14] */ r_edx = (u32)(r_eax+0xe14u);
L_0076b9d3:; BB(0x0076b9d3);
    /* 0076b9d3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076b9d6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076b9d9: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0076b9e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076b9e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076b9e4: push dword ptr [0xa9b078] */ { u32 v = R32((u32)(0xa9b078u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b9ea: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b9ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076b9ee: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076b9f4: call 0x76619c */ r_esp -= 4; W32(r_esp, 0x76b9f9u); f_0076619c();
    /* 0076b9f9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076ba00:; BB(0x0076ba00);
    /* 0076ba00: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076ba03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076ba06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076ba0d: mov esp, ebp */ r_esp = r_ebp;
    /* 0076ba0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ba10: ret  */ FN_RET(0x0076b8f4); r_esp += 4; return;
}

void f_0076ba14(void) /* sub_76BA14 */
{
    FN_ENTER(0x0076ba14);
    /* 0076ba14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076ba17: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0076ba1f: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0076ba24: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076ba27: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0076ba2b: mov eax, dword ptr [ecx + 0xf7c] */ r_eax = R32((u32)(r_ecx+0xf7cu));
    /* 0076ba31: mov edx, 0x3c */ r_edx = 0x3cu;
    /* 0076ba36: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0076ba3a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0076ba3e: mov eax, dword ptr [esp + eax*4] */ r_eax = R32((u32)(r_esp+r_eax*4));
    /* 0076ba41: mov dword ptr [ecx + 0xf84], eax */ W32((u32)(r_ecx+0xf84u), r_eax);
    /* 0076ba47: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ba4a: ret  */ FN_RET(0x0076ba14); r_esp += 4; return;
}

void f_0076ba4c(void) /* sub_76BA4C */
{
    FN_ENTER(0x0076ba4c);
    /* 0076ba4c: mov dword ptr [ecx + 0xf80], 2 */ W32((u32)(r_ecx+0xf80u), 0x2u);
    /* 0076ba56: push 0x9f7648 */ { u32 v = 0x9f7648u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ba5b: push 0x9f760c */ { u32 v = 0x9f760cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ba60: call 0x7679d0 */ r_esp -= 4; W32(r_esp, 0x76ba65u); f_007679d0();
    /* 0076ba65: ret  */ FN_RET(0x0076ba4c); r_esp += 4; return;
}

void f_0076ba68(void) /* sub_76BA68 */
{
    FN_ENTER(0x0076ba68);
    /* 0076ba68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ba69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ba6a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076ba6c: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 0076ba72: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ba78: je 0x76ba81 */ if (fZ) goto L_0076ba81;
L_0076ba7a:; BB(0x0076ba7a);
    /* 0076ba7a: mov eax, 1 */ r_eax = 0x1u;
    /* 0076ba7f: jmp 0x76ba83 */ goto L_0076ba83;
L_0076ba81:; BB(0x0076ba81);
    /* 0076ba81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076ba83:; BB(0x0076ba83);
    /* 0076ba83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ba85: je 0x76babc */ if (fZ) goto L_0076babc;
L_0076ba87:; BB(0x0076ba87);
    /* 0076ba87: mov eax, dword ptr [ebp + 0xfb4] */ r_eax = R32((u32)(r_ebp+0xfb4u));
    /* 0076ba8d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0076ba90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0076ba92:; BB(0x0076ba92);
    /* 0076ba92: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 0076ba95: mov edi, dword ptr [edi + 0x384] */ r_edi = R32((u32)(r_edi+0x384u));
    /* 0076ba9b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ba9d: je 0x76bad0 */ if (fZ) goto L_0076bad0;
L_0076ba9f:; BB(0x0076ba9f);
    /* 0076ba9f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076baa2: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076baa5: jl 0x76ba92 */ if ((fS!=fO)) goto L_0076ba92;
L_0076baa7:; BB(0x0076baa7);
    /* 0076baa7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0076baaa:; BB(0x0076baaa);
    /* 0076baaa: or ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0076bab0: and ecx, 0xfffff7ff */ {  u32 a = r_ecx; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0076bab6: mov dword ptr [0xa9b070], ecx */ W32((u32)(0xa9b070u), r_ecx);
L_0076babc:; BB(0x0076babc);
    /* 0076babc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076babe: call 0x76b208 */ r_esp -= 4; W32(r_esp, 0x76bac3u); f_0076b208();
    /* 0076bac3: mov dword ptr [ebp + 0xfac], 0 */ W32((u32)(r_ebp+0xfacu), 0x0u);
    /* 0076bacd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076bace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076bacf: ret  */ FN_RET(0x0076ba68); r_esp += 4; return;
L_0076bad0:; BB(0x0076bad0);
    /* 0076bad0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0076bad3: mov dword ptr [ebp + 0xf94], edx */ W32((u32)(r_ebp+0xf94u), r_edx);
    /* 0076bad9: jmp 0x76baaa */ goto L_0076baaa;
}

void f_0076badc(void) /* sub_76BADC */
{
    FN_ENTER(0x0076badc);
    /* 0076badc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076badd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076bae0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076bae2: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0076bae9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076baec: jl 0x76baf3 */ if ((fS!=fO)) goto L_0076baf3;
L_0076baee:; BB(0x0076baee);
    /* 0076baee: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076baf1: jle 0x76baf8 */ if ((fZ||fS!=fO)) goto L_0076baf8;
L_0076baf3:; BB(0x0076baf3);
    /* 0076baf3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076baf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076baf7: ret  */ FN_RET(0x0076badc); r_esp += 4; return;
L_0076baf8:; BB(0x0076baf8);
    /* 0076baf8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0076bafa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076bafc: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76bb01u); f_00768964();
    /* 0076bb01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bb03: je 0x76bb22 */ if (fZ) goto L_0076bb22;
L_0076bb05:; BB(0x0076bb05);
    /* 0076bb05: mov eax, dword ptr [ebx + 0x804] */ r_eax = R32((u32)(r_ebx+0x804u));
    /* 0076bb0b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076bb0e: mov edx, dword ptr [ebx + 0x808] */ r_edx = R32((u32)(r_ebx+0x808u));
    /* 0076bb14: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0076bb18: mov ecx, dword ptr [ebx + 0x80c] */ r_ecx = R32((u32)(r_ebx+0x80cu));
    /* 0076bb1e: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_0076bb22:; BB(0x0076bb22);
    /* 0076bb22: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076bb25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb2a: push 0x6e5 */ { u32 v = 0x6e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb2f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76bb34u); f_00814298();
    /* 0076bb34: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076bb37: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076bb3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076bb3b: ret  */ FN_RET(0x0076badc); r_esp += 4; return;
}

void f_0076bb3c(void) /* sub_76BB3C */
{
    FN_ENTER(0x0076bb3c);
    /* 0076bb3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb3d: mov edi, ecx */ r_edi = r_ecx;
    /* 0076bb3f: call 0x764f6c */ r_esp -= 4; W32(r_esp, 0x76bb44u); f_00764f6c();
    /* 0076bb44: mov ecx, edi */ r_ecx = r_edi;
    /* 0076bb46: call 0x76a58c */ r_esp -= 4; W32(r_esp, 0x76bb4bu); f_0076a58c();
    /* 0076bb4b: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076bb51: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0076bb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb59: mov ecx, edi */ r_ecx = r_edi;
    /* 0076bb5b: call 0x767a3c */ r_esp -= 4; W32(r_esp, 0x76bb60u); f_00767a3c();
    /* 0076bb60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076bb62: je 0x76bb6e */ if (fZ) goto L_0076bb6e;
L_0076bb64:; BB(0x0076bb64);
    /* 0076bb64: mov dword ptr [edi + 0xf50], 0 */ W32((u32)(r_edi+0xf50u), 0x0u);
L_0076bb6e:; BB(0x0076bb6e);
    /* 0076bb6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076bb6f: ret  */ FN_RET(0x0076bb3c); r_esp += 4; return;
}

void f_0076bb70(void) /* sub_76BB70 */
{
    FN_ENTER(0x0076bb70);
    /* 0076bb70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076bb75: mov edi, ecx */ r_edi = r_ecx;
    /* 0076bb77: add edi, 0x168 */ {  u32 a = r_edi; u32 b = 0x168u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076bb7d: mov ecx, edi */ r_ecx = r_edi;
    /* 0076bb7f: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76bb84u); f_00763498();
    /* 0076bb84: mov esi, eax */ r_esi = r_eax;
    /* 0076bb86: mov ecx, edi */ r_ecx = r_edi;
    /* 0076bb88: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76bb8du); f_00763498();
    /* 0076bb8d: mov ebp, eax */ r_ebp = r_eax;
    /* 0076bb8f: mov ecx, edi */ r_ecx = r_edi;
    /* 0076bb91: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76bb96u); f_00763498();
    /* 0076bb96: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076bb99: mov ecx, edi */ r_ecx = r_edi;
    /* 0076bb9b: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76bba0u); f_00763498();
    /* 0076bba0: mov ebx, eax */ r_ebx = r_eax;
    /* 0076bba2: mov ecx, edi */ r_ecx = r_edi;
    /* 0076bba4: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76bba9u); f_00763498();
    /* 0076bba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbab: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0076bbaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbb2: call 0x76f38c */ r_esp -= 4; W32(r_esp, 0x76bbb7u); f_0076f38c();
    /* 0076bbb7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076bbba: call 0x764f60 */ r_esp -= 4; W32(r_esp, 0x76bbbfu); f_00764f60();
    /* 0076bbbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076bbc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076bbc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076bbc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076bbc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076bbc4: ret  */ FN_RET(0x0076bb70); r_esp += 4; return;
}

void f_0076bbc8(void) /* sub_76BBC8 */
{
    FN_ENTER(0x0076bbc8);
    /* 0076bbc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076bbcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076bbcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbd1: call 0x767a3c */ r_esp -= 4; W32(r_esp, 0x76bbd6u); f_00767a3c();
    /* 0076bbd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076bbd8: je 0x76bbe4 */ if (fZ) goto L_0076bbe4;
L_0076bbda:; BB(0x0076bbda);
    /* 0076bbda: mov dword ptr [ebx + 0xf50], 0 */ W32((u32)(r_ebx+0xf50u), 0x0u);
L_0076bbe4:; BB(0x0076bbe4);
    /* 0076bbe4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076bbe5: ret  */ FN_RET(0x0076bbc8); r_esp += 4; return;
}

void f_0076bbe8(void) /* sub_76BBE8 */
{
    FN_ENTER(0x0076bbe8);
    /* 0076bbe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbe9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076bbeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbed: push 0x8f3d3e */ { u32 v = 0x8f3d3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076bbf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076bbf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076bc00: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076bc03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076bc06: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0076bc09: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0076bc0c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0076bc0f: mov eax, dword ptr [ecx + 0xf74] */ r_eax = R32((u32)(r_ecx+0xf74u));
    /* 0076bc15: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0076bc18: mov dword ptr [ecx + 0xf88], 0 */ W32((u32)(r_ecx+0xf88u), 0x0u);
    /* 0076bc22: and eax, 0xfffff640 */ {  u32 a = r_eax; u32 b = 0xfffff640u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076bc27: mov dword ptr [ecx + 0xf74], eax */ W32((u32)(r_ecx+0xf74u), r_eax);
    /* 0076bc2d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0076bc2f: movsx eax, word ptr [ebx + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x10u));
    /* 0076bc33: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0076bc36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076bc38: mov dword ptr [0xa9b074], edx */ W32((u32)(0xa9b074u), r_edx);
    /* 0076bc3e: jl 0x76bc49 */ if ((fS!=fO)) goto L_0076bc49;
L_0076bc40:; BB(0x0076bc40);
    /* 0076bc40: mov edx, ecx */ r_edx = r_ecx;
    /* 0076bc42: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_0076bc49:; BB(0x0076bc49);
    /* 0076bc49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0076bc4c: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076bc4f: call 0x76b110 */ r_esp -= 4; W32(r_esp, 0x76bc54u); f_0076b110();
    /* 0076bc54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0076bc57: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bc5a: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0076bc5d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0076bc5f: or dword ptr [edx + 0xf74], eax */ { u32 ad = (u32)(r_edx+0xf74u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0076bc65: mov ebx, dword ptr [ecx + 0x20] */ r_ebx = R32((u32)(r_ecx+0x20u));
L_0076bc68:; BB(0x0076bc68);
    /* 0076bc68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bc6b: mov edx, dword ptr [eax + 0xfb0] */ r_edx = R32((u32)(r_eax+0xfb0u));
    /* 0076bc71: mov ecx, dword ptr [edx + esi*4] */ r_ecx = R32((u32)(r_edx+r_esi*4));
    /* 0076bc74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bc76: je 0x76bc88 */ if (fZ) goto L_0076bc88;
L_0076bc78:; BB(0x0076bc78);
    /* 0076bc78: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bc7a: jne 0x76bc83 */ if (!fZ) goto L_0076bc83;
L_0076bc7c:; BB(0x0076bc7c);
    /* 0076bc7c: call 0x764cd4 */ r_esp -= 4; W32(r_esp, 0x76bc81u); f_00764cd4();
    /* 0076bc81: jmp 0x76bc88 */ goto L_0076bc88;
L_0076bc83:; BB(0x0076bc83);
    /* 0076bc83: call 0x764ce8 */ r_esp -= 4; W32(r_esp, 0x76bc88u); f_00764ce8();
L_0076bc88:; BB(0x0076bc88);
    /* 0076bc88: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076bc8b: cmp esi, 0x13 */ {  u32 a = r_esi; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076bc8e: jl 0x76bc68 */ if ((fS!=fO)) goto L_0076bc68;
L_0076bc90:; BB(0x0076bc90);
    /* 0076bc90: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0076bc92:; BB(0x0076bc92);
    /* 0076bc92: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bc94: jne 0x76bcc6 */ if (!fZ) goto L_0076bcc6;
L_0076bc96:; BB(0x0076bc96);
    /* 0076bc96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bc99: mov edx, dword ptr [eax + 0xfb4] */ r_edx = R32((u32)(r_eax+0xfb4u));
    /* 0076bc9f: mov ecx, dword ptr [edx + edi*4] */ r_ecx = R32((u32)(r_edx+r_edi*4));
    /* 0076bca2: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0076bca5: call 0x7ba03c */ r_esp -= 4; W32(r_esp, 0x76bcaau); f_007ba03c();
    /* 0076bcaa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bcad: mov edx, dword ptr [eax + 0xfb4] */ r_edx = R32((u32)(r_eax+0xfb4u));
    /* 0076bcb3: mov esi, dword ptr [edx + esi*2] */ r_esi = R32((u32)(r_edx+r_esi*2));
    /* 0076bcb6: movzx ecx, word ptr [esi + 8] */ r_ecx = (u32)R16((u32)(r_esi+0x8u));
    /* 0076bcba: or ecx, 0xffff0004 */ {  u32 a = r_ecx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0076bcc0: mov word ptr [esi + 8], cx */ W16((u32)(r_esi+0x8u), (u16)r_ecx);
    /* 0076bcc4: jmp 0x76bce0 */ goto L_0076bce0;
L_0076bcc6:; BB(0x0076bcc6);
    /* 0076bcc6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bcc9: mov edx, dword ptr [eax + 0xfb4] */ r_edx = R32((u32)(r_eax+0xfb4u));
    /* 0076bccf: mov esi, dword ptr [edx + edi*4] */ r_esi = R32((u32)(r_edx+r_edi*4));
    /* 0076bcd2: movzx ecx, word ptr [esi + 8] */ r_ecx = (u32)R16((u32)(r_esi+0x8u));
    /* 0076bcd6: and ecx, 0xfffb */ {  u32 a = r_ecx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0076bcdc: mov word ptr [esi + 8], cx */ W16((u32)(r_esi+0x8u), (u16)r_ecx);
L_0076bce0:; BB(0x0076bce0);
    /* 0076bce0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0076bce3: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076bce6: jl 0x76bc92 */ if ((fS!=fO)) goto L_0076bc92;
L_0076bce8:; BB(0x0076bce8);
    /* 0076bce8: mov edx, dword ptr [eax + 0xf74] */ r_edx = R32((u32)(r_eax+0xf74u));
    /* 0076bcee: test dl, 0x30 */ {  u32 a = (u8)r_edx; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076bcf1: je 0x76bcfa */ if (fZ) goto L_0076bcfa;
L_0076bcf3:; BB(0x0076bcf3);
    /* 0076bcf3: mov eax, 1 */ r_eax = 0x1u;
    /* 0076bcf8: jmp 0x76bcfc */ goto L_0076bcfc;
L_0076bcfa:; BB(0x0076bcfa);
    /* 0076bcfa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076bcfc:; BB(0x0076bcfc);
    /* 0076bcfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bcfe: je 0x76bd11 */ if (fZ) goto L_0076bd11;
L_0076bd00:; BB(0x0076bd00);
    /* 0076bd00: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd03: call 0x76b1c0 */ r_esp -= 4; W32(r_esp, 0x76bd08u); f_0076b1c0();
    /* 0076bd08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd0b: mov edx, dword ptr [eax + 0xf74] */ r_edx = R32((u32)(r_eax+0xf74u));
L_0076bd11:; BB(0x0076bd11);
    /* 0076bd11: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076bd14: je 0x76bd1d */ if (fZ) goto L_0076bd1d;
L_0076bd16:; BB(0x0076bd16);
    /* 0076bd16: mov eax, 1 */ r_eax = 0x1u;
    /* 0076bd1b: jmp 0x76bd1f */ goto L_0076bd1f;
L_0076bd1d:; BB(0x0076bd1d);
    /* 0076bd1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076bd1f:; BB(0x0076bd1f);
    /* 0076bd1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bd21: je 0x76bd4c */ if (fZ) goto L_0076bd4c;
L_0076bd23:; BB(0x0076bd23);
    /* 0076bd23: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd26: call 0x76b13c */ r_esp -= 4; W32(r_esp, 0x76bd2bu); f_0076b13c();
    /* 0076bd2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bd2d: je 0x76bd3a */ if (fZ) goto L_0076bd3a;
L_0076bd2f:; BB(0x0076bd2f);
    /* 0076bd2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd32: mov edx, dword ptr [eax + 0xf74] */ r_edx = R32((u32)(r_eax+0xf74u));
    /* 0076bd38: jmp 0x76bd4c */ goto L_0076bd4c;
L_0076bd3a:; BB(0x0076bd3a);
    /* 0076bd3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd3d: mov edx, dword ptr [eax + 0xf74] */ r_edx = R32((u32)(r_eax+0xf74u));
    /* 0076bd43: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0076bd46: mov dword ptr [eax + 0xf74], edx */ W32((u32)(r_eax+0xf74u), r_edx);
L_0076bd4c:; BB(0x0076bd4c);
    /* 0076bd4c: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bd52: je 0x76bd5b */ if (fZ) goto L_0076bd5b;
L_0076bd54:; BB(0x0076bd54);
    /* 0076bd54: mov eax, 1 */ r_eax = 0x1u;
    /* 0076bd59: jmp 0x76bd5d */ goto L_0076bd5d;
L_0076bd5b:; BB(0x0076bd5b);
    /* 0076bd5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076bd5d:; BB(0x0076bd5d);
    /* 0076bd5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bd5f: je 0x76bd72 */ if (fZ) goto L_0076bd72;
L_0076bd61:; BB(0x0076bd61);
    /* 0076bd61: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd64: call 0x76a58c */ r_esp -= 4; W32(r_esp, 0x76bd69u); f_0076a58c();
    /* 0076bd69: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd6c: mov edx, dword ptr [eax + 0xf74] */ r_edx = R32((u32)(r_eax+0xf74u));
L_0076bd72:; BB(0x0076bd72);
    /* 0076bd72: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bd78: je 0x76bd81 */ if (fZ) goto L_0076bd81;
L_0076bd7a:; BB(0x0076bd7a);
    /* 0076bd7a: mov eax, 1 */ r_eax = 0x1u;
    /* 0076bd7f: jmp 0x76bd83 */ goto L_0076bd83;
L_0076bd81:; BB(0x0076bd81);
    /* 0076bd81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076bd83:; BB(0x0076bd83);
    /* 0076bd83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bd85: je 0x76bda4 */ if (fZ) goto L_0076bda4;
L_0076bd87:; BB(0x0076bd87);
    /* 0076bd87: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0076bd89:; BB(0x0076bd89);
    /* 0076bd89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bd8c: mov edx, dword ptr [eax + 0xfb4] */ r_edx = R32((u32)(r_eax+0xfb4u));
    /* 0076bd92: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0076bd95: call 0x765200 */ r_esp -= 4; W32(r_esp, 0x76bd9au); f_00765200();
    /* 0076bd9a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bd9d: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076bda0: jl 0x76bd89 */ if ((fS!=fO)) goto L_0076bd89;
L_0076bda2:; BB(0x0076bda2);
    /* 0076bda2: jmp 0x76bdbf */ goto L_0076bdbf;
L_0076bda4:; BB(0x0076bda4);
    /* 0076bda4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0076bda6:; BB(0x0076bda6);
    /* 0076bda6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bda9: mov edx, dword ptr [eax + 0xfb4] */ r_edx = R32((u32)(r_eax+0xfb4u));
    /* 0076bdaf: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0076bdb2: call 0x7652f8 */ r_esp -= 4; W32(r_esp, 0x76bdb7u); f_007652f8();
    /* 0076bdb7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bdba: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076bdbd: jl 0x76bda6 */ if ((fS!=fO)) goto L_0076bda6;
L_0076bdbf:; BB(0x0076bdbf);
    /* 0076bdbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0076bdc2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0076bdc5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0076bdc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076bdca: je 0x76bf4c */ if (fZ) goto L_0076bf4c;
L_0076bdd0:; BB(0x0076bdd0);
    /* 0076bdd0: mov eax, edx */ r_eax = r_edx;
    /* 0076bdd2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0076bdd4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0076bdd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bdd9: je 0x76be5e */ if (fZ) goto L_0076be5e;
L_0076bddf:; BB(0x0076bddf);
    /* 0076bddf: mov eax, edx */ r_eax = r_edx;
    /* 0076bde1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0076bde3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076bde5: jl 0x76bf7e */ if ((fS!=fO)) goto L_0076bf7e;
L_0076bdeb:; BB(0x0076bdeb);
    /* 0076bdeb: mov eax, 1 */ r_eax = 0x1u;
L_0076bdf0:; BB(0x0076bdf0);
    /* 0076bdf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bdf2: je 0x76be5e */ if (fZ) goto L_0076be5e;
L_0076bdf4:; BB(0x0076bdf4);
    /* 0076bdf4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0076bdfb: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076bdfd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76be02u); f_005caba4();
    /* 0076be02: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076be03: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0076be06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076be08: je 0x76be3b */ if (fZ) goto L_0076be3b;
L_0076be0a:; BB(0x0076be0a);
    /* 0076be0a: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0076be11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076be18: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0076be1b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076be1e: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0076be20: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0076be23: mov ecx, eax */ r_ecx = r_eax;
    /* 0076be25: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076be28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076be29: push dword ptr [esi + 0x3c8] */ { u32 v = R32((u32)(r_esi+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076be2f: call 0x767210 */ r_esp -= 4; W32(r_esp, 0x76be34u); f_00767210();
    /* 0076be34: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0076be3b:; BB(0x0076be3b);
    /* 0076be3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076be42: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076be45: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076be48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0076be4a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076be4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076be4f: jl 0x76bf77 */ if ((fS!=fO)) goto L_0076bf77;
L_0076be55:; BB(0x0076be55);
    /* 0076be55: mov eax, 1 */ r_eax = 0x1u;
L_0076be5a:; BB(0x0076be5a);
    /* 0076be5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076be5c: jne 0x76bdf4 */ if (!fZ) goto L_0076bdf4;
L_0076be5e:; BB(0x0076be5e);
    /* 0076be5e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076be61: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0076be64: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0076be67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076be69: je 0x76bf4c */ if (fZ) goto L_0076bf4c;
L_0076be6f:; BB(0x0076be6f);
    /* 0076be6f: mov eax, edx */ r_eax = r_edx;
    /* 0076be71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0076be73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076be75: jl 0x76bf70 */ if ((fS!=fO)) goto L_0076bf70;
L_0076be7b:; BB(0x0076be7b);
    /* 0076be7b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0076be7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076be80: jl 0x76bf70 */ if ((fS!=fO)) goto L_0076bf70;
L_0076be86:; BB(0x0076be86);
    /* 0076be86: mov eax, 1 */ r_eax = 0x1u;
L_0076be8b:; BB(0x0076be8b);
    /* 0076be8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076be8d: je 0x76bf4c */ if (fZ) goto L_0076bf4c;
L_0076be93:; BB(0x0076be93);
    /* 0076be93: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0076be9a: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076be9c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76bea1u); f_005caba4();
    /* 0076bea1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0076bea4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076bea7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0076beaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076beac: je 0x76bf69 */ if (fZ) goto L_0076bf69;
L_0076beb2:; BB(0x0076beb2);
    /* 0076beb2: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0076beb9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076bec0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076bec3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bec6: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 0076bec9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076beca: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x76becfu); f_00768964();
    /* 0076becf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bed1: jne 0x76bed7 */ if (!fZ) goto L_0076bed7;
L_0076bed3:; BB(0x0076bed3);
    /* 0076bed3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076bed5: jmp 0x76beed */ goto L_0076beed;
L_0076bed7:; BB(0x0076bed7);
    /* 0076bed7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076beda: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bedc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bede: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bee0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bee2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bee4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076bee6: lea eax, [eax + ebx + 0x414] */ r_eax = (u32)(r_eax+r_ebx+0x414u);
L_0076beed:; BB(0x0076beed);
    /* 0076beed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076bef0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076bef3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076bef4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076bef7: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076befa: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0076befc: push dword ptr [edx + 0x3c8] */ { u32 v = R32((u32)(r_edx+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076bf02: call 0x7670b8 */ r_esp -= 4; W32(r_esp, 0x76bf07u); f_007670b8();
    /* 0076bf07: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0076bf0e:; BB(0x0076bf0e);
    /* 0076bf0e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076bf15: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076bf18: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0076bf1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bf1d: je 0x76bf29 */ if (fZ) goto L_0076bf29;
L_0076bf1f:; BB(0x0076bf1f);
    /* 0076bf1f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076bf22: mov dword ptr [eax + 0x28], 1 */ W32((u32)(r_eax+0x28u), 0x1u);
L_0076bf29:; BB(0x0076bf29);
    /* 0076bf29: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076bf2c: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076bf2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0076bf31: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076bf34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076bf36: jl 0x76bf65 */ if ((fS!=fO)) goto L_0076bf65;
L_0076bf38:; BB(0x0076bf38);
    /* 0076bf38: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0076bf3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076bf3d: jl 0x76bf65 */ if ((fS!=fO)) goto L_0076bf65;
L_0076bf3f:; BB(0x0076bf3f);
    /* 0076bf3f: mov eax, 1 */ r_eax = 0x1u;
L_0076bf44:; BB(0x0076bf44);
    /* 0076bf44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076bf46: jne 0x76be93 */ if (!fZ) goto L_0076be93;
L_0076bf4c:; BB(0x0076bf4c);
    /* 0076bf4c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076bf4f: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076bf52: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076bf55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076bf58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076bf5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0076bf61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076bf62: ret 4 */ FN_RET(0x0076bbe8); r_esp += 8; return;
L_0076bf65:; BB(0x0076bf65);
    /* 0076bf65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076bf67: jmp 0x76bf44 */ goto L_0076bf44;
L_0076bf69:; BB(0x0076bf69);
    /* 0076bf69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076bf6b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0076bf6e: jmp 0x76bf0e */ goto L_0076bf0e;
L_0076bf70:; BB(0x0076bf70);
    /* 0076bf70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076bf72: jmp 0x76be8b */ goto L_0076be8b;
L_0076bf77:; BB(0x0076bf77);
    /* 0076bf77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076bf79: jmp 0x76be5a */ goto L_0076be5a;
L_0076bf7e:; BB(0x0076bf7e);
    /* 0076bf7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076bf80: jmp 0x76bdf0 */ goto L_0076bdf0;
}

void f_0076bf88(void) /* sub_76BF88 */
{
    FN_ENTER(0x0076bf88);
    /* 0076bf88: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076bf8c: mov dword ptr [ecx + 0xfa0], 0xffffffff */ W32((u32)(r_ecx+0xfa0u), 0xffffffffu);
    /* 0076bf96: call 0x76bfa0 */ r_esp -= 4; W32(r_esp, 0x76bf9bu); f_0076bfa0();
    /* 0076bf9b: ret 4 */ FN_RET(0x0076bf88); r_esp += 8; return;
}

void f_0076bfa0(void) /* sub_76BFA0 */
{
    FN_ENTER(0x0076bfa0);
    /* 0076bfa0: mov eax, dword ptr [ecx + 0xfa0] */ r_eax = R32((u32)(r_ecx+0xfa0u));
    /* 0076bfa6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076bfa9: je 0x76bfb0 */ if (fZ) goto L_0076bfb0;
L_0076bfab:; BB(0x0076bfab);
    /* 0076bfab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076bfad: ret 4 */ FN_RET(0x0076bfa0); r_esp += 8; return;
L_0076bfb0:; BB(0x0076bfb0);
    /* 0076bfb0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076bfb4: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0076bfbb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076bfbd: je 0x76bfab */ if (fZ) goto L_0076bfab;
L_0076bfbf:; BB(0x0076bfbf);
    /* 0076bfbf: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076bfc3: mov dword ptr [ecx + 0xfa0], edx */ W32((u32)(r_ecx+0xfa0u), r_edx);
    /* 0076bfc9: mov eax, 1 */ r_eax = 0x1u;
    /* 0076bfce: ret 4 */ FN_RET(0x0076bfa0); r_esp += 8; return;
}

void f_0076bfd4(void) /* sub_76BFD4 */
{
    FN_ENTER(0x0076bfd4);
    /* 0076bfd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076bfd6: mov dword ptr [0xa9b09c], eax */ W32((u32)(0xa9b09cu), r_eax);
    /* 0076bfdb: mov dword ptr [0xa9b098], eax */ W32((u32)(0xa9b098u), r_eax);
    /* 0076bfe0: mov dword ptr [0xa9b094], eax */ W32((u32)(0xa9b094u), r_eax);
    /* 0076bfe5: mov dword ptr [0xa9b090], eax */ W32((u32)(0xa9b090u), r_eax);
    /* 0076bfea: mov dword ptr [0xa9b08c], eax */ W32((u32)(0xa9b08cu), r_eax);
    /* 0076bfef: ret  */ FN_RET(0x0076bfd4); r_esp += 4; return;
}

void f_0076bff0(void) /* sub_76BFF0 */
{
    FN_ENTER(0x0076bff0);
    /* 0076bff0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076bff1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076bff2: mov eax, ecx */ r_eax = r_ecx;
    /* 0076bff4: lea ecx, [eax + 0x414] */ r_ecx = (u32)(r_eax+0x414u);
    /* 0076bffa: add eax, 0xed4 */ {  u32 a = r_eax; u32 b = 0xed4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076bfff: mov ebx, eax */ r_ebx = r_eax;
    /* 0076c001: mov esi, ecx */ r_esi = r_ecx;
L_0076c003:; BB(0x0076c003);
    /* 0076c003: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c005: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x76c00au); f_00830cd8();
    /* 0076c00a: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076c00d: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076c00f: jg 0x76c003 */ if ((!fZ&&fS==fO)) goto L_0076c003;
L_0076c011:; BB(0x0076c011);
    /* 0076c011: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076c012: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c013: ret  */ FN_RET(0x0076bff0); r_esp += 4; return;
}

