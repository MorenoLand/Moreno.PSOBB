#include "protos.h"

void f_004f2988(void) /* sub_4F2988 */
{
    FN_ENTER(0x004f2988);
    /* 004f2988: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f2989: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f298c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f298e: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004f2991: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2994: fld dword ptr [0xa72234] */ FPUSH(R_F32((u32)(0xa72234u)));
    /* 004f299a: je 0x4f2f03 */ if (fZ) goto L_004f2f03;
L_004f29a0:; BB(0x004f29a0);
    /* 004f29a0: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004f29a3: fcomp dword ptr [0x91df60] */ fx_compare(ST(0), R_F32((u32)(0x91df60u))); FPOP();
    /* 004f29a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f29ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f29ac: je 0x4f2ee1 */ if (fZ) goto L_004f2ee1;
L_004f29b2:; BB(0x004f29b2);
    /* 004f29b2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f29b5: call 0x4eb3ac */ r_esp -= 4; W32(r_esp, 0x4f29bau); f_004eb3ac();
    /* 004f29ba: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004f29bd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f29c0: je 0x4f2eae */ if (fZ) goto L_004f2eae;
L_004f29c6:; BB(0x004f29c6);
    /* 004f29c6: fld dword ptr [0x91e130] */ FPUSH(R_F32((u32)(0x91e130u)));
    /* 004f29cc: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004f29cf: fcom dword ptr [0x91df60] */ fx_compare(ST(0), R_F32((u32)(0x91df60u))); 
    /* 004f29d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f29d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f29d8: jbe 0x4f29e6 */ if ((fC||fZ)) goto L_004f29e6;
L_004f29da:; BB(0x004f29da);
    /* 004f29da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f29dc: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f29e1: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004f29e4: jmp 0x4f29e9 */ goto L_004f29e9;
L_004f29e6:; BB(0x004f29e6);
    /* 004f29e6: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_004f29e9:; BB(0x004f29e9);
    /* 004f29e9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f29ec: jne 0x4f2a45 */ if (!fZ) goto L_004f2a45;
L_004f29ee:; BB(0x004f29ee);
    /* 004f29ee: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004f29f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f29f3: je 0x4f2a21 */ if (fZ) goto L_004f2a21;
L_004f29f5:; BB(0x004f29f5);
    /* 004f29f5: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004f29fd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004f2a01: mov edx, 3 */ r_edx = 0x3u;
    /* 004f2a06: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 004f2a0e: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004f2a12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a14: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4f2a19u); f_004f4128();
    /* 004f2a19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f2a1c: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004f2a1f: jmp 0x4f2a52 */ goto L_004f2a52;
L_004f2a21:; BB(0x004f2a21);
    /* 004f2a21: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004f2a29: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004f2a2d: mov dword ptr [esp + 8], 3 */ W32((u32)(r_esp+0x8u), 0x3u);
    /* 004f2a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a36: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a38: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4f2a3du); f_004f4128();
    /* 004f2a3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f2a40: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004f2a43: jmp 0x4f2a52 */ goto L_004f2a52;
L_004f2a45:; BB(0x004f2a45);
    /* 004f2a45: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2a48: jne 0x4f2a52 */ if (!fZ) goto L_004f2a52;
L_004f2a4a:; BB(0x004f2a4a);
    /* 004f2a4a: call 0x4f4214 */ r_esp -= 4; W32(r_esp, 0x4f2a4fu); f_004f4214();
    /* 004f2a4f: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
L_004f2a52:; BB(0x004f2a52);
    /* 004f2a52: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2a54: je 0x4f2e87 */ if (fZ) goto L_004f2e87;
L_004f2a5a:; BB(0x004f2a5a);
    /* 004f2a5a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2a5d: jne 0x4f2d50 */ if (!fZ) goto L_004f2d50;
L_004f2a63:; BB(0x004f2a63);
    /* 004f2a63: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 004f2a68: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2a6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a6b: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f2a70u); f_004f3eb8();
    /* 004f2a70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f2a71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2a73: jne 0x4f2d23 */ if (!fZ) goto L_004f2d23;
L_004f2a79:; BB(0x004f2a79);
    /* 004f2a79: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004f2a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2a7e: je 0x4f2ac5 */ if (fZ) goto L_004f2ac5;
L_004f2a80:; BB(0x004f2a80);
    /* 004f2a80: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004f2a85: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a8c: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f2a91u); f_004f3eb8();
    /* 004f2a91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f2a92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2a94: je 0x4f2ac5 */ if (fZ) goto L_004f2ac5;
L_004f2a96:; BB(0x004f2a96);
    /* 004f2a96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f2a98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2a9b: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2aa0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f2aa5u); f_00814298();
    /* 004f2aa5: mov dword ptr [0xa72570], 1 */ W32((u32)(0xa72570u), 0x1u);
    /* 004f2aaf: mov dword ptr [0xa72574], 0 */ W32((u32)(0xa72574u), 0x0u);
    /* 004f2ab9: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 004f2ac0: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2ac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2ac4: ret  */ FN_RET(0x004f2988); r_esp += 4; return;
L_004f2ac5:; BB(0x004f2ac5);
    /* 004f2ac5: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f2acb: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f2ad0u); f_004f3eb8();
    /* 004f2ad0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f2ad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2ad3: je 0x4f2e82 */ if (fZ) goto L_004f2e82;
L_004f2ad9:; BB(0x004f2ad9);
    /* 004f2ad9: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f2adc: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4f2ae1u); f_004e6f24();
    /* 004f2ae1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f2ae2: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 004f2ae6: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 004f2aea: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 004f2aee: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004f2af1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2af3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f2af5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2af7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2af9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f2afb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2afd: lea ecx, [edx + edx + 0x9b5b60] */ r_ecx = (u32)(r_edx+r_edx+0x9b5b60u);
    /* 004f2b04: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f2b07: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2b0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f2b0c: mov ebx, eax */ r_ebx = r_eax;
    /* 004f2b0e: mov esi, edx */ r_esi = r_edx;
    /* 004f2b10: mov edi, ecx */ r_edi = r_ecx;
L_004f2b12:; BB(0x004f2b12);
    /* 004f2b12: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004f2b15: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f2b18: jl 0x4f2b7a */ if ((fS!=fO)) goto L_004f2b7a;
L_004f2b1a:; BB(0x004f2b1a);
    /* 004f2b1a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4f2b1fu); f_008587a5();
    /* 004f2b1f: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004f2b22: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004f2b26: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004f2b2a: fmul dword ptr [0x91df54] */ ST(0) = ST(0) * R_F32((u32)(0x91df54u));
    /* 004f2b30: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2b34: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2b38: fdiv dword ptr [0x91df50] */ ST(0) = ST(0) / R_F32((u32)(0x91df50u));
    /* 004f2b3e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f2b40: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004f2b44: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004f2b49: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2b4e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f2b52: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f2b56: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f2b5a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f2b5e: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004f2b61: movsx ecx, word ptr [esp + 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x38u));
    /* 004f2b66: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2b68: jne 0x4f2b77 */ if (!fZ) goto L_004f2b77;
L_004f2b6a:; BB(0x004f2b6a);
    /* 004f2b6a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f2b6d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f2b6f: jl 0x4f2b73 */ if ((fS!=fO)) goto L_004f2b73;
L_004f2b71:; BB(0x004f2b71);
    /* 004f2b71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004f2b73:; BB(0x004f2b73);
    /* 004f2b73: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2b75: je 0x4f2b6a */ if (fZ) goto L_004f2b6a;
L_004f2b77:; BB(0x004f2b77);
    /* 004f2b77: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
L_004f2b7a:; BB(0x004f2b7a);
    /* 004f2b7a: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f2b7d: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f2b80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f2b83: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f2b86: jle 0x4f2b12 */ if ((fZ||fS!=fO)) goto L_004f2b12;
L_004f2b88:; BB(0x004f2b88);
    /* 004f2b88: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 004f2b8c: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 004f2b90: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 004f2b94: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4f2b99u); f_008587a5();
    /* 004f2b99: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 004f2b9d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2ba1: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2ba5: fdiv dword ptr [0x91df50] */ ST(0) = ST(0) / R_F32((u32)(0x91df50u));
    /* 004f2bab: fmul dword ptr [0x91df4c] */ ST(0) = ST(0) * R_F32((u32)(0x91df4cu));
    /* 004f2bb1: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2bb4: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004f2bb8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2bbc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2bbe: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004f2bc2: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004f2bc7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2bcc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f2bd0: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f2bd4: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f2bd8: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f2bdc: movzx eax, byte ptr [esp + 0x38] */ r_eax = (u32)R8((u32)(r_esp+0x38u));
    /* 004f2be1: mov word ptr [ebp + 0x2c], ax */ W16((u32)(r_ebp+0x2cu), (u16)r_eax);
    /* 004f2be5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4f2beau); f_008587a5();
    /* 004f2bea: movsx edx, word ptr [ebp + 0x2e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eu));
    /* 004f2bee: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2bf2: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2bf6: fdiv dword ptr [0x91df50] */ ST(0) = ST(0) / R_F32((u32)(0x91df50u));
    /* 004f2bfc: fmul dword ptr [0x91df4c] */ ST(0) = ST(0) * R_F32((u32)(0x91df4cu));
    /* 004f2c02: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2c05: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004f2c09: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2c0d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2c0f: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004f2c13: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004f2c18: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2c1d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f2c21: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f2c25: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f2c29: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f2c2d: movzx eax, byte ptr [esp + 0x38] */ r_eax = (u32)R8((u32)(r_esp+0x38u));
    /* 004f2c32: mov word ptr [ebp + 0x2e], ax */ W16((u32)(r_ebp+0x2eu), (u16)r_eax);
    /* 004f2c36: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4f2c3bu); f_008587a5();
    /* 004f2c3b: movsx edx, word ptr [ebp + 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x30u));
    /* 004f2c3f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2c43: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2c47: fdiv dword ptr [0x91df50] */ ST(0) = ST(0) / R_F32((u32)(0x91df50u));
    /* 004f2c4d: fmul dword ptr [0x91df4c] */ ST(0) = ST(0) * R_F32((u32)(0x91df4cu));
    /* 004f2c53: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f2c56: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004f2c5a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2c5e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2c60: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004f2c64: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004f2c69: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2c6e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f2c72: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f2c76: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f2c7a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f2c7e: movzx eax, byte ptr [esp + 0x38] */ r_eax = (u32)R8((u32)(r_esp+0x38u));
    /* 004f2c83: mov word ptr [ebp + 0x30], ax */ W16((u32)(r_ebp+0x30u), (u16)r_eax);
    /* 004f2c87: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4f2c8cu); f_008587a5();
    /* 004f2c8c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2c90: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2c94: fdiv dword ptr [0x91df50] */ ST(0) = ST(0) / R_F32((u32)(0x91df50u));
    /* 004f2c9a: fmul dword ptr [0x91de6c] */ ST(0) = ST(0) * R_F32((u32)(0x91de6cu));
    /* 004f2ca0: fadd dword ptr [0x91de70] */ ST(0) = ST(0) + R_F32((u32)(0x91de70u));
    /* 004f2ca6: fadd dword ptr [ebp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x34u));
    /* 004f2ca9: fcom dword ptr [0x91df60] */ fx_compare(ST(0), R_F32((u32)(0x91df60u))); 
    /* 004f2caf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2cb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2cb2: jb 0x4f2cc1 */ if (fC) goto L_004f2cc1;
L_004f2cb4:; BB(0x004f2cb4);
    /* 004f2cb4: fld dword ptr [0x91df48] */ FPUSH(R_F32((u32)(0x91df48u)));
    /* 004f2cba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2cbc: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 004f2cbf: jmp 0x4f2cc4 */ goto L_004f2cc4;
L_004f2cc1:; BB(0x004f2cc1);
    /* 004f2cc1: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
L_004f2cc4:; BB(0x004f2cc4);
    /* 004f2cc4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4f2cc9u); f_008587a5();
    /* 004f2cc9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2ccd: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2cd1: fdiv dword ptr [0x91df50] */ ST(0) = ST(0) / R_F32((u32)(0x91df50u));
    /* 004f2cd7: fmul dword ptr [0x91de6c] */ ST(0) = ST(0) * R_F32((u32)(0x91de6cu));
    /* 004f2cdd: fadd dword ptr [0x91de70] */ ST(0) = ST(0) + R_F32((u32)(0x91de70u));
    /* 004f2ce3: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004f2ce6: fcom dword ptr [0x91df60] */ fx_compare(ST(0), R_F32((u32)(0x91df60u))); 
    /* 004f2cec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2cee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2cef: jb 0x4f2cfe */ if (fC) goto L_004f2cfe;
L_004f2cf1:; BB(0x004f2cf1);
    /* 004f2cf1: fld dword ptr [0x91df48] */ FPUSH(R_F32((u32)(0x91df48u)));
    /* 004f2cf7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2cf9: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004f2cfc: jmp 0x4f2d01 */ goto L_004f2d01;
L_004f2cfe:; BB(0x004f2cfe);
    /* 004f2cfe: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
L_004f2d01:; BB(0x004f2d01);
    /* 004f2d01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f2d03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d06: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d0b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f2d10u); f_00814298();
    /* 004f2d10: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 004f2d17: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 004f2d1e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2d21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2d22: ret  */ FN_RET(0x004f2988); r_esp += 4; return;
L_004f2d23:; BB(0x004f2d23);
    /* 004f2d23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f2d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d28: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2d2d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f2d32u); f_00814298();
    /* 004f2d32: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f2d35: call 0x4f12dc */ r_esp -= 4; W32(r_esp, 0x4f2d3au); f_004f12dc();
    /* 004f2d3a: mov dword ptr [0xa72574], 0 */ W32((u32)(0xa72574u), 0x0u);
    /* 004f2d44: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 004f2d4b: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2d4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2d4f: ret  */ FN_RET(0x004f2988); r_esp += 4; return;
L_004f2d50:; BB(0x004f2d50);
    /* 004f2d50: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2d53: jne 0x4f2e82 */ if (!fZ) goto L_004f2e82;
L_004f2d59:; BB(0x004f2d59);
    /* 004f2d59: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004f2d5c: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f2d5f: movsx ecx, word ptr [ebp + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 004f2d63: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f2d66: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 004f2d69: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2d6d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2d71: fdiv dword ptr [0x91df58] */ ST(0) = ST(0) / R_F32((u32)(0x91df58u));
    /* 004f2d77: movsx eax, word ptr [edx + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x42u));
    /* 004f2d7b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2d7f: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2d83: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f2d85: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004f2d89: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2d8d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f2d8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2d91: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004f2d95: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004f2d9a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2d9f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f2da3: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f2da7: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f2dab: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f2daf: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 004f2db3: mov word ptr [edx + 0x42], ax */ W16((u32)(r_edx+0x42u), (u16)r_eax);
    /* 004f2db7: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004f2dba: movsx eax, word ptr [ecx + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004f2dbe: movsx edx, word ptr [ebp + 0x2e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eu));
    /* 004f2dc2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2dc6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2dca: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f2dcc: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004f2dd0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2dd4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f2dd6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2dd8: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004f2ddc: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004f2de1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2de6: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f2dea: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f2dee: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f2df2: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f2df6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 004f2dfa: mov word ptr [ecx + 0x44], ax */ W16((u32)(r_ecx+0x44u), (u16)r_eax);
    /* 004f2dfe: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f2e01: movsx eax, word ptr [edx + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x46u));
    /* 004f2e05: movsx ecx, word ptr [ebp + 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x30u));
    /* 004f2e09: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f2e0d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2e11: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f2e13: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 004f2e17: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004f2e1b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f2e1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2e1f: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004f2e23: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004f2e28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f2e2d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f2e31: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004f2e35: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f2e39: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f2e3d: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 004f2e41: mov word ptr [edx + 0x46], ax */ W16((u32)(r_edx+0x46u), (u16)r_eax);
    /* 004f2e45: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f2e48: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 004f2e4b: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004f2e4e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f2e50: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f2e52: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2e54: fstp dword ptr [eax + 0x48] */ W_F32((u32)(r_eax+0x48u), ST(0)); FPOP();
    /* 004f2e57: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f2e5a: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 004f2e5d: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004f2e60: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f2e62: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004f2e64: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f2e66: fstp dword ptr [eax + 0x4c] */ W_F32((u32)(r_eax+0x4cu), ST(0)); FPOP();
    /* 004f2e69: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004f2e6c: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f2e6f: jl 0x4f2e82 */ if ((fS!=fO)) goto L_004f2e82;
L_004f2e71:; BB(0x004f2e71);
    /* 004f2e71: mov eax, dword ptr [0xa720ac] */ r_eax = R32((u32)(0xa720acu));
    /* 004f2e76: mov dword ptr [ebp + 0x24], 1 */ W32((u32)(r_ebp+0x24u), 0x1u);
    /* 004f2e7d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2e80: je 0x4f2e93 */ if (fZ) goto L_004f2e93;
L_004f2e82:; BB(0x004f2e82);
    /* 004f2e82: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2e85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2e86: ret  */ FN_RET(0x004f2988); r_esp += 4; return;
L_004f2e87:; BB(0x004f2e87);
    /* 004f2e87: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 004f2e8e: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2e91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2e92: ret  */ FN_RET(0x004f2988); r_esp += 4; return;
L_004f2e93:; BB(0x004f2e93);
    /* 004f2e93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f2e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2e98: push 0x571 */ { u32 v = 0x571u; r_esp -= 4; W32(r_esp, v); }
    /* 004f2e9d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f2ea2u); f_00814298();
    /* 004f2ea2: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 004f2ea9: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2eac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2ead: ret  */ FN_RET(0x004f2988); r_esp += 4; return;
L_004f2eae:; BB(0x004f2eae);
    /* 004f2eae: fld dword ptr [0x91e12c] */ FPUSH(R_F32((u32)(0x91e12cu)));
    /* 004f2eb4: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004f2eb7: fcom dword ptr [0x91df5c] */ fx_compare(ST(0), R_F32((u32)(0x91df5cu))); 
    /* 004f2ebd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2ebf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2ec0: jbe 0x4f2ec7 */ if ((fC||fZ)) goto L_004f2ec7;
L_004f2ec2:; BB(0x004f2ec2);
    /* 004f2ec2: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004f2ec5: jmp 0x4f2edc */ goto L_004f2edc;
L_004f2ec7:; BB(0x004f2ec7);
    /* 004f2ec7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2ec9: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 004f2ecd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f2ecf: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004f2ed2: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f2ed8: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
L_004f2edc:; BB(0x004f2edc);
    /* 004f2edc: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2edf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2ee0: ret  */ FN_RET(0x004f2988); r_esp += 4; return;
L_004f2ee1:; BB(0x004f2ee1);
    /* 004f2ee1: fadd dword ptr [0x91de74] */ ST(0) = ST(0) + R_F32((u32)(0x91de74u));
    /* 004f2ee7: fcom dword ptr [0x91df5c] */ fx_compare(ST(0), R_F32((u32)(0x91df5cu))); 
    /* 004f2eed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2eef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2ef0: jae 0x4f29b2 */ if (!fC) goto L_004f29b2;
L_004f2ef6:; BB(0x004f2ef6);
    /* 004f2ef6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2ef8: fld dword ptr [0x91df5c] */ FPUSH(R_F32((u32)(0x91df5cu)));
    /* 004f2efe: jmp 0x4f29b2 */ goto L_004f29b2;
L_004f2f03:; BB(0x004f2f03);
    /* 004f2f03: fld dword ptr [0x91df60] */ FPUSH(R_F32((u32)(0x91df60u)));
    /* 004f2f09: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 004f2f0c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f2f0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2f10: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2f11: jb 0x4f2f15 */ if (fC) goto L_004f2f15;
L_004f2f13:; BB(0x004f2f13);
    /* 004f2f13: fst st(1) */ ST(1) = ST(0);
L_004f2f15:; BB(0x004f2f15);
    /* 004f2f15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2f17: jmp 0x4f29b2 */ goto L_004f29b2;
}

void f_004f2f1c(void) /* sub_4F2F1C */
{
    FN_ENTER(0x004f2f1c);
    /* 004f2f1c: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f2f1f: call 0x4ea030 */ r_esp -= 4; W32(r_esp, 0x4f2f24u); f_004ea030();
    /* 004f2f24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f2f25: ret  */ FN_RET(0x004f2f1c); r_esp += 4; return;
}

void f_004f2f28(void) /* sub_4F2F28 */
{
    FN_ENTER(0x004f2f28);
    /* 004f2f28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f2f29: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f2f2c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f2f2e: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004f2f31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2f33: fld dword ptr [0xa72234] */ FPUSH(R_F32((u32)(0xa72234u)));
    /* 004f2f39: je 0x4f2f4f */ if (fZ) goto L_004f2f4f;
L_004f2f3b:; BB(0x004f2f3b);
    /* 004f2f3b: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004f2f3e: fcomp dword ptr [0x91df44] */ fx_compare(ST(0), R_F32((u32)(0x91df44u))); FPOP();
    /* 004f2f44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2f46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2f47: je 0x4f3157 */ if (fZ) goto L_004f3157;
L_004f2f4d:; BB(0x004f2f4d);
    /* 004f2f4d: jmp 0x4f2f63 */ goto L_004f2f63;
L_004f2f4f:; BB(0x004f2f4f);
    /* 004f2f4f: fld dword ptr [0x91df44] */ FPUSH(R_F32((u32)(0x91df44u)));
    /* 004f2f55: fsub dword ptr [ebp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x28u));
    /* 004f2f58: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f2f5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2f5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2f5d: jb 0x4f2f61 */ if (fC) goto L_004f2f61;
L_004f2f5f:; BB(0x004f2f5f);
    /* 004f2f5f: fst st(1) */ ST(1) = ST(0);
L_004f2f61:; BB(0x004f2f61);
    /* 004f2f61: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f2f63:; BB(0x004f2f63);
    /* 004f2f63: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f2f66: call 0x4eb3ac */ r_esp -= 4; W32(r_esp, 0x4f2f6bu); f_004eb3ac();
    /* 004f2f6b: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004f2f6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2f70: je 0x4f314b */ if (fZ) goto L_004f314b;
L_004f2f76:; BB(0x004f2f76);
    /* 004f2f76: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004f2f79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f2f7b: jne 0x4f2fb3 */ if (!fZ) goto L_004f2fb3;
L_004f2f7d:; BB(0x004f2f7d);
    /* 004f2f7d: fld dword ptr [0x91e12c] */ FPUSH(R_F32((u32)(0x91e12cu)));
    /* 004f2f83: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 004f2f86: fcom dword ptr [0x91df40] */ fx_compare(ST(0), R_F32((u32)(0x91df40u))); 
    /* 004f2f8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2f8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2f8f: jbe 0x4f2f99 */ if ((fC||fZ)) goto L_004f2f99;
L_004f2f91:; BB(0x004f2f91);
    /* 004f2f91: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 004f2f94: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2f97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2f98: ret  */ FN_RET(0x004f2f28); r_esp += 4; return;
L_004f2f99:; BB(0x004f2f99);
    /* 004f2f99: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2f9b: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 004f2f9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f2fa1: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 004f2fa4: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f2faa: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
L_004f2fae:; BB(0x004f2fae);
    /* 004f2fae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f2fb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f2fb2: ret  */ FN_RET(0x004f2f28); r_esp += 4; return;
L_004f2fb3:; BB(0x004f2fb3);
    /* 004f2fb3: fld dword ptr [0x91e130] */ FPUSH(R_F32((u32)(0x91e130u)));
    /* 004f2fb9: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 004f2fbc: fcom dword ptr [0x91df44] */ fx_compare(ST(0), R_F32((u32)(0x91df44u))); 
    /* 004f2fc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f2fc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f2fc5: jbe 0x4f2fd3 */ if ((fC||fZ)) goto L_004f2fd3;
L_004f2fc7:; BB(0x004f2fc7);
    /* 004f2fc7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f2fc9: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f2fce: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 004f2fd1: jmp 0x4f2fd6 */ goto L_004f2fd6;
L_004f2fd3:; BB(0x004f2fd3);
    /* 004f2fd3: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
L_004f2fd6:; BB(0x004f2fd6);
    /* 004f2fd6: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 004f2fda: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004f2fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f2fdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f2fe0: call 0x4f3ee0 */ r_esp -= 4; W32(r_esp, 0x4f2fe5u); f_004f3ee0();
    /* 004f2fe5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f2fe8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004f2fec: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f2ff1u); f_0082dcbc();
    /* 004f2ff1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004f2ff5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004f2ff7: fmul dword ptr [0x91de7c] */ ST(0) = ST(0) * R_F32((u32)(0x91de7cu));
    /* 004f2ffd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004f3001: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f3005: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4f300au); f_0082ddd8();
    /* 004f300a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f300e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004f3012: fchs  */ ST(0) = -ST(0);
    /* 004f3014: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 004f3018: fmul dword ptr [0x91de7c] */ ST(0) = ST(0) * R_F32((u32)(0x91de7cu));
    /* 004f301e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f3022: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3023: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004f3027: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f302a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4f302fu); f_0082e900();
    /* 004f302f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f3033: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f3034: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004f3038: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f303b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4f3040u); f_0082e900();
    /* 004f3040: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004f3044: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f3046: fcomp dword ptr [0x91df40] */ fx_compare(ST(0), R_F32((u32)(0x91df40u))); FPOP();
    /* 004f304c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f304e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f304f: je 0x4f3179 */ if (fZ) goto L_004f3179;
L_004f3055:; BB(0x004f3055);
    /* 004f3055: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004f3059: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004f305d: fld dword ptr [0x91de78] */ FPUSH(R_F32((u32)(0x91de78u)));
    /* 004f3063: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f3066: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f3068: fadd dword ptr [edx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x48u));
    /* 004f306b: fstp dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0)); FPOP();
    /* 004f306e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f3071: fadd dword ptr [eax + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4cu));
    /* 004f3074: fstp dword ptr [eax + 0x4c] */ W_F32((u32)(r_eax+0x4cu), ST(0)); FPOP();
    /* 004f3077: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f307a: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 004f307d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f307f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f3081: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f3082: jbe 0x4f308e */ if ((fC||fZ)) goto L_004f308e;
L_004f3084:; BB(0x004f3084);
    /* 004f3084: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f3086: fst dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0));
    /* 004f3089: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004f308c: jmp 0x4f30a1 */ goto L_004f30a1;
L_004f308e:; BB(0x004f308e);
    /* 004f308e: fcom dword ptr [0x91df40] */ fx_compare(ST(0), R_F32((u32)(0x91df40u))); 
    /* 004f3094: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f3096: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f3097: jae 0x4f30a1 */ if (!fC) goto L_004f30a1;
L_004f3099:; BB(0x004f3099);
    /* 004f3099: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f309b: fst dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0));
    /* 004f309e: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
L_004f30a1:; BB(0x004f30a1);
    /* 004f30a1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f30a3: fld dword ptr [edx + 0x4c] */ FPUSH(R_F32((u32)(r_edx+0x4cu)));
    /* 004f30a6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f30a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f30aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f30ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f30ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f30af: jbe 0x4f30bd */ if ((fC||fZ)) goto L_004f30bd;
L_004f30b1:; BB(0x004f30b1);
    /* 004f30b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f30b3: mov eax, 0x3f7d70a4 */ r_eax = 0x3f7d70a4u;
    /* 004f30b8: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 004f30bb: jmp 0x4f30d1 */ goto L_004f30d1;
L_004f30bd:; BB(0x004f30bd);
    /* 004f30bd: fld dword ptr [0x91df40] */ FPUSH(R_F32((u32)(0x91df40u)));
    /* 004f30c3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f30c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f30c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f30c8: jb 0x4f30cc */ if (fC) goto L_004f30cc;
L_004f30ca:; BB(0x004f30ca);
    /* 004f30ca: fst st(1) */ ST(1) = ST(0);
L_004f30cc:; BB(0x004f30cc);
    /* 004f30cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f30ce: fstp dword ptr [edx + 0x4c] */ W_F32((u32)(r_edx+0x4cu), ST(0)); FPOP();
L_004f30d1:; BB(0x004f30d1);
    /* 004f30d1: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 004f30d6: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f30d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f30d9: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f30deu); f_004f3eb8();
    /* 004f30de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f30df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f30e1: je 0x4f3109 */ if (fZ) goto L_004f3109;
L_004f30e3:; BB(0x004f30e3);
    /* 004f30e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f30e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f30e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f30e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f30e8: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 004f30ed: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f30f2u); f_00814298();
    /* 004f30f2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f30f5: call 0x4f12dc */ r_esp -= 4; W32(r_esp, 0x4f30fau); f_004f12dc();
    /* 004f30fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f30fc: mov dword ptr [0xa72574], eax */ W32((u32)(0xa72574u), r_eax);
    /* 004f3101: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 004f3104: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3107: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3108: ret  */ FN_RET(0x004f2f28); r_esp += 4; return;
L_004f3109:; BB(0x004f3109);
    /* 004f3109: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004f310e: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f3114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3115: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f311au); f_004f3eb8();
    /* 004f311a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f311b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f311d: je 0x4f2fae */ if (fZ) goto L_004f2fae;
L_004f3123:; BB(0x004f3123);
    /* 004f3123: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f3125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f3128: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004f312d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4f3132u); f_00814298();
    /* 004f3132: mov dword ptr [0xa72570], 1 */ W32((u32)(0xa72570u), 0x1u);
    /* 004f313c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f313e: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 004f3141: mov dword ptr [0xa72574], eax */ W32((u32)(0xa72574u), r_eax);
    /* 004f3146: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3149: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f314a: ret  */ FN_RET(0x004f2f28); r_esp += 4; return;
L_004f314b:; BB(0x004f314b);
    /* 004f314b: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 004f3152: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f3155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f3156: ret  */ FN_RET(0x004f2f28); r_esp += 4; return;
L_004f3157:; BB(0x004f3157);
    /* 004f3157: fadd dword ptr [0x91de80] */ ST(0) = ST(0) + R_F32((u32)(0x91de80u));
    /* 004f315d: fcom dword ptr [0x91df40] */ fx_compare(ST(0), R_F32((u32)(0x91df40u))); 
    /* 004f3163: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f3165: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f3166: jae 0x4f2f63 */ if (!fC) goto L_004f2f63;
L_004f316c:; BB(0x004f316c);
    /* 004f316c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f316e: fld dword ptr [0x91df40] */ FPUSH(R_F32((u32)(0x91df40u)));
    /* 004f3174: jmp 0x4f2f63 */ goto L_004f2f63;
L_004f3179:; BB(0x004f3179);
    /* 004f3179: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f317f: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4f3184u); f_004f3ecc();
    /* 004f3184: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f3185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f3187: je 0x4f3195 */ if (fZ) goto L_004f3195;
L_004f3189:; BB(0x004f3189);
    /* 004f3189: fld dword ptr [0x91df38] */ FPUSH(R_F32((u32)(0x91df38u)));
    /* 004f318f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f3193: jmp 0x4f31af */ goto L_004f31af;
L_004f3195:; BB(0x004f3195);
    /* 004f3195: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f319b: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4f31a0u); f_004f3ecc();
    /* 004f31a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f31a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f31a3: je 0x4f31af */ if (fZ) goto L_004f31af;
L_004f31a5:; BB(0x004f31a5);
    /* 004f31a5: fld dword ptr [0x91df3c] */ FPUSH(R_F32((u32)(0x91df3cu)));
    /* 004f31ab: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
L_004f31af:; BB(0x004f31af);
    /* 004f31af: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f31b5: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4f31bau); f_004f3ecc();
    /* 004f31ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f31bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f31bd: je 0x4f31ce */ if (fZ) goto L_004f31ce;
L_004f31bf:; BB(0x004f31bf);
    /* 004f31bf: fld dword ptr [0x91df38] */ FPUSH(R_F32((u32)(0x91df38u)));
    /* 004f31c5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f31c9: jmp 0x4f3055 */ goto L_004f3055;
L_004f31ce:; BB(0x004f31ce);
    /* 004f31ce: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f31d4: call 0x4f3ecc */ r_esp -= 4; W32(r_esp, 0x4f31d9u); f_004f3ecc();
    /* 004f31d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f31da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f31dc: je 0x4f3055 */ if (fZ) goto L_004f3055;
L_004f31e2:; BB(0x004f31e2);
    /* 004f31e2: fld dword ptr [0x91df3c] */ FPUSH(R_F32((u32)(0x91df3cu)));
    /* 004f31e8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f31ec: jmp 0x4f3055 */ goto L_004f3055;
}

