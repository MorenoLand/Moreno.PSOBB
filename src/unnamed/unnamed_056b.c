#include "protos.h"

void f_0056b09c(void) /* sub_56B09C */
{
    FN_ENTER(0x0056b09c);
    /* 0056b09c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b09d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b09e: mov esi, ecx */ r_esi = r_ecx;
    /* 0056b0a0: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0056b0a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b0a8: je 0x56b101 */ if (fZ) goto L_0056b101;
L_0056b0aa:; BB(0x0056b0aa);
    /* 0056b0aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b0ad: je 0x56b0f9 */ if (fZ) goto L_0056b0f9;
L_0056b0af:; BB(0x0056b0af);
    /* 0056b0af: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056b0b2: jne 0x56b163 */ if (!fZ) goto L_0056b163;
L_0056b0b8:; BB(0x0056b0b8);
    /* 0056b0b8: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 0056b0be: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0056b0c1: and edx, 0xfffffffa */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056b0c4: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0056b0ca: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056b0cf: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056b0d2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056b0d5: jne 0x56b163 */ if (!fZ) goto L_0056b163;
L_0056b0db:; BB(0x0056b0db);
    /* 0056b0db: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056b0e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056b0e4: je 0x56b163 */ if (fZ) goto L_0056b163;
L_0056b0e6:; BB(0x0056b0e6);
    /* 0056b0e6: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 0056b0f0: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0056b0f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b0f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b0f8: ret  */ FN_RET(0x0056b09c); r_esp += 4; return;
L_0056b0f9:; BB(0x0056b0f9);
    /* 0056b0f9: lea ebx, [esi + 0x404] */ r_ebx = (u32)(r_esi+0x404u);
    /* 0056b0ff: jmp 0x56b149 */ goto L_0056b149;
L_0056b101:; BB(0x0056b101);
    /* 0056b101: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056b107: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0056b10a: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056b110: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056b113: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0056b119: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0056b11c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0056b11e: mov word ptr [esi + 0xb8], bx */ W16((u32)(r_esi+0xb8u), (u16)r_ebx);
    /* 0056b125: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0056b12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b12c: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x56b131u); f_0057895c();
    /* 0056b131: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056b132: lea ebx, [esi + 0x404] */ r_ebx = (u32)(r_esi+0x404u);
    /* 0056b138: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b13a: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x56b13fu); f_00576c48();
    /* 0056b13f: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
L_0056b149:; BB(0x0056b149);
    /* 0056b149: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b14b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56b150u); f_007aa094();
    /* 0056b150: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0056b152: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b154: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x56b157u); call_ind(t); }
    /* 0056b157: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b15a: je 0x56b166 */ if (fZ) goto L_0056b166;
L_0056b15c:; BB(0x0056b15c);
    /* 0056b15c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b15e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56b163u); f_007b6880();
L_0056b163:; BB(0x0056b163);
    /* 0056b163: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b164: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b165: ret  */ FN_RET(0x0056b09c); r_esp += 4; return;
L_0056b166:; BB(0x0056b166);
    /* 0056b166: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 0056b170: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56b175u); f_00807ac0();
    /* 0056b175: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b178: je 0x56b192 */ if (fZ) goto L_0056b192;
L_0056b17a:; BB(0x0056b17a);
    /* 0056b17a: mov ebx, 0x252 */ r_ebx = 0x252u;
L_0056b17f:; BB(0x0056b17f);
    /* 0056b17f: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0056b182: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056b184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b186: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b187: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b188: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56b18du); f_00814298();
    /* 0056b18d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b190: jmp 0x56b15c */ goto L_0056b15c;
L_0056b192:; BB(0x0056b192);
    /* 0056b192: mov ebx, 0x2a0 */ r_ebx = 0x2a0u;
    /* 0056b197: jmp 0x56b17f */ goto L_0056b17f;
}

void f_0056b19c(void) /* sub_56B19C */
{
    FN_ENTER(0x0056b19c);
    /* 0056b19c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b19d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b1a0: mov edi, ecx */ r_edi = r_ecx;
    /* 0056b1a2: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0056b1a5: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0056b1a8: fld dword ptr [0x9262fc] */ FPUSH(R_F32((u32)(0x9262fcu)));
    /* 0056b1ae: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056b1b1: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0056b1b4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0056b1b8: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0056b1bc: fadd dword ptr [edi + 0x3f4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f4u));
    /* 0056b1c2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0056b1c6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056b1ca: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056b1cd: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1d1: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b1d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1d6: push dword ptr [0xa73dac] */ { u32 v = R32((u32)(0xa73dacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b1dc: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x56b1e1u); f_00578aa0();
    /* 0056b1e1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b1e4: mov ecx, edi */ r_ecx = r_edi;
    /* 0056b1e6: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x56b1ebu); f_00787534();
    /* 0056b1eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1ec: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x56b1f1u); f_008113e4();
    /* 0056b1f1: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0056b1f5: push 0x205 */ { u32 v = 0x205u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b1fb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56b200u); f_0050b510();
    /* 0056b200: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0056b204: push 0x206 */ { u32 v = 0x206u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b209: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b20a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56b20fu); f_0050b510();
    /* 0056b20f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b212: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x56b217u); f_00807ac0();
    /* 0056b217: push 0x229 */ { u32 v = 0x229u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b21c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056b21e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56b223u); f_007879b8();
    /* 0056b223: mov ecx, eax */ r_ecx = r_eax;
    /* 0056b225: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056b228: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056b22a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b22b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b22c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b22d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b22e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56b233u); f_00814298();
    /* 0056b233: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0056b237: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056b23c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0056b240: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056b243: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056b244: ret  */ FN_RET(0x0056b19c); r_esp += 4; return;
}

void f_0056b248(void) /* sub_56B248 */
{
    FN_ENTER(0x0056b248);
    /* 0056b248: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b249: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b24a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056b24b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b24c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b24f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056b251: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0056b257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b259: je 0x56b379 */ if (fZ) goto L_0056b379;
L_0056b25f:; BB(0x0056b25f);
    /* 0056b25f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b262: je 0x56b3bc */ if (fZ) goto L_0056b3bc;
L_0056b268:; BB(0x0056b268);
    /* 0056b268: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b26b: jne 0x56b496 */ if (!fZ) goto L_0056b496;
L_0056b271:; BB(0x0056b271);
    /* 0056b271: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0056b274: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0056b27a: movsx edx, word ptr [ebx + 0x346] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x346u));
    /* 0056b281: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0056b288: and ecx, 0xfffffdff */ {  u32 a = r_ecx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0056b28e: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 0056b291: mov dword ptr [ebx + 0x380], 1 */ W32((u32)(r_ebx+0x380u), 0x1u);
    /* 0056b29b: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0056b29e: mov dword ptr [ebx + 0x390], edi */ W32((u32)(r_ebx+0x390u), r_edi);
    /* 0056b2a4: mov ebp, edx */ r_ebp = r_edx;
    /* 0056b2a6: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0056b2a8: mov esi, edx */ r_esi = r_edx;
    /* 0056b2aa: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0056b2ac: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0056b2af: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056b2b1: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0056b2b4: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b2b6: jle 0x56b303 */ if ((fZ||fS!=fO)) goto L_0056b303;
L_0056b2b8:; BB(0x0056b2b8);
    /* 0056b2b8: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056b2bb: jne 0x56b303 */ if (!fZ) goto L_0056b303;
L_0056b2bd:; BB(0x0056b2bd);
    /* 0056b2bd: movzx eax, word ptr [ebx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebx+0x2d8u));
    /* 0056b2c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b2c5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x56b2cau); f_007b4d18();
    /* 0056b2ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056b2cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b2cd: je 0x56b4d2 */ if (fZ) goto L_0056b4d2;
L_0056b2d3:; BB(0x0056b2d3);
    /* 0056b2d3: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0056b2d6: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b2dc: jne 0x56b49e */ if (!fZ) goto L_0056b49e;
L_0056b2e2:; BB(0x0056b2e2);
    /* 0056b2e2: movzx eax, word ptr [ebx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebx+0x2d8u));
    /* 0056b2e9: mov dword ptr [ebx + 0x37c], 9 */ W32((u32)(r_ebx+0x37cu), 0x9u);
    /* 0056b2f3: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0056b2fa: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0056b301: jmp 0x56b36a */ goto L_0056b36a;
L_0056b303:; BB(0x0056b303);
    /* 0056b303: test ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b309: je 0x56b347 */ if (fZ) goto L_0056b347;
L_0056b30b:; BB(0x0056b30b);
    /* 0056b30b: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b311: je 0x56b31b */ if (fZ) goto L_0056b31b;
L_0056b313:; BB(0x0056b313);
    /* 0056b313: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 0056b319: jmp 0x56b33f */ goto L_0056b33f;
L_0056b31b:; BB(0x0056b31b);
    /* 0056b31b: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056b322: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b325: je 0x56b339 */ if (fZ) goto L_0056b339;
L_0056b327:; BB(0x0056b327);
    /* 0056b327: mov dword ptr [ebx + 0x37c], 0xd */ W32((u32)(r_ebx+0x37cu), 0xdu);
    /* 0056b331: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 0056b337: jmp 0x56b33f */ goto L_0056b33f;
L_0056b339:; BB(0x0056b339);
    /* 0056b339: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
L_0056b33f:; BB(0x0056b33f);
    /* 0056b33f: mov dword ptr [ebx + 0x380], edx */ W32((u32)(r_ebx+0x380u), r_edx);
    /* 0056b345: jmp 0x56b36a */ goto L_0056b36a;
L_0056b347:; BB(0x0056b347);
    /* 0056b347: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b34d: jne 0x56b36a */ if (!fZ) goto L_0056b36a;
L_0056b34f:; BB(0x0056b34f);
    /* 0056b34f: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056b356: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b358: je 0x56b36a */ if (fZ) goto L_0056b36a;
L_0056b35a:; BB(0x0056b35a);
    /* 0056b35a: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
    /* 0056b364: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
L_0056b36a:; BB(0x0056b36a);
    /* 0056b36a: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 0056b371: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056b374: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b375: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b376: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b377: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056b378: ret  */ FN_RET(0x0056b248); r_esp += 4; return;
L_0056b379:; BB(0x0056b379);
    /* 0056b379: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0056b37c: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056b381: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b386: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0056b389: je 0x56b392 */ if (fZ) goto L_0056b392;
L_0056b38b:; BB(0x0056b38b);
    /* 0056b38b: mov eax, 5 */ r_eax = 0x5u;
    /* 0056b390: jmp 0x56b397 */ goto L_0056b397;
L_0056b392:; BB(0x0056b392);
    /* 0056b392: mov eax, 4 */ r_eax = 0x4u;
L_0056b397:; BB(0x0056b397);
    /* 0056b397: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b39c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0056b3a3: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0056b3a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b3aa: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56b3afu); f_0050b510();
    /* 0056b3af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b3b2: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
L_0056b3bc:; BB(0x0056b3bc);
    /* 0056b3bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b3be: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56b3c3u); f_007aa094();
    /* 0056b3c3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0056b3c6: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b3cb: je 0x56b3d8 */ if (fZ) goto L_0056b3d8;
L_0056b3cd:; BB(0x0056b3cd);
    /* 0056b3cd: fld dword ptr [0x9262f4] */ FPUSH(R_F32((u32)(0x9262f4u)));
    /* 0056b3d3: jmp 0x56b465 */ goto L_0056b465;
L_0056b3d8:; BB(0x0056b3d8);
    /* 0056b3d8: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0056b3db: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0056b3e1: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0056b3e7: mov ebp, dword ptr [ebx + 0x308] */ r_ebp = R32((u32)(r_ebx+0x308u));
    /* 0056b3ed: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056b3f0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056b3f3: fadd dword ptr [ebx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30cu));
    /* 0056b3f9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056b3fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b3fe: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0056b402: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0056b406: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056b40a: fadd dword ptr [ebx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x314u));
    /* 0056b410: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0056b414: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b415: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x56b41au); f_00771e14();
    /* 0056b41a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b41c: je 0x56b434 */ if (fZ) goto L_0056b434;
L_0056b41e:; BB(0x0056b41e);
    /* 0056b41e: fld dword ptr [0x9262f4] */ FPUSH(R_F32((u32)(0x9262f4u)));
    /* 0056b424: fld dword ptr [0x9262f4] */ FPUSH(R_F32((u32)(0x9262f4u)));
    /* 0056b42a: fld dword ptr [0x9262f4] */ FPUSH(R_F32((u32)(0x9262f4u)));
    /* 0056b430: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056b432: jmp 0x56b44d */ goto L_0056b44d;
L_0056b434:; BB(0x0056b434);
    /* 0056b434: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0056b436: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b438: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x56b43bu); call_ind(t); }
    /* 0056b43b: fld dword ptr [0x9262f4] */ FPUSH(R_F32((u32)(0x9262f4u)));
    /* 0056b441: fld dword ptr [ebx + 0x30c] */ FPUSH(R_F32((u32)(r_ebx+0x30cu)));
    /* 0056b447: fld dword ptr [ebx + 0x314] */ FPUSH(R_F32((u32)(r_ebx+0x314u)));
L_0056b44d:; BB(0x0056b44d);
    /* 0056b44d: fld dword ptr [0x9262f0] */ FPUSH(R_F32((u32)(0x9262f0u)));
    /* 0056b453: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0056b455: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0056b457: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056b459: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 0056b45f: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
L_0056b465:; BB(0x0056b465);
    /* 0056b465: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b468: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056b46b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b46d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0056b475: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56b47au); f_00772b44();
    /* 0056b47a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b47c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x56b481u); f_007b6880();
    /* 0056b481: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0056b487: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b48a: je 0x56b496 */ if (fZ) goto L_0056b496;
L_0056b48c:; BB(0x0056b48c);
    /* 0056b48c: mov dword ptr [ebx + 0x384], 0xffffffff */ W32((u32)(r_ebx+0x384u), 0xffffffffu);
L_0056b496:; BB(0x0056b496);
    /* 0056b496: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056b499: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b49a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b49b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b49c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056b49d: ret  */ FN_RET(0x0056b248); r_esp += 4; return;
L_0056b49e:; BB(0x0056b49e);
    /* 0056b49e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0056b4a1: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b4a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b4a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b4a6: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x56b4abu); f_0078ea50();
    /* 0056b4ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b4ae: fcomp dword ptr [0x9262f8] */ fx_compare(ST(0), R_F32((u32)(0x9262f8u))); FPOP();
    /* 0056b4b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056b4b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056b4b7: jbe 0x56b2e2 */ if ((fC||fZ)) goto L_0056b2e2;
L_0056b4bd:; BB(0x0056b4bd);
    /* 0056b4bd: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0056b4c0: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0056b4c6: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0056b4cd: jmp 0x56b303 */ goto L_0056b303;
L_0056b4d2:; BB(0x0056b4d2);
    /* 0056b4d2: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0056b4d5: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0056b4db: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0056b4e2: jmp 0x56b303 */ goto L_0056b303;
}

void f_0056b4e8(void) /* sub_56B4E8 */
{
    FN_ENTER(0x0056b4e8);
    /* 0056b4e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b4e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b4ea: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b4ed: mov esi, ecx */ r_esi = r_ecx;
    /* 0056b4ef: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b4f1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x56b4f6u); f_00770738();
    /* 0056b4f6: mov ebx, eax */ r_ebx = r_eax;
    /* 0056b4f8: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0056b4fb: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 0056b501: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056b506: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b508: je 0x56b769 */ if (fZ) goto L_0056b769;
L_0056b50e:; BB(0x0056b50e);
    /* 0056b50e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056b511: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b514: je 0x56b5dd */ if (fZ) goto L_0056b5dd;
L_0056b51a:; BB(0x0056b51a);
    /* 0056b51a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b51d: jne 0x56b763 */ if (!fZ) goto L_0056b763;
L_0056b523:; BB(0x0056b523);
    /* 0056b523: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0056b529: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b52c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b52e: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b533: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b538: push dword ptr [esi + 0x3ec] */ { u32 v = R32((u32)(r_esi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b53e: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x56b543u); f_00772054();
    /* 0056b543: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056b545: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b547: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56b54cu); f_007aa094();
    /* 0056b54c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b54e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b550: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b552: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56b557u); f_00772b44();
    /* 0056b557: fld dword ptr [esi + 0x3e8] */ FPUSH(R_F32((u32)(r_esi+0x3e8u)));
    /* 0056b55d: fadd dword ptr [esi + 0x3ec] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3ecu));
    /* 0056b563: fcom dword ptr [0x9262e8] */ fx_compare(ST(0), R_F32((u32)(0x9262e8u))); 
    /* 0056b569: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056b56b: fstp dword ptr [esi + 0x3e8] */ W_F32((u32)(r_esi+0x3e8u), ST(0)); FPOP();
    /* 0056b571: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056b572: jbe 0x56b5c2 */ if ((fC||fZ)) goto L_0056b5c2;
L_0056b574:; BB(0x0056b574);
    /* 0056b574: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0056b57a: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b57c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b57e: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x56b583u); f_0052ccd8();
    /* 0056b583: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b585: je 0x56b59d */ if (fZ) goto L_0056b59d;
L_0056b587:; BB(0x0056b587);
    /* 0056b587: mov dword ptr [esi + 0x3e4], 0 */ W32((u32)(r_esi+0x3e4u), 0x0u);
    /* 0056b591: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0056b59b: jmp 0x56b5c2 */ goto L_0056b5c2;
L_0056b59d:; BB(0x0056b59d);
    /* 0056b59d: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056b5a3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056b5a5: jne 0x56b5c2 */ if (!fZ) goto L_0056b5c2;
L_0056b5a7:; BB(0x0056b5a7);
    /* 0056b5a7: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056b5ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b5b0: je 0x56b5c2 */ if (fZ) goto L_0056b5c2;
L_0056b5b2:; BB(0x0056b5b2);
    /* 0056b5b2: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 0056b5bc: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_0056b5c2:; BB(0x0056b5c2);
    /* 0056b5c2: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b5c4: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56b5c9u); f_007b6894();
    /* 0056b5c9: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b5cb: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x56b5d0u); f_007b798c();
    /* 0056b5d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b5d2: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x56b5d7u); f_007b7e9c();
    /* 0056b5d7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056b5da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b5db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b5dc: ret  */ FN_RET(0x0056b4e8); r_esp += 4; return;
L_0056b5dd:; BB(0x0056b5dd);
    /* 0056b5dd: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b5df: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56b5e4u); f_007aa094();
    /* 0056b5e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b5e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b5e8: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b5ea: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56b5efu); f_00772b44();
    /* 0056b5ef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b5f1: je 0x56b6fc */ if (fZ) goto L_0056b6fc;
L_0056b5f7:; BB(0x0056b5f7);
    /* 0056b5f7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0056b5fa: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0056b5fd: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0056b600: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0056b603: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0056b606: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0056b60a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056b60e: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0056b611: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x56b616u); f_0082f9c4();
    /* 0056b616: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056b619: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056b61c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056b61e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056b622: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0056b626: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056b628: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0056b62a: fld dword ptr [esi + 0x440] */ FPUSH(R_F32((u32)(r_esi+0x440u)));
    /* 0056b630: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056b632: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0056b634: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056b636: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056b638: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056b63a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056b63b: jb 0x56b6f8 */ if (fC) goto L_0056b6f8;
L_0056b641:; BB(0x0056b641);
    /* 0056b641: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056b643: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0056b645: fmul qword ptr [0x926228] */ ST(0) = ST(0) * R_F64((u32)(0x926228u));
    /* 0056b64b: fdiv qword ptr [0x926220] */ ST(0) = ST(0) / R_F64((u32)(0x926220u));
    /* 0056b651: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0056b655: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0056b65a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056b65f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0056b663: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0056b667: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0056b66b: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0056b66f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0056b673: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0056b675: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b67a: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b67d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b67e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x56b683u); f_007a9018();
    /* 0056b683: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b686: mov ebx, dword ptr [esi + 0x43c] */ r_ebx = R32((u32)(r_esi+0x43cu));
    /* 0056b68c: mov edx, ebx */ r_edx = r_ebx;
    /* 0056b68e: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0056b691: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056b693: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0056b695: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b697: jge 0x56b6fc */ if ((fS==fO)) goto L_0056b6fc;
L_0056b699:; BB(0x0056b699);
    /* 0056b699: mov eax, dword ptr [esi + 0x400] */ r_eax = R32((u32)(r_esi+0x400u));
    /* 0056b69f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b6a2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b6a5: jle 0x56b6b8 */ if ((fZ||fS!=fO)) goto L_0056b6b8;
L_0056b6a7:; BB(0x0056b6a7);
    /* 0056b6a7: mov dword ptr [esi + 0x400], 0 */ W32((u32)(r_esi+0x400u), 0x0u);
    /* 0056b6b1: mov edx, 0xd */ r_edx = 0xdu;
    /* 0056b6b6: jmp 0x56b6cd */ goto L_0056b6cd;
L_0056b6b8:; BB(0x0056b6b8);
    /* 0056b6b8: mov dword ptr [esi + 0x450], 0 */ W32((u32)(r_esi+0x450u), 0x0u);
    /* 0056b6c2: mov dword ptr [esi + 0x400], eax */ W32((u32)(r_esi+0x400u), r_eax);
    /* 0056b6c8: mov edx, 9 */ r_edx = 0x9u;
L_0056b6cd:; BB(0x0056b6cd);
    /* 0056b6cd: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056b6d3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056b6d5: jne 0x56b763 */ if (!fZ) goto L_0056b763;
L_0056b6db:; BB(0x0056b6db);
    /* 0056b6db: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056b6e2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b6e4: je 0x56b763 */ if (fZ) goto L_0056b763;
L_0056b6e6:; BB(0x0056b6e6);
    /* 0056b6e6: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0056b6ec: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0056b6f2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056b6f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b6f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b6f7: ret  */ FN_RET(0x0056b4e8); r_esp += 4; return;
L_0056b6f8:; BB(0x0056b6f8);
    /* 0056b6f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056b6fa: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0056b6fc:; BB(0x0056b6fc);
    /* 0056b6fc: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0056b702: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0056b705: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0056b707: mov edx, ebx */ r_edx = r_ebx;
    /* 0056b709: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0056b70c: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056b70e: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0056b710: add ebx, dword ptr [esi + 0x60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056b713: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b714: push dword ptr [esi + 0x3ec] */ { u32 v = R32((u32)(r_esi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b71a: mov dword ptr [esi + 0x60], ebx */ W32((u32)(r_esi+0x60u), r_ebx);
    /* 0056b71d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b71f: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x56b722u); call_ind(t); }
    /* 0056b722: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0056b724: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b726: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x56b729u); call_ind(t); }
    /* 0056b729: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0056b72f: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0056b732: mov edx, ebx */ r_edx = r_ebx;
    /* 0056b734: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0056b737: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056b739: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0056b73b: add ebx, dword ptr [esi + 0x3e4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3e4u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056b741: cmp ebx, 0x10000 */ {  u32 a = r_ebx; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b747: mov dword ptr [esi + 0x3e4], ebx */ W32((u32)(r_esi+0x3e4u), r_ebx);
    /* 0056b74d: jle 0x56b763 */ if ((fZ||fS!=fO)) goto L_0056b763;
L_0056b74f:; BB(0x0056b74f);
    /* 0056b74f: mov dword ptr [esi + 0x3e8], 0 */ W32((u32)(r_esi+0x3e8u), 0x0u);
    /* 0056b759: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
L_0056b763:; BB(0x0056b763);
    /* 0056b763: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056b766: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b767: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b768: ret  */ FN_RET(0x0056b4e8); r_esp += 4; return;
L_0056b769:; BB(0x0056b769);
    /* 0056b769: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 0056b76f: mov dword ptr [esi + 0x3e4], 0 */ W32((u32)(r_esi+0x3e4u), 0x0u);
    /* 0056b779: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056b77f: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0056b785: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056b78a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056b78d: mov edx, 1 */ r_edx = 0x1u;
    /* 0056b792: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0056b799: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b79b: je 0x56b7c1 */ if (fZ) goto L_0056b7c1;
L_0056b79d:; BB(0x0056b79d);
    /* 0056b79d: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 0056b7a3: mov dword ptr [esi + 0x2a4], edx */ W32((u32)(r_esi+0x2a4u), r_edx);
    /* 0056b7a9: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0056b7af: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0056b7b5: mov edx, dword ptr [ebx + 0x308] */ r_edx = R32((u32)(r_ebx+0x308u));
    /* 0056b7bb: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
L_0056b7c1:; BB(0x0056b7c1);
    /* 0056b7c1: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0056b7cb: jmp 0x56b5dd */ goto L_0056b5dd;
}

void f_0056b7d0(void) /* sub_56B7D0 */
{
    FN_ENTER(0x0056b7d0);
    /* 0056b7d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b7d1: mov esi, ecx */ r_esi = r_ecx;
    /* 0056b7d3: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056b7d9: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056b7de: jne 0x56b886 */ if (!fZ) goto L_0056b886;
L_0056b7e4:; BB(0x0056b7e4);
    /* 0056b7e4: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0056b7ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b7ec: je 0x56b8a7 */ if (fZ) goto L_0056b8a7;
L_0056b7f2:; BB(0x0056b7f2);
    /* 0056b7f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b7f5: je 0x56b83b */ if (fZ) goto L_0056b83b;
L_0056b7f7:; BB(0x0056b7f7);
    /* 0056b7f7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056b7fa: jne 0x56b886 */ if (!fZ) goto L_0056b886;
L_0056b800:; BB(0x0056b800);
    /* 0056b800: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b802: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56b807u); f_007aa094();
    /* 0056b807: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b809: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56b80eu); f_007b6894();
    /* 0056b80e: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b810: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x56b815u); f_007b798c();
    /* 0056b815: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b817: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x56b81cu); f_007b7e9c();
    /* 0056b81c: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 0056b822: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b825: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 0056b82b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056b82d: jg 0x56b886 */ if ((!fZ&&fS==fO)) goto L_0056b886;
L_0056b82f:; BB(0x0056b82f);
    /* 0056b82f: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 0056b839: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b83a: ret  */ FN_RET(0x0056b7d0); r_esp += 4; return;
L_0056b83b:; BB(0x0056b83b);
    /* 0056b83b: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b83d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56b842u); f_007aa094();
    /* 0056b842: push dword ptr [esi + 0x360] */ { u32 v = R32((u32)(r_esi+0x360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b848: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 0056b84b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b84c: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b84e: call 0x56b8d4 */ r_esp -= 4; W32(r_esp, 0x56b853u); f_0056b8d4();
    /* 0056b853: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 0056b859: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b85c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056b85e: jle 0x56b888 */ if ((fZ||fS!=fO)) goto L_0056b888;
L_0056b860:; BB(0x0056b860);
    /* 0056b860: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
L_0056b866:; BB(0x0056b866);
    /* 0056b866: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b868: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x56b86du); f_007b6894();
    /* 0056b86d: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b86f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x56b874u); f_007b798c();
    /* 0056b874: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b876: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x56b87bu); f_007b7e9c();
    /* 0056b87b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b87d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b87f: mov ecx, esi */ r_ecx = r_esi;
    /* 0056b881: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x56b886u); f_00772b44();
L_0056b886:; BB(0x0056b886);
    /* 0056b886: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056b887: ret  */ FN_RET(0x0056b7d0); r_esp += 4; return;
L_0056b888:; BB(0x0056b888);
    /* 0056b888: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 0056b892: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056b894: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0056b89b: mov dword ptr [esi + 0x38c], 0x5a */ W32((u32)(r_esi+0x38cu), 0x5au);
    /* 0056b8a5: jmp 0x56b866 */ goto L_0056b866;
L_0056b8a7:; BB(0x0056b8a7);
    /* 0056b8a7: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0056b8aa: mov dword ptr [esi + 0x38c], 0x96 */ W32((u32)(r_esi+0x38cu), 0x96u);
    /* 0056b8b4: mov eax, 1 */ r_eax = 0x1u;
    /* 0056b8b9: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0056b8c0: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
    /* 0056b8c6: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056b8cc: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 0056b8cf: jmp 0x56b83b */ goto L_0056b83b;
}

void f_0056b8d4(void) /* sub_56B8D4 */
{
    FN_ENTER(0x0056b8d4);
    /* 0056b8d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8d6: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056b8d9: mov edi, ecx */ r_edi = r_ecx;
    /* 0056b8db: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0056b8de: lea eax, [edi + 0x398] */ r_eax = (u32)(r_edi+0x398u);
    /* 0056b8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b8e6: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x56b8ebu); f_0078ea50();
    /* 0056b8eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b8ee: fcomp dword ptr [0x9262dc] */ fx_compare(ST(0), R_F32((u32)(0x9262dcu))); FPOP();
    /* 0056b8f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056b8f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056b8f7: jb 0x56b904 */ if (fC) goto L_0056b904;
L_0056b8f9:; BB(0x0056b8f9);
    /* 0056b8f9: fld dword ptr [edi + 0x3a0] */ FPUSH(R_F32((u32)(r_edi+0x3a0u)));
    /* 0056b8ff: jmp 0x56b98e */ goto L_0056b98e;
L_0056b904:; BB(0x0056b904);
    /* 0056b904: mov ecx, edi */ r_ecx = r_edi;
    /* 0056b906: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56b90bu); f_007751b0();
    /* 0056b90b: fld dword ptr [0x9262d8] */ FPUSH(R_F32((u32)(0x9262d8u)));
    /* 0056b911: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0056b913: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056b915: fmul dword ptr [0x9262d4] */ ST(0) = ST(0) * R_F32((u32)(0x9262d4u));
    /* 0056b91b: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0056b91d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056b91f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0056b922: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0056b926: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056b92b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056b92f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0056b933: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056b937: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0056b93a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0056b93e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56b943u); f_007751b0();
    /* 0056b943: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0056b947: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0056b94b: fadd dword ptr [0x9262d0] */ ST(0) = ST(0) + R_F32((u32)(0x9262d0u));
    /* 0056b951: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0056b955: fmul dword ptr [0x9262cc] */ ST(0) = ST(0) * R_F32((u32)(0x9262ccu));
    /* 0056b95b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b95d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0056b961: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x56b966u); f_0082ddd8();
    /* 0056b966: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0056b96a: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0056b96e: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0056b970: fstp dword ptr [edi + 0x398] */ W_F32((u32)(r_edi+0x398u), ST(0)); FPOP();
    /* 0056b976: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056b978: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x56b97du); f_0082dcbc();
    /* 0056b97d: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0056b981: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0056b985: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 0056b988: fst dword ptr [edi + 0x3a0] */ W_F32((u32)(r_edi+0x3a0u), ST(0));
L_0056b98e:; BB(0x0056b98e);
    /* 0056b98e: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0056b994: mov edx, dword ptr [edi + 0x39c] */ r_edx = R32((u32)(r_edi+0x39cu));
    /* 0056b99a: mov ebx, dword ptr [edi + 0x358] */ r_ebx = R32((u32)(r_edi+0x358u));
    /* 0056b9a0: fstp dword ptr [edi + 0x2ac] */ W_F32((u32)(r_edi+0x2acu), ST(0)); FPOP();
    /* 0056b9a6: mov dword ptr [edi + 0x2a4], eax */ W32((u32)(r_edi+0x2a4u), r_eax);
    /* 0056b9ac: mov dword ptr [edi + 0x2a8], edx */ W32((u32)(r_edi+0x2a8u), r_edx);
    /* 0056b9b2: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b9b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0056b9b7: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x56b9bcu); f_00772358();
    /* 0056b9bc: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b9bf: push dword ptr [edi + 0x3ec] */ { u32 v = R32((u32)(r_edi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056b9c5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0056b9c7: mov ecx, edi */ r_ecx = r_edi;
    /* 0056b9c9: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x56b9ccu); call_ind(t); }
    /* 0056b9cc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0056b9ce: mov ecx, edi */ r_ecx = r_edi;
    /* 0056b9d0: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x56b9d3u); call_ind(t); }
    /* 0056b9d3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056b9d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056b9d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056b9d8: ret 8 */ FN_RET(0x0056b8d4); r_esp += 12; return;
}

void f_0056b9dc(void) /* sub_56B9DC */
{
    FN_ENTER(0x0056b9dc);
    /* 0056b9dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056b9dd: mov esi, ecx */ r_esi = r_ecx;
    /* 0056b9df: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056b9e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b9e8: je 0x56ba87 */ if (fZ) goto L_0056ba87;
L_0056b9ee:; BB(0x0056b9ee);
    /* 0056b9ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056b9f1: jne 0x56baf4 */ if (!fZ) goto L_0056baf4;
L_0056b9f7:; BB(0x0056b9f7);
    /* 0056b9f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b9f9: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056b9fe: mov ecx, esi */ r_ecx = r_esi;
    /* 0056ba00: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x56ba05u); f_007714cc();
    /* 0056ba05: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0056ba08: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ba0d: je 0x56baf6 */ if (fZ) goto L_0056baf6;
L_0056ba13:; BB(0x0056ba13);
    /* 0056ba13: mov ecx, esi */ r_ecx = r_esi;
    /* 0056ba15: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56ba1au); f_007751b0();
    /* 0056ba1a: fcomp dword ptr [esi + 0x44c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x44cu))); FPOP();
    /* 0056ba20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056ba22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056ba23: ja 0x56ba55 */ if ((!fC&&!fZ)) goto L_0056ba55;
L_0056ba25:; BB(0x0056ba25);
    /* 0056ba25: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056ba2b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056ba2d: jne 0x56baf4 */ if (!fZ) goto L_0056baf4;
L_0056ba33:; BB(0x0056ba33);
    /* 0056ba33: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056ba3a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056ba3d: je 0x56baf4 */ if (fZ) goto L_0056baf4;
L_0056ba43:; BB(0x0056ba43);
    /* 0056ba43: mov dword ptr [esi + 0x37c], 0xb */ W32((u32)(r_esi+0x37cu), 0xbu);
    /* 0056ba4d: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0056ba53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056ba54: ret  */ FN_RET(0x0056b9dc); r_esp += 4; return;
L_0056ba55:; BB(0x0056ba55);
    /* 0056ba55: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056ba5b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056ba5d: jne 0x56ba7b */ if (!fZ) goto L_0056ba7b;
L_0056ba5f:; BB(0x0056ba5f);
    /* 0056ba5f: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056ba66: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056ba69: je 0x56ba7b */ if (fZ) goto L_0056ba7b;
L_0056ba6b:; BB(0x0056ba6b);
    /* 0056ba6b: mov dword ptr [esi + 0x37c], 0xd */ W32((u32)(r_esi+0x37cu), 0xdu);
    /* 0056ba75: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_0056ba7b:; BB(0x0056ba7b);
    /* 0056ba7b: mov dword ptr [esi + 0x380], 1 */ W32((u32)(r_esi+0x380u), 0x1u);
    /* 0056ba85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056ba86: ret  */ FN_RET(0x0056b9dc); r_esp += 4; return;
L_0056ba87:; BB(0x0056ba87);
    /* 0056ba87: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ba89: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0056ba8b: mov ecx, esi */ r_ecx = r_esi;
    /* 0056ba8d: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x56ba90u); call_ind(t); }
    /* 0056ba90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056ba92: je 0x56baf4 */ if (fZ) goto L_0056baf4;
L_0056ba94:; BB(0x0056ba94);
    /* 0056ba94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ba96: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0056ba9c: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0056ba9e: mov ecx, esi */ r_ecx = r_esi;
    /* 0056baa0: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x56baa5u); f_007714cc();
    /* 0056baa5: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0056baa8: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056baad: je 0x56baf4 */ if (fZ) goto L_0056baf4;
L_0056baaf:; BB(0x0056baaf);
    /* 0056baaf: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0056bab5: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bab7: mov ecx, esi */ r_ecx = r_esi;
    /* 0056bab9: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x56babeu); f_0052ccd8();
    /* 0056babe: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056bac4: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bac9: je 0x56bad4 */ if (fZ) goto L_0056bad4;
L_0056bacb:; BB(0x0056bacb);
    /* 0056bacb: mov ecx, esi */ r_ecx = r_esi;
    /* 0056bacd: call 0x56bb4c */ r_esp -= 4; W32(r_esp, 0x56bad2u); f_0056bb4c();
    /* 0056bad2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056bad3: ret  */ FN_RET(0x0056b9dc); r_esp += 4; return;
L_0056bad4:; BB(0x0056bad4);
    /* 0056bad4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bad6: jne 0x56baf4 */ if (!fZ) goto L_0056baf4;
L_0056bad8:; BB(0x0056bad8);
    /* 0056bad8: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056badf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bae2: je 0x56baf4 */ if (fZ) goto L_0056baf4;
L_0056bae4:; BB(0x0056bae4);
    /* 0056bae4: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 0056baee: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_0056baf4:; BB(0x0056baf4);
    /* 0056baf4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056baf5: ret  */ FN_RET(0x0056b9dc); r_esp += 4; return;
L_0056baf6:; BB(0x0056baf6);
    /* 0056baf6: fld dword ptr [0x9262c8] */ FPUSH(R_F32((u32)(0x9262c8u)));
    /* 0056bafc: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0056bb02: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0056bb04: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056bb07: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056bb0a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0056bb12: mov ecx, esi */ r_ecx = r_esi;
    /* 0056bb14: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x56bb19u); f_007714cc();
    /* 0056bb19: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0056bb1c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bb21: jne 0x56baf4 */ if (!fZ) goto L_0056baf4;
L_0056bb23:; BB(0x0056bb23);
    /* 0056bb23: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0056bb29: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bb2b: jne 0x56baf4 */ if (!fZ) goto L_0056baf4;
L_0056bb2d:; BB(0x0056bb2d);
    /* 0056bb2d: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0056bb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bb36: je 0x56baf4 */ if (fZ) goto L_0056baf4;
L_0056bb38:; BB(0x0056bb38);
    /* 0056bb38: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 0056bb42: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0056bb48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056bb49: ret  */ FN_RET(0x0056b9dc); r_esp += 4; return;
}

void f_0056bb4c(void) /* sub_56BB4C */
{
    FN_ENTER(0x0056bb4c);
    /* 0056bb4c: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0056bb4f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0056bb52: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0056bb55: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0056bb58: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0056bb5b: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0056bb5e: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0056bb61: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056bb66: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0056bb69: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0056bb6f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056bb71: jne 0x56bb8f */ if (!fZ) goto L_0056bb8f;
L_0056bb73:; BB(0x0056bb73);
    /* 0056bb73: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0056bb7a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bb7d: je 0x56bb8f */ if (fZ) goto L_0056bb8f;
L_0056bb7f:; BB(0x0056bb7f);
    /* 0056bb7f: mov dword ptr [ecx + 0x37c], 0xe */ W32((u32)(r_ecx+0x37cu), 0xeu);
    /* 0056bb89: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_0056bb8f:; BB(0x0056bb8f);
    /* 0056bb8f: mov dword ptr [ecx + 0x380], 1 */ W32((u32)(r_ecx+0x380u), 0x1u);
    /* 0056bb99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056bb9a: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x56bb9fu); f_007b999c();
    /* 0056bb9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056bba0: ret  */ FN_RET(0x0056bb4c); r_esp += 4; return;
}

void f_0056bba4(void) /* sub_56BBA4 */
{
    FN_ENTER(0x0056bba4);
    /* 0056bba4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056bba5: mov eax, dword ptr [0xa73d9c] */ r_eax = R32((u32)(0xa73d9cu));
    /* 0056bbaa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056bbad: mov dword ptr [0xa73d98], edx */ W32((u32)(0xa73d98u), r_edx);
    /* 0056bbb3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0056bbb6: mov dword ptr [0xa73d94], edx */ W32((u32)(0xa73d94u), r_edx);
    /* 0056bbbc: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0056bbbf: mov dword ptr [0xa73d90], edx */ W32((u32)(0xa73d90u), r_edx);
    /* 0056bbc5: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0056bbc8: mov dword ptr [0xa73d8c], edx */ W32((u32)(0xa73d8cu), r_edx);
    /* 0056bbce: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0056bbd1: mov dword ptr [0xa73d88], edx */ W32((u32)(0xa73d88u), r_edx);
    /* 0056bbd7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0056bbda: mov dword ptr [0xa73d84], edx */ W32((u32)(0xa73d84u), r_edx);
    /* 0056bbe0: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0056bbe3: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0056bbe6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056bbe8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056bbea: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056bbec: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0056bbee: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0056bbf0: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bbf2: mov dword ptr [ecx + 0x454], edi */ W32((u32)(r_ecx+0x454u), r_edi);
    /* 0056bbf8: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0056bbfb: mov dword ptr [ecx + 0x458], eax */ W32((u32)(r_ecx+0x458u), r_eax);
    /* 0056bc01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056bc02: ret  */ FN_RET(0x0056bba4); r_esp += 4; return;
}

void f_0056bc04(void) /* sub_56BC04 */
{
    FN_ENTER(0x0056bc04);
    /* 0056bc04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056bc05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056bc06: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056bc08: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0056bc0e: fld dword ptr [0x9262c4] */ FPUSH(R_F32((u32)(0x9262c4u)));
    /* 0056bc14: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056bc17: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bc1c: je 0x56bc4a */ if (fZ) goto L_0056bc4a;
L_0056bc1e:; BB(0x0056bc1e);
    /* 0056bc1e: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0056bc24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bc25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056bc27: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x56bc2cu); f_00777450();
    /* 0056bc2c: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056bc33: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bc36: je 0x56bc5c */ if (fZ) goto L_0056bc5c;
L_0056bc38:; BB(0x0056bc38);
    /* 0056bc38: mov dword ptr [ebp + 0x37c], 0xa */ W32((u32)(r_ebp+0x37cu), 0xau);
    /* 0056bc42: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0056bc48: jmp 0x56bc5c */ goto L_0056bc5c;
L_0056bc4a:; BB(0x0056bc4a);
    /* 0056bc4a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bc4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056bc50: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bc54: call 0x7732b8 */ r_esp -= 4; W32(r_esp, 0x56bc59u); f_007732b8();
    /* 0056bc59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0056bc5c:; BB(0x0056bc5c);
    /* 0056bc5c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056bc5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056bc60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056bc61: ret 8 */ FN_RET(0x0056bc04); r_esp += 12; return;
}

void f_0056bc64(void) /* sub_56BC64 */
{
    FN_ENTER(0x0056bc64);
    /* 0056bc64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056bc65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056bc66: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056bc68: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0056bc6e: fld dword ptr [0x9262c0] */ FPUSH(R_F32((u32)(0x9262c0u)));
    /* 0056bc74: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056bc77: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bc7c: je 0x56bcaa */ if (fZ) goto L_0056bcaa;
L_0056bc7e:; BB(0x0056bc7e);
    /* 0056bc7e: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0056bc84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bc85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056bc87: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x56bc8cu); f_00777450();
    /* 0056bc8c: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056bc93: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bc96: je 0x56bccb */ if (fZ) goto L_0056bccb;
L_0056bc98:; BB(0x0056bc98);
    /* 0056bc98: mov dword ptr [ebp + 0x37c], 0xa */ W32((u32)(r_ebp+0x37cu), 0xau);
    /* 0056bca2: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0056bca8: jmp 0x56bccb */ goto L_0056bccb;
L_0056bcaa:; BB(0x0056bcaa);
    /* 0056bcaa: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0056bcaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bcb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bcb1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056bcb3: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bcb7: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bcbb: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bcbf: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bcc3: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x56bcc8u); f_00773afc();
    /* 0056bcc8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0056bccb:; BB(0x0056bccb);
    /* 0056bccb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056bcce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056bccf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056bcd0: ret 0x18 */ FN_RET(0x0056bc64); r_esp += 28; return;
}

void f_0056bcd4(void) /* sub_56BCD4 */
{
    FN_ENTER(0x0056bcd4);
    /* 0056bcd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056bcd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056bcd6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056bcd8: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0056bcde: fld dword ptr [0x9262bc] */ FPUSH(R_F32((u32)(0x9262bcu)));
    /* 0056bce4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056bce7: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bcec: je 0x56bd1a */ if (fZ) goto L_0056bd1a;
L_0056bcee:; BB(0x0056bcee);
    /* 0056bcee: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0056bcf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bcf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056bcf7: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x56bcfcu); f_00777450();
    /* 0056bcfc: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056bd03: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bd06: je 0x56bd2c */ if (fZ) goto L_0056bd2c;
L_0056bd08:; BB(0x0056bd08);
    /* 0056bd08: mov dword ptr [ebp + 0x37c], 0xa */ W32((u32)(r_ebp+0x37cu), 0xau);
    /* 0056bd12: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0056bd18: jmp 0x56bd2c */ goto L_0056bd2c;
L_0056bd1a:; BB(0x0056bd1a);
    /* 0056bd1a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bd1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056bd20: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bd24: call 0x7753b4 */ r_esp -= 4; W32(r_esp, 0x56bd29u); f_007753b4();
    /* 0056bd29: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0056bd2c:; BB(0x0056bd2c);
    /* 0056bd2c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0056bd2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056bd30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056bd31: ret 8 */ FN_RET(0x0056bcd4); r_esp += 12; return;
}

void f_0056bd34(void) /* sub_56BD34 */
{
    FN_ENTER(0x0056bd34);
    /* 0056bd34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056bd35: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0056bd37: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056bd39: call 0x56a70c */ r_esp -= 4; W32(r_esp, 0x56bd3eu); f_0056a70c();
    /* 0056bd3e: add ebp, 0x3bc */ {  u32 a = r_ebp; u32 b = 0x3bcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056bd44: mov eax, ebp */ r_eax = r_ebp;
    /* 0056bd46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056bd47: ret  */ FN_RET(0x0056bd34); r_esp += 4; return;
}

void f_0056bd48(void) /* sub_56BD48 */
{
    FN_ENTER(0x0056bd48);
    /* 0056bd48: mov eax, dword ptr [ecx + 0x454] */ r_eax = R32((u32)(r_ecx+0x454u));
    /* 0056bd4e: ret  */ FN_RET(0x0056bd48); r_esp += 4; return;
}

void f_0056bd50(void) /* sub_56BD50 */
{
    FN_ENTER(0x0056bd50);
    /* 0056bd50: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0056bd57: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bd5a: je 0x56bd73 */ if (fZ) goto L_0056bd73;
L_0056bd5c:; BB(0x0056bd5c);
    /* 0056bd5c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bd5f: je 0x56bd73 */ if (fZ) goto L_0056bd73;
L_0056bd61:; BB(0x0056bd61);
    /* 0056bd61: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bd64: je 0x56bd73 */ if (fZ) goto L_0056bd73;
L_0056bd66:; BB(0x0056bd66);
    /* 0056bd66: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bd69: je 0x56bd73 */ if (fZ) goto L_0056bd73;
L_0056bd6b:; BB(0x0056bd6b);
    /* 0056bd6b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056bd6e: je 0x56bd73 */ if (fZ) goto L_0056bd73;
L_0056bd70:; BB(0x0056bd70);
    /* 0056bd70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bd72: ret  */ FN_RET(0x0056bd50); r_esp += 4; return;
L_0056bd73:; BB(0x0056bd73);
    /* 0056bd73: mov eax, 1 */ r_eax = 0x1u;
    /* 0056bd78: ret  */ FN_RET(0x0056bd50); r_esp += 4; return;
}

void f_0056bd7c(void) /* sub_56BD7C */
{
    FN_ENTER(0x0056bd7c);
    /* 0056bd7c: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0056bd82: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bd87: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0056bd8d: ret  */ FN_RET(0x0056bd7c); r_esp += 4; return;
}

void f_0056bd90(void) /* sub_56BD90 */
{
    FN_ENTER(0x0056bd90);
    /* 0056bd90: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0056bd96: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bd9b: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0056bda1: ret  */ FN_RET(0x0056bd90); r_esp += 4; return;
}

void f_0056bda4(void)
{
    FN_ENTER(0x0056bda4);
    /* 0056bda4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x56bda9u); f_0061cdb0();
    /* 0056bda9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x56bdaeu); f_0061cdb0();
    /* 0056bdae: mov ecx, dword ptr [0xa73dac] */ r_ecx = R32((u32)(0xa73dacu));
    /* 0056bdb4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056bdb6: je 0x56bdca */ if (fZ) goto L_0056bdca;
L_0056bdb8:; BB(0x0056bdb8);
    /* 0056bdb8: je 0x56bdc0 */ if (fZ) goto L_0056bdc0;
L_0056bdba:; BB(0x0056bdba);
    /* 0056bdba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bdbc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056bdbe: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x56bdc0u); call_ind(t); }
L_0056bdc0:; BB(0x0056bdc0);
    /* 0056bdc0: mov dword ptr [0xa73dac], 0 */ W32((u32)(0xa73dacu), 0x0u);
L_0056bdca:; BB(0x0056bdca);
    /* 0056bdca: mov ecx, dword ptr [0xa73db0] */ r_ecx = R32((u32)(0xa73db0u));
    /* 0056bdd0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bdd2: je 0x56bde7 */ if (fZ) goto L_0056bde7;
L_0056bdd4:; BB(0x0056bdd4);
    /* 0056bdd4: je 0x56bddd */ if (fZ) goto L_0056bddd;
L_0056bdd6:; BB(0x0056bdd6);
    /* 0056bdd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bdd8: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x56bdddu); f_004066a8();
L_0056bddd:; BB(0x0056bddd);
    /* 0056bddd: mov dword ptr [0xa73db0], 0 */ W32((u32)(0xa73db0u), 0x0u);
L_0056bde7:; BB(0x0056bde7);
    /* 0056bde7: ret  */ FN_RET(0x0056bda4); r_esp += 4; return;
}

void f_0056bde8(void)
{
    FN_ENTER(0x0056bde8);
    /* 0056bde8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056bde9: mov ebp, esp */ r_ebp = r_esp;
    /* 0056bdeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056bded: push 0x8d69fa */ { u32 v = 0x8d69fau; r_esp -= 4; W32(r_esp, v); }
    /* 0056bdf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056bdf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bdf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056be00: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056be03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056be06: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0056be09: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0056be0c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0056be0f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056be11: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0056be18: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56be1du); f_005caba4();
    /* 0056be1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056be1e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0056be21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056be23: je 0x56beab */ if (fZ) goto L_0056beab;
L_0056be29:; BB(0x0056be29);
    /* 0056be29: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0056be30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056be37: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056be3d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056be40: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x56be45u); f_00787a4c();
    /* 0056be45: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056be48: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0056be4f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0056be52:; BB(0x0056be52);
    /* 0056be52: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056be59: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0056be60: push 0x460 */ { u32 v = 0x460u; r_esp -= 4; W32(r_esp, v); }
    /* 0056be65: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56be6au); f_005caba4();
    /* 0056be6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056be6b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0056be6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056be70: je 0x56bea7 */ if (fZ) goto L_0056bea7;
L_0056be72:; BB(0x0056be72);
    /* 0056be72: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0056be79: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056be80: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056be83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056be86: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056be89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056be8a: call 0x56beb4 */ r_esp -= 4; W32(r_esp, 0x56be8fu); f_0056beb4();
    /* 0056be8f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056be92: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0056be99:; BB(0x0056be99);
    /* 0056be99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056be9c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056bea3: mov esp, ebp */ r_esp = r_ebp;
    /* 0056bea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056bea6: ret  */ FN_RET(0x0056bde8); r_esp += 4; return;
L_0056bea7:; BB(0x0056bea7);
    /* 0056bea7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056bea9: jmp 0x56be99 */ goto L_0056be99;
L_0056beab:; BB(0x0056beab);
    /* 0056beab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056bead: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056beb0: jmp 0x56be52 */ goto L_0056be52;
}

void f_0056beb4(void) /* sub_56BEB4 */
{
    FN_ENTER(0x0056beb4);
    /* 0056beb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056beb5: mov ebp, esp */ r_ebp = r_esp;
    /* 0056beb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056beb9: push 0x8d6a3e */ { u32 v = 0x8d6a3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0056bebe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056bec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056bec5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056becc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056becf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056bed2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0056bed5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0056bed8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0056bedb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056bede: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bee1: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0056bee4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056bee7: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x56beecu); f_0052c3fc();
    /* 0056beec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056bef3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bef6: mov dword ptr [ecx], 0xb05a20 */ W32((u32)(r_ecx), 0xb05a20u);
    /* 0056befc: add ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056bf02: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x56bf07u); f_00576a48();
    /* 0056bf07: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056bf0e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bf11: add ecx, 0x420 */ {  u32 a = r_ecx; u32 b = 0x420u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056bf17: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x56bf1cu); f_0057713c();
    /* 0056bf1c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056bf23: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bf26: mov eax, dword ptr [0x9be6e0] */ r_eax = R32((u32)(0x9be6e0u));
    /* 0056bf2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056bf2e: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0056bf30: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0056bf33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056bf34: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x56bf3au); call_ind(t); }
    /* 0056bf3a: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bf3d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bf40: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bf42: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0056bf45: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 0056bf48: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 0056bf4b: push 0x9be560 */ { u32 v = 0x9be560u; r_esp -= 4; W32(r_esp, v); }
    /* 0056bf50: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 0056bf56: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bf59: mov dword ptr [edi + 0x2a8], ebx */ W32((u32)(r_edi+0x2a8u), r_ebx);
    /* 0056bf5f: mov dword ptr [edi + 0x2ac], esi */ W32((u32)(r_edi+0x2acu), r_esi);
    /* 0056bf65: mov eax, dword ptr [edx + 0x2a4] */ r_eax = R32((u32)(r_edx+0x2a4u));
    /* 0056bf6b: mov dword ptr [edx + 0x298], eax */ W32((u32)(r_edx+0x298u), r_eax);
    /* 0056bf71: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 0056bf77: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 0056bf7d: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0056bf83: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0056bf89: mov eax, dword ptr [0xa73db0] */ r_eax = R32((u32)(0xa73db0u));
    /* 0056bf8e: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0056bf94: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0056bf9a: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0056bfa0: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 0056bfaa: or edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056bfad: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 0056bfb3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056bfb6: movsx edx, word ptr [edx + 0x3e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x3eu));
    /* 0056bfba: mov dword ptr [ecx + 0x374], edx */ W32((u32)(r_ecx+0x374u), r_edx);
    /* 0056bfc0: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056bfc6: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0056bfc9: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0056bfcc: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0056bfd2: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0056bfd5: mov dword ptr [ecx + 0xd8], 0x9be5c0 */ W32((u32)(r_ecx+0xd8u), 0x9be5c0u);
    /* 0056bfdf: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0056bfe2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x56bfe7u); f_007b9a88();
    /* 0056bfe7: push dword ptr [0xa73da0] */ { u32 v = R32((u32)(0xa73da0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bfed: push dword ptr [0xa73da4] */ { u32 v = R32((u32)(0xa73da4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bff3: push dword ptr [0xa73da8] */ { u32 v = R32((u32)(0xa73da8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056bff9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bffc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056bfff: mov ebx, dword ptr [eax + 0xa4] */ r_ebx = R32((u32)(r_eax+0xa4u));
    /* 0056c005: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0056c008: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0056c00b: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 0056c00e: mov dword ptr [ecx + 0x358], 0x9be6e4 */ W32((u32)(r_ecx+0x358u), 0x9be6e4u);
    /* 0056c018: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x56c01du); f_007868f8();
    /* 0056c01d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c020: call 0x56c22c */ r_esp -= 4; W32(r_esp, 0x56c025u); f_0056c22c();
    /* 0056c025: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c028: call 0x56bba4 */ r_esp -= 4; W32(r_esp, 0x56c02du); f_0056bba4();
    /* 0056c02d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c030: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c033: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0056c03a: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x56c03fu); f_007aa4c8();
    /* 0056c03f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c042: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0056c049: movsx ebx, word ptr [ecx + 0x2bc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 0056c050: movzx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)R16((u32)(r_ecx+0x2beu));
    /* 0056c057: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0056c05e: mov word ptr [ecx + 0x334], bx */ W16((u32)(r_ecx+0x334u), (u16)r_ebx);
    /* 0056c065: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 0056c06c: mov word ptr [ecx + 0x346], bx */ W16((u32)(r_ecx+0x346u), (u16)r_ebx);
    /* 0056c073: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x56c078u); f_0078730c();
    /* 0056c078: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c07b: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x56c080u); f_00786bbc();
    /* 0056c080: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c083: fld dword ptr [0x9262b8] */ FPUSH(R_F32((u32)(0x9262b8u)));
    /* 0056c089: fld dword ptr [0x9262b4] */ FPUSH(R_F32((u32)(0x9262b4u)));
    /* 0056c08f: fld dword ptr [0x9262b0] */ FPUSH(R_F32((u32)(0x9262b0u)));
    /* 0056c095: fadd dword ptr [ecx + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x364u));
    /* 0056c09b: mov ebx, dword ptr [ecx + 0x358] */ r_ebx = R32((u32)(r_ecx+0x358u));
    /* 0056c0a1: fld dword ptr [0x9262ac] */ FPUSH(R_F32((u32)(0x9262acu)));
    /* 0056c0a7: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 0056c0aa: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
    /* 0056c0ad: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0056c0b0: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 0056c0b6: fld dword ptr [ecx + 0x36c] */ FPUSH(R_F32((u32)(r_ecx+0x36cu)));
    /* 0056c0bc: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0056c0c2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0056c0c4: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0056c0c6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0056c0c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0056c0ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056c0cc: mov word ptr [ecx + 0x394], dx */ W16((u32)(r_ecx+0x394u), (u16)r_edx);
    /* 0056c0d3: mov dword ptr [ecx + 0x68], 0x3f800000 */ W32((u32)(r_ecx+0x68u), 0x3f800000u);
    /* 0056c0da: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0056c0dd: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0056c0df: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0056c0e1: fstp dword ptr [ecx + 0x448] */ W_F32((u32)(r_ecx+0x448u), ST(0)); FPOP();
    /* 0056c0e7: fstp dword ptr [ecx + 0x44c] */ W_F32((u32)(r_ecx+0x44cu), ST(0)); FPOP();
    /* 0056c0ed: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0056c0ef: fstp dword ptr [ecx + 0x3ec] */ W_F32((u32)(r_ecx+0x3ecu), ST(0)); FPOP();
    /* 0056c0f5: mov dword ptr [ecx + 0x50], esi */ W32((u32)(r_ecx+0x50u), r_esi);
    /* 0056c0f8: mov dword ptr [ecx + 0x54], edi */ W32((u32)(r_ecx+0x54u), r_edi);
    /* 0056c0fb: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0056c0fe: mov dword ptr [ecx + 0x398], esi */ W32((u32)(r_ecx+0x398u), r_esi);
    /* 0056c104: mov dword ptr [ecx + 0x39c], edi */ W32((u32)(r_ecx+0x39cu), r_edi);
    /* 0056c10a: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0056c110: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0056c112: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056c114: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056c115: jb 0x56c119 */ if (fC) goto L_0056c119;
L_0056c117:; BB(0x0056c117);
    /* 0056c117: fst st(1) */ ST(1) = ST(0);
L_0056c119:; BB(0x0056c119);
    /* 0056c119: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056c11b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056c11d: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0056c120: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0056c124: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056c129: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056c12c: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0056c12f: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056c132: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0056c135: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056c138: fstp dword ptr [ecx + 0x444] */ W_F32((u32)(r_ecx+0x444u), ST(0)); FPOP();
    /* 0056c13e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056c140: jle 0x56c176 */ if ((fZ||fS!=fO)) goto L_0056c176;
L_0056c142:; BB(0x0056c142);
    /* 0056c142: fcomp dword ptr [ecx + 0x360] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x360u))); FPOP();
    /* 0056c148: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056c14a: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 0056c150: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056c156: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 0056c15c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056c15d: jbe 0x56c169 */ if ((fC||fZ)) goto L_0056c169;
L_0056c15f:; BB(0x0056c15f);
    /* 0056c15f: mov dword ptr [ecx + 0x360], 0x42480000 */ W32((u32)(r_ecx+0x360u), 0x42480000u);
L_0056c169:; BB(0x0056c169);
    /* 0056c169: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0056c16c: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056c171: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0056c174: jmp 0x56c178 */ goto L_0056c178;
L_0056c176:; BB(0x0056c176);
    /* 0056c176: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0056c178:; BB(0x0056c178);
    /* 0056c178: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c17a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c17c: mov dword ptr [ecx + 0x3fc], eax */ W32((u32)(r_ecx+0x3fcu), r_eax);
    /* 0056c182: mov dword ptr [ecx + 0x400], eax */ W32((u32)(r_ecx+0x400u), r_eax);
    /* 0056c188: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x56c18du); f_00787550();
    /* 0056c18d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c190: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0056c196: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0056c1a0: mov dword ptr [ecx + 0x450], 0 */ W32((u32)(r_ecx+0x450u), 0x0u);
    /* 0056c1aa: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c1af: je 0x56c1b8 */ if (fZ) goto L_0056c1b8;
L_0056c1b1:; BB(0x0056c1b1);
    /* 0056c1b1: call 0x56bb4c */ r_esp -= 4; W32(r_esp, 0x56c1b6u); f_0056bb4c();
    /* 0056c1b6: jmp 0x56c1bd */ goto L_0056c1bd;
L_0056c1b8:; BB(0x0056c1b8);
    /* 0056c1b8: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x56c1bdu); f_0052ca40();
L_0056c1bd:; BB(0x0056c1bd);
    /* 0056c1bd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c1c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c1c2: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0056c1c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c1c6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x56c1cbu); f_007b4c58();
    /* 0056c1cb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c1ce: mov dword ptr [ecx + 0x3f4], 0 */ W32((u32)(r_ecx+0x3f4u), 0x0u);
    /* 0056c1d8: add ecx, 0x420 */ {  u32 a = r_ecx; u32 b = 0x420u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056c1de: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x56c1e3u); f_0057739c();
    /* 0056c1e3: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c1e6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c1e9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0056c1ec: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056c1f1: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0056c1f4: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 0056c1f7: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 0056c1fa: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0056c1fd: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 0056c200: mov dword ptr [edi + 0x48], ebx */ W32((u32)(r_edi+0x48u), r_ebx);
    /* 0056c203: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 0056c206: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056c208: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x56c20eu); call_ind(t); }
    /* 0056c20e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056c211: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056c214: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056c217: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056c21a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c21d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c224: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c226: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c227: ret 8 */ FN_RET(0x0056beb4); r_esp += 12; return;
}

