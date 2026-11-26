#include "protos.h"

void f_005611c8(void) /* sub_5611C8 */
{
    FN_ENTER(0x005611c8);
    /* 005611c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005611c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005611ca: mov esi, ecx */ r_esi = r_ecx;
    /* 005611cc: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5611d1u); f_007a61a4();
    /* 005611d1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005611d7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5611dcu); f_0068d5a8();
    /* 005611dc: mov edi, eax */ r_edi = r_eax;
    /* 005611de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005611e1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005611e3: je 0x56120e */ if (fZ) goto L_0056120e;
L_005611e5:; BB(0x005611e5);
    /* 005611e5: mov ecx, esi */ r_ecx = r_esi;
    /* 005611e7: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5611ecu); f_007ba980();
    /* 005611ec: mov esi, eax */ r_esi = r_eax;
    /* 005611ee: mov ecx, edi */ r_ecx = r_edi;
    /* 005611f0: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x5611f5u); f_007ba980();
    /* 005611f5: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 005611f8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005611fb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005611fd: jne 0x56120e */ if (!fZ) goto L_0056120e;
L_005611ff:; BB(0x005611ff);
    /* 005611ff: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00561201: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00561206: call 0x4d430c */ r_esp -= 4; W32(r_esp, 0x56120bu); f_004d430c();
    /* 0056120b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0056120e:; BB(0x0056120e);
    /* 0056120e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056120f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00561210: ret  */ FN_RET(0x005611c8); r_esp += 4; return;
}

void f_00561214(void) /* sub_561214 */
{
    FN_ENTER(0x00561214);
    /* 00561214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561215: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561216: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00561217: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056121a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056121c: fld dword ptr [0x925ac0] */ FPUSH(R_F32((u32)(0x925ac0u)));
    /* 00561222: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00561225: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00561228: lea ebx, [ebp + 0x128] */ r_ebx = (u32)(r_ebp+0x128u);
    /* 0056122e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00561231: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00561234: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00561238: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0056123c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00561240: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00561244: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00561247: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00561249: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056124a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056124b: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x561250u); f_007806dc();
    /* 00561250: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561253: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561255: je 0x56134e */ if (fZ) goto L_0056134e;
L_0056125b:; BB(0x0056125b);
    /* 0056125b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056125d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056125f: je 0x561334 */ if (fZ) goto L_00561334;
L_00561265:; BB(0x00561265);
    /* 00561265: fld dword ptr [0x925ac0] */ FPUSH(R_F32((u32)(0x925ac0u)));
    /* 0056126b: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0056126e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00561272: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00561275: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00561279: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 0056127d: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00561280: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00561284: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00561288: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 0056128c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056128e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056128f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561290: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x561295u); f_007806dc();
    /* 00561295: mov esi, eax */ r_esi = r_eax;
    /* 00561297: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056129a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056129c: je 0x56132b */ if (fZ) goto L_0056132b;
L_005612a2:; BB(0x005612a2);
    /* 005612a2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005612a4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005612a7: je 0x56132b */ if (fZ) goto L_0056132b;
L_005612ad:; BB(0x005612ad);
    /* 005612ad: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005612af: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005612b2: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005612b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005612b6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5612bbu); f_0050b510();
    /* 005612bb: mov ebp, eax */ r_ebp = r_eax;
    /* 005612bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005612c0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005612c2: je 0x561305 */ if (fZ) goto L_00561305;
L_005612c4:; BB(0x005612c4);
    /* 005612c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005612c6: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x5612cbu); f_0050c094();
    /* 005612cb: mov ebx, eax */ r_ebx = r_eax;
    /* 005612cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005612d0: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x5612d5u); f_0050c08c();
    /* 005612d5: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 005612d9: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 005612e0: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 005612e3: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 005612e6: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 005612ed: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005612f3: mov word ptr [ebp + 0x2c], dx */ W16((u32)(r_ebp+0x2cu), (u16)r_edx);
    /* 005612f7: mov dword ptr [ebp + 0x44], 0x40400000 */ W32((u32)(r_ebp+0x44u), 0x40400000u);
    /* 005612fe: mov dword ptr [ebp + 0x48], 0x3f800000 */ W32((u32)(r_ebp+0x48u), 0x3f800000u);
L_00561305:; BB(0x00561305);
    /* 00561305: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056130a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0056130d: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561311: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x561316u); f_0050b510();
    /* 00561316: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056131b: je 0x56132b */ if (fZ) goto L_0056132b;
L_0056131d:; BB(0x0056131d);
    /* 0056131d: mov dword ptr [eax + 0x44], 0x40400000 */ W32((u32)(r_eax+0x44u), 0x40400000u);
    /* 00561324: mov dword ptr [eax + 0x48], 0x3fc00000 */ W32((u32)(r_eax+0x48u), 0x3fc00000u);
L_0056132b:; BB(0x0056132b);
    /* 0056132b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056132d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00561330: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00561331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561332: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00561333: ret  */ FN_RET(0x00561214); r_esp += 4; return;
L_00561334:; BB(0x00561334);
    /* 00561334: push 0x20e */ { u32 v = 0x20eu; r_esp -= 4; W32(r_esp, v); }
    /* 00561339: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0056133c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056133d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x561342u); f_0050b510();
    /* 00561342: mov eax, 1 */ r_eax = 0x1u;
    /* 00561347: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056134a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056134b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056134c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056134d: ret  */ FN_RET(0x00561214); r_esp += 4; return;
L_0056134e:; BB(0x0056134e);
    /* 0056134e: mov eax, 2 */ r_eax = 0x2u;
    /* 00561353: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00561356: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00561357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561358: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00561359: ret  */ FN_RET(0x00561214); r_esp += 4; return;
}

void f_0056135c(void) /* sub_56135C */
{
    FN_ENTER(0x0056135c);
    /* 0056135c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056135d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056135e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056135f: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00561362: mov esi, ecx */ r_esi = r_ecx;
    /* 00561364: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0056136b: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561370: jl 0x5613a1 */ if ((fS!=fO)) goto L_005613a1;
L_00561372:; BB(0x00561372);
    /* 00561372: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561377: jge 0x56138a */ if ((fS==fO)) goto L_0056138a;
L_00561379:; BB(0x00561379);
    /* 00561379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056137a: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x56137fu); f_00786b3c();
    /* 0056137f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00561380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561381: mov ecx, esi */ r_ecx = r_esi;
    /* 00561383: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x561388u); f_007706b0();
    /* 00561388: jmp 0x5613cd */ goto L_005613cd;
L_0056138a:; BB(0x0056138a);
    /* 0056138a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0056138f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561391: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 00561398: mov ecx, esi */ r_ecx = r_esi;
    /* 0056139a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x56139fu); f_007706b0();
    /* 0056139f: jmp 0x5613cd */ goto L_005613cd;
L_005613a1:; BB(0x005613a1);
    /* 005613a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005613a2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5613a7u); f_0068d5a8();
    /* 005613a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005613a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005613aa: je 0x5613c4 */ if (fZ) goto L_005613c4;
L_005613ac:; BB(0x005613ac);
    /* 005613ac: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 005613b2: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005613b8: jne 0x5613c4 */ if (!fZ) goto L_005613c4;
L_005613ba:; BB(0x005613ba);
    /* 005613ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005613bb: mov ecx, esi */ r_ecx = r_esi;
    /* 005613bd: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5613c2u); f_007706b0();
    /* 005613c2: jmp 0x5613cd */ goto L_005613cd;
L_005613c4:; BB(0x005613c4);
    /* 005613c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005613c6: mov ecx, esi */ r_ecx = r_esi;
    /* 005613c8: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5613cdu); f_007706b0();
L_005613cd:; BB(0x005613cd);
    /* 005613cd: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 005613d3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005613d6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005613d9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005613dc: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 005613df: and ebx, 0xf9fbffff */ {  u32 a = r_ebx; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005613e5: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 005613e8: mov ecx, esi */ r_ecx = r_esi;
    /* 005613ea: call 0x560410 */ r_esp -= 4; W32(r_esp, 0x5613efu); f_00560410();
    /* 005613ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005613f1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5613f6u); f_007aa094();
    /* 005613f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005613f8: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005613fe: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x561403u); f_007a8cb8();
    /* 00561403: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561406: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 0056140c: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00561413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00561415: je 0x5614c3 */ if (fZ) goto L_005614c3;
L_0056141b:; BB(0x0056141b);
    /* 0056141b: jle 0x5614be */ if ((fZ||fS!=fO)) goto L_005614be;
L_00561421:; BB(0x00561421);
    /* 00561421: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561424: jg 0x561740 */ if ((!fZ&&fS==fO)) goto L_00561740;
L_0056142a:; BB(0x0056142a);
    /* 0056142a: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0056142d: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561432: jne 0x56143f */ if (!fZ) goto L_0056143f;
L_00561434:; BB(0x00561434);
    /* 00561434: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561438: mov ecx, esi */ r_ecx = r_esi;
    /* 0056143a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56143fu); f_00772b44();
L_0056143f:; BB(0x0056143f);
    /* 0056143f: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561444: mov ecx, esi */ r_ecx = r_esi;
    /* 00561446: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56144bu); f_007aaa30();
    /* 0056144b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056144d: je 0x561467 */ if (fZ) goto L_00561467;
L_0056144f:; BB(0x0056144f);
    /* 0056144f: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00561455: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00561457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561459: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056145a: push 0x23a */ { u32 v = 0x23au; r_esp -= 4; W32(r_esp, v); }
    /* 0056145f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x561464u); f_00814298();
    /* 00561464: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00561467:; BB(0x00561467);
    /* 00561467: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056146c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056146e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561473u); f_007aaa30();
    /* 00561473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561475: je 0x56148a */ if (fZ) goto L_0056148a;
L_00561477:; BB(0x00561477);
    /* 00561477: mov edx, 2 */ r_edx = 0x2u;
    /* 0056147c: mov eax, 2 */ r_eax = 0x2u;
    /* 00561481: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00561488: jmp 0x561491 */ goto L_00561491;
L_0056148a:; BB(0x0056148a);
    /* 0056148a: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
L_00561491:; BB(0x00561491);
    /* 00561491: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561494: je 0x561534 */ if (fZ) goto L_00561534;
L_0056149a:; BB(0x0056149a);
    /* 0056149a: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
L_0056149d:; BB(0x0056149d);
    /* 0056149d: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 005614a3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005614a6: je 0x561501 */ if (fZ) goto L_00561501;
L_005614a8:; BB(0x005614a8);
    /* 005614a8: add word ptr [esi + 0x386], 1 */ { u32 ad = (u32)(r_esi+0x386u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005614b0: mov eax, 3 */ r_eax = 0x3u;
    /* 005614b5: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005614bc: jmp 0x561501 */ goto L_00561501;
L_005614be:; BB(0x005614be);
    /* 005614be: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005614c1: jmp 0x561501 */ goto L_00561501;
L_005614c3:; BB(0x005614c3);
    /* 005614c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005614c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005614c7: mov eax, 1 */ r_eax = 0x1u;
    /* 005614cc: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005614d3: mov ecx, esi */ r_ecx = r_esi;
    /* 005614d5: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5614dau); f_00772b44();
    /* 005614da: mov ebp, dword ptr [esi + 0x37c] */ r_ebp = R32((u32)(r_esi+0x37cu));
    /* 005614e0: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 005614e6: mov dword ptr [esi + 0x37c], ebp */ W32((u32)(r_esi+0x37cu), r_ebp);
    /* 005614ec: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005614ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005614f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005614f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005614f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005614f4: push 0x23b */ { u32 v = 0x23bu; r_esp -= 4; W32(r_esp, v); }
    /* 005614f9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5614feu); f_00814298();
    /* 005614fe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00561501:; BB(0x00561501);
    /* 00561501: mov ecx, esi */ r_ecx = r_esi;
    /* 00561503: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x561508u); f_007b6894();
    /* 00561508: mov ecx, esi */ r_ecx = r_esi;
    /* 0056150a: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x56150fu); f_007b798c();
    /* 0056150f: mov ecx, esi */ r_ecx = r_esi;
    /* 00561511: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x561516u); f_007b7e9c();
    /* 00561516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561518: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056151a: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056151f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561520: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x561525u); f_00805608();
    /* 00561525: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00561527: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561528: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x56152du); f_006946a8();
    /* 0056152d: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00561530: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00561531: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561532: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00561533: ret  */ FN_RET(0x0056135c); r_esp += 4; return;
L_00561534:; BB(0x00561534);
    /* 00561534: mov ebp, dword ptr [0xa73cec] */ r_ebp = R32((u32)(0xa73cecu));
    /* 0056153a: mov ebx, dword ptr [0xa9c4ec] */ r_ebx = R32((u32)(0xa9c4ecu));
    /* 00561540: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00561543: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00561546: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0056154a: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0056154e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00561553: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00561555: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00561559: mov eax, ebx */ r_eax = r_ebx;
    /* 0056155b: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0056155d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00561560: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00561562: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00561565: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561567: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561569: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0056156b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056156d: je 0x561577 */ if (fZ) goto L_00561577;
L_0056156f:; BB(0x0056156f);
    /* 0056156f: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561572: jmp 0x56149d */ goto L_0056149d;
L_00561577:; BB(0x00561577);
    /* 00561577: mov ebx, dword ptr [esi + 0x3bc] */ r_ebx = R32((u32)(r_esi+0x3bcu));
    /* 0056157d: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00561580: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x561585u); f_0082fa9c();
    /* 00561585: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0056158a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56158fu); f_0082d990();
    /* 0056158f: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561592: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00561594: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x561599u); f_0082d838();
    /* 00561599: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0056159c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056159e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5615a3u); f_0082d8bc();
    /* 005615a3: lea edx, [esi + 0x68] */ r_edx = (u32)(r_esi+0x68u);
    /* 005615a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005615a8: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x5615adu); f_0083c0a0();
    /* 005615ad: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5615b2u); f_0082fa9c();
    /* 005615b2: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005615b8: mov ecx, esi */ r_ecx = r_esi;
    /* 005615ba: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x5615bfu); f_007aaab8();
    /* 005615bf: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5615c4u); f_0082faac();
    /* 005615c4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5615c9u); f_0082da80();
    /* 005615c9: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 005615cf: add ecx, 0x7c0 */ {  u32 a = r_ecx; u32 b = 0x7c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005615d5: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5615dau); f_0082d990();
    /* 005615da: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005615e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005615e3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005615eb: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005615f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005615f4: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005615f8: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5615fdu); f_00830aa0();
    /* 005615fd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x561602u); f_0082da80();
    /* 00561602: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x561607u); f_0082faac();
    /* 00561607: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x56160cu); f_007b51c4();
    /* 0056160c: mov ecx, dword ptr [esi + 0x3bc] */ r_ecx = R32((u32)(r_esi+0x3bcu));
    /* 00561612: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x561617u); f_007b6894();
    /* 00561617: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 0056161d: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00561623: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 00561626: test ebx, 0x80000 */ {  u32 a = r_ebx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056162c: je 0x56149d */ if (fZ) goto L_0056149d;
L_00561632:; BB(0x00561632);
    /* 00561632: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00561636: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00561638:; BB(0x00561638);
    /* 00561638: mov edi, dword ptr [ebx + 0xaad6e0] */ r_edi = R32((u32)(r_ebx+0xaad6e0u));
    /* 0056163e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00561641: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561643: je 0x56178e */ if (fZ) goto L_0056178e;
L_00561649:; BB(0x00561649);
    /* 00561649: movzx eax, word ptr [edi + 0x96] */ r_eax = (u32)R16((u32)(r_edi+0x96u));
    /* 00561650: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561653: jne 0x56172e */ if (!fZ) goto L_0056172e;
L_00561659:; BB(0x00561659);
    /* 00561659: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056165e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056165f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00561661: mov ecx, edi */ r_ecx = r_edi;
    /* 00561663: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x561666u); call_ind(t); }
    /* 00561666: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561668: je 0x56172e */ if (fZ) goto L_0056172e;
L_0056166e:; BB(0x0056166e);
    /* 0056166e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00561672: fcomp dword ptr [0x925ab0] */ fx_compare(ST(0), R_F32((u32)(0x925ab0u))); FPOP();
    /* 00561678: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056167a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056167b: ja 0x561690 */ if ((!fC&&!fZ)) goto L_00561690;
L_0056167d:; BB(0x0056167d);
    /* 0056167d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561682: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561683: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00561685: mov ecx, edi */ r_ecx = r_edi;
    /* 00561687: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x56168au); call_ind(t); }
    /* 0056168a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0056168e: jmp 0x5616b8 */ goto L_005616b8;
L_00561690:; BB(0x00561690);
    /* 00561690: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00561694: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00561696: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0056169a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056169c: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005616a0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005616a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005616a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005616a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005616a8: mov ecx, edi */ r_ecx = r_edi;
    /* 005616aa: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005616ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005616b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005616b1: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5616b4u); call_ind(t); }
    /* 005616b4: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_005616b8:; BB(0x005616b8);
    /* 005616b8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005616ba: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005616bd: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005616c1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005616c5: mov ecx, edi */ r_ecx = r_edi;
    /* 005616c7: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005616ca: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5616cdu); call_ind(t); }
    /* 005616cd: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005616d1: fcomp dword ptr [0x925ab0] */ fx_compare(ST(0), R_F32((u32)(0x925ab0u))); FPOP();
    /* 005616d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005616d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005616da: jbe 0x56172e */ if ((fC||fZ)) goto L_0056172e;
L_005616dc:; BB(0x005616dc);
    /* 005616dc: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 005616df: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005616e5: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 005616e8: movsx edi, word ptr [esi + 0x390] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x390u));
    /* 005616ef: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 005616f3: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 005616f7: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 005616fb: mov dword ptr [esi + 0x388], 0x10e */ W32((u32)(r_esi+0x388u), 0x10eu);
    /* 00561705: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00561709: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0056170e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00561713: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00561717: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0056171b: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056171f: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00561723: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00561727: mov word ptr [esi + 0x390], ax */ W16((u32)(r_esi+0x390u), (u16)r_eax);
L_0056172e:; BB(0x0056172e);
    /* 0056172e: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561731: jl 0x561638 */ if ((fS!=fO)) goto L_00561638;
L_00561737:; BB(0x00561737);
    /* 00561737: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0056173b: jmp 0x56149d */ goto L_0056149d;
L_00561740:; BB(0x00561740);
    /* 00561740: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561743: jne 0x561786 */ if (!fZ) goto L_00561786;
L_00561745:; BB(0x00561745);
    /* 00561745: mov ecx, esi */ r_ecx = r_esi;
    /* 00561747: call 0x560b7c */ r_esp -= 4; W32(r_esp, 0x56174cu); f_00560b7c();
    /* 0056174c: movsx eax, word ptr [esi + 0x386] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x386u));
    /* 00561753: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561756: jl 0x561773 */ if ((fS!=fO)) goto L_00561773;
L_00561758:; BB(0x00561758);
    /* 00561758: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0056175e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00561760: mov word ptr [esi + 0x386], ax */ W16((u32)(r_esi+0x386u), (u16)r_eax);
    /* 00561767: and edx, 0xfffffef7 */ {  u32 a = r_edx; u32 b = 0xfffffef7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056176d: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
L_00561773:; BB(0x00561773);
    /* 00561773: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00561776: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056177b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056177e: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561781: jmp 0x561501 */ goto L_00561501;
L_00561786:; BB(0x00561786);
    /* 00561786: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561789: jmp 0x561501 */ goto L_00561501;
L_0056178e:; BB(0x0056178e);
    /* 0056178e: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00561792: jmp 0x56149d */ goto L_0056149d;
}

void f_00561798(void) /* sub_561798 */
{
    FN_ENTER(0x00561798);
    /* 00561798: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00561799: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056179a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056179b: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056179e: mov esi, ecx */ r_esi = r_ecx;
    /* 005617a0: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 005617a6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005617a9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005617ac: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005617af: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005617b2: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005617b7: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005617ba: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 005617c1: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005617c6: jl 0x5617f7 */ if ((fS!=fO)) goto L_005617f7;
L_005617c8:; BB(0x005617c8);
    /* 005617c8: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005617cd: jge 0x5617e0 */ if ((fS==fO)) goto L_005617e0;
L_005617cf:; BB(0x005617cf);
    /* 005617cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005617d0: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5617d5u); f_00786b3c();
    /* 005617d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005617d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005617d7: mov ecx, esi */ r_ecx = r_esi;
    /* 005617d9: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5617deu); f_007706b0();
    /* 005617de: jmp 0x561823 */ goto L_00561823;
L_005617e0:; BB(0x005617e0);
    /* 005617e0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005617e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005617e7: mov word ptr [esi + 0x340], ax */ W16((u32)(r_esi+0x340u), (u16)r_eax);
    /* 005617ee: mov ecx, esi */ r_ecx = r_esi;
    /* 005617f0: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5617f5u); f_007706b0();
    /* 005617f5: jmp 0x561823 */ goto L_00561823;
L_005617f7:; BB(0x005617f7);
    /* 005617f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005617f8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5617fdu); f_0068d5a8();
    /* 005617fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005617fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561800: je 0x56181a */ if (fZ) goto L_0056181a;
L_00561802:; BB(0x00561802);
    /* 00561802: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00561808: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056180e: jne 0x56181a */ if (!fZ) goto L_0056181a;
L_00561810:; BB(0x00561810);
    /* 00561810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561811: mov ecx, esi */ r_ecx = r_esi;
    /* 00561813: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x561818u); f_007706b0();
    /* 00561818: jmp 0x561823 */ goto L_00561823;
L_0056181a:; BB(0x0056181a);
    /* 0056181a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056181c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056181e: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x561823u); f_007706b0();
L_00561823:; BB(0x00561823);
    /* 00561823: mov ecx, esi */ r_ecx = r_esi;
    /* 00561825: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56182au); f_00770738();
    /* 0056182a: mov edi, eax */ r_edi = r_eax;
    /* 0056182c: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00561833: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00561836: ja 0x56206f */ if ((!fC&&!fZ)) goto L_0056206f;
L_0056183c:; BB(0x0056183c);
    /* 0056183c: mov edx, dword ptr [edx*4 + 0x92590c] */ r_edx = R32((u32)(r_edx*4+0x92590cu));
    /* 00561843: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0056206f:; BB(0x0056206f);
    /* 0056206f: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561798); r_esp += 4; return;
}

void f_00561845(void)
{
    FN_ENTER(0x00561845);
    /* 00561845: movsx edx, word ptr [esi + 0x342] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x342u));
    /* 0056184c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056184f: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00561852: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00561854: jl 0x5620cc */ if ((fS!=fO)) goto L_005620cc;
L_0056185a:; BB(0x0056185a);
    /* 0056185a: mov word ptr [esi + 0x342], dx */ W16((u32)(r_esi+0x342u), (u16)r_edx);
    /* 00561861: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561864: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561845); r_esp += 4; return;
L_005620cc:; BB(0x005620cc);
    /* 005620cc: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005620cf: mov edi, dword ptr [esi + 0x37c] */ r_edi = R32((u32)(r_esi+0x37cu));
    /* 005620d5: mov eax, 1 */ r_eax = 0x1u;
    /* 005620da: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005620e1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005620e3: mov word ptr [esi + 0x330], bp */ W16((u32)(r_esi+0x330u), (u16)r_ebp);
    /* 005620ea: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005620f0: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005620f3: mov word ptr [esi + 0x342], bp */ W16((u32)(r_esi+0x342u), (u16)r_ebp);
    /* 005620fa: and edi, 0xfffffeff */ {  u32 a = r_edi; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00562100: mov dword ptr [esi + 0x37c], edi */ W32((u32)(r_esi+0x37cu), r_edi);
    /* 00562106: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00562109: jmp 0x562072 */ goto L_00562072;
}

void f_00561869(void)
{
    FN_ENTER(0x00561869);
    /* 00561869: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056186e: mov eax, 2 */ r_eax = 0x2u;
    /* 00561873: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0056187a: mov ecx, esi */ r_ecx = r_esi;
    /* 0056187c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561881u); f_007aaa30();
    /* 00561881: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561883: je 0x561896 */ if (fZ) goto L_00561896;
L_00561885:; BB(0x00561885);
    /* 00561885: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00561887: mov ecx, esi */ r_ecx = r_esi;
    /* 00561889: call 0x56212c */ r_esp -= 4; W32(r_esp, 0x56188eu); f_0056212c();
    /* 0056188e: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561891: jmp 0x561a26 */ goto L_00561a26;
L_00561896:; BB(0x00561896);
    /* 00561896: fld dword ptr [0x925a9c] */ FPUSH(R_F32((u32)(0x925a9cu)));
    /* 0056189c: mov ebp, dword ptr [0xa9c4ec] */ r_ebp = R32((u32)(0xa9c4ecu));
    /* 005618a2: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 005618a6: mov edi, ebp */ r_edi = r_ebp;
    /* 005618a8: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005618ab: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005618b0: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005618b2: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005618b4: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005618b6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005618b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005618bb: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005618bd: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005618bf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005618c1: je 0x5618cb */ if (fZ) goto L_005618cb;
L_005618c3:; BB(0x005618c3);
    /* 005618c3: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005618c6: jmp 0x561a26 */ goto L_00561a26;
L_005618cb:; BB(0x005618cb);
    /* 005618cb: mov edi, dword ptr [esi + 0x3bc] */ r_edi = R32((u32)(r_esi+0x3bcu));
    /* 005618d1: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005618d4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5618d9u); f_0082fa9c();
    /* 005618d9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005618de: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5618e3u); f_0082d990();
    /* 005618e3: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005618e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005618e8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5618edu); f_0082d838();
    /* 005618ed: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005618f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005618f2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5618f7u); f_0082d8bc();
    /* 005618f7: lea edx, [esi + 0x68] */ r_edx = (u32)(r_esi+0x68u);
    /* 005618fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005618fc: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x561901u); f_0083c0a0();
    /* 00561901: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x561906u); f_0082fa9c();
    /* 00561906: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056190c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056190e: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x561913u); f_007aaab8();
    /* 00561913: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x561918u); f_0082faac();
    /* 00561918: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x56191du); f_0082da80();
    /* 0056191d: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 00561923: add ecx, 0x7c0 */ {  u32 a = r_ecx; u32 b = 0x7c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00561929: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x56192eu); f_0082d990();
    /* 0056192e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00561935: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561937: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0056193f: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00561947: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00561948: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0056194c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x561951u); f_00830aa0();
    /* 00561951: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x561956u); f_0082da80();
    /* 00561956: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x56195bu); f_0082faac();
    /* 0056195b: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x561960u); f_007b51c4();
    /* 00561960: mov ecx, dword ptr [esi + 0x3bc] */ r_ecx = R32((u32)(r_esi+0x3bcu));
    /* 00561966: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56196bu); f_007b6894();
    /* 0056196b: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 00561971: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00561977: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 0056197a: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561980: je 0x561a26 */ if (fZ) goto L_00561a26;
L_00561986:; BB(0x00561986);
    /* 00561986: mov dword ptr [esp + 0x64], ebx */ W32((u32)(r_esp+0x64u), r_ebx);
    /* 0056198a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0056198c:; BB(0x0056198c);
    /* 0056198c: mov ebx, dword ptr [edi + 0xaad6e0] */ r_ebx = R32((u32)(r_edi+0xaad6e0u));
    /* 00561992: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00561995: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561997: je 0x56210e */ if (fZ) goto L_0056210e;
L_0056199d:; BB(0x0056199d);
    /* 0056199d: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 005619a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005619a7: jne 0x561a19 */ if (!fZ) goto L_00561a19;
L_005619a9:; BB(0x005619a9);
    /* 005619a9: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005619ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005619af: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005619b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005619b3: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5619b6u); call_ind(t); }
    /* 005619b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005619b8: je 0x561a19 */ if (fZ) goto L_00561a19;
L_005619ba:; BB(0x005619ba);
    /* 005619ba: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 005619be: fcomp dword ptr [0x925a9c] */ fx_compare(ST(0), R_F32((u32)(0x925a9cu))); FPOP();
    /* 005619c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005619c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005619c7: ja 0x5619dc */ if ((!fC&&!fZ)) goto L_005619dc;
L_005619c9:; BB(0x005619c9);
    /* 005619c9: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005619ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005619cf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005619d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005619d3: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x5619d6u); call_ind(t); }
    /* 005619d6: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 005619da: jmp 0x561a04 */ goto L_00561a04;
L_005619dc:; BB(0x005619dc);
    /* 005619dc: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 005619e0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005619e2: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005619e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005619e8: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005619ec: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005619f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005619f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005619f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005619f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005619f6: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005619fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005619fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005619fd: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x561a00u); call_ind(t); }
    /* 00561a00: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
L_00561a04:; BB(0x00561a04);
    /* 00561a04: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561a06: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561a09: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00561a0d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00561a11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561a13: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00561a16: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x561a19u); call_ind(t); }
L_00561a19:; BB(0x00561a19);
    /* 00561a19: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561a1c: jl 0x56198c */ if ((fS!=fO)) goto L_0056198c;
L_00561a22:; BB(0x00561a22);
    /* 00561a22: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
L_00561a26:; BB(0x00561a26);
    /* 00561a26: fld dword ptr [0x925a94] */ FPUSH(R_F32((u32)(0x925a94u)));
    /* 00561a2c: fadd dword ptr [esi + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc4u));
    /* 00561a32: fsub dword ptr [esi + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xc8u));
    /* 00561a38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00561a39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00561a3c: mov ecx, esi */ r_ecx = r_esi;
    /* 00561a3e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561a43u); f_007aaa30();
    /* 00561a43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561a45: je 0x562072 */ if (fZ) goto L_00562072;
L_00561a4b:; BB(0x00561a4b);
    /* 00561a4b: mov eax, dword ptr [0xa73ce4] */ r_eax = R32((u32)(0xa73ce4u));
    /* 00561a50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00561a52: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00561a59: mov edi, 7 */ r_edi = 0x7u;
    /* 00561a5e: mov word ptr [esi + 0x330], di */ W16((u32)(r_esi+0x330u), (u16)r_edi);
    /* 00561a65: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00561a68: fnstcw word ptr [esp + 0x48] */ W16((u32)(r_esp+0x48u), fcw);
    /* 00561a6c: movzx eax, word ptr [esp + 0x48] */ r_eax = (u32)R16((u32)(r_esp+0x48u));
    /* 00561a71: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00561a76: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00561a7a: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 00561a7e: fistp dword ptr [esp + 0x58] */ W32((u32)(r_esp+0x58u), (u32)fx_int32(ST(0))); FPOP();
    /* 00561a82: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00561a86: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00561a8a: mov word ptr [esi + 0x342], ax */ W16((u32)(r_esi+0x342u), (u16)r_eax);
    /* 00561a91: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561869); r_esp += 4; return;
L_0056210e:; BB(0x0056210e);
    /* 0056210e: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 00562112: jmp 0x561a26 */ goto L_00561a26;
}

void f_00561a96(void)
{
    FN_ENTER(0x00561a96);
    /* 00561a96: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00561a98: mov eax, 2 */ r_eax = 0x2u;
    /* 00561a9d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00561aa4: mov ecx, esi */ r_ecx = r_esi;
    /* 00561aa6: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x561aa9u); call_ind(t); }
    /* 00561aa9: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561aae: mov ecx, esi */ r_ecx = r_esi;
    /* 00561ab0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561ab5u); f_007aaa30();
    /* 00561ab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561ab7: jne 0x561ac1 */ if (!fZ) goto L_00561ac1;
L_00561ab9:; BB(0x00561ab9);
    /* 00561ab9: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561abc: jmp 0x562072 */ goto L_00562072;
L_00561ac1:; BB(0x00561ac1);
    /* 00561ac1: mov ebp, 6 */ r_ebp = 0x6u;
    /* 00561ac6: mov word ptr [esi + 0x330], bp */ W16((u32)(r_esi+0x330u), (u16)r_ebp);
    /* 00561acd: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561ad0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00561ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561ad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561ad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561ad5: push 0x241 */ { u32 v = 0x241u; r_esp -= 4; W32(r_esp, v); }
    /* 00561ada: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x561adfu); f_00814298();
    /* 00561adf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561ae2: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561a96); r_esp += 4; return;
}

void f_00561ae7(void)
{
    FN_ENTER(0x00561ae7);
    /* 00561ae7: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561aec: mov eax, 2 */ r_eax = 0x2u;
    /* 00561af1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00561af8: mov ecx, esi */ r_ecx = r_esi;
    /* 00561afa: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561affu); f_007aaa30();
    /* 00561aff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561b01: je 0x561b14 */ if (fZ) goto L_00561b14;
L_00561b03:; BB(0x00561b03);
    /* 00561b03: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00561b05: mov ecx, esi */ r_ecx = r_esi;
    /* 00561b07: call 0x56212c */ r_esp -= 4; W32(r_esp, 0x561b0cu); f_0056212c();
    /* 00561b0c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561b0f: jmp 0x561ca5 */ goto L_00561ca5;
L_00561b14:; BB(0x00561b14);
    /* 00561b14: fld dword ptr [0x925a9c] */ FPUSH(R_F32((u32)(0x925a9cu)));
    /* 00561b1a: mov ebp, dword ptr [0xa9c4ec] */ r_ebp = R32((u32)(0xa9c4ecu));
    /* 00561b20: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00561b24: mov edi, ebp */ r_edi = r_ebp;
    /* 00561b26: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00561b29: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00561b2e: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00561b30: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00561b32: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00561b34: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00561b37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561b39: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561b3b: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00561b3d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561b3f: je 0x561b49 */ if (fZ) goto L_00561b49;
L_00561b41:; BB(0x00561b41);
    /* 00561b41: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561b44: jmp 0x561ca5 */ goto L_00561ca5;
L_00561b49:; BB(0x00561b49);
    /* 00561b49: mov edi, dword ptr [esi + 0x3bc] */ r_edi = R32((u32)(r_esi+0x3bcu));
    /* 00561b4f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00561b52: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x561b57u); f_0082fa9c();
    /* 00561b57: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00561b5c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x561b61u); f_0082d990();
    /* 00561b61: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561b64: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00561b66: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x561b6bu); f_0082d838();
    /* 00561b6b: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00561b6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561b70: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x561b75u); f_0082d8bc();
    /* 00561b75: lea edx, [esi + 0x68] */ r_edx = (u32)(r_esi+0x68u);
    /* 00561b78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561b7a: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x561b7fu); f_0083c0a0();
    /* 00561b7f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x561b84u); f_0082fa9c();
    /* 00561b84: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00561b8a: mov ecx, esi */ r_ecx = r_esi;
    /* 00561b8c: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x561b91u); f_007aaab8();
    /* 00561b91: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x561b96u); f_0082faac();
    /* 00561b96: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x561b9bu); f_0082da80();
    /* 00561b9b: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 00561ba1: add ecx, 0xd40 */ {  u32 a = r_ecx; u32 b = 0xd40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00561ba7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x561bacu); f_0082d990();
    /* 00561bac: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00561bb4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561bb6: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00561bbe: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00561bc6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00561bc7: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00561bcb: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x561bd0u); f_00830aa0();
    /* 00561bd0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x561bd5u); f_0082da80();
    /* 00561bd5: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x561bdau); f_0082faac();
    /* 00561bda: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x561bdfu); f_007b51c4();
    /* 00561bdf: mov ecx, dword ptr [esi + 0x3bc] */ r_ecx = R32((u32)(r_esi+0x3bcu));
    /* 00561be5: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x561beau); f_007b6894();
    /* 00561bea: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 00561bf0: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00561bf6: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00561bf9: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561bff: je 0x561ca5 */ if (fZ) goto L_00561ca5;
L_00561c05:; BB(0x00561c05);
    /* 00561c05: mov dword ptr [esp + 0x64], ebx */ W32((u32)(r_esp+0x64u), r_ebx);
    /* 00561c09: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00561c0b:; BB(0x00561c0b);
    /* 00561c0b: mov ebx, dword ptr [edi + 0xaad6e0] */ r_ebx = R32((u32)(r_edi+0xaad6e0u));
    /* 00561c11: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00561c14: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561c16: je 0x562117 */ if (fZ) goto L_00562117;
L_00561c1c:; BB(0x00561c1c);
    /* 00561c1c: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 00561c23: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561c26: jne 0x561c98 */ if (!fZ) goto L_00561c98;
L_00561c28:; BB(0x00561c28);
    /* 00561c28: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561c2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561c2e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561c30: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561c32: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x561c35u); call_ind(t); }
    /* 00561c35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561c37: je 0x561c98 */ if (fZ) goto L_00561c98;
L_00561c39:; BB(0x00561c39);
    /* 00561c39: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00561c3d: fcomp dword ptr [0x925a9c] */ fx_compare(ST(0), R_F32((u32)(0x925a9cu))); FPOP();
    /* 00561c43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00561c45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00561c46: ja 0x561c5b */ if ((!fC&&!fZ)) goto L_00561c5b;
L_00561c48:; BB(0x00561c48);
    /* 00561c48: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561c4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561c4e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561c50: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561c52: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x561c55u); call_ind(t); }
    /* 00561c55: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00561c59: jmp 0x561c83 */ goto L_00561c83;
L_00561c5b:; BB(0x00561c5b);
    /* 00561c5b: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00561c5f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561c61: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00561c65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561c67: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00561c6b: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00561c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561c71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561c72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561c73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561c75: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00561c79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561c7b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561c7c: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x561c7fu); call_ind(t); }
    /* 00561c7f: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
L_00561c83:; BB(0x00561c83);
    /* 00561c83: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561c85: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561c88: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00561c8c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00561c90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561c92: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00561c95: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x561c98u); call_ind(t); }
L_00561c98:; BB(0x00561c98);
    /* 00561c98: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561c9b: jl 0x561c0b */ if ((fS!=fO)) goto L_00561c0b;
L_00561ca1:; BB(0x00561ca1);
    /* 00561ca1: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
L_00561ca5:; BB(0x00561ca5);
    /* 00561ca5: push 0x41f80000 */ { u32 v = 0x41f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561caa: mov ecx, esi */ r_ecx = r_esi;
    /* 00561cac: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561cb1u); f_007aaa30();
    /* 00561cb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561cb3: je 0x562072 */ if (fZ) goto L_00562072;
L_00561cb9:; BB(0x00561cb9);
    /* 00561cb9: mov eax, 5 */ r_eax = 0x5u;
    /* 00561cbe: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00561cc5: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561ae7); r_esp += 4; return;
L_00562117:; BB(0x00562117);
    /* 00562117: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 0056211b: jmp 0x561ca5 */ goto L_00561ca5;
}

void f_00561cca(void)
{
    FN_ENTER(0x00561cca);
    /* 00561cca: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00561ccc: mov eax, 2 */ r_eax = 0x2u;
    /* 00561cd1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00561cd8: mov ecx, esi */ r_ecx = r_esi;
    /* 00561cda: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x561cddu); call_ind(t); }
    /* 00561cdd: push 0x41980000 */ { u32 v = 0x41980000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561ce2: mov ecx, esi */ r_ecx = r_esi;
    /* 00561ce4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561ce9u); f_007aaa30();
    /* 00561ce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561ceb: jne 0x561cf5 */ if (!fZ) goto L_00561cf5;
L_00561ced:; BB(0x00561ced);
    /* 00561ced: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561cf0: jmp 0x562072 */ goto L_00562072;
L_00561cf5:; BB(0x00561cf5);
    /* 00561cf5: mov ebp, 4 */ r_ebp = 0x4u;
    /* 00561cfa: mov word ptr [esi + 0x330], bp */ W16((u32)(r_esi+0x330u), (u16)r_ebp);
    /* 00561d01: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561d04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00561d06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561d07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561d09: push 0x241 */ { u32 v = 0x241u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d0e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x561d13u); f_00814298();
    /* 00561d13: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561d16: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561cca); r_esp += 4; return;
}

void f_00561d1b(void)
{
    FN_ENTER(0x00561d1b);
    /* 00561d1b: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d20: mov eax, 2 */ r_eax = 0x2u;
    /* 00561d25: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00561d2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00561d2e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561d33u); f_007aaa30();
    /* 00561d33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561d35: je 0x561d48 */ if (fZ) goto L_00561d48;
L_00561d37:; BB(0x00561d37);
    /* 00561d37: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00561d39: mov ecx, esi */ r_ecx = r_esi;
    /* 00561d3b: call 0x56212c */ r_esp -= 4; W32(r_esp, 0x561d40u); f_0056212c();
    /* 00561d40: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561d43: jmp 0x561ed9 */ goto L_00561ed9;
L_00561d48:; BB(0x00561d48);
    /* 00561d48: fld dword ptr [0x925a9c] */ FPUSH(R_F32((u32)(0x925a9cu)));
    /* 00561d4e: mov ebp, dword ptr [0xa9c4ec] */ r_ebp = R32((u32)(0xa9c4ecu));
    /* 00561d54: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00561d58: mov edi, ebp */ r_edi = r_ebp;
    /* 00561d5a: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00561d5d: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00561d62: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00561d64: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00561d66: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00561d68: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00561d6b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561d6d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561d6f: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00561d71: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561d73: je 0x561d7d */ if (fZ) goto L_00561d7d;
L_00561d75:; BB(0x00561d75);
    /* 00561d75: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561d78: jmp 0x561ed9 */ goto L_00561ed9;
L_00561d7d:; BB(0x00561d7d);
    /* 00561d7d: mov edi, dword ptr [esi + 0x3bc] */ r_edi = R32((u32)(r_esi+0x3bcu));
    /* 00561d83: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00561d86: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x561d8bu); f_0082fa9c();
    /* 00561d8b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00561d90: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x561d95u); f_0082d990();
    /* 00561d95: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561d98: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00561d9a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x561d9fu); f_0082d838();
    /* 00561d9f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00561da2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561da4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x561da9u); f_0082d8bc();
    /* 00561da9: lea edx, [esi + 0x68] */ r_edx = (u32)(r_esi+0x68u);
    /* 00561dac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561dae: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x561db3u); f_0083c0a0();
    /* 00561db3: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x561db8u); f_0082fa9c();
    /* 00561db8: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00561dbe: mov ecx, esi */ r_ecx = r_esi;
    /* 00561dc0: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x561dc5u); f_007aaab8();
    /* 00561dc5: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x561dcau); f_0082faac();
    /* 00561dca: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x561dcfu); f_0082da80();
    /* 00561dcf: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 00561dd5: add ecx, 0x7c0 */ {  u32 a = r_ecx; u32 b = 0x7c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00561ddb: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x561de0u); f_0082d990();
    /* 00561de0: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00561de8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561dea: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00561df2: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00561dfa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00561dfb: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00561dff: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x561e04u); f_00830aa0();
    /* 00561e04: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x561e09u); f_0082da80();
    /* 00561e09: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x561e0eu); f_0082faac();
    /* 00561e0e: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x561e13u); f_007b51c4();
    /* 00561e13: mov ecx, dword ptr [esi + 0x3bc] */ r_ecx = R32((u32)(r_esi+0x3bcu));
    /* 00561e19: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x561e1eu); f_007b6894();
    /* 00561e1e: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 00561e24: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00561e2a: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00561e2d: test edi, 0x80000 */ {  u32 a = r_edi; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561e33: je 0x561ed9 */ if (fZ) goto L_00561ed9;
L_00561e39:; BB(0x00561e39);
    /* 00561e39: mov dword ptr [esp + 0x64], ebx */ W32((u32)(r_esp+0x64u), r_ebx);
    /* 00561e3d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00561e3f:; BB(0x00561e3f);
    /* 00561e3f: mov ebx, dword ptr [edi + 0xaad6e0] */ r_ebx = R32((u32)(r_edi+0xaad6e0u));
    /* 00561e45: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00561e48: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561e4a: je 0x562120 */ if (fZ) goto L_00562120;
L_00561e50:; BB(0x00561e50);
    /* 00561e50: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 00561e57: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561e5a: jne 0x561ecc */ if (!fZ) goto L_00561ecc;
L_00561e5c:; BB(0x00561e5c);
    /* 00561e5c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561e61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561e62: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561e64: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561e66: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x561e69u); call_ind(t); }
    /* 00561e69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561e6b: je 0x561ecc */ if (fZ) goto L_00561ecc;
L_00561e6d:; BB(0x00561e6d);
    /* 00561e6d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00561e71: fcomp dword ptr [0x925a9c] */ fx_compare(ST(0), R_F32((u32)(0x925a9cu))); FPOP();
    /* 00561e77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00561e79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00561e7a: ja 0x561e8f */ if ((!fC&&!fZ)) goto L_00561e8f;
L_00561e7c:; BB(0x00561e7c);
    /* 00561e7c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561e81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561e82: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561e84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561e86: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x561e89u); call_ind(t); }
    /* 00561e89: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00561e8d: jmp 0x561eb7 */ goto L_00561eb7;
L_00561e8f:; BB(0x00561e8f);
    /* 00561e8f: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00561e93: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561e95: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00561e99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561e9b: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00561e9f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00561ea4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561ea5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561ea6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561ea7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561ea9: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00561ead: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561eaf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00561eb0: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x561eb3u); call_ind(t); }
    /* 00561eb3: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
L_00561eb7:; BB(0x00561eb7);
    /* 00561eb7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00561eb9: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561ebc: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00561ec0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00561ec4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00561ec6: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00561ec9: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x561eccu); call_ind(t); }
L_00561ecc:; BB(0x00561ecc);
    /* 00561ecc: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561ecf: jl 0x561e3f */ if ((fS!=fO)) goto L_00561e3f;
L_00561ed5:; BB(0x00561ed5);
    /* 00561ed5: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
L_00561ed9:; BB(0x00561ed9);
    /* 00561ed9: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561ede: mov ecx, esi */ r_ecx = r_esi;
    /* 00561ee0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561ee5u); f_007aaa30();
    /* 00561ee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561ee7: je 0x562072 */ if (fZ) goto L_00562072;
L_00561eed:; BB(0x00561eed);
    /* 00561eed: mov eax, 3 */ r_eax = 0x3u;
    /* 00561ef2: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00561ef9: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561d1b); r_esp += 4; return;
L_00562120:; BB(0x00562120);
    /* 00562120: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 00562124: jmp 0x561ed9 */ goto L_00561ed9;
}

void f_00561efe(void)
{
    FN_ENTER(0x00561efe);
    /* 00561efe: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00561f03: mov eax, 2 */ r_eax = 0x2u;
    /* 00561f08: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00561f0f: mov ecx, esi */ r_ecx = r_esi;
    /* 00561f11: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x561f16u); f_007aaa30();
    /* 00561f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561f18: jne 0x561f22 */ if (!fZ) goto L_00561f22;
L_00561f1a:; BB(0x00561f1a);
    /* 00561f1a: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561f1d: jmp 0x562072 */ goto L_00562072;
L_00561f22:; BB(0x00561f22);
    /* 00561f22: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00561f27: mov word ptr [esi + 0x330], bp */ W16((u32)(r_esi+0x330u), (u16)r_ebp);
    /* 00561f2e: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561f31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00561f33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561f35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561f36: push 0x241 */ { u32 v = 0x241u; r_esp -= 4; W32(r_esp, v); }
    /* 00561f3b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x561f40u); f_00814298();
    /* 00561f40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561f43: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561efe); r_esp += 4; return;
}

void f_00561f48(void)
{
    FN_ENTER(0x00561f48);
    /* 00561f48: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561f4a: jne 0x561f6f */ if (!fZ) goto L_00561f6f;
L_00561f4c:; BB(0x00561f4c);
    /* 00561f4c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00561f4f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00561f51: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 00561f58: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00561f5d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00561f60: mov word ptr [esi + 0x342], dx */ W16((u32)(r_esi+0x342u), (u16)r_edx);
    /* 00561f67: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561f6a: jmp 0x562072 */ goto L_00562072;
L_00561f6f:; BB(0x00561f6f);
    /* 00561f6f: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 00561f73: mov ebp, dword ptr [edi + 0x300] */ r_ebp = R32((u32)(r_edi+0x300u));
    /* 00561f79: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00561f7f: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00561f83: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00561f87: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00561f8d: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00561f91: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00561f97: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x561f9cu); f_0082f9c4();
    /* 00561f9c: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00561fa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561fa1: mov ebp, dword ptr [esi + 0x358] */ r_ebp = R32((u32)(r_esi+0x358u));
    /* 00561fa7: mov ecx, esi */ r_ecx = r_esi;
    /* 00561fa9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00561fac: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x561fb1u); f_00771858();
    /* 00561fb1: mov ebp, eax */ r_ebp = r_eax;
    /* 00561fb3: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00561fb6: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561fbc: jne 0x561fc9 */ if (!fZ) goto L_00561fc9;
L_00561fbe:; BB(0x00561fbe);
    /* 00561fbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561fc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561fc2: mov ecx, esi */ r_ecx = r_esi;
    /* 00561fc4: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x561fc9u); f_00772b44();
L_00561fc9:; BB(0x00561fc9);
    /* 00561fc9: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561fcc: jl 0x561fd6 */ if ((fS!=fO)) goto L_00561fd6;
L_00561fce:; BB(0x00561fce);
    /* 00561fce: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00561fd1: jmp 0x562072 */ goto L_00562072;
L_00561fd6:; BB(0x00561fd6);
    /* 00561fd6: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 00561fdc: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00561fe2: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 00561fe8: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00561fed: mov word ptr [esi + 0x330], bp */ W16((u32)(r_esi+0x330u), (u16)r_ebp);
    /* 00561ff4: mov edx, 2 */ r_edx = 0x2u;
    /* 00561ff9: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00562000: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00562006: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00562007: mov ecx, esi */ r_ecx = r_esi;
    /* 00562009: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x56200eu); f_00771e14();
    /* 0056200e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00562011: jne 0x562036 */ if (!fZ) goto L_00562036;
L_00562013:; BB(0x00562013);
    /* 00562013: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 0056201d: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00562020: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 0056202a: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 00562034: jmp 0x562072 */ goto L_00562072;
L_00562036:; BB(0x00562036);
    /* 00562036: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056203c: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562042: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00562048: mov ecx, esi */ r_ecx = r_esi;
    /* 0056204a: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562050: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562056: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056205c: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562062: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562065: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x56206au); f_00771f5c();
    /* 0056206a: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0056206d: jmp 0x562072 */ goto L_00562072;
L_00562072:; BB(0x00562072);
    /* 00562072: mov ecx, esi */ r_ecx = r_esi;
    /* 00562074: call 0x562428 */ r_esp -= 4; W32(r_esp, 0x562079u); f_00562428();
    /* 00562079: mov ecx, esi */ r_ecx = r_esi;
    /* 0056207b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x562080u); f_007aa094();
    /* 00562080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00562082: push dword ptr [esi + 0x3c4] */ { u32 v = R32((u32)(r_esi+0x3c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00562088: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x56208du); f_007a8cb8();
    /* 0056208d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00562090: mov dword ptr [esi + 0x3c4], eax */ W32((u32)(r_esi+0x3c4u), r_eax);
    /* 00562096: mov ecx, esi */ r_ecx = r_esi;
    /* 00562098: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56209du); f_007b6894();
    /* 0056209d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056209f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x5620a4u); f_007b798c();
    /* 005620a4: mov ecx, esi */ r_ecx = r_esi;
    /* 005620a6: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5620abu); f_007b7e9c();
    /* 005620ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005620ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005620af: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005620b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005620b5: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5620bau); f_00805608();
    /* 005620ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005620bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005620bd: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5620c2u); f_006946a8();
    /* 005620c2: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005620c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005620c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005620ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005620cb: ret  */ FN_RET(0x00561f48); r_esp += 4; return;
}

