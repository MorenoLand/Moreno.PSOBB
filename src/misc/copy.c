#include "protos.h"

void f_0086ae44(void) /* _copy_environ */
{
    FN_ENTER(0x0086ae44);
    /* 0086ae44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae45: mov ebp, esp */ r_ebp = r_esp;
    /* 0086ae47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ae4a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ae4c: mov eax, edi */ r_eax = r_edi;
    /* 0086ae4e: jne 0x86ae52 */ if (!fZ) goto L_0086ae52;
L_0086ae50:; BB(0x0086ae50);
    /* 0086ae50: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086ae51: ret  */ FN_RET(0x0086ae44); r_esp += 4; return;
L_0086ae52:; BB(0x0086ae52);
    /* 0086ae52: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ae55: je 0x86ae60 */ if (fZ) goto L_0086ae60;
L_0086ae57:; BB(0x0086ae57);
    /* 0086ae57: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086ae5a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086ae5b: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ae5e: jne 0x86ae57 */ if (!fZ) goto L_0086ae57;
L_0086ae60:; BB(0x0086ae60);
    /* 0086ae60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae61: lea eax, [ecx*4 + 4] */ r_eax = (u32)(r_ecx*4+0x4u);
    /* 0086ae68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae6a: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86ae6fu); f_00859c55();
    /* 0086ae6f: mov esi, eax */ r_esi = r_eax;
    /* 0086ae71: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ae73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086ae74: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0086ae77: jne 0x86ae81 */ if (!fZ) goto L_0086ae81;
L_0086ae79:; BB(0x0086ae79);
    /* 0086ae79: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae7b: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x86ae80u); f_0085aaf3();
    /* 0086ae80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ae81:; BB(0x0086ae81);
    /* 0086ae81: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0086ae83: mov ebx, edi */ r_ebx = r_edi;
    /* 0086ae85: jmp 0x86ae98 */ goto L_0086ae98;
L_0086ae87:; BB(0x0086ae87);
    /* 0086ae87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae88: call 0x86b07a */ r_esp -= 4; W32(r_esp, 0x86ae8du); f_0086b07a();
    /* 0086ae8d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0086ae8f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ae92: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086ae95: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0086ae97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ae98:; BB(0x0086ae98);
    /* 0086ae98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ae9a: jne 0x86ae87 */ if (!fZ) goto L_0086ae87;
L_0086ae9c:; BB(0x0086ae9c);
    /* 0086ae9c: and dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086ae9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086aea1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086aea2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086aea3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086aea4: ret  */ FN_RET(0x0086ae44); r_esp += 4; return;
}

