#include "protos.h"

void f_007bb038(void)
{
    FN_ENTER(0x007bb038);
    /* 007bb038: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb039: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb03b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb03d: push 0x8f62cc */ { u32 v = 0x8f62ccu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb042: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb049: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb050: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb05c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb05f: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb064: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb06b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb070u); f_005caba4();
    /* 007bb070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb071: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb076: je 0x7bb0af */ if (fZ) goto L_007bb0af;
L_007bb078:; BB(0x007bb078);
    /* 007bb078: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb07f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb086: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb089: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb08f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb092: call 0x65c2d0 */ r_esp -= 4; W32(r_esp, 0x7bb097u); f_0065c2d0();
    /* 007bb097: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb09a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb0a1:; BB(0x007bb0a1);
    /* 007bb0a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb0a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb0ab: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb0ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb0ae: ret  */ FN_RET(0x007bb038); r_esp += 4; return;
L_007bb0af:; BB(0x007bb0af);
    /* 007bb0af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb0b1: jmp 0x7bb0a1 */ goto L_007bb0a1;
}

void f_007bb0b4(void)
{
    FN_ENTER(0x007bb0b4);
    /* 007bb0b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb0b5: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb0b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb0b9: push 0x8f62f4 */ { u32 v = 0x8f62f4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb0be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb0c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb0cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb0cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb0d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb0d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb0d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb0db: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb0e0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb0e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb0ecu); f_005caba4();
    /* 007bb0ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb0ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb0f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb0f2: je 0x7bb12b */ if (fZ) goto L_007bb12b;
L_007bb0f4:; BB(0x007bb0f4);
    /* 007bb0f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb0fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb102: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb105: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb10b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb10e: call 0x66dd9c */ r_esp -= 4; W32(r_esp, 0x7bb113u); f_0066dd9c();
    /* 007bb113: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb116: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb11d:; BB(0x007bb11d);
    /* 007bb11d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb120: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb127: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb129: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb12a: ret  */ FN_RET(0x007bb0b4); r_esp += 4; return;
L_007bb12b:; BB(0x007bb12b);
    /* 007bb12b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb12d: jmp 0x7bb11d */ goto L_007bb11d;
}

void f_007bb130(void)
{
    FN_ENTER(0x007bb130);
    /* 007bb130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb131: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb135: push 0x8f631c */ { u32 v = 0x8f631cu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb13a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb141: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb148: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb14b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb14e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb151: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb154: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb157: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb15c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb163: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb168u); f_005caba4();
    /* 007bb168: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb169: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb16c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb16e: je 0x7bb1a7 */ if (fZ) goto L_007bb1a7;
L_007bb170:; BB(0x007bb170);
    /* 007bb170: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb177: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb17e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb181: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb187: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb18a: call 0x61f8c4 */ r_esp -= 4; W32(r_esp, 0x7bb18fu); f_0061f8c4();
    /* 007bb18f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb192: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb199:; BB(0x007bb199);
    /* 007bb199: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb19c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb1a3: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb1a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb1a6: ret  */ FN_RET(0x007bb130); r_esp += 4; return;
L_007bb1a7:; BB(0x007bb1a7);
    /* 007bb1a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb1a9: jmp 0x7bb199 */ goto L_007bb199;
}

void f_007bb1ac(void)
{
    FN_ENTER(0x007bb1ac);
    /* 007bb1ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb1ad: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb1af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb1b1: push 0x8f6344 */ { u32 v = 0x8f6344u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb1b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb1bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb1c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb1c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb1ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb1cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb1d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb1d3: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb1d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb1df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb1e4u); f_005caba4();
    /* 007bb1e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb1e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb1e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb1ea: je 0x7bb223 */ if (fZ) goto L_007bb223;
L_007bb1ec:; BB(0x007bb1ec);
    /* 007bb1ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb1f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb1fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb1fd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb203: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb206: call 0x61fed8 */ r_esp -= 4; W32(r_esp, 0x7bb20bu); f_0061fed8();
    /* 007bb20b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb20e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb215:; BB(0x007bb215);
    /* 007bb215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb218: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb21f: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb222: ret  */ FN_RET(0x007bb1ac); r_esp += 4; return;
L_007bb223:; BB(0x007bb223);
    /* 007bb223: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb225: jmp 0x7bb215 */ goto L_007bb215;
}

void f_007bb228(void)
{
    FN_ENTER(0x007bb228);
    /* 007bb228: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb229: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb22b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb22d: push 0x8f636c */ { u32 v = 0x8f636cu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb232: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb239: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb240: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb243: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb246: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb249: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb24c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb24f: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb254: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb25b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb260u); f_005caba4();
    /* 007bb260: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb261: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb266: je 0x7bb29f */ if (fZ) goto L_007bb29f;
L_007bb268:; BB(0x007bb268);
    /* 007bb268: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb26f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb276: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb279: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb27f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb282: call 0x620f90 */ r_esp -= 4; W32(r_esp, 0x7bb287u); f_00620f90();
    /* 007bb287: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb28a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb291:; BB(0x007bb291);
    /* 007bb291: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb294: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb29b: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb29d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb29e: ret  */ FN_RET(0x007bb228); r_esp += 4; return;
L_007bb29f:; BB(0x007bb29f);
    /* 007bb29f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb2a1: jmp 0x7bb291 */ goto L_007bb291;
}

void f_007bb2a4(void)
{
    FN_ENTER(0x007bb2a4);
    /* 007bb2a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb2a5: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb2a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb2a9: push 0x8f6394 */ { u32 v = 0x8f6394u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb2ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb2b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb2b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb2bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb2bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb2c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb2c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb2c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb2cb: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb2d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb2d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb2dcu); f_005caba4();
    /* 007bb2dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb2dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb2e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb2e2: je 0x7bb31b */ if (fZ) goto L_007bb31b;
L_007bb2e4:; BB(0x007bb2e4);
    /* 007bb2e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb2eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb2f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb2f5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb2fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb2fe: call 0x6211b8 */ r_esp -= 4; W32(r_esp, 0x7bb303u); f_006211b8();
    /* 007bb303: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb306: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb30d:; BB(0x007bb30d);
    /* 007bb30d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb310: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb317: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb319: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb31a: ret  */ FN_RET(0x007bb2a4); r_esp += 4; return;
L_007bb31b:; BB(0x007bb31b);
    /* 007bb31b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb31d: jmp 0x7bb30d */ goto L_007bb30d;
}

void f_007bb320(void)
{
    FN_ENTER(0x007bb320);
    /* 007bb320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb321: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb325: push 0x8f63bc */ { u32 v = 0x8f63bcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb32a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb331: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb338: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb33b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb33e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb341: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb344: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb347: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb34c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb353: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb358u); f_005caba4();
    /* 007bb358: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb359: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb35c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb35e: je 0x7bb397 */ if (fZ) goto L_007bb397;
L_007bb360:; BB(0x007bb360);
    /* 007bb360: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb367: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb36e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb371: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb377: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb37a: call 0x6214fc */ r_esp -= 4; W32(r_esp, 0x7bb37fu); f_006214fc();
    /* 007bb37f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb382: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb389:; BB(0x007bb389);
    /* 007bb389: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb38c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb393: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb395: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb396: ret  */ FN_RET(0x007bb320); r_esp += 4; return;
L_007bb397:; BB(0x007bb397);
    /* 007bb397: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb399: jmp 0x7bb389 */ goto L_007bb389;
}

void f_007bb39c(void)
{
    FN_ENTER(0x007bb39c);
    /* 007bb39c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb39d: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb39f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb3a1: push 0x8f63e4 */ { u32 v = 0x8f63e4u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb3a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb3ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb3b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb3b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb3ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb3bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb3c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb3c3: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb3c8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb3cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb3d4u); f_005caba4();
    /* 007bb3d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb3d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb3d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb3da: je 0x7bb413 */ if (fZ) goto L_007bb413;
L_007bb3dc:; BB(0x007bb3dc);
    /* 007bb3dc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb3e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb3ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb3ed: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb3f3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb3f6: call 0x621bb4 */ r_esp -= 4; W32(r_esp, 0x7bb3fbu); f_00621bb4();
    /* 007bb3fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb3fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb405:; BB(0x007bb405);
    /* 007bb405: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb408: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb40f: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb411: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb412: ret  */ FN_RET(0x007bb39c); r_esp += 4; return;
L_007bb413:; BB(0x007bb413);
    /* 007bb413: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb415: jmp 0x7bb405 */ goto L_007bb405;
}

void f_007bb578(void)
{
    FN_ENTER(0x007bb578);
    /* 007bb578: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb579: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb57b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb57d: push 0x8f640c */ { u32 v = 0x8f640cu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb582: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb589: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb590: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb593: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb596: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb599: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb59c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb59f: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb5a4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb5ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb5b0u); f_005caba4();
    /* 007bb5b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb5b1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb5b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb5b6: je 0x7bb5e9 */ if (fZ) goto L_007bb5e9;
L_007bb5b8:; BB(0x007bb5b8);
    /* 007bb5b8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb5bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb5c6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb5c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb5cc: call 0x618560 */ r_esp -= 4; W32(r_esp, 0x7bb5d1u); f_00618560();
    /* 007bb5d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb5d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb5db:; BB(0x007bb5db);
    /* 007bb5db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb5de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb5e5: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb5e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb5e8: ret  */ FN_RET(0x007bb578); r_esp += 4; return;
L_007bb5e9:; BB(0x007bb5e9);
    /* 007bb5e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb5eb: jmp 0x7bb5db */ goto L_007bb5db;
}

void f_007bb5f0(void)
{
    FN_ENTER(0x007bb5f0);
    /* 007bb5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb5f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb5f5: push 0x8f6434 */ { u32 v = 0x8f6434u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb5fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb601: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb608: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb60b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb60e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bb611: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bb614: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bb617: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb61c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007bb623: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb628u); f_005caba4();
    /* 007bb628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb629: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007bb62c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb62e: je 0x7bb661 */ if (fZ) goto L_007bb661;
L_007bb630:; BB(0x007bb630);
    /* 007bb630: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007bb637: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb63e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb641: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb644: call 0x618638 */ r_esp -= 4; W32(r_esp, 0x7bb649u); f_00618638();
    /* 007bb649: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb64c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007bb653:; BB(0x007bb653);
    /* 007bb653: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb656: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb65d: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb65f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb660: ret  */ FN_RET(0x007bb5f0); r_esp += 4; return;
L_007bb661:; BB(0x007bb661);
    /* 007bb661: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb663: jmp 0x7bb653 */ goto L_007bb653;
}

void f_007bb668(void) /* sub_7BB668 */
{
    FN_ENTER(0x007bb668);
    /* 007bb668: call 0x8059a8 */ r_esp -= 4; W32(r_esp, 0x7bb66du); f_008059a8();
    /* 007bb66d: call 0x816fe0 */ r_esp -= 4; W32(r_esp, 0x7bb672u); f_00816fe0();
    /* 007bb672: call 0x6e96e0 */ r_esp -= 4; W32(r_esp, 0x7bb677u); f_006e96e0();
    /* 007bb677: call 0x5e3c98 */ r_esp -= 4; W32(r_esp, 0x7bb67cu); f_005e3c98();
    /* 007bb67c: call 0x5c7598 */ r_esp -= 4; W32(r_esp, 0x7bb681u); f_005c7598();
    /* 007bb681: call 0x7b39c8 */ r_esp -= 4; W32(r_esp, 0x7bb686u); f_007b39c8();
    /* 007bb686: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 007bb68c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb68e: je 0x7bb69d */ if (fZ) goto L_007bb69d;
L_007bb690:; BB(0x007bb690);
    /* 007bb690: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007bb694: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bb699: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007bb69d:; BB(0x007bb69d);
    /* 007bb69d: call 0x64ab00 */ r_esp -= 4; W32(r_esp, 0x7bb6a2u); f_0064ab00();
    /* 007bb6a2: call 0x6cc6ec */ r_esp -= 4; W32(r_esp, 0x7bb6a7u); f_006cc6ec();
    /* 007bb6a7: mov dword ptr [0x9c9558], 1 */ W32((u32)(0x9c9558u), 0x1u);
    /* 007bb6b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bb6b3: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 007bb6b8: mov dword ptr [0xa8eba4], eax */ W32((u32)(0xa8eba4u), r_eax);
    /* 007bb6bd: mov dword ptr [0xa8f744], eax */ W32((u32)(0xa8f744u), r_eax);
    /* 007bb6c2: mov dword ptr [0xa8fcb4], eax */ W32((u32)(0xa8fcb4u), r_eax);
    /* 007bb6c7: mov dword ptr [0xaafc90], eax */ W32((u32)(0xaafc90u), r_eax);
    /* 007bb6cc: ret  */ FN_RET(0x007bb668); r_esp += 4; return;
}

void f_007bb6d0(void) /* sub_7BB6D0 */
{
    FN_ENTER(0x007bb6d0);
    /* 007bb6d0: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007bb6d5: ret  */ FN_RET(0x007bb6d0); r_esp += 4; return;
}

void f_007bb6d8(void) /* sub_7BB6D8 */
{
    FN_ENTER(0x007bb6d8);
    /* 007bb6d8: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 007bb6dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb6df: je 0x7bb6e7 */ if (fZ) goto L_007bb6e7;
L_007bb6e1:; BB(0x007bb6e1);
    /* 007bb6e1: call 0x7bbba8 */ r_esp -= 4; W32(r_esp, 0x7bb6e6u); f_007bbba8();
    /* 007bb6e6: ret  */ FN_RET(0x007bb6d8); r_esp += 4; return;
L_007bb6e7:; BB(0x007bb6e7);
    /* 007bb6e7: call 0x7bb6f0 */ r_esp -= 4; W32(r_esp, 0x7bb6ecu); f_007bb6f0();
    /* 007bb6ec: ret  */ FN_RET(0x007bb6d8); r_esp += 4; return;
}

void f_007bb6f0(void) /* sub_7BB6F0 */
{
    FN_ENTER(0x007bb6f0);
    /* 007bb6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bb6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 007bb6f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bb6f5: push 0x8f6494 */ { u32 v = 0x8f6494u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb6fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bb700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb701: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bb708: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bb70b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bb70e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007bb711: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007bb714: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007bb717: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x7bb71cu); f_0083adbc();
    /* 007bb71c: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x7bb721u); f_007becd4();
    /* 007bb721: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x7bb726u); f_007bfba0();
    /* 007bb726: call 0x7bbb4c */ r_esp -= 4; W32(r_esp, 0x7bb72bu); f_007bbb4c();
    /* 007bb72b: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x7bb730u); f_005ba748();
    /* 007bb730: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x7bb735u); f_00814168();
    /* 007bb735: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x7bb73au); f_006c38bc();
    /* 007bb73a: call 0x77ca4c */ r_esp -= 4; W32(r_esp, 0x7bb73fu); f_0077ca4c();
    /* 007bb73f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bb744u); f_006dc358();
    /* 007bb744: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x7bb749u); f_007bfedc();
    /* 007bb749: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bb74c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb74e: je 0x7bb755 */ if (fZ) goto L_007bb755;
L_007bb750:; BB(0x007bb750);
    /* 007bb750: call 0x7bbb88 */ r_esp -= 4; W32(r_esp, 0x7bb755u); f_007bbb88();
L_007bb755:; BB(0x007bb755);
    /* 007bb755: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bb75au); f_006dc358();
    /* 007bb75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb75c: je 0x7bb766 */ if (fZ) goto L_007bb766;
L_007bb75e:; BB(0x007bb75e);
    /* 007bb75e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb760: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bb765u); f_007a60dc();
    /* 007bb765: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bb766:; BB(0x007bb766);
    /* 007bb766: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x7bb76bu); f_00415cec();
    /* 007bb76b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bb76e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb76f: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x7bb774u); f_0082c204();
    /* 007bb774: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb775: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb778: jne 0x7bb784 */ if (!fZ) goto L_007bb784;
L_007bb77a:; BB(0x007bb77a);
    /* 007bb77a: mov dword ptr [0xaae6ac], 0 */ W32((u32)(0xaae6acu), 0x0u);
L_007bb784:; BB(0x007bb784);
    /* 007bb784: call 0x7a616c */ r_esp -= 4; W32(r_esp, 0x7bb789u); f_007a616c();
    /* 007bb789: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb78b: jne 0x7bb80f */ if (!fZ) goto L_007bb80f;
L_007bb791:; BB(0x007bb791);
    /* 007bb791: call 0x7a6120 */ r_esp -= 4; W32(r_esp, 0x7bb796u); f_007a6120();
    /* 007bb796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb798: jne 0x7bb7b6 */ if (!fZ) goto L_007bb7b6;
L_007bb79a:; BB(0x007bb79a);
    /* 007bb79a: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bb79fu); f_0080030c();
    /* 007bb79f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb7a2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bb7a5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bb7a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb7ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb7b2: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb7b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb7b5: ret  */ FN_RET(0x007bb6f0); r_esp += 4; return;
L_007bb7b6:; BB(0x007bb7b6);
    /* 007bb7b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb7b8: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 007bb7bb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bb7c0u); f_008193cc();
    /* 007bb7c0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bb7c7: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x7bb7ccu); f_006ffa24();
    /* 007bb7cc: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bb7d1u); f_005badd0();
    /* 007bb7d1: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bb7d6u); f_007bebe8();
    /* 007bb7d6: call 0x7a634c */ r_esp -= 4; W32(r_esp, 0x7bb7dbu); f_007a634c();
    /* 007bb7db: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bb7e0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb7e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bb7e4: jle 0x7bba3e */ if ((fZ||fS!=fO)) goto L_007bba3e;
L_007bb7ea:; BB(0x007bb7ea);
    /* 007bb7ea: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007bb7f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb7f3: je 0x7bb803 */ if (fZ) goto L_007bb803;
L_007bb7f5:; BB(0x007bb7f5);
    /* 007bb7f5: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 007bb7f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb7f9: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bb7feu); f_008172d4();
    /* 007bb7fe: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bb803:; BB(0x007bb803);
    /* 007bb803: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb806: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bb808: jl 0x7bb7ea */ if ((fS!=fO)) goto L_007bb7ea;
L_007bb80a:; BB(0x007bb80a);
    /* 007bb80a: jmp 0x7bba3e */ goto L_007bba3e;
L_007bb80f:; BB(0x007bb80f);
    /* 007bb80f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb811: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 007bb814: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bb819u); f_008193cc();
    /* 007bb819: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb820: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bb825u); f_005badd0();
    /* 007bb825: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bb82au); f_007bebe8();
    /* 007bb82a: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bb82fu); f_0080030c();
    /* 007bb82f: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bb834u); f_0080030c();
    /* 007bb834: call 0x694cdc */ r_esp -= 4; W32(r_esp, 0x7bb839u); f_00694cdc();
    /* 007bb839: call 0x694d44 */ r_esp -= 4; W32(r_esp, 0x7bb83eu); f_00694d44();
    /* 007bb83e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bb843: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb845: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bb847: jle 0x7bb869 */ if ((fZ||fS!=fO)) goto L_007bb869;
L_007bb849:; BB(0x007bb849);
    /* 007bb849: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007bb850: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb852: je 0x7bb862 */ if (fZ) goto L_007bb862;
L_007bb854:; BB(0x007bb854);
    /* 007bb854: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 007bb857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb858: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bb85du); f_008172d4();
    /* 007bb85d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bb862:; BB(0x007bb862);
    /* 007bb862: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb865: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bb867: jl 0x7bb849 */ if ((fS!=fO)) goto L_007bb849;
L_007bb869:; BB(0x007bb869);
    /* 007bb869: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb86e: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bb873u); f_00818560();
    /* 007bb873: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bb878: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bb87du); f_008155a8();
    /* 007bb87d: call 0x80c3c4 */ r_esp -= 4; W32(r_esp, 0x7bb882u); f_0080c3c4();
    /* 007bb882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb884: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x7bb889u); f_0080c79c();
    /* 007bb889: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb88a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bb88fu); f_0061cdb0();
    /* 007bb88f: call 0x7bb668 */ r_esp -= 4; W32(r_esp, 0x7bb894u); f_007bb668();
    /* 007bb894: call 0x80cf44 */ r_esp -= 4; W32(r_esp, 0x7bb899u); f_0080cf44();
    /* 007bb899: call 0x810550 */ r_esp -= 4; W32(r_esp, 0x7bb89eu); f_00810550();
    /* 007bb89e: call 0x6bd514 */ r_esp -= 4; W32(r_esp, 0x7bb8a3u); f_006bd514();
    /* 007bb8a3: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bb8a8u); f_007a7c90();
    /* 007bb8a8: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bb8adu); f_008013bc();
    /* 007bb8ad: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bb8b2u); f_006dc358();
    /* 007bb8b2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb8b5: je 0x7bba34 */ if (fZ) goto L_007bba34;
L_007bb8bb:; BB(0x007bb8bb);
    /* 007bb8bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb8bd: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bb8c2u); f_00417a9c();
    /* 007bb8c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb8c3: call 0x6bbe4c */ r_esp -= 4; W32(r_esp, 0x7bb8c8u); f_006bbe4c();
    /* 007bb8c8: call 0x6ba3e8 */ r_esp -= 4; W32(r_esp, 0x7bb8cdu); f_006ba3e8();
    /* 007bb8cd: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 007bb8d4: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb8d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb8deu); f_005caba4();
    /* 007bb8de: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bb8e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bb8e4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007bb8e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb8e9: je 0x7bba2a */ if (fZ) goto L_007bba2a;
L_007bb8ef:; BB(0x007bb8ef);
    /* 007bb8ef: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 007bb8f6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bb8fd: mov ecx, eax */ r_ecx = r_eax;
    /* 007bb8ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb901: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb907: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bb90cu); f_006bc800();
    /* 007bb90c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_007bb913:; BB(0x007bb913);
    /* 007bb913: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb91a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bb91d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007bb91f: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x7bb922u); call_ind(t); }
    /* 007bb922: mov dword ptr [0xa95624], 1 */ W32((u32)(0xa95624u), 0x1u);
    /* 007bb92c: call 0x7ba3b4 */ r_esp -= 4; W32(r_esp, 0x7bb931u); f_007ba3b4();
    /* 007bb931: call 0x6b9c0c */ r_esp -= 4; W32(r_esp, 0x7bb936u); f_006b9c0c();
    /* 007bb936: call 0x6cf5c8 */ r_esp -= 4; W32(r_esp, 0x7bb93bu); f_006cf5c8();
    /* 007bb93b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bb940u); f_006dc358();
    /* 007bb940: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb943: je 0x7bba1b */ if (fZ) goto L_007bba1b;
L_007bb949:; BB(0x007bb949);
    /* 007bb949: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 007bb953: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bb955: mov eax, 1 */ r_eax = 0x1u;
    /* 007bb95a: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bb95f: mov dword ptr [0xac9d50], edx */ W32((u32)(0xac9d50u), r_edx);
    /* 007bb965: mov dword ptr [0xac9d54], eax */ W32((u32)(0xac9d54u), r_eax);
    /* 007bb96a: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 007bb96f: mov dword ptr [0xac9d5c], edx */ W32((u32)(0xac9d5cu), r_edx);
    /* 007bb975: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 007bb97b: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 007bb981: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 007bb987: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 007bb98d: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bb992u); f_00815730();
L_007bb992:; BB(0x007bb992);
    /* 007bb992: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bb997u); f_00417c10();
    /* 007bb997: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb99c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bb9a1u); f_0061cdb0();
    /* 007bb9a1: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb9a6: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bb9abu); f_0081745c();
    /* 007bb9ab: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb9b0: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bb9b5u); f_00818f80();
    /* 007bb9b5: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bb9ba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007bb9bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bb9be: jle 0x7bb9fd */ if ((fZ||fS!=fO)) goto L_007bb9fd;
L_007bb9c0:; BB(0x007bb9c0);
    /* 007bb9c0: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 007bb9c7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb9c9: je 0x7bb9f6 */ if (fZ) goto L_007bb9f6;
L_007bb9cb:; BB(0x007bb9cb);
    /* 007bb9cb: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb9d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bb9d3: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bb9d8u); f_008172d4();
    /* 007bb9d8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007bb9da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bb9dc: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7bb9dfu); call_ind(t); }
    /* 007bb9df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bb9e1: call 0x68f880 */ r_esp -= 4; W32(r_esp, 0x7bb9e6u); f_0068f880();
    /* 007bb9e6: push 0x68fd68 */ { u32 v = 0x68fd68u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb9eb: call 0x6926f4 */ r_esp -= 4; W32(r_esp, 0x7bb9f0u); f_006926f4();
    /* 007bb9f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb9f1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bb9f6:; BB(0x007bb9f6);
    /* 007bb9f6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bb9f9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bb9fb: jl 0x7bb9c0 */ if ((fS!=fO)) goto L_007bb9c0;
L_007bb9fd:; BB(0x007bb9fd);
    /* 007bb9fd: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bba02u); f_006bc920();
    /* 007bba02: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bba09: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 007bba0c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bba11u); f_008171e8();
    /* 007bba11: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bba16u); f_007a6154();
    /* 007bba16: jmp 0x7bb791 */ goto L_007bb791;
L_007bba1b:; BB(0x007bba1b);
    /* 007bba1b: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bba20: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bba25u); f_00815730();
    /* 007bba25: jmp 0x7bb992 */ goto L_007bb992;
L_007bba2a:; BB(0x007bba2a);
    /* 007bba2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bba2c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bba2f: jmp 0x7bb913 */ goto L_007bb913;
L_007bba34:; BB(0x007bba34);
    /* 007bba34: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x7bba39u); f_0078b1c4();
    /* 007bba39: jmp 0x7bb8bb */ goto L_007bb8bb;
L_007bba3e:; BB(0x007bba3e);
    /* 007bba3e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bba43: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bba48u); f_00818560();
    /* 007bba48: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bba4d: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bba52u); f_008155a8();
    /* 007bba52: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bba57u); f_0061cdb0();
    /* 007bba57: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bba5cu); f_007a7c90();
    /* 007bba5c: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bba61u); f_008013bc();
    /* 007bba61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bba63: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bba68u); f_00417a9c();
    /* 007bba68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bba69: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bba6f: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bba74: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bba79u); f_0078b0e4();
    /* 007bba79: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bba7e: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bba83u); f_00815730();
    /* 007bba83: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bba89: call 0x64ab0c */ r_esp -= 4; W32(r_esp, 0x7bba8eu); f_0064ab0c();
    /* 007bba8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bba8f: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bba94u); f_00417c10();
    /* 007bba94: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bba99: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bba9eu); f_0061cdb0();
    /* 007bba9e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbaa3: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bbaa8u); f_0081745c();
    /* 007bbaa8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbaad: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bbab2u); f_00818f80();
    /* 007bbab2: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bbab7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007bbab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bbabb: jle 0x7bbae8 */ if ((fZ||fS!=fO)) goto L_007bbae8;
L_007bbabd:; BB(0x007bbabd);
    /* 007bbabd: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 007bbac4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbac6: je 0x7bbae1 */ if (fZ) goto L_007bbae1;
L_007bbac8:; BB(0x007bbac8);
    /* 007bbac8: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbace: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbad0: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bbad5u); f_008172d4();
    /* 007bbad5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007bbad7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbad9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7bbadcu); call_ind(t); }
    /* 007bbadc: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bbae1:; BB(0x007bbae1);
    /* 007bbae1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bbae4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bbae6: jl 0x7bbabd */ if ((fS!=fO)) goto L_007bbabd;
L_007bbae8:; BB(0x007bbae8);
    /* 007bbae8: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bbaedu); f_006bc920();
    /* 007bbaed: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 007bbaf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbaf4: je 0x7bbb33 */ if (fZ) goto L_007bbb33;
L_007bbaf6:; BB(0x007bbaf6);
    /* 007bbaf6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007bbafd: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbb02: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bbb07u); f_005caba4();
    /* 007bbb07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbb08: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007bbb0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbb0d: je 0x7bbb33 */ if (fZ) goto L_007bbb33;
L_007bbb0f:; BB(0x007bbb0f);
    /* 007bbb0f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007bbb16: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007bbb1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbb1f: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbb25: mov ecx, eax */ r_ecx = r_eax;
    /* 007bbb27: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bbb2cu); f_006bc800();
    /* 007bbb2c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007bbb33:; BB(0x007bbb33);
    /* 007bbb33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bbb3a: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 007bbb3d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bbb42u); f_008171e8();
    /* 007bbb42: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bbb47u); f_007a6108();
    /* 007bbb47: jmp 0x7bb79a */ goto L_007bb79a;
}

void f_007bb7d5(void)
{
    FN_ENTER(0x007bb7d5);
    goto L_007bb7d5;
L_007bb784:; BB(0x007bb784);
    /* 007bb784: call 0x7a616c */ r_esp -= 4; W32(r_esp, 0x7bb789u); f_007a616c();
    /* 007bb789: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb78b: jne 0x7bb80f */ if (!fZ) goto L_007bb80f;
L_007bb791:; BB(0x007bb791);
    /* 007bb791: call 0x7a6120 */ r_esp -= 4; W32(r_esp, 0x7bb796u); f_007a6120();
    /* 007bb796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb798: jne 0x7bb7b6 */ if (!fZ) goto L_007bb7b6;
L_007bb79a:; BB(0x007bb79a);
    /* 007bb79a: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bb79fu); f_0080030c();
    /* 007bb79f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bb7a2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bb7a5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bb7a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bb7ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bb7b2: mov esp, ebp */ r_esp = r_ebp;
    /* 007bb7b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bb7b5: ret  */ FN_RET(0x007bb7d5); r_esp += 4; return;
L_007bb7b6:; BB(0x007bb7b6);
    /* 007bb7b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb7b8: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 007bb7bb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bb7c0u); f_008193cc();
    /* 007bb7c0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bb7c7: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x7bb7ccu); f_006ffa24();
    /* 007bb7cc: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bb7d1u); f_005badd0();
    /* 007bb7d1: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bb7d6u); f_007bebe8();
L_007bb7d5:; BB(0x007bb7d5);
    /* 007bb7d5: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 007bb7d6: call 0x7a634c */ r_esp -= 4; W32(r_esp, 0x7bb7dbu); f_007a634c();
    /* 007bb7d7: jno 0x7bb784 */ if (!fO) goto L_007bb784;
    /* 007bb7db: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bb7e0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb7e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bb7e4: jle 0x7bba3e */ if ((fZ||fS!=fO)) goto L_007bba3e;
L_007bb7ea:; BB(0x007bb7ea);
    /* 007bb7ea: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007bb7f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb7f3: je 0x7bb803 */ if (fZ) goto L_007bb803;
L_007bb7f5:; BB(0x007bb7f5);
    /* 007bb7f5: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 007bb7f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb7f9: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bb7feu); f_008172d4();
    /* 007bb7fe: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bb803:; BB(0x007bb803);
    /* 007bb803: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb806: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bb808: jl 0x7bb7ea */ if ((fS!=fO)) goto L_007bb7ea;
L_007bb80a:; BB(0x007bb80a);
    /* 007bb80a: jmp 0x7bba3e */ goto L_007bba3e;
L_007bb80f:; BB(0x007bb80f);
    /* 007bb80f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb811: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 007bb814: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bb819u); f_008193cc();
    /* 007bb819: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb820: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bb825u); f_005badd0();
    /* 007bb825: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bb82au); f_007bebe8();
    /* 007bb82a: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bb82fu); f_0080030c();
    /* 007bb82f: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bb834u); f_0080030c();
    /* 007bb834: call 0x694cdc */ r_esp -= 4; W32(r_esp, 0x7bb839u); f_00694cdc();
    /* 007bb839: call 0x694d44 */ r_esp -= 4; W32(r_esp, 0x7bb83eu); f_00694d44();
    /* 007bb83e: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bb843: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb845: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bb847: jle 0x7bb869 */ if ((fZ||fS!=fO)) goto L_007bb869;
L_007bb849:; BB(0x007bb849);
    /* 007bb849: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007bb850: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb852: je 0x7bb862 */ if (fZ) goto L_007bb862;
L_007bb854:; BB(0x007bb854);
    /* 007bb854: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 007bb857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bb858: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bb85du); f_008172d4();
    /* 007bb85d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bb862:; BB(0x007bb862);
    /* 007bb862: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bb865: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bb867: jl 0x7bb849 */ if ((fS!=fO)) goto L_007bb849;
L_007bb869:; BB(0x007bb869);
    /* 007bb869: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb86e: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bb873u); f_00818560();
    /* 007bb873: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bb878: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bb87du); f_008155a8();
    /* 007bb87d: call 0x80c3c4 */ r_esp -= 4; W32(r_esp, 0x7bb882u); f_0080c3c4();
    /* 007bb882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb884: call 0x80c79c */ r_esp -= 4; W32(r_esp, 0x7bb889u); f_0080c79c();
    /* 007bb889: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb88a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bb88fu); f_0061cdb0();
    /* 007bb88f: call 0x7bb668 */ r_esp -= 4; W32(r_esp, 0x7bb894u); f_007bb668();
    /* 007bb894: call 0x80cf44 */ r_esp -= 4; W32(r_esp, 0x7bb899u); f_0080cf44();
    /* 007bb899: call 0x810550 */ r_esp -= 4; W32(r_esp, 0x7bb89eu); f_00810550();
    /* 007bb89e: call 0x6bd514 */ r_esp -= 4; W32(r_esp, 0x7bb8a3u); f_006bd514();
    /* 007bb8a3: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bb8a8u); f_007a7c90();
    /* 007bb8a8: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bb8adu); f_008013bc();
    /* 007bb8ad: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bb8b2u); f_006dc358();
    /* 007bb8b2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb8b5: je 0x7bba34 */ if (fZ) goto L_007bba34;
L_007bb8bb:; BB(0x007bb8bb);
    /* 007bb8bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb8bd: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bb8c2u); f_00417a9c();
    /* 007bb8c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb8c3: call 0x6bbe4c */ r_esp -= 4; W32(r_esp, 0x7bb8c8u); f_006bbe4c();
    /* 007bb8c8: call 0x6ba3e8 */ r_esp -= 4; W32(r_esp, 0x7bb8cdu); f_006ba3e8();
    /* 007bb8cd: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 007bb8d4: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb8d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bb8deu); f_005caba4();
    /* 007bb8de: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bb8e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bb8e4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007bb8e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb8e9: je 0x7bba2a */ if (fZ) goto L_007bba2a;
L_007bb8ef:; BB(0x007bb8ef);
    /* 007bb8ef: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 007bb8f6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bb8fd: mov ecx, eax */ r_ecx = r_eax;
    /* 007bb8ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb901: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb907: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bb90cu); f_006bc800();
    /* 007bb90c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_007bb913:; BB(0x007bb913);
    /* 007bb913: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bb91a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bb91d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007bb91f: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x7bb922u); call_ind(t); }
    /* 007bb922: mov dword ptr [0xa95624], 1 */ W32((u32)(0xa95624u), 0x1u);
    /* 007bb92c: call 0x7ba3b4 */ r_esp -= 4; W32(r_esp, 0x7bb931u); f_007ba3b4();
    /* 007bb931: call 0x6b9c0c */ r_esp -= 4; W32(r_esp, 0x7bb936u); f_006b9c0c();
    /* 007bb936: call 0x6cf5c8 */ r_esp -= 4; W32(r_esp, 0x7bb93bu); f_006cf5c8();
    /* 007bb93b: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bb940u); f_006dc358();
    /* 007bb940: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb943: je 0x7bba1b */ if (fZ) goto L_007bba1b;
L_007bb949:; BB(0x007bb949);
    /* 007bb949: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 007bb953: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bb955: mov eax, 1 */ r_eax = 0x1u;
    /* 007bb95a: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bb95f: mov dword ptr [0xac9d50], edx */ W32((u32)(0xac9d50u), r_edx);
    /* 007bb965: mov dword ptr [0xac9d54], eax */ W32((u32)(0xac9d54u), r_eax);
    /* 007bb96a: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 007bb96f: mov dword ptr [0xac9d5c], edx */ W32((u32)(0xac9d5cu), r_edx);
    /* 007bb975: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 007bb97b: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 007bb981: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 007bb987: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 007bb98d: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bb992u); f_00815730();
L_007bb992:; BB(0x007bb992);
    /* 007bb992: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bb997u); f_00417c10();
    /* 007bb997: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb99c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bb9a1u); f_0061cdb0();
    /* 007bb9a1: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb9a6: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bb9abu); f_0081745c();
    /* 007bb9ab: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bb9b0: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bb9b5u); f_00818f80();
    /* 007bb9b5: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bb9ba: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007bb9bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bb9be: jle 0x7bb9fd */ if ((fZ||fS!=fO)) goto L_007bb9fd;
L_007bb9c0:; BB(0x007bb9c0);
    /* 007bb9c0: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 007bb9c7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bb9c9: je 0x7bb9f6 */ if (fZ) goto L_007bb9f6;
L_007bb9cb:; BB(0x007bb9cb);
    /* 007bb9cb: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bb9d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bb9d3: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bb9d8u); f_008172d4();
    /* 007bb9d8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007bb9da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bb9dc: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7bb9dfu); call_ind(t); }
    /* 007bb9df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bb9e1: call 0x68f880 */ r_esp -= 4; W32(r_esp, 0x7bb9e6u); f_0068f880();
    /* 007bb9e6: push 0x68fd68 */ { u32 v = 0x68fd68u; r_esp -= 4; W32(r_esp, v); }
    /* 007bb9eb: call 0x6926f4 */ r_esp -= 4; W32(r_esp, 0x7bb9f0u); f_006926f4();
    /* 007bb9f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bb9f1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bb9f6:; BB(0x007bb9f6);
    /* 007bb9f6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bb9f9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bb9fb: jl 0x7bb9c0 */ if ((fS!=fO)) goto L_007bb9c0;
L_007bb9fd:; BB(0x007bb9fd);
    /* 007bb9fd: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bba02u); f_006bc920();
    /* 007bba02: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bba09: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 007bba0c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bba11u); f_008171e8();
    /* 007bba11: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bba16u); f_007a6154();
    /* 007bba16: jmp 0x7bb791 */ goto L_007bb791;
L_007bba1b:; BB(0x007bba1b);
    /* 007bba1b: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bba20: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bba25u); f_00815730();
    /* 007bba25: jmp 0x7bb992 */ goto L_007bb992;
L_007bba2a:; BB(0x007bba2a);
    /* 007bba2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bba2c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bba2f: jmp 0x7bb913 */ goto L_007bb913;
L_007bba34:; BB(0x007bba34);
    /* 007bba34: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x7bba39u); f_0078b1c4();
    /* 007bba39: jmp 0x7bb8bb */ goto L_007bb8bb;
L_007bba3e:; BB(0x007bba3e);
    /* 007bba3e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bba43: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bba48u); f_00818560();
    /* 007bba48: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bba4d: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bba52u); f_008155a8();
    /* 007bba52: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bba57u); f_0061cdb0();
    /* 007bba57: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bba5cu); f_007a7c90();
    /* 007bba5c: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bba61u); f_008013bc();
    /* 007bba61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bba63: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bba68u); f_00417a9c();
    /* 007bba68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bba69: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bba6f: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bba74: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bba79u); f_0078b0e4();
    /* 007bba79: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bba7e: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bba83u); f_00815730();
    /* 007bba83: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bba89: call 0x64ab0c */ r_esp -= 4; W32(r_esp, 0x7bba8eu); f_0064ab0c();
    /* 007bba8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bba8f: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bba94u); f_00417c10();
    /* 007bba94: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bba99: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bba9eu); f_0061cdb0();
    /* 007bba9e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbaa3: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bbaa8u); f_0081745c();
    /* 007bbaa8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbaad: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bbab2u); f_00818f80();
    /* 007bbab2: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bbab7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007bbab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bbabb: jle 0x7bbae8 */ if ((fZ||fS!=fO)) goto L_007bbae8;
L_007bbabd:; BB(0x007bbabd);
    /* 007bbabd: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 007bbac4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbac6: je 0x7bbae1 */ if (fZ) goto L_007bbae1;
L_007bbac8:; BB(0x007bbac8);
    /* 007bbac8: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbace: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbad0: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bbad5u); f_008172d4();
    /* 007bbad5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007bbad7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbad9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7bbadcu); call_ind(t); }
    /* 007bbadc: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bbae1:; BB(0x007bbae1);
    /* 007bbae1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bbae4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bbae6: jl 0x7bbabd */ if ((fS!=fO)) goto L_007bbabd;
L_007bbae8:; BB(0x007bbae8);
    /* 007bbae8: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bbaedu); f_006bc920();
    /* 007bbaed: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 007bbaf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbaf4: je 0x7bbb33 */ if (fZ) goto L_007bbb33;
L_007bbaf6:; BB(0x007bbaf6);
    /* 007bbaf6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007bbafd: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbb02: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bbb07u); f_005caba4();
    /* 007bbb07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbb08: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007bbb0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbb0d: je 0x7bbb33 */ if (fZ) goto L_007bbb33;
L_007bbb0f:; BB(0x007bbb0f);
    /* 007bbb0f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007bbb16: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007bbb1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbb1f: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbb25: mov ecx, eax */ r_ecx = r_eax;
    /* 007bbb27: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bbb2cu); f_006bc800();
    /* 007bbb2c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007bbb33:; BB(0x007bbb33);
    /* 007bbb33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bbb3a: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 007bbb3d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bbb42u); f_008171e8();
    /* 007bbb42: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bbb47u); f_007a6108();
    /* 007bbb47: jmp 0x7bb79a */ goto L_007bb79a;
}

void f_007bbb4c(void) /* sub_7BBB4C */
{
    FN_ENTER(0x007bbb4c);
    /* 007bbb4c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbb51: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bbb56u); f_0061cdb0();
    /* 007bbb56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bbb58: mov word ptr [0xa48a38], ax */ W16((u32)(0xa48a38u), (u16)r_eax);
    /* 007bbb5e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbb63: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bbb68u); f_0081745c();
    /* 007bbb68: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbb6d: call 0x817d74 */ r_esp -= 4; W32(r_esp, 0x7bbb72u); f_00817d74();
    /* 007bbb72: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbb77: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x7bbb7cu); f_00817604();
    /* 007bbb7c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbb81: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bbb86u); f_00818f80();
    /* 007bbb86: ret  */ FN_RET(0x007bbb4c); r_esp += 4; return;
}

void f_007bbb88(void)
{
    FN_ENTER(0x007bbb88);
    /* 007bbb88: call 0x7c04ec */ r_esp -= 4; W32(r_esp, 0x7bbb8du); f_007c04ec();
    /* 007bbb8d: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x7bbb92u); f_007a6174();
    /* 007bbb92: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bbb97u); f_007a6108();
    /* 007bbb97: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bbb9cu); f_007a6154();
    /* 007bbb9c: mov dword ptr [0xa95624], 0 */ W32((u32)(0xa95624u), 0x0u);
    /* 007bbba6: ret  */ FN_RET(0x007bbb88); r_esp += 4; return;
}

void f_007bbba8(void) /* sub_7BBBA8 */
{
    FN_ENTER(0x007bbba8);
    /* 007bbba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bbba9: mov ebp, esp */ r_ebp = r_esp;
    /* 007bbbab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bbbad: push 0x8f64da */ { u32 v = 0x8f64dau; r_esp -= 4; W32(r_esp, v); }
    /* 007bbbb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bbbb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bbbb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bbbc0: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bbbc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bbbc6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bbbc9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bbbcc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bbbcf: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x7bbbd4u); f_0083adbc();
    /* 007bbbd4: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x7bbbd9u); f_007becd4();
    /* 007bbbd9: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x7bbbdeu); f_007bfba0();
    /* 007bbbde: call 0x7bbb4c */ r_esp -= 4; W32(r_esp, 0x7bbbe3u); f_007bbb4c();
    /* 007bbbe3: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x7bbbe8u); f_005ba748();
    /* 007bbbe8: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x7bbbedu); f_00814168();
    /* 007bbbed: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x7bbbf2u); f_006c38bc();
    /* 007bbbf2: call 0x77ca4c */ r_esp -= 4; W32(r_esp, 0x7bbbf7u); f_0077ca4c();
    /* 007bbbf7: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bbbfcu); f_006dc358();
    /* 007bbbfc: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x7bbc01u); f_007bfedc();
    /* 007bbc01: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bbc04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbc06: je 0x7bbc0d */ if (fZ) goto L_007bbc0d;
L_007bbc08:; BB(0x007bbc08);
    /* 007bbc08: call 0x7bbf8c */ r_esp -= 4; W32(r_esp, 0x7bbc0du); f_007bbf8c();
L_007bbc0d:; BB(0x007bbc0d);
    /* 007bbc0d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bbc12u); f_006dc358();
    /* 007bbc12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbc14: je 0x7bbc1e */ if (fZ) goto L_007bbc1e;
L_007bbc16:; BB(0x007bbc16);
    /* 007bbc16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbc18: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bbc1du); f_007a60dc();
    /* 007bbc1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bbc1e:; BB(0x007bbc1e);
    /* 007bbc1e: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x7bbc23u); f_00415cec();
    /* 007bbc23: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bbc26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bbc27: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x7bbc2cu); f_0082c204();
    /* 007bbc2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbc2d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbc30: jne 0x7bbc3c */ if (!fZ) goto L_007bbc3c;
L_007bbc32:; BB(0x007bbc32);
    /* 007bbc32: mov dword ptr [0xaae6ac], 0 */ W32((u32)(0xaae6acu), 0x0u);
L_007bbc3c:; BB(0x007bbc3c);
    /* 007bbc3c: call 0x7a6120 */ r_esp -= 4; W32(r_esp, 0x7bbc41u); f_007a6120();
    /* 007bbc41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbc43: jne 0x7bbccc */ if (!fZ) goto L_007bbccc;
L_007bbc49:; BB(0x007bbc49);
    /* 007bbc49: call 0x7a616c */ r_esp -= 4; W32(r_esp, 0x7bbc4eu); f_007a616c();
    /* 007bbc4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbc50: jne 0x7bbc6e */ if (!fZ) goto L_007bbc6e;
L_007bbc52:; BB(0x007bbc52);
    /* 007bbc52: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bbc57u); f_0080030c();
    /* 007bbc57: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bbc5a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bbc5d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bbc60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bbc63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bbc6a: mov esp, ebp */ r_esp = r_ebp;
    /* 007bbc6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bbc6d: ret  */ FN_RET(0x007bbba8); r_esp += 4; return;
L_007bbc6e:; BB(0x007bbc6e);
    /* 007bbc6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbc70: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 007bbc73: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bbc78u); f_008193cc();
    /* 007bbc78: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bbc7f: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bbc84u); f_005badd0();
    /* 007bbc84: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bbc89u); f_007bebe8();
    /* 007bbc89: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bbc8eu); f_0080030c();
    /* 007bbc8e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bbc93u); f_0080030c();
    /* 007bbc93: call 0x7bc49c */ r_esp -= 4; W32(r_esp, 0x7bbc98u); f_007bc49c();
    /* 007bbc98: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bbc9d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007bbc9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bbca1: jle 0x7bbe2a */ if ((fZ||fS!=fO)) goto L_007bbe2a;
L_007bbca7:; BB(0x007bbca7);
    /* 007bbca7: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007bbcae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbcb0: je 0x7bbcc0 */ if (fZ) goto L_007bbcc0;
L_007bbcb2:; BB(0x007bbcb2);
    /* 007bbcb2: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 007bbcb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bbcb6: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bbcbbu); f_008172d4();
    /* 007bbcbb: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bbcc0:; BB(0x007bbcc0);
    /* 007bbcc0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bbcc3: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bbcc5: jl 0x7bbca7 */ if ((fS!=fO)) goto L_007bbca7;
L_007bbcc7:; BB(0x007bbcc7);
    /* 007bbcc7: jmp 0x7bbe2a */ goto L_007bbe2a;
L_007bbccc:; BB(0x007bbccc);
    /* 007bbccc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbcce: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 007bbcd1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bbcd6u); f_008193cc();
    /* 007bbcd6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bbcdd: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x7bbce2u); f_006ffa24();
    /* 007bbce2: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bbce7u); f_005badd0();
    /* 007bbce7: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bbcecu); f_007bebe8();
    /* 007bbcec: call 0x7a634c */ r_esp -= 4; W32(r_esp, 0x7bbcf1u); f_007a634c();
    /* 007bbcf1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bbcf6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007bbcf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bbcfa: jle 0x7bbd1c */ if ((fZ||fS!=fO)) goto L_007bbd1c;
L_007bbcfc:; BB(0x007bbcfc);
    /* 007bbcfc: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 007bbd03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbd05: je 0x7bbd15 */ if (fZ) goto L_007bbd15;
L_007bbd07:; BB(0x007bbd07);
    /* 007bbd07: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 007bbd0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bbd0b: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bbd10u); f_008172d4();
    /* 007bbd10: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bbd15:; BB(0x007bbd15);
    /* 007bbd15: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bbd18: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bbd1a: jl 0x7bbcfc */ if ((fS!=fO)) goto L_007bbcfc;
L_007bbd1c:; BB(0x007bbd1c);
    /* 007bbd1c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbd21: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bbd26u); f_00818560();
    /* 007bbd26: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bbd2b: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bbd30u); f_008155a8();
    /* 007bbd30: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bbd35u); f_0061cdb0();
    /* 007bbd35: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bbd3au); f_007a7c90();
    /* 007bbd3a: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bbd3fu); f_008013bc();
    /* 007bbd3f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbd41: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bbd46u); f_00417a9c();
    /* 007bbd46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbd47: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbd4d: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bbd52: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bbd57u); f_0078b0e4();
    /* 007bbd57: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bbd5c: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bbd61u); f_00815730();
    /* 007bbd61: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbd67: call 0x64ab0c */ r_esp -= 4; W32(r_esp, 0x7bbd6cu); f_0064ab0c();
    /* 007bbd6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbd6d: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bbd72u); f_00417c10();
    /* 007bbd72: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbd77: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bbd7cu); f_0061cdb0();
    /* 007bbd7c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbd81: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bbd86u); f_0081745c();
    /* 007bbd86: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbd8b: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bbd90u); f_00818f80();
    /* 007bbd90: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bbd95: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007bbd97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bbd99: jle 0x7bbdc6 */ if ((fZ||fS!=fO)) goto L_007bbdc6;
L_007bbd9b:; BB(0x007bbd9b);
    /* 007bbd9b: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 007bbda2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbda4: je 0x7bbdbf */ if (fZ) goto L_007bbdbf;
L_007bbda6:; BB(0x007bbda6);
    /* 007bbda6: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbdac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbdae: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bbdb3u); f_008172d4();
    /* 007bbdb3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007bbdb5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbdb7: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7bbdbau); call_ind(t); }
    /* 007bbdba: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bbdbf:; BB(0x007bbdbf);
    /* 007bbdbf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bbdc2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bbdc4: jl 0x7bbd9b */ if ((fS!=fO)) goto L_007bbd9b;
L_007bbdc6:; BB(0x007bbdc6);
    /* 007bbdc6: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bbdcbu); f_006bc920();
    /* 007bbdcb: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 007bbdd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbdd2: je 0x7bbe11 */ if (fZ) goto L_007bbe11;
L_007bbdd4:; BB(0x007bbdd4);
    /* 007bbdd4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 007bbddb: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbde0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bbde5u); f_005caba4();
    /* 007bbde5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbde6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007bbde9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbdeb: je 0x7bbe11 */ if (fZ) goto L_007bbe11;
L_007bbded:; BB(0x007bbded);
    /* 007bbded: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 007bbdf4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bbdfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbdfd: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbe03: mov ecx, eax */ r_ecx = r_eax;
    /* 007bbe05: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bbe0au); f_006bc800();
    /* 007bbe0a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_007bbe11:; BB(0x007bbe11);
    /* 007bbe11: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bbe18: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 007bbe1b: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bbe20u); f_008171e8();
    /* 007bbe20: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bbe25u); f_007a6108();
    /* 007bbe25: jmp 0x7bbc49 */ goto L_007bbc49;
L_007bbe2a:; BB(0x007bbe2a);
    /* 007bbe2a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bbe2fu); f_006dc358();
    /* 007bbe2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbe32: je 0x7bbf82 */ if (fZ) goto L_007bbf82;
L_007bbe38:; BB(0x007bbe38);
    /* 007bbe38: call 0x7bb668 */ r_esp -= 4; W32(r_esp, 0x7bbe3du); f_007bb668();
    /* 007bbe3d: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbe42: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bbe47u); f_00818560();
    /* 007bbe47: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bbe4c: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bbe51u); f_008155a8();
    /* 007bbe51: call 0x80c3d0 */ r_esp -= 4; W32(r_esp, 0x7bbe56u); f_0080c3d0();
    /* 007bbe56: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bbe5bu); f_0061cdb0();
    /* 007bbe5b: call 0x80cf44 */ r_esp -= 4; W32(r_esp, 0x7bbe60u); f_0080cf44();
    /* 007bbe60: call 0x810550 */ r_esp -= 4; W32(r_esp, 0x7bbe65u); f_00810550();
    /* 007bbe65: call 0x80bf68 */ r_esp -= 4; W32(r_esp, 0x7bbe6au); f_0080bf68();
    /* 007bbe6a: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bbe6fu); f_007a7c90();
    /* 007bbe6f: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bbe74u); f_008013bc();
    /* 007bbe74: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x7bbe79u); f_005ba174();
    /* 007bbe79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbe7b: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bbe80u); f_00417a9c();
    /* 007bbe80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbe81: call 0x7ba3b4 */ r_esp -= 4; W32(r_esp, 0x7bbe86u); f_007ba3b4();
    /* 007bbe86: call 0x80fab8 */ r_esp -= 4; W32(r_esp, 0x7bbe8bu); f_0080fab8();
    /* 007bbe8b: call 0x80d578 */ r_esp -= 4; W32(r_esp, 0x7bbe90u); f_0080d578();
    /* 007bbe90: call 0x77b1a0 */ r_esp -= 4; W32(r_esp, 0x7bbe95u); f_0077b1a0();
    /* 007bbe95: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 007bbe9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bbea1: mov eax, 1 */ r_eax = 0x1u;
    /* 007bbea6: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bbeab: mov dword ptr [0xac9d50], edx */ W32((u32)(0xac9d50u), r_edx);
    /* 007bbeb1: mov dword ptr [0xac9d54], eax */ W32((u32)(0xac9d54u), r_eax);
    /* 007bbeb6: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 007bbebb: mov dword ptr [0xac9d5c], edx */ W32((u32)(0xac9d5cu), r_edx);
    /* 007bbec1: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 007bbec7: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 007bbecd: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 007bbed3: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 007bbed9: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bbedeu); f_00815730();
    /* 007bbede: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bbee3u); f_00417c10();
    /* 007bbee3: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x7bbee8u); f_005ba1f0();
    /* 007bbee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbeea: je 0x7bbef6 */ if (fZ) goto L_007bbef6;
L_007bbeec:; BB(0x007bbeec);
    /* 007bbeec: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7bbef1u); f_005ba204();
    /* 007bbef1: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bbef6u); f_005ba1e0();
L_007bbef6:; BB(0x007bbef6);
    /* 007bbef6: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bbefbu); f_005ba1e0();
    /* 007bbefb: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbf00: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bbf05u); f_0061cdb0();
    /* 007bbf05: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbf0a: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bbf0fu); f_0081745c();
    /* 007bbf0f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbf14: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bbf19u); f_00818f80();
    /* 007bbf19: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 007bbf1e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007bbf20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007bbf22: jle 0x7bbf61 */ if ((fZ||fS!=fO)) goto L_007bbf61;
L_007bbf24:; BB(0x007bbf24);
    /* 007bbf24: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 007bbf2b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bbf2d: je 0x7bbf5a */ if (fZ) goto L_007bbf5a;
L_007bbf2f:; BB(0x007bbf2f);
    /* 007bbf2f: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bbf35: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbf37: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bbf3cu); f_008172d4();
    /* 007bbf3c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007bbf3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbf40: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7bbf43u); call_ind(t); }
    /* 007bbf43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bbf45: call 0x68f880 */ r_esp -= 4; W32(r_esp, 0x7bbf4au); f_0068f880();
    /* 007bbf4a: push 0x68fd68 */ { u32 v = 0x68fd68u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbf4f: call 0x6926f4 */ r_esp -= 4; W32(r_esp, 0x7bbf54u); f_006926f4();
    /* 007bbf54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbf55: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_007bbf5a:; BB(0x007bbf5a);
    /* 007bbf5a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bbf5d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bbf5f: jl 0x7bbf24 */ if ((fS!=fO)) goto L_007bbf24;
L_007bbf61:; BB(0x007bbf61);
    /* 007bbf61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bbf63: call 0x64a424 */ r_esp -= 4; W32(r_esp, 0x7bbf68u); f_0064a424();
    /* 007bbf68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bbf69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bbf70: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 007bbf73: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bbf78u); f_008171e8();
    /* 007bbf78: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bbf7du); f_007a6154();
    /* 007bbf7d: jmp 0x7bbc52 */ goto L_007bbc52;
L_007bbf82:; BB(0x007bbf82);
    /* 007bbf82: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x7bbf87u); f_0078b1c4();
    /* 007bbf87: jmp 0x7bbe38 */ goto L_007bbe38;
}

void f_007bbf8c(void)
{
    FN_ENTER(0x007bbf8c);
    /* 007bbf8c: call 0x7c04ec */ r_esp -= 4; W32(r_esp, 0x7bbf91u); f_007c04ec();
    /* 007bbf91: call 0x7bb668 */ r_esp -= 4; W32(r_esp, 0x7bbf96u); f_007bb668();
    /* 007bbf96: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x7bbf9bu); f_007a6174();
    /* 007bbf9b: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bbfa0u); f_007a6108();
    /* 007bbfa0: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bbfa5u); f_007a6154();
    /* 007bbfa5: mov dword ptr [0xa95624], 0 */ W32((u32)(0xa95624u), 0x0u);
    /* 007bbfaf: ret  */ FN_RET(0x007bbf8c); r_esp += 4; return;
}

void f_007bbfb0(void)
{
    FN_ENTER(0x007bbfb0);
    /* 007bbfb0: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x7bbfb5u); f_006ffa24();
    /* 007bbfb5: mov dword ptr [0xa0f45c], 1 */ W32((u32)(0xa0f45cu), 0x1u);
    /* 007bbfbf: call 0x7bc020 */ r_esp -= 4; W32(r_esp, 0x7bbfc4u); f_007bc020();
    /* 007bbfc4: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bbfc9u); f_00815434();
    /* 007bbfc9: call 0x8148e4 */ r_esp -= 4; W32(r_esp, 0x7bbfceu); f_008148e4();
    /* 007bbfce: call 0x7bb668 */ r_esp -= 4; W32(r_esp, 0x7bbfd3u); f_007bb668();
    /* 007bbfd3: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbfd8: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bbfddu); f_00818560();
    /* 007bbfdd: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bbfe2: call 0x8181c4 */ r_esp -= 4; W32(r_esp, 0x7bbfe7u); f_008181c4();
    /* 007bbfe7: mov ecx, dword ptr [0xaca388] */ r_ecx = R32((u32)(0xaca388u));
    /* 007bbfed: call 0x817284 */ r_esp -= 4; W32(r_esp, 0x7bbff2u); f_00817284();
    /* 007bbff2: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bbff7: call 0x8155fc */ r_esp -= 4; W32(r_esp, 0x7bbffcu); f_008155fc();
    /* 007bbffc: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc001: push 0xa0f2e0 */ { u32 v = 0xa0f2e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bc006: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7bc00bu); f_0078b0a0();
    /* 007bc00b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bc00e: call 0x5b9380 */ r_esp -= 4; W32(r_esp, 0x7bc013u); f_005b9380();
    /* 007bc013: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bc018u); f_0061cdb0();
    /* 007bc018: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bc01du); f_0080030c();
    /* 007bc01d: ret  */ FN_RET(0x007bbfb0); r_esp += 4; return;
}

void f_007bbff3(void)
{
    FN_ENTER(0x007bbff3);
    /* 007bbff3: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bbff4: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 007bbff5: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 007bbff6: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 007bbff8: add byte ptr [esi + 0x78680005], dl */ { u32 ad = (u32)(r_esi+0x78680005u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007bbffe: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007bc000: add byte ptr [eax - 0x20], ch */ { u32 ad = (u32)(r_eax+0xffffffe0u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 007bc003: mov al, byte ptr [0xf095e800] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xf095e800u))) & 0xffu);
    /* 007bc009: cld  */ rt_df = 0;
    /* 007bc00a: inc dword ptr [ebx + 0x6de808c4] */ { u32 ad = (u32)(r_ebx+0x6de808c4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 007bc010: rcr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_edi = a; }
    UNSUP(0x007bc012, "falls out of decoded code");
}

