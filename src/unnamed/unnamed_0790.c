#include "protos.h"

void f_0079004c(void)
{
    FN_ENTER(0x0079004c);
    /* 0079004c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079004e: je 0x790189 */ if (fZ) goto L_00790189;
L_00790054:; BB(0x00790054);
    /* 00790054: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00790058:; BB(0x00790058);
    /* 00790058: mov dword ptr [0xa0f698], edx */ W32((u32)(0xa0f698u), r_edx);
    /* 0079005e: jmp 0x790149 */ f_00790149(); return;
L_00790189:; BB(0x00790189);
    /* 00790189: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079018b: jmp 0x790058 */ goto L_00790058;
}

void f_00790061(void)
{
    FN_ENTER(0x00790061);
    /* 00790061: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00790063: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790065: je 0x790190 */ if (fZ) goto L_00790190;
L_0079006b:; BB(0x0079006b);
    /* 0079006b: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_0079006f:; BB(0x0079006f);
    /* 0079006f: mov dword ptr [0xa0f688], edx */ W32((u32)(0xa0f688u), r_edx);
    /* 00790075: jmp 0x790149 */ f_00790149(); return;
L_00790190:; BB(0x00790190);
    /* 00790190: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00790192: jmp 0x79006f */ goto L_0079006f;
}

void f_00790062(void)
{
    FN_ENTER(0x00790062);
    /* 00790062: add byte ptr [ebp + 0x25840fd2], al */ { u32 ad = (u32)(r_ebp+0x25840fd2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00790068: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0079006a: add byte ptr [ebx - 0x76fb4dac], cl */ { u32 ad = (u32)(r_ebx+0x8904b254u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 00790070: adc eax, 0xa0f688 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa0f688u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00790075: jmp 0x790149 */ f_00790149(); return;
}

void f_00790063(void)
{
    FN_ENTER(0x00790063);
    /* 00790063: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790065: je 0x790190 */ if (fZ) goto L_00790190;
L_0079006b:; BB(0x0079006b);
    /* 0079006b: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_0079006f:; BB(0x0079006f);
    /* 0079006f: mov dword ptr [0xa0f688], edx */ W32((u32)(0xa0f688u), r_edx);
    /* 00790075: jmp 0x790149 */ f_00790149(); return;
L_00790190:; BB(0x00790190);
    /* 00790190: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00790192: jmp 0x79006f */ goto L_0079006f;
}

void f_00790072(void)
{
    FN_ENTER(0x00790072);
    /* 00790072: mul byte ptr [eax + 0xcfe900] */ { u32 t = (r_eax & 0xffu) * R8((u32)(r_eax+0xcfe900u)); r_eax = (r_eax & 0xffff0000u) | t; fC = fO = ((t >> 8) != 0); }
    /* 00790078: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0079007a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079007c: je 0x790197 */ if (fZ) goto L_00790197;
L_00790082:; BB(0x00790082);
    /* 00790082: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00790086:; BB(0x00790086);
    /* 00790086: mov dword ptr [0xa0f684], edx */ W32((u32)(0xa0f684u), r_edx);
    /* 0079008c: jmp 0x790149 */ f_00790149(); return;
L_00790197:; BB(0x00790197);
    /* 00790197: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00790199: jmp 0x790086 */ goto L_00790086;
}

void f_00790074(void)
{
    FN_ENTER(0x00790074);
    /* 00790074: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00790076: iretd  */ UNSUP(0x00790076, "iretd ");
    /* 00790077: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00790079: add byte ptr [ebp + 0x15840fd2], al */ { u32 ad = (u32)(r_ebp+0x15840fd2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0079007f: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00790081: add byte ptr [ebx - 0x76fb4dac], cl */ { u32 ad = (u32)(r_ebx+0x8904b254u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 00790087: adc eax, 0xa0f684 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa0f684u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 0079008c: jmp 0x790149 */ f_00790149(); return;
}

void f_00790078(void)
{
    FN_ENTER(0x00790078);
    /* 00790078: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0079007a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079007c: je 0x790197 */ if (fZ) goto L_00790197;
L_00790082:; BB(0x00790082);
    /* 00790082: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00790086:; BB(0x00790086);
    /* 00790086: mov dword ptr [0xa0f684], edx */ W32((u32)(0xa0f684u), r_edx);
    /* 0079008c: jmp 0x790149 */ f_00790149(); return;
L_00790197:; BB(0x00790197);
    /* 00790197: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00790199: jmp 0x790086 */ goto L_00790086;
}

void f_0079007a(void)
{
    FN_ENTER(0x0079007a);
    /* 0079007a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079007c: je 0x790197 */ if (fZ) goto L_00790197;
L_00790082:; BB(0x00790082);
    /* 00790082: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00790086:; BB(0x00790086);
    /* 00790086: mov dword ptr [0xa0f684], edx */ W32((u32)(0xa0f684u), r_edx);
    /* 0079008c: jmp 0x790149 */ f_00790149(); return;
L_00790197:; BB(0x00790197);
    /* 00790197: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00790199: jmp 0x790086 */ goto L_00790086;
}

void f_00790091(void)
{
    FN_ENTER(0x00790091);
    /* 00790091: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790093: je 0x79019e */ if (fZ) goto L_0079019e;
L_00790099:; BB(0x00790099);
    /* 00790099: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_0079009d:; BB(0x0079009d);
    /* 0079009d: mov dword ptr [0xa0f68c], edx */ W32((u32)(0xa0f68cu), r_edx);
    /* 007900a3: jmp 0x790149 */ f_00790149(); return;
L_0079019e:; BB(0x0079019e);
    /* 0079019e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901a0: jmp 0x79009d */ goto L_0079009d;
}

void f_007900a8(void)
{
    FN_ENTER(0x007900a8);
    /* 007900a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007900aa: je 0x7901a5 */ if (fZ) goto L_007901a5;
L_007900b0:; BB(0x007900b0);
    /* 007900b0: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007900b4:; BB(0x007900b4);
    /* 007900b4: mov dword ptr [0xa0f680], edx */ W32((u32)(0xa0f680u), r_edx);
    /* 007900ba: jmp 0x790149 */ f_00790149(); return;
L_007901a5:; BB(0x007901a5);
    /* 007901a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901a7: jmp 0x7900b4 */ goto L_007900b4;
}

void f_007900bf(void)
{
    FN_ENTER(0x007900bf);
    /* 007900bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007900c1: je 0x7901ac */ if (fZ) goto L_007901ac;
L_007900c7:; BB(0x007900c7);
    /* 007900c7: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007900cb:; BB(0x007900cb);
    /* 007900cb: mov dword ptr [0xa0f67c], edx */ W32((u32)(0xa0f67cu), r_edx);
    /* 007900d1: jmp 0x790149 */ f_00790149(); return;
L_007901ac:; BB(0x007901ac);
    /* 007901ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901ae: jmp 0x7900cb */ goto L_007900cb;
}

void f_007900d3(void)
{
    FN_ENTER(0x007900d3);
    /* 007900d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007900d5: je 0x7901b3 */ if (fZ) goto L_007901b3;
L_007900db:; BB(0x007900db);
    /* 007900db: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007900df:; BB(0x007900df);
    /* 007900df: mov dword ptr [0xa0f678], edx */ W32((u32)(0xa0f678u), r_edx);
    /* 007900e5: jmp 0x790149 */ f_00790149(); return;
L_007901b3:; BB(0x007901b3);
    /* 007901b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901b5: jmp 0x7900df */ goto L_007900df;
}

void f_007900e7(void)
{
    FN_ENTER(0x007900e7);
    /* 007900e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007900e9: je 0x7901ba */ if (fZ) goto L_007901ba;
L_007900ef:; BB(0x007900ef);
    /* 007900ef: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007900f3:; BB(0x007900f3);
    /* 007900f3: mov dword ptr [0xa0f674], edx */ W32((u32)(0xa0f674u), r_edx);
    /* 007900f9: jmp 0x790149 */ f_00790149(); return;
L_007901ba:; BB(0x007901ba);
    /* 007901ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901bc: jmp 0x7900f3 */ goto L_007900f3;
}

void f_007900fb(void)
{
    FN_ENTER(0x007900fb);
    /* 007900fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007900fd: je 0x7901c1 */ if (fZ) goto L_007901c1;
L_00790103:; BB(0x00790103);
    /* 00790103: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00790107:; BB(0x00790107);
    /* 00790107: mov dword ptr [0xa0f670], edx */ W32((u32)(0xa0f670u), r_edx);
    /* 0079010d: jmp 0x790149 */ f_00790149(); return;
L_007901c1:; BB(0x007901c1);
    /* 007901c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901c3: jmp 0x790107 */ goto L_00790107;
}

void f_0079010f(void)
{
    FN_ENTER(0x0079010f);
    /* 0079010f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790111: je 0x7901c8 */ if (fZ) goto L_007901c8;
L_00790117:; BB(0x00790117);
    /* 00790117: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_0079011b:; BB(0x0079011b);
    /* 0079011b: mov dword ptr [0xa0f66c], edx */ W32((u32)(0xa0f66cu), r_edx);
    /* 00790121: jmp 0x790149 */ f_00790149(); return;
L_007901c8:; BB(0x007901c8);
    /* 007901c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901ca: jmp 0x79011b */ goto L_0079011b;
}

void f_00790123(void)
{
    FN_ENTER(0x00790123);
    /* 00790123: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790125: je 0x7901cf */ if (fZ) goto L_007901cf;
L_0079012b:; BB(0x0079012b);
    /* 0079012b: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_0079012f:; BB(0x0079012f);
    /* 0079012f: mov dword ptr [0xa0f668], edx */ W32((u32)(0xa0f668u), r_edx);
    /* 00790135: jmp 0x790149 */ f_00790149(); return;
L_007901cf:; BB(0x007901cf);
    /* 007901cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901d1: jmp 0x79012f */ goto L_0079012f;
}

void f_00790137(void)
{
    FN_ENTER(0x00790137);
    goto L_00790137;
L_0078ffbd:; BB(0x0078ffbd);
    /* 0078ffbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078ffbf: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 0078ffc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffc4: je 0x78ffce */ if (fZ) goto L_0078ffce;
L_0078ffc6:; BB(0x0078ffc6);
    /* 0078ffc6: mov ebx, dword ptr [edx + esi*4 + 4] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x4u));
    /* 0078ffca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffcc: jne 0x79003a */ if (!fZ) goto L_0079003a;
L_0078ffce:; BB(0x0078ffce);
    /* 0078ffce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffd0: jne 0x78ffd6 */ if (!fZ) goto L_0078ffd6;
L_0078ffd2:; BB(0x0078ffd2);
    /* 0078ffd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffd4: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078ffd6:; BB(0x0078ffd6);
    /* 0078ffd6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffd9: jne 0x78ffdf */ if (!fZ) goto L_0078ffdf;
L_0078ffdb:; BB(0x0078ffdb);
    /* 0078ffdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffdd: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078ffdf:; BB(0x0078ffdf);
    /* 0078ffdf: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffe2: jne 0x78ffe8 */ if (!fZ) goto L_0078ffe8;
L_0078ffe4:; BB(0x0078ffe4);
    /* 0078ffe4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffe6: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078ffe8:; BB(0x0078ffe8);
    /* 0078ffe8: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffeb: jne 0x78fff1 */ if (!fZ) goto L_0078fff1;
L_0078ffed:; BB(0x0078ffed);
    /* 0078ffed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffef: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078fff1:; BB(0x0078fff1);
    /* 0078fff1: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fff4: jne 0x78fffa */ if (!fZ) goto L_0078fffa;
L_0078fff6:; BB(0x0078fff6);
    /* 0078fff6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fff8: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078fffa:; BB(0x0078fffa);
    /* 0078fffa: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fffd: jne 0x790003 */ if (!fZ) goto L_00790003;
L_0078ffff:; BB(0x0078ffff);
    /* 0078ffff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790001: jne 0x790030 */ if (!fZ) goto L_00790030;
L_00790003:; BB(0x00790003);
    /* 00790003: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790006: jne 0x79000c */ if (!fZ) goto L_0079000c;
L_00790008:; BB(0x00790008);
    /* 00790008: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079000a: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0079000c:; BB(0x0079000c);
    /* 0079000c: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079000f: jne 0x790015 */ if (!fZ) goto L_00790015;
L_00790011:; BB(0x00790011);
    /* 00790011: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790013: jne 0x790030 */ if (!fZ) goto L_00790030;
L_00790015:; BB(0x00790015);
    /* 00790015: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790018: jne 0x79001e */ if (!fZ) goto L_0079001e;
L_0079001a:; BB(0x0079001a);
    /* 0079001a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079001c: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0079001e:; BB(0x0079001e);
    /* 0079001e: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790021: jne 0x790027 */ if (!fZ) goto L_00790027;
L_00790023:; BB(0x00790023);
    /* 00790023: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790025: jne 0x790030 */ if (!fZ) goto L_00790030;
L_00790027:; BB(0x00790027);
    /* 00790027: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079002a: jne 0x79003a */ if (!fZ) goto L_0079003a;
L_0079002c:; BB(0x0079002c);
    /* 0079002c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079002e: je 0x79003a */ if (fZ) goto L_0079003a;
L_00790030:; BB(0x00790030);
    /* 00790030: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00790037: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790038: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00790039: ret  */ FN_RET(0x00790137); r_esp += 4; return;
L_0079003a:; BB(0x0079003a);
    /* 0079003a: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079003d: ja 0x790149 */ if ((!fC&&!fZ)) goto L_00790149;
L_00790043:; BB(0x00790043);
    /* 00790043: mov ebx, dword ptr [ecx*4 + 0x97abb0] */ r_ebx = R32((u32)(r_ecx*4+0x97abb0u));
    /* 0079004a: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00790137:; BB(0x00790137);
    /* 00790137: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790139: je 0x7901d6 */ if (fZ) goto L_007901d6;
L_0079013f:; BB(0x0079013f);
    /* 0079013f: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00790143:; BB(0x00790143);
    /* 00790143: mov dword ptr [0xa0f664], edx */ W32((u32)(0xa0f664u), r_edx);
L_00790149:; BB(0x00790149);
    /* 00790149: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079014c: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079014f: jl 0x78ffbd */ if ((fS!=fO)) goto L_0078ffbd;
L_00790155:; BB(0x00790155);
    /* 00790155: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 0079015b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079015d: je 0x790178 */ if (fZ) goto L_00790178;
L_0079015f:; BB(0x0079015f);
    /* 0079015f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00790161: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790163: je 0x790178 */ if (fZ) goto L_00790178;
L_00790165:; BB(0x00790165);
    /* 00790165: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00790167:; BB(0x00790167);
    /* 00790167: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 0079016b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079016e: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790171: jge 0x7901dd */ if ((fS==fO)) goto L_007901dd;
L_00790173:; BB(0x00790173);
    /* 00790173: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00790176: jl 0x790167 */ if ((fS!=fO)) goto L_00790167;
L_00790178:; BB(0x00790178);
    /* 00790178: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790179: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079017a: ret  */ FN_RET(0x00790137); r_esp += 4; return;
L_007901d6:; BB(0x007901d6);
    /* 007901d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007901d8: jmp 0x790143 */ goto L_00790143;
L_007901dd:; BB(0x007901dd);
    /* 007901dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007901df: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x7901e4u); f_00792f98();
    /* 007901e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007901e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007901e6: ret  */ FN_RET(0x00790137); r_esp += 4; return;
}

void f_00790210(void) /* sub_790210 */
{
    FN_ENTER(0x00790210);
    /* 00790210: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790211: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00790212: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00790213: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790214: mov esi, ecx */ r_esi = r_ecx;
    /* 00790216: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 00790219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079021b: je 0x79043a */ if (fZ) goto L_0079043a;
L_00790221:; BB(0x00790221);
    /* 00790221: movsx eax, byte ptr [esi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 00790225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790227: je 0x79044b */ if (fZ) goto L_0079044b;
L_0079022d:; BB(0x0079022d);
    /* 0079022d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790230: je 0x79043f */ if (fZ) goto L_0079043f;
L_00790236:; BB(0x00790236);
    /* 00790236: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790239: je 0x790276 */ if (fZ) goto L_00790276;
L_0079023b:; BB(0x0079023b);
    /* 0079023b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079023e: jne 0x79026c */ if (!fZ) goto L_0079026c;
L_00790240:; BB(0x00790240);
    /* 00790240: call 0x70a5f8 */ r_esp -= 4; W32(r_esp, 0x790245u); f_0070a5f8();
    /* 00790245: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790247: mov edi, eax */ r_edi = r_eax;
L_00790249:; BB(0x00790249);
    /* 00790249: movzx ebp, byte ptr [edi + 0x97b5e0] */ r_ebp = (u32)R8((u32)(r_edi+0x97b5e0u));
    /* 00790250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00790251: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x790256u); f_007bfff8();
    /* 00790256: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00790257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790259: jne 0x7903b3 */ if (!fZ) goto L_007903b3;
L_0079025f:; BB(0x0079025f);
    /* 0079025f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00790262: cmp edi, 0x2f8 */ {  u32 a = r_edi; u32 b = 0x2f8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790268: jl 0x790249 */ if ((fS!=fO)) goto L_00790249;
L_0079026a:; BB(0x0079026a);
    /* 0079026a: jmp 0x79027d */ goto L_0079027d;
L_0079026c:; BB(0x0079026c);
    /* 0079026c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079026f: jne 0x79027d */ if (!fZ) goto L_0079027d;
L_00790271:; BB(0x00790271);
    /* 00790271: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790273: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00790274: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790275: ret  */ FN_RET(0x00790210); r_esp += 4; return;
L_00790276:; BB(0x00790276);
    /* 00790276: mov ecx, esi */ r_ecx = r_esi;
    /* 00790278: call 0x7907cc */ r_esp -= 4; W32(r_esp, 0x79027du); f_007907cc();
L_0079027d:; BB(0x0079027d);
    /* 0079027d: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00790280: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x790285u); f_00736578();
    /* 00790285: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790287: mov ebp, eax */ r_ebp = r_eax;
L_00790289:; BB(0x00790289);
    /* 00790289: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0079028b: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00790290: mov ecx, dword ptr [esi + ebp*4 + 0x38] */ r_ecx = R32((u32)(r_esi+r_ebp*4+0x38u));
    /* 00790294: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x790299u); f_0072db60();
    /* 00790299: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079029c: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079029f: jl 0x790289 */ if ((fS!=fO)) goto L_00790289;
L_007902a1:; BB(0x007902a1);
    /* 007902a1: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 007902a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007902a7: mov edi, eax */ r_edi = r_eax;
L_007902a9:; BB(0x007902a9);
    /* 007902a9: movzx ebx, word ptr [edx*2 + 0x97bbc8] */ r_ebx = (u32)R16((u32)(r_edx*2+0x97bbc8u));
    /* 007902b1: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007902b3: jge 0x790405 */ if ((fS==fO)) goto L_00790405;
L_007902b9:; BB(0x007902b9);
    /* 007902b9: mov ebx, 4 */ r_ebx = 0x4u;
    /* 007902be: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007902c1: jne 0x7902c8 */ if (!fZ) goto L_007902c8;
L_007902c3:; BB(0x007902c3);
    /* 007902c3: mov ebx, 0x14 */ r_ebx = 0x14u;
L_007902c8:; BB(0x007902c8);
    /* 007902c8: lea ebp, [edi + edi] */ r_ebp = (u32)(r_edi+r_edi);
    /* 007902cb: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 007902ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007902d0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007902d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007902d4: push dword ptr [edx + edi*8 + 0x97b504] */ { u32 v = R32((u32)(r_edx+r_edi*8+0x97b504u)); r_esp -= 4; W32(r_esp, v); }
    /* 007902db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007902dd: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7902e2u); f_00792fe8();
    /* 007902e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007902e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007902e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007902e7: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 007902ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007902eb: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7902f0u); f_00735c90();
    /* 007902f0: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 007902f4: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 007902f7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007902f9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007902fb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007902fd: mov ebx, dword ptr [ebx + ebp*4 + 0x97b500] */ r_ebx = R32((u32)(r_ebx+r_ebp*4+0x97b500u));
    /* 00790304: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790307: jne 0x790322 */ if (!fZ) goto L_00790322;
L_00790309:; BB(0x00790309);
    /* 00790309: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0079030b: push 0x97c62c */ { u32 v = 0x97c62cu; r_esp -= 4; W32(r_esp, v); }
    /* 00790310: mov ecx, dword ptr [esi + edi*4 + 0x38] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x38u));
    /* 00790314: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x790319u); f_0072db60();
    /* 00790319: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 0079031d: jmp 0x7903ab */ goto L_007903ab;
L_00790322:; BB(0x00790322);
    /* 00790322: mov ebp, dword ptr [esi + 0x5c] */ r_ebp = R32((u32)(r_esi+0x5cu));
    /* 00790325: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 00790328: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0079032b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079032d: je 0x7903fb */ if (fZ) goto L_007903fb;
L_00790333:; BB(0x00790333);
    /* 00790333: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790335: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790337: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790339: lea ebx, [ebp + ebx] */ r_ebx = (u32)(r_ebp+r_ebx);
L_0079033d:; BB(0x0079033d);
    /* 0079033d: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00790340: movzx ebx, byte ptr [ebx] */ r_ebx = (u32)R8((u32)(r_ebx));
    /* 00790343: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790345: jne 0x790379 */ if (!fZ) goto L_00790379;
L_00790347:; BB(0x00790347);
    /* 00790347: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790349: jne 0x790361 */ if (!fZ) goto L_00790361;
L_0079034b:; BB(0x0079034b);
    /* 0079034b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0079034d: push 0x97c650 */ { u32 v = 0x97c650u; r_esp -= 4; W32(r_esp, v); }
    /* 00790352: mov ecx, dword ptr [esi + edi*4 + 0x38] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x38u));
    /* 00790356: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x79035bu); f_0072db60();
    /* 0079035b: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 0079035f: jmp 0x7903ab */ goto L_007903ab;
L_00790361:; BB(0x00790361);
    /* 00790361: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00790363:; BB(0x00790363);
    /* 00790363: movzx ebp, byte ptr [ebx*8 + 0x97b5e0] */ r_ebp = (u32)R8((u32)(r_ebx*8+0x97b5e0u));
    /* 0079036b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079036d: je 0x7903cb */ if (fZ) goto L_007903cb;
L_0079036f:; BB(0x0079036f);
    /* 0079036f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790372: cmp ebx, 0x5f */ {  u32 a = r_ebx; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790375: jl 0x790363 */ if ((fS!=fO)) goto L_00790363;
L_00790377:; BB(0x00790377);
    /* 00790377: jmp 0x7903ab */ goto L_007903ab;
L_00790379:; BB(0x00790379);
    /* 00790379: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079037c: jne 0x7903ab */ if (!fZ) goto L_007903ab;
L_0079037e:; BB(0x0079037e);
    /* 0079037e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790380: jne 0x790398 */ if (!fZ) goto L_00790398;
L_00790382:; BB(0x00790382);
    /* 00790382: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00790384: push 0x97c650 */ { u32 v = 0x97c650u; r_esp -= 4; W32(r_esp, v); }
    /* 00790389: mov ecx, dword ptr [esi + edi*4 + 0x38] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x38u));
    /* 0079038d: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x790392u); f_0072db60();
    /* 00790392: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 00790396: jmp 0x7903ab */ goto L_007903ab;
L_00790398:; BB(0x00790398);
    /* 00790398: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0079039a:; BB(0x0079039a);
    /* 0079039a: cmp eax, dword ptr [ebx*8 + 0x97b4a0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*8+0x97b4a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007903a1: je 0x7903e3 */ if (fZ) goto L_007903e3;
L_007903a3:; BB(0x007903a3);
    /* 007903a3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007903a6: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007903a9: jl 0x79039a */ if ((fS!=fO)) goto L_0079039a;
L_007903ab:; BB(0x007903ab);
    /* 007903ab: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007903ae: jmp 0x7902a9 */ goto L_007902a9;
L_007903b3:; BB(0x007903b3);
    /* 007903b3: mov eax, ebp */ r_eax = r_ebp;
    /* 007903b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007903b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007903b8: mov ecx, esi */ r_ecx = r_esi;
    /* 007903ba: call 0x790458 */ r_esp -= 4; W32(r_esp, 0x7903bfu); f_00790458();
    /* 007903bf: mov ecx, esi */ r_ecx = r_esi;
    /* 007903c1: call 0x79079c */ r_esp -= 4; W32(r_esp, 0x7903c6u); f_0079079c();
    /* 007903c6: jmp 0x79027d */ goto L_0079027d;
L_007903cb:; BB(0x007903cb);
    /* 007903cb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007903cd: push dword ptr [ebx*8 + 0x97b5e4] */ { u32 v = R32((u32)(r_ebx*8+0x97b5e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007903d4: mov ecx, dword ptr [esi + edi*4 + 0x38] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x38u));
    /* 007903d8: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7903ddu); f_0072db60();
    /* 007903dd: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 007903e1: jmp 0x7903ab */ goto L_007903ab;
L_007903e3:; BB(0x007903e3);
    /* 007903e3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007903e5: push dword ptr [ebx*8 + 0x97b4a4] */ { u32 v = R32((u32)(r_ebx*8+0x97b4a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007903ec: mov ecx, dword ptr [esi + edi*4 + 0x38] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x38u));
    /* 007903f0: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7903f5u); f_0072db60();
    /* 007903f5: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 007903f9: jmp 0x7903ab */ goto L_007903ab;
L_007903fb:; BB(0x007903fb);
    /* 007903fb: mov ebx, 0x97bbc0 */ r_ebx = 0x97bbc0u;
    /* 00790400: jmp 0x79033d */ goto L_0079033d;
L_00790405:; BB(0x00790405);
    /* 00790405: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 00790408: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x79040du); f_00736578();
    /* 0079040d: movzx eax, byte ptr [esi + 0x1e] */ r_eax = (u32)R8((u32)(r_esi+0x1eu));
    /* 00790411: push dword ptr [eax*4 + 0x97bbb4] */ { u32 v = R32((u32)(r_eax*4+0x97bbb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00790418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079041a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79041fu); f_00792fe8();
    /* 0079041f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790422: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790424: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790429: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 0079042c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079042d: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x790432u); f_00735c90();
    /* 00790432: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 00790435: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79043au); f_00736458();
L_0079043a:; BB(0x0079043a);
    /* 0079043a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079043b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079043c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079043d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079043e: ret  */ FN_RET(0x00790210); r_esp += 4; return;
L_0079043f:; BB(0x0079043f);
    /* 0079043f: mov ecx, esi */ r_ecx = r_esi;
    /* 00790441: call 0x790924 */ r_esp -= 4; W32(r_esp, 0x790446u); f_00790924();
    /* 00790446: jmp 0x79027d */ goto L_0079027d;
L_0079044b:; BB(0x0079044b);
    /* 0079044b: mov ecx, esi */ r_ecx = r_esi;
    /* 0079044d: call 0x790a50 */ r_esp -= 4; W32(r_esp, 0x790452u); f_00790a50();
    /* 00790452: jmp 0x79027d */ goto L_0079027d;
}

void f_00790458(void) /* sub_790458 */
{
    FN_ENTER(0x00790458);
    /* 00790458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790459: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079045a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079045b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079045c: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00790462: mov esi, ecx */ r_esi = r_ecx;
    /* 00790464: movsx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 00790468: movzx ebx, byte ptr [esp + 0xb0] */ r_ebx = (u32)R8((u32)(r_esp+0xb0u));
    /* 00790470: mov ebp, dword ptr [esp + 0xb4] */ r_ebp = R32((u32)(r_esp+0xb4u));
    /* 00790477: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0079047b: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 0079047e: movsx edx, byte ptr [esi + 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x1fu));
    /* 00790482: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00790484: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00790486: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00790488: mov edi, dword ptr [eax + edx*8 + 0x97b500] */ r_edi = R32((u32)(r_eax+r_edx*8+0x97b500u));
    /* 0079048f: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 00790492: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00790495: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00790498: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0079049a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0079049e: mov esi, eax */ r_esi = r_eax;
    /* 007904a0: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 007904a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007904a6:; BB(0x007904a6);
    /* 007904a6: movzx ecx, byte ptr [eax + 0x97b420] */ r_ecx = (u32)R8((u32)(r_eax+0x97b420u));
    /* 007904ad: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007904b0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007904b2: je 0x79076a */ if (fZ) goto L_0079076a;
L_007904b8:; BB(0x007904b8);
    /* 007904b8: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 007904bb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007904bd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007904bf: lea edi, [esi + edi] */ r_edi = (u32)(r_esi+r_edi);
L_007904c2:; BB(0x007904c2);
    /* 007904c2: cmp ebp, dword ptr [edi + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007904c5: jne 0x7904e3 */ if (!fZ) goto L_007904e3;
L_007904c7:; BB(0x007904c7);
    /* 007904c7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007904c9: je 0x790760 */ if (fZ) goto L_00790760;
L_007904cf:; BB(0x007904cf);
    /* 007904cf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007904d1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007904d3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007904d5: lea ecx, [esi + ecx] */ r_ecx = (u32)(r_esi+r_ecx);
L_007904d8:; BB(0x007904d8);
    /* 007904d8: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 007904db: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007904dd: je 0x790757 */ if (fZ) goto L_00790757;
L_007904e3:; BB(0x007904e3);
    /* 007904e3: cmp eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007904e6: jl 0x7904a6 */ if ((fS!=fO)) goto L_007904a6;
L_007904e8:; BB(0x007904e8);
    /* 007904e8: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007904ec: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007904f0: cmp ebp, 0x4c */ {  u32 a = r_ebp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007904f3: jne 0x7904fd */ if (!fZ) goto L_007904fd;
L_007904f5:; BB(0x007904f5);
    /* 007904f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007904f7: je 0x790603 */ if (fZ) goto L_00790603;
L_007904fd:; BB(0x007904fd);
    /* 007904fd: cmp ebp, 0x54 */ {  u32 a = r_ebp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790500: jne 0x79050a */ if (!fZ) goto L_0079050a;
L_00790502:; BB(0x00790502);
    /* 00790502: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790504: je 0x790603 */ if (fZ) goto L_00790603;
L_0079050a:; BB(0x0079050a);
    /* 0079050a: cmp ebp, 0x55 */ {  u32 a = r_ebp; u32 b = 0x55u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079050d: jne 0x790517 */ if (!fZ) goto L_00790517;
L_0079050f:; BB(0x0079050f);
    /* 0079050f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790511: je 0x790603 */ if (fZ) goto L_00790603;
L_00790517:; BB(0x00790517);
    /* 00790517: cmp ebp, 0x56 */ {  u32 a = r_ebp; u32 b = 0x56u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079051a: jne 0x790524 */ if (!fZ) goto L_00790524;
L_0079051c:; BB(0x0079051c);
    /* 0079051c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079051e: je 0x790603 */ if (fZ) goto L_00790603;
L_00790524:; BB(0x00790524);
    /* 00790524: cmp ebp, 0x57 */ {  u32 a = r_ebp; u32 b = 0x57u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790527: jne 0x790531 */ if (!fZ) goto L_00790531;
L_00790529:; BB(0x00790529);
    /* 00790529: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079052b: je 0x790603 */ if (fZ) goto L_00790603;
L_00790531:; BB(0x00790531);
    /* 00790531: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00790535: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00790539: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0079053b:; BB(0x0079053b);
    /* 0079053b: movzx ebp, word ptr [eax*2 + 0x97bbc8] */ r_ebp = (u32)R16((u32)(r_eax*2+0x97bbc8u));
    /* 00790543: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00790545: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00790547: jle 0x7905b6 */ if ((fZ||fS!=fO)) goto L_007905b6;
L_00790549:; BB(0x00790549);
    /* 00790549: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0079054d: lea ebx, [eax + eax*8] */ r_ebx = (u32)(r_eax+r_eax*8);
    /* 00790550: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790552: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790554: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00790556:; BB(0x00790556);
    /* 00790556: mov edx, dword ptr [ebx + esi*8 + 0x97b500] */ r_edx = R32((u32)(r_ebx+r_esi*8+0x97b500u));
    /* 0079055d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790560: je 0x7905ab */ if (fZ) goto L_007905ab;
L_00790562:; BB(0x00790562);
    /* 00790562: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790565: je 0x7905ab */ if (fZ) goto L_007905ab;
L_00790567:; BB(0x00790567);
    /* 00790567: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079056a: je 0x7905ab */ if (fZ) goto L_007905ab;
L_0079056c:; BB(0x0079056c);
    /* 0079056c: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079056f: je 0x7905ab */ if (fZ) goto L_007905ab;
L_00790571:; BB(0x00790571);
    /* 00790571: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00790575: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00790578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079057a: je 0x79074d */ if (fZ) goto L_0079074d;
L_00790580:; BB(0x00790580);
    /* 00790580: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00790583: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00790585: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00790587: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
L_0079058a:; BB(0x0079058a);
    /* 0079058a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0079058d: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 00790590: movzx eax, byte ptr [esp + 0xb0] */ r_eax = (u32)R8((u32)(r_esp+0xb0u));
    /* 00790598: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079059a: jne 0x7905ab */ if (!fZ) goto L_007905ab;
L_0079059c:; BB(0x0079059c);
    /* 0079059c: mov eax, dword ptr [esp + 0xb4] */ r_eax = R32((u32)(r_esp+0xb4u));
    /* 007905a3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007905a5: je 0x79065b */ if (fZ) goto L_0079065b;
L_007905ab:; BB(0x007905ab);
    /* 007905ab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007905ae: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007905b0: jl 0x790556 */ if ((fS!=fO)) goto L_00790556;
L_007905b2:; BB(0x007905b2);
    /* 007905b2: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_007905b6:; BB(0x007905b6);
    /* 007905b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007905b9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007905bc: jl 0x79053b */ if ((fS!=fO)) goto L_0079053b;
L_007905c2:; BB(0x007905c2);
    /* 007905c2: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007905c6: mov ebp, dword ptr [esp + 0xb4] */ r_ebp = R32((u32)(r_esp+0xb4u));
    /* 007905cd: movzx ebx, byte ptr [esp + 0xb0] */ r_ebx = (u32)R8((u32)(r_esp+0xb0u));
    /* 007905d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007905d6: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007905dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007905dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007905de: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007905e2: call 0x790774 */ r_esp -= 4; W32(r_esp, 0x7905e7u); f_00790774();
    /* 007905e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007905e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007905ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007905eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007905ec: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 007905f1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7905f6u); f_00814298();
    /* 007905f6: add esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007905fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007905fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007905fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007905ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790600: ret 8 */ FN_RET(0x00790458); r_esp += 12; return;
L_00790603:; BB(0x00790603);
    /* 00790603: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00790605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790607: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79060cu); f_00792fe8();
    /* 0079060c: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00790610: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00790612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790613: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00790614: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x790619u); f_00857dec();
    /* 00790619: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079061c: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0079061f: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x790624u); f_00736578();
    /* 00790624: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00790628: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079062a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079062c: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0079062f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00790631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790632: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x790637u); f_00735db8();
    /* 00790637: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0079063a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79063fu); f_00736458();
    /* 0079063f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790642: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790644: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 00790649: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x79064eu); f_00814298();
    /* 0079064e: add esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790654: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790655: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790656: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00790657: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790658: ret 8 */ FN_RET(0x00790458); r_esp += 12; return;
L_0079065b:; BB(0x0079065b);
    /* 0079065b: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0079065f: mov ebp, dword ptr [esp + 0xb4] */ r_ebp = R32((u32)(r_esp+0xb4u));
    /* 00790666: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079066a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0079066e: movzx ebx, byte ptr [esp + 0xb0] */ r_ebx = (u32)R8((u32)(r_esp+0xb0u));
    /* 00790676: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0079067a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0079067e: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00790684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790686: je 0x790743 */ if (fZ) goto L_00790743;
L_0079068c:; BB(0x0079068c);
    /* 0079068c: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0079068f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00790691: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00790693: lea ecx, [eax + ecx] */ r_ecx = (u32)(r_eax+r_ecx);
L_00790696:; BB(0x00790696);
    /* 00790696: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00790699: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 0079069c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079069d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079069e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007906a2: call 0x790774 */ r_esp -= 4; W32(r_esp, 0x7906a7u); f_00790774();
    /* 007906a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007906a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007906a9: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 007906ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007906ad: call 0x790774 */ r_esp -= 4; W32(r_esp, 0x7906b2u); f_00790774();
    /* 007906b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007906b6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007906ba: push dword ptr [eax + edx*8 + 0x97b504] */ { u32 v = R32((u32)(r_eax+r_edx*8+0x97b504u)); r_esp -= 4; W32(r_esp, v); }
    /* 007906c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007906c3: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7906c8u); f_00792fe8();
    /* 007906c8: mov ebx, eax */ r_ebx = r_eax;
    /* 007906ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007906cd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007906cf: je 0x790728 */ if (fZ) goto L_00790728;
L_007906d1:; BB(0x007906d1);
    /* 007906d1: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 007906d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007906d5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7906dau); f_00792fe8();
    /* 007906da: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007906de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007906df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007906e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007906e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7906e6u); f_00857e29();
    /* 007906e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007906e9:; BB(0x007906e9);
    /* 007906e9: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 007906ec: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x7906f1u); f_00736578();
    /* 007906f1: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 007906f5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007906f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007906f9: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 007906fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007906fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007906ff: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x790704u); f_00735db8();
    /* 00790704: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00790707: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79070cu); f_00736458();
    /* 0079070c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079070e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079070f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790711: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00790716: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x79071bu); f_00814298();
    /* 0079071b: add esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790721: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790723: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00790724: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790725: ret 8 */ FN_RET(0x00790458); r_esp += 12; return;
L_00790728:; BB(0x00790728);
    /* 00790728: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0079072a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079072c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x790731u); f_00792fe8();
    /* 00790731: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00790735: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00790737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790738: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00790739: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79073eu); f_00857dec();
    /* 0079073e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790741: jmp 0x7906e9 */ goto L_007906e9;
L_00790743:; BB(0x00790743);
    /* 00790743: mov ecx, 0x97bbc0 */ r_ecx = 0x97bbc0u;
    /* 00790748: jmp 0x790696 */ goto L_00790696;
L_0079074d:; BB(0x0079074d);
    /* 0079074d: mov eax, 0x97bbc0 */ r_eax = 0x97bbc0u;
    /* 00790752: jmp 0x79058a */ goto L_0079058a;
L_00790757:; BB(0x00790757);
    /* 00790757: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0079075b: jmp 0x790603 */ goto L_00790603;
L_00790760:; BB(0x00790760);
    /* 00790760: mov ecx, 0x97bbc0 */ r_ecx = 0x97bbc0u;
    /* 00790765: jmp 0x7904d8 */ goto L_007904d8;
L_0079076a:; BB(0x0079076a);
    /* 0079076a: mov edi, 0x97bbc0 */ r_edi = 0x97bbc0u;
    /* 0079076f: jmp 0x7904c2 */ goto L_007904c2;
}

void f_00790774(void) /* sub_790774 */
{
    FN_ENTER(0x00790774);
    /* 00790774: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790775: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00790777: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790779: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0079077e: je 0x790797 */ if (fZ) goto L_00790797;
L_00790780:; BB(0x00790780);
    /* 00790780: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00790783: jge 0x790797 */ if ((fS==fO)) goto L_00790797;
L_00790785:; BB(0x00790785);
    /* 00790785: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 0079078a: mov byte ptr [ebx + eax*8], dl */ W8((u32)(r_ebx+r_eax*8), (u8)r_edx);
    /* 0079078d: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0079078f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00790793: mov dword ptr [ebx + eax*8 + 4], ecx */ W32((u32)(r_ebx+r_eax*8+0x4u), r_ecx);
L_00790797:; BB(0x00790797);
    /* 00790797: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790798: ret 0xc */ FN_RET(0x00790774); r_esp += 16; return;
}

void f_0079079c(void) /* sub_79079C */
{
    FN_ENTER(0x0079079c);
    /* 0079079c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079079d: mov edi, ecx */ r_edi = r_ecx;
    /* 0079079f: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007907a2: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007907a9: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007907ae: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007907b1: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007907b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007907ba: je 0x7907c3 */ if (fZ) goto L_007907c3;
L_007907bc:; BB(0x007907bc);
    /* 007907bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007907be: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7907c3u); f_00760acc();
L_007907c3:; BB(0x007907c3);
    /* 007907c3: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 007907c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007907c8: ret  */ FN_RET(0x0079079c); r_esp += 4; return;
}

void f_007907cc(void) /* sub_7907CC */
{
    FN_ENTER(0x007907cc);
    /* 007907cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007907cd: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007907d3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007907d5: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x7907dau); f_0070a5ec();
    /* 007907da: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 007907dd: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 007907e4: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007907e9: je 0x790812 */ if (fZ) goto L_00790812;
L_007907eb:; BB(0x007907eb);
    /* 007907eb: movsx edx, byte ptr [ebp + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1eu));
    /* 007907ef: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007907f2: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 007907f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007907f7: jl 0x7908ca */ if ((fS!=fO)) goto L_007908ca;
L_007907fd:; BB(0x007907fd);
    /* 007907fd: mov byte ptr [ebp + 0x1e], dl */ W8((u32)(r_ebp+0x1eu), (u8)r_edx);
L_00790800:; BB(0x00790800);
    /* 00790800: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790802: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 00790805: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x79080au); f_00736510();
    /* 0079080a: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790810: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790811: ret  */ FN_RET(0x007907cc); r_esp += 4; return;
L_00790812:; BB(0x00790812);
    /* 00790812: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790817: je 0x790843 */ if (fZ) goto L_00790843;
L_00790819:; BB(0x00790819);
    /* 00790819: movsx edx, byte ptr [ebp + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1eu));
    /* 0079081d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00790820: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 00790823: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790826: jle 0x79082e */ if ((fZ||fS!=fO)) goto L_0079082e;
L_00790828:; BB(0x00790828);
    /* 00790828: mov byte ptr [ebp + 0x1e], 0 */ W8((u32)(r_ebp+0x1eu), 0x0u);
    /* 0079082c: jmp 0x790831 */ goto L_00790831;
L_0079082e:; BB(0x0079082e);
    /* 0079082e: mov byte ptr [ebp + 0x1e], dl */ W8((u32)(r_ebp+0x1eu), (u8)r_edx);
L_00790831:; BB(0x00790831);
    /* 00790831: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790833: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 00790836: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x79083bu); f_00736510();
    /* 0079083b: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790841: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790842: ret  */ FN_RET(0x007907cc); r_esp += 4; return;
L_00790843:; BB(0x00790843);
    /* 00790843: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00790846: movzx edx, word ptr [eax + 0x8c] */ r_edx = (u32)R16((u32)(r_eax+0x8cu));
    /* 0079084d: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00790850: mov byte ptr [ebp + 0x1f], dl */ W8((u32)(r_ebp+0x1fu), (u8)r_edx);
    /* 00790853: cmp dl, byte ptr [ebp + 0x20] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00790856: je 0x79089a */ if (fZ) goto L_0079089a;
L_00790858:; BB(0x00790858);
    /* 00790858: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079085a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079085c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x790861u); f_00792fe8();
    /* 00790861: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00790865: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00790867: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00790869: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79086eu); f_00857dec();
    /* 0079086e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790871: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00790874: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x790879u); f_00736578();
    /* 00790879: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079087c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079087e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790880: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00790883: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00790885: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790886: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x79088bu); f_00735db8();
    /* 0079088b: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0079088e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x790893u); f_00736458();
    /* 00790893: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00790896: movsx edx, byte ptr [ebp + 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1fu));
L_0079089a:; BB(0x0079089a);
    /* 0079089a: mov byte ptr [ebp + 0x20], dl */ W8((u32)(r_ebp+0x20u), (u8)r_edx);
    /* 0079089d: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 007908a4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007908a6: je 0x7908b7 */ if (fZ) goto L_007908b7;
L_007908a8:; BB(0x007908a8);
    /* 007908a8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007908aa: call 0x7908d4 */ r_esp -= 4; W32(r_esp, 0x7908afu); f_007908d4();
    /* 007908af: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007908b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007908b6: ret  */ FN_RET(0x007907cc); r_esp += 4; return;
L_007908b7:; BB(0x007908b7);
    /* 007908b7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007908b9: je 0x7908c2 */ if (fZ) goto L_007908c2;
L_007908bb:; BB(0x007908bb);
    /* 007908bb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007908bd: call 0x790970 */ r_esp -= 4; W32(r_esp, 0x7908c2u); f_00790970();
L_007908c2:; BB(0x007908c2);
    /* 007908c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007908c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007908c9: ret  */ FN_RET(0x007907cc); r_esp += 4; return;
L_007908ca:; BB(0x007908ca);
    /* 007908ca: mov byte ptr [ebp + 0x1e], 2 */ W8((u32)(r_ebp+0x1eu), 0x2u);
    /* 007908ce: jmp 0x790800 */ goto L_00790800;
}

void f_007908d4(void) /* sub_7908D4 */
{
    FN_ENTER(0x007908d4);
    /* 007908d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007908d5: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007908db: mov edi, ecx */ r_edi = r_ecx;
    /* 007908dd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007908df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007908e1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7908e6u); f_00792fe8();
    /* 007908e6: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007908ea: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007908ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007908ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007908ee: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7908f3u); f_00857dec();
    /* 007908f3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007908f6: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 007908f9: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x7908feu); f_00736578();
    /* 007908fe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00790901: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00790903: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790905: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00790908: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079090a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079090b: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x790910u); f_00735db8();
    /* 00790910: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00790913: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x790918u); f_00736458();
    /* 00790918: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
    /* 0079091c: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790922: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790923: ret  */ FN_RET(0x007908d4); r_esp += 4; return;
}

void f_00790924(void) /* sub_790924 */
{
    FN_ENTER(0x00790924);
    /* 00790924: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790925: mov edi, ecx */ r_edi = r_ecx;
    /* 00790927: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0079092a: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x79092fu); f_0073ce50();
    /* 0079092f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790931: je 0x790948 */ if (fZ) goto L_00790948;
L_00790933:; BB(0x00790933);
    /* 00790933: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00790936: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x79093bu); f_0073d134();
    /* 0079093b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079093d: je 0x79095d */ if (fZ) goto L_0079095d;
L_0079093f:; BB(0x0079093f);
    /* 0079093f: mov ecx, edi */ r_ecx = r_edi;
    /* 00790941: call 0x790970 */ r_esp -= 4; W32(r_esp, 0x790946u); f_00790970();
    /* 00790946: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790947: ret  */ FN_RET(0x00790924); r_esp += 4; return;
L_00790948:; BB(0x00790948);
    /* 00790948: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0079094b: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x790950u); f_0073d114();
    /* 00790950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790952: je 0x79095b */ if (fZ) goto L_0079095b;
L_00790954:; BB(0x00790954);
    /* 00790954: mov ecx, edi */ r_ecx = r_edi;
    /* 00790956: call 0x790970 */ r_esp -= 4; W32(r_esp, 0x79095bu); f_00790970();
L_0079095b:; BB(0x0079095b);
    /* 0079095b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079095c: ret  */ FN_RET(0x00790924); r_esp += 4; return;
L_0079095d:; BB(0x0079095d);
    /* 0079095d: movsx eax, byte ptr [edi + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1du));
    /* 00790961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790962: mov ecx, 0xa9ccd0 */ r_ecx = 0xa9ccd0u;
    /* 00790967: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x79096cu); f_00792f98();
    /* 0079096c: jmp 0x79093f */ goto L_0079093f;
}

void f_00790970(void) /* sub_790970 */
{
    FN_ENTER(0x00790970);
    /* 00790970: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790971: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00790977: mov edi, ecx */ r_edi = r_ecx;
    /* 00790979: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0079097c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079097e: je 0x79098c */ if (fZ) goto L_0079098c;
L_00790980:; BB(0x00790980);
    /* 00790980: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x790985u); f_0073d160();
    /* 00790985: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_0079098c:; BB(0x0079098c);
    /* 0079098c: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0079098f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00790996: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0079099b: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0079099e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007909a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007909a7: je 0x7909b0 */ if (fZ) goto L_007909b0;
L_007909a9:; BB(0x007909a9);
    /* 007909a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007909ab: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7909b0u); f_00760acc();
L_007909b0:; BB(0x007909b0);
    /* 007909b0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 007909b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007909b4: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007909b7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007909be: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007909c3: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007909ca: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007909cd: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007909d4: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007909d9: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007909e0: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007909e3: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007909ea: or eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007909ef: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007909f6: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007909f9: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00790a00: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00790a05: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00790a0c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x790a11u); f_00792fe8();
    /* 00790a11: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00790a15: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00790a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790a18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00790a19: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x790a1eu); f_00857dec();
    /* 00790a1e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790a21: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00790a24: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x790a29u); f_00736578();
    /* 00790a29: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00790a2c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00790a2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790a30: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00790a33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00790a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790a36: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x790a3bu); f_00735db8();
    /* 00790a3b: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00790a3e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x790a43u); f_00736458();
    /* 00790a43: mov byte ptr [edi + 0x1c], 0 */ W8((u32)(r_edi+0x1cu), 0x0u);
    /* 00790a47: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790a4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790a4e: ret  */ FN_RET(0x00790970); r_esp += 4; return;
}

void f_00790a50(void) /* sub_790A50 */
{
    FN_ENTER(0x00790a50);
    /* 00790a50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790a51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00790a53: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x790a58u); f_0070a5ec();
    /* 00790a58: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00790a5b: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 00790a62: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790a67: je 0x790a7c */ if (fZ) goto L_00790a7c;
L_00790a69:; BB(0x00790a69);
    /* 00790a69: movsx edx, byte ptr [ebx + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1eu));
    /* 00790a6d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00790a70: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 00790a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790a75: jl 0x790adc */ if ((fS!=fO)) goto L_00790adc;
L_00790a77:; BB(0x00790a77);
    /* 00790a77: mov byte ptr [ebx + 0x1e], dl */ W8((u32)(r_ebx+0x1eu), (u8)r_edx);
    /* 00790a7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790a7b: ret  */ FN_RET(0x00790a50); r_esp += 4; return;
L_00790a7c:; BB(0x00790a7c);
    /* 00790a7c: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790a81: je 0x790a9d */ if (fZ) goto L_00790a9d;
L_00790a83:; BB(0x00790a83);
    /* 00790a83: movsx edx, byte ptr [ebx + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1eu));
    /* 00790a87: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00790a8a: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 00790a8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00790a90: jle 0x790a98 */ if ((fZ||fS!=fO)) goto L_00790a98;
L_00790a92:; BB(0x00790a92);
    /* 00790a92: mov byte ptr [ebx + 0x1e], 0 */ W8((u32)(r_ebx+0x1eu), 0x0u);
    /* 00790a96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790a97: ret  */ FN_RET(0x00790a50); r_esp += 4; return;
L_00790a98:; BB(0x00790a98);
    /* 00790a98: mov byte ptr [ebx + 0x1e], dl */ W8((u32)(r_ebx+0x1eu), (u8)r_edx);
    /* 00790a9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790a9c: ret  */ FN_RET(0x00790a50); r_esp += 4; return;
L_00790a9d:; BB(0x00790a9d);
    /* 00790a9d: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00790aa0: movzx eax, word ptr [edx + 0x8c] */ r_eax = (u32)R16((u32)(r_edx+0x8cu));
    /* 00790aa7: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00790aaa: mov ecx, dword ptr [eax*4 + 0x9ff3c0] */ r_ecx = R32((u32)(r_eax*4+0x9ff3c0u));
    /* 00790ab1: mov byte ptr [ebx + 0x1d], al */ W8((u32)(r_ebx+0x1du), (u8)r_eax);
    /* 00790ab4: mov dword ptr [ebx + 0x5c], ecx */ W32((u32)(r_ebx+0x5cu), r_ecx);
    /* 00790ab7: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 00790abe: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00790ac1: je 0x790ad1 */ if (fZ) goto L_00790ad1;
L_00790ac3:; BB(0x00790ac3);
    /* 00790ac3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790ac6: je 0x790ae2 */ if (fZ) goto L_00790ae2;
L_00790ac8:; BB(0x00790ac8);
    /* 00790ac8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00790aca: call 0x790aec */ r_esp -= 4; W32(r_esp, 0x790acfu); f_00790aec();
L_00790acf:; BB(0x00790acf);
    /* 00790acf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790ad0: ret  */ FN_RET(0x00790a50); r_esp += 4; return;
L_00790ad1:; BB(0x00790ad1);
    /* 00790ad1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790ad4: je 0x790acf */ if (fZ) goto L_00790acf;
L_00790ad6:; BB(0x00790ad6);
    /* 00790ad6: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
    /* 00790ada: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790adb: ret  */ FN_RET(0x00790a50); r_esp += 4; return;
L_00790adc:; BB(0x00790adc);
    /* 00790adc: mov byte ptr [ebx + 0x1e], 2 */ W8((u32)(r_ebx+0x1eu), 0x2u);
    /* 00790ae0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790ae1: ret  */ FN_RET(0x00790a50); r_esp += 4; return;
L_00790ae2:; BB(0x00790ae2);
    /* 00790ae2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00790ae4: call 0x790b3c */ r_esp -= 4; W32(r_esp, 0x790ae9u); f_00790b3c();
    /* 00790ae9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790aea: ret  */ FN_RET(0x00790a50); r_esp += 4; return;
}

void f_00790aec(void) /* sub_790AEC */
{
    FN_ENTER(0x00790aec);
    /* 00790aec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790aed: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00790af0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00790af2: mov dword ptr [esp], 0x43200000 */ W32((u32)(r_esp), 0x43200000u);
    /* 00790af9: mov dword ptr [esp + 4], 0x42700000 */ W32((u32)(r_esp+0x4u), 0x42700000u);
    /* 00790b01: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00790b03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790b04: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x790b09u); f_0073cd8c();
    /* 00790b09: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00790b0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790b0d: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00790b10: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x790b15u); f_00792fe8();
    /* 00790b15: mov ecx, eax */ r_ecx = r_eax;
    /* 00790b17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790b1a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00790b1d: push 0x3a83126f */ { u32 v = 0x3a83126fu; r_esp -= 4; W32(r_esp, v); }
    /* 00790b22: mov edx, 0x43a00000 */ r_edx = 0x43a00000u;
    /* 00790b27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00790b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790b29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00790b2a: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00790b2d: call 0x73cf44 */ r_esp -= 4; W32(r_esp, 0x790b32u); f_0073cf44();
    /* 00790b32: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00790b36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790b39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790b3a: ret  */ FN_RET(0x00790aec); r_esp += 4; return;
}

void f_00790b3c(void) /* sub_790B3C */
{
    FN_ENTER(0x00790b3c);
    /* 00790b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00790b3d: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00790b43: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00790b45: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00790b48: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00790b4f: and eax, 0xffbf */ {  u32 a = r_eax; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00790b54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790b56: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00790b5d: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00790b60: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00790b67: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00790b6c: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00790b73: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00790b76: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00790b7d: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00790b82: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00790b89: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 00790b8c: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x790b91u); f_00736510();
    /* 00790b91: mov dword ptr [ebp + 0x5c], 0xa9ccd0 */ W32((u32)(r_ebp+0x5cu), 0xa9ccd0u);
    /* 00790b98: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00790b9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790b9c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x790ba1u); f_00792fe8();
    /* 00790ba1: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00790ba5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00790ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790ba8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00790ba9: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x790baeu); f_00857dec();
    /* 00790bae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790bb1: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00790bb4: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x790bb9u); f_00736578();
    /* 00790bb9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00790bbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00790bbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790bc0: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00790bc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00790bc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790bc6: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x790bcbu); f_00735db8();
    /* 00790bcb: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00790bce: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x790bd3u); f_00736458();
    /* 00790bd3: mov byte ptr [ebp + 0x1c], 2 */ W8((u32)(r_ebp+0x1cu), 0x2u);
    /* 00790bd7: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790bdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790bde: ret  */ FN_RET(0x00790b3c); r_esp += 4; return;
}

void f_00790be0(void) /* sub_790BE0 */
{
    FN_ENTER(0x00790be0);
    /* 00790be0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790be1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00790be4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00790be6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x790bebu); f_0082dbac();
    /* 00790beb: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x790bf0u); f_004d28a4();
    /* 00790bf0: movzx edx, byte ptr [ebx + 0x1e] */ r_edx = (u32)R8((u32)(r_ebx+0x1eu));
    /* 00790bf4: movzx edx, word ptr [edx*2 + 0x97bbc8] */ r_edx = (u32)R16((u32)(r_edx*2+0x97bbc8u));
    /* 00790bfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790bfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00790c00: jle 0x790c44 */ if ((fZ||fS!=fO)) goto L_00790c44;
L_00790c02:; BB(0x00790c02);
    /* 00790c02: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00790c06: mov esi, ebx */ r_esi = r_ebx;
    /* 00790c08: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00790c0b: mov ebx, eax */ r_ebx = r_eax;
L_00790c0d:; BB(0x00790c0d);
    /* 00790c0d: mov ecx, dword ptr [esi + ebx*4 + 0x38] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x38u));
    /* 00790c11: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x790c16u); f_0072e0e4();
    /* 00790c16: mov edi, dword ptr [esi + ebx*4 + 0x38] */ r_edi = R32((u32)(r_esi+r_ebx*4+0x38u));
    /* 00790c1a: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00790c1d: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x790c22u); f_007108f4();
    /* 00790c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790c23: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00790c25: mov ecx, edi */ r_ecx = r_edi;
    /* 00790c27: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x790c2au); call_ind(t); }
    /* 00790c2a: movzx edx, byte ptr [esi + 0x1e] */ r_edx = (u32)R8((u32)(r_esi+0x1eu));
    /* 00790c2e: movzx ecx, word ptr [edx*2 + 0x97bbc8] */ r_ecx = (u32)R16((u32)(r_edx*2+0x97bbc8u));
    /* 00790c36: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790c39: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790c3b: jl 0x790c0d */ if ((fS!=fO)) goto L_00790c0d;
L_00790c3d:; BB(0x00790c3d);
    /* 00790c3d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00790c41: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00790c44:; BB(0x00790c44);
    /* 00790c44: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x790c49u); f_004d2968();
    /* 00790c49: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x790c4eu); f_0082dab0();
    /* 00790c4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790c51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790c52: ret  */ FN_RET(0x00790be0); r_esp += 4; return;
}

void f_00790c54(void) /* sub_790C54 */
{
    FN_ENTER(0x00790c54);
    /* 00790c54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790c55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00790c56: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00790c59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00790c5b: movsx eax, byte ptr [ebp + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x1cu));
    /* 00790c5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790c61: je 0x790c7c */ if (fZ) goto L_00790c7c;
L_00790c63:; BB(0x00790c63);
    /* 00790c63: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790c66: jne 0x790c71 */ if (!fZ) goto L_00790c71;
L_00790c68:; BB(0x00790c68);
    /* 00790c68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00790c6a: call 0x790df8 */ r_esp -= 4; W32(r_esp, 0x790c6fu); f_00790df8();
    /* 00790c6f: jmp 0x790c83 */ goto L_00790c83;
L_00790c71:; BB(0x00790c71);
    /* 00790c71: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790c74: jne 0x790c83 */ if (!fZ) goto L_00790c83;
L_00790c76:; BB(0x00790c76);
    /* 00790c76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790c79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790c7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790c7b: ret  */ FN_RET(0x00790c54); r_esp += 4; return;
L_00790c7c:; BB(0x00790c7c);
    /* 00790c7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00790c7e: call 0x791474 */ r_esp -= 4; W32(r_esp, 0x790c83u); f_00791474();
L_00790c83:; BB(0x00790c83);
    /* 00790c83: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00790c86: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x790c8bu); f_00736578();
    /* 00790c8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790c8d: mov edi, eax */ r_edi = r_eax;
L_00790c8f:; BB(0x00790c8f);
    /* 00790c8f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00790c91: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00790c96: mov ecx, dword ptr [ebp + edi*4 + 0x2c] */ r_ecx = R32((u32)(r_ebp+r_edi*4+0x2cu));
    /* 00790c9a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x790c9fu); f_0072db60();
    /* 00790c9f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00790ca2: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790ca5: jl 0x790c8f */ if ((fS!=fO)) goto L_00790c8f;
L_00790ca7:; BB(0x00790ca7);
    /* 00790ca7: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00790cab: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00790cae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00790cb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790cb2: mov esi, ebp */ r_esi = r_ebp;
    /* 00790cb4: mov ebp, eax */ r_ebp = r_eax;
    /* 00790cb6: mov ebx, edx */ r_ebx = r_edx;
L_00790cb8:; BB(0x00790cb8);
    /* 00790cb8: mov edi, dword ptr [ebx*8 + 0x97b3a4] */ r_edi = R32((u32)(r_ebx*8+0x97b3a4u));
    /* 00790cbf: mov ecx, dword ptr [ebx*8 + 0x97b3a0] */ r_ecx = R32((u32)(r_ebx*8+0x97b3a0u));
    /* 00790cc6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790cc9: je 0x790cd0 */ if (fZ) goto L_00790cd0;
L_00790ccb:; BB(0x00790ccb);
    /* 00790ccb: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790cce: jne 0x790cea */ if (!fZ) goto L_00790cea;
L_00790cd0:; BB(0x00790cd0);
    /* 00790cd0: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00790cd5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00790cdb: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x790ce0u); f_007be19c();
    /* 00790ce0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790ce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790ce5: je 0x790cea */ if (fZ) goto L_00790cea;
L_00790ce7:; BB(0x00790ce7);
    /* 00790ce7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00790cea:; BB(0x00790cea);
    /* 00790cea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790ceb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00790ced: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x790cf2u); f_00792fe8();
    /* 00790cf2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790cf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790cf6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00790cf8: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00790cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790cfc: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x790d01u); f_00735c90();
    /* 00790d01: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790d04: jge 0x790d3c */ if ((fS==fO)) goto L_00790d3c;
L_00790d06:; BB(0x00790d06);
    /* 00790d06: movzx ecx, byte ptr [ebx*8 + 0x97b3a0] */ r_ecx = (u32)R8((u32)(r_ebx*8+0x97b3a0u));
    /* 00790d0e: mov edi, dword ptr [0xa9ccd4] */ r_edi = R32((u32)(0xa9ccd4u));
    /* 00790d14: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790d16: je 0x790dd4 */ if (fZ) goto L_00790dd4;
L_00790d1c:; BB(0x00790d1c);
    /* 00790d1c: movsx eax, byte ptr [ecx + edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_edi));
L_00790d20:; BB(0x00790d20);
    /* 00790d20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00790d22:; BB(0x00790d22);
    /* 00790d22: cmp al, byte ptr [ecx*8 + 0x97b260] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx*8+0x97b260u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00790d29: je 0x790dbe */ if (fZ) goto L_00790dbe;
L_00790d2f:; BB(0x00790d2f);
    /* 00790d2f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00790d32: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790d35: jl 0x790d22 */ if ((fS!=fO)) goto L_00790d22;
L_00790d37:; BB(0x00790d37);
    /* 00790d37: lea edi, [esi + ebp] */ r_edi = (u32)(r_esi+r_ebp);
    /* 00790d3a: jmp 0x790d9a */ goto L_00790d9a;
L_00790d3c:; BB(0x00790d3c);
    /* 00790d3c: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00790d41: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00790d47: mov edi, dword ptr [ebx*8 + 0x97b3a0] */ r_edi = R32((u32)(r_ebx*8+0x97b3a0u));
    /* 00790d4e: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x790d53u); f_007be19c();
    /* 00790d53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790d56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790d58: je 0x790d70 */ if (fZ) goto L_00790d70;
L_00790d5a:; BB(0x00790d5a);
    /* 00790d5a: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790d5d: je 0x790d6b */ if (fZ) goto L_00790d6b;
L_00790d5f:; BB(0x00790d5f);
    /* 00790d5f: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790d62: jne 0x790d70 */ if (!fZ) goto L_00790d70;
L_00790d64:; BB(0x00790d64);
    /* 00790d64: mov edi, 5 */ r_edi = 0x5u;
    /* 00790d69: jmp 0x790d70 */ goto L_00790d70;
L_00790d6b:; BB(0x00790d6b);
    /* 00790d6b: mov edi, 6 */ r_edi = 0x6u;
L_00790d70:; BB(0x00790d70);
    /* 00790d70: mov ecx, dword ptr [0xa9ccd4] */ r_ecx = R32((u32)(0xa9ccd4u));
    /* 00790d76: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00790d7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790d7e: je 0x790df1 */ if (fZ) goto L_00790df1;
L_00790d80:; BB(0x00790d80);
    /* 00790d80: mov edi, dword ptr [ecx + edi*4 + 4] */ r_edi = R32((u32)(r_ecx+r_edi*4+0x4u));
L_00790d84:; BB(0x00790d84);
    /* 00790d84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00790d86:; BB(0x00790d86);
    /* 00790d86: cmp edi, dword ptr [ecx*8 + 0x97b2e0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx*8+0x97b2e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790d8d: je 0x790ddb */ if (fZ) goto L_00790ddb;
L_00790d8f:; BB(0x00790d8f);
    /* 00790d8f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00790d92: cmp ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790d95: jl 0x790d86 */ if ((fS!=fO)) goto L_00790d86;
L_00790d97:; BB(0x00790d97);
    /* 00790d97: lea edi, [esi + ebp] */ r_edi = (u32)(r_esi+r_ebp);
L_00790d9a:; BB(0x00790d9a);
    /* 00790d9a: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00790d9d: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x790da2u); f_0072e0e4();
    /* 00790da2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00790da5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00790da8: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790dab: jl 0x790cb8 */ if ((fS!=fO)) goto L_00790cb8;
L_00790db1:; BB(0x00790db1);
    /* 00790db1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00790db5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00790db8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00790dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00790dbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00790dbd: ret  */ FN_RET(0x00790c54); r_esp += 4; return;
L_00790dbe:; BB(0x00790dbe);
    /* 00790dbe: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00790dc0: push dword ptr [ecx*8 + 0x97b264] */ { u32 v = R32((u32)(r_ecx*8+0x97b264u)); r_esp -= 4; W32(r_esp, v); }
    /* 00790dc7: lea edi, [esi + ebp] */ r_edi = (u32)(r_esi+r_ebp);
    /* 00790dca: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00790dcd: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x790dd2u); f_0072db60();
    /* 00790dd2: jmp 0x790d9a */ goto L_00790d9a;
L_00790dd4:; BB(0x00790dd4);
    /* 00790dd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790dd6: jmp 0x790d20 */ goto L_00790d20;
L_00790ddb:; BB(0x00790ddb);
    /* 00790ddb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00790ddd: push dword ptr [ecx*8 + 0x97b2e4] */ { u32 v = R32((u32)(r_ecx*8+0x97b2e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00790de4: lea edi, [esi + ebp] */ r_edi = (u32)(r_esi+r_ebp);
    /* 00790de7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00790dea: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x790defu); f_0072db60();
    /* 00790def: jmp 0x790d9a */ goto L_00790d9a;
L_00790df1:; BB(0x00790df1);
    /* 00790df1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00790df3: jmp 0x790d84 */ goto L_00790d84;
}

void f_00790df8(void) /* sub_790DF8 */
{
    FN_ENTER(0x00790df8);
    /* 00790df8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790df9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00790dfa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00790dfb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00790dfc: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00790e02: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00790e04: call 0x70a5f8 */ r_esp -= 4; W32(r_esp, 0x790e09u); f_0070a5f8();
    /* 00790e09: movsx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1du));
    /* 00790e0d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790e10: jge 0x790f96 */ if ((fS==fO)) goto L_00790f96;
L_00790e16:; BB(0x00790e16);
    /* 00790e16: call 0x8424a4 */ r_esp -= 4; W32(r_esp, 0x790e1bu); f_008424a4();
    /* 00790e1b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00790e1f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00790e22: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790e25: je 0x790f51 */ if (fZ) goto L_00790f51;
L_00790e2b:; BB(0x00790e2b);
    /* 00790e2b: mov ebp, dword ptr [0xa9ccd4] */ r_ebp = R32((u32)(0xa9ccd4u));
    /* 00790e31: movzx edx, byte ptr [ebx + 0x1d] */ r_edx = (u32)R8((u32)(r_ebx+0x1du));
    /* 00790e35: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00790e39: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790e3b: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00790e3f: je 0x79113e */ if (fZ) goto L_0079113e;
L_00790e45:; BB(0x00790e45);
    /* 00790e45: movsx esi, byte ptr [edx + ebp] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+r_ebp));
    /* 00790e49: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_00790e4d:; BB(0x00790e4d);
    /* 00790e4d: mov edx, ebp */ r_edx = r_ebp;
    /* 00790e4f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00790e51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790e53: je 0x791137 */ if (fZ) goto L_00791137;
L_00790e59:; BB(0x00790e59);
    /* 00790e59: movsx esi, byte ptr [edx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx));
L_00790e5c:; BB(0x00790e5c);
    /* 00790e5c: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790e5f: jl 0x790e69 */ if ((fS!=fO)) goto L_00790e69;
L_00790e61:; BB(0x00790e61);
    /* 00790e61: lea edx, [esi - 7] */ r_edx = (u32)(r_esi+0xfffffff9u);
    /* 00790e64: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00790e67: jmp 0x790e6f */ goto L_00790e6f;
L_00790e69:; BB(0x00790e69);
    /* 00790e69: lea edx, [esi + 7] */ r_edx = (u32)(r_esi+0x7u);
    /* 00790e6c: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
L_00790e6f:; BB(0x00790e6f);
    /* 00790e6f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790e71: je 0x791083 */ if (fZ) goto L_00791083;
L_00790e77:; BB(0x00790e77);
    /* 00790e77: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790e79: je 0x791083 */ if (fZ) goto L_00791083;
L_00790e7f:; BB(0x00790e7f);
    /* 00790e7f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00790e83: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00790e88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790e8a: je 0x791130 */ if (fZ) goto L_00791130;
L_00790e90:; BB(0x00790e90);
    /* 00790e90: movsx esi, byte ptr [edx + 1] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
L_00790e94:; BB(0x00790e94);
    /* 00790e94: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790e97: jl 0x790ea1 */ if ((fS!=fO)) goto L_00790ea1;
L_00790e99:; BB(0x00790e99);
    /* 00790e99: lea edx, [esi - 7] */ r_edx = (u32)(r_esi+0xfffffff9u);
    /* 00790e9c: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00790e9f: jmp 0x790ea7 */ goto L_00790ea7;
L_00790ea1:; BB(0x00790ea1);
    /* 00790ea1: lea edx, [esi + 7] */ r_edx = (u32)(r_esi+0x7u);
    /* 00790ea4: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
L_00790ea7:; BB(0x00790ea7);
    /* 00790ea7: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790ea9: je 0x791083 */ if (fZ) goto L_00791083;
L_00790eaf:; BB(0x00790eaf);
    /* 00790eaf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790eb1: je 0x791083 */ if (fZ) goto L_00791083;
L_00790eb7:; BB(0x00790eb7);
    /* 00790eb7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00790ebb: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00790ec0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790ec2: je 0x791129 */ if (fZ) goto L_00791129;
L_00790ec8:; BB(0x00790ec8);
    /* 00790ec8: movsx esi, byte ptr [edx + 2] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
L_00790ecc:; BB(0x00790ecc);
    /* 00790ecc: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790ecf: jl 0x790ed9 */ if ((fS!=fO)) goto L_00790ed9;
L_00790ed1:; BB(0x00790ed1);
    /* 00790ed1: lea edx, [esi - 7] */ r_edx = (u32)(r_esi+0xfffffff9u);
    /* 00790ed4: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00790ed7: jmp 0x790edf */ goto L_00790edf;
L_00790ed9:; BB(0x00790ed9);
    /* 00790ed9: lea edx, [esi + 7] */ r_edx = (u32)(r_esi+0x7u);
    /* 00790edc: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
L_00790edf:; BB(0x00790edf);
    /* 00790edf: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790ee1: je 0x791083 */ if (fZ) goto L_00791083;
L_00790ee7:; BB(0x00790ee7);
    /* 00790ee7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790ee9: je 0x791083 */ if (fZ) goto L_00791083;
L_00790eef:; BB(0x00790eef);
    /* 00790eef: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00790ef3: mov ebp, 3 */ r_ebp = 0x3u;
    /* 00790ef8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790efa: je 0x791122 */ if (fZ) goto L_00791122;
L_00790f00:; BB(0x00790f00);
    /* 00790f00: movsx esi, byte ptr [edx + 3] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
L_00790f04:; BB(0x00790f04);
    /* 00790f04: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790f07: jl 0x790f11 */ if ((fS!=fO)) goto L_00790f11;
L_00790f09:; BB(0x00790f09);
    /* 00790f09: lea edx, [esi - 7] */ r_edx = (u32)(r_esi+0xfffffff9u);
    /* 00790f0c: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00790f0f: jmp 0x790f17 */ goto L_00790f17;
L_00790f11:; BB(0x00790f11);
    /* 00790f11: lea edx, [esi + 7] */ r_edx = (u32)(r_esi+0x7u);
    /* 00790f14: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
L_00790f17:; BB(0x00790f17);
    /* 00790f17: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790f19: je 0x791083 */ if (fZ) goto L_00791083;
L_00790f1f:; BB(0x00790f1f);
    /* 00790f1f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790f21: je 0x791083 */ if (fZ) goto L_00791083;
L_00790f27:; BB(0x00790f27);
    /* 00790f27: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00790f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790f2c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00790f30: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00790f32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00790f33: call 0x791454 */ r_esp -= 4; W32(r_esp, 0x790f38u); f_00791454();
    /* 00790f38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790f3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790f3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790f3d: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00790f42: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x790f47u); f_00814298();
    /* 00790f47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790f4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00790f4c: call 0x7913f8 */ r_esp -= 4; W32(r_esp, 0x790f51u); f_007913f8();
L_00790f51:; BB(0x00790f51);
    /* 00790f51: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00790f53: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x790f58u); f_007bfe60();
    /* 00790f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00790f59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790f5b: je 0x791047 */ if (fZ) goto L_00791047;
L_00790f61:; BB(0x00790f61);
    /* 00790f61: mov edx, dword ptr [0xa9ccd4] */ r_edx = R32((u32)(0xa9ccd4u));
    /* 00790f67: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 00790f6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790f6d: je 0x790f78 */ if (fZ) goto L_00790f78;
L_00790f6f:; BB(0x00790f6f);
    /* 00790f6f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790f72: jge 0x790f78 */ if ((fS==fO)) goto L_00790f78;
L_00790f74:; BB(0x00790f74);
    /* 00790f74: mov byte ptr [eax + edx], 0xff */ W8((u32)(r_eax+r_edx), 0xffu);
L_00790f78:; BB(0x00790f78);
    /* 00790f78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00790f7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790f7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00790f7d: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00790f82: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x790f87u); f_00814298();
    /* 00790f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790f8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00790f8c: call 0x7913f8 */ r_esp -= 4; W32(r_esp, 0x790f91u); f_007913f8();
    /* 00790f91: jmp 0x791047 */ goto L_00791047;
L_00790f96:; BB(0x00790f96);
    /* 00790f96: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00790f9b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00790fa1: movsx esi, byte ptr [eax*8 + 0x97b3a0] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax*8+0x97b3a0u));
    /* 00790fa9: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x790faeu); f_007be19c();
    /* 00790fae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00790fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790fb3: je 0x790fc8 */ if (fZ) goto L_00790fc8;
L_00790fb5:; BB(0x00790fb5);
    /* 00790fb5: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790fb8: je 0x791149 */ if (fZ) goto L_00791149;
L_00790fbe:; BB(0x00790fbe);
    /* 00790fbe: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790fc1: jne 0x790fc8 */ if (!fZ) goto L_00790fc8;
L_00790fc3:; BB(0x00790fc3);
    /* 00790fc3: mov esi, 5 */ r_esi = 0x5u;
L_00790fc8:; BB(0x00790fc8);
    /* 00790fc8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00790fca:; BB(0x00790fca);
    /* 00790fca: mov edi, dword ptr [ebp + 0x97b2e0] */ r_edi = R32((u32)(r_ebp+0x97b2e0u));
    /* 00790fd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00790fd1: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00790fd6: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x790fdbu); f_007c1160();
    /* 00790fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790fdd: jne 0x7911ad */ if (!fZ) goto L_007911ad;
L_00790fe3:; BB(0x00790fe3);
    /* 00790fe3: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00790fe6: cmp ebp, 0xa8 */ {  u32 a = r_ebp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790fec: jl 0x790fca */ if ((fS!=fO)) goto L_00790fca;
L_00790fee:; BB(0x00790fee);
    /* 00790fee: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00790ff0: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x790ff5u); f_007bfe60();
    /* 00790ff5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00790ff6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790ff8: je 0x791047 */ if (fZ) goto L_00791047;
L_00790ffa:; BB(0x00790ffa);
    /* 00790ffa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00790ffc:; BB(0x00790ffc);
    /* 00790ffc: mov edx, dword ptr [eax + 0x97bb5c] */ r_edx = R32((u32)(r_eax+0x97bb5cu));
    /* 00791002: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791005: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791007: je 0x791153 */ if (fZ) goto L_00791153;
L_0079100d:; BB(0x0079100d);
    /* 0079100d: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791010: jl 0x790ffc */ if ((fS!=fO)) goto L_00790ffc;
L_00791012:; BB(0x00791012);
    /* 00791012: mov eax, dword ptr [0xa9ccd4] */ r_eax = R32((u32)(0xa9ccd4u));
    /* 00791017: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0079101d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079101f: je 0x79102e */ if (fZ) goto L_0079102e;
L_00791021:; BB(0x00791021);
    /* 00791021: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791024: jge 0x79102e */ if ((fS==fO)) goto L_0079102e;
L_00791026:; BB(0x00791026);
    /* 00791026: mov dword ptr [eax + esi*4 + 4], 0 */ W32((u32)(r_eax+r_esi*4+0x4u), 0x0u);
L_0079102e:; BB(0x0079102e);
    /* 0079102e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791030: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791033: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00791038: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x79103du); f_00814298();
    /* 0079103d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791040: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00791042: call 0x7913f8 */ r_esp -= 4; W32(r_esp, 0x791047u); f_007913f8();
L_00791047:; BB(0x00791047);
    /* 00791047: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00791049: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x79104eu); f_007bfe60();
    /* 0079104e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079104f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791051: jne 0x79105f */ if (!fZ) goto L_0079105f;
L_00791053:; BB(0x00791053);
    /* 00791053: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00791055: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x79105au); f_007bfe60();
    /* 0079105a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079105b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079105d: je 0x791078 */ if (fZ) goto L_00791078;
L_0079105f:; BB(0x0079105f);
    /* 0079105f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791064: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00791069: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x79106eu); f_00814298();
    /* 0079106e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791071: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00791073: call 0x7913f8 */ r_esp -= 4; W32(r_esp, 0x791078u); f_007913f8();
L_00791078:; BB(0x00791078);
    /* 00791078: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079107e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079107f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791080: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791081: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791082: ret  */ FN_RET(0x00790df8); r_esp += 4; return;
L_00791083:; BB(0x00791083);
    /* 00791083: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00791087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791088: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00791089: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079108b: call 0x791454 */ r_esp -= 4; W32(r_esp, 0x791090u); f_00791454();
    /* 00791090: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791092: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791094:; BB(0x00791094);
    /* 00791094: cmp ebp, dword ptr [eax*8 + 0x97b3a0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax*8+0x97b3a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079109b: je 0x791119 */ if (fZ) goto L_00791119;
L_0079109d:; BB(0x0079109d);
    /* 0079109d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007910a0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007910a3: jl 0x791094 */ if ((fS!=fO)) goto L_00791094;
L_007910a5:; BB(0x007910a5);
    /* 007910a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007910a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007910a8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7910adu); f_00792fe8();
    /* 007910ad: mov ebp, eax */ r_ebp = r_eax;
    /* 007910af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007910b2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007910b4: je 0x7910fe */ if (fZ) goto L_007910fe;
L_007910b6:; BB(0x007910b6);
    /* 007910b6: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 007910b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007910ba: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7910bfu); f_00792fe8();
    /* 007910bf: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 007910c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007910c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007910c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007910c6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7910cbu); f_00857e29();
    /* 007910cb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007910ce:; BB(0x007910ce);
    /* 007910ce: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007910d1: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x7910d6u); f_00736578();
    /* 007910d6: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007910da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007910dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007910de: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007910e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007910e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007910e4: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x7910e9u); f_00735db8();
    /* 007910e9: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007910ec: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7910f1u); f_00736458();
    /* 007910f1: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 007910f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007910f9: jmp 0x790f27 */ goto L_00790f27;
L_007910fe:; BB(0x007910fe);
    /* 007910fe: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00791100: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791102: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x791107u); f_00792fe8();
    /* 00791107: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0079110b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0079110d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079110e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079110f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x791114u); f_00857dec();
    /* 00791114: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791117: jmp 0x7910ce */ goto L_007910ce;
L_00791119:; BB(0x00791119);
    /* 00791119: mov edx, dword ptr [eax*8 + 0x97b3a4] */ r_edx = R32((u32)(r_eax*8+0x97b3a4u));
    /* 00791120: jmp 0x7910a5 */ goto L_007910a5;
L_00791122:; BB(0x00791122);
    /* 00791122: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00791124: jmp 0x790f04 */ goto L_00790f04;
L_00791129:; BB(0x00791129);
    /* 00791129: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0079112b: jmp 0x790ecc */ goto L_00790ecc;
L_00791130:; BB(0x00791130);
    /* 00791130: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00791132: jmp 0x790e94 */ goto L_00790e94;
L_00791137:; BB(0x00791137);
    /* 00791137: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00791139: jmp 0x790e5c */ goto L_00790e5c;
L_0079113e:; BB(0x0079113e);
    /* 0079113e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791140: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00791144: jmp 0x790e4d */ goto L_00790e4d;
L_00791149:; BB(0x00791149);
    /* 00791149: mov esi, 6 */ r_esi = 0x6u;
    /* 0079114e: jmp 0x790fc8 */ goto L_00790fc8;
L_00791153:; BB(0x00791153);
    /* 00791153: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00791155: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791157: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79115cu); f_00792fe8();
    /* 0079115c: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00791160: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00791162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00791164: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x791169u); f_00857dec();
    /* 00791169: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079116c: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0079116f: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x791174u); f_00736578();
    /* 00791174: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00791178: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079117a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079117c: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0079117f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00791181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791182: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x791187u); f_00735db8();
    /* 00791187: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0079118a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79118fu); f_00736458();
    /* 0079118f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791194: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 00791199: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x79119eu); f_00814298();
    /* 0079119e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007911a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007911a3: call 0x7913f8 */ r_esp -= 4; W32(r_esp, 0x7911a8u); f_007913f8();
    /* 007911a8: jmp 0x791047 */ goto L_00791047;
L_007911ad:; BB(0x007911ad);
    /* 007911ad: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 007911b1: mov ebp, dword ptr [eax*8 + 0x97b3a0] */ r_ebp = R32((u32)(r_eax*8+0x97b3a0u));
    /* 007911b8: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007911bc: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007911c1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007911c7: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7911ccu); f_007be19c();
    /* 007911cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007911cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007911d1: je 0x7911e9 */ if (fZ) goto L_007911e9;
L_007911d3:; BB(0x007911d3);
    /* 007911d3: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007911d6: je 0x7911e4 */ if (fZ) goto L_007911e4;
L_007911d8:; BB(0x007911d8);
    /* 007911d8: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007911db: jne 0x7911e9 */ if (!fZ) goto L_007911e9;
L_007911dd:; BB(0x007911dd);
    /* 007911dd: mov ebp, 5 */ r_ebp = 0x5u;
    /* 007911e2: jmp 0x7911e9 */ goto L_007911e9;
L_007911e4:; BB(0x007911e4);
    /* 007911e4: mov ebp, 6 */ r_ebp = 0x6u;
L_007911e9:; BB(0x007911e9);
    /* 007911e9: mov edi, dword ptr [0xa9ccd4] */ r_edi = R32((u32)(0xa9ccd4u));
    /* 007911ef: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007911f5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007911f7: je 0x7913f1 */ if (fZ) goto L_007913f1;
L_007911fd:; BB(0x007911fd);
    /* 007911fd: mov edx, dword ptr [edi + ebp*4 + 4] */ r_edx = R32((u32)(r_edi+r_ebp*4+0x4u));
L_00791201:; BB(0x00791201);
    /* 00791201: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00791204: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00791208: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0079120a:; BB(0x0079120a);
    /* 0079120a: mov eax, ebp */ r_eax = r_ebp;
    /* 0079120c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00791211: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791213: je 0x7913ea */ if (fZ) goto L_007913ea;
L_00791219:; BB(0x00791219);
    /* 00791219: mov ecx, dword ptr [edi + eax*4 + 4] */ r_ecx = R32((u32)(r_edi+r_eax*4+0x4u));
L_0079121d:; BB(0x0079121d);
    /* 0079121d: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079121f: je 0x791263 */ if (fZ) goto L_00791263;
L_00791221:; BB(0x00791221);
    /* 00791221: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00791224: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791227: jl 0x79120a */ if ((fS!=fO)) goto L_0079120a;
L_00791229:; BB(0x00791229);
    /* 00791229: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0079122d: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00791230:; BB(0x00791230);
    /* 00791230: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00791234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791235: mov edx, esi */ r_edx = r_esi;
    /* 00791237: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0079123d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079123f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00791240: call 0x791434 */ r_esp -= 4; W32(r_esp, 0x791245u); f_00791434();
    /* 00791245: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079124a: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0079124f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x791254u); f_00814298();
    /* 00791254: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791257: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00791259: call 0x7913f8 */ r_esp -= 4; W32(r_esp, 0x79125eu); f_007913f8();
    /* 0079125e: jmp 0x790fee */ goto L_00790fee;
L_00791263:; BB(0x00791263);
    /* 00791263: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00791267: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0079126a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079126c: jne 0x791286 */ if (!fZ) goto L_00791286;
L_0079126e:; BB(0x0079126e);
    /* 0079126e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00791270:; BB(0x00791270);
    /* 00791270: mov ecx, dword ptr [edi + 0x97bb5c] */ r_ecx = R32((u32)(r_edi+0x97bb5cu));
    /* 00791276: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00791279: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079127b: je 0x791390 */ if (fZ) goto L_00791390;
L_00791281:; BB(0x00791281);
    /* 00791281: cmp edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791284: jl 0x791270 */ if ((fS!=fO)) goto L_00791270;
L_00791286:; BB(0x00791286);
    /* 00791286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00791287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791288: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079128a: call 0x791434 */ r_esp -= 4; W32(r_esp, 0x79128fu); f_00791434();
    /* 0079128f: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00791293: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00791296: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00791298: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079129a: mov ebx, eax */ r_ebx = r_eax;
L_0079129c:; BB(0x0079129c);
    /* 0079129c: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007912a1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007912a7: mov esi, dword ptr [ebx*8 + 0x97b3a0] */ r_esi = R32((u32)(r_ebx*8+0x97b3a0u));
    /* 007912ae: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7912b3u); f_007be19c();
    /* 007912b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007912b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007912b8: je 0x7912d0 */ if (fZ) goto L_007912d0;
L_007912ba:; BB(0x007912ba);
    /* 007912ba: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007912bd: je 0x7912cb */ if (fZ) goto L_007912cb;
L_007912bf:; BB(0x007912bf);
    /* 007912bf: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007912c2: jne 0x7912d0 */ if (!fZ) goto L_007912d0;
L_007912c4:; BB(0x007912c4);
    /* 007912c4: mov esi, 5 */ r_esi = 0x5u;
    /* 007912c9: jmp 0x7912d0 */ goto L_007912d0;
L_007912cb:; BB(0x007912cb);
    /* 007912cb: mov esi, 6 */ r_esi = 0x6u;
L_007912d0:; BB(0x007912d0);
    /* 007912d0: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007912d2: je 0x79134f */ if (fZ) goto L_0079134f;
L_007912d4:; BB(0x007912d4);
    /* 007912d4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007912d7: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007912da: jl 0x79129c */ if ((fS!=fO)) goto L_0079129c;
L_007912dc:; BB(0x007912dc);
    /* 007912dc: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007912e0: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_007912e3:; BB(0x007912e3);
    /* 007912e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007912e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007912e6: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7912ebu); f_00792fe8();
    /* 007912eb: mov ebp, eax */ r_ebp = r_eax;
    /* 007912ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007912f0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007912f2: je 0x791334 */ if (fZ) goto L_00791334;
L_007912f4:; BB(0x007912f4);
    /* 007912f4: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 007912f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007912f8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7912fdu); f_00792fe8();
    /* 007912fd: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00791301: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00791302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791303: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00791304: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x791309u); f_00857e29();
    /* 00791309: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079130c:; BB(0x0079130c);
    /* 0079130c: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0079130f: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x791314u); f_00736578();
    /* 00791314: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00791318: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079131a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079131c: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0079131f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00791321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791322: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x791327u); f_00735db8();
    /* 00791327: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0079132a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x79132fu); f_00736458();
    /* 0079132f: jmp 0x791230 */ goto L_00791230;
L_00791334:; BB(0x00791334);
    /* 00791334: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00791336: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791338: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79133du); f_00792fe8();
    /* 0079133d: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00791341: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00791343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791344: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00791345: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79134au); f_00857dec();
    /* 0079134a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079134d: jmp 0x79130c */ goto L_0079130c;
L_0079134f:; BB(0x0079134f);
    /* 0079134f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00791353: mov eax, ebx */ r_eax = r_ebx;
    /* 00791355: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00791358: mov edi, dword ptr [eax*8 + 0x97b3a4] */ r_edi = R32((u32)(r_eax*8+0x97b3a4u));
    /* 0079135f: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791362: je 0x79136d */ if (fZ) goto L_0079136d;
L_00791364:; BB(0x00791364);
    /* 00791364: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791367: jne 0x7912e3 */ if (!fZ) goto L_007912e3;
L_0079136d:; BB(0x0079136d);
    /* 0079136d: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00791372: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00791378: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x79137du); f_007be19c();
    /* 0079137d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791382: je 0x7912e3 */ if (fZ) goto L_007912e3;
L_00791388:; BB(0x00791388);
    /* 00791388: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079138b: jmp 0x7912e3 */ goto L_007912e3;
L_00791390:; BB(0x00791390);
    /* 00791390: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00791392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791394: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x791399u); f_00792fe8();
    /* 00791399: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0079139d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0079139f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007913a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007913a1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7913a6u); f_00857dec();
    /* 007913a6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007913a9: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007913ac: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x7913b1u); f_00736578();
    /* 007913b1: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007913b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007913b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007913b9: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007913bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007913be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007913bf: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x7913c4u); f_00735db8();
    /* 007913c4: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007913c7: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7913ccu); f_00736458();
    /* 007913cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007913ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007913cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007913d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007913d1: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 007913d6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7913dbu); f_00814298();
    /* 007913db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007913de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007913e0: call 0x7913f8 */ r_esp -= 4; W32(r_esp, 0x7913e5u); f_007913f8();
    /* 007913e5: jmp 0x790fee */ goto L_00790fee;
L_007913ea:; BB(0x007913ea);
    /* 007913ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007913ec: jmp 0x79121d */ goto L_0079121d;
L_007913f1:; BB(0x007913f1);
    /* 007913f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007913f3: jmp 0x791201 */ goto L_00791201;
}

