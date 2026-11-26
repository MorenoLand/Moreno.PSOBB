#include "protos.h"

void f_0068b002(void)
{
    FN_ENTER(0x0068b002);
    /* 0068b002: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 0068b006: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b00bu); f_005d6a3c();
    /* 0068b00b: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0068b00f: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b015: mov eax, 3 */ r_eax = 0x3u;
    /* 0068b01a: mov byte ptr [esp + 0x70], al */ W8((u32)(r_esp+0x70u), (u8)r_eax);
    /* 0068b01e: mov byte ptr [esp + 0x71], al */ W8((u32)(r_esp+0x71u), (u8)r_eax);
    /* 0068b022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b023: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b028u); f_006a4e50();
    /* 0068b028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b02a: je 0x68bcd7 */ if (fZ) goto L_0068bcd7;
L_0068b030:; BB(0x0068b030);
    /* 0068b030: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b032: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b037u); f_006a60dc();
    /* 0068b037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b039: je 0x68bcca */ if (fZ) goto L_0068bcca;
L_0068b03f:; BB(0x0068b03f);
    /* 0068b03f: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b045: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b04au); f_0068be84();
    /* 0068b04a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b04c: jne 0x68b133 */ if (!fZ) goto L_0068b133;
L_0068b052:; BB(0x0068b052);
    /* 0068b052: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b053: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b059: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b05eu); f_006a6a60();
    /* 0068b05e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b060: je 0x68b133 */ if (fZ) goto L_0068b133;
L_0068b066:; BB(0x0068b066);
    /* 0068b066: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b068: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b06du); f_006a60dc();
    /* 0068b06d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b06f: je 0x68b133 */ if (fZ) goto L_0068b133;
L_0068b075:; BB(0x0068b075);
    /* 0068b075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b076: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b078: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b07du); f_0068be94();
    /* 0068b07d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b07f: je 0x68b124 */ if (fZ) goto L_0068b124;
L_0068b085:; BB(0x0068b085);
    /* 0068b085: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b087: je 0x68b0a6 */ if (fZ) goto L_0068b0a6;
L_0068b089:; BB(0x0068b089);
    /* 0068b089: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b090: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b093: jne 0x68b09c */ if (!fZ) goto L_0068b09c;
L_0068b095:; BB(0x0068b095);
    /* 0068b095: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b09a: jmp 0x68b09e */ goto L_0068b09e;
L_0068b09c:; BB(0x0068b09c);
    /* 0068b09c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b09e:; BB(0x0068b09e);
    /* 0068b09e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b0a0: jne 0x68b133 */ if (!fZ) goto L_0068b133;
L_0068b0a6:; BB(0x0068b0a6);
    /* 0068b0a6: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b0aa: mov byte ptr [esp + 0x84], 0x27 */ W8((u32)(r_esp+0x84u), 0x27u);
    /* 0068b0b2: mov word ptr [esp + 0x86], ax */ W16((u32)(r_esp+0x86u), (u16)r_eax);
    /* 0068b0ba: mov byte ptr [esp + 0x85], 2 */ W8((u32)(r_esp+0x85u), 0x2u);
    /* 0068b0c2: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 0068b0c9: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 0068b0d0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68b0d5u); f_008003e0();
    /* 0068b0d5: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 0068b0d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b0da: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b0e0: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b0e5u); f_006a4e50();
    /* 0068b0e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b0e7: je 0x68bcbd */ if (fZ) goto L_0068bcbd;
L_0068b0ed:; BB(0x0068b0ed);
    /* 0068b0ed: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b0ef: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b0f4u); f_006a60dc();
    /* 0068b0f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b0f6: je 0x68bcb0 */ if (fZ) goto L_0068bcb0;
L_0068b0fc:; BB(0x0068b0fc);
    /* 0068b0fc: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b0fe: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68b103u); f_008173b4();
    /* 0068b103: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b105: jne 0x68b114 */ if (!fZ) goto L_0068b114;
L_0068b107:; BB(0x0068b107);
    /* 0068b107: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b109: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b10f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b110: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b111: ret 4 */ FN_RET(0x0068b002); r_esp += 8; return;
L_0068b114:; BB(0x0068b114);
    /* 0068b114: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b119: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b11f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b120: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b121: ret 4 */ FN_RET(0x0068b002); r_esp += 8; return;
L_0068b124:; BB(0x0068b124);
    /* 0068b124: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b129: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b12b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68b130u); f_00814298();
    /* 0068b130: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b133:; BB(0x0068b133);
    /* 0068b133: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b135: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b13b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b13c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b13d: ret 4 */ FN_RET(0x0068b002); r_esp += 8; return;
L_0068bcb0:; BB(0x0068bcb0);
    /* 0068bcb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bcb2: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bcb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bcb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bcba: ret 4 */ FN_RET(0x0068b002); r_esp += 8; return;
L_0068bcbd:; BB(0x0068bcbd);
    /* 0068bcbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bcbf: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bcc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bcc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bcc7: ret 4 */ FN_RET(0x0068b002); r_esp += 8; return;
L_0068bcca:; BB(0x0068bcca);
    /* 0068bcca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bccc: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bcd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bcd3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bcd4: ret 4 */ FN_RET(0x0068b002); r_esp += 8; return;
L_0068bcd7:; BB(0x0068bcd7);
    /* 0068bcd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bcd9: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bcdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bce0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bce1: ret 4 */ FN_RET(0x0068b002); r_esp += 8; return;
}

void f_0068b140(void)
{
    FN_ENTER(0x0068b140);
    /* 0068b140: lea ecx, [esp + 0x8c] */ r_ecx = (u32)(r_esp+0x8cu);
    /* 0068b147: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b14cu); f_005d6a3c();
    /* 0068b14c: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b152: mov byte ptr [esp + 0x8c], 3 */ W8((u32)(r_esp+0x8cu), 0x3u);
    /* 0068b15a: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 0068b161: mov byte ptr [esp + 0x8d], 6 */ W8((u32)(r_esp+0x8du), 0x6u);
    /* 0068b169: mov byte ptr [esp + 0x8e], 1 */ W8((u32)(r_esp+0x8eu), 0x1u);
    /* 0068b171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b172: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b177u); f_006a4e50();
    /* 0068b177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b179: je 0x68bd0b */ if (fZ) goto L_0068bd0b;
L_0068b17f:; BB(0x0068b17f);
    /* 0068b17f: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b181: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b186u); f_006a60dc();
    /* 0068b186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b188: je 0x68bcfe */ if (fZ) goto L_0068bcfe;
L_0068b18e:; BB(0x0068b18e);
    /* 0068b18e: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b194: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b199u); f_0068be84();
    /* 0068b199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b19b: jne 0x68b285 */ if (!fZ) goto L_0068b285;
L_0068b1a1:; BB(0x0068b1a1);
    /* 0068b1a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b1a2: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b1a8: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b1adu); f_006a6a60();
    /* 0068b1ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b1af: je 0x68b285 */ if (fZ) goto L_0068b285;
L_0068b1b5:; BB(0x0068b1b5);
    /* 0068b1b5: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b1b7: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b1bcu); f_006a60dc();
    /* 0068b1bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b1be: je 0x68b285 */ if (fZ) goto L_0068b285;
L_0068b1c4:; BB(0x0068b1c4);
    /* 0068b1c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b1c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b1c7: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b1ccu); f_0068be94();
    /* 0068b1cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b1ce: je 0x68b276 */ if (fZ) goto L_0068b276;
L_0068b1d4:; BB(0x0068b1d4);
    /* 0068b1d4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b1d6: je 0x68b1f5 */ if (fZ) goto L_0068b1f5;
L_0068b1d8:; BB(0x0068b1d8);
    /* 0068b1d8: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b1df: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b1e2: jne 0x68b1eb */ if (!fZ) goto L_0068b1eb;
L_0068b1e4:; BB(0x0068b1e4);
    /* 0068b1e4: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b1e9: jmp 0x68b1ed */ goto L_0068b1ed;
L_0068b1eb:; BB(0x0068b1eb);
    /* 0068b1eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b1ed:; BB(0x0068b1ed);
    /* 0068b1ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b1ef: jne 0x68b285 */ if (!fZ) goto L_0068b285;
L_0068b1f5:; BB(0x0068b1f5);
    /* 0068b1f5: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b1f9: mov byte ptr [esp + 0xa0], 0x27 */ W8((u32)(r_esp+0xa0u), 0x27u);
    /* 0068b201: mov word ptr [esp + 0xa2], ax */ W16((u32)(r_esp+0xa2u), (u16)r_eax);
    /* 0068b209: mov byte ptr [esp + 0xa1], 2 */ W8((u32)(r_esp+0xa1u), 0x2u);
    /* 0068b211: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 0068b218: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 0068b21f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68b224u); f_008003e0();
    /* 0068b224: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 0068b22b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b22c: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b232: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b237u); f_006a4e50();
    /* 0068b237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b239: je 0x68bcf1 */ if (fZ) goto L_0068bcf1;
L_0068b23f:; BB(0x0068b23f);
    /* 0068b23f: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b241: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b246u); f_006a60dc();
    /* 0068b246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b248: je 0x68bce4 */ if (fZ) goto L_0068bce4;
L_0068b24e:; BB(0x0068b24e);
    /* 0068b24e: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b250: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68b255u); f_008173b4();
    /* 0068b255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b257: jne 0x68b266 */ if (!fZ) goto L_0068b266;
L_0068b259:; BB(0x0068b259);
    /* 0068b259: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b25b: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b261: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b262: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b263: ret 4 */ FN_RET(0x0068b140); r_esp += 8; return;
L_0068b266:; BB(0x0068b266);
    /* 0068b266: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b26b: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b271: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b272: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b273: ret 4 */ FN_RET(0x0068b140); r_esp += 8; return;
L_0068b276:; BB(0x0068b276);
    /* 0068b276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b27b: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b27d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68b282u); f_00814298();
    /* 0068b282: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b285:; BB(0x0068b285);
    /* 0068b285: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b287: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b28d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b28e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b28f: ret 4 */ FN_RET(0x0068b140); r_esp += 8; return;
L_0068bce4:; BB(0x0068bce4);
    /* 0068bce4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bce6: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bcec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bced: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bcee: ret 4 */ FN_RET(0x0068b140); r_esp += 8; return;
L_0068bcf1:; BB(0x0068bcf1);
    /* 0068bcf1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bcf3: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bcf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bcfa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bcfb: ret 4 */ FN_RET(0x0068b140); r_esp += 8; return;
L_0068bcfe:; BB(0x0068bcfe);
    /* 0068bcfe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd00: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd08: ret 4 */ FN_RET(0x0068b140); r_esp += 8; return;
L_0068bd0b:; BB(0x0068bd0b);
    /* 0068bd0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd0d: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd15: ret 4 */ FN_RET(0x0068b140); r_esp += 8; return;
}

void f_0068b292(void)
{
    FN_ENTER(0x0068b292);
    /* 0068b292: lea ecx, [esp + 0xa8] */ r_ecx = (u32)(r_esp+0xa8u);
    /* 0068b299: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b29eu); f_005d6a3c();
    /* 0068b29e: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b2a4: mov byte ptr [esp + 0xa8], 3 */ W8((u32)(r_esp+0xa8u), 0x3u);
    /* 0068b2ac: lea eax, [esp + 0xa8] */ r_eax = (u32)(r_esp+0xa8u);
    /* 0068b2b3: mov byte ptr [esp + 0xa9], 6 */ W8((u32)(r_esp+0xa9u), 0x6u);
    /* 0068b2bb: mov byte ptr [esp + 0xaa], 0 */ W8((u32)(r_esp+0xaau), 0x0u);
    /* 0068b2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2c4: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b2c9u); f_006a4e50();
    /* 0068b2c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b2cb: je 0x68bd3f */ if (fZ) goto L_0068bd3f;
L_0068b2d1:; BB(0x0068b2d1);
    /* 0068b2d1: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b2d3: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b2d8u); f_006a60dc();
    /* 0068b2d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b2da: je 0x68bd32 */ if (fZ) goto L_0068bd32;
L_0068b2e0:; BB(0x0068b2e0);
    /* 0068b2e0: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b2e6: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b2ebu); f_0068be84();
    /* 0068b2eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b2ed: jne 0x68b3d7 */ if (!fZ) goto L_0068b3d7;
L_0068b2f3:; BB(0x0068b2f3);
    /* 0068b2f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b2f4: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b2fa: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b2ffu); f_006a6a60();
    /* 0068b2ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b301: je 0x68b3d7 */ if (fZ) goto L_0068b3d7;
L_0068b307:; BB(0x0068b307);
    /* 0068b307: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b309: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b30eu); f_006a60dc();
    /* 0068b30e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b310: je 0x68b3d7 */ if (fZ) goto L_0068b3d7;
L_0068b316:; BB(0x0068b316);
    /* 0068b316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b317: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b319: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b31eu); f_0068be94();
    /* 0068b31e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b320: je 0x68b3c8 */ if (fZ) goto L_0068b3c8;
L_0068b326:; BB(0x0068b326);
    /* 0068b326: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b328: je 0x68b347 */ if (fZ) goto L_0068b347;
L_0068b32a:; BB(0x0068b32a);
    /* 0068b32a: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b331: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b334: jne 0x68b33d */ if (!fZ) goto L_0068b33d;
L_0068b336:; BB(0x0068b336);
    /* 0068b336: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b33b: jmp 0x68b33f */ goto L_0068b33f;
L_0068b33d:; BB(0x0068b33d);
    /* 0068b33d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b33f:; BB(0x0068b33f);
    /* 0068b33f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b341: jne 0x68b3d7 */ if (!fZ) goto L_0068b3d7;
L_0068b347:; BB(0x0068b347);
    /* 0068b347: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b34b: mov byte ptr [esp + 0xbc], 0x27 */ W8((u32)(r_esp+0xbcu), 0x27u);
    /* 0068b353: mov word ptr [esp + 0xbe], ax */ W16((u32)(r_esp+0xbeu), (u16)r_eax);
    /* 0068b35b: mov byte ptr [esp + 0xbd], 2 */ W8((u32)(r_esp+0xbdu), 0x2u);
    /* 0068b363: mov dword ptr [esp + 0xc0], edi */ W32((u32)(r_esp+0xc0u), r_edi);
    /* 0068b36a: lea ecx, [esp + 0xbc] */ r_ecx = (u32)(r_esp+0xbcu);
    /* 0068b371: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68b376u); f_008003e0();
    /* 0068b376: lea eax, [esp + 0xa8] */ r_eax = (u32)(r_esp+0xa8u);
    /* 0068b37d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b37e: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b384: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b389u); f_006a4e50();
    /* 0068b389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b38b: je 0x68bd25 */ if (fZ) goto L_0068bd25;
L_0068b391:; BB(0x0068b391);
    /* 0068b391: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b393: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b398u); f_006a60dc();
    /* 0068b398: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b39a: je 0x68bd18 */ if (fZ) goto L_0068bd18;
L_0068b3a0:; BB(0x0068b3a0);
    /* 0068b3a0: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b3a2: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68b3a7u); f_008173b4();
    /* 0068b3a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b3a9: jne 0x68b3b8 */ if (!fZ) goto L_0068b3b8;
L_0068b3ab:; BB(0x0068b3ab);
    /* 0068b3ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b3ad: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b3b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b3b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b3b5: ret 4 */ FN_RET(0x0068b292); r_esp += 8; return;
L_0068b3b8:; BB(0x0068b3b8);
    /* 0068b3b8: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b3bd: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b3c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b3c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b3c5: ret 4 */ FN_RET(0x0068b292); r_esp += 8; return;
L_0068b3c8:; BB(0x0068b3c8);
    /* 0068b3c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b3ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3cd: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b3cf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68b3d4u); f_00814298();
    /* 0068b3d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b3d7:; BB(0x0068b3d7);
    /* 0068b3d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b3d9: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b3df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b3e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b3e1: ret 4 */ FN_RET(0x0068b292); r_esp += 8; return;
L_0068bd18:; BB(0x0068bd18);
    /* 0068bd18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd1a: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd22: ret 4 */ FN_RET(0x0068b292); r_esp += 8; return;
L_0068bd25:; BB(0x0068bd25);
    /* 0068bd25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd27: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd2f: ret 4 */ FN_RET(0x0068b292); r_esp += 8; return;
L_0068bd32:; BB(0x0068bd32);
    /* 0068bd32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd34: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd3c: ret 4 */ FN_RET(0x0068b292); r_esp += 8; return;
L_0068bd3f:; BB(0x0068bd3f);
    /* 0068bd3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd41: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd48: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd49: ret 4 */ FN_RET(0x0068b292); r_esp += 8; return;
}

void f_0068b3e4(void)
{
    FN_ENTER(0x0068b3e4);
    /* 0068b3e4: lea ecx, [esp + 0xc4] */ r_ecx = (u32)(r_esp+0xc4u);
    /* 0068b3eb: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b3f0u); f_005d6a3c();
    /* 0068b3f0: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b3f6: mov byte ptr [esp + 0xc4], 3 */ W8((u32)(r_esp+0xc4u), 0x3u);
    /* 0068b3fe: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 0068b405: mov byte ptr [esp + 0xc5], 1 */ W8((u32)(r_esp+0xc5u), 0x1u);
    /* 0068b40d: mov byte ptr [esp + 0xc6], 2 */ W8((u32)(r_esp+0xc6u), 0x2u);
    /* 0068b415: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b416: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b41bu); f_006a4e50();
    /* 0068b41b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b41d: je 0x68bd73 */ if (fZ) goto L_0068bd73;
L_0068b423:; BB(0x0068b423);
    /* 0068b423: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b425: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b42au); f_006a60dc();
    /* 0068b42a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b42c: je 0x68bd66 */ if (fZ) goto L_0068bd66;
L_0068b432:; BB(0x0068b432);
    /* 0068b432: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b438: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b43du); f_0068be84();
    /* 0068b43d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b43f: jne 0x68b529 */ if (!fZ) goto L_0068b529;
L_0068b445:; BB(0x0068b445);
    /* 0068b445: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b446: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b44c: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b451u); f_006a6a60();
    /* 0068b451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b453: je 0x68b529 */ if (fZ) goto L_0068b529;
L_0068b459:; BB(0x0068b459);
    /* 0068b459: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b45b: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b460u); f_006a60dc();
    /* 0068b460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b462: je 0x68b529 */ if (fZ) goto L_0068b529;
L_0068b468:; BB(0x0068b468);
    /* 0068b468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b469: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b46b: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b470u); f_0068be94();
    /* 0068b470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b472: je 0x68b51a */ if (fZ) goto L_0068b51a;
L_0068b478:; BB(0x0068b478);
    /* 0068b478: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b47a: je 0x68b499 */ if (fZ) goto L_0068b499;
L_0068b47c:; BB(0x0068b47c);
    /* 0068b47c: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b483: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b486: jne 0x68b48f */ if (!fZ) goto L_0068b48f;
L_0068b488:; BB(0x0068b488);
    /* 0068b488: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b48d: jmp 0x68b491 */ goto L_0068b491;
L_0068b48f:; BB(0x0068b48f);
    /* 0068b48f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b491:; BB(0x0068b491);
    /* 0068b491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b493: jne 0x68b529 */ if (!fZ) goto L_0068b529;
L_0068b499:; BB(0x0068b499);
    /* 0068b499: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b49d: mov byte ptr [esp + 0xd8], 0x27 */ W8((u32)(r_esp+0xd8u), 0x27u);
    /* 0068b4a5: mov word ptr [esp + 0xda], ax */ W16((u32)(r_esp+0xdau), (u16)r_eax);
    /* 0068b4ad: mov byte ptr [esp + 0xd9], 2 */ W8((u32)(r_esp+0xd9u), 0x2u);
    /* 0068b4b5: mov dword ptr [esp + 0xdc], edi */ W32((u32)(r_esp+0xdcu), r_edi);
    /* 0068b4bc: lea ecx, [esp + 0xd8] */ r_ecx = (u32)(r_esp+0xd8u);
    /* 0068b4c3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68b4c8u); f_008003e0();
    /* 0068b4c8: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 0068b4cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b4d0: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b4d6: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b4dbu); f_006a4e50();
    /* 0068b4db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b4dd: je 0x68bd59 */ if (fZ) goto L_0068bd59;
L_0068b4e3:; BB(0x0068b4e3);
    /* 0068b4e3: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b4e5: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b4eau); f_006a60dc();
    /* 0068b4ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b4ec: je 0x68bd4c */ if (fZ) goto L_0068bd4c;
L_0068b4f2:; BB(0x0068b4f2);
    /* 0068b4f2: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b4f4: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68b4f9u); f_008173b4();
    /* 0068b4f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b4fb: jne 0x68b50a */ if (!fZ) goto L_0068b50a;
L_0068b4fd:; BB(0x0068b4fd);
    /* 0068b4fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b4ff: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b506: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b507: ret 4 */ FN_RET(0x0068b3e4); r_esp += 8; return;
L_0068b50a:; BB(0x0068b50a);
    /* 0068b50a: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b50f: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b515: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b517: ret 4 */ FN_RET(0x0068b3e4); r_esp += 8; return;
L_0068b51a:; BB(0x0068b51a);
    /* 0068b51a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b51c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b51d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b51e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b51f: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b521: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68b526u); f_00814298();
    /* 0068b526: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b529:; BB(0x0068b529);
    /* 0068b529: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b52b: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b532: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b533: ret 4 */ FN_RET(0x0068b3e4); r_esp += 8; return;
L_0068bd4c:; BB(0x0068bd4c);
    /* 0068bd4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd4e: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd56: ret 4 */ FN_RET(0x0068b3e4); r_esp += 8; return;
L_0068bd59:; BB(0x0068bd59);
    /* 0068bd59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd5b: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd62: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd63: ret 4 */ FN_RET(0x0068b3e4); r_esp += 8; return;
L_0068bd66:; BB(0x0068bd66);
    /* 0068bd66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd68: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd70: ret 4 */ FN_RET(0x0068b3e4); r_esp += 8; return;
L_0068bd73:; BB(0x0068bd73);
    /* 0068bd73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd75: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd7d: ret 4 */ FN_RET(0x0068b3e4); r_esp += 8; return;
}

void f_0068b536(void)
{
    FN_ENTER(0x0068b536);
    /* 0068b536: lea ecx, [esp + 0xe0] */ r_ecx = (u32)(r_esp+0xe0u);
    /* 0068b53d: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b542u); f_005d6a3c();
    /* 0068b542: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b548: mov byte ptr [esp + 0xe0], 3 */ W8((u32)(r_esp+0xe0u), 0x3u);
    /* 0068b550: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b555: mov byte ptr [esp + 0xe1], al */ W8((u32)(r_esp+0xe1u), (u8)r_eax);
    /* 0068b55c: mov byte ptr [esp + 0xe2], al */ W8((u32)(r_esp+0xe2u), (u8)r_eax);
    /* 0068b563: lea edx, [esp + 0xe0] */ r_edx = (u32)(r_esp+0xe0u);
    /* 0068b56a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b56b: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b570u); f_006a4e50();
    /* 0068b570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b572: je 0x68bda7 */ if (fZ) goto L_0068bda7;
L_0068b578:; BB(0x0068b578);
    /* 0068b578: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b57a: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b57fu); f_006a60dc();
    /* 0068b57f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b581: je 0x68bd9a */ if (fZ) goto L_0068bd9a;
L_0068b587:; BB(0x0068b587);
    /* 0068b587: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b58d: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b592u); f_0068be84();
    /* 0068b592: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b594: jne 0x68b67e */ if (!fZ) goto L_0068b67e;
L_0068b59a:; BB(0x0068b59a);
    /* 0068b59a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b59b: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b5a1: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b5a6u); f_006a6a60();
    /* 0068b5a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b5a8: je 0x68b67e */ if (fZ) goto L_0068b67e;
L_0068b5ae:; BB(0x0068b5ae);
    /* 0068b5ae: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b5b0: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b5b5u); f_006a60dc();
    /* 0068b5b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b5b7: je 0x68b67e */ if (fZ) goto L_0068b67e;
L_0068b5bd:; BB(0x0068b5bd);
    /* 0068b5bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b5be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b5c0: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b5c5u); f_0068be94();
    /* 0068b5c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b5c7: je 0x68b66f */ if (fZ) goto L_0068b66f;
L_0068b5cd:; BB(0x0068b5cd);
    /* 0068b5cd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b5cf: je 0x68b5ee */ if (fZ) goto L_0068b5ee;
L_0068b5d1:; BB(0x0068b5d1);
    /* 0068b5d1: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b5d8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b5db: jne 0x68b5e4 */ if (!fZ) goto L_0068b5e4;
L_0068b5dd:; BB(0x0068b5dd);
    /* 0068b5dd: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b5e2: jmp 0x68b5e6 */ goto L_0068b5e6;
L_0068b5e4:; BB(0x0068b5e4);
    /* 0068b5e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b5e6:; BB(0x0068b5e6);
    /* 0068b5e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b5e8: jne 0x68b67e */ if (!fZ) goto L_0068b67e;
L_0068b5ee:; BB(0x0068b5ee);
    /* 0068b5ee: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b5f2: mov byte ptr [esp + 0xf4], 0x27 */ W8((u32)(r_esp+0xf4u), 0x27u);
    /* 0068b5fa: mov word ptr [esp + 0xf6], ax */ W16((u32)(r_esp+0xf6u), (u16)r_eax);
    /* 0068b602: mov byte ptr [esp + 0xf5], 2 */ W8((u32)(r_esp+0xf5u), 0x2u);
    /* 0068b60a: mov dword ptr [esp + 0xf8], edi */ W32((u32)(r_esp+0xf8u), r_edi);
    /* 0068b611: lea ecx, [esp + 0xf4] */ r_ecx = (u32)(r_esp+0xf4u);
    /* 0068b618: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68b61du); f_008003e0();
    /* 0068b61d: lea eax, [esp + 0xe0] */ r_eax = (u32)(r_esp+0xe0u);
    /* 0068b624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b625: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b62b: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b630u); f_006a4e50();
    /* 0068b630: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b632: je 0x68bd8d */ if (fZ) goto L_0068bd8d;
L_0068b638:; BB(0x0068b638);
    /* 0068b638: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b63a: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b63fu); f_006a60dc();
    /* 0068b63f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b641: je 0x68bd80 */ if (fZ) goto L_0068bd80;
L_0068b647:; BB(0x0068b647);
    /* 0068b647: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b649: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68b64eu); f_008173b4();
    /* 0068b64e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b650: jne 0x68b65f */ if (!fZ) goto L_0068b65f;
L_0068b652:; BB(0x0068b652);
    /* 0068b652: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b654: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b65a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b65b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b65c: ret 4 */ FN_RET(0x0068b536); r_esp += 8; return;
L_0068b65f:; BB(0x0068b65f);
    /* 0068b65f: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b664: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b66a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b66b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b66c: ret 4 */ FN_RET(0x0068b536); r_esp += 8; return;
L_0068b66f:; BB(0x0068b66f);
    /* 0068b66f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b674: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b676: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68b67bu); f_00814298();
    /* 0068b67b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b67e:; BB(0x0068b67e);
    /* 0068b67e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b680: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b686: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b687: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b688: ret 4 */ FN_RET(0x0068b536); r_esp += 8; return;
L_0068bd80:; BB(0x0068bd80);
    /* 0068bd80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd82: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd8a: ret 4 */ FN_RET(0x0068b536); r_esp += 8; return;
L_0068bd8d:; BB(0x0068bd8d);
    /* 0068bd8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd8f: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bd95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bd96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bd97: ret 4 */ FN_RET(0x0068b536); r_esp += 8; return;
L_0068bd9a:; BB(0x0068bd9a);
    /* 0068bd9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bd9c: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bda2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bda3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bda4: ret 4 */ FN_RET(0x0068b536); r_esp += 8; return;
L_0068bda7:; BB(0x0068bda7);
    /* 0068bda7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bda9: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bdaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bdb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bdb1: ret 4 */ FN_RET(0x0068b536); r_esp += 8; return;
}

void f_0068b68b(void)
{
    FN_ENTER(0x0068b68b);
    /* 0068b68b: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0068b692: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b697u); f_005d6a3c();
    /* 0068b697: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b69d: mov byte ptr [esp + 0xfc], 3 */ W8((u32)(r_esp+0xfcu), 0x3u);
    /* 0068b6a5: lea eax, [esp + 0xfc] */ r_eax = (u32)(r_esp+0xfcu);
    /* 0068b6ac: mov byte ptr [esp + 0xfd], 1 */ W8((u32)(r_esp+0xfdu), 0x1u);
    /* 0068b6b4: mov byte ptr [esp + 0xfe], 0 */ W8((u32)(r_esp+0xfeu), 0x0u);
    /* 0068b6bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b6bd: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b6c2u); f_006a4e50();
    /* 0068b6c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b6c4: je 0x68bddb */ if (fZ) goto L_0068bddb;
L_0068b6ca:; BB(0x0068b6ca);
    /* 0068b6ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b6cc: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b6d1u); f_006a60dc();
    /* 0068b6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b6d3: je 0x68bdce */ if (fZ) goto L_0068bdce;
L_0068b6d9:; BB(0x0068b6d9);
    /* 0068b6d9: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b6df: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b6e4u); f_0068be84();
    /* 0068b6e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b6e6: jne 0x68b7d0 */ if (!fZ) goto L_0068b7d0;
L_0068b6ec:; BB(0x0068b6ec);
    /* 0068b6ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b6ed: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b6f3: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b6f8u); f_006a6a60();
    /* 0068b6f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b6fa: je 0x68b7d0 */ if (fZ) goto L_0068b7d0;
L_0068b700:; BB(0x0068b700);
    /* 0068b700: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b702: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b707u); f_006a60dc();
    /* 0068b707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b709: je 0x68b7d0 */ if (fZ) goto L_0068b7d0;
L_0068b70f:; BB(0x0068b70f);
    /* 0068b70f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b710: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b712: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b717u); f_0068be94();
    /* 0068b717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b719: je 0x68b7c1 */ if (fZ) goto L_0068b7c1;
L_0068b71f:; BB(0x0068b71f);
    /* 0068b71f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b721: je 0x68b740 */ if (fZ) goto L_0068b740;
L_0068b723:; BB(0x0068b723);
    /* 0068b723: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b72a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b72d: jne 0x68b736 */ if (!fZ) goto L_0068b736;
L_0068b72f:; BB(0x0068b72f);
    /* 0068b72f: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b734: jmp 0x68b738 */ goto L_0068b738;
L_0068b736:; BB(0x0068b736);
    /* 0068b736: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b738:; BB(0x0068b738);
    /* 0068b738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b73a: jne 0x68b7d0 */ if (!fZ) goto L_0068b7d0;
L_0068b740:; BB(0x0068b740);
    /* 0068b740: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b744: mov byte ptr [esp + 0x110], 0x27 */ W8((u32)(r_esp+0x110u), 0x27u);
    /* 0068b74c: mov word ptr [esp + 0x112], ax */ W16((u32)(r_esp+0x112u), (u16)r_eax);
    /* 0068b754: mov byte ptr [esp + 0x111], 2 */ W8((u32)(r_esp+0x111u), 0x2u);
    /* 0068b75c: mov dword ptr [esp + 0x114], edi */ W32((u32)(r_esp+0x114u), r_edi);
    /* 0068b763: lea ecx, [esp + 0x110] */ r_ecx = (u32)(r_esp+0x110u);
    /* 0068b76a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68b76fu); f_008003e0();
    /* 0068b76f: lea eax, [esp + 0xfc] */ r_eax = (u32)(r_esp+0xfcu);
    /* 0068b776: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b777: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b77d: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b782u); f_006a4e50();
    /* 0068b782: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b784: je 0x68bdc1 */ if (fZ) goto L_0068bdc1;
L_0068b78a:; BB(0x0068b78a);
    /* 0068b78a: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b78c: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b791u); f_006a60dc();
    /* 0068b791: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b793: je 0x68bdb4 */ if (fZ) goto L_0068bdb4;
L_0068b799:; BB(0x0068b799);
    /* 0068b799: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b79b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68b7a0u); f_008173b4();
    /* 0068b7a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b7a2: jne 0x68b7b1 */ if (!fZ) goto L_0068b7b1;
L_0068b7a4:; BB(0x0068b7a4);
    /* 0068b7a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b7a6: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b7ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b7ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b7ae: ret 4 */ FN_RET(0x0068b68b); r_esp += 8; return;
L_0068b7b1:; BB(0x0068b7b1);
    /* 0068b7b1: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b7b6: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b7bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b7bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b7be: ret 4 */ FN_RET(0x0068b68b); r_esp += 8; return;
L_0068b7c1:; BB(0x0068b7c1);
    /* 0068b7c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b7c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b7c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b7c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b7c6: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b7c8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68b7cdu); f_00814298();
    /* 0068b7cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b7d0:; BB(0x0068b7d0);
    /* 0068b7d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b7d2: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b7d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b7d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b7da: ret 4 */ FN_RET(0x0068b68b); r_esp += 8; return;
L_0068bdb4:; BB(0x0068bdb4);
    /* 0068bdb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bdb6: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bdbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bdbd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bdbe: ret 4 */ FN_RET(0x0068b68b); r_esp += 8; return;
L_0068bdc1:; BB(0x0068bdc1);
    /* 0068bdc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bdc3: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bdc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bdca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bdcb: ret 4 */ FN_RET(0x0068b68b); r_esp += 8; return;
L_0068bdce:; BB(0x0068bdce);
    /* 0068bdce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bdd0: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bdd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bdd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bdd8: ret 4 */ FN_RET(0x0068b68b); r_esp += 8; return;
L_0068bddb:; BB(0x0068bddb);
    /* 0068bddb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bddd: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bde3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bde4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bde5: ret 4 */ FN_RET(0x0068b68b); r_esp += 8; return;
}

void f_0068b7dd(void)
{
    FN_ENTER(0x0068b7dd);
    /* 0068b7dd: lea ecx, [esp + 0x118] */ r_ecx = (u32)(r_esp+0x118u);
    /* 0068b7e4: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b7e9u); f_005d6a3c();
    /* 0068b7e9: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b7ef: mov byte ptr [esp + 0x118], 3 */ W8((u32)(r_esp+0x118u), 0x3u);
    /* 0068b7f7: lea eax, [esp + 0x118] */ r_eax = (u32)(r_esp+0x118u);
    /* 0068b7fe: mov byte ptr [esp + 0x119], 0 */ W8((u32)(r_esp+0x119u), 0x0u);
    /* 0068b806: mov byte ptr [esp + 0x11a], 2 */ W8((u32)(r_esp+0x11au), 0x2u);
    /* 0068b80e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b80f: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b814u); f_006a4e50();
    /* 0068b814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b816: je 0x68be0f */ if (fZ) goto L_0068be0f;
L_0068b81c:; BB(0x0068b81c);
    /* 0068b81c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b81e: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b823u); f_006a60dc();
    /* 0068b823: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b825: je 0x68be02 */ if (fZ) goto L_0068be02;
L_0068b82b:; BB(0x0068b82b);
    /* 0068b82b: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b831: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b836u); f_0068be84();
    /* 0068b836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b838: jne 0x68b922 */ if (!fZ) goto L_0068b922;
L_0068b83e:; BB(0x0068b83e);
    /* 0068b83e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b83f: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b845: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b84au); f_006a6a60();
    /* 0068b84a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b84c: je 0x68b922 */ if (fZ) goto L_0068b922;
L_0068b852:; BB(0x0068b852);
    /* 0068b852: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b854: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b859u); f_006a60dc();
    /* 0068b859: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b85b: je 0x68b922 */ if (fZ) goto L_0068b922;
L_0068b861:; BB(0x0068b861);
    /* 0068b861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b862: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b864: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b869u); f_0068be94();
    /* 0068b869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b86b: je 0x68b913 */ if (fZ) goto L_0068b913;
L_0068b871:; BB(0x0068b871);
    /* 0068b871: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b873: je 0x68b892 */ if (fZ) goto L_0068b892;
L_0068b875:; BB(0x0068b875);
    /* 0068b875: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b87c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b87f: jne 0x68b888 */ if (!fZ) goto L_0068b888;
L_0068b881:; BB(0x0068b881);
    /* 0068b881: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b886: jmp 0x68b88a */ goto L_0068b88a;
L_0068b888:; BB(0x0068b888);
    /* 0068b888: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b88a:; BB(0x0068b88a);
    /* 0068b88a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b88c: jne 0x68b922 */ if (!fZ) goto L_0068b922;
L_0068b892:; BB(0x0068b892);
    /* 0068b892: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b896: mov byte ptr [esp + 0x12c], 0x27 */ W8((u32)(r_esp+0x12cu), 0x27u);
    /* 0068b89e: mov word ptr [esp + 0x12e], ax */ W16((u32)(r_esp+0x12eu), (u16)r_eax);
    /* 0068b8a6: mov byte ptr [esp + 0x12d], 2 */ W8((u32)(r_esp+0x12du), 0x2u);
    /* 0068b8ae: mov dword ptr [esp + 0x130], edi */ W32((u32)(r_esp+0x130u), r_edi);
    /* 0068b8b5: lea ecx, [esp + 0x12c] */ r_ecx = (u32)(r_esp+0x12cu);
    /* 0068b8bc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68b8c1u); f_008003e0();
    /* 0068b8c1: lea eax, [esp + 0x118] */ r_eax = (u32)(r_esp+0x118u);
    /* 0068b8c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b8c9: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b8cf: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b8d4u); f_006a4e50();
    /* 0068b8d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b8d6: je 0x68bdf5 */ if (fZ) goto L_0068bdf5;
L_0068b8dc:; BB(0x0068b8dc);
    /* 0068b8dc: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b8de: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b8e3u); f_006a60dc();
    /* 0068b8e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b8e5: je 0x68bde8 */ if (fZ) goto L_0068bde8;
L_0068b8eb:; BB(0x0068b8eb);
    /* 0068b8eb: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b8ed: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68b8f2u); f_008173b4();
    /* 0068b8f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b8f4: jne 0x68b903 */ if (!fZ) goto L_0068b903;
L_0068b8f6:; BB(0x0068b8f6);
    /* 0068b8f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b8f8: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b8fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b8ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b900: ret 4 */ FN_RET(0x0068b7dd); r_esp += 8; return;
L_0068b903:; BB(0x0068b903);
    /* 0068b903: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b908: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b90e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b90f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b910: ret 4 */ FN_RET(0x0068b7dd); r_esp += 8; return;
L_0068b913:; BB(0x0068b913);
    /* 0068b913: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b918: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068b91a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68b91fu); f_00814298();
    /* 0068b91f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b922:; BB(0x0068b922);
    /* 0068b922: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068b924: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068b92a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b92b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068b92c: ret 4 */ FN_RET(0x0068b7dd); r_esp += 8; return;
L_0068bde8:; BB(0x0068bde8);
    /* 0068bde8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bdea: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bdf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bdf1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bdf2: ret 4 */ FN_RET(0x0068b7dd); r_esp += 8; return;
L_0068bdf5:; BB(0x0068bdf5);
    /* 0068bdf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bdf7: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bdfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bdfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bdff: ret 4 */ FN_RET(0x0068b7dd); r_esp += 8; return;
L_0068be02:; BB(0x0068be02);
    /* 0068be02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be04: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be0c: ret 4 */ FN_RET(0x0068b7dd); r_esp += 8; return;
L_0068be0f:; BB(0x0068be0f);
    /* 0068be0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be11: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be19: ret 4 */ FN_RET(0x0068b7dd); r_esp += 8; return;
}

void f_0068b92f(void)
{
    FN_ENTER(0x0068b92f);
    /* 0068b92f: lea ecx, [esp + 0x134] */ r_ecx = (u32)(r_esp+0x134u);
    /* 0068b936: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68b93bu); f_005d6a3c();
    /* 0068b93b: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b941: mov byte ptr [esp + 0x134], 3 */ W8((u32)(r_esp+0x134u), 0x3u);
    /* 0068b949: lea eax, [esp + 0x134] */ r_eax = (u32)(r_esp+0x134u);
    /* 0068b950: mov byte ptr [esp + 0x135], 0 */ W8((u32)(r_esp+0x135u), 0x0u);
    /* 0068b958: mov byte ptr [esp + 0x136], 1 */ W8((u32)(r_esp+0x136u), 0x1u);
    /* 0068b960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b961: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68b966u); f_006a4e50();
    /* 0068b966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b968: je 0x68be43 */ if (fZ) goto L_0068be43;
L_0068b96e:; BB(0x0068b96e);
    /* 0068b96e: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b970: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b975u); f_006a60dc();
    /* 0068b975: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b977: je 0x68be36 */ if (fZ) goto L_0068be36;
L_0068b97d:; BB(0x0068b97d);
    /* 0068b97d: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068b983: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68b988u); f_0068be84();
    /* 0068b988: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b98a: jne 0x68ba74 */ if (!fZ) goto L_0068ba74;
L_0068b990:; BB(0x0068b990);
    /* 0068b990: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068b991: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068b997: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68b99cu); f_006a6a60();
    /* 0068b99c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b99e: je 0x68ba74 */ if (fZ) goto L_0068ba74;
L_0068b9a4:; BB(0x0068b9a4);
    /* 0068b9a4: mov ecx, eax */ r_ecx = r_eax;
    /* 0068b9a6: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68b9abu); f_006a60dc();
    /* 0068b9ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9ad: je 0x68ba74 */ if (fZ) goto L_0068ba74;
L_0068b9b3:; BB(0x0068b9b3);
    /* 0068b9b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b9b4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068b9b6: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68b9bbu); f_0068be94();
    /* 0068b9bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9bd: je 0x68ba65 */ if (fZ) goto L_0068ba65;
L_0068b9c3:; BB(0x0068b9c3);
    /* 0068b9c3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9c5: je 0x68b9e4 */ if (fZ) goto L_0068b9e4;
L_0068b9c7:; BB(0x0068b9c7);
    /* 0068b9c7: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068b9ce: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9d1: jne 0x68b9da */ if (!fZ) goto L_0068b9da;
L_0068b9d3:; BB(0x0068b9d3);
    /* 0068b9d3: mov eax, 1 */ r_eax = 0x1u;
    /* 0068b9d8: jmp 0x68b9dc */ goto L_0068b9dc;
L_0068b9da:; BB(0x0068b9da);
    /* 0068b9da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068b9dc:; BB(0x0068b9dc);
    /* 0068b9dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068b9de: jne 0x68ba74 */ if (!fZ) goto L_0068ba74;
L_0068b9e4:; BB(0x0068b9e4);
    /* 0068b9e4: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068b9e8: mov byte ptr [esp + 0x148], 0x27 */ W8((u32)(r_esp+0x148u), 0x27u);
    /* 0068b9f0: mov word ptr [esp + 0x14a], ax */ W16((u32)(r_esp+0x14au), (u16)r_eax);
    /* 0068b9f8: mov byte ptr [esp + 0x149], 2 */ W8((u32)(r_esp+0x149u), 0x2u);
    /* 0068ba00: mov dword ptr [esp + 0x14c], edi */ W32((u32)(r_esp+0x14cu), r_edi);
    /* 0068ba07: lea ecx, [esp + 0x148] */ r_ecx = (u32)(r_esp+0x148u);
    /* 0068ba0e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68ba13u); f_008003e0();
    /* 0068ba13: lea eax, [esp + 0x134] */ r_eax = (u32)(r_esp+0x134u);
    /* 0068ba1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba1b: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068ba21: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68ba26u); f_006a4e50();
    /* 0068ba26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ba28: je 0x68be29 */ if (fZ) goto L_0068be29;
L_0068ba2e:; BB(0x0068ba2e);
    /* 0068ba2e: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ba30: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68ba35u); f_006a60dc();
    /* 0068ba35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ba37: je 0x68be1c */ if (fZ) goto L_0068be1c;
L_0068ba3d:; BB(0x0068ba3d);
    /* 0068ba3d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068ba3f: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68ba44u); f_008173b4();
    /* 0068ba44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ba46: jne 0x68ba55 */ if (!fZ) goto L_0068ba55;
L_0068ba48:; BB(0x0068ba48);
    /* 0068ba48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ba4a: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ba50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ba51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ba52: ret 4 */ FN_RET(0x0068b92f); r_esp += 8; return;
L_0068ba55:; BB(0x0068ba55);
    /* 0068ba55: mov eax, 1 */ r_eax = 0x1u;
    /* 0068ba5a: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ba60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ba61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ba62: ret 4 */ FN_RET(0x0068b92f); r_esp += 8; return;
L_0068ba65:; BB(0x0068ba65);
    /* 0068ba65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ba67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba6a: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ba6c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68ba71u); f_00814298();
    /* 0068ba71: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068ba74:; BB(0x0068ba74);
    /* 0068ba74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ba76: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ba7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ba7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ba7e: ret 4 */ FN_RET(0x0068b92f); r_esp += 8; return;
L_0068be1c:; BB(0x0068be1c);
    /* 0068be1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be1e: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be26: ret 4 */ FN_RET(0x0068b92f); r_esp += 8; return;
L_0068be29:; BB(0x0068be29);
    /* 0068be29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be2b: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be33: ret 4 */ FN_RET(0x0068b92f); r_esp += 8; return;
L_0068be36:; BB(0x0068be36);
    /* 0068be36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be38: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be40: ret 4 */ FN_RET(0x0068b92f); r_esp += 8; return;
L_0068be43:; BB(0x0068be43);
    /* 0068be43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be45: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be4d: ret 4 */ FN_RET(0x0068b92f); r_esp += 8; return;
}

void f_0068ba81(void)
{
    FN_ENTER(0x0068ba81);
    /* 0068ba81: lea ecx, [esp + 0x150] */ r_ecx = (u32)(r_esp+0x150u);
    /* 0068ba88: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68ba8du); f_005d6a3c();
    /* 0068ba8d: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068ba93: mov byte ptr [esp + 0x150], 3 */ W8((u32)(r_esp+0x150u), 0x3u);
    /* 0068ba9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ba9d: mov byte ptr [esp + 0x151], al */ W8((u32)(r_esp+0x151u), (u8)r_eax);
    /* 0068baa4: mov byte ptr [esp + 0x152], al */ W8((u32)(r_esp+0x152u), (u8)r_eax);
    /* 0068baab: lea edx, [esp + 0x150] */ r_edx = (u32)(r_esp+0x150u);
    /* 0068bab2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068bab3: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68bab8u); f_006a4e50();
    /* 0068bab8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068baba: je 0x68be77 */ if (fZ) goto L_0068be77;
L_0068bac0:; BB(0x0068bac0);
    /* 0068bac0: mov ecx, eax */ r_ecx = r_eax;
    /* 0068bac2: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68bac7u); f_006a60dc();
    /* 0068bac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bac9: je 0x68be6a */ if (fZ) goto L_0068be6a;
L_0068bacf:; BB(0x0068bacf);
    /* 0068bacf: mov edi, dword ptr [eax + 0xd8] */ r_edi = R32((u32)(r_eax+0xd8u));
    /* 0068bad5: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68badau); f_0068be84();
    /* 0068bada: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068badc: jne 0x68bbc6 */ if (!fZ) goto L_0068bbc6;
L_0068bae2:; BB(0x0068bae2);
    /* 0068bae2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068bae3: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068bae9: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x68baeeu); f_006a6a60();
    /* 0068baee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068baf0: je 0x68bbc6 */ if (fZ) goto L_0068bbc6;
L_0068baf6:; BB(0x0068baf6);
    /* 0068baf6: mov ecx, eax */ r_ecx = r_eax;
    /* 0068baf8: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68bafdu); f_006a60dc();
    /* 0068bafd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068baff: je 0x68bbc6 */ if (fZ) goto L_0068bbc6;
L_0068bb05:; BB(0x0068bb05);
    /* 0068bb05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068bb08: call 0x68be94 */ r_esp -= 4; W32(r_esp, 0x68bb0du); f_0068be94();
    /* 0068bb0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bb0f: je 0x68bbb7 */ if (fZ) goto L_0068bbb7;
L_0068bb15:; BB(0x0068bb15);
    /* 0068bb15: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bb17: je 0x68bb36 */ if (fZ) goto L_0068bb36;
L_0068bb19:; BB(0x0068bb19);
    /* 0068bb19: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068bb20: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bb23: jne 0x68bb2c */ if (!fZ) goto L_0068bb2c;
L_0068bb25:; BB(0x0068bb25);
    /* 0068bb25: mov eax, 1 */ r_eax = 0x1u;
    /* 0068bb2a: jmp 0x68bb2e */ goto L_0068bb2e;
L_0068bb2c:; BB(0x0068bb2c);
    /* 0068bb2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068bb2e:; BB(0x0068bb2e);
    /* 0068bb2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bb30: jne 0x68bbc6 */ if (!fZ) goto L_0068bbc6;
L_0068bb36:; BB(0x0068bb36);
    /* 0068bb36: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0068bb3a: mov byte ptr [esp + 0x164], 0x27 */ W8((u32)(r_esp+0x164u), 0x27u);
    /* 0068bb42: mov word ptr [esp + 0x166], ax */ W16((u32)(r_esp+0x166u), (u16)r_eax);
    /* 0068bb4a: mov byte ptr [esp + 0x165], 2 */ W8((u32)(r_esp+0x165u), 0x2u);
    /* 0068bb52: mov dword ptr [esp + 0x168], edi */ W32((u32)(r_esp+0x168u), r_edi);
    /* 0068bb59: lea ecx, [esp + 0x164] */ r_ecx = (u32)(r_esp+0x164u);
    /* 0068bb60: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68bb65u); f_008003e0();
    /* 0068bb65: lea eax, [esp + 0x150] */ r_eax = (u32)(r_esp+0x150u);
    /* 0068bb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bb6d: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068bb73: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68bb78u); f_006a4e50();
    /* 0068bb78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bb7a: je 0x68be5d */ if (fZ) goto L_0068be5d;
L_0068bb80:; BB(0x0068bb80);
    /* 0068bb80: mov ecx, eax */ r_ecx = r_eax;
    /* 0068bb82: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68bb87u); f_006a60dc();
    /* 0068bb87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bb89: je 0x68be50 */ if (fZ) goto L_0068be50;
L_0068bb8f:; BB(0x0068bb8f);
    /* 0068bb8f: mov ecx, eax */ r_ecx = r_eax;
    /* 0068bb91: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68bb96u); f_008173b4();
    /* 0068bb96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bb98: jne 0x68bba7 */ if (!fZ) goto L_0068bba7;
L_0068bb9a:; BB(0x0068bb9a);
    /* 0068bb9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bb9c: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bba2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bba3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bba4: ret 4 */ FN_RET(0x0068ba81); r_esp += 8; return;
L_0068bba7:; BB(0x0068bba7);
    /* 0068bba7: mov eax, 1 */ r_eax = 0x1u;
    /* 0068bbac: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bbb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bbb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bbb4: ret 4 */ FN_RET(0x0068ba81); r_esp += 8; return;
L_0068bbb7:; BB(0x0068bbb7);
    /* 0068bbb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bbb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbbc: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bbbe: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68bbc3u); f_00814298();
    /* 0068bbc3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068bbc6:; BB(0x0068bbc6);
    /* 0068bbc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068bbc8: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068bbce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068bbcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bbd0: ret 4 */ FN_RET(0x0068ba81); r_esp += 8; return;
L_0068be50:; BB(0x0068be50);
    /* 0068be50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be52: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be5a: ret 4 */ FN_RET(0x0068ba81); r_esp += 8; return;
L_0068be5d:; BB(0x0068be5d);
    /* 0068be5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be5f: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be67: ret 4 */ FN_RET(0x0068ba81); r_esp += 8; return;
L_0068be6a:; BB(0x0068be6a);
    /* 0068be6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be6c: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be74: ret 4 */ FN_RET(0x0068ba81); r_esp += 8; return;
L_0068be77:; BB(0x0068be77);
    /* 0068be77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068be79: add esp, 0x16c */ {  u32 a = r_esp; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068be7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068be80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068be81: ret 4 */ FN_RET(0x0068ba81); r_esp += 8; return;
}

void f_0068be84(void) /* sub_68BE84 */
{
    FN_ENTER(0x0068be84);
    /* 0068be84: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x68be89u); f_00807ac0();
    /* 0068be89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068be8a: call 0x8076d4 */ r_esp -= 4; W32(r_esp, 0x68be8fu); f_008076d4();
    /* 0068be8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068be90: ret  */ FN_RET(0x0068be84); r_esp += 4; return;
}

void f_0068be94(void) /* sub_68BE94 */
{
    FN_ENTER(0x0068be94);
    /* 0068be94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068be95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068be96: mov edi, ecx */ r_edi = r_ecx;
    /* 0068be98: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0068be9c: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x68bea1u); f_00687c48();
    /* 0068bea1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bea3: je 0x68beb7 */ if (fZ) goto L_0068beb7;
L_0068bea5:; BB(0x0068bea5);
    /* 0068bea5: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0068beaa: call 0x6a8eec */ r_esp -= 4; W32(r_esp, 0x68beafu); f_006a8eec();
    /* 0068beaf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0068beb2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068beb5: je 0x68bf21 */ if (fZ) goto L_0068bf21;
L_0068beb7:; BB(0x0068beb7);
    /* 0068beb7: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 0068bebe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068bec1: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bec3:; BB(0x0068bec3);
    /* 0068bec3: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 0068beca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068becc: je 0x68bf87 */ if (fZ) goto L_0068bf87;
L_0068bed2:; BB(0x0068bed2);
    /* 0068bed2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bed5: je 0x68bf70 */ if (fZ) goto L_0068bf70;
L_0068bedb:; BB(0x0068bedb);
    /* 0068bedb: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bede: je 0x68bf44 */ if (fZ) goto L_0068bf44;
L_0068bee0:; BB(0x0068bee0);
    /* 0068bee0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bee3: je 0x68bf28 */ if (fZ) goto L_0068bf28;
L_0068bee5:; BB(0x0068bee5);
    /* 0068bee5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bee8: jne 0x68bf11 */ if (!fZ) goto L_0068bf11;
L_0068beea:; BB(0x0068beea);
    /* 0068beea: mov ecx, dword ptr [edi + 0x45c] */ r_ecx = R32((u32)(r_edi+0x45cu));
    /* 0068bef0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bef2: je 0x68bf3a */ if (fZ) goto L_0068bf3a;
L_0068bef4:; BB(0x0068bef4);
    /* 0068bef4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bef6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068bef8: call 0x7a401c */ r_esp -= 4; W32(r_esp, 0x68befdu); f_007a401c();
    /* 0068befd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068beff: je 0x68bf21 */ if (fZ) goto L_0068bf21;
L_0068bf01:; BB(0x0068bf01);
    /* 0068bf01: movzx eax, word ptr [eax + 0xa0] */ r_eax = (u32)R16((u32)(r_eax+0xa0u));
    /* 0068bf08: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068bf0d: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bf0f:; BB(0x0068bf0f);
    /* 0068bf0f: jmp 0x68bf21 */ goto L_0068bf21;
L_0068bf11:; BB(0x0068bf11);
    /* 0068bf11: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068bf14: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bf16:; BB(0x0068bf16);
    /* 0068bf16: mov ecx, edi */ r_ecx = r_edi;
    /* 0068bf18: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x68bf1du); f_0068bfa0();
    /* 0068bf1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf1f: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bf21:; BB(0x0068bf21);
    /* 0068bf21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068bf24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bf25: ret 4 */ FN_RET(0x0068be94); r_esp += 8; return;
L_0068bf28:; BB(0x0068bf28);
    /* 0068bf28: mov ecx, edi */ r_ecx = r_edi;
    /* 0068bf2a: call 0x68bfe0 */ r_esp -= 4; W32(r_esp, 0x68bf2fu); f_0068bfe0();
    /* 0068bf2f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf31: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bf33:; BB(0x0068bf33);
    /* 0068bf33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068bf36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bf37: ret 4 */ FN_RET(0x0068be94); r_esp += 8; return;
L_0068bf3a:; BB(0x0068bf3a);
    /* 0068bf3a: mov eax, 1 */ r_eax = 0x1u;
    /* 0068bf3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068bf40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bf41: ret 4 */ FN_RET(0x0068be94); r_esp += 8; return;
L_0068bf44:; BB(0x0068bf44);
    /* 0068bf44: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 0068bf4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bf4d: jne 0x68bf5d */ if (!fZ) goto L_0068bf5d;
L_0068bf4f:; BB(0x0068bf4f);
    /* 0068bf4f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0068bf52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf54: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bf56:; BB(0x0068bf56);
    /* 0068bf56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068bf59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bf5a: ret 4 */ FN_RET(0x0068be94); r_esp += 8; return;
L_0068bf5d:; BB(0x0068bf5d);
    /* 0068bf5d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068bf60: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bf62:; BB(0x0068bf62);
    /* 0068bf62: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0068bf65: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf67: jne 0x68bf3a */ if (!fZ) goto L_0068bf3a;
L_0068bf69:; BB(0x0068bf69);
    /* 0068bf69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068bf6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bf6d: ret 4 */ FN_RET(0x0068be94); r_esp += 8; return;
L_0068bf70:; BB(0x0068bf70);
    /* 0068bf70: movsx eax, word ptr [edi + 0x336] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x336u));
    /* 0068bf77: cmp ax, word ptr [edi + 0x2be] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x2beu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0068bf7e: jl 0x68bf3a */ if ((fS!=fO)) goto L_0068bf3a;
L_0068bf80:; BB(0x0068bf80);
    /* 0068bf80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068bf83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bf84: ret 4 */ FN_RET(0x0068be94); r_esp += 8; return;
L_0068bf87:; BB(0x0068bf87);
    /* 0068bf87: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0068bf8e: cmp ax, word ptr [edi + 0x2bc] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x2bcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0068bf95: jl 0x68bf3a */ if ((fS!=fO)) goto L_0068bf3a;
L_0068bf97:; BB(0x0068bf97);
    /* 0068bf97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bf99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068bf9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068bf9b: ret 4 */ FN_RET(0x0068be94); r_esp += 8; return;
}

void f_0068bfa0(void) /* sub_68BFA0 */
{
    FN_ENTER(0x0068bfa0);
    /* 0068bfa0: mov eax, dword ptr [ecx + 0x710] */ r_eax = R32((u32)(r_ecx+0x710u));
    /* 0068bfa6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bfa9: jne 0x68bfdd */ if (!fZ) goto L_0068bfdd;
L_0068bfab:; BB(0x0068bfab);
    /* 0068bfab: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0068bfb1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0068bfb4: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bfba: jne 0x68bfdd */ if (!fZ) goto L_0068bfdd;
L_0068bfbc:; BB(0x0068bfbc);
    /* 0068bfbc: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0068bfc2: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068bfc7: je 0x68bfd0 */ if (fZ) goto L_0068bfd0;
L_0068bfc9:; BB(0x0068bfc9);
    /* 0068bfc9: mov eax, 1 */ r_eax = 0x1u;
    /* 0068bfce: jmp 0x68bfd2 */ goto L_0068bfd2;
L_0068bfd0:; BB(0x0068bfd0);
    /* 0068bfd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068bfd2:; BB(0x0068bfd2);
    /* 0068bfd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bfd4: mov eax, 0 */ r_eax = 0x0u;
    /* 0068bfd9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068bfdc: ret  */ FN_RET(0x0068bfa0); r_esp += 4; return;
L_0068bfdd:; BB(0x0068bfdd);
    /* 0068bfdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068bfdf: ret  */ FN_RET(0x0068bfa0); r_esp += 4; return;
}

void f_0068bfe0(void) /* sub_68BFE0 */
{
    FN_ENTER(0x0068bfe0);
    /* 0068bfe0: movsx edx, word ptr [ecx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0068bfe7: cmp dx, word ptr [ecx + 0x2bc] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ecx+0x2bcu)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0068bfee: mov eax, 0 */ r_eax = 0x0u;
    /* 0068bff3: jge 0x68bffa */ if ((fS==fO)) goto L_0068bffa;
L_0068bff5:; BB(0x0068bff5);
    /* 0068bff5: mov eax, 1 */ r_eax = 0x1u;
L_0068bffa:; BB(0x0068bffa);
    /* 0068bffa: movsx edx, word ptr [ecx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 0068c001: cmp dx, word ptr [ecx + 0x2be] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ecx+0x2beu)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0068c008: jge 0x68c00d */ if ((fS==fO)) goto L_0068c00d;
L_0068c00a:; BB(0x0068c00a);
    /* 0068c00a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0068c00d:; BB(0x0068c00d);
    /* 0068c00d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0068c010: test dl, 0x3f */ {  u32 a = (u8)r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068c013: je 0x68c018 */ if (fZ) goto L_0068c018;
L_0068c015:; BB(0x0068c015);
    /* 0068c015: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0068c018:; BB(0x0068c018);
    /* 0068c018: mov edx, dword ptr [ecx + 0x274] */ r_edx = R32((u32)(r_ecx+0x274u));
    /* 0068c01e: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068c021: jne 0x68c026 */ if (!fZ) goto L_0068c026;
L_0068c023:; BB(0x0068c023);
    /* 0068c023: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0068c026:; BB(0x0068c026);
    /* 0068c026: mov edx, dword ptr [ecx + 0x280] */ r_edx = R32((u32)(r_ecx+0x280u));
    /* 0068c02c: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068c02f: jne 0x68c034 */ if (!fZ) goto L_0068c034;
L_0068c031:; BB(0x0068c031);
    /* 0068c031: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0068c034:; BB(0x0068c034);
    /* 0068c034: ret  */ FN_RET(0x0068bfe0); r_esp += 4; return;
}

