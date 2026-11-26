#include "protos.h"

void f_0085a81a(void) /* __fseek_lk */
{
    FN_ENTER(0x0085a81a);
    /* 0085a81a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a81b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0085a81f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085a822: test al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a824: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a825: je 0x85a898 */ if (fZ) goto L_0085a898;
L_0085a827:; BB(0x0085a827);
    /* 0085a827: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0085a82b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a82d: je 0x85a839 */ if (fZ) goto L_0085a839;
L_0085a82f:; BB(0x0085a82f);
    /* 0085a82f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a832: je 0x85a839 */ if (fZ) goto L_0085a839;
L_0085a834:; BB(0x0085a834);
    /* 0085a834: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a837: jne 0x85a898 */ if (!fZ) goto L_0085a898;
L_0085a839:; BB(0x0085a839);
    /* 0085a839: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085a83c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a83f: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0085a842: jne 0x85a851 */ if (!fZ) goto L_0085a851;
L_0085a844:; BB(0x0085a844);
    /* 0085a844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a845: call 0x85a8f2 */ r_esp -= 4; W32(r_esp, 0x85a84au); f_0085a8f2();
    /* 0085a84a: add dword ptr [esp + 0x14], eax */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a84e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a84f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0085a851:; BB(0x0085a851);
    /* 0085a851: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a852: call 0x85b986 */ r_esp -= 4; W32(r_esp, 0x85a857u); f_0085b986();
    /* 0085a857: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085a85a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 0085a85c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085a85d: jns 0x85a867 */ if (!fS) goto L_0085a867;
L_0085a85f:; BB(0x0085a85f);
    /* 0085a85f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085a862: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0085a865: jmp 0x85a87b */ goto L_0085a87b;
L_0085a867:; BB(0x0085a867);
    /* 0085a867: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a869: je 0x85a87b */ if (fZ) goto L_0085a87b;
L_0085a86b:; BB(0x0085a86b);
    /* 0085a86b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a86d: je 0x85a87b */ if (fZ) goto L_0085a87b;
L_0085a86f:; BB(0x0085a86f);
    /* 0085a86f: test ah, 4 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a872: jne 0x85a87b */ if (!fZ) goto L_0085a87b;
L_0085a874:; BB(0x0085a874);
    /* 0085a874: mov dword ptr [esi + 0x18], 0x200 */ W32((u32)(r_esi+0x18u), 0x200u);
L_0085a87b:; BB(0x0085a87b);
    /* 0085a87b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a87c: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a880: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a883: call 0x8648cf */ r_esp -= 4; W32(r_esp, 0x85a888u); f_008648cf();
    /* 0085a888: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085a88a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a88d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085a890: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0085a893: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a894: mov eax, ecx */ r_eax = r_ecx;
    /* 0085a896: jmp 0x85a8a6 */ goto L_0085a8a6;
L_0085a898:; BB(0x0085a898);
    /* 0085a898: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85a89du); f_00859dd6();
    /* 0085a89d: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0085a8a3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085a8a6:; BB(0x0085a8a6);
    /* 0085a8a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085a8a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085a8a8: ret  */ FN_RET(0x0085a81a); r_esp += 4; return;
}

