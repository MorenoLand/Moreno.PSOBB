#include "protos.h"

void f_00550000(void)
{
    FN_ENTER(0x00550000);
    /* 00550000: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00550001: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00550005: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x55000au); f_00830aa0();
    /* 0055000a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55000fu); f_0082da80();
    /* 0055000f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550012: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00550013: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550014: ret  */ FN_RET(0x00550000); r_esp += 4; return;
}

void f_00550020(void)
{
    FN_ENTER(0x00550020);
    /* 00550020: insd dword ptr es:[edi], dx */ UNSUP(0x00550020, "insd dword ptr es:[edi], dx");
    UNSUP(0x00550021, "falls out of decoded code");
}

void f_00550030(void)
{
    FN_ENTER(0x00550030);
    /* 00550030: mov eax, dword ptr [0xa73980] */ r_eax = R32((u32)(0xa73980u));
    /* 00550035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550037: je 0x55004a */ if (fZ) goto L_0055004a;
L_00550039:; BB(0x00550039);
    /* 00550039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055003a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x55003fu); f_00857e98();
    /* 0055003f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00550040: mov dword ptr [0xa73980], 0 */ W32((u32)(0xa73980u), 0x0u);
L_0055004a:; BB(0x0055004a);
    /* 0055004a: mov ecx, dword ptr [0xa73990] */ r_ecx = R32((u32)(0xa73990u));
    /* 00550050: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550052: je 0x550067 */ if (fZ) goto L_00550067;
L_00550054:; BB(0x00550054);
    /* 00550054: je 0x55005d */ if (fZ) goto L_0055005d;
L_00550056:; BB(0x00550056);
    /* 00550056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550058: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55005du); f_0045a950();
L_0055005d:; BB(0x0055005d);
    /* 0055005d: mov dword ptr [0xa73990], 0 */ W32((u32)(0xa73990u), 0x0u);
L_00550067:; BB(0x00550067);
    /* 00550067: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 0055006d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055006f: je 0x550084 */ if (fZ) goto L_00550084;
L_00550071:; BB(0x00550071);
    /* 00550071: je 0x55007a */ if (fZ) goto L_0055007a;
L_00550073:; BB(0x00550073);
    /* 00550073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550075: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55007au); f_0045a950();
L_0055007a:; BB(0x0055007a);
    /* 0055007a: mov dword ptr [0xa7398c], 0 */ W32((u32)(0xa7398cu), 0x0u);
L_00550084:; BB(0x00550084);
    /* 00550084: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055008a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055008c: je 0x5500a1 */ if (fZ) goto L_005500a1;
L_0055008e:; BB(0x0055008e);
    /* 0055008e: je 0x550097 */ if (fZ) goto L_00550097;
L_00550090:; BB(0x00550090);
    /* 00550090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550092: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x550097u); f_0045a950();
L_00550097:; BB(0x00550097);
    /* 00550097: mov dword ptr [0xa73988], 0 */ W32((u32)(0xa73988u), 0x0u);
L_005500a1:; BB(0x005500a1);
    /* 005500a1: mov ecx, dword ptr [0xa73974] */ r_ecx = R32((u32)(0xa73974u));
    /* 005500a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005500a9: je 0x5500be */ if (fZ) goto L_005500be;
L_005500ab:; BB(0x005500ab);
    /* 005500ab: je 0x5500b4 */ if (fZ) goto L_005500b4;
L_005500ad:; BB(0x005500ad);
    /* 005500ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005500af: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5500b4u); f_004066a8();
L_005500b4:; BB(0x005500b4);
    /* 005500b4: mov dword ptr [0xa73974], 0 */ W32((u32)(0xa73974u), 0x0u);
L_005500be:; BB(0x005500be);
    /* 005500be: ret  */ FN_RET(0x00550030); r_esp += 4; return;
}

void f_00550042(void)
{
    FN_ENTER(0x00550042);
    /* 00550042: cmp byte ptr [ecx], 0xa7 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0xa7u; u32 r = (a - b) & 0xffu;   }
    /* 00550045: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550047: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550049: add byte ptr [ebx - 0x58c66ff3], cl */ { u32 ad = (u32)(r_ebx+0xa739900du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0055004f: add byte ptr [ebp + 0x741374c9], al */ { u32 ad = (u32)(r_ebp+0x741374c9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550055: pop es */ UNSUP(0x00550055, "pop es");
    /* 00550056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550058: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55005du); f_0045a950();
    /* 0055005d: mov dword ptr [0xa73990], 0 */ W32((u32)(0xa73990u), 0x0u);
    /* 00550067: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 0055006d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055006f: je 0x550084 */ if (fZ) goto L_00550084;
L_00550071:; BB(0x00550071);
    /* 00550071: je 0x55007a */ if (fZ) goto L_0055007a;
L_00550073:; BB(0x00550073);
    /* 00550073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550075: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55007au); f_0045a950();
L_0055007a:; BB(0x0055007a);
    /* 0055007a: mov dword ptr [0xa7398c], 0 */ W32((u32)(0xa7398cu), 0x0u);
L_00550084:; BB(0x00550084);
    /* 00550084: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055008a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055008c: je 0x5500a1 */ if (fZ) goto L_005500a1;
L_0055008e:; BB(0x0055008e);
    /* 0055008e: je 0x550097 */ if (fZ) goto L_00550097;
L_00550090:; BB(0x00550090);
    /* 00550090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550092: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x550097u); f_0045a950();
L_00550097:; BB(0x00550097);
    /* 00550097: mov dword ptr [0xa73988], 0 */ W32((u32)(0xa73988u), 0x0u);
L_005500a1:; BB(0x005500a1);
    /* 005500a1: mov ecx, dword ptr [0xa73974] */ r_ecx = R32((u32)(0xa73974u));
    /* 005500a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005500a9: je 0x5500be */ if (fZ) goto L_005500be;
L_005500ab:; BB(0x005500ab);
    /* 005500ab: je 0x5500b4 */ if (fZ) goto L_005500b4;
L_005500ad:; BB(0x005500ad);
    /* 005500ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005500af: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5500b4u); f_004066a8();
L_005500b4:; BB(0x005500b4);
    /* 005500b4: mov dword ptr [0xa73974], 0 */ W32((u32)(0xa73974u), 0x0u);
L_005500be:; BB(0x005500be);
    /* 005500be: ret  */ FN_RET(0x00550042); r_esp += 4; return;
}

void f_00550047(void)
{
    FN_ENTER(0x00550047);
    /* 00550047: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550049: add byte ptr [ebx - 0x58c66ff3], cl */ { u32 ad = (u32)(r_ebx+0xa739900du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0055004f: add byte ptr [ebp + 0x741374c9], al */ { u32 ad = (u32)(r_ebp+0x741374c9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550055: pop es */ UNSUP(0x00550055, "pop es");
    /* 00550056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550058: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55005du); f_0045a950();
    /* 0055005d: mov dword ptr [0xa73990], 0 */ W32((u32)(0xa73990u), 0x0u);
    /* 00550067: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 0055006d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055006f: je 0x550084 */ if (fZ) goto L_00550084;
L_00550071:; BB(0x00550071);
    /* 00550071: je 0x55007a */ if (fZ) goto L_0055007a;
L_00550073:; BB(0x00550073);
    /* 00550073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550075: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55007au); f_0045a950();
L_0055007a:; BB(0x0055007a);
    /* 0055007a: mov dword ptr [0xa7398c], 0 */ W32((u32)(0xa7398cu), 0x0u);
L_00550084:; BB(0x00550084);
    /* 00550084: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055008a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055008c: je 0x5500a1 */ if (fZ) goto L_005500a1;
L_0055008e:; BB(0x0055008e);
    /* 0055008e: je 0x550097 */ if (fZ) goto L_00550097;
L_00550090:; BB(0x00550090);
    /* 00550090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550092: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x550097u); f_0045a950();
L_00550097:; BB(0x00550097);
    /* 00550097: mov dword ptr [0xa73988], 0 */ W32((u32)(0xa73988u), 0x0u);
L_005500a1:; BB(0x005500a1);
    /* 005500a1: mov ecx, dword ptr [0xa73974] */ r_ecx = R32((u32)(0xa73974u));
    /* 005500a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005500a9: je 0x5500be */ if (fZ) goto L_005500be;
L_005500ab:; BB(0x005500ab);
    /* 005500ab: je 0x5500b4 */ if (fZ) goto L_005500b4;
L_005500ad:; BB(0x005500ad);
    /* 005500ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005500af: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5500b4u); f_004066a8();
L_005500b4:; BB(0x005500b4);
    /* 005500b4: mov dword ptr [0xa73974], 0 */ W32((u32)(0xa73974u), 0x0u);
L_005500be:; BB(0x005500be);
    /* 005500be: ret  */ FN_RET(0x00550047); r_esp += 4; return;
}

void f_0055004e(void)
{
    FN_ENTER(0x0055004e);
    /* 0055004e: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 0055004f: add byte ptr [ebp + 0x741374c9], al */ { u32 ad = (u32)(r_ebp+0x741374c9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550055: pop es */ UNSUP(0x00550055, "pop es");
    /* 00550056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550058: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55005du); f_0045a950();
    /* 0055005d: mov dword ptr [0xa73990], 0 */ W32((u32)(0xa73990u), 0x0u);
    /* 00550067: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 0055006d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055006f: je 0x550084 */ if (fZ) goto L_00550084;
L_00550071:; BB(0x00550071);
    /* 00550071: je 0x55007a */ if (fZ) goto L_0055007a;
L_00550073:; BB(0x00550073);
    /* 00550073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550075: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55007au); f_0045a950();
L_0055007a:; BB(0x0055007a);
    /* 0055007a: mov dword ptr [0xa7398c], 0 */ W32((u32)(0xa7398cu), 0x0u);
L_00550084:; BB(0x00550084);
    /* 00550084: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055008a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055008c: je 0x5500a1 */ if (fZ) goto L_005500a1;
L_0055008e:; BB(0x0055008e);
    /* 0055008e: je 0x550097 */ if (fZ) goto L_00550097;
L_00550090:; BB(0x00550090);
    /* 00550090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550092: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x550097u); f_0045a950();
L_00550097:; BB(0x00550097);
    /* 00550097: mov dword ptr [0xa73988], 0 */ W32((u32)(0xa73988u), 0x0u);
L_005500a1:; BB(0x005500a1);
    /* 005500a1: mov ecx, dword ptr [0xa73974] */ r_ecx = R32((u32)(0xa73974u));
    /* 005500a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005500a9: je 0x5500be */ if (fZ) goto L_005500be;
L_005500ab:; BB(0x005500ab);
    /* 005500ab: je 0x5500b4 */ if (fZ) goto L_005500b4;
L_005500ad:; BB(0x005500ad);
    /* 005500ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005500af: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5500b4u); f_004066a8();
L_005500b4:; BB(0x005500b4);
    /* 005500b4: mov dword ptr [0xa73974], 0 */ W32((u32)(0xa73974u), 0x0u);
L_005500be:; BB(0x005500be);
    /* 005500be: ret  */ FN_RET(0x0055004e); r_esp += 4; return;
}

void f_00550053(void)
{
    FN_ENTER(0x00550053);
    /* 00550053: adc esi, dword ptr [edi + eax + 0x6a] */ { u32 c = fC; u32 a = r_esi; u32 b = R32((u32)(r_edi+r_eax+0x6au)); u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 00550057: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550059: test al, 0xf0 */ {  u32 a = (u8)r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffu;   }
    /* 0055005c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0055005e: add eax, 0xa73990 */ {  u32 a = r_eax; u32 b = 0xa73990u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00550063: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550065: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00550067: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 0055006d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055006f: je 0x550084 */ if (fZ) goto L_00550084;
L_00550071:; BB(0x00550071);
    /* 00550071: je 0x55007a */ if (fZ) goto L_0055007a;
L_00550073:; BB(0x00550073);
    /* 00550073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550075: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55007au); f_0045a950();
L_0055007a:; BB(0x0055007a);
    /* 0055007a: mov dword ptr [0xa7398c], 0 */ W32((u32)(0xa7398cu), 0x0u);
L_00550084:; BB(0x00550084);
    /* 00550084: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055008a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055008c: je 0x5500a1 */ if (fZ) goto L_005500a1;
L_0055008e:; BB(0x0055008e);
    /* 0055008e: je 0x550097 */ if (fZ) goto L_00550097;
L_00550090:; BB(0x00550090);
    /* 00550090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550092: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x550097u); f_0045a950();
L_00550097:; BB(0x00550097);
    /* 00550097: mov dword ptr [0xa73988], 0 */ W32((u32)(0xa73988u), 0x0u);
L_005500a1:; BB(0x005500a1);
    /* 005500a1: mov ecx, dword ptr [0xa73974] */ r_ecx = R32((u32)(0xa73974u));
    /* 005500a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005500a9: je 0x5500be */ if (fZ) goto L_005500be;
L_005500ab:; BB(0x005500ab);
    /* 005500ab: je 0x5500b4 */ if (fZ) goto L_005500b4;
L_005500ad:; BB(0x005500ad);
    /* 005500ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005500af: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5500b4u); f_004066a8();
L_005500b4:; BB(0x005500b4);
    /* 005500b4: mov dword ptr [0xa73974], 0 */ W32((u32)(0xa73974u), 0x0u);
L_005500be:; BB(0x005500be);
    /* 005500be: ret  */ FN_RET(0x00550053); r_esp += 4; return;
}

void f_00550054(void)
{
    FN_ENTER(0x00550054);
    /* 00550054: je 0x55005d */ if (fZ) goto L_0055005d;
L_00550056:; BB(0x00550056);
    /* 00550056: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550058: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55005du); f_0045a950();
L_0055005d:; BB(0x0055005d);
    /* 0055005d: mov dword ptr [0xa73990], 0 */ W32((u32)(0xa73990u), 0x0u);
    /* 00550067: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 0055006d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055006f: je 0x550084 */ if (fZ) goto L_00550084;
L_00550071:; BB(0x00550071);
    /* 00550071: je 0x55007a */ if (fZ) goto L_0055007a;
L_00550073:; BB(0x00550073);
    /* 00550073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550075: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x55007au); f_0045a950();
L_0055007a:; BB(0x0055007a);
    /* 0055007a: mov dword ptr [0xa7398c], 0 */ W32((u32)(0xa7398cu), 0x0u);
L_00550084:; BB(0x00550084);
    /* 00550084: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055008a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055008c: je 0x5500a1 */ if (fZ) goto L_005500a1;
L_0055008e:; BB(0x0055008e);
    /* 0055008e: je 0x550097 */ if (fZ) goto L_00550097;
L_00550090:; BB(0x00550090);
    /* 00550090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00550092: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x550097u); f_0045a950();
L_00550097:; BB(0x00550097);
    /* 00550097: mov dword ptr [0xa73988], 0 */ W32((u32)(0xa73988u), 0x0u);
L_005500a1:; BB(0x005500a1);
    /* 005500a1: mov ecx, dword ptr [0xa73974] */ r_ecx = R32((u32)(0xa73974u));
    /* 005500a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005500a9: je 0x5500be */ if (fZ) goto L_005500be;
L_005500ab:; BB(0x005500ab);
    /* 005500ab: je 0x5500b4 */ if (fZ) goto L_005500b4;
L_005500ad:; BB(0x005500ad);
    /* 005500ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005500af: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5500b4u); f_004066a8();
L_005500b4:; BB(0x005500b4);
    /* 005500b4: mov dword ptr [0xa73974], 0 */ W32((u32)(0xa73974u), 0x0u);
L_005500be:; BB(0x005500be);
    /* 005500be: ret  */ FN_RET(0x00550054); r_esp += 4; return;
}

void f_005500c0(void)
{
    FN_ENTER(0x005500c0);
    /* 005500c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005500c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005500c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005500c5: push 0x8d5e12 */ { u32 v = 0x8d5e12u; r_esp -= 4; W32(r_esp, v); }
    /* 005500ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005500d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005500d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005500d8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005500db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005500de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005500e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005500e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005500e7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005500e9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005500f0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5500f5u); f_005caba4();
    /* 005500f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005500f6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005500f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005500fb: je 0x550183 */ if (fZ) goto L_00550183;
L_00550101:; BB(0x00550101);
    /* 00550101: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00550108: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055010f: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00550115: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00550118: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x55011du); f_00787a4c();
    /* 0055011d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00550120: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00550127: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0055012a:; BB(0x0055012a);
    /* 0055012a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00550131: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00550138: push 0x3d4 */ { u32 v = 0x3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055013d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x550142u); f_005caba4();
    /* 00550142: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00550143: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00550146: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550148: je 0x55017f */ if (fZ) goto L_0055017f;
L_0055014a:; BB(0x0055014a);
    /* 0055014a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00550151: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00550158: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055015b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055015e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00550161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550162: call 0x55018c */ r_esp -= 4; W32(r_esp, 0x550167u); f_0055018c();
    /* 00550167: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055016a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00550171:; BB(0x00550171);
    /* 00550171: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550174: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055017b: mov esp, ebp */ r_esp = r_ebp;
    /* 0055017d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055017e: ret  */ FN_RET(0x005500c0); r_esp += 4; return;
L_0055017f:; BB(0x0055017f);
    /* 0055017f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550181: jmp 0x550171 */ goto L_00550171;
L_00550183:; BB(0x00550183);
    /* 00550183: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00550185: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00550188: jmp 0x55012a */ goto L_0055012a;
}

void f_0055018c(void) /* sub_55018C */
{
    FN_ENTER(0x0055018c);
    /* 0055018c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055018d: mov ebp, esp */ r_ebp = r_esp;
    /* 0055018f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00550191: push 0x8d5e5c */ { u32 v = 0x8d5e5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00550196: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055019c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055019d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005501a4: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005501a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005501aa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005501ad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005501b0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005501b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005501b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005501b9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005501bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005501bf: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x5501c4u); f_007865e8();
    /* 005501c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005501cb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005501ce: mov dword ptr [ecx], 0xb03fa0 */ W32((u32)(r_ecx), 0xb03fa0u);
    /* 005501d4: add ecx, 0x3ac */ {  u32 a = r_ecx; u32 b = 0x3acu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005501da: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x5501dfu); f_005122f8();
    /* 005501df: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005501e6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005501e9: mov eax, dword ptr [0x9bd6d8] */ r_eax = R32((u32)(0x9bd6d8u));
    /* 005501ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005501f1: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005501f3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005501f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005501f7: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5501fdu); call_ind(t); }
    /* 005501fd: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00550200: fld dword ptr [0x9245c0] */ FPUSH(R_F32((u32)(0x9245c0u)));
    /* 00550206: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00550209: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0055020c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0055020f: mov dword ptr [esi + 0x2a4], edx */ W32((u32)(r_esi+0x2a4u), r_edx);
    /* 00550215: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00550218: mov dword ptr [esi + 0x2a8], ecx */ W32((u32)(r_esi+0x2a8u), r_ecx);
    /* 0055021e: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00550224: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0055022a: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 00550230: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00550236: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 0055023c: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00550242: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00550248: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055024b: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00550251: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00550254: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0055025a: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0055025d: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00550263: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00550266: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00550269: fld dword ptr [edx + 0x35c] */ FPUSH(R_F32((u32)(r_edx+0x35cu)));
    /* 0055026f: fadd dword ptr [0x9245b8] */ ST(0) = ST(0) + R_F32((u32)(0x9245b8u));
    /* 00550275: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00550278: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0055027c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550281: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00550284: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00550287: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055028a: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0055028d: fld dword ptr [edx + 0x360] */ FPUSH(R_F32((u32)(r_edx+0x360u)));
    /* 00550293: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00550297: mov word ptr [edx + 0x390], ax */ W16((u32)(r_edx+0x390u), (u16)r_eax);
    /* 0055029e: mov word ptr [edx + 0x392], ax */ W16((u32)(r_edx+0x392u), (u16)r_eax);
    /* 005502a5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005502a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005502a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005502aa: mov dword ptr [edx + 0x70], 0x3f800000 */ W32((u32)(r_edx+0x70u), 0x3f800000u);
    /* 005502b1: mov dword ptr [edx + 0x6c], 0x3f800000 */ W32((u32)(r_edx+0x6cu), 0x3f800000u);
    /* 005502b8: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 005502bf: jae 0x5502cd */ if (!fC) goto L_005502cd;
L_005502c1:; BB(0x005502c1);
    /* 005502c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005502c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005502c5: mov dword ptr [edx + 0x360], eax */ W32((u32)(r_edx+0x360u), r_eax);
    /* 005502cb: jmp 0x5502e8 */ goto L_005502e8;
L_005502cd:; BB(0x005502cd);
    /* 005502cd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005502cf: fld dword ptr [0x9245bc] */ FPUSH(R_F32((u32)(0x9245bcu)));
    /* 005502d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005502d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005502d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005502da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005502dc: jbe 0x5502e0 */ if ((fC||fZ)) goto L_005502e0;
L_005502de:; BB(0x005502de);
    /* 005502de: fst st(1) */ ST(1) = ST(0);
L_005502e0:; BB(0x005502e0);
    /* 005502e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005502e2: fst dword ptr [edx + 0x360] */ W_F32((u32)(r_edx+0x360u), ST(0));
L_005502e8:; BB(0x005502e8);
    /* 005502e8: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 005502eb: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 005502ef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005502f4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005502f7: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 005502fa: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 005502fd: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00550300: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00550303: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00550305: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0055030a: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0055030c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055030e: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
    /* 00550315: mov dword ptr [edx + 0x380], ebx */ W32((u32)(r_edx+0x380u), r_ebx);
    /* 0055031b: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
    /* 00550322: mov dword ptr [edx + 0x370], eax */ W32((u32)(r_edx+0x370u), r_eax);
    /* 00550328: mov ecx, edx */ r_ecx = r_edx;
    /* 0055032a: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x55032fu); f_00787550();
    /* 0055032f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00550332: mov edx, dword ptr [0xa73974] */ r_edx = R32((u32)(0xa73974u));
    /* 00550338: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 0055033e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00550340: mov dword ptr [ecx + 0x33c], ebx */ W32((u32)(r_ecx+0x33cu), r_ebx);
    /* 00550346: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 0055034c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055034d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055034f: mov edi, dword ptr [esi + eax*8 + 8] */ r_edi = R32((u32)(r_esi+r_eax*8+0x8u));
    /* 00550353: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 00550356: mov esi, dword ptr [edx + 0x42c] */ r_esi = R32((u32)(r_edx+0x42cu));
    /* 0055035c: mov eax, dword ptr [esi + eax*8 + 0xc] */ r_eax = R32((u32)(r_esi+r_eax*8+0xcu));
    /* 00550360: mov dword ptr [ecx + 0xd8], 0x9bd5e0 */ W32((u32)(r_ecx+0xd8u), 0x9bd5e0u);
    /* 0055036a: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0055036d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00550373: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00550379: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00550380: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x550385u); f_007aa4c8();
    /* 00550385: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00550388: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055038a: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00550391: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00550398: push 0x9bd6f8 */ { u32 v = 0x9bd6f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055039d: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5503a2u); f_007b9a88();
    /* 005503a2: push dword ptr [0xa7397c] */ { u32 v = R32((u32)(0xa7397cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005503a8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005503ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005503ad: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 005503b3: mov word ptr [ecx + 0x384], ax */ W16((u32)(r_ecx+0x384u), (u16)r_eax);
    /* 005503ba: mov word ptr [ecx + 0x386], ax */ W16((u32)(r_ecx+0x386u), (u16)r_eax);
    /* 005503c1: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 005503c3: push dword ptr [0xa73984] */ { u32 v = R32((u32)(0xa73984u)); r_esp -= 4; W32(r_esp, v); }
    /* 005503c9: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5503ceu); f_007868f8();
    /* 005503ce: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005503d1: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 005503d8: mov dword ptr [ecx + 0x358], 0x9bd6dc */ W32((u32)(r_ecx+0x358u), 0x9bd6dcu);
    /* 005503e2: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 005503e9: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5503eeu); f_0078730c();
    /* 005503ee: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 005503f1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005503f4: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005503fa: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00550400: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00550406: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00550409: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0055040c: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0055040f: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x550414u); f_00786bbc();
    /* 00550414: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00550417: mov ecx, dword ptr [eax + 0x300] */ r_ecx = R32((u32)(r_eax+0x300u));
    /* 0055041d: mov ebx, dword ptr [eax + 0x304] */ r_ebx = R32((u32)(r_eax+0x304u));
    /* 00550423: mov esi, dword ptr [eax + 0x308] */ r_esi = R32((u32)(r_eax+0x308u));
    /* 00550429: mov edi, dword ptr [eax + 0x2e8] */ r_edi = R32((u32)(r_eax+0x2e8u));
    /* 0055042f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00550431: mov dword ptr [eax + 0x37c], 1 */ W32((u32)(r_eax+0x37cu), 0x1u);
    /* 0055043b: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0055043e: mov dword ptr [eax + 0x394], edx */ W32((u32)(r_eax+0x394u), r_edx);
    /* 00550444: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00550449: mov dword ptr [eax + 0x398], ecx */ W32((u32)(r_eax+0x398u), r_ecx);
    /* 0055044f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00550452: mov dword ptr [eax + 0x39c], ebx */ W32((u32)(r_eax+0x39cu), r_ebx);
    /* 00550458: mov dword ptr [eax + 0x3a0], esi */ W32((u32)(r_eax+0x3a0u), r_esi);
    /* 0055045e: or ecx, 0x6040000 */ {  u32 a = r_ecx; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00550464: mov dword ptr [eax + 0x3a4], edx */ W32((u32)(r_eax+0x3a4u), r_edx);
    /* 0055046a: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0055046d: mov dword ptr [eax + 0x2e8], edi */ W32((u32)(r_eax+0x2e8u), r_edi);
    /* 00550473: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00550476: mov ecx, 0x101 */ r_ecx = 0x101u;
    /* 0055047b: mov dword ptr [eax + 0x388], ecx */ W32((u32)(r_eax+0x388u), r_ecx);
    /* 00550481: mov dword ptr [eax + 0x38c], ecx */ W32((u32)(r_eax+0x38cu), r_ecx);
    /* 00550487: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x55048cu); f_005caba4();
    /* 0055048c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055048f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550492: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00550495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550497: je 0x550546 */ if (fZ) goto L_00550546;
L_0055049d:; BB(0x0055049d);
    /* 0055049d: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 005504a4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005504ab: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005504ae: push dword ptr [eax + 0x388] */ { u32 v = R32((u32)(r_eax+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 005504b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005504b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005504b8: call 0x5792f4 */ r_esp -= 4; W32(r_esp, 0x5504bdu); f_005792f4();
    /* 005504bd: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005504c4:; BB(0x005504c4);
    /* 005504c4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005504c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005504ca: mov dword ptr [edx + 0x3a8], eax */ W32((u32)(r_edx+0x3a8u), r_eax);
    /* 005504d0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005504d7: push 0xffff0088 */ { u32 v = 0xffff0088u; r_esp -= 4; W32(r_esp, v); }
    /* 005504dc: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005504e1: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5504e6u); f_00578cc4();
    /* 005504e6: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005504e9: push 0xffff0088 */ { u32 v = 0xffff0088u; r_esp -= 4; W32(r_esp, v); }
    /* 005504ee: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 005504f3: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 005504f9: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x5504feu); f_00578cc4();
    /* 005504fe: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00550501: push 0xff303030 */ { u32 v = 0xff303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00550506: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 0055050b: mov dword ptr [edx + 0x3cc], eax */ W32((u32)(r_edx+0x3ccu), r_eax);
    /* 00550511: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x550516u); f_00578cc4();
    /* 00550516: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550519: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055051c: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00550522: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00550524: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x55052au); call_ind(t); }
    /* 0055052a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055052d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00550530: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00550533: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00550536: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00550539: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00550540: mov esp, ebp */ r_esp = r_ebp;
    /* 00550542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00550543: ret 8 */ FN_RET(0x0055018c); r_esp += 12; return;
L_00550546:; BB(0x00550546);
    /* 00550546: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00550548: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055054b: jmp 0x5504c4 */ goto L_005504c4;
}

void f_00550550(void) /* sub_550550 */
{
    FN_ENTER(0x00550550);
    /* 00550550: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00550551: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00550552: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00550553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00550554: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550557: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00550559: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0055055f: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00550561: je 0x550580 */ if (fZ) goto L_00550580;
L_00550563:; BB(0x00550563);
    /* 00550563: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00550568: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055056a: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00550571: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00550573: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x550578u); f_007706b0();
    /* 00550578: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055057b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055057c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055057d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055057e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055057f: ret  */ FN_RET(0x00550550); r_esp += 4; return;
L_00550580:; BB(0x00550580);
    /* 00550580: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00550582: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00550584: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00550586: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x550589u); call_ind(t); }
    /* 00550589: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055058b: je 0x5508bb */ if (fZ) goto L_005508bb;
L_00550591:; BB(0x00550591);
    /* 00550591: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00550594: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00550596: je 0x550721 */ if (fZ) goto L_00550721;
L_0055059c:; BB(0x0055059c);
    /* 0055059c: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005505a2: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005505a8: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 005505ae: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005505b0: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 005505b5: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 005505bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005505bf: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 005505c7: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 005505cf: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 005505d1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005505d3: jle 0x5508e9 */ if ((fZ||fS!=fO)) goto L_005508e9;
L_005505d9:; BB(0x005505d9);
    /* 005505d9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005505dc: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
L_005505e0:; BB(0x005505e0);
    /* 005505e0: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 005505e7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005505e9: je 0x5506a6 */ if (fZ) goto L_005506a6;
L_005505ef:; BB(0x005505ef);
    /* 005505ef: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005505f1: je 0x5506a6 */ if (fZ) goto L_005506a6;
L_005505f7:; BB(0x005505f7);
    /* 005505f7: movzx esi, word ptr [ebp + 0x1c] */ r_esi = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005505fb: cmp esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550601: jge 0x5506a6 */ if ((fS==fO)) goto L_005506a6;
L_00550607:; BB(0x00550607);
    /* 00550607: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0055060b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055060d: je 0x5506a6 */ if (fZ) goto L_005506a6;
L_00550613:; BB(0x00550613);
    /* 00550613: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00550616: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055061b: jne 0x5506a6 */ if (!fZ) goto L_005506a6;
L_00550621:; BB(0x00550621);
    /* 00550621: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00550625: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 0055062b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0055062f: mov eax, dword ptr [ebp + 0x304] */ r_eax = R32((u32)(r_ebp+0x304u));
    /* 00550635: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0055063b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0055063f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00550645: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00550649: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x55064eu); f_0082f9c4();
    /* 0055064e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00550652: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00550654: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00550658: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0055065a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0055065c: fcom dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); 
    /* 0055065f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00550661: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00550665: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00550666: jb 0x550676 */ if (fC) goto L_00550676;
L_00550668:; BB(0x00550668);
    /* 00550668: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0055066e: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00550674: jmp 0x5506a6 */ goto L_005506a6;
L_00550676:; BB(0x00550676);
    /* 00550676: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0055067c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055067d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055067f: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x550684u); f_00771e14();
    /* 00550684: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0055068a: mov ebp, dword ptr [0xaae164] */ r_ebp = R32((u32)(0xaae164u));
    /* 00550690: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550693: je 0x5508c3 */ if (fZ) goto L_005508c3;
L_00550699:; BB(0x00550699);
    /* 00550699: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0055069d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005506a0: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005506a2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_005506a6:; BB(0x005506a6);
    /* 005506a6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005506a9: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005506ab: jl 0x5505e0 */ if ((fS!=fO)) goto L_005505e0;
L_005506b1:; BB(0x005506b1);
    /* 005506b1: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_005506b5:; BB(0x005506b5);
    /* 005506b5: mov word ptr [ebx + 0x340], bp */ W16((u32)(r_ebx+0x340u), (u16)r_ebp);
    /* 005506bc: cmp ebp, 0x1000 */ {  u32 a = r_ebp; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005506c2: jl 0x5506e7 */ if ((fS!=fO)) goto L_005506e7;
L_005506c4:; BB(0x005506c4);
    /* 005506c4: cmp ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005506ca: jge 0x5508bb */ if ((fS==fO)) goto L_005508bb;
L_005506d0:; BB(0x005506d0);
    /* 005506d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005506d1: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5506d6u); f_00786b3c();
    /* 005506d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005506d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005506d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005506da: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5506dfu); f_007706b0();
    /* 005506df: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005506e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005506e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005506e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005506e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005506e6: ret  */ FN_RET(0x00550550); r_esp += 4; return;
L_005506e7:; BB(0x005506e7);
    /* 005506e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005506e8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5506edu); f_0068d5a8();
    /* 005506ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005506ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005506f0: je 0x550710 */ if (fZ) goto L_00550710;
L_005506f2:; BB(0x005506f2);
    /* 005506f2: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 005506f8: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005506fe: jne 0x550710 */ if (!fZ) goto L_00550710;
L_00550700:; BB(0x00550700);
    /* 00550700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550701: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00550703: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x550708u); f_007706b0();
    /* 00550708: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055070b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055070c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055070d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055070e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055070f: ret  */ FN_RET(0x00550550); r_esp += 4; return;
L_00550710:; BB(0x00550710);
    /* 00550710: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00550712: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00550714: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x550719u); f_007706b0();
    /* 00550719: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055071c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055071d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055071e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055071f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550720: ret  */ FN_RET(0x00550550); r_esp += 4; return;
L_00550721:; BB(0x00550721);
    /* 00550721: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 00550727: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0055072f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00550731: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00550733: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0055073b: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 00550740: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00550742: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0055074a: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0055074f: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00550751: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00550753: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00550755: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0055075a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055075c: jle 0x5508f0 */ if ((fZ||fS!=fO)) goto L_005508f0;
L_00550762:; BB(0x00550762);
    /* 00550762: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00550765: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00550769: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0055076d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00550771: mov edx, eax */ r_edx = r_eax;
    /* 00550773: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00550777:; BB(0x00550777);
    /* 00550777: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0055077e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550780: je 0x550874 */ if (fZ) goto L_00550874;
L_00550786:; BB(0x00550786);
    /* 00550786: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0055078a: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055078f: jge 0x550874 */ if ((fS==fO)) goto L_00550874;
L_00550795:; BB(0x00550795);
    /* 00550795: mov eax, dword ptr [esi + 0x3f0] */ r_eax = R32((u32)(r_esi+0x3f0u));
    /* 0055079b: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005507a1: jne 0x550874 */ if (!fZ) goto L_00550874;
L_005507a7:; BB(0x005507a7);
    /* 005507a7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005507aa: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005507af: jne 0x550874 */ if (!fZ) goto L_00550874;
L_005507b5:; BB(0x005507b5);
    /* 005507b5: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005507b9: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005507bf: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005507c3: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 005507c9: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 005507cf: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005507d3: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005507d9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005507dd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5507e2u); f_0082f9c4();
    /* 005507e2: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005507e6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005507e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005507ec: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005507ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005507f0: mov eax, dword ptr [esi + 0x964] */ r_eax = R32((u32)(r_esi+0x964u));
    /* 005507f6: test dword ptr [ebx + 0x380], eax */ {  u32 a = R32((u32)(r_ebx+0x380u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005507fc: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00550800: je 0x550836 */ if (fZ) goto L_00550836;
L_00550802:; BB(0x00550802);
    /* 00550802: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00550806: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 0055080a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055080c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055080d: jae 0x550836 */ if (!fC) goto L_00550836;
L_0055080f:; BB(0x0055080f);
    /* 0055080f: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00550815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550816: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00550818: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x55081du); f_00771e14();
    /* 0055081d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550820: je 0x550836 */ if (fZ) goto L_00550836;
L_00550822:; BB(0x00550822);
    /* 00550822: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00550826: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0055082a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0055082e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00550832: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_00550836:; BB(0x00550836);
    /* 00550836: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0055083a: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0055083d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055083f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00550840: jb 0x55084a */ if (fC) goto L_0055084a;
L_00550842:; BB(0x00550842);
    /* 00550842: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00550848: jmp 0x550874 */ goto L_00550874;
L_0055084a:; BB(0x0055084a);
    /* 0055084a: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00550850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550851: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00550853: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x550858u); f_00771e14();
    /* 00550858: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0055085e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550861: je 0x550874 */ if (fZ) goto L_00550874;
L_00550863:; BB(0x00550863);
    /* 00550863: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00550867: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 0055086b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055086e: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00550872: mov ebp, esi */ r_ebp = r_esi;
L_00550874:; BB(0x00550874);
    /* 00550874: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00550877: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550879: jl 0x550777 */ if ((fS!=fO)) goto L_00550777;
L_0055087f:; BB(0x0055087f);
    /* 0055087f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00550883: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00550887: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0055088b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
L_0055088e:; BB(0x0055088e);
    /* 0055088e: fcomp dword ptr [0x9245b4] */ fx_compare(ST(0), R_F32((u32)(0x9245b4u))); FPOP();
    /* 00550894: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00550896: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00550897: jae 0x5508a8 */ if (!fC) goto L_005508a8;
L_00550899:; BB(0x00550899);
    /* 00550899: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055089b: je 0x5508a8 */ if (fZ) goto L_005508a8;
L_0055089d:; BB(0x0055089d);
    /* 0055089d: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 005508a4: mov esi, ebp */ r_esi = r_ebp;
    /* 005508a6: jmp 0x5508b3 */ goto L_005508b3;
L_005508a8:; BB(0x005508a8);
    /* 005508a8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005508aa: je 0x5508ca */ if (fZ) goto L_005508ca;
L_005508ac:; BB(0x005508ac);
    /* 005508ac: mov word ptr [ebx + 0x340], cx */ W16((u32)(r_ebx+0x340u), (u16)r_ecx);
L_005508b3:; BB(0x005508b3);
    /* 005508b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005508b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005508b6: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5508bbu); f_007706b0();
L_005508bb:; BB(0x005508bb);
    /* 005508bb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005508be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005508bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005508c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005508c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005508c2: ret  */ FN_RET(0x00550550); r_esp += 4; return;
L_005508c3:; BB(0x005508c3);
    /* 005508c3: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005508c5: jmp 0x5506a6 */ goto L_005506a6;
L_005508ca:; BB(0x005508ca);
    /* 005508ca: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005508cc: je 0x5508d9 */ if (fZ) goto L_005508d9;
L_005508ce:; BB(0x005508ce);
    /* 005508ce: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 005508d5: mov esi, ebp */ r_esi = r_ebp;
    /* 005508d7: jmp 0x5508b3 */ goto L_005508b3;
L_005508d9:; BB(0x005508d9);
    /* 005508d9: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005508de: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 005508e5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005508e7: jmp 0x5508b3 */ goto L_005508b3;
L_005508e9:; BB(0x005508e9);
    /* 005508e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005508eb: jmp 0x5506b5 */ goto L_005506b5;
L_005508f0:; BB(0x005508f0);
    /* 005508f0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005508f2: jmp 0x55088e */ goto L_0055088e;
}

void f_005508f4(void) /* sub_5508F4 */
{
    FN_ENTER(0x005508f4);
    /* 005508f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005508f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005508f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005508f9: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x5508feu); f_00777d10();
    /* 005508fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550900: je 0x550970 */ if (fZ) goto L_00550970;
L_00550902:; BB(0x00550902);
    /* 00550902: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00550909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055090b: jl 0x550969 */ if ((fS!=fO)) goto L_00550969;
L_0055090d:; BB(0x0055090d);
    /* 0055090d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550910: jle 0x550917 */ if ((fZ||fS!=fO)) goto L_00550917;
L_00550912:; BB(0x00550912);
    /* 00550912: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00550915: jne 0x550969 */ if (!fZ) goto L_00550969;
L_00550917:; BB(0x00550917);
    /* 00550917: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0055091d: lea ecx, [ebp + 0x3ac] */ r_ecx = (u32)(r_ebp+0x3acu);
    /* 00550923: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x550926u); call_ind(t); }
    /* 00550926: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00550929: jne 0x550969 */ if (!fZ) goto L_00550969;
L_0055092b:; BB(0x0055092b);
    /* 0055092b: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00550931: and eax, 0xffffffbc */ {  u32 a = r_eax; u32 b = 0xffffffbcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00550934: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550937: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 0055093d: mov edx, 3 */ r_edx = 0x3u;
    /* 00550942: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 00550949: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055094b: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00550952: mov eax, 1 */ r_eax = 0x1u;
    /* 00550957: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055095e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00550961: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550966: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_00550969:; BB(0x00550969);
    /* 00550969: mov eax, 1 */ r_eax = 0x1u;
    /* 0055096e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055096f: ret  */ FN_RET(0x005508f4); r_esp += 4; return;
L_00550970:; BB(0x00550970);
    /* 00550970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00550973: ret  */ FN_RET(0x005508f4); r_esp += 4; return;
}

void f_00550974(void) /* sub_550974 */
{
    FN_ENTER(0x00550974);
    /* 00550974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00550975: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00550977: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00550979: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x55097eu); f_007780a8();
    /* 0055097e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550980: je 0x5509f0 */ if (fZ) goto L_005509f0;
L_00550982:; BB(0x00550982);
    /* 00550982: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00550989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055098b: jl 0x5509e9 */ if ((fS!=fO)) goto L_005509e9;
L_0055098d:; BB(0x0055098d);
    /* 0055098d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550990: jle 0x550997 */ if ((fZ||fS!=fO)) goto L_00550997;
L_00550992:; BB(0x00550992);
    /* 00550992: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00550995: jne 0x5509e9 */ if (!fZ) goto L_005509e9;
L_00550997:; BB(0x00550997);
    /* 00550997: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0055099d: lea ecx, [ebp + 0x3ac] */ r_ecx = (u32)(r_ebp+0x3acu);
    /* 005509a3: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5509a6u); call_ind(t); }
    /* 005509a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005509a9: jne 0x5509e9 */ if (!fZ) goto L_005509e9;
L_005509ab:; BB(0x005509ab);
    /* 005509ab: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 005509b1: and eax, 0xffffffbc */ {  u32 a = r_eax; u32 b = 0xffffffbcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005509b4: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005509b7: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 005509bd: mov edx, 3 */ r_edx = 0x3u;
    /* 005509c2: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 005509c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005509cb: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005509d2: mov eax, 1 */ r_eax = 0x1u;
    /* 005509d7: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005509de: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005509e1: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005509e6: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_005509e9:; BB(0x005509e9);
    /* 005509e9: mov eax, 1 */ r_eax = 0x1u;
    /* 005509ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005509ef: ret  */ FN_RET(0x00550974); r_esp += 4; return;
L_005509f0:; BB(0x005509f0);
    /* 005509f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005509f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005509f3: ret  */ FN_RET(0x00550974); r_esp += 4; return;
}

void f_005509f4(void) /* sub_5509F4 */
{
    FN_ENTER(0x005509f4);
    /* 005509f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005509f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005509f7: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005509fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550a00: jne 0x550a6a */ if (!fZ) goto L_00550a6a;
L_00550a02:; BB(0x00550a02);
    /* 00550a02: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 00550a08: lea ecx, [ebp + 0x3ac] */ r_ecx = (u32)(r_ebp+0x3acu);
    /* 00550a0e: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x550a11u); call_ind(t); }
    /* 00550a11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550a13: je 0x550ac4 */ if (fZ) goto L_00550ac4;
L_00550a19:; BB(0x00550a19);
    /* 00550a19: mov eax, 0xb */ r_eax = 0xbu;
    /* 00550a1e: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00550a25: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00550a28: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00550a2a: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00550a31: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00550a38: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00550a3d: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550a42: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00550a45: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00550a4b: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00550a50: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550a53: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00550a59: mov ebp, dword ptr [ebp + 0xa4] */ r_ebp = R32((u32)(r_ebp+0xa4u));
    /* 00550a5f: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00550a62: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550a65: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 00550a68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00550a69: ret  */ FN_RET(0x005509f4); r_esp += 4; return;
L_00550a6a:; BB(0x00550a6a);
    /* 00550a6a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550a6d: jne 0x550a84 */ if (!fZ) goto L_00550a84;
L_00550a6f:; BB(0x00550a6f);
    /* 00550a6f: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00550a75: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550a77: jne 0x550ac4 */ if (!fZ) goto L_00550ac4;
L_00550a79:; BB(0x00550a79);
    /* 00550a79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550a7b: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00550a82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00550a83: ret  */ FN_RET(0x005509f4); r_esp += 4; return;
L_00550a84:; BB(0x00550a84);
    /* 00550a84: mov eax, 0xb */ r_eax = 0xbu;
    /* 00550a89: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00550a90: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00550a93: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00550a95: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00550a9c: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00550aa3: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00550aa8: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550aad: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00550ab0: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00550ab6: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00550abb: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550abe: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
L_00550ac4:; BB(0x00550ac4);
    /* 00550ac4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00550ac5: ret  */ FN_RET(0x005509f4); r_esp += 4; return;
}

void f_00550ac8(void) /* sub_550AC8 */
{
    FN_ENTER(0x00550ac8);
    /* 00550ac8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00550ac9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00550aca: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550acd: mov edi, ecx */ r_edi = r_ecx;
    /* 00550acf: mov ecx, edi */ r_ecx = r_edi;
    /* 00550ad1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x550ad6u); f_00770738();
    /* 00550ad6: mov ebx, eax */ r_ebx = r_eax;
    /* 00550ad8: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00550adf: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550ae2: jl 0x550c23 */ if ((fS!=fO)) goto L_00550c23;
L_00550ae8:; BB(0x00550ae8);
    /* 00550ae8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550aea: je 0x550c23 */ if (fZ) goto L_00550c23;
L_00550af0:; BB(0x00550af0);
    /* 00550af0: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 00550af6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550af8: je 0x550c23 */ if (fZ) goto L_00550c23;
L_00550afe:; BB(0x00550afe);
    /* 00550afe: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00550b01: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550b07: jne 0x550c23 */ if (!fZ) goto L_00550c23;
L_00550b0d:; BB(0x00550b0d);
    /* 00550b0d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00550b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550b11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00550b12: mov ecx, edi */ r_ecx = r_edi;
    /* 00550b14: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x550b19u); f_00771458();
    /* 00550b19: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00550b1d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00550b20: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00550b24: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00550b26: fmul qword ptr [0x924548] */ ST(0) = ST(0) * R_F64((u32)(0x924548u));
    /* 00550b2c: fdiv qword ptr [0x924540] */ ST(0) = ST(0) / R_F64((u32)(0x924540u));
    /* 00550b32: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00550b36: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00550b3b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550b40: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00550b44: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00550b48: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00550b4c: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00550b50: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00550b54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550b55: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00550b58: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x550b5du); f_007a9018();
    /* 00550b5d: mov edx, eax */ r_edx = r_eax;
    /* 00550b5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550b62: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 00550b68: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550b6a: je 0x550c2b */ if (fZ) goto L_00550c2b;
L_00550b70:; BB(0x00550b70);
    /* 00550b70: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
L_00550b73:; BB(0x00550b73);
    /* 00550b73: mov ebx, dword ptr [edi + 0x37c] */ r_ebx = R32((u32)(r_edi+0x37cu));
    /* 00550b79: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00550b7c: jne 0x550bec */ if (!fZ) goto L_00550bec;
L_00550b7e:; BB(0x00550b7e);
    /* 00550b7e: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00550b81: je 0x550bb9 */ if (fZ) goto L_00550bb9;
L_00550b83:; BB(0x00550b83);
    /* 00550b83: fadd dword ptr [0x9245ac] */ ST(0) = ST(0) + R_F32((u32)(0x9245acu));
    /* 00550b89: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00550b8b: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00550b8f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00550b91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00550b93: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00550b98: mov word ptr [edi + 0x384], bx */ W16((u32)(r_edi+0x384u), (u16)r_ebx);
    /* 00550b9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00550ba0: ja 0x550c23 */ if ((!fC&&!fZ)) goto L_00550c23;
L_00550ba6:; BB(0x00550ba6);
    /* 00550ba6: cmp edx, 0xaaa */ {  u32 a = r_edx; u32 b = 0xaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550bac: jg 0x550c23 */ if ((!fZ&&fS==fO)) goto L_00550c23;
L_00550bae:; BB(0x00550bae);
    /* 00550bae: mov eax, 1 */ r_eax = 0x1u;
    /* 00550bb3: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550bb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00550bb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550bb8: ret  */ FN_RET(0x00550ac8); r_esp += 4; return;
L_00550bb9:; BB(0x00550bb9);
    /* 00550bb9: mov ecx, dword ptr [0xa73980] */ r_ecx = R32((u32)(0xa73980u));
    /* 00550bbf: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00550bc3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00550bc5: mov word ptr [edi + 0x384], bx */ W16((u32)(r_edi+0x384u), (u16)r_ebx);
    /* 00550bcc: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00550bce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00550bd0: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00550bd3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00550bd5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00550bd7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00550bd9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00550bda: jb 0x550c23 */ if (fC) goto L_00550c23;
L_00550bdc:; BB(0x00550bdc);
    /* 00550bdc: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550bdf: jg 0x550c23 */ if ((!fZ&&fS==fO)) goto L_00550c23;
L_00550be1:; BB(0x00550be1);
    /* 00550be1: mov eax, 1 */ r_eax = 0x1u;
    /* 00550be6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550be9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00550bea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550beb: ret  */ FN_RET(0x00550ac8); r_esp += 4; return;
L_00550bec:; BB(0x00550bec);
    /* 00550bec: mov ecx, dword ptr [0xa73980] */ r_ecx = R32((u32)(0xa73980u));
    /* 00550bf2: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00550bf6: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00550bfb: mov word ptr [edi + 0x384], bx */ W16((u32)(r_edi+0x384u), (u16)r_ebx);
    /* 00550c02: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00550c05: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00550c07: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00550c0a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00550c0c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00550c0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00550c10: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00550c11: jb 0x550c23 */ if (fC) goto L_00550c23;
L_00550c13:; BB(0x00550c13);
    /* 00550c13: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550c16: jg 0x550c23 */ if ((!fZ&&fS==fO)) goto L_00550c23;
L_00550c18:; BB(0x00550c18);
    /* 00550c18: mov eax, 1 */ r_eax = 0x1u;
    /* 00550c1d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550c20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00550c21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550c22: ret  */ FN_RET(0x00550ac8); r_esp += 4; return;
L_00550c23:; BB(0x00550c23);
    /* 00550c23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00550c25: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550c28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00550c29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550c2a: ret  */ FN_RET(0x00550ac8); r_esp += 4; return;
L_00550c2b:; BB(0x00550c2b);
    /* 00550c2b: fld dword ptr [0x9245b0] */ FPUSH(R_F32((u32)(0x9245b0u)));
    /* 00550c31: jmp 0x550b73 */ goto L_00550b73;
}

void f_00550c38(void) /* sub_550C38 */
{
    FN_ENTER(0x00550c38);
    /* 00550c38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00550c39: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550c3c: mov edi, ecx */ r_edi = r_ecx;
    /* 00550c3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00550c40: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x550c45u); f_00770738();
    /* 00550c45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550c47: je 0x550daf */ if (fZ) goto L_00550daf;
L_00550c4d:; BB(0x00550c4d);
    /* 00550c4d: movsx edx, word ptr [edi + 0x384] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x384u));
    /* 00550c54: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550c57: jne 0x550c7f */ if (!fZ) goto L_00550c7f;
L_00550c59:; BB(0x00550c59);
    /* 00550c59: mov eax, 5 */ r_eax = 0x5u;
    /* 00550c5e: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00550c65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00550c67: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00550c6e: mov eax, 3 */ r_eax = 0x3u;
    /* 00550c73: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00550c7a: jmp 0x550d78 */ goto L_00550d78;
L_00550c7f:; BB(0x00550c7f);
    /* 00550c7f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550c82: jne 0x550caa */ if (!fZ) goto L_00550caa;
L_00550c84:; BB(0x00550c84);
    /* 00550c84: mov eax, 6 */ r_eax = 0x6u;
    /* 00550c89: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00550c90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00550c92: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00550c99: mov eax, 4 */ r_eax = 0x4u;
    /* 00550c9e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00550ca5: jmp 0x550d78 */ goto L_00550d78;
L_00550caa:; BB(0x00550caa);
    /* 00550caa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00550cad: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 00550cb3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00550cb6: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 00550cbc: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 00550cc2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00550cc6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00550cca: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00550cd0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x550cd5u); f_0082f9c4();
    /* 00550cd5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00550cd8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00550cdc: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00550cde: fmul qword ptr [0x924538] */ ST(0) = ST(0) * R_F64((u32)(0x924538u));
    /* 00550ce4: fdiv qword ptr [0x924530] */ ST(0) = ST(0) / R_F64((u32)(0x924530u));
    /* 00550cea: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00550cee: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00550cf3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550cf8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00550cfc: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00550d00: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00550d04: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00550d08: mov eax, 4 */ r_eax = 0x4u;
    /* 00550d0d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00550d11: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00550d18: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550d1b: jl 0x550d3b */ if ((fS!=fO)) goto L_00550d3b;
L_00550d1d:; BB(0x00550d1d);
    /* 00550d1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00550d1f: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00550d26: mov edx, 1 */ r_edx = 0x1u;
    /* 00550d2b: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00550d32: movsx edx, word ptr [edi + 0x384] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x384u));
    /* 00550d39: jmp 0x550d78 */ goto L_00550d78;
L_00550d3b:; BB(0x00550d3b);
    /* 00550d3b: mov eax, 1 */ r_eax = 0x1u;
    /* 00550d40: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00550d47: mov eax, dword ptr [0xa73978] */ r_eax = R32((u32)(0xa73978u));
    /* 00550d4c: mov edx, 2 */ r_edx = 0x2u;
    /* 00550d51: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00550d58: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00550d5a: movsx edx, word ptr [edi + 0x384] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x384u));
    /* 00550d61: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
    /* 00550d67: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00550d6d: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550d72: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_00550d78:; BB(0x00550d78);
    /* 00550d78: mov eax, dword ptr [0xa73980] */ r_eax = R32((u32)(0xa73980u));
    /* 00550d7d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00550d7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550d80: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00550d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00550d84: mov ecx, edi */ r_ecx = r_edi;
    /* 00550d86: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x550d8bu); f_007868f8();
    /* 00550d8b: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00550d91: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00550d94: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550d97: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00550d9a: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00550d9d: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00550da2: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550da7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00550daa: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550dad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550dae: ret  */ FN_RET(0x00550c38); r_esp += 4; return;
L_00550daf:; BB(0x00550daf);
    /* 00550daf: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550db2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550db3: ret  */ FN_RET(0x00550c38); r_esp += 4; return;
}

void f_00550db4(void) /* sub_550DB4 */
{
    FN_ENTER(0x00550db4);
    /* 00550db4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00550db5: mov ebx, esp */ r_ebx = r_esp;
    /* 00550db7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00550dba: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550dbd: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 00550dc3: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550dc5: jne 0x550f4b */ if (!fZ) goto L_00550f4b;
L_00550dcb:; BB(0x00550dcb);
    /* 00550dcb: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00550dcd: je 0x550f45 */ if (fZ) goto L_00550f45;
L_00550dd3:; BB(0x00550dd3);
    /* 00550dd3: movsx eax, word ptr [ecx + 0x390] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x390u));
    /* 00550dda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00550ddc: jle 0x550f45 */ if ((fZ||fS!=fO)) goto L_00550f45;
L_00550de2:; BB(0x00550de2);
    /* 00550de2: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00550de8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00550dea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00550dec: jle 0x550f45 */ if ((fZ||fS!=fO)) goto L_00550f45;
L_00550df2:; BB(0x00550df2);
    /* 00550df2: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00550df6: mov esi, ecx */ r_esi = r_ecx;
    /* 00550df8: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00550dfc: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00550e00: mov edi, eax */ r_edi = r_eax;
L_00550e02:; BB(0x00550e02);
    /* 00550e02: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 00550e09: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550e0b: je 0x550f2e */ if (fZ) goto L_00550f2e;
L_00550e11:; BB(0x00550e11);
    /* 00550e11: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00550e14: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550e19: jne 0x550f2e */ if (!fZ) goto L_00550f2e;
L_00550e1f:; BB(0x00550e1f);
    /* 00550e1f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00550e22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550e23: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 00550e26: mov ecx, esi */ r_ecx = r_esi;
    /* 00550e28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550e29: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x550e2eu); f_007713d4();
    /* 00550e2e: fcomp dword ptr [0x9245a8] */ fx_compare(ST(0), R_F32((u32)(0x9245a8u))); FPOP();
    /* 00550e34: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00550e36: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00550e37: jb 0x550e44 */ if (fC) goto L_00550e44;
L_00550e39:; BB(0x00550e39);
    /* 00550e39: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00550e3f: jmp 0x550f2e */ goto L_00550f2e;
L_00550e44:; BB(0x00550e44);
    /* 00550e44: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00550e47: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00550e4b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00550e4d: fmul qword ptr [0x924528] */ ST(0) = ST(0) * R_F64((u32)(0x924528u));
    /* 00550e53: fdiv qword ptr [0x924520] */ ST(0) = ST(0) / R_F64((u32)(0x924520u));
    /* 00550e59: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00550e5d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00550e62: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550e67: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00550e6b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00550e6f: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00550e73: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00550e77: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00550e7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550e7c: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00550e7f: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x550e84u); f_007a9018();
    /* 00550e84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550e87: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550e8c: jl 0x550e99 */ if ((fS!=fO)) goto L_00550e99;
L_00550e8e:; BB(0x00550e8e);
    /* 00550e8e: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00550e94: jmp 0x550f2e */ goto L_00550f2e;
L_00550e99:; BB(0x00550e99);
    /* 00550e99: mov edx, dword ptr [ebp + 0x328] */ r_edx = R32((u32)(r_ebp+0x328u));
    /* 00550e9f: test edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ea5: je 0x550f28 */ if (fZ) goto L_00550f28;
L_00550eab:; BB(0x00550eab);
    /* 00550eab: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00550eae: mov edx, dword ptr [esi + 0x300] */ r_edx = R32((u32)(r_esi+0x300u));
    /* 00550eb4: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00550eb7: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00550ebd: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00550ec1: mov edx, dword ptr [esi + 0x308] */ r_edx = R32((u32)(r_esi+0x308u));
    /* 00550ec7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00550ecb: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 00550ed1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x550ed6u); f_0082f9c4();
    /* 00550ed6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00550ed9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00550edd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00550edf: fmul qword ptr [0x924528] */ ST(0) = ST(0) * R_F64((u32)(0x924528u));
    /* 00550ee5: fdiv qword ptr [0x924520] */ ST(0) = ST(0) / R_F64((u32)(0x924520u));
    /* 00550eeb: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00550eef: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00550ef4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550ef9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00550efd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00550f01: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00550f05: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00550f09: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00550f0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00550f0e: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00550f11: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x550f16u); f_007a9018();
    /* 00550f16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00550f19: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550f1e: jl 0x550f54 */ if ((fS!=fO)) goto L_00550f54;
L_00550f20:; BB(0x00550f20);
    /* 00550f20: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00550f26: jmp 0x550f2e */ goto L_00550f2e;
L_00550f28:; BB(0x00550f28);
    /* 00550f28: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00550f2e:; BB(0x00550f2e);
    /* 00550f2e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00550f31: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550f33: jl 0x550e02 */ if ((fS!=fO)) goto L_00550e02;
L_00550f39:; BB(0x00550f39);
    /* 00550f39: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00550f3d: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00550f41: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00550f45:; BB(0x00550f45);
    /* 00550f45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550f47: mov esp, ebx */ r_esp = r_ebx;
    /* 00550f49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00550f4a: ret  */ FN_RET(0x00550db4); r_esp += 4; return;
L_00550f4b:; BB(0x00550f4b);
    /* 00550f4b: mov eax, 1 */ r_eax = 0x1u;
    /* 00550f50: mov esp, ebx */ r_esp = r_ebx;
    /* 00550f52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00550f53: ret  */ FN_RET(0x00550db4); r_esp += 4; return;
L_00550f54:; BB(0x00550f54);
    /* 00550f54: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00550f58: mov eax, ebp */ r_eax = r_ebp;
    /* 00550f5a: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00550f5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00550f60: mov edx, dword ptr [ecx + 0x37c] */ r_edx = R32((u32)(r_ecx+0x37cu));
    /* 00550f66: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00550f6a: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 00550f70: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550f73: mov dword ptr [ecx + 0x37c], edx */ W32((u32)(r_ecx+0x37cu), r_edx);
    /* 00550f79: mov eax, 1 */ r_eax = 0x1u;
    /* 00550f7e: mov esp, ebx */ r_esp = r_ebx;
    /* 00550f80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00550f81: ret  */ FN_RET(0x00550db4); r_esp += 4; return;
}

void f_00550f84(void) /* sub_550F84 */
{
    FN_ENTER(0x00550f84);
    /* 00550f84: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00550f8b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550f8e: je 0x550fb1 */ if (fZ) goto L_00550fb1;
L_00550f90:; BB(0x00550f90);
    /* 00550f90: mov eax, 7 */ r_eax = 0x7u;
    /* 00550f95: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00550f9c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00550f9e: mov word ptr [ecx + 0x330], dx */ W16((u32)(r_ecx+0x330u), (u16)r_edx);
    /* 00550fa5: mov eax, 5 */ r_eax = 0x5u;
    /* 00550faa: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
L_00550fb1:; BB(0x00550fb1);
    /* 00550fb1: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00550fb7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00550fba: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00550fbd: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00550fc0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00550fc3: and eax, 0xf99bffff */ {  u32 a = r_eax; u32 b = 0xf99bffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00550fc8: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00550fcb: ret  */ FN_RET(0x00550f84); r_esp += 4; return;
}

void f_00550fcc(void) /* sub_550FCC */
{
    FN_ENTER(0x00550fcc);
    /* 00550fcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00550fcd: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00550fd0: mov edi, ecx */ r_edi = r_ecx;
    /* 00550fd2: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00550fd9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550fdc: jl 0x550fe7 */ if ((fS!=fO)) goto L_00550fe7;
L_00550fde:; BB(0x00550fde);
    /* 00550fde: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00550fe1: jle 0x5510ad */ if ((fZ||fS!=fO)) goto L_005510ad;
L_00550fe7:; BB(0x00550fe7);
    /* 00550fe7: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 00550fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00550fef: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x550ff4u); f_0068d5a8();
    /* 00550ff4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00550ff5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00550ff7: je 0x55108c */ if (fZ) goto L_0055108c;
L_00550ffd:; BB(0x00550ffd);
    /* 00550ffd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00551000: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 00551006: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00551009: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 0055100f: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 00551015: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00551019: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055101d: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00551023: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x551028u); f_0082f9c4();
    /* 00551028: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0055102b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0055102f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00551031: fmul qword ptr [0x924518] */ ST(0) = ST(0) * R_F64((u32)(0x924518u));
    /* 00551037: fdiv qword ptr [0x924510] */ ST(0) = ST(0) / R_F64((u32)(0x924510u));
    /* 0055103d: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00551041: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00551046: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055104b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0055104f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00551053: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00551057: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0055105b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0055105f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551060: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551063: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x551068u); f_007a9018();
    /* 00551068: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055106b: cmp eax, 0x2aaa */ {  u32 a = r_eax; u32 b = 0x2aaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551070: jl 0x55108c */ if ((fS!=fO)) goto L_0055108c;
L_00551072:; BB(0x00551072);
    /* 00551072: mov eax, 9 */ r_eax = 0x9u;
    /* 00551077: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0055107e: mov edx, 8 */ r_edx = 0x8u;
    /* 00551083: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 0055108a: jmp 0x5510a4 */ goto L_005510a4;
L_0055108c:; BB(0x0055108c);
    /* 0055108c: mov eax, 8 */ r_eax = 0x8u;
    /* 00551091: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00551098: mov edx, 6 */ r_edx = 0x6u;
    /* 0055109d: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
L_005510a4:; BB(0x005510a4);
    /* 005510a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005510a6: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
L_005510ad:; BB(0x005510ad);
    /* 005510ad: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 005510b3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005510b6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005510b9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005510bc: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005510bf: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005510c4: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005510c7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005510ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005510cb: ret  */ FN_RET(0x00550fcc); r_esp += 4; return;
}

