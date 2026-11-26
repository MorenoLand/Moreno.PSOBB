#include "protos.h"

void f_0086a433(void) /* ___wtomb_environ */
{
    FN_ENTER(0x0086a433);
    /* 0086a433: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086a434: mov ebp, esp */ r_ebp = r_esp;
    /* 0086a436: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a437: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a438: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a439: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a43a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086a43c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a43d: mov edi, dword ptr [0xae7a38] */ r_edi = R32((u32)(0xae7a38u));
    /* 0086a443: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0086a446: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0086a448: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a44a: je 0x86a4ae */ if (fZ) goto L_0086a4ae;
L_0086a44c:; BB(0x0086a44c);
    /* 0086a44c: mov ebx, dword ptr [0x8f81d8] */ r_ebx = R32((u32)(0x8f81d8u));
L_0086a452:; BB(0x0086a452);
    /* 0086a452: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a453: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a454: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a455: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a456: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086a458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a459: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a45a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a45b: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x86a45du); call_ind(t); }
    /* 0086a45d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a45f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0086a462: je 0x86a4be */ if (fZ) goto L_0086a4be;
L_0086a464:; BB(0x0086a464);
    /* 0086a464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a465: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86a46au); f_00859c55();
    /* 0086a46a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a46c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a46d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086a470: je 0x86a4be */ if (fZ) goto L_0086a4be;
L_0086a472:; BB(0x0086a472);
    /* 0086a472: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a473: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a474: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a477: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a478: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086a47a: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a47c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a47d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a47e: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x86a480u); call_ind(t); }
    /* 0086a480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a482: je 0x86a4b5 */ if (fZ) goto L_0086a4b5;
L_0086a484:; BB(0x0086a484);
    /* 0086a484: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0086a487: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a489: call 0x86aea5 */ r_esp -= 4; W32(r_esp, 0x86a48eu); f_0086aea5();
    /* 0086a48e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086a490: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a491: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a492: jge 0x86a4a5 */ if ((fS==fO)) goto L_0086a4a5;
L_0086a494:; BB(0x0086a494);
    /* 0086a494: cmp dword ptr [ebp - 4], esi */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a497: je 0x86a4a5 */ if (fZ) goto L_0086a4a5;
L_0086a499:; BB(0x0086a499);
    /* 0086a499: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a49c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a4a1u); f_00858882();
    /* 0086a4a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a4a2: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
L_0086a4a5:; BB(0x0086a4a5);
    /* 0086a4a5: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086a4a8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0086a4aa: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a4ac: jne 0x86a452 */ if (!fZ) goto L_0086a452;
L_0086a4ae:; BB(0x0086a4ae);
    /* 0086a4ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086a4b0:; BB(0x0086a4b0);
    /* 0086a4b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086a4b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086a4b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086a4b3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086a4b4: ret  */ FN_RET(0x0086a433); r_esp += 4; return;
L_0086a4b5:; BB(0x0086a4b5);
    /* 0086a4b5: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a4b8: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a4bdu); f_00858882();
    /* 0086a4bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086a4be:; BB(0x0086a4be);
    /* 0086a4be: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086a4c1: jmp 0x86a4b0 */ goto L_0086a4b0;
}

