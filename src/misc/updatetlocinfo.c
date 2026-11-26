#include "protos.h"

void f_0085d8bb(void) /* ___updatetlocinfo_lk */
{
    FN_ENTER(0x0085d8bb);
    /* 0085d8bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d8bc: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85d8c1u); f_0085c583();
    /* 0085d8c1: mov esi, eax */ r_esi = r_eax;
    /* 0085d8c3: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0085d8c6: cmp ecx, dword ptr [0xa23cec] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d8cc: je 0x85d977 */ if (fZ) goto L_0085d977;
L_0085d8d2:; BB(0x0085d8d2);
    /* 0085d8d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085d8d4: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d8d6: je 0x85d907 */ if (fZ) goto L_0085d907;
L_0085d8d8:; BB(0x0085d8d8);
    /* 0085d8d8: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0085d8db: dec dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d8dd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d8df: je 0x85d8e3 */ if (fZ) goto L_0085d8e3;
L_0085d8e1:; BB(0x0085d8e1);
    /* 0085d8e1: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085d8e3:; BB(0x0085d8e3);
    /* 0085d8e3: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0085d8e6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d8e8: je 0x85d8ec */ if (fZ) goto L_0085d8ec;
L_0085d8ea:; BB(0x0085d8ea);
    /* 0085d8ea: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085d8ec:; BB(0x0085d8ec);
    /* 0085d8ec: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0085d8ef: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d8f1: je 0x85d8f5 */ if (fZ) goto L_0085d8f5;
L_0085d8f3:; BB(0x0085d8f3);
    /* 0085d8f3: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085d8f5:; BB(0x0085d8f5);
    /* 0085d8f5: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0085d8f8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d8fa: je 0x85d8fe */ if (fZ) goto L_0085d8fe;
L_0085d8fc:; BB(0x0085d8fc);
    /* 0085d8fc: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085d8fe:; BB(0x0085d8fe);
    /* 0085d8fe: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0085d901: dec dword ptr [eax + 0xb4] */ { u32 ad = (u32)(r_eax+0xb4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085d907:; BB(0x0085d907);
    /* 0085d907: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
    /* 0085d90c: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0085d90f: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
    /* 0085d914: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d916: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
    /* 0085d91b: cmp dword ptr [eax + 0x2c], edx */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d91e: je 0x85d92a */ if (fZ) goto L_0085d92a;
L_0085d920:; BB(0x0085d920);
    /* 0085d920: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0085d923: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d925: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
L_0085d92a:; BB(0x0085d92a);
    /* 0085d92a: cmp dword ptr [eax + 0x34], edx */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d92d: je 0x85d939 */ if (fZ) goto L_0085d939;
L_0085d92f:; BB(0x0085d92f);
    /* 0085d92f: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0085d932: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d934: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
L_0085d939:; BB(0x0085d939);
    /* 0085d939: cmp dword ptr [eax + 0x30], edx */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d93c: je 0x85d948 */ if (fZ) goto L_0085d948;
L_0085d93e:; BB(0x0085d93e);
    /* 0085d93e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0085d941: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d943: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
L_0085d948:; BB(0x0085d948);
    /* 0085d948: cmp dword ptr [eax + 0x40], edx */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d94b: je 0x85d957 */ if (fZ) goto L_0085d957;
L_0085d94d:; BB(0x0085d94d);
    /* 0085d94d: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0085d950: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d952: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
L_0085d957:; BB(0x0085d957);
    /* 0085d957: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 0085d95a: inc dword ptr [eax + 0xb4] */ { u32 ad = (u32)(r_eax+0xb4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d960: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d962: je 0x85d977 */ if (fZ) goto L_0085d977;
L_0085d964:; BB(0x0085d964);
    /* 0085d964: cmp dword ptr [ecx], edx */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d966: jne 0x85d977 */ if (!fZ) goto L_0085d977;
L_0085d968:; BB(0x0085d968);
    /* 0085d968: cmp ecx, 0xa23c98 */ {  u32 a = r_ecx; u32 b = 0xa23c98u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085d96e: je 0x85d977 */ if (fZ) goto L_0085d977;
L_0085d970:; BB(0x0085d970);
    /* 0085d970: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d971: call 0x85d7eb */ r_esp -= 4; W32(r_esp, 0x85d976u); f_0085d7eb();
    /* 0085d976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d977:; BB(0x0085d977);
    /* 0085d977: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 0085d97a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085d97b: ret  */ FN_RET(0x0085d8bb); r_esp += 4; return;
}

