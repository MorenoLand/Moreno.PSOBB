#include "protos.h"

void f_004fd914(void) /* sub_4FD914 */
{
    FN_ENTER(0x004fd914);
    /* 004fd914: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd915: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd916: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd917: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd918: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd91b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fd91d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004fd921: mov esi, dword ptr [0xaab3b0] */ r_esi = R32((u32)(0xaab3b0u));
    /* 004fd927: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd929: je 0x4fd947 */ if (fZ) goto L_004fd947;
L_004fd92b:; BB(0x004fd92b);
    /* 004fd92b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd92c: lea ebp, [ebx + 0x11c] */ r_ebp = (u32)(r_ebx+0x11cu);
    /* 004fd932: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd933: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4fd938u); f_005b9ec4();
    /* 004fd938: mov edx, eax */ r_edx = r_eax;
    /* 004fd93a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd93d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd93f: jl 0x4fdc4f */ if ((fS!=fO)) goto L_004fdc4f;
L_004fd945:; BB(0x004fd945);
    /* 004fd945: jmp 0x4fd961 */ goto L_004fd961;
L_004fd947:; BB(0x004fd947);
    /* 004fd947: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd948: lea ebp, [ebx + 0x11c] */ r_ebp = (u32)(r_ebx+0x11cu);
    /* 004fd94e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd94f: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x4fd954u); f_005b9910();
    /* 004fd954: mov edx, eax */ r_edx = r_eax;
    /* 004fd956: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd959: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd95b: jl 0x4fdc98 */ if ((fS!=fO)) goto L_004fdc98;
L_004fd961:; BB(0x004fd961);
    /* 004fd961: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 004fd966: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004fd968: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fd96a: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004fd96d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd96f: jle 0x4fdb37 */ if ((fZ||fS!=fO)) goto L_004fdb37;
L_004fd975:; BB(0x004fd975);
    /* 004fd975: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004fd978: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_004fd97c:; BB(0x004fd97c);
    /* 004fd97c: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fd982: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd983: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd988u); f_00810160();
    /* 004fd988: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd98a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd98b: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd990u); f_008123d8();
    /* 004fd990: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd993: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fd995: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd997: jle 0x4fd9f9 */ if ((fZ||fS!=fO)) goto L_004fd9f9;
L_004fd999:; BB(0x004fd999);
    /* 004fd999: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd99c: jl 0x4fd9e7 */ if ((fS!=fO)) goto L_004fd9e7;
L_004fd99e:; BB(0x004fd99e);
    /* 004fd99e: lea edi, [eax - 6] */ r_edi = (u32)(r_eax+0xfffffffau);
L_004fd9a1:; BB(0x004fd9a1);
    /* 004fd9a1: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9a4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9a7: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9ad:; BB(0x004fd9ad);
    /* 004fd9ad: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9b0: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9b3: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9b6: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9bc:; BB(0x004fd9bc);
    /* 004fd9bc: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9bf: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9c2: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9c5: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9c7:; BB(0x004fd9c7);
    /* 004fd9c7: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9ca: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9cd: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9d0: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9d2:; BB(0x004fd9d2);
    /* 004fd9d2: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9d5: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9d8: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9db: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9dd:; BB(0x004fd9dd);
    /* 004fd9dd: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd9e0: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9e3: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd9e5: jle 0x4fd9a1 */ if ((fZ||fS!=fO)) goto L_004fd9a1;
L_004fd9e7:; BB(0x004fd9e7);
    /* 004fd9e7: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9ea: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9ed: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9ef:; BB(0x004fd9ef);
    /* 004fd9ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd9f2: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9f5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd9f7: jl 0x4fd9e7 */ if ((fS!=fO)) goto L_004fd9e7;
L_004fd9f9:; BB(0x004fd9f9);
    /* 004fd9f9: mov ebx, dword ptr [0xa727bc] */ r_ebx = R32((u32)(0xa727bcu));
    /* 004fd9ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fda01:; BB(0x004fda01);
    /* 004fda01: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda04: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda07: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda09:; BB(0x004fda09);
    /* 004fda09: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda0c: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda0f: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda12: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda14:; BB(0x004fda14);
    /* 004fda14: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda17: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda1a: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda1d: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda1f:; BB(0x004fda1f);
    /* 004fda1f: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda22: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda25: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda28: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda2a:; BB(0x004fda2a);
    /* 004fda2a: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda2d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fda30: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fda36: jl 0x4fda01 */ if ((fS!=fO)) goto L_004fda01;
L_004fda38:; BB(0x004fda38);
    /* 004fda38: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fda3a:; BB(0x004fda3a);
    /* 004fda3a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda3c: je 0x4fdc84 */ if (fZ) goto L_004fdc84;
L_004fda42:; BB(0x004fda42);
    /* 004fda42: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004fda44: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 004fda47: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004fda49: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 004fda4c: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 004fda4f: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 004fda52: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 004fda55: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 004fda58: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 004fda5b: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 004fda5e: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 004fda61: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 004fda64: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004fda67: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 004fda6a: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 004fda6d: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004fda70: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004fda73: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004fda76: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 004fda79: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004fda7c: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 004fda7f: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 004fda82: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 004fda85: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 004fda88: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004fda8b: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004fda8e: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 004fda91: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 004fda94: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004fda97: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 004fda9a: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004fda9d: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004fdaa0: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004fdaa3: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 004fdaa6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fdaa8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fdaadu); f_0061cdb0();
    /* 004fdaad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdaaf: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004fdab3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fdab6: lea edi, [ebx + 0x10] */ r_edi = (u32)(r_ebx+0x10u);
    /* 004fdab9: lea edx, [ebx + 0x1c] */ r_edx = (u32)(r_ebx+0x1cu);
    /* 004fdabc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdabd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdabe: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fdac3u); f_004f7fc0();
    /* 004fdac3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdac5: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4fdacau); f_007ba898();
    /* 004fdaca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fdacb: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004fdacf: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004fdad3: mov edi, dword ptr [edx + 0x58] */ r_edi = R32((u32)(r_edx+0x58u));
    /* 004fdad6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004fdad8: mov word ptr [ebx + 0xc], dx */ W16((u32)(r_ebx+0xcu), (u16)r_edx);
    /* 004fdadc: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fdae1u); f_00807ac0();
    /* 004fdae1: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 004fdae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdaea: je 0x4fdc7d */ if (fZ) goto L_004fdc7d;
L_004fdaf0:; BB(0x004fdaf0);
    /* 004fdaf0: movsx edi, word ptr [eax] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 004fdaf3: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdaf6: je 0x4fdb0f */ if (fZ) goto L_004fdb0f;
L_004fdaf8:; BB(0x004fdaf8);
    /* 004fdaf8: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
L_004fdafb:; BB(0x004fdafb);
    /* 004fdafb: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdafd: je 0x4fdc70 */ if (fZ) goto L_004fdc70;
L_004fdb03:; BB(0x004fdb03);
    /* 004fdb03: movsx edi, word ptr [eax + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 004fdb07: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fdb0a: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb0d: jne 0x4fdafb */ if (!fZ) goto L_004fdafb;
L_004fdb0f:; BB(0x004fdb0f);
    /* 004fdb0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fdb11:; BB(0x004fdb11);
    /* 004fdb11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb13: je 0x4fdc64 */ if (fZ) goto L_004fdc64;
L_004fdb19:; BB(0x004fdb19);
    /* 004fdb19: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 004fdb1c: mov dword ptr [eax + 0x80], ebx */ W32((u32)(r_eax+0x80u), r_ebx);
L_004fdb22:; BB(0x004fdb22);
    /* 004fdb22: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fdb25: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fdb28: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdb2b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdb2d: jl 0x4fd97c */ if ((fS!=fO)) goto L_004fd97c;
L_004fdb33:; BB(0x004fdb33);
    /* 004fdb33: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_004fdb37:; BB(0x004fdb37);
    /* 004fdb37: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fdb3d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb3e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdb40: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fdb45u); f_00810160();
    /* 004fdb45: mov esi, eax */ r_esi = r_eax;
    /* 004fdb47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb48: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fdb4du); f_008123d8();
    /* 004fdb4d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdb50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdb52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fdb54: jle 0x4fdb6b */ if ((fZ||fS!=fO)) goto L_004fdb6b;
L_004fdb56:; BB(0x004fdb56);
    /* 004fdb56: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fdb59: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb5c: je 0x4fdb61 */ if (fZ) goto L_004fdb61;
L_004fdb5e:; BB(0x004fdb5e);
    /* 004fdb5e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb61:; BB(0x004fdb61);
    /* 004fdb61: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fdb64: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdb67: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdb69: jl 0x4fdb56 */ if ((fS!=fO)) goto L_004fdb56;
L_004fdb6b:; BB(0x004fdb6b);
    /* 004fdb6b: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fdb71: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fdb73:; BB(0x004fdb73);
    /* 004fdb73: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fdb76: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb79: je 0x4fdb7e */ if (fZ) goto L_004fdb7e;
L_004fdb7b:; BB(0x004fdb7b);
    /* 004fdb7b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb7e:; BB(0x004fdb7e);
    /* 004fdb7e: movsx esi, word ptr [ecx + 0x44] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fdb82: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fdb85: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb88: je 0x4fdb8d */ if (fZ) goto L_004fdb8d;
L_004fdb8a:; BB(0x004fdb8a);
    /* 004fdb8a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb8d:; BB(0x004fdb8d);
    /* 004fdb8d: movsx esi, word ptr [eax + 0x44] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004fdb91: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb94: je 0x4fdb99 */ if (fZ) goto L_004fdb99;
L_004fdb96:; BB(0x004fdb96);
    /* 004fdb96: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb99:; BB(0x004fdb99);
    /* 004fdb99: movsx esi, word ptr [eax + 0x88] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004fdba0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdba3: je 0x4fdba8 */ if (fZ) goto L_004fdba8;
L_004fdba5:; BB(0x004fdba5);
    /* 004fdba5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdba8:; BB(0x004fdba8);
    /* 004fdba8: lea ecx, [eax + 0xcc] */ r_ecx = (u32)(r_eax+0xccu);
    /* 004fdbae: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbb1: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdbb7: jl 0x4fdb73 */ if ((fS!=fO)) goto L_004fdb73;
L_004fdbb9:; BB(0x004fdbb9);
    /* 004fdbb9: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fdbbf: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004fdbc2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdbc3: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004fdbc6: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004fdbc8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdbca: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fdbcfu); f_00810160();
    /* 004fdbcf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004fdbd3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdbd4: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fdbd9u); f_008123d8();
    /* 004fdbd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdbdc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fdbe0: jle 0x4fdc02 */ if ((fZ||fS!=fO)) goto L_004fdc02;
L_004fdbe2:; BB(0x004fdbe2);
    /* 004fdbe2: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_004fdbe5:; BB(0x004fdbe5);
    /* 004fdbe5: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fdbe8: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdbeb: je 0x4fdbf8 */ if (fZ) goto L_004fdbf8;
L_004fdbed:; BB(0x004fdbed);
    /* 004fdbed: movsx edi, word ptr [ecx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fdbf1: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdbf3: jne 0x4fdbf8 */ if (!fZ) goto L_004fdbf8;
L_004fdbf5:; BB(0x004fdbf5);
    /* 004fdbf5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdbf8:; BB(0x004fdbf8);
    /* 004fdbf8: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdbfb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbfe: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdc00: jl 0x4fdbe5 */ if ((fS!=fO)) goto L_004fdbe5;
L_004fdc02:; BB(0x004fdc02);
    /* 004fdc02: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fdc08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fdc0a:; BB(0x004fdc0a);
    /* 004fdc0a: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fdc0d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc10: je 0x4fdc1d */ if (fZ) goto L_004fdc1d;
L_004fdc12:; BB(0x004fdc12);
    /* 004fdc12: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fdc16: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc18: jne 0x4fdc1d */ if (!fZ) goto L_004fdc1d;
L_004fdc1a:; BB(0x004fdc1a);
    /* 004fdc1a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdc1d:; BB(0x004fdc1d);
    /* 004fdc1d: movsx edi, word ptr [ecx + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fdc21: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fdc24: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc27: je 0x4fdc34 */ if (fZ) goto L_004fdc34;
L_004fdc29:; BB(0x004fdc29);
    /* 004fdc29: movsx edi, word ptr [eax + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fdc2d: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc2f: jne 0x4fdc34 */ if (!fZ) goto L_004fdc34;
L_004fdc31:; BB(0x004fdc31);
    /* 004fdc31: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdc34:; BB(0x004fdc34);
    /* 004fdc34: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fdc37: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdc3a: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdc40: jl 0x4fdc0a */ if ((fS!=fO)) goto L_004fdc0a;
L_004fdc42:; BB(0x004fdc42);
    /* 004fdc42: mov dword ptr [ebx + 0x44], ebp */ W32((u32)(r_ebx+0x44u), r_ebp);
    /* 004fdc45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fdc48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fdc49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdc4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fdc4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fdc4c: ret 4 */ FN_RET(0x004fd914); r_esp += 8; return;
L_004fdc4f:; BB(0x004fdc4f);
    /* 004fdc4f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc50: push 0x91ec80 */ { u32 v = 0x91ec80u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc55: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fdc5au); f_0061cdb0();
    /* 004fdc5a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fdc5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fdc5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdc5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fdc60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fdc61: ret 4 */ FN_RET(0x004fd914); r_esp += 8; return;
L_004fdc64:; BB(0x004fdc64);
    /* 004fdc64: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 004fdc6b: jmp 0x4fdb22 */ goto L_004fdb22;
L_004fdc70:; BB(0x004fdc70);
    /* 004fdc70: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 004fdc73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc74: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4fdc77u); call_ind(t); }
    /* 004fdc77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fdc78: jmp 0x4fdb11 */ goto L_004fdb11;
L_004fdc7d:; BB(0x004fdc7d);
    /* 004fdc7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fdc7f: jmp 0x4fdb11 */ goto L_004fdb11;
L_004fdc84:; BB(0x004fdc84);
    /* 004fdc84: push 0x91ec94 */ { u32 v = 0x91ec94u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc89: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fdc8eu); f_0061cdb0();
    /* 004fdc8e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fdc91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fdc92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdc93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fdc94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fdc95: ret 4 */ FN_RET(0x004fd914); r_esp += 8; return;
L_004fdc98:; BB(0x004fdc98);
    /* 004fdc98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc99: push 0x91ec80 */ { u32 v = 0x91ec80u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc9e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fdca3u); f_0061cdb0();
    /* 004fdca3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fdca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fdca7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdca8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fdca9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fdcaa: ret 4 */ FN_RET(0x004fd914); r_esp += 8; return;
}

void f_004fda40(void)
{
    FN_ENTER(0x004fda40);
    goto L_004fda40;
L_004fd97c:; BB(0x004fd97c);
    /* 004fd97c: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fd982: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd983: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fd988u); f_00810160();
    /* 004fd988: mov ebx, eax */ r_ebx = r_eax;
    /* 004fd98a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fd98b: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fd990u); f_008123d8();
    /* 004fd990: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd993: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fd995: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fd997: jle 0x4fd9f9 */ if ((fZ||fS!=fO)) goto L_004fd9f9;
L_004fd999:; BB(0x004fd999);
    /* 004fd999: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd99c: jl 0x4fd9e7 */ if ((fS!=fO)) goto L_004fd9e7;
L_004fd99e:; BB(0x004fd99e);
    /* 004fd99e: lea edi, [eax - 6] */ r_edi = (u32)(r_eax+0xfffffffau);
L_004fd9a1:; BB(0x004fd9a1);
    /* 004fd9a1: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9a4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9a7: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9ad:; BB(0x004fd9ad);
    /* 004fd9ad: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9b0: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9b3: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9b6: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9bc:; BB(0x004fd9bc);
    /* 004fd9bc: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9bf: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9c2: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9c5: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9c7:; BB(0x004fd9c7);
    /* 004fd9c7: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9ca: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9cd: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9d0: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9d2:; BB(0x004fd9d2);
    /* 004fd9d2: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9d5: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9d8: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9db: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9dd:; BB(0x004fd9dd);
    /* 004fd9dd: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd9e0: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9e3: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd9e5: jle 0x4fd9a1 */ if ((fZ||fS!=fO)) goto L_004fd9a1;
L_004fd9e7:; BB(0x004fd9e7);
    /* 004fd9e7: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fd9ea: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd9ed: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fd9ef:; BB(0x004fd9ef);
    /* 004fd9ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd9f2: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fd9f5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd9f7: jl 0x4fd9e7 */ if ((fS!=fO)) goto L_004fd9e7;
L_004fd9f9:; BB(0x004fd9f9);
    /* 004fd9f9: mov ebx, dword ptr [0xa727bc] */ r_ebx = R32((u32)(0xa727bcu));
    /* 004fd9ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fda01:; BB(0x004fda01);
    /* 004fda01: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda04: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda07: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda09:; BB(0x004fda09);
    /* 004fda09: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda0c: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda0f: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda12: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda14:; BB(0x004fda14);
    /* 004fda14: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda17: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda1a: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda1d: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda1f:; BB(0x004fda1f);
    /* 004fda1f: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda22: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fda25: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda28: je 0x4fda3a */ if (fZ) goto L_004fda3a;
L_004fda2a:; BB(0x004fda2a);
    /* 004fda2a: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fda2d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fda30: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fda36: jl 0x4fda01 */ if ((fS!=fO)) goto L_004fda01;
L_004fda38:; BB(0x004fda38);
    /* 004fda38: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fda3a:; BB(0x004fda3a);
    /* 004fda3a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fda3c: je 0x4fdc84 */ if (fZ) goto L_004fdc84;
L_004fda40:; BB(0x004fda40);
    /* 004fda40: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_004fda42:; BB(0x004fda42);
    /* 004fda42: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004fda44: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 004fda47: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004fda49: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 004fda4c: mov dword ptr [ebx + 4], edi */ W32((u32)(r_ebx+0x4u), r_edi);
    /* 004fda4f: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 004fda52: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 004fda55: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 004fda58: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 004fda5b: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 004fda5e: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 004fda61: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 004fda64: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004fda67: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 004fda6a: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 004fda6d: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004fda70: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004fda73: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004fda76: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 004fda79: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004fda7c: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 004fda7f: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 004fda82: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 004fda85: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 004fda88: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004fda8b: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004fda8e: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 004fda91: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 004fda94: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004fda97: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 004fda9a: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004fda9d: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004fdaa0: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004fdaa3: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 004fdaa6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fdaa8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fdaadu); f_0061cdb0();
    /* 004fdaad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdaaf: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004fdab3: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fdab6: lea edi, [ebx + 0x10] */ r_edi = (u32)(r_ebx+0x10u);
    /* 004fdab9: lea edx, [ebx + 0x1c] */ r_edx = (u32)(r_ebx+0x1cu);
    /* 004fdabc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdabd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdabe: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4fdac3u); f_004f7fc0();
    /* 004fdac3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdac5: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4fdacau); f_007ba898();
    /* 004fdaca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fdacb: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004fdacf: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004fdad3: mov edi, dword ptr [edx + 0x58] */ r_edi = R32((u32)(r_edx+0x58u));
    /* 004fdad6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004fdad8: mov word ptr [ebx + 0xc], dx */ W16((u32)(r_ebx+0xcu), (u16)r_edx);
    /* 004fdadc: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fdae1u); f_00807ac0();
    /* 004fdae1: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 004fdae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdaea: je 0x4fdc7d */ if (fZ) goto L_004fdc7d;
L_004fdaf0:; BB(0x004fdaf0);
    /* 004fdaf0: movsx edi, word ptr [eax] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 004fdaf3: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdaf6: je 0x4fdb0f */ if (fZ) goto L_004fdb0f;
L_004fdaf8:; BB(0x004fdaf8);
    /* 004fdaf8: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
L_004fdafb:; BB(0x004fdafb);
    /* 004fdafb: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdafd: je 0x4fdc70 */ if (fZ) goto L_004fdc70;
L_004fdb03:; BB(0x004fdb03);
    /* 004fdb03: movsx edi, word ptr [eax + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 004fdb07: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fdb0a: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb0d: jne 0x4fdafb */ if (!fZ) goto L_004fdafb;
L_004fdb0f:; BB(0x004fdb0f);
    /* 004fdb0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fdb11:; BB(0x004fdb11);
    /* 004fdb11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb13: je 0x4fdc64 */ if (fZ) goto L_004fdc64;
L_004fdb19:; BB(0x004fdb19);
    /* 004fdb19: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 004fdb1c: mov dword ptr [eax + 0x80], ebx */ W32((u32)(r_eax+0x80u), r_ebx);
L_004fdb22:; BB(0x004fdb22);
    /* 004fdb22: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fdb25: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fdb28: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdb2b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdb2d: jl 0x4fd97c */ if ((fS!=fO)) goto L_004fd97c;
L_004fdb33:; BB(0x004fdb33);
    /* 004fdb33: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004fdb37: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fdb3d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb3e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdb40: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fdb45u); f_00810160();
    /* 004fdb45: mov esi, eax */ r_esi = r_eax;
    /* 004fdb47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdb48: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fdb4du); f_008123d8();
    /* 004fdb4d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdb50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdb52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fdb54: jle 0x4fdb6b */ if ((fZ||fS!=fO)) goto L_004fdb6b;
L_004fdb56:; BB(0x004fdb56);
    /* 004fdb56: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fdb59: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb5c: je 0x4fdb61 */ if (fZ) goto L_004fdb61;
L_004fdb5e:; BB(0x004fdb5e);
    /* 004fdb5e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb61:; BB(0x004fdb61);
    /* 004fdb61: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fdb64: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdb67: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdb69: jl 0x4fdb56 */ if ((fS!=fO)) goto L_004fdb56;
L_004fdb6b:; BB(0x004fdb6b);
    /* 004fdb6b: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fdb71: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fdb73:; BB(0x004fdb73);
    /* 004fdb73: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fdb76: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb79: je 0x4fdb7e */ if (fZ) goto L_004fdb7e;
L_004fdb7b:; BB(0x004fdb7b);
    /* 004fdb7b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb7e:; BB(0x004fdb7e);
    /* 004fdb7e: movsx esi, word ptr [ecx + 0x44] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fdb82: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fdb85: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb88: je 0x4fdb8d */ if (fZ) goto L_004fdb8d;
L_004fdb8a:; BB(0x004fdb8a);
    /* 004fdb8a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb8d:; BB(0x004fdb8d);
    /* 004fdb8d: movsx esi, word ptr [eax + 0x44] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004fdb91: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdb94: je 0x4fdb99 */ if (fZ) goto L_004fdb99;
L_004fdb96:; BB(0x004fdb96);
    /* 004fdb96: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdb99:; BB(0x004fdb99);
    /* 004fdb99: movsx esi, word ptr [eax + 0x88] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004fdba0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdba3: je 0x4fdba8 */ if (fZ) goto L_004fdba8;
L_004fdba5:; BB(0x004fdba5);
    /* 004fdba5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdba8:; BB(0x004fdba8);
    /* 004fdba8: lea ecx, [eax + 0xcc] */ r_ecx = (u32)(r_eax+0xccu);
    /* 004fdbae: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbb1: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdbb7: jl 0x4fdb73 */ if ((fS!=fO)) goto L_004fdb73;
L_004fdbb9:; BB(0x004fdbb9);
    /* 004fdbb9: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fdbbf: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004fdbc2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdbc3: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004fdbc6: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004fdbc8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdbca: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fdbcfu); f_00810160();
    /* 004fdbcf: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004fdbd3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdbd4: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fdbd9u); f_008123d8();
    /* 004fdbd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdbdc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fdbe0: jle 0x4fdc02 */ if ((fZ||fS!=fO)) goto L_004fdc02;
L_004fdbe2:; BB(0x004fdbe2);
    /* 004fdbe2: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_004fdbe5:; BB(0x004fdbe5);
    /* 004fdbe5: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fdbe8: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdbeb: je 0x4fdbf8 */ if (fZ) goto L_004fdbf8;
L_004fdbed:; BB(0x004fdbed);
    /* 004fdbed: movsx edi, word ptr [ecx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fdbf1: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdbf3: jne 0x4fdbf8 */ if (!fZ) goto L_004fdbf8;
L_004fdbf5:; BB(0x004fdbf5);
    /* 004fdbf5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdbf8:; BB(0x004fdbf8);
    /* 004fdbf8: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fdbfb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdbfe: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdc00: jl 0x4fdbe5 */ if ((fS!=fO)) goto L_004fdbe5;
L_004fdc02:; BB(0x004fdc02);
    /* 004fdc02: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fdc08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fdc0a:; BB(0x004fdc0a);
    /* 004fdc0a: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fdc0d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc10: je 0x4fdc1d */ if (fZ) goto L_004fdc1d;
L_004fdc12:; BB(0x004fdc12);
    /* 004fdc12: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fdc16: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc18: jne 0x4fdc1d */ if (!fZ) goto L_004fdc1d;
L_004fdc1a:; BB(0x004fdc1a);
    /* 004fdc1a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdc1d:; BB(0x004fdc1d);
    /* 004fdc1d: movsx edi, word ptr [ecx + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fdc21: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fdc24: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc27: je 0x4fdc34 */ if (fZ) goto L_004fdc34;
L_004fdc29:; BB(0x004fdc29);
    /* 004fdc29: movsx edi, word ptr [eax + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fdc2d: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdc2f: jne 0x4fdc34 */ if (!fZ) goto L_004fdc34;
L_004fdc31:; BB(0x004fdc31);
    /* 004fdc31: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdc34:; BB(0x004fdc34);
    /* 004fdc34: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fdc37: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdc3a: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdc40: jl 0x4fdc0a */ if ((fS!=fO)) goto L_004fdc0a;
L_004fdc42:; BB(0x004fdc42);
    /* 004fdc42: mov dword ptr [ebx + 0x44], ebp */ W32((u32)(r_ebx+0x44u), r_ebp);
    /* 004fdc45: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fdc48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fdc49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdc4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fdc4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fdc4c: ret 4 */ FN_RET(0x004fda40); r_esp += 8; return;
L_004fdc64:; BB(0x004fdc64);
    /* 004fdc64: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 004fdc6b: jmp 0x4fdb22 */ goto L_004fdb22;
L_004fdc70:; BB(0x004fdc70);
    /* 004fdc70: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 004fdc73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc74: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4fdc77u); call_ind(t); }
    /* 004fdc77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fdc78: jmp 0x4fdb11 */ goto L_004fdb11;
L_004fdc7d:; BB(0x004fdc7d);
    /* 004fdc7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fdc7f: jmp 0x4fdb11 */ goto L_004fdb11;
L_004fdc84:; BB(0x004fdc84);
    /* 004fdc84: push 0x91ec94 */ { u32 v = 0x91ec94u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdc89: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fdc8eu); f_0061cdb0();
    /* 004fdc8e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fdc91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fdc92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fdc93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fdc94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fdc95: ret 4 */ FN_RET(0x004fda40); r_esp += 8; return;
}

void f_004fdcb0(void) /* sub_4FDCB0 */
{
    FN_ENTER(0x004fdcb0);
    /* 004fdcb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdcb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fdcb3: lea edx, [ebx + 0xb0] */ r_edx = (u32)(r_ebx+0xb0u);
    /* 004fdcb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fdcbb: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004fdcbd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004fdcc0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004fdcc3: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 004fdcc6: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 004fdcc9: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 004fdccc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 004fdccf: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004fdcd2: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004fdcd5: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004fdcd8: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004fdcdb: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004fdcde: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004fdce1: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004fdce4: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 004fdce7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fdce9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fdcee: mov word ptr [ebx + 0xb0], ax */ W16((u32)(r_ebx+0xb0u), (u16)r_eax);
    /* 004fdcf5: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4fdcfau); f_007ba898();
    /* 004fdcfa: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fdcfd: mov dword ptr [ebx + 0xd4], 0x3f800000 */ W32((u32)(r_ebx+0xd4u), 0x3f800000u);
    /* 004fdd07: mov word ptr [ebx + 0xb4], ax */ W16((u32)(r_ebx+0xb4u), (u16)r_eax);
    /* 004fdd0e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004fdd11: mov dword ptr [ebx + 0xd8], 0x3f800000 */ W32((u32)(r_ebx+0xd8u), 0x3f800000u);
    /* 004fdd1b: mov dword ptr [ebx + 0xbc], eax */ W32((u32)(r_ebx+0xbcu), r_eax);
    /* 004fdd21: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004fdd24: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 004fdd2a: mov dword ptr [ebx + 0xdc], 0x3f800000 */ W32((u32)(r_ebx+0xdcu), 0x3f800000u);
    /* 004fdd34: mov dword ptr [ebx + 0xc4], eax */ W32((u32)(r_ebx+0xc4u), r_eax);
    /* 004fdd3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fdd3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fdd3c: ret  */ FN_RET(0x004fdcb0); r_esp += 4; return;
}

void f_004fdd40(void) /* sub_4FDD40 */
{
    FN_ENTER(0x004fdd40);
    /* 004fdd40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fdd47: mov esi, dword ptr [0xaafca0] */ r_esi = R32((u32)(0xaafca0u));
    /* 004fdd4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd4e: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fdd53u); f_00810160();
    /* 004fdd53: mov ebp, eax */ r_ebp = r_eax;
    /* 004fdd55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdd56: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fdd5bu); f_008123d8();
    /* 004fdd5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdd5e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdd60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fdd62: jle 0x4fddce */ if ((fZ||fS!=fO)) goto L_004fddce;
L_004fdd64:; BB(0x004fdd64);
    /* 004fdd64: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdd67: jl 0x4fddbb */ if ((fS!=fO)) goto L_004fddbb;
L_004fdd69:; BB(0x004fdd69);
    /* 004fdd69: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fdd6d: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdd70: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fdd76:; BB(0x004fdd76);
    /* 004fdd76: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdd79: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fdd7d: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdd80: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fdd86:; BB(0x004fdd86);
    /* 004fdd86: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdd89: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fdd8d: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdd90: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fdd96:; BB(0x004fdd96);
    /* 004fdd96: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdd99: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fdd9d: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdda0: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fdda2:; BB(0x004fdda2);
    /* 004fdda2: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdda5: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fdda9: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fddac: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fddae:; BB(0x004fddae);
    /* 004fddae: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fddb1: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fddb4: lea esi, [eax - 6] */ r_esi = (u32)(r_eax+0xfffffffau);
    /* 004fddb7: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fddb9: jle 0x4fdd69 */ if ((fZ||fS!=fO)) goto L_004fdd69;
L_004fddbb:; BB(0x004fddbb);
    /* 004fddbb: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fddbf: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fddc2: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fddc4:; BB(0x004fddc4);
    /* 004fddc4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fddc7: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fddca: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fddcc: jl 0x4fddbb */ if ((fS!=fO)) goto L_004fddbb;
L_004fddce:; BB(0x004fddce);
    /* 004fddce: mov ebp, dword ptr [0xa727bc] */ r_ebp = R32((u32)(0xa727bcu));
    /* 004fddd4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fddd6:; BB(0x004fddd6);
    /* 004fddd6: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fddda: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdddd: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fdddf:; BB(0x004fdddf);
    /* 004fdddf: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdde2: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fdde6: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdde9: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fddeb:; BB(0x004fddeb);
    /* 004fddeb: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fddee: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fddf2: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fddf5: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fddf7:; BB(0x004fddf7);
    /* 004fddf7: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fddfa: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fddfe: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fde01: je 0x4fde13 */ if (fZ) goto L_004fde13;
L_004fde03:; BB(0x004fde03);
    /* 004fde03: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fde06: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fde09: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fde0f: jl 0x4fddd6 */ if ((fS!=fO)) goto L_004fddd6;
L_004fde11:; BB(0x004fde11);
    /* 004fde11: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004fde13:; BB(0x004fde13);
    /* 004fde13: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fde15: je 0x4fe04d */ if (fZ) goto L_004fe04d;
L_004fde1b:; BB(0x004fde1b);
    /* 004fde1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fde1d: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4fde22u); f_007ba898();
    /* 004fde22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fde23: mov word ptr [ebx + 0xb4], ax */ W16((u32)(r_ebx+0xb4u), (u16)r_eax);
    /* 004fde2a: lea edx, [ebx + 0xb0] */ r_edx = (u32)(r_ebx+0xb0u);
    /* 004fde30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fde31: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fde33: call 0x4fc320 */ r_esp -= 4; W32(r_esp, 0x4fde38u); f_004fc320();
    /* 004fde38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fde3a: je 0x4fe04d */ if (fZ) goto L_004fe04d;
L_004fde40:; BB(0x004fde40);
    /* 004fde40: mov edx, dword ptr [ebx + 0xf0] */ r_edx = R32((u32)(r_ebx+0xf0u));
    /* 004fde46: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 004fde49: mov word ptr [ebp], si */ W16((u32)(r_ebp), (u16)r_esi);
    /* 004fde4d: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 004fde50: movzx edi, word ptr [ebx + 0xb0] */ r_edi = (u32)R16((u32)(r_ebx+0xb0u));
    /* 004fde57: mov word ptr [ebp + 4], di */ W16((u32)(r_ebp+0x4u), (u16)r_edi);
    /* 004fde5b: movzx edx, word ptr [ebx + 0xb2] */ r_edx = (u32)R16((u32)(r_ebx+0xb2u));
    /* 004fde62: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 004fde66: movzx edx, word ptr [ebx + 0xb4] */ r_edx = (u32)R16((u32)(r_ebx+0xb4u));
    /* 004fde6d: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 004fde71: movzx edx, word ptr [ebx + 0xb6] */ r_edx = (u32)R16((u32)(r_ebx+0xb6u));
    /* 004fde78: mov word ptr [ebp + 0xa], dx */ W16((u32)(r_ebp+0xau), (u16)r_edx);
    /* 004fde7c: movzx edx, word ptr [ebx + 0xb8] */ r_edx = (u32)R16((u32)(r_ebx+0xb8u));
    /* 004fde83: mov word ptr [ebp + 0xc], dx */ W16((u32)(r_ebp+0xcu), (u16)r_edx);
    /* 004fde87: movzx edx, word ptr [ebx + 0xba] */ r_edx = (u32)R16((u32)(r_ebx+0xbau));
    /* 004fde8e: mov word ptr [ebp + 0xe], dx */ W16((u32)(r_ebp+0xeu), (u16)r_edx);
    /* 004fde92: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 004fde98: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 004fde9b: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 004fdea1: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 004fdea4: mov edx, dword ptr [ebx + 0xc4] */ r_edx = R32((u32)(r_ebx+0xc4u));
    /* 004fdeaa: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 004fdead: mov edx, dword ptr [ebx + 0xc8] */ r_edx = R32((u32)(r_ebx+0xc8u));
    /* 004fdeb3: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 004fdeb6: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 004fdebc: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 004fdebf: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 004fdec5: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 004fdec8: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 004fdece: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 004fded1: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 004fded7: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 004fdeda: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 004fdee0: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 004fdee3: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 004fdee9: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 004fdeec: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 004fdef2: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 004fdef5: mov edx, dword ptr [ebx + 0xe8] */ r_edx = R32((u32)(r_ebx+0xe8u));
    /* 004fdefb: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 004fdefe: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 004fdf01: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fdf03: mov word ptr [ebp + 0xc], dx */ W16((u32)(r_ebp+0xcu), (u16)r_edx);
    /* 004fdf07: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 004fdf0d: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 004fdf11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdf13: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 004fdf17: mov esi, dword ptr [0xab02b4] */ r_esi = R32((u32)(0xab02b4u));
    /* 004fdf1d: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 004fdf20: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdf26: jle 0x4fdf2f */ if ((fZ||fS!=fO)) goto L_004fdf2f;
L_004fdf28:; BB(0x004fdf28);
    /* 004fdf28: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 004fdf2d: jmp 0x4fdf35 */ goto L_004fdf35;
L_004fdf2f:; BB(0x004fdf2f);
    /* 004fdf2f: mov dword ptr [0xab02b4], edx */ W32((u32)(0xab02b4u), r_edx);
L_004fdf35:; BB(0x004fdf35);
    /* 004fdf35: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fdf3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdf3c: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
    /* 004fdf40: mov dword ptr [eax + 0x80], ebp */ W32((u32)(r_eax+0x80u), r_ebp);
    /* 004fdf46: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdf48: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fdf4du); f_00810160();
    /* 004fdf4d: mov esi, eax */ r_esi = r_eax;
    /* 004fdf4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdf50: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fdf55u); f_008123d8();
    /* 004fdf55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdf58: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdf5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fdf5c: jle 0x4fdf73 */ if ((fZ||fS!=fO)) goto L_004fdf73;
L_004fdf5e:; BB(0x004fdf5e);
    /* 004fdf5e: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fdf61: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdf64: je 0x4fdf69 */ if (fZ) goto L_004fdf69;
L_004fdf66:; BB(0x004fdf66);
    /* 004fdf66: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdf69:; BB(0x004fdf69);
    /* 004fdf69: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fdf6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdf6f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdf71: jl 0x4fdf5e */ if ((fS!=fO)) goto L_004fdf5e;
L_004fdf73:; BB(0x004fdf73);
    /* 004fdf73: mov esi, dword ptr [0xa727bc] */ r_esi = R32((u32)(0xa727bcu));
    /* 004fdf79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fdf7b:; BB(0x004fdf7b);
    /* 004fdf7b: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fdf7e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdf81: je 0x4fdf86 */ if (fZ) goto L_004fdf86;
L_004fdf83:; BB(0x004fdf83);
    /* 004fdf83: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdf86:; BB(0x004fdf86);
    /* 004fdf86: lea eax, [esi + 0x44] */ r_eax = (u32)(r_esi+0x44u);
    /* 004fdf89: movsx esi, word ptr [esi + 0x44] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x44u));
    /* 004fdf8d: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdf90: je 0x4fdf95 */ if (fZ) goto L_004fdf95;
L_004fdf92:; BB(0x004fdf92);
    /* 004fdf92: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdf95:; BB(0x004fdf95);
    /* 004fdf95: movsx esi, word ptr [eax + 0x44] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004fdf99: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdf9c: je 0x4fdfa1 */ if (fZ) goto L_004fdfa1;
L_004fdf9e:; BB(0x004fdf9e);
    /* 004fdf9e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdfa1:; BB(0x004fdfa1);
    /* 004fdfa1: movsx esi, word ptr [eax + 0x88] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004fdfa8: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdfab: je 0x4fdfb0 */ if (fZ) goto L_004fdfb0;
L_004fdfad:; BB(0x004fdfad);
    /* 004fdfad: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fdfb0:; BB(0x004fdfb0);
    /* 004fdfb0: lea esi, [eax + 0xcc] */ r_esi = (u32)(r_eax+0xccu);
    /* 004fdfb6: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fdfb9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fdfbf: jl 0x4fdf7b */ if ((fS!=fO)) goto L_004fdf7b;
L_004fdfc1:; BB(0x004fdfc1);
    /* 004fdfc1: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fdfc7: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004fdfca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfcb: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004fdfce: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004fdfd0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fdfd2: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fdfd7u); f_00810160();
    /* 004fdfd7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004fdfdb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fdfdc: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fdfe1u); f_008123d8();
    /* 004fdfe1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fdfe4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fdfe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fdfe8: jle 0x4fe00a */ if ((fZ||fS!=fO)) goto L_004fe00a;
L_004fdfea:; BB(0x004fdfea);
    /* 004fdfea: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004fdfed:; BB(0x004fdfed);
    /* 004fdfed: movsx ecx, word ptr [edi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fdff0: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdff3: je 0x4fe000 */ if (fZ) goto L_004fe000;
L_004fdff5:; BB(0x004fdff5);
    /* 004fdff5: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fdff9: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fdffb: jne 0x4fe000 */ if (!fZ) goto L_004fe000;
L_004fdffd:; BB(0x004fdffd);
    /* 004fdffd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fe000:; BB(0x004fe000);
    /* 004fe000: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fe003: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe006: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe008: jl 0x4fdfed */ if ((fS!=fO)) goto L_004fdfed;
L_004fe00a:; BB(0x004fe00a);
    /* 004fe00a: mov edi, dword ptr [0xa727bc] */ r_edi = R32((u32)(0xa727bcu));
    /* 004fe010: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe012:; BB(0x004fe012);
    /* 004fe012: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fe015: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe018: je 0x4fe025 */ if (fZ) goto L_004fe025;
L_004fe01a:; BB(0x004fe01a);
    /* 004fe01a: movsx eax, word ptr [edi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fe01e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe020: jne 0x4fe025 */ if (!fZ) goto L_004fe025;
L_004fe022:; BB(0x004fe022);
    /* 004fe022: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fe025:; BB(0x004fe025);
    /* 004fe025: lea eax, [edi + 0x44] */ r_eax = (u32)(r_edi+0x44u);
    /* 004fe028: movsx edi, word ptr [edi + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x44u));
    /* 004fe02c: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe02f: je 0x4fe03c */ if (fZ) goto L_004fe03c;
L_004fe031:; BB(0x004fe031);
    /* 004fe031: movsx edi, word ptr [eax + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fe035: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe037: jne 0x4fe03c */ if (!fZ) goto L_004fe03c;
L_004fe039:; BB(0x004fe039);
    /* 004fe039: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fe03c:; BB(0x004fe03c);
    /* 004fe03c: lea edi, [eax + 0x44] */ r_edi = (u32)(r_eax+0x44u);
    /* 004fe03f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe042: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004fe048: jl 0x4fe012 */ if ((fS!=fO)) goto L_004fe012;
L_004fe04a:; BB(0x004fe04a);
    /* 004fe04a: mov dword ptr [ebx + 0x44], ebp */ W32((u32)(r_ebx+0x44u), r_ebp);
L_004fe04d:; BB(0x004fe04d);
    /* 004fe04d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fe04e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fe04f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe050: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fe051: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fe052: ret  */ FN_RET(0x004fdd40); r_esp += 4; return;
}

