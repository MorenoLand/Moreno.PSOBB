#include "protos.h"

void f_008596c4(void) /* __fclose_lk */
{
    FN_ENTER(0x008596c4);
    /* 008596c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008596c5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008596c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008596ca: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008596cd: test byte ptr [esi + 0xc], 0x83 */ {  u32 a = R8((u32)(r_esi+0xcu)); u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008596d1: je 0x859707 */ if (fZ) goto L_00859707;
L_008596d3:; BB(0x008596d3);
    /* 008596d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008596d4: call 0x85b986 */ r_esp -= 4; W32(r_esp, 0x8596d9u); f_0085b986();
    /* 008596d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008596da: mov edi, eax */ r_edi = r_eax;
    /* 008596dc: call 0x86215b */ r_esp -= 4; W32(r_esp, 0x8596e1u); f_0086215b();
    /* 008596e1: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008596e4: call 0x8620c0 */ r_esp -= 4; W32(r_esp, 0x8596e9u); f_008620c0();
    /* 008596e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008596ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008596ee: jge 0x8596f5 */ if ((fS==fO)) goto L_008596f5;
L_008596f0:; BB(0x008596f0);
    /* 008596f0: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008596f3: jmp 0x859707 */ goto L_00859707;
L_008596f5:; BB(0x008596f5);
    /* 008596f5: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008596f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008596fa: je 0x859707 */ if (fZ) goto L_00859707;
L_008596fc:; BB(0x008596fc);
    /* 008596fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008596fd: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x859702u); f_00858882();
    /* 00859702: and dword ptr [esi + 0x1c], 0 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00859706: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00859707:; BB(0x00859707);
    /* 00859707: and dword ptr [esi + 0xc], 0 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085970b: mov eax, edi */ r_eax = r_edi;
    /* 0085970d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085970e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085970f: ret  */ FN_RET(0x008596c4); r_esp += 4; return;
}

