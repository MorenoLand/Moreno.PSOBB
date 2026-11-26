#include "protos.h"

void f_005c187c(void) /* sub_5C187C */
{
    FN_ENTER(0x005c187c);
    /* 005c187c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c187d: mov edi, ecx */ r_edi = r_ecx;
    /* 005c187f: mov ecx, edi */ r_ecx = r_edi;
    /* 005c1881: call 0x4f70d0 */ r_esp -= 4; W32(r_esp, 0x5c1886u); f_004f70d0();
    /* 005c1886: mov byte ptr [0xa8d7c4], 1 */ W8((u32)(0xa8d7c4u), 0x1u);
    /* 005c188d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c188f: mov dword ptr [edi + 0x538], eax */ W32((u32)(r_edi+0x538u), r_eax);
    /* 005c1895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1896: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c189bu); f_0068d5a8();
    /* 005c189b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c189c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c189e: je 0x5c18c8 */ if (fZ) goto L_005c18c8;
L_005c18a0:; BB(0x005c18a0);
    /* 005c18a0: fld dword ptr [0x92b7b0] */ FPUSH(R_F32((u32)(0x92b7b0u)));
    /* 005c18a6: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005c18a9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005c18ab: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005c18ae: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 005c18b1: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 005c18b4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005c18b6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005c18b9: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 005c18bc: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005c18bf: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 005c18c2: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 005c18c5: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
L_005c18c8:; BB(0x005c18c8);
    /* 005c18c8: mov eax, dword ptr [edi + 0x538] */ r_eax = R32((u32)(r_edi+0x538u));
    /* 005c18ce: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c18d1: mov dword ptr [edi + 0x538], eax */ W32((u32)(r_edi+0x538u), r_eax);
    /* 005c18d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c18d8: ret  */ FN_RET(0x005c187c); r_esp += 4; return;
}

void f_005c18dc(void)
{
    FN_ENTER(0x005c18dc);
    /* 005c18dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c18dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005c18df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c18e1: push 0x8d950c */ { u32 v = 0x8d950cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c18e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c18ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c18ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c18f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c18f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c18fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c18fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c1900: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c1903: push 0x864 */ { u32 v = 0x864u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1908: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c190f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5c1914u); f_005caba4();
    /* 005c1914: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1915: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c1918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c191a: je 0x5c1939 */ if (fZ) goto L_005c1939;
L_005c191c:; BB(0x005c191c);
    /* 005c191c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005c1923: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c192a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c192d: call 0x5c1948 */ r_esp -= 4; W32(r_esp, 0x5c1932u); f_005c1948();
    /* 005c1932: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c1939:; BB(0x005c1939);
    /* 005c1939: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c193c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1943: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1945: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1946: ret  */ FN_RET(0x005c18dc); r_esp += 4; return;
}

void f_005c1948(void) /* sub_5C1948 */
{
    FN_ENTER(0x005c1948);
    /* 005c1948: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1949: mov ebp, esp */ r_ebp = r_esp;
    /* 005c194b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c194d: push 0x8d9656 */ { u32 v = 0x8d9656u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1952: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c1958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1959: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c1960: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1963: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c1966: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c1969: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c196c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c196f: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c1975: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1978: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x5c197du); f_004f7330();
    /* 005c197d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1984: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1987: mov dword ptr [ecx], 0xb0bc20 */ W32((u32)(r_ecx), 0xb0bc20u);
    /* 005c198d: add ecx, 0x558 */ {  u32 a = r_ecx; u32 b = 0x558u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1993: call 0x4ff8e8 */ r_esp -= 4; W32(r_esp, 0x5c1998u); f_004ff8e8();
    /* 005c1998: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c199f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c19a2: add ecx, 0x578 */ {  u32 a = r_ecx; u32 b = 0x578u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c19a8: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x5c19adu); f_004ff4c0();
    /* 005c19ad: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c19b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c19b7: add ecx, 0x5a0 */ {  u32 a = r_ecx; u32 b = 0x5a0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c19bd: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x5c19c2u); f_004ff4c0();
    /* 005c19c2: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005c19c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c19cc: add ecx, 0x5c8 */ {  u32 a = r_ecx; u32 b = 0x5c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c19d2: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x5c19d7u); f_004ff4c0();
    /* 005c19d7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005c19de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c19e1: add ecx, 0x610 */ {  u32 a = r_ecx; u32 b = 0x610u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c19e7: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x5c19ecu); f_004ff4c0();
    /* 005c19ec: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005c19f3: push 0x4ff470 */ { u32 v = 0x4ff470u; r_esp -= 4; W32(r_esp, v); }
    /* 005c19f8: push 0x4ff4c0 */ { u32 v = 0x4ff4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c19fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a00: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a02: add eax, 0x638 */ {  u32 a = r_eax; u32 b = 0x638u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1a07: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a0a: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5c1a0fu); f_00858736();
    /* 005c1a0f: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005c1a16: push 0x4ff6d4 */ { u32 v = 0x4ff6d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a1b: push 0x4ff798 */ { u32 v = 0x4ff798u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a20: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a23: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a25: add eax, 0x6bc */ {  u32 a = r_eax; u32 b = 0x6bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1a2a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a2d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5c1a32u); f_00858736();
    /* 005c1a32: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005c1a39: push 0x4ff6d4 */ { u32 v = 0x4ff6d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a3e: push 0x4ff798 */ { u32 v = 0x4ff798u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a43: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a46: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a48: add eax, 0x728 */ {  u32 a = r_eax; u32 b = 0x728u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1a4d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a50: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5c1a55u); f_00858736();
    /* 005c1a55: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005c1a5c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a5f: add ecx, 0x794 */ {  u32 a = r_ecx; u32 b = 0x794u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1a65: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x5c1a6au); f_004ff4c0();
    /* 005c1a6a: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 005c1a71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a74: add ecx, 0x7bc */ {  u32 a = r_ecx; u32 b = 0x7bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1a7a: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x5c1a7fu); f_004ff4c0();
    /* 005c1a7f: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 005c1a86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a89: add ecx, 0x7e4 */ {  u32 a = r_ecx; u32 b = 0x7e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1a8f: call 0x4ff4c0 */ r_esp -= 4; W32(r_esp, 0x5c1a94u); f_004ff4c0();
    /* 005c1a94: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 005c1a9b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1a9e: add ecx, 0x80c */ {  u32 a = r_ecx; u32 b = 0x80cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1aa4: call 0x4ff798 */ r_esp -= 4; W32(r_esp, 0x5c1aa9u); f_004ff798();
    /* 005c1aa9: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 005c1ab0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1ab3: add ecx, 0x82c */ {  u32 a = r_ecx; u32 b = 0x82cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1ab9: call 0x4ff798 */ r_esp -= 4; W32(r_esp, 0x5c1abeu); f_004ff798();
    /* 005c1abe: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 005c1ac5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1ac8: mov esi, dword ptr [0x9c1fa0] */ r_esi = R32((u32)(0x9c1fa0u));
    /* 005c1ace: mov dword ptr [edi + 0x53c], 1 */ W32((u32)(r_edi+0x53cu), 0x1u);
    /* 005c1ad8: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 005c1adb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c1add: mov byte ptr [0xa8d7c4], al */ W8((u32)(0xa8d7c4u), (u8)r_eax);
    /* 005c1ae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ae3: mov dword ptr [edi + 0x538], eax */ W32((u32)(r_edi+0x538u), r_eax);
    /* 005c1ae9: mov dword ptr [edi + 0x540], eax */ W32((u32)(r_edi+0x540u), r_eax);
    /* 005c1aef: mov dword ptr [edi + 0x544], eax */ W32((u32)(r_edi+0x544u), r_eax);
    /* 005c1af5: call 0x5bcbbc */ r_esp -= 4; W32(r_esp, 0x5c1afau); f_005bcbbc();
    /* 005c1afa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1afb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1afe: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005c1b00: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 005c1b03: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005c1b06: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 005c1b09: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 005c1b0c: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 005c1b0f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c1b12: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 005c1b15: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c1b18: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 005c1b1b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c1b1e: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 005c1b21: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005c1b24: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 005c1b27: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c1b2a: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 005c1b2d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005c1b30: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 005c1b33: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005c1b36: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 005c1b39: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005c1b3c: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 005c1b3f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 005c1b42: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 005c1b45: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005c1b48: mov dword ptr [edx + 0x68], ecx */ W32((u32)(r_edx+0x68u), r_ecx);
    /* 005c1b4b: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005c1b4e: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 005c1b51: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005c1b54: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 005c1b57: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1b5a: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 005c1b5d: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 005c1b60: call 0x5be308 */ r_esp -= 4; W32(r_esp, 0x5c1b65u); f_005be308();
    /* 005c1b65: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1b68: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c1b6c: mov dword ptr [edx + 0x548], eax */ W32((u32)(r_edx+0x548u), r_eax);
    /* 005c1b72: mov dword ptr [edx + 0x54c], eax */ W32((u32)(r_edx+0x54cu), r_eax);
    /* 005c1b78: mov dword ptr [edx + 0x550], eax */ W32((u32)(r_edx+0x550u), r_eax);
    /* 005c1b7e: mov dword ptr [edx + 0x554], eax */ W32((u32)(r_edx+0x554u), r_eax);
    /* 005c1b84: lea ecx, [edx + 0x558] */ r_ecx = (u32)(r_edx+0x558u);
    /* 005c1b8a: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b8e: call 0x4ff90c */ r_esp -= 4; W32(r_esp, 0x5c1b93u); f_004ff90c();
    /* 005c1b93: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1b96: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b98: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b9a: lea ecx, [eax + 0x578] */ r_ecx = (u32)(r_eax+0x578u);
    /* 005c1ba0: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ba4: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1ba9u); f_004ff4e8();
    /* 005c1ba9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1bac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bae: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bb0: lea ecx, [eax + 0x5a0] */ r_ecx = (u32)(r_eax+0x5a0u);
    /* 005c1bb6: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bba: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1bbfu); f_004ff4e8();
    /* 005c1bbf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1bc2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bc6: lea ecx, [eax + 0x5c8] */ r_ecx = (u32)(r_eax+0x5c8u);
    /* 005c1bcc: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bd0: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1bd5u); f_004ff4e8();
    /* 005c1bd5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1bd8: mov edx, dword ptr [0x9c1fa4] */ r_edx = R32((u32)(0x9c1fa4u));
    /* 005c1bde: mov ebx, dword ptr [0x9c1fa8] */ r_ebx = R32((u32)(0x9c1fa8u));
    /* 005c1be4: mov esi, dword ptr [0x9c1fac] */ r_esi = R32((u32)(0x9c1facu));
    /* 005c1bea: mov edi, dword ptr [0x9c1fb0] */ r_edi = R32((u32)(0x9c1fb0u));
    /* 005c1bf0: mov dword ptr [eax + 0x608], 0x3f000000 */ W32((u32)(r_eax+0x608u), 0x3f000000u);
    /* 005c1bfa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1bfc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1bfe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c00: mov dword ptr [eax + 0x5f0], ecx */ W32((u32)(r_eax+0x5f0u), r_ecx);
    /* 005c1c06: mov dword ptr [eax + 0x5f4], edx */ W32((u32)(r_eax+0x5f4u), r_edx);
    /* 005c1c0c: mov dword ptr [eax + 0x5f8], ebx */ W32((u32)(r_eax+0x5f8u), r_ebx);
    /* 005c1c12: mov dword ptr [eax + 0x5fc], esi */ W32((u32)(r_eax+0x5fcu), r_esi);
    /* 005c1c18: mov dword ptr [eax + 0x600], edi */ W32((u32)(r_eax+0x600u), r_edi);
    /* 005c1c1e: mov dword ptr [eax + 0x604], ecx */ W32((u32)(r_eax+0x604u), r_ecx);
    /* 005c1c24: mov dword ptr [eax + 0x60c], ecx */ W32((u32)(r_eax+0x60cu), r_ecx);
    /* 005c1c2a: lea ecx, [eax + 0x610] */ r_ecx = (u32)(r_eax+0x610u);
    /* 005c1c30: add eax, 0xd0 */ {  u32 a = r_eax; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1c35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c36: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1c3bu); f_004ff4e8();
    /* 005c1c3b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c1c3d:; BB(0x005c1c3d);
    /* 005c1c3d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1c40: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 005c1c43: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1c45: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1c47: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1c49: lea ecx, [edx + eax + 0x638] */ r_ecx = (u32)(r_edx+r_eax+0x638u);
    /* 005c1c50: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005c1c53: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c1c55: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c1c57: lea eax, [edx + ebx + 0xd8] */ r_eax = (u32)(r_edx+r_ebx+0xd8u);
    /* 005c1c5e: mov esi, 3 */ r_esi = 0x3u;
    /* 005c1c63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c66: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1c6bu); f_004ff4e8();
    /* 005c1c6b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1c6e: mov dword ptr [eax + edi*4 + 0x6b0], 0 */ W32((u32)(r_eax+r_edi*4+0x6b0u), 0x0u);
    /* 005c1c79: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005c1c7c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c1c7e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c80: lea edx, [eax + ebx + 0x6b0] */ r_edx = (u32)(r_eax+r_ebx+0x6b0u);
    /* 005c1c87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1c88: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 005c1c8b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c1c8d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c1c8f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c1c91: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c1c93: lea ecx, [eax + esi + 0x6bc] */ r_ecx = (u32)(r_eax+r_esi+0x6bcu);
    /* 005c1c9a: call 0x4ff7bc */ r_esp -= 4; W32(r_esp, 0x5c1c9fu); f_004ff7bc();
    /* 005c1c9f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1ca2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ca4: lea edx, [eax + ebx + 0x71c] */ r_edx = (u32)(r_eax+r_ebx+0x71cu);
    /* 005c1cab: lea ecx, [eax + esi + 0x728] */ r_ecx = (u32)(r_eax+r_esi+0x728u);
    /* 005c1cb2: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005c1cb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1cb9: call 0x4ff7bc */ r_esp -= 4; W32(r_esp, 0x5c1cbeu); f_004ff7bc();
    /* 005c1cbe: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c1cc1: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1cc4: jl 0x5c1c3d */ if ((fS!=fO)) goto L_005c1c3d;
L_005c1cca:; BB(0x005c1cca);
    /* 005c1cca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1ccd: mov dword ptr [eax + 0x788], 0 */ W32((u32)(r_eax+0x788u), 0x0u);
    /* 005c1cd7: lea ecx, [eax + 0x794] */ r_ecx = (u32)(r_eax+0x794u);
    /* 005c1cdd: add eax, 0x110 */ {  u32 a = r_eax; u32 b = 0x110u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1ce2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ce4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ce7: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1cecu); f_004ff4e8();
    /* 005c1cec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1cef: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1cf1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1cf3: lea ecx, [eax + 0x7bc] */ r_ecx = (u32)(r_eax+0x7bcu);
    /* 005c1cf9: add eax, 0x118 */ {  u32 a = r_eax; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1cfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1cff: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1d04u); f_004ff4e8();
    /* 005c1d04: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d07: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d0b: lea ecx, [eax + 0x7e4] */ r_ecx = (u32)(r_eax+0x7e4u);
    /* 005c1d11: add eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1d16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d17: call 0x4ff4e8 */ r_esp -= 4; W32(r_esp, 0x5c1d1cu); f_004ff4e8();
    /* 005c1d1c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d1f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c1d23: mov dword ptr [edx + 0x790], eax */ W32((u32)(r_edx+0x790u), r_eax);
    /* 005c1d29: mov dword ptr [edx + 0x78c], eax */ W32((u32)(r_edx+0x78cu), r_eax);
    /* 005c1d2f: lea ecx, [edx + 0x80c] */ r_ecx = (u32)(r_edx+0x80cu);
    /* 005c1d35: add edx, 0x78c */ {  u32 a = r_edx; u32 b = 0x78cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c1d3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d3c: call 0x4ff7bc */ r_esp -= 4; W32(r_esp, 0x5c1d41u); f_004ff7bc();
    /* 005c1d41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d44: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d46: lea ecx, [eax + 0x82c] */ r_ecx = (u32)(r_eax+0x82cu);
    /* 005c1d4c: add eax, 0x790 */ {  u32 a = r_eax; u32 b = 0x790u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c1d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1d52: call 0x4ff7bc */ r_esp -= 4; W32(r_esp, 0x5c1d57u); f_004ff7bc();
    /* 005c1d57: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1d5a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c1d5d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1d60: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c1d63: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c1d65: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 005c1d6b: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 005c1d71: mov dword ptr [eax + 0x854], edx */ W32((u32)(r_eax+0x854u), r_edx);
    /* 005c1d77: mov dword ptr [eax + 0x858], edx */ W32((u32)(r_eax+0x858u), r_edx);
    /* 005c1d7d: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 005c1d83: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 005c1d89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1d8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1d93: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1d95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1d96: ret  */ FN_RET(0x005c1948); r_esp += 4; return;
}

void f_005c1d98(void) /* sub_5C1D98 */
{
    FN_ENTER(0x005c1d98);
    /* 005c1d98: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 005c1d9d: mov edx, dword ptr [0xa0f668] */ r_edx = R32((u32)(0xa0f668u));
    /* 005c1da3: mov ecx, dword ptr [0xa0f66c] */ r_ecx = R32((u32)(0xa0f66cu));
    /* 005c1da9: mov dword ptr [0xa8d7a0], eax */ W32((u32)(0xa8d7a0u), r_eax);
    /* 005c1dae: mov eax, dword ptr [0xa0f670] */ r_eax = R32((u32)(0xa0f670u));
    /* 005c1db3: mov dword ptr [0xa8d7b8], 0x3f800000 */ W32((u32)(0xa8d7b8u), 0x3f800000u);
    /* 005c1dbd: mov dword ptr [0xa8d7bc], 0x41000000 */ W32((u32)(0xa8d7bcu), 0x41000000u);
    /* 005c1dc7: mov dword ptr [0xa8d7a4], edx */ W32((u32)(0xa8d7a4u), r_edx);
    /* 005c1dcd: mov dword ptr [0xa8d7a8], ecx */ W32((u32)(0xa8d7a8u), r_ecx);
    /* 005c1dd3: mov dword ptr [0xa8d7c0], 0x3fc00000 */ W32((u32)(0xa8d7c0u), 0x3fc00000u);
    /* 005c1ddd: mov dword ptr [0xa8d7ac], eax */ W32((u32)(0xa8d7acu), r_eax);
    /* 005c1de2: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 005c1de7: mov dword ptr [0xa8d7b0], eax */ W32((u32)(0xa8d7b0u), r_eax);
    /* 005c1dec: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
    /* 005c1df1: mov dword ptr [0xa8d7b4], eax */ W32((u32)(0xa8d7b4u), r_eax);
    /* 005c1df6: ret  */ FN_RET(0x005c1d98); r_esp += 4; return;
}

void f_005c1df8(void) /* sub_5C1DF8 */
{
    FN_ENTER(0x005c1df8);
    /* 005c1df8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1df9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c1dfb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c1dfd: call 0x4f7454 */ r_esp -= 4; W32(r_esp, 0x5c1e02u); f_004f7454();
    /* 005c1e02: mov byte ptr [0xa8d7c4], 0 */ W8((u32)(0xa8d7c4u), 0x0u);
    /* 005c1e09: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005c1e0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e0d: push dword ptr [ebx + 0x544] */ { u32 v = R32((u32)(r_ebx+0x544u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c1e13: call 0x5bcbd4 */ r_esp -= 4; W32(r_esp, 0x5c1e18u); f_005bcbd4();
    /* 005c1e18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c1e1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e1c: ret  */ FN_RET(0x005c1df8); r_esp += 4; return;
}

void f_005c1e20(void) /* sub_5C1E20 */
{
    FN_ENTER(0x005c1e20);
    /* 005c1e20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c1e23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c1e25: call 0x5c1fa0 */ r_esp -= 4; W32(r_esp, 0x5c1e2au); f_005c1fa0();
    /* 005c1e2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c1e2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c1e30: jne 0x5c1e36 */ if (!fZ) goto L_005c1e36;
L_005c1e32:; BB(0x005c1e32);
    /* 005c1e32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e33: ret 4 */ FN_RET(0x005c1e20); r_esp += 8; return;
L_005c1e36:; BB(0x005c1e36);
    /* 005c1e36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c1e3cu); f_005c2f74();
    /* 005c1e3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1e3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e3e: ret 4 */ FN_RET(0x005c1e20); r_esp += 8; return;
}

void f_005c1e44(void) /* sub_5C1E44 */
{
    FN_ENTER(0x005c1e44);
    /* 005c1e44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c1e47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c1e49: call 0x5c1f50 */ r_esp -= 4; W32(r_esp, 0x5c1e4eu); f_005c1f50();
    /* 005c1e4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c1e52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c1e54: jne 0x5c1e5a */ if (!fZ) goto L_005c1e5a;
L_005c1e56:; BB(0x005c1e56);
    /* 005c1e56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e57: ret 4 */ FN_RET(0x005c1e44); r_esp += 8; return;
L_005c1e5a:; BB(0x005c1e5a);
    /* 005c1e5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c1e60u); f_005c2f74();
    /* 005c1e60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1e61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e62: ret 4 */ FN_RET(0x005c1e44); r_esp += 8; return;
}

void f_005c1e68(void) /* sub_5C1E68 */
{
    FN_ENTER(0x005c1e68);
    /* 005c1e68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c1e6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c1e6d: call 0x5c1f00 */ r_esp -= 4; W32(r_esp, 0x5c1e72u); f_005c1f00();
    /* 005c1e72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c1e76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c1e78: jne 0x5c1e7e */ if (!fZ) goto L_005c1e7e;
L_005c1e7a:; BB(0x005c1e7a);
    /* 005c1e7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e7b: ret 4 */ FN_RET(0x005c1e68); r_esp += 8; return;
L_005c1e7e:; BB(0x005c1e7e);
    /* 005c1e7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e7f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c1e84u); f_005c2f74();
    /* 005c1e84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1e85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e86: ret 4 */ FN_RET(0x005c1e68); r_esp += 8; return;
}

void f_005c1e8c(void) /* sub_5C1E8C */
{
    FN_ENTER(0x005c1e8c);
    /* 005c1e8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1e8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c1e8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c1e91: call 0x5c1eb0 */ r_esp -= 4; W32(r_esp, 0x5c1e96u); f_005c1eb0();
    /* 005c1e96: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c1e9a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c1e9c: jne 0x5c1ea2 */ if (!fZ) goto L_005c1ea2;
L_005c1e9e:; BB(0x005c1e9e);
    /* 005c1e9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1e9f: ret 4 */ FN_RET(0x005c1e8c); r_esp += 8; return;
L_005c1ea2:; BB(0x005c1ea2);
    /* 005c1ea2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ea3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c1ea8u); f_005c2f74();
    /* 005c1ea8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1ea9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c1eaa: ret 4 */ FN_RET(0x005c1e8c); r_esp += 8; return;
}

void f_005c1eb0(void) /* sub_5C1EB0 */
{
    FN_ENTER(0x005c1eb0);
    /* 005c1eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1eb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1eb5: push 0x8d9670 */ { u32 v = 0x8d9670u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1eba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c1ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ec1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c1ec8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1ecb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c1ece: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c1ed1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c1ed4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c1ed7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1eda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1edd: mov dword ptr [ecx], 0xb0bf44 */ W32((u32)(r_ecx), 0xb0bf44u);
    /* 005c1ee3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c1eea: call 0x5c1f00 */ r_esp -= 4; W32(r_esp, 0x5c1eefu); f_005c1f00();
    /* 005c1eef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1ef2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1ef9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1efb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1efc: ret  */ FN_RET(0x005c1eb0); r_esp += 4; return;
}

void f_005c1f00(void) /* sub_5C1F00 */
{
    FN_ENTER(0x005c1f00);
    /* 005c1f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f05: push 0x8d968c */ { u32 v = 0x8d968cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c1f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c1f18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1f1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c1f1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c1f21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c1f24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c1f27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1f2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f2d: mov dword ptr [ecx], 0xb0bef8 */ W32((u32)(r_ecx), 0xb0bef8u);
    /* 005c1f33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c1f3a: call 0x5c1f50 */ r_esp -= 4; W32(r_esp, 0x5c1f3fu); f_005c1f50();
    /* 005c1f3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1f42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1f49: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1f4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1f4c: ret  */ FN_RET(0x005c1f00); r_esp += 4; return;
}

void f_005c1f50(void) /* sub_5C1F50 */
{
    FN_ENTER(0x005c1f50);
    /* 005c1f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1f53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f55: push 0x8d96a8 */ { u32 v = 0x8d96a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c1f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1f61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c1f68: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1f6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c1f6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c1f71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c1f74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c1f77: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1f7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1f7d: mov dword ptr [ecx], 0xb0bebc */ W32((u32)(r_ecx), 0xb0bebcu);
    /* 005c1f83: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c1f8a: call 0x5c1fa0 */ r_esp -= 4; W32(r_esp, 0x5c1f8fu); f_005c1fa0();
    /* 005c1f8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1f92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1f99: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1f9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1f9c: ret  */ FN_RET(0x005c1f50); r_esp += 4; return;
}

void f_005c1fa0(void) /* sub_5C1FA0 */
{
    FN_ENTER(0x005c1fa0);
    /* 005c1fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1fa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1fa5: push 0x8d96c4 */ { u32 v = 0x8d96c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1faa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c1fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1fb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c1fb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c1fbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c1fbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005c1fc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005c1fc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c1fc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c1fca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c1fcd: mov dword ptr [ecx], 0xb0be80 */ W32((u32)(r_ecx), 0xb0be80u);
    /* 005c1fd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c1fda: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x5c1fdfu); f_007ba1f0();
    /* 005c1fdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1fe2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1fe9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1feb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1fec: ret  */ FN_RET(0x005c1fa0); r_esp += 4; return;
}

void f_005c1ff0(void) /* sub_5C1FF0 */
{
    FN_ENTER(0x005c1ff0);
    /* 005c1ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1ff1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c1ff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c1ff5: call 0x5c2014 */ r_esp -= 4; W32(r_esp, 0x5c1ffau); f_005c2014();
    /* 005c1ffa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c1ffe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c2000: jne 0x5c2006 */ if (!fZ) goto L_005c2006;
L_005c2002:; BB(0x005c2002);
    /* 005c2002: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c2003: ret 4 */ FN_RET(0x005c1ff0); r_esp += 8; return;
L_005c2006:; BB(0x005c2006);
    /* 005c2006: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2007: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5c200cu); f_005c2f74();
    /* 005c200c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c200d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c200e: ret 4 */ FN_RET(0x005c1ff0); r_esp += 8; return;
}

