#include "protos.h"

void f_007a0061(void)
{
    FN_ENTER(0x007a0061);
    goto L_007a0061;
L_0079ff4a:; BB(0x0079ff4a);
    /* 0079ff4a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079ff4e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0079ff51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079ff53: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ff55: mov esi, eax */ r_esi = r_eax;
L_0079ff57:; BB(0x0079ff57);
    /* 0079ff57: mov edx, dword ptr [esi*4 + 0xaab28c] */ r_edx = R32((u32)(r_esi*4+0xaab28cu));
    /* 0079ff5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff60: je 0x79ffc7 */ if (fZ) goto L_0079ffc7;
L_0079ff62:; BB(0x0079ff62);
    /* 0079ff62: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0079ff66: call 0x6857f0 */ r_esp -= 4; W32(r_esp, 0x79ff6bu); f_006857f0();
    /* 0079ff6b: push 0x4c0 */ { u32 v = 0x4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff70: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79ff75u); f_008581c5();
    /* 0079ff75: mov edi, eax */ r_edi = r_eax;
    /* 0079ff77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ff7a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff7c: je 0x79ffbc */ if (fZ) goto L_0079ffbc;
L_0079ff7e:; BB(0x0079ff7e);
    /* 0079ff7e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ff84: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ff89u); f_0068d5a8();
    /* 0079ff89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ff8a: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 0079ff8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff8e: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ff90: call 0x68cee8 */ r_esp -= 4; W32(r_esp, 0x79ff95u); f_0068cee8();
    /* 0079ff95: mov byte ptr [edi], 0x70 */ W8((u32)(r_edi), 0x70u);
    /* 0079ff98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff99: mov ecx, edi */ r_ecx = r_edi;
    /* 0079ff9b: mov byte ptr [edi + 1], 0 */ W8((u32)(r_edi+0x1u), 0x0u);
    /* 0079ff9f: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079ffa5: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 0079ffa9: mov dword ptr [edi + 4], 0x4c0 */ W32((u32)(r_edi+0x4u), 0x4c0u);
    /* 0079ffb0: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79ffb5u); f_008005e0();
    /* 0079ffb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ffb6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ffbbu); f_00857e98();
    /* 0079ffbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079ffbc:; BB(0x0079ffbc);
    /* 0079ffbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ffc2u); f_0068d5a8();
    /* 0079ffc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ffc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ffc5: je 0x7a0005 */ if (fZ) goto L_007a0005;
L_0079ffc7:; BB(0x0079ffc7);
    /* 0079ffc7: mov dword ptr [esi*4 + 0xaab28c], 0 */ W32((u32)(r_esi*4+0xaab28cu), 0x0u);
    /* 0079ffd2: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ffd5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079ffd8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079ffdb: jl 0x79ff57 */ if ((fS!=fO)) goto L_0079ff57;
L_0079ffe1:; BB(0x0079ffe1);
    /* 0079ffe1: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079ffe5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0079ffe8: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079ffee: mov dword ptr [0xaab218], 0xf */ W32((u32)(0xaab218u), 0xfu);
    /* 0079fff8: call 0x7d41c4 */ r_esp -= 4; W32(r_esp, 0x79fffdu); f_007d41c4();
    /* 0079fffd: add esp, 0x4c0 */ {  u32 a = r_esp; u32 b = 0x4c0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a0004: ret  */ FN_RET(0x007a0061); r_esp += 4; return;
L_007a0005:; BB(0x007a0005);
    /* 007a0005: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 007a0008: lea edi, [esi + edi*8] */ r_edi = (u32)(r_esi+r_edi*8);
    /* 007a000b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a000d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a000f: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007a0012: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a0014: lea ecx, [edx + edx + 0xaa6d84] */ r_ecx = (u32)(r_edx+r_edx+0xaa6d84u);
    /* 007a001b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a001c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a001e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a001f: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7a0024u); f_00686258();
    /* 007a0024: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0027: mov edx, dword ptr [edi*8 + 0xaa6d40] */ r_edx = R32((u32)(r_edi*8+0xaa6d40u));
    /* 007a002e: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 007a0034: mov edi, dword ptr [edi*8 + 0xaa6d44] */ r_edi = R32((u32)(r_edi*8+0xaa6d44u));
    /* 007a003b: mov edx, dword ptr [ebx + 0xaaad00] */ r_edx = R32((u32)(r_ebx+0xaaad00u));
    /* 007a0041: mov dword ptr [eax + 0xeb4], edi */ W32((u32)(r_eax+0xeb4u), r_edi);
    /* 007a0047: mov dword ptr [eax + 0xeb8], edx */ W32((u32)(r_eax+0xeb8u), r_edx);
    /* 007a004d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007a004f: mov ecx, eax */ r_ecx = r_eax;
    /* 007a0051: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7a0054u); call_ind(t); }
    /* 007a0054: jmp 0x79ffc7 */ goto L_0079ffc7;
L_007a0061:; BB(0x007a0061);
    /* 007a0061: bnd call dword ptr [eax + 0x6a] */ ;
    /* 007a0065: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 007a0067: xor eax, 0xa9c4f4 */ {  u32 a = r_eax; u32 b = 0xa9c4f4u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a006c: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7a0071u); f_00686258();
    /* 007a0071: mov ebx, eax */ r_ebx = r_eax;
    /* 007a0073: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0076: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 007a007b: mov edx, dword ptr [eax + 0x12120] */ r_edx = R32((u32)(r_eax+0x12120u));
    /* 007a0081: mov dword ptr [ebx + 0xeb0], edx */ W32((u32)(r_ebx+0xeb0u), r_edx);
    /* 007a0087: mov edx, dword ptr [eax + 0x12124] */ r_edx = R32((u32)(r_eax+0x12124u));
    /* 007a008d: mov dword ptr [ebx + 0xeb4], edx */ W32((u32)(r_ebx+0xeb4u), r_edx);
    /* 007a0093: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a0095: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007a009b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a009d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a009f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a00a2: mov edx, dword ptr [edx + eax*8 + 0xaaad00] */ r_edx = R32((u32)(r_edx+r_eax*8+0xaaad00u));
    /* 007a00a9: mov dword ptr [ebx + 0xeb8], edx */ W32((u32)(r_ebx+0xeb8u), r_edx);
    /* 007a00af: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007a00b1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7a00b4u); call_ind(t); }
    /* 007a00b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a00b6: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7a00bbu); f_006936b4();
    /* 007a00bb: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007a00c1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007a00c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a00c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00cc: lea ecx, [edx + edx + 0xaab000] */ r_ecx = (u32)(r_edx+r_edx+0xaab000u);
    /* 007a00d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a00d4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7a00d9u); f_00857dec();
    /* 007a00d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a00dc: jmp 0x79ff4a */ goto L_0079ff4a;
}

void f_007a0069(void)
{
    FN_ENTER(0x007a0069);
    goto L_007a0069;
L_0079ff4a:; BB(0x0079ff4a);
    /* 0079ff4a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079ff4e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0079ff51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079ff53: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ff55: mov esi, eax */ r_esi = r_eax;
L_0079ff57:; BB(0x0079ff57);
    /* 0079ff57: mov edx, dword ptr [esi*4 + 0xaab28c] */ r_edx = R32((u32)(r_esi*4+0xaab28cu));
    /* 0079ff5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff60: je 0x79ffc7 */ if (fZ) goto L_0079ffc7;
L_0079ff62:; BB(0x0079ff62);
    /* 0079ff62: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0079ff66: call 0x6857f0 */ r_esp -= 4; W32(r_esp, 0x79ff6bu); f_006857f0();
    /* 0079ff6b: push 0x4c0 */ { u32 v = 0x4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff70: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79ff75u); f_008581c5();
    /* 0079ff75: mov edi, eax */ r_edi = r_eax;
    /* 0079ff77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ff7a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ff7c: je 0x79ffbc */ if (fZ) goto L_0079ffbc;
L_0079ff7e:; BB(0x0079ff7e);
    /* 0079ff7e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ff84: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ff89u); f_0068d5a8();
    /* 0079ff89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ff8a: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 0079ff8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff8e: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ff90: call 0x68cee8 */ r_esp -= 4; W32(r_esp, 0x79ff95u); f_0068cee8();
    /* 0079ff95: mov byte ptr [edi], 0x70 */ W8((u32)(r_edi), 0x70u);
    /* 0079ff98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ff99: mov ecx, edi */ r_ecx = r_edi;
    /* 0079ff9b: mov byte ptr [edi + 1], 0 */ W8((u32)(r_edi+0x1u), 0x0u);
    /* 0079ff9f: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079ffa5: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 0079ffa9: mov dword ptr [edi + 4], 0x4c0 */ W32((u32)(r_edi+0x4u), 0x4c0u);
    /* 0079ffb0: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79ffb5u); f_008005e0();
    /* 0079ffb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ffb6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ffbbu); f_00857e98();
    /* 0079ffbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079ffbc:; BB(0x0079ffbc);
    /* 0079ffbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ffbd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ffc2u); f_0068d5a8();
    /* 0079ffc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ffc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ffc5: je 0x7a0005 */ if (fZ) goto L_007a0005;
L_0079ffc7:; BB(0x0079ffc7);
    /* 0079ffc7: mov dword ptr [esi*4 + 0xaab28c], 0 */ W32((u32)(r_esi*4+0xaab28cu), 0x0u);
    /* 0079ffd2: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ffd5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079ffd8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079ffdb: jl 0x79ff57 */ if ((fS!=fO)) goto L_0079ff57;
L_0079ffe1:; BB(0x0079ffe1);
    /* 0079ffe1: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079ffe5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0079ffe8: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079ffee: mov dword ptr [0xaab218], 0xf */ W32((u32)(0xaab218u), 0xfu);
    /* 0079fff8: call 0x7d41c4 */ r_esp -= 4; W32(r_esp, 0x79fffdu); f_007d41c4();
    /* 0079fffd: add esp, 0x4c0 */ {  u32 a = r_esp; u32 b = 0x4c0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a0004: ret  */ FN_RET(0x007a0069); r_esp += 4; return;
L_007a0005:; BB(0x007a0005);
    /* 007a0005: lea edi, [esi + esi*4] */ r_edi = (u32)(r_esi+r_esi*4);
    /* 007a0008: lea edi, [esi + edi*8] */ r_edi = (u32)(r_esi+r_edi*8);
    /* 007a000b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a000d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a000f: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007a0012: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a0014: lea ecx, [edx + edx + 0xaa6d84] */ r_ecx = (u32)(r_edx+r_edx+0xaa6d84u);
    /* 007a001b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a001c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a001e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a001f: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x7a0024u); f_00686258();
    /* 007a0024: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0027: mov edx, dword ptr [edi*8 + 0xaa6d40] */ r_edx = R32((u32)(r_edi*8+0xaa6d40u));
    /* 007a002e: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 007a0034: mov edi, dword ptr [edi*8 + 0xaa6d44] */ r_edi = R32((u32)(r_edi*8+0xaa6d44u));
    /* 007a003b: mov edx, dword ptr [ebx + 0xaaad00] */ r_edx = R32((u32)(r_ebx+0xaaad00u));
    /* 007a0041: mov dword ptr [eax + 0xeb4], edi */ W32((u32)(r_eax+0xeb4u), r_edi);
    /* 007a0047: mov dword ptr [eax + 0xeb8], edx */ W32((u32)(r_eax+0xeb8u), r_edx);
    /* 007a004d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007a004f: mov ecx, eax */ r_ecx = r_eax;
    /* 007a0051: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7a0054u); call_ind(t); }
    /* 007a0054: jmp 0x79ffc7 */ goto L_0079ffc7;
L_007a0069:; BB(0x007a0069);
    /* 007a0069: les ebp, ptr [ecx + 0x61e7e800] */ UNSUP(0x007a0069, "les ebp, ptr [ecx + 0x61e7e800]");
    /* 007a006f: out dx, al */ UNSUP(0x007a006f, "out dx, al");
    /* 007a0070: dec dword ptr [ebx + 0x10c483d8] */ { u32 ad = (u32)(r_ebx+0x10c483d8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 007a0076: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 007a007b: mov edx, dword ptr [eax + 0x12120] */ r_edx = R32((u32)(r_eax+0x12120u));
    /* 007a0081: mov dword ptr [ebx + 0xeb0], edx */ W32((u32)(r_ebx+0xeb0u), r_edx);
    /* 007a0087: mov edx, dword ptr [eax + 0x12124] */ r_edx = R32((u32)(r_eax+0x12124u));
    /* 007a008d: mov dword ptr [ebx + 0xeb4], edx */ W32((u32)(r_ebx+0xeb4u), r_edx);
    /* 007a0093: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a0095: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007a009b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a009d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a009f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007a00a2: mov edx, dword ptr [edx + eax*8 + 0xaaad00] */ r_edx = R32((u32)(r_edx+r_eax*8+0xaaad00u));
    /* 007a00a9: mov dword ptr [ebx + 0xeb8], edx */ W32((u32)(r_ebx+0xeb8u), r_edx);
    /* 007a00af: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007a00b1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7a00b4u); call_ind(t); }
    /* 007a00b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a00b6: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7a00bbu); f_006936b4();
    /* 007a00bb: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007a00c1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007a00c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a00c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a00cc: lea ecx, [edx + edx + 0xaab000] */ r_ecx = (u32)(r_edx+r_edx+0xaab000u);
    /* 007a00d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a00d4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7a00d9u); f_00857dec();
    /* 007a00d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a00dc: jmp 0x79ff4a */ goto L_0079ff4a;
}

void f_007a0079(void)
{
    FN_ENTER(0x007a0079);
    /* 007a0079: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 007a007a: add byte ptr [ebx + 0x1212090], cl */ { u32 ad = (u32)(r_ebx+0x1212090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007a0080: add byte ptr [ecx + 0xeb093], cl */ { u32 ad = (u32)(r_ecx+0xeb093u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007a0086: add byte ptr [ebx + 0x1212490], cl */ { u32 ad = (u32)(r_ebx+0x1212490u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007a008c: add byte ptr [ecx + 0xeb493], cl */ { u32 ad = (u32)(r_ecx+0xeb493u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007a0092: add byte ptr [ebx - 0xbea7435], cl */ { u32 ad = (u32)(r_ebx+0xf4158bcbu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 007a0098: les ebp, ptr [ecx + 0x3d20300] */ UNSUP(0x007a0098, "les ebp, ptr [ecx + 0x3d20300]");
    /* 007a009e: ror byte ptr [ebp - 0x6b74edfc], cl */ { u32 ad = (u32)(r_ebp+0x948b1204u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r); fC = (r >> 7) & 1; fO = ((r >> 7) ^ (r >> 6)) & 1; } }
    /* 007a00a4: ret 0xad00 */ FN_RET(0x007a0079); r_esp += 44292; return;
}

void f_007a00a4(void)
{
    FN_ENTER(0x007a00a4);
    /* 007a00a4: ret 0xad00 */ FN_RET(0x007a00a4); r_esp += 44292; return;
}

void f_007a00e4(void) /* sub_7A00E4 */
{
    FN_ENTER(0x007a00e4);
    /* 007a00e4: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 007a00ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a00ec: mov dword ptr [edx + 0x1e0a0], eax */ W32((u32)(r_edx+0x1e0a0u), r_eax);
    /* 007a00f2: mov dword ptr [edx + 0x1e0b0], eax */ W32((u32)(r_edx+0x1e0b0u), r_eax);
    /* 007a00f8: ret  */ FN_RET(0x007a00e4); r_esp += 4; return;
}

void f_007a00fc(void) /* sub_7A00FC */
{
    FN_ENTER(0x007a00fc);
    /* 007a00fc: mov eax, dword ptr [0xaab284] */ r_eax = R32((u32)(0xaab284u));
    /* 007a0101: mov dword ptr [eax + 0x1e0a0], 0x79bde8 */ W32((u32)(r_eax+0x1e0a0u), 0x79bde8u);
    /* 007a010b: mov dword ptr [eax + 0x1e0b0], 0x79c4bc */ W32((u32)(r_eax+0x1e0b0u), 0x79c4bcu);
    /* 007a0115: ret  */ FN_RET(0x007a00fc); r_esp += 4; return;
}

void f_007a0118(void) /* sub_7A0118 */
{
    FN_ENTER(0x007a0118);
    /* 007a0118: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007a011e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0120: je 0x7a0127 */ if (fZ) goto L_007a0127;
L_007a0122:; BB(0x007a0122);
    /* 007a0122: call 0x7d367c */ r_esp -= 4; W32(r_esp, 0x7a0127u); f_007d367c();
L_007a0127:; BB(0x007a0127);
    /* 007a0127: ret  */ FN_RET(0x007a0118); r_esp += 4; return;
}

void f_007a0128(void) /* sub_7A0128 */
{
    FN_ENTER(0x007a0128);
    /* 007a0128: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0129: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a012a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a012b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a012c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a012f: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007a0134: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a013a: jne 0x7a032b */ if (!fZ) goto L_007a032b;
L_007a0140:; BB(0x007a0140);
    /* 007a0140: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a0144: call 0x79cc64 */ r_esp -= 4; W32(r_esp, 0x7a0149u); f_0079cc64();
    /* 007a0149: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a014e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7a0153u); f_008581c5();
    /* 007a0153: mov ebp, eax */ r_ebp = r_eax;
    /* 007a0155: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0158: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a015a: je 0x7a023f */ if (fZ) goto L_007a023f;
L_007a0160:; BB(0x007a0160);
    /* 007a0160: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0165: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0167: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a0168: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x7a016du); f_0086b5cc();
    /* 007a016d: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0172: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7a0177u); f_008581c5();
    /* 007a0177: mov esi, eax */ r_esi = r_eax;
    /* 007a0179: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a017c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a017e: je 0x7a0238 */ if (fZ) goto L_007a0238;
L_007a0184:; BB(0x007a0184);
    /* 007a0184: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 007a018a: mov ebx, dword ptr [0xab02b0] */ r_ebx = R32((u32)(0xab02b0u));
    /* 007a0190: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007a0194: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a0196: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a0198: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 007a019b: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a019d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007a01a1: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 007a01a6: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 007a01a8: mov edi, edx */ r_edi = r_edx;
    /* 007a01aa: shr edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007a01ad: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 007a01b0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a01b2: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 007a01b5: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a01b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a01b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7a01bdu); f_008581c5();
    /* 007a01bd: mov ebx, eax */ r_ebx = r_eax;
    /* 007a01bf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007a01c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a01c4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007a01c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a01c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a01ca: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7a01cfu); f_0086b6b8();
    /* 007a01cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a01d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a01d4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007a01d6: jbe 0x7a01ee */ if ((fC||fZ)) goto L_007a01ee;
L_007a01d8:; BB(0x007a01d8);
    /* 007a01d8: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a01db: jb 0x7a01e7 */ if (fC) goto L_007a01e7;
L_007a01dd:; BB(0x007a01dd);
    /* 007a01dd: lea eax, [edi - 6] */ r_eax = (u32)(r_edi+0xfffffffau);
L_007a01e0:; BB(0x007a01e0);
    /* 007a01e0: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a01e3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a01e5: jbe 0x7a01e0 */ if ((fC||fZ)) goto L_007a01e0;
L_007a01e7:; BB(0x007a01e7);
    /* 007a01e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a01ea: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a01ec: jb 0x7a01e7 */ if (fC) goto L_007a01e7;
L_007a01ee:; BB(0x007a01ee);
    /* 007a01ee: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 007a01f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a01f2: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007a01f6: mov ecx, esi */ r_ecx = r_esi;
    /* 007a01f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a01f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a01fa: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x7a01ffu); f_007a47dc();
    /* 007a01ff: mov edi, eax */ r_edi = r_eax;
    /* 007a0201: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0202: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7a0207u); f_00857e98();
    /* 007a0207: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0208: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7a020du); f_00857e98();
    /* 007a020d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0210: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007a0214: mov byte ptr [ebp], 0x6b */ W8((u32)(r_ebp), 0x6bu);
    /* 007a0218: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a021a: mov byte ptr [ebp + 1], dl */ W8((u32)(r_ebp+0x1u), (u8)r_edx);
    /* 007a021d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a021e: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 007a0222: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a0225: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007a0228: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a022a: lea ebx, [edi + edi + 8] */ r_ebx = (u32)(r_edi+r_edi+0x8u);
    /* 007a022e: mov dword ptr [ebp + 4], ebx */ W32((u32)(r_ebp+0x4u), r_ebx);
    /* 007a0231: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a0233: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x7a0238u); f_008005e0();
L_007a0238:; BB(0x007a0238);
    /* 007a0238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a0239: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7a023eu); f_00857e98();
    /* 007a023e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a023f:; BB(0x007a023f);
    /* 007a023f: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0244: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7a0249u); f_008581c5();
    /* 007a0249: mov ebp, eax */ r_ebp = r_eax;
    /* 007a024b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a024e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0250: je 0x7a0322 */ if (fZ) goto L_007a0322;
L_007a0256:; BB(0x007a0256);
    /* 007a0256: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a025b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a025d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a025e: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x7a0263u); f_0086b5cc();
    /* 007a0263: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0268: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7a026du); f_008581c5();
    /* 007a026d: mov esi, eax */ r_esi = r_eax;
    /* 007a026f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0272: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0274: je 0x7a031b */ if (fZ) goto L_007a031b;
L_007a027a:; BB(0x007a027a);
    /* 007a027a: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 007a0280: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007a0284: mov edi, dword ptr [0xab02b4] */ r_edi = R32((u32)(0xab02b4u));
    /* 007a028a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a028c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a028e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007a0292: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007a0295: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007a0298: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a029a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a029b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7a02a0u); f_008581c5();
    /* 007a02a0: mov ebx, eax */ r_ebx = r_eax;
    /* 007a02a2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007a02a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a02a7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007a02ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a02ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a02ad: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7a02b2u); f_0086b6b8();
    /* 007a02b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a02b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a02b7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a02b9: je 0x7a02d1 */ if (fZ) goto L_007a02d1;
L_007a02bb:; BB(0x007a02bb);
    /* 007a02bb: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a02be: jb 0x7a02ca */ if (fC) goto L_007a02ca;
L_007a02c0:; BB(0x007a02c0);
    /* 007a02c0: lea edx, [edi - 6] */ r_edx = (u32)(r_edi+0xfffffffau);
L_007a02c3:; BB(0x007a02c3);
    /* 007a02c3: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a02c6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a02c8: jbe 0x7a02c3 */ if ((fC||fZ)) goto L_007a02c3;
L_007a02ca:; BB(0x007a02ca);
    /* 007a02ca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a02cd: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007a02cf: jb 0x7a02ca */ if (fC) goto L_007a02ca;
L_007a02d1:; BB(0x007a02d1);
    /* 007a02d1: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 007a02d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a02d5: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007a02d9: mov ecx, esi */ r_ecx = r_esi;
    /* 007a02db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a02dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a02dd: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x7a02e2u); f_007a47dc();
    /* 007a02e2: mov edi, eax */ r_edi = r_eax;
    /* 007a02e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a02e5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7a02eau); f_00857e98();
    /* 007a02ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a02eb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7a02f0u); f_00857e98();
    /* 007a02f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a02f3: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007a02f7: mov byte ptr [ebp], 0x6c */ W8((u32)(r_ebp), 0x6cu);
    /* 007a02fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a02fd: mov byte ptr [ebp + 1], dl */ W8((u32)(r_ebp+0x1u), (u8)r_edx);
    /* 007a0300: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0301: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 007a0305: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a0308: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007a030b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a030d: lea ebx, [edi + edi + 8] */ r_ebx = (u32)(r_edi+r_edi+0x8u);
    /* 007a0311: mov dword ptr [ebp + 4], ebx */ W32((u32)(r_ebp+0x4u), r_ebx);
    /* 007a0314: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a0316: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x7a031bu); f_008005e0();
L_007a031b:; BB(0x007a031b);
    /* 007a031b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a031c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7a0321u); f_00857e98();
    /* 007a0321: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a0322:; BB(0x007a0322);
    /* 007a0322: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a0326: call 0x79cd30 */ r_esp -= 4; W32(r_esp, 0x7a032bu); f_0079cd30();
L_007a032b:; BB(0x007a032b);
    /* 007a032b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a032e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a032f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a0330: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a0331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a0332: ret  */ FN_RET(0x007a0128); r_esp += 4; return;
}

void f_007a0334(void) /* sub_7A0334 */
{
    FN_ENTER(0x007a0334);
    /* 007a0334: movzx eax, byte ptr [0xa46b96] */ r_eax = (u32)R8((u32)(0xa46b96u));
    /* 007a033b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a033d: jl 0x7a036e */ if ((fS!=fO)) goto L_007a036e;
L_007a033f:; BB(0x007a033f);
    /* 007a033f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a0342: jle 0x7a0363 */ if ((fZ||fS!=fO)) goto L_007a0363;
L_007a0344:; BB(0x007a0344);
    /* 007a0344: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a0347: jl 0x7a036e */ if ((fS!=fO)) goto L_007a036e;
L_007a0349:; BB(0x007a0349);
    /* 007a0349: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a034c: jg 0x7a036e */ if ((!fZ&&fS==fO)) goto L_007a036e;
L_007a034e:; BB(0x007a034e);
    /* 007a034e: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007a0354: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0356: je 0x7a036e */ if (fZ) goto L_007a036e;
L_007a0358:; BB(0x007a0358);
    /* 007a0358: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a035c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a035d: call 0x7f2e70 */ r_esp -= 4; W32(r_esp, 0x7a0362u); f_007f2e70();
    /* 007a0362: ret  */ FN_RET(0x007a0334); r_esp += 4; return;
L_007a0363:; BB(0x007a0363);
    /* 007a0363: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a0367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0368: call 0x482380 */ r_esp -= 4; W32(r_esp, 0x7a036du); f_00482380();
    /* 007a036d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a036e:; BB(0x007a036e);
    /* 007a036e: ret  */ FN_RET(0x007a0334); r_esp += 4; return;
}

void f_007a0370(void) /* sub_7A0370 */
{
    FN_ENTER(0x007a0370);
    /* 007a0370: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0371: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a0372: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a0375: mov edi, ecx */ r_edi = r_ecx;
    /* 007a0377: mov dword ptr [esp], 0x43ab0000 */ W32((u32)(r_esp), 0x43ab0000u);
    /* 007a037e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007a0382: mov dword ptr [esp + 4], 0x43100000 */ W32((u32)(r_esp+0x4u), 0x43100000u);
    /* 007a038a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a038b: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x7a0390u); f_0083ace8();
    /* 007a0390: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007a0394: lea eax, [edi + 0x1c] */ r_eax = (u32)(r_edi+0x1cu);
    /* 007a0397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0399: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x7a039eu); f_0083ad44();
    /* 007a039e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a03a1: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x7a03a6u); f_00719914();
    /* 007a03a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a03a8: jne 0x7a03b4 */ if (!fZ) goto L_007a03b4;
L_007a03aa:; BB(0x007a03aa);
    /* 007a03aa: mov dword ptr [0xaab190], 0 */ W32((u32)(0xaab190u), 0x0u);
L_007a03b4:; BB(0x007a03b4);
    /* 007a03b4: mov ecx, 0xa9caa0 */ r_ecx = 0xa9caa0u;
    /* 007a03b9: call 0x78f3e0 */ r_esp -= 4; W32(r_esp, 0x7a03beu); f_0078f3e0();
    /* 007a03be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a03c0: jne 0x7a03cb */ if (!fZ) goto L_007a03cb;
L_007a03c2:; BB(0x007a03c2);
    /* 007a03c2: call 0x7c012c */ r_esp -= 4; W32(r_esp, 0x7a03c7u); f_007c012c();
    /* 007a03c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a03c9: je 0x7a03f1 */ if (fZ) goto L_007a03f1;
L_007a03cb:; BB(0x007a03cb);
    /* 007a03cb: mov ecx, dword ptr [0xaab190] */ r_ecx = R32((u32)(0xaab190u));
    /* 007a03d1: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 007a03d4: mov byte ptr [edi + 0x28], 0 */ W8((u32)(r_edi+0x28u), 0x0u);
    /* 007a03d8: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 007a03db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a03dd: je 0x7a03f1 */ if (fZ) goto L_007a03f1;
L_007a03df:; BB(0x007a03df);
    /* 007a03df: je 0x7a03e7 */ if (fZ) goto L_007a03e7;
L_007a03e1:; BB(0x007a03e1);
    /* 007a03e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a03e3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007a03e5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7a03e7u); call_ind(t); }
L_007a03e7:; BB(0x007a03e7);
    /* 007a03e7: mov dword ptr [0xaab190], 0 */ W32((u32)(0xaab190u), 0x0u);
L_007a03f1:; BB(0x007a03f1);
    /* 007a03f1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a03f7: call 0x7be1fc */ r_esp -= 4; W32(r_esp, 0x7a03fcu); f_007be1fc();
    /* 007a03fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a03fd: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 007a0400: sub ebp, dword ptr [edi + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007a0403: movzx edx, byte ptr [edi + 0x28] */ r_edx = (u32)R8((u32)(r_edi+0x28u));
    /* 007a0407: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 007a040a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a040c: jne 0x7a0428 */ if (!fZ) goto L_007a0428;
L_007a040e:; BB(0x007a040e);
    /* 007a040e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0410: je 0x7a0483 */ if (fZ) goto L_007a0483;
L_007a0412:; BB(0x007a0412);
    /* 007a0412: lea edx, [ebp + 0x1e] */ r_edx = (u32)(r_ebp+0x1eu);
    /* 007a0415: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a0417: jbe 0x7a0483 */ if ((fC||fZ)) goto L_007a0483;
L_007a0419:; BB(0x007a0419);
    /* 007a0419: mov eax, dword ptr [0xaab190] */ r_eax = R32((u32)(0xaab190u));
    /* 007a041e: mov byte ptr [edi + 0x28], 1 */ W8((u32)(r_edi+0x28u), 0x1u);
    /* 007a0422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0424: jne 0x7a0483 */ if (!fZ) goto L_007a0483;
L_007a0426:; BB(0x007a0426);
    /* 007a0426: jmp 0x7a0489 */ goto L_007a0489;
L_007a0428:; BB(0x007a0428);
    /* 007a0428: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a042b: jne 0x7a0483 */ if (!fZ) goto L_007a0483;
L_007a042d:; BB(0x007a042d);
    /* 007a042d: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a042f: jbe 0x7a0468 */ if ((fC||fZ)) goto L_007a0468;
L_007a0431:; BB(0x007a0431);
    /* 007a0431: mov ecx, dword ptr [0xaab190] */ r_ecx = R32((u32)(0xaab190u));
    /* 007a0437: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0439: je 0x7a0441 */ if (fZ) goto L_007a0441;
L_007a043b:; BB(0x007a043b);
    /* 007a043b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a043d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007a043f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7a0441u); call_ind(t); }
L_007a0441:; BB(0x007a0441);
    /* 007a0441: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 007a0445: mov dword ptr [0xaab190], 0 */ W32((u32)(0xaab190u), 0x0u);
    /* 007a044f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a0454: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 007a0458: mov dword ptr [0xaab20c], 1 */ W32((u32)(0xaab20cu), 0x1u);
    /* 007a0462: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0465: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a0466: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a0467: ret  */ FN_RET(0x007a0370); r_esp += 4; return;
L_007a0468:; BB(0x007a0468);
    /* 007a0468: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007a046a: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a046fu); f_00793168();
    /* 007a046f: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007a0472: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a0474: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0476: push 0xa9f760 */ { u32 v = 0xa9f760u; r_esp -= 4; W32(r_esp, v); }
    /* 007a047b: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7a0480u); f_00857e29();
    /* 007a0480: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007a0483:; BB(0x007a0483);
    /* 007a0483: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0486: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a0487: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a0488: ret  */ FN_RET(0x007a0370); r_esp += 4; return;
L_007a0489:; BB(0x007a0489);
    /* 007a0489: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x7a048eu); f_00719914();
    /* 007a048e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0490: je 0x7a0483 */ if (fZ) goto L_007a0483;
L_007a0492:; BB(0x007a0492);
    /* 007a0492: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0494: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a0499u); f_00793168();
    /* 007a0499: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 007a049c: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a049e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a049f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a04a0: push 0xa9f760 */ { u32 v = 0xa9f760u; r_esp -= 4; W32(r_esp, v); }
    /* 007a04a5: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7a04aau); f_00857e29();
    /* 007a04aa: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 007a04af: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a04b4u); f_0073ec50();
    /* 007a04b4: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 007a04b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a04ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a04bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a04bc: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x7a04c1u); f_0073a8dc();
    /* 007a04c1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a04c4: mov dword ptr [0xaab190], eax */ W32((u32)(0xaab190u), r_eax);
    /* 007a04c9: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007a04ce: mov ecx, eax */ r_ecx = r_eax;
    /* 007a04d0: push 0xa9f760 */ { u32 v = 0xa9f760u; r_esp -= 4; W32(r_esp, v); }
    /* 007a04d5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a04dau); f_0073ae38();
    /* 007a04da: push 0x46ea6000 */ { u32 v = 0x46ea6000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a04df: mov ecx, dword ptr [0xaab190] */ r_ecx = R32((u32)(0xaab190u));
    /* 007a04e5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7a04eau); f_00712624();
    /* 007a04ea: mov ecx, dword ptr [0xaab190] */ r_ecx = R32((u32)(0xaab190u));
    /* 007a04f0: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x7a04f5u); f_0073b0f0();
    /* 007a04f5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a04f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a04f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a04fa: ret  */ FN_RET(0x007a0370); r_esp += 4; return;
}

void f_007a04fc(void)
{
    FN_ENTER(0x007a04fc);
    /* 007a04fc: mov dword ptr [0xaab184], 0x3f800000 */ W32((u32)(0xaab184u), 0x3f800000u);
    /* 007a0506: mov dword ptr [0xaab188], 0x41000000 */ W32((u32)(0xaab188u), 0x41000000u);
    /* 007a0510: mov dword ptr [0xaab18c], 0x3fc00000 */ W32((u32)(0xaab18cu), 0x3fc00000u);
    /* 007a051a: push 0x79cb0c */ { u32 v = 0x79cb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a051f: push 0x797654 */ { u32 v = 0x797654u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0524: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0526: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 007a052b: push 0xaa6d40 */ { u32 v = 0xaa6d40u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0530: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7a0535u); f_00858736();
    /* 007a0535: push 0x7a0580 */ { u32 v = 0x7a0580u; r_esp -= 4; W32(r_esp, v); }
    /* 007a053a: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x7a053fu); f_0085909d();
    /* 007a053f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0540: mov eax, 8 */ r_eax = 0x8u;
    /* 007a0545: mov word ptr [0xa9f9e0], ax */ W16((u32)(0xa9f9e0u), (u16)r_eax);
    /* 007a054b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a054d: mov eax, 0xc */ r_eax = 0xcu;
    /* 007a0552: mov byte ptr [0xa9f9e2], dl */ W8((u32)(0xa9f9e2u), (u8)r_edx);
    /* 007a0558: mov byte ptr [0xa9f9e3], dl */ W8((u32)(0xa9f9e3u), (u8)r_edx);
    /* 007a055e: mov dword ptr [0xa9f9e4], edx */ W32((u32)(0xa9f9e4u), r_edx);
    /* 007a0564: mov edx, 0xaaacc0 */ r_edx = 0xaaacc0u;
L_007a0569:; BB(0x007a0569);
    /* 007a0569: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a056b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007a056e: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007a0571: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007a0574: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 007a0577: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a057a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a057d: jne 0x7a0569 */ if (!fZ) goto L_007a0569;
L_007a057f:; BB(0x007a057f);
    /* 007a057f: ret  */ FN_RET(0x007a04fc); r_esp += 4; return;
}

void f_007a0580(void) /* sub_7A0580 */
{
    FN_ENTER(0x007a0580);
    /* 007a0580: push 0x79cb0c */ { u32 v = 0x79cb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0585: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0587: push 0x520 */ { u32 v = 0x520u; r_esp -= 4; W32(r_esp, v); }
    /* 007a058c: push 0xaa6d40 */ { u32 v = 0xaa6d40u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0591: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7a0596u); f_008586d6();
    /* 007a0596: ret  */ FN_RET(0x007a0580); r_esp += 4; return;
}

void f_007a0598(void) /* sub_7A0598 */
{
    FN_ENTER(0x007a0598);
    /* 007a0598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0599: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a059e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a05a0: je 0x7a05e4 */ if (fZ) goto L_007a05e4;
L_007a05a2:; BB(0x007a05a2);
    /* 007a05a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a05a4: je 0x7a05bf */ if (fZ) goto L_007a05bf;
L_007a05a6:; BB(0x007a05a6);
    /* 007a05a6: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 007a05ab: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a05b0u); f_00793168();
    /* 007a05b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a05b1: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a05b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a05b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a05ba: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a05bfu); f_0073ae38();
L_007a05bf:; BB(0x007a05bf);
    /* 007a05bf: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007a05c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a05c7: je 0x7a05d8 */ if (fZ) goto L_007a05d8;
L_007a05c9:; BB(0x007a05c9);
    /* 007a05c9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a05ceu); f_007127b0();
    /* 007a05ce: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007a05d8:; BB(0x007a05d8);
    /* 007a05d8: mov dword ptr [0xaab218], 0x40 */ W32((u32)(0xaab218u), 0x40u);
    /* 007a05e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a05e3: ret  */ FN_RET(0x007a0598); r_esp += 4; return;
L_007a05e4:; BB(0x007a05e4);
    /* 007a05e4: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007a05e9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a05eeu); f_0073ec50();
    /* 007a05ee: mov esi, eax */ r_esi = r_eax;
    /* 007a05f0: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a05f5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a05fau); f_0073ec50();
    /* 007a05fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a05fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a05fc: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a0601u); f_0073a888();
    /* 007a0601: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0604: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 007a0609: jmp 0x7a05a2 */ goto L_007a05a2;
}

void f_007a060c(void) /* sub_7A060C */
{
    FN_ENTER(0x007a060c);
    /* 007a060c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a060d: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a0613: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a0618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a061a: je 0x7a069f */ if (fZ) goto L_007a069f;
L_007a0620:; BB(0x007a0620);
    /* 007a0620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0622: je 0x7a0662 */ if (fZ) goto L_007a0662;
L_007a0624:; BB(0x007a0624);
    /* 007a0624: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 007a0629: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007a062e: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 007a0635: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007a0638: mov esi, dword ptr [edx + ecx*4] */ r_esi = R32((u32)(r_edx+r_ecx*4));
    /* 007a063b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a0640u); f_00793168();
    /* 007a0640: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007a0644: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0649: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7a064eu); f_00857e29();
    /* 007a064e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0651: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0657: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007a065a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a065c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a065d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a0662u); f_0073ae38();
L_007a0662:; BB(0x007a0662);
    /* 007a0662: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007a0668: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a066a: je 0x7a067b */ if (fZ) goto L_007a067b;
L_007a066c:; BB(0x007a066c);
    /* 007a066c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a0671u); f_007127b0();
    /* 007a0671: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007a067b:; BB(0x007a067b);
    /* 007a067b: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 007a0682: mov dword ptr [0xaab218], 0x48 */ W32((u32)(0xaab218u), 0x48u);
    /* 007a068c: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a0691: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 007a0697: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a069d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a069e: ret  */ FN_RET(0x007a060c); r_esp += 4; return;
L_007a069f:; BB(0x007a069f);
    /* 007a069f: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007a06a4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a06a9u); f_0073ec50();
    /* 007a06a9: mov esi, eax */ r_esi = r_eax;
    /* 007a06ab: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a06b0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a06b5u); f_0073ec50();
    /* 007a06b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a06b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a06b7: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a06bcu); f_0073a888();
    /* 007a06bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a06bf: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 007a06c4: jmp 0x7a0620 */ goto L_007a0620;
}

void f_007a06cc(void) /* sub_7A06CC */
{
    FN_ENTER(0x007a06cc);
    /* 007a06cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a06cd: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a06d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a06d4: je 0x7a0715 */ if (fZ) goto L_007a0715;
L_007a06d6:; BB(0x007a06d6);
    /* 007a06d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a06d8: je 0x7a06f0 */ if (fZ) goto L_007a06f0;
L_007a06da:; BB(0x007a06da);
    /* 007a06da: push 0x7a */ { u32 v = 0x7au; r_esp -= 4; W32(r_esp, v); }
    /* 007a06dc: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a06e1u); f_00793168();
    /* 007a06e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a06e2: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a06e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a06ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a06eb: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a06f0u); f_0073ae38();
L_007a06f0:; BB(0x007a06f0);
    /* 007a06f0: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007a06f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a06f8: je 0x7a0709 */ if (fZ) goto L_007a0709;
L_007a06fa:; BB(0x007a06fa);
    /* 007a06fa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a06ffu); f_007127b0();
    /* 007a06ff: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007a0709:; BB(0x007a0709);
    /* 007a0709: mov dword ptr [0xaab218], 0x40 */ W32((u32)(0xaab218u), 0x40u);
    /* 007a0713: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a0714: ret  */ FN_RET(0x007a06cc); r_esp += 4; return;
L_007a0715:; BB(0x007a0715);
    /* 007a0715: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007a071a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a071fu); f_0073ec50();
    /* 007a071f: mov esi, eax */ r_esi = r_eax;
    /* 007a0721: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0726: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a072bu); f_0073ec50();
    /* 007a072b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a072c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a072d: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a0732u); f_0073a888();
    /* 007a0732: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0735: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 007a073a: jmp 0x7a06d6 */ goto L_007a06d6;
}

void f_007a073c(void) /* sub_7A073C */
{
    FN_ENTER(0x007a073c);
    /* 007a073c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a073d: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a0742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0744: je 0x7a0785 */ if (fZ) goto L_007a0785;
L_007a0746:; BB(0x007a0746);
    /* 007a0746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0748: je 0x7a0760 */ if (fZ) goto L_007a0760;
L_007a074a:; BB(0x007a074a);
    /* 007a074a: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 007a074c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a0751u); f_00793168();
    /* 007a0751: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0752: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0758: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a075a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a075b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a0760u); f_0073ae38();
L_007a0760:; BB(0x007a0760);
    /* 007a0760: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007a0766: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0768: je 0x7a0779 */ if (fZ) goto L_007a0779;
L_007a076a:; BB(0x007a076a);
    /* 007a076a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a076fu); f_007127b0();
    /* 007a076f: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007a0779:; BB(0x007a0779);
    /* 007a0779: mov dword ptr [0xaab218], 0x3a */ W32((u32)(0xaab218u), 0x3au);
    /* 007a0783: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a0784: ret  */ FN_RET(0x007a073c); r_esp += 4; return;
L_007a0785:; BB(0x007a0785);
    /* 007a0785: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007a078a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a078fu); f_0073ec50();
    /* 007a078f: mov esi, eax */ r_esi = r_eax;
    /* 007a0791: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0796: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a079bu); f_0073ec50();
    /* 007a079b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a079c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a079d: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a07a2u); f_0073a888();
    /* 007a07a2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a07a5: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 007a07aa: jmp 0x7a0746 */ goto L_007a0746;
}

void f_007a07ac(void) /* sub_7A07AC */
{
    FN_ENTER(0x007a07ac);
    /* 007a07ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a07ad: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a07b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a07b4: je 0x7a07f5 */ if (fZ) goto L_007a07f5;
L_007a07b6:; BB(0x007a07b6);
    /* 007a07b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a07b8: je 0x7a07d0 */ if (fZ) goto L_007a07d0;
L_007a07ba:; BB(0x007a07ba);
    /* 007a07ba: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 007a07bc: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a07c1u); f_00793168();
    /* 007a07c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a07c2: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a07c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a07ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a07cb: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a07d0u); f_0073ae38();
L_007a07d0:; BB(0x007a07d0);
    /* 007a07d0: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007a07d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a07d8: je 0x7a07e9 */ if (fZ) goto L_007a07e9;
L_007a07da:; BB(0x007a07da);
    /* 007a07da: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a07dfu); f_007127b0();
    /* 007a07df: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007a07e9:; BB(0x007a07e9);
    /* 007a07e9: mov dword ptr [0xaab218], 0x33 */ W32((u32)(0xaab218u), 0x33u);
    /* 007a07f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a07f4: ret  */ FN_RET(0x007a07ac); r_esp += 4; return;
L_007a07f5:; BB(0x007a07f5);
    /* 007a07f5: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007a07fa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a07ffu); f_0073ec50();
    /* 007a07ff: mov esi, eax */ r_esi = r_eax;
    /* 007a0801: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0806: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a080bu); f_0073ec50();
    /* 007a080b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a080c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a080d: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a0812u); f_0073a888();
    /* 007a0812: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0815: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 007a081a: jmp 0x7a07b6 */ goto L_007a07b6;
}

void f_007a081c(void) /* sub_7A081C */
{
    FN_ENTER(0x007a081c);
    /* 007a081c: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007a0822: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0824: je 0x7a0835 */ if (fZ) goto L_007a0835;
L_007a0826:; BB(0x007a0826);
    /* 007a0826: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7a082bu); f_0073d160();
    /* 007a082b: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_007a0835:; BB(0x007a0835);
    /* 007a0835: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a083a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a083c: je 0x7a08f4 */ if (fZ) goto L_007a08f4;
L_007a0842:; BB(0x007a0842);
    /* 007a0842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0844: je 0x7a08e7 */ if (fZ) goto L_007a08e7;
L_007a084a:; BB(0x007a084a);
    /* 007a084a: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 007a0850: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0852: je 0x7a0877 */ if (fZ) goto L_007a0877;
L_007a0854:; BB(0x007a0854);
    /* 007a0854: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0856: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a085bu); f_00793168();
    /* 007a085b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a085c: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0862: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0865: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a086au); f_0073ae38();
    /* 007a086a: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 007a0870: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
    /* 007a0875: jmp 0x7a08a4 */ goto L_007a08a4;
L_007a0877:; BB(0x007a0877);
    /* 007a0877: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
    /* 007a087c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a087e: je 0x7a08a4 */ if (fZ) goto L_007a08a4;
L_007a0880:; BB(0x007a0880);
    /* 007a0880: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0885: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a088au); f_00793168();
    /* 007a088a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a088b: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0891: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0894: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a0899u); f_0073ae38();
    /* 007a0899: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 007a089f: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
L_007a08a4:; BB(0x007a08a4);
    /* 007a08a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a08a6: je 0x7a08c0 */ if (fZ) goto L_007a08c0;
L_007a08a8:; BB(0x007a08a8);
    /* 007a08a8: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 007a08ac: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 007a08b6: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a08bc: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_007a08c0:; BB(0x007a08c0);
    /* 007a08c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a08c2: je 0x7a08dc */ if (fZ) goto L_007a08dc;
L_007a08c4:; BB(0x007a08c4);
    /* 007a08c4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 007a08c8: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 007a08d2: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a08d8: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_007a08dc:; BB(0x007a08dc);
    /* 007a08dc: mov dword ptr [0xaab218], 0x23 */ W32((u32)(0xaab218u), 0x23u);
    /* 007a08e6: ret  */ FN_RET(0x007a081c); r_esp += 4; return;
L_007a08e7:; BB(0x007a08e7);
    /* 007a08e7: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 007a08ed: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
    /* 007a08f2: jmp 0x7a08a4 */ goto L_007a08a4;
L_007a08f4:; BB(0x007a08f4);
    /* 007a08f4: push 0x9ff514 */ { u32 v = 0x9ff514u; r_esp -= 4; W32(r_esp, v); }
    /* 007a08f9: push 0x9ff50c */ { u32 v = 0x9ff50cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a08fe: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a0903u); f_0073a888();
    /* 007a0903: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0906: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 007a090b: jmp 0x7a0842 */ goto L_007a0842;
}

void f_007a0910(void) /* sub_7A0910 */
{
    FN_ENTER(0x007a0910);
    /* 007a0910: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0911: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a0917: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a091c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a091e: je 0x7a09a6 */ if (fZ) goto L_007a09a6;
L_007a0924:; BB(0x007a0924);
    /* 007a0924: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0926: je 0x7a0994 */ if (fZ) goto L_007a0994;
L_007a0928:; BB(0x007a0928);
    /* 007a0928: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007a092b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0932: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0933: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7a0938u); f_0086b688();
    /* 007a0938: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a093b: mov eax, dword ptr [esp + 0x108] */ r_eax = R32((u32)(r_esp+0x108u));
    /* 007a0942: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0945: jne 0x7a0966 */ if (!fZ) goto L_007a0966;
L_007a0947:; BB(0x007a0947);
    /* 007a0947: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 007a094c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a0951u); f_00793168();
    /* 007a0951: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007a0955: push 0xa9f960 */ { u32 v = 0xa9f960u; r_esp -= 4; W32(r_esp, v); }
    /* 007a095a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a095b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a095c: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7a0961u); f_00857e29();
    /* 007a0961: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0964: jmp 0x7a0983 */ goto L_007a0983;
L_007a0966:; BB(0x007a0966);
    /* 007a0966: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 007a096b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a0970u); f_00793168();
    /* 007a0970: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007a0974: push 0xa9f960 */ { u32 v = 0xa9f960u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a097a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a097b: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7a0980u); f_00857e29();
    /* 007a0980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007a0983:; BB(0x007a0983);
    /* 007a0983: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0989: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007a098c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a098e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a098f: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a0994u); f_0073ae38();
L_007a0994:; BB(0x007a0994);
    /* 007a0994: mov dword ptr [0xaab218], 0x54 */ W32((u32)(0xaab218u), 0x54u);
    /* 007a099e: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a09a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a09a5: ret  */ FN_RET(0x007a0910); r_esp += 4; return;
L_007a09a6:; BB(0x007a09a6);
    /* 007a09a6: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007a09ab: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a09b0u); f_0073ec50();
    /* 007a09b0: mov esi, eax */ r_esi = r_eax;
    /* 007a09b2: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a09b7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a09bcu); f_0073ec50();
    /* 007a09bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a09bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a09be: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a09c3u); f_0073a888();
    /* 007a09c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a09c6: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 007a09cb: jmp 0x7a0924 */ goto L_007a0924;
}

void f_007a09d0(void) /* sub_7A09D0 */
{
    FN_ENTER(0x007a09d0);
    /* 007a09d0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a09d4: call 0x7a0f18 */ r_esp -= 4; W32(r_esp, 0x7a09d9u); f_007a0f18();
    /* 007a09d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a09da: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7a09dfu); f_00798468();
    /* 007a09df: mov dword ptr [0xaab218], 0xd */ W32((u32)(0xaab218u), 0xdu);
    /* 007a09e9: ret  */ FN_RET(0x007a09d0); r_esp += 4; return;
}

void f_007a09ec(void) /* sub_7A09EC */
{
    FN_ENTER(0x007a09ec);
    /* 007a09ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a09ed: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 007a09f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a09f4: je 0x7a0a7a */ if (fZ) goto L_007a0a7a;
L_007a09fa:; BB(0x007a09fa);
    /* 007a09fa: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 007a09ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0a01: jne 0x7a0a5c */ if (!fZ) goto L_007a0a5c;
L_007a0a03:; BB(0x007a0a03);
    /* 007a0a03: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 007a0a08: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a0a0b: je 0x7a0a70 */ if (fZ) goto L_007a0a70;
L_007a0a0d:; BB(0x007a0a0d);
    /* 007a0a0d: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0a0f: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a0a14u); f_00793168();
    /* 007a0a14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0a15: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7a0a1au); f_0079a8c4();
    /* 007a0a1a: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007a0a20: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7a0a25u); f_00712c00();
    /* 007a0a25: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7a0a2au); f_00798468();
    /* 007a0a2a: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 007a0a30: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 007a0a3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0a3c: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 007a0a46: je 0x7a0a70 */ if (fZ) goto L_007a0a70;
L_007a0a48:; BB(0x007a0a48);
    /* 007a0a48: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 007a0a4f: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0a54: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
    /* 007a0a5a: jmp 0x7a0a70 */ goto L_007a0a70;
L_007a0a5c:; BB(0x007a0a5c);
    /* 007a0a5c: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 007a0a66: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_007a0a70:; BB(0x007a0a70);
    /* 007a0a70: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_007a0a7a:; BB(0x007a0a7a);
    /* 007a0a7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0a7b: ret  */ FN_RET(0x007a09ec); r_esp += 4; return;
}

void f_007a0a7c(void) /* sub_7A0A7C */
{
    FN_ENTER(0x007a0a7c);
    /* 007a0a7c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0a80: call 0x7a0f18 */ r_esp -= 4; W32(r_esp, 0x7a0a85u); f_007a0f18();
    /* 007a0a85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0a86: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7a0a8bu); f_00798468();
    /* 007a0a8b: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 007a0a95: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 007a0a9f: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
    /* 007a0aa9: ret  */ FN_RET(0x007a0a7c); r_esp += 4; return;
}

void f_007a0aac(void) /* sub_7A0AAC */
{
    FN_ENTER(0x007a0aac);
    /* 007a0aac: mov eax, dword ptr [0xaab260] */ r_eax = R32((u32)(0xaab260u));
    /* 007a0ab1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0ab3: je 0x7a0b24 */ if (fZ) goto L_007a0b24;
L_007a0ab5:; BB(0x007a0ab5);
    /* 007a0ab5: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7a0abau); f_00694c6c();
    /* 007a0aba: mov edx, eax */ r_edx = r_eax;
    /* 007a0abc: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 007a0ac1: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 007a0ac4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a0ac6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a0ac8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a0aca: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007a0acc: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007a0ad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0ad4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a0ad9u); f_007c1160();
    /* 007a0ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0adb: je 0x7a0b1e */ if (fZ) goto L_007a0b1e;
L_007a0add:; BB(0x007a0add);
    /* 007a0add: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0ae3: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x7a0ae8u); f_0073b170();
    /* 007a0ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0aea: jne 0x7a0af9 */ if (!fZ) goto L_007a0af9;
L_007a0aec:; BB(0x007a0aec);
    /* 007a0aec: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0af2: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x7a0af7u); f_0073b0f0();
    /* 007a0af7: jmp 0x7a0b1e */ goto L_007a0b1e;
L_007a0af9:; BB(0x007a0af9);
    /* 007a0af9: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0aff: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a0b04u); f_007127b0();
    /* 007a0b04: mov dword ptr [0xaab260], 0 */ W32((u32)(0xaab260u), 0x0u);
    /* 007a0b0e: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7a0b13u); f_0079a050();
    /* 007a0b13: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007a0b19: call 0x7d41f8 */ r_esp -= 4; W32(r_esp, 0x7a0b1eu); f_007d41f8();
L_007a0b1e:; BB(0x007a0b1e);
    /* 007a0b1e: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7a0b23u); f_007bebe8();
    /* 007a0b23: ret  */ FN_RET(0x007a0aac); r_esp += 4; return;
L_007a0b24:; BB(0x007a0b24);
    /* 007a0b24: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7a0b29u); f_0079a050();
    /* 007a0b29: jmp 0x7a0b1e */ goto L_007a0b1e;
}

void f_007a0b2c(void) /* sub_7A0B2C */
{
    FN_ENTER(0x007a0b2c);
    /* 007a0b2c: mov eax, dword ptr [0xaab260] */ r_eax = R32((u32)(0xaab260u));
    /* 007a0b31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0b33: je 0x7a0c4e */ if (fZ) goto L_007a0c4e;
L_007a0b39:; BB(0x007a0b39);
    /* 007a0b39: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7a0b3eu); f_00694c6c();
    /* 007a0b3e: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 007a0b44: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a0b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0b4b: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007a0b4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0b50: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0b52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0b54: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007a0b5b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a0b60u); f_007c1160();
    /* 007a0b60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0b62: je 0x7a0ba2 */ if (fZ) goto L_007a0ba2;
L_007a0b64:; BB(0x007a0b64);
    /* 007a0b64: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0b6a: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x7a0b6fu); f_0073b170();
    /* 007a0b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0b71: jne 0x7a0b83 */ if (!fZ) goto L_007a0b83;
L_007a0b73:; BB(0x007a0b73);
    /* 007a0b73: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0b79: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x7a0b7eu); f_0073b0f0();
    /* 007a0b7e: jmp 0x7a0c48 */ goto L_007a0c48;
L_007a0b83:; BB(0x007a0b83);
    /* 007a0b83: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0b89: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a0b8eu); f_007127b0();
    /* 007a0b8e: mov dword ptr [0xaab260], 0 */ W32((u32)(0xaab260u), 0x0u);
    /* 007a0b98: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7a0b9du); f_0079a050();
    /* 007a0b9d: jmp 0x7a0c48 */ goto L_007a0c48;
L_007a0ba2:; BB(0x007a0ba2);
    /* 007a0ba2: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7a0ba7u); f_00694c6c();
    /* 007a0ba7: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0bad: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007a0bb0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0bb2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0bb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0bb6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007a0bbd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a0bc2u); f_007c1160();
    /* 007a0bc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0bc4: je 0x7a0bd8 */ if (fZ) goto L_007a0bd8;
L_007a0bc6:; BB(0x007a0bc6);
    /* 007a0bc6: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0bcc: push 0xc0c00000 */ { u32 v = 0xc0c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0bd1: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x7a0bd6u); f_0073c554();
    /* 007a0bd6: jmp 0x7a0c48 */ goto L_007a0c48;
L_007a0bd8:; BB(0x007a0bd8);
    /* 007a0bd8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7a0bddu); f_00694c6c();
    /* 007a0bdd: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0be3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007a0be6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0be8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0bea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0bec: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007a0bf3: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a0bf8u); f_007c1160();
    /* 007a0bf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0bfa: je 0x7a0c0e */ if (fZ) goto L_007a0c0e;
L_007a0bfc:; BB(0x007a0bfc);
    /* 007a0bfc: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0c01: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0c07: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x7a0c0cu); f_0073c554();
    /* 007a0c0c: jmp 0x7a0c48 */ goto L_007a0c48;
L_007a0c0e:; BB(0x007a0c0e);
    /* 007a0c0e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0c10: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x7a0c15u); f_007bfe60();
    /* 007a0c15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0c18: je 0x7a0c2c */ if (fZ) goto L_007a0c2c;
L_007a0c1a:; BB(0x007a0c1a);
    /* 007a0c1a: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0c20: push 0xc30c0000 */ { u32 v = 0xc30c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0c25: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x7a0c2au); f_0073c554();
    /* 007a0c2a: jmp 0x7a0c48 */ goto L_007a0c48;
L_007a0c2c:; BB(0x007a0c2c);
    /* 007a0c2c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0c2e: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x7a0c33u); f_007bfe60();
    /* 007a0c33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0c34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0c36: je 0x7a0c48 */ if (fZ) goto L_007a0c48;
L_007a0c38:; BB(0x007a0c38);
    /* 007a0c38: push 0x430c0000 */ { u32 v = 0x430c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0c3d: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0c43: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x7a0c48u); f_0073c554();
L_007a0c48:; BB(0x007a0c48);
    /* 007a0c48: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7a0c4du); f_007bebe8();
    /* 007a0c4d: ret  */ FN_RET(0x007a0b2c); r_esp += 4; return;
L_007a0c4e:; BB(0x007a0c4e);
    /* 007a0c4e: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7a0c53u); f_0079a050();
    /* 007a0c53: jmp 0x7a0c48 */ goto L_007a0c48;
}

void f_007a0c58(void) /* sub_7A0C58 */
{
    FN_ENTER(0x007a0c58);
    /* 007a0c58: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007a0c5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0c5f: je 0x7a0cc8 */ if (fZ) goto L_007a0cc8;
L_007a0c61:; BB(0x007a0c61);
    /* 007a0c61: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7a0c66u); f_00694c6c();
    /* 007a0c66: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 007a0c6c: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a0c72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0c73: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007a0c76: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0c78: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0c7a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0c7c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007a0c83: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7a0c88u); f_007c1160();
    /* 007a0c88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0c8a: je 0x7a0cc2 */ if (fZ) goto L_007a0cc2;
L_007a0c8c:; BB(0x007a0c8c);
    /* 007a0c8c: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0c92: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x7a0c97u); f_0073b170();
    /* 007a0c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0c99: jne 0x7a0ca8 */ if (!fZ) goto L_007a0ca8;
L_007a0c9b:; BB(0x007a0c9b);
    /* 007a0c9b: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0ca1: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x7a0ca6u); f_0073b0f0();
    /* 007a0ca6: jmp 0x7a0cc2 */ goto L_007a0cc2;
L_007a0ca8:; BB(0x007a0ca8);
    /* 007a0ca8: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0cae: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a0cb3u); f_007127b0();
    /* 007a0cb3: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
    /* 007a0cbd: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7a0cc2u); f_0079a050();
L_007a0cc2:; BB(0x007a0cc2);
    /* 007a0cc2: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7a0cc7u); f_007bebe8();
    /* 007a0cc7: ret  */ FN_RET(0x007a0c58); r_esp += 4; return;
L_007a0cc8:; BB(0x007a0cc8);
    /* 007a0cc8: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7a0ccdu); f_0079a050();
    /* 007a0ccd: jmp 0x7a0cc2 */ goto L_007a0cc2;
}

void f_007a0cd0(void) /* sub_7A0CD0 */
{
    FN_ENTER(0x007a0cd0);
    /* 007a0cd0: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 007a0cd5: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0cd8: je 0x7a0d06 */ if (fZ) goto L_007a0d06;
L_007a0cda:; BB(0x007a0cda);
    /* 007a0cda: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0cdd: je 0x7a0d00 */ if (fZ) goto L_007a0d00;
L_007a0cdf:; BB(0x007a0cdf);
    /* 007a0cdf: cmp eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0ce2: je 0x7a0cfa */ if (fZ) goto L_007a0cfa;
L_007a0ce4:; BB(0x007a0ce4);
    /* 007a0ce4: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0ce7: jne 0x7a0cef */ if (!fZ) goto L_007a0cef;
L_007a0ce9:; BB(0x007a0ce9);
    /* 007a0ce9: call 0x7a060c */ r_esp -= 4; W32(r_esp, 0x7a0ceeu); f_007a060c();
    /* 007a0cee: ret  */ FN_RET(0x007a0cd0); r_esp += 4; return;
L_007a0cef:; BB(0x007a0cef);
    /* 007a0cef: cmp eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a0cf2: jne 0x7a0cff */ if (!fZ) goto L_007a0cff;
L_007a0cf4:; BB(0x007a0cf4);
    /* 007a0cf4: call 0x7a0598 */ r_esp -= 4; W32(r_esp, 0x7a0cf9u); f_007a0598();
    /* 007a0cf9: ret  */ FN_RET(0x007a0cd0); r_esp += 4; return;
L_007a0cfa:; BB(0x007a0cfa);
    /* 007a0cfa: call 0x7a06cc */ r_esp -= 4; W32(r_esp, 0x7a0cffu); f_007a06cc();
L_007a0cff:; BB(0x007a0cff);
    /* 007a0cff: ret  */ FN_RET(0x007a0cd0); r_esp += 4; return;
L_007a0d00:; BB(0x007a0d00);
    /* 007a0d00: call 0x7a073c */ r_esp -= 4; W32(r_esp, 0x7a0d05u); f_007a073c();
    /* 007a0d05: ret  */ FN_RET(0x007a0cd0); r_esp += 4; return;
L_007a0d06:; BB(0x007a0d06);
    /* 007a0d06: call 0x7a07ac */ r_esp -= 4; W32(r_esp, 0x7a0d0bu); f_007a07ac();
    /* 007a0d0b: ret  */ FN_RET(0x007a0cd0); r_esp += 4; return;
}

void f_007a0d0c(void) /* sub_7A0D0C */
{
    FN_ENTER(0x007a0d0c);
    /* 007a0d0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d0e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007a0d12: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a0d16: mov dword ptr [0xa9c4dc], eax */ W32((u32)(0xa9c4dcu), r_eax);
    /* 007a0d1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d1c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7a0d21u); f_0068d5a8();
    /* 007a0d21: mov ebp, eax */ r_ebp = r_eax;
    /* 007a0d23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0d26: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0d28: je 0x7a0d53 */ if (fZ) goto L_007a0d53;
L_007a0d2a:; BB(0x007a0d2a);
    /* 007a0d2a: mov edx, dword ptr [0xaaecf8] */ r_edx = R32((u32)(0xaaecf8u));
    /* 007a0d30: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 007a0d33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0d35: je 0x7a0d46 */ if (fZ) goto L_007a0d46;
L_007a0d37:; BB(0x007a0d37);
    /* 007a0d37: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 007a0d3b: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0d3d: je 0x7a0d76 */ if (fZ) goto L_007a0d76;
L_007a0d3f:; BB(0x007a0d3f);
    /* 007a0d3f: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 007a0d42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0d44: jne 0x7a0d37 */ if (!fZ) goto L_007a0d37;
L_007a0d46:; BB(0x007a0d46);
    /* 007a0d46: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0d48: je 0x7a0d53 */ if (fZ) goto L_007a0d53;
L_007a0d4a:; BB(0x007a0d4a);
    /* 007a0d4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d4c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007a0d4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a0d51: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7a0d53u); call_ind(t); }
L_007a0d53:; BB(0x007a0d53);
    /* 007a0d53: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d55: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d5a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007a0d5d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0d5f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0d61: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0d63: lea edx, [eax + eax + 0xaab000] */ r_edx = (u32)(r_eax+r_eax+0xaab000u);
    /* 007a0d6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d6b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7a0d70u); f_00857dec();
    /* 007a0d70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0d73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a0d74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a0d75: ret  */ FN_RET(0x007a0d0c); r_esp += 4; return;
L_007a0d76:; BB(0x007a0d76);
    /* 007a0d76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0d78: je 0x7a0d46 */ if (fZ) goto L_007a0d46;
L_007a0d7a:; BB(0x007a0d7a);
    /* 007a0d7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d7c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007a0d7e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7a0d80u); call_ind(t); }
    /* 007a0d80: jmp 0x7a0d46 */ goto L_007a0d46;
}

void f_007a0d84(void) /* sub_7A0D84 */
{
    FN_ENTER(0x007a0d84);
    /* 007a0d84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d86: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007a0d8a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a0d8e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007a0d92: mov dword ptr [0xa9c4dc], eax */ W32((u32)(0xa9c4dcu), r_eax);
    /* 007a0d97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a0d98: mov dword ptr [0xaab27c], edx */ W32((u32)(0xaab27cu), r_edx);
    /* 007a0d9e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7a0da3u); f_0068d5a8();
    /* 007a0da3: mov ebx, eax */ r_ebx = r_eax;
    /* 007a0da5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0da8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0daa: je 0x7a0dd4 */ if (fZ) goto L_007a0dd4;
L_007a0dac:; BB(0x007a0dac);
    /* 007a0dac: mov edx, dword ptr [0xaaecf8] */ r_edx = R32((u32)(0xaaecf8u));
    /* 007a0db2: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 007a0db5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0db7: je 0x7a0dc8 */ if (fZ) goto L_007a0dc8;
L_007a0db9:; BB(0x007a0db9);
    /* 007a0db9: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 007a0dbd: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0dbf: je 0x7a0e3c */ if (fZ) goto L_007a0e3c;
L_007a0dc1:; BB(0x007a0dc1);
    /* 007a0dc1: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 007a0dc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0dc6: jne 0x7a0db9 */ if (!fZ) goto L_007a0db9;
L_007a0dc8:; BB(0x007a0dc8);
    /* 007a0dc8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0dca: je 0x7a0dd4 */ if (fZ) goto L_007a0dd4;
L_007a0dcc:; BB(0x007a0dcc);
    /* 007a0dcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0dce: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007a0dd0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a0dd2: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7a0dd4u); call_ind(t); }
L_007a0dd4:; BB(0x007a0dd4);
    /* 007a0dd4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0dd6: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0ddb: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 007a0ddf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0de1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0de3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a0de5: lea edx, [eax + eax + 0xaab000] */ r_edx = (u32)(r_eax+r_eax+0xaab000u);
    /* 007a0dec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0ded: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7a0df2u); f_00857dec();
    /* 007a0df2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0df5: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 007a0dfa: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0dfd: jne 0x7a0e0a */ if (!fZ) goto L_007a0e0a;
L_007a0dff:; BB(0x007a0dff);
    /* 007a0dff: mov eax, 1 */ r_eax = 0x1u;
    /* 007a0e04: mov word ptr [0xaae6d4], ax */ W16((u32)(0xaae6d4u), (u16)r_eax);
L_007a0e0a:; BB(0x007a0e0a);
    /* 007a0e0a: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007a0e10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0e12: je 0x7a0e23 */ if (fZ) goto L_007a0e23;
L_007a0e14:; BB(0x007a0e14);
    /* 007a0e14: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7a0e19u); f_007127b0();
    /* 007a0e19: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
L_007a0e23:; BB(0x007a0e23);
    /* 007a0e23: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007a0e28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0e2a: je 0x7a0e2f */ if (fZ) goto L_007a0e2f;
L_007a0e2c:; BB(0x007a0e2c);
    /* 007a0e2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a0e2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a0e2e: ret  */ FN_RET(0x007a0d84); r_esp += 4; return;
L_007a0e2f:; BB(0x007a0e2f);
    /* 007a0e2f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a0e34: call 0x8181c4 */ r_esp -= 4; W32(r_esp, 0x7a0e39u); f_008181c4();
    /* 007a0e39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a0e3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a0e3b: ret  */ FN_RET(0x007a0d84); r_esp += 4; return;
L_007a0e3c:; BB(0x007a0e3c);
    /* 007a0e3c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0e3e: je 0x7a0dc8 */ if (fZ) goto L_007a0dc8;
L_007a0e40:; BB(0x007a0e40);
    /* 007a0e40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0e42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 007a0e44: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x7a0e46u); call_ind(t); }
    /* 007a0e46: jmp 0x7a0dc8 */ goto L_007a0dc8;
}

void f_007a0e48(void) /* sub_7A0E48 */
{
    FN_ENTER(0x007a0e48);
    /* 007a0e48: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a0e4b: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0e51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0e53: je 0x7a0e7e */ if (fZ) goto L_007a0e7e;
L_007a0e55:; BB(0x007a0e55);
    /* 007a0e55: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0e57: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0e5b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a0e60u); f_0073ae38();
    /* 007a0e60: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 007a0e65: mov dword ptr [0xaab218], 0x14 */ W32((u32)(0xaab218u), 0x14u);
    /* 007a0e6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0e71: je 0x7a0e7a */ if (fZ) goto L_007a0e7a;
L_007a0e73:; BB(0x007a0e73);
    /* 007a0e73: mov dword ptr [eax + 0x20], 0xb */ W32((u32)(r_eax+0x20u), 0xbu);
L_007a0e7a:; BB(0x007a0e7a);
    /* 007a0e7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0e7d: ret  */ FN_RET(0x007a0e48); r_esp += 4; return;
L_007a0e7e:; BB(0x007a0e7e);
    /* 007a0e7e: mov dword ptr [esp], 0x43700000 */ W32((u32)(r_esp), 0x43700000u);
    /* 007a0e85: mov dword ptr [esp + 4], 0x433c0000 */ W32((u32)(r_esp+0x4u), 0x433c0000u);
    /* 007a0e8d: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0e92: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a0e97u); f_0073ec50();
    /* 007a0e97: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007a0e9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0e9d: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a0ea2u); f_0073a888();
    /* 007a0ea2: mov ecx, eax */ r_ecx = r_eax;
    /* 007a0ea4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0ea7: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 007a0ead: jmp 0x7a0e55 */ goto L_007a0e55;
}

void f_007a0eb0(void) /* sub_7A0EB0 */
{
    FN_ENTER(0x007a0eb0);
    /* 007a0eb0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a0eb3: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007a0eb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0ebb: je 0x7a0ee6 */ if (fZ) goto L_007a0ee6;
L_007a0ebd:; BB(0x007a0ebd);
    /* 007a0ebd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0ebf: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0ec3: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a0ec8u); f_0073ae38();
    /* 007a0ec8: mov eax, dword ptr [0xa96180] */ r_eax = R32((u32)(0xa96180u));
    /* 007a0ecd: mov dword ptr [0xaab218], 0x14 */ W32((u32)(0xaab218u), 0x14u);
    /* 007a0ed7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0ed9: je 0x7a0ee2 */ if (fZ) goto L_007a0ee2;
L_007a0edb:; BB(0x007a0edb);
    /* 007a0edb: mov dword ptr [eax + 0x20], 0xb */ W32((u32)(r_eax+0x20u), 0xbu);
L_007a0ee2:; BB(0x007a0ee2);
    /* 007a0ee2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0ee5: ret  */ FN_RET(0x007a0eb0); r_esp += 4; return;
L_007a0ee6:; BB(0x007a0ee6);
    /* 007a0ee6: mov dword ptr [esp], 0x43640000 */ W32((u32)(r_esp), 0x43640000u);
    /* 007a0eed: mov dword ptr [esp + 4], 0x43360000 */ W32((u32)(r_esp+0x4u), 0x43360000u);
    /* 007a0ef5: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 007a0efa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a0effu); f_0073ec50();
    /* 007a0eff: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007a0f03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f05: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7a0f0au); f_0073a888();
    /* 007a0f0a: mov ecx, eax */ r_ecx = r_eax;
    /* 007a0f0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0f0f: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 007a0f15: jmp 0x7a0ebd */ goto L_007a0ebd;
}

void f_007a0f18(void) /* sub_7A0F18 */
{
    FN_ENTER(0x007a0f18);
    /* 007a0f18: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a0f1b: mov eax, dword ptr [0xaab260] */ r_eax = R32((u32)(0xaab260u));
    /* 007a0f20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0f22: je 0x7a0f4f */ if (fZ) goto L_007a0f4f;
L_007a0f24:; BB(0x007a0f24);
    /* 007a0f24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0f26: je 0x7a0f4b */ if (fZ) goto L_007a0f4b;
L_007a0f28:; BB(0x007a0f28);
    /* 007a0f28: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0f2c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7a0f31u); f_00793168();
    /* 007a0f31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0f32: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0f38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f3b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7a0f40u); f_0073ae38();
    /* 007a0f40: mov ecx, dword ptr [0xaab260] */ r_ecx = R32((u32)(0xaab260u));
    /* 007a0f46: call 0x73b558 */ r_esp -= 4; W32(r_esp, 0x7a0f4bu); f_0073b558();
L_007a0f4b:; BB(0x007a0f4b);
    /* 007a0f4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a0f4e: ret  */ FN_RET(0x007a0f18); r_esp += 4; return;
L_007a0f4f:; BB(0x007a0f4f);
    /* 007a0f4f: mov dword ptr [esp], 0x440b8000 */ W32((u32)(r_esp), 0x440b8000u);
    /* 007a0f56: mov dword ptr [esp + 4], 0x43600000 */ W32((u32)(r_esp+0x4u), 0x43600000u);
    /* 007a0f5e: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f63: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7a0f68u); f_0073ec50();
    /* 007a0f68: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007a0f6c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a0f72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f74: call 0x73b698 */ r_esp -= 4; W32(r_esp, 0x7a0f79u); f_0073b698();
    /* 007a0f79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a0f7c: mov dword ptr [0xaab260], eax */ W32((u32)(0xaab260u), r_eax);
    /* 007a0f81: jmp 0x7a0f24 */ goto L_007a0f24;
}

void f_007a0f84(void) /* sub_7A0F84 */
{
    FN_ENTER(0x007a0f84);
    /* 007a0f84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a0f87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a0f89: call 0x7a0fa8 */ r_esp -= 4; W32(r_esp, 0x7a0f8eu); f_007a0fa8();
    /* 007a0f8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a0f92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a0f94: jne 0x7a0f9a */ if (!fZ) goto L_007a0f9a;
L_007a0f96:; BB(0x007a0f96);
    /* 007a0f96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a0f97: ret 4 */ FN_RET(0x007a0f84); r_esp += 8; return;
L_007a0f9a:; BB(0x007a0f9a);
    /* 007a0f9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a0f9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a0fa0u); f_005c2f74();
    /* 007a0fa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a0fa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a0fa2: ret 4 */ FN_RET(0x007a0f84); r_esp += 8; return;
}

void f_007a0fa8(void) /* sub_7A0FA8 */
{
    FN_ENTER(0x007a0fa8);
    /* 007a0fa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a0fa9: mov ebp, esp */ r_ebp = r_esp;
    /* 007a0fab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a0fad: push 0x8f5812 */ { u32 v = 0x8f5812u; r_esp -= 4; W32(r_esp, v); }
    /* 007a0fb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a0fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a0fb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a0fc0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a0fc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a0fc6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a0fc9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a0fcc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a0fcf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a0fd2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a0fd9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a0fdc: mov dword ptr [ecx], 0xb45f54 */ W32((u32)(r_ecx), 0xb45f54u);
    /* 007a0fe2: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a0fe5: call 0x69862c */ r_esp -= 4; W32(r_esp, 0x7a0feau); f_0069862c();
    /* 007a0fea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a0fec: jne 0x7a0ff3 */ if (!fZ) goto L_007a0ff3;
L_007a0fee:; BB(0x007a0fee);
    /* 007a0fee: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a0ff1: jmp 0x7a100d */ goto L_007a100d;
L_007a0ff3:; BB(0x007a0ff3);
    /* 007a0ff3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a0ff6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 007a0ff9: mov eax, dword ptr [eax + 0x45c] */ r_eax = R32((u32)(r_eax+0x45cu));
    /* 007a0fff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1001: je 0x7a100d */ if (fZ) goto L_007a100d;
L_007a1003:; BB(0x007a1003);
    /* 007a1003: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 007a100a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_007a100d:; BB(0x007a100d);
    /* 007a100d: mov dword ptr [edx], 0xb45f20 */ W32((u32)(r_edx), 0xb45f20u);
    /* 007a1013: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007a1016: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a101d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a1020: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a1025u); f_008171e8();
    /* 007a1025: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a1028: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a102f: mov esp, ebp */ r_esp = r_ebp;
    /* 007a1031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1032: ret  */ FN_RET(0x007a0fa8); r_esp += 4; return;
}

