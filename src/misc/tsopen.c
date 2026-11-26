#include "protos.h"

void f_00868e7d(void) /* __tsopen_lk */
{
    FN_ENTER(0x00868e7d);
    /* 00868e7d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00868e7e: mov ebp, esp */ r_ebp = r_esp;
    /* 00868e80: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00868e83: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00868e86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868e87: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868e88: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00868e8a: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 00868e8c: mov dword ptr [ebp - 0x1c], 0xc */ W32((u32)(r_ebp+0xffffffe4u), 0xcu);
    /* 00868e93: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00868e96: jns 0x868ea1 */ if (!fS) goto L_00868ea1;
L_00868e98:; BB(0x00868e98);
    /* 00868e98: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00868e9b: mov byte ptr [ebp - 1], 0x10 */ W8((u32)(r_ebp+0xffffffffu), 0x10u);
    /* 00868e9f: jmp 0x868eac */ goto L_00868eac;
L_00868ea1:; BB(0x00868ea1);
    /* 00868ea1: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00868ea8: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
L_00868eac:; BB(0x00868eac);
    /* 00868eac: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 00868eb1: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868eb3: jne 0x868ec6 */ if (!fZ) goto L_00868ec6;
L_00868eb5:; BB(0x00868eb5);
    /* 00868eb5: test dh, 0x40 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00868eb8: jne 0x868ec2 */ if (!fZ) goto L_00868ec2;
L_00868eba:; BB(0x00868eba);
    /* 00868eba: cmp dword ptr [0xae7ef0], eax */ {  u32 a = R32((u32)(0xae7ef0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ec0: je 0x868ec6 */ if (fZ) goto L_00868ec6;
L_00868ec2:; BB(0x00868ec2);
    /* 00868ec2: or byte ptr [ebp - 1], 0x80 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00868ec6:; BB(0x00868ec6);
    /* 00868ec6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00868ec8: mov eax, edx */ r_eax = r_edx;
    /* 00868eca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00868ecb: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868ecd: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00868ecf: je 0x868ee9 */ if (fZ) goto L_00868ee9;
L_00868ed1:; BB(0x00868ed1);
    /* 00868ed1: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00868ed2: je 0x868ee0 */ if (fZ) goto L_00868ee0;
L_00868ed4:; BB(0x00868ed4);
    /* 00868ed4: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00868ed5: jne 0x868f04 */ if (!fZ) goto L_00868f04;
L_00868ed7:; BB(0x00868ed7);
    /* 00868ed7: mov dword ptr [ebp - 0x10], 0xc0000000 */ W32((u32)(r_ebp+0xfffffff0u), 0xc0000000u);
    /* 00868ede: jmp 0x868ef0 */ goto L_00868ef0;
L_00868ee0:; BB(0x00868ee0);
    /* 00868ee0: mov dword ptr [ebp - 0x10], 0x40000000 */ W32((u32)(r_ebp+0xfffffff0u), 0x40000000u);
    /* 00868ee7: jmp 0x868ef0 */ goto L_00868ef0;
L_00868ee9:; BB(0x00868ee9);
    /* 00868ee9: mov dword ptr [ebp - 0x10], 0x80000000 */ W32((u32)(r_ebp+0xfffffff0u), 0x80000000u);
L_00868ef0:; BB(0x00868ef0);
    /* 00868ef0: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ef3: je 0x868f35 */ if (fZ) goto L_00868f35;
L_00868ef5:; BB(0x00868ef5);
    /* 00868ef5: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868ef8: je 0x868f2c */ if (fZ) goto L_00868f2c;
L_00868efa:; BB(0x00868efa);
    /* 00868efa: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868efd: je 0x868f23 */ if (fZ) goto L_00868f23;
L_00868eff:; BB(0x00868eff);
    /* 00868eff: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f02: je 0x868f1e */ if (fZ) goto L_00868f1e;
L_00868f04:; BB(0x00868f04);
    /* 00868f04: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x868f09u); f_00859dd6();
    /* 00868f09: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 00868f0f: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x868f14u); f_00859ddf();
    /* 00868f14: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00868f16: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00868f19: jmp 0x869115 */ goto L_00869115;
L_00868f1e:; BB(0x00868f1e);
    /* 00868f1e: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00868f21: jmp 0x868f38 */ goto L_00868f38;
L_00868f23:; BB(0x00868f23);
    /* 00868f23: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00868f2a: jmp 0x868f38 */ goto L_00868f38;
L_00868f2c:; BB(0x00868f2c);
    /* 00868f2c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00868f33: jmp 0x868f38 */ goto L_00868f38;
L_00868f35:; BB(0x00868f35);
    /* 00868f35: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
L_00868f38:; BB(0x00868f38);
    /* 00868f38: mov eax, edx */ r_eax = r_edx;
    /* 00868f3a: mov edx, 0x700 */ r_edx = 0x700u;
    /* 00868f3f: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868f41: mov ecx, 0x400 */ r_ecx = 0x400u;
    /* 00868f46: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00868f48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868f49: mov edi, 0x100 */ r_edi = 0x100u;
    /* 00868f4e: jg 0x868f7f */ if ((!fZ&&fS==fO)) goto L_00868f7f;
L_00868f50:; BB(0x00868f50);
    /* 00868f50: je 0x868f7a */ if (fZ) goto L_00868f7a;
L_00868f52:; BB(0x00868f52);
    /* 00868f52: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f54: je 0x868f7a */ if (fZ) goto L_00868f7a;
L_00868f56:; BB(0x00868f56);
    /* 00868f56: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f58: je 0x868f71 */ if (fZ) goto L_00868f71;
L_00868f5a:; BB(0x00868f5a);
    /* 00868f5a: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f5f: je 0x868fab */ if (fZ) goto L_00868fab;
L_00868f61:; BB(0x00868f61);
    /* 00868f61: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f66: jne 0x868f91 */ if (!fZ) goto L_00868f91;
L_00868f68:; BB(0x00868f68);
    /* 00868f68: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00868f6f: jmp 0x868fbb */ goto L_00868fbb;
L_00868f71:; BB(0x00868f71);
    /* 00868f71: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 00868f78: jmp 0x868fbb */ goto L_00868fbb;
L_00868f7a:; BB(0x00868f7a);
    /* 00868f7a: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 00868f7d: jmp 0x868fbb */ goto L_00868fbb;
L_00868f7f:; BB(0x00868f7f);
    /* 00868f7f: cmp eax, 0x500 */ {  u32 a = r_eax; u32 b = 0x500u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f84: je 0x868fb4 */ if (fZ) goto L_00868fb4;
L_00868f86:; BB(0x00868f86);
    /* 00868f86: cmp eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f8b: je 0x868fab */ if (fZ) goto L_00868fab;
L_00868f8d:; BB(0x00868f8d);
    /* 00868f8d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868f8f: je 0x868fb4 */ if (fZ) goto L_00868fb4;
L_00868f91:; BB(0x00868f91);
    /* 00868f91: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x868f96u); f_00859dd6();
    /* 00868f96: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 00868f9c: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x868fa1u); f_00859ddf();
    /* 00868fa1: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
L_00868fa3:; BB(0x00868fa3);
    /* 00868fa3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00868fa6: jmp 0x869114 */ goto L_00869114;
L_00868fab:; BB(0x00868fab);
    /* 00868fab: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 00868fb2: jmp 0x868fbb */ goto L_00868fbb;
L_00868fb4:; BB(0x00868fb4);
    /* 00868fb4: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_00868fbb:; BB(0x00868fbb);
    /* 00868fbb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00868fbe: test edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868fc0: mov esi, 0x80 */ r_esi = 0x80u;
    /* 00868fc5: je 0x868fd9 */ if (fZ) goto L_00868fd9;
L_00868fc7:; BB(0x00868fc7);
    /* 00868fc7: mov ecx, dword ptr [0xae7a0c] */ r_ecx = R32((u32)(0xae7a0cu));
    /* 00868fcd: not ecx */ r_ecx = ~r_ecx;
    /* 00868fcf: and ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00868fd2: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 00868fd4: js 0x868fd9 */ if (fS) goto L_00868fd9;
L_00868fd6:; BB(0x00868fd6);
    /* 00868fd6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00868fd8: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00868fd9:; BB(0x00868fd9);
    /* 00868fd9: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00868fdb: je 0x868ff4 */ if (fZ) goto L_00868ff4;
L_00868fdd:; BB(0x00868fdd);
    /* 00868fdd: or byte ptr [ebp - 0xe], 1 */ { u32 ad = (u32)(r_ebp+0xfffffff2u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00868fe1: or esi, 0x4000000 */ {  u32 a = r_esi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00868fe7: cmp dword ptr [0xae7a10], 2 */ {  u32 a = R32((u32)(0xae7a10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868fee: jne 0x868ff4 */ if (!fZ) goto L_00868ff4;
L_00868ff0:; BB(0x00868ff0);
    /* 00868ff0: or dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00868ff4:; BB(0x00868ff4);
    /* 00868ff4: test ah, 0x10 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00868ff7: je 0x868ffb */ if (fZ) goto L_00868ffb;
L_00868ff9:; BB(0x00868ff9);
    /* 00868ff9: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00868ffb:; BB(0x00868ffb);
    /* 00868ffb: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00868ffd: je 0x869007 */ if (fZ) goto L_00869007;
L_00868fff:; BB(0x00868fff);
    /* 00868fff: or esi, 0x8000000 */ {  u32 a = r_esi; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00869005: jmp 0x869011 */ goto L_00869011;
L_00869007:; BB(0x00869007);
    /* 00869007: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00869009: je 0x869011 */ if (fZ) goto L_00869011;
L_0086900b:; BB(0x0086900b);
    /* 0086900b: or esi, 0x10000000 */ {  u32 a = r_esi; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00869011:; BB(0x00869011);
    /* 00869011: call 0x863bd3 */ r_esp -= 4; W32(r_esp, 0x869016u); f_00863bd3();
    /* 00869016: mov edi, eax */ r_edi = r_eax;
    /* 00869018: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0086901b: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086901d: jne 0x869039 */ if (!fZ) goto L_00869039;
L_0086901f:; BB(0x0086901f);
    /* 0086901f: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x869024u); f_00859dd6();
    /* 00869024: mov dword ptr [eax], 0x18 */ W32((u32)(r_eax), 0x18u);
    /* 0086902a: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x86902fu); f_00859ddf();
    /* 0086902f: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00869032:; BB(0x00869032);
    /* 00869032: mov eax, ebx */ r_eax = r_ebx;
    /* 00869034: jmp 0x869114 */ goto L_00869114;
L_00869039:; BB(0x00869039);
    /* 00869039: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086903c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086903e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086903f: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869042: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00869048: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086904b: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0086904d: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00869050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869051: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869054: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869057: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086905a: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x869060u); call_ind(t); }
    /* 00869060: mov esi, eax */ r_esi = r_eax;
    /* 00869062: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869064: je 0x869078 */ if (fZ) goto L_00869078;
L_00869066:; BB(0x00869066);
    /* 00869066: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869067: call dword ptr [0x8f8260] */ { u32 t = R32((u32)(0x8f8260u)); r_esp -= 4; W32(r_esp, 0x86906du); call_ind(t); }
    /* 0086906d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086906f: jne 0x869087 */ if (!fZ) goto L_00869087;
L_00869071:; BB(0x00869071);
    /* 00869071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869072: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x869078u); call_ind(t); }
L_00869078:; BB(0x00869078);
    /* 00869078: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86907eu); call_ind(t); }
    /* 0086907e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086907f: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x869084u); f_00859de8();
    /* 00869084: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869085: jmp 0x869032 */ goto L_00869032;
L_00869087:; BB(0x00869087);
    /* 00869087: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086908a: jne 0x869092 */ if (!fZ) goto L_00869092;
L_0086908c:; BB(0x0086908c);
    /* 0086908c: or byte ptr [ebp - 1], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00869090: jmp 0x86909b */ goto L_0086909b;
L_00869092:; BB(0x00869092);
    /* 00869092: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869095: jne 0x86909b */ if (!fZ) goto L_0086909b;
L_00869097:; BB(0x00869097);
    /* 00869097: or byte ptr [ebp - 1], 8 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0086909b:; BB(0x0086909b);
    /* 0086909b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086909c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086909d: call 0x8639d5 */ r_esp -= 4; W32(r_esp, 0x8690a2u); f_008639d5();
    /* 008690a2: or byte ptr [ebp - 1], 1 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008690a6: mov eax, edi */ r_eax = r_edi;
    /* 008690a8: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008690ab: lea ebx, [eax*4 + 0xaf0a80] */ r_ebx = (u32)(r_eax*4+0xaf0a80u);
    /* 008690b2: mov eax, edi */ r_eax = r_edi;
    /* 008690b4: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008690b7: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 008690ba: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 008690bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008690be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008690bf: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008690c1: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008690c4: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 008690c7: and byte ptr [ebp - 1], 0x48 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x48u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 008690cb: mov byte ptr [esi + ecx + 4], al */ W8((u32)(r_esi+r_ecx+0x4u), (u8)r_eax);
    /* 008690cf: jne 0x8690fd */ if (!fZ) goto L_008690fd;
L_008690d1:; BB(0x008690d1);
    /* 008690d1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 008690d3: jns 0x8690fd */ if (!fS) goto L_008690fd;
L_008690d5:; BB(0x008690d5);
    /* 008690d5: test byte ptr [ebp + 0x14], 2 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008690d9: je 0x8690fd */ if (fZ) goto L_008690fd;
L_008690db:; BB(0x008690db);
    /* 008690db: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008690dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008690df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008690e0: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x8690e5u); f_0086485b();
    /* 008690e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008690e8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008690eb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008690ee: jne 0x869119 */ if (!fZ) goto L_00869119;
L_008690f0:; BB(0x008690f0);
    /* 008690f0: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8690f5u); f_00859ddf();
    /* 008690f5: cmp dword ptr [eax], 0x83 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008690fb: jne 0x869158 */ if (!fZ) goto L_00869158;
L_008690fd:; BB(0x008690fd);
    /* 008690fd: cmp byte ptr [ebp - 1], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffffu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00869101: jne 0x869112 */ if (!fZ) goto L_00869112;
L_00869103:; BB(0x00869103);
    /* 00869103: test byte ptr [ebp + 0x14], 8 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00869107: je 0x869112 */ if (fZ) goto L_00869112;
L_00869109:; BB(0x00869109);
    /* 00869109: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0086910b: lea eax, [esi + eax + 4] */ r_eax = (u32)(r_esi+r_eax+0x4u);
    /* 0086910f: or byte ptr [eax], 0x20 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00869112:; BB(0x00869112);
    /* 00869112: mov eax, edi */ r_eax = r_edi;
L_00869114:; BB(0x00869114);
    /* 00869114: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00869115:; BB(0x00869115);
    /* 00869115: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869116: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00869117: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00869118: ret  */ FN_RET(0x00868e7d); r_esp += 4; return;
L_00869119:; BB(0x00869119);
    /* 00869119: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086911b: lea eax, [ebp - 2] */ r_eax = (u32)(r_ebp+0xfffffffeu);
    /* 0086911e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086911f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869120: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 00869124: call 0x861a75 */ r_esp -= 4; W32(r_esp, 0x869129u); f_00861a75();
    /* 00869129: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086912c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086912e: jne 0x869146 */ if (!fZ) goto L_00869146;
L_00869130:; BB(0x00869130);
    /* 00869130: cmp byte ptr [ebp - 2], 0x1a */ {  u32 a = R8((u32)(r_ebp+0xfffffffeu)); u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869134: jne 0x869146 */ if (!fZ) goto L_00869146;
L_00869136:; BB(0x00869136);
    /* 00869136: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869139: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086913a: call 0x86a2a4 */ r_esp -= 4; W32(r_esp, 0x86913fu); f_0086a2a4();
    /* 0086913f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869142: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869143: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869144: je 0x869158 */ if (fZ) goto L_00869158;
L_00869146:; BB(0x00869146);
    /* 00869146: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00869148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086914a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086914b: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x869150u); f_0086485b();
    /* 00869150: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869153: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869156: jne 0x8690fd */ if (!fZ) goto L_008690fd;
L_00869158:; BB(0x00869158);
    /* 00869158: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869159: call 0x86203d */ r_esp -= 4; W32(r_esp, 0x86915eu); f_0086203d();
    /* 0086915e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086915f: jmp 0x868fa3 */ goto L_00868fa3;
}

void f_0086936e(void) /* __tsopen_lk_0 */
{
    FN_ENTER(0x0086936e);
    /* 0086936e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086936f: mov ebp, esp */ r_ebp = r_esp;
    /* 00869371: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00869374: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00869377: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869378: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869379: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086937b: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 0086937d: mov dword ptr [ebp - 0x20], 0xc */ W32((u32)(r_ebp+0xffffffe0u), 0xcu);
    /* 00869384: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00869387: jns 0x869392 */ if (!fS) goto L_00869392;
L_00869389:; BB(0x00869389);
    /* 00869389: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0086938c: mov byte ptr [ebp - 1], 0x10 */ W8((u32)(r_ebp+0xffffffffu), 0x10u);
    /* 00869390: jmp 0x86939d */ goto L_0086939d;
L_00869392:; BB(0x00869392);
    /* 00869392: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 00869399: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
L_0086939d:; BB(0x0086939d);
    /* 0086939d: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 008693a2: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008693a4: jne 0x8693b7 */ if (!fZ) goto L_008693b7;
L_008693a6:; BB(0x008693a6);
    /* 008693a6: test dh, 0x40 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008693a9: jne 0x8693b3 */ if (!fZ) goto L_008693b3;
L_008693ab:; BB(0x008693ab);
    /* 008693ab: cmp dword ptr [0xae7ef0], eax */ {  u32 a = R32((u32)(0xae7ef0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008693b1: je 0x8693b7 */ if (fZ) goto L_008693b7;
L_008693b3:; BB(0x008693b3);
    /* 008693b3: or byte ptr [ebp - 1], 0x80 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_008693b7:; BB(0x008693b7);
    /* 008693b7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008693b9: mov eax, edx */ r_eax = r_edx;
    /* 008693bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008693bc: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008693be: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008693c0: je 0x8693da */ if (fZ) goto L_008693da;
L_008693c2:; BB(0x008693c2);
    /* 008693c2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008693c3: je 0x8693d1 */ if (fZ) goto L_008693d1;
L_008693c5:; BB(0x008693c5);
    /* 008693c5: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008693c6: jne 0x8693f5 */ if (!fZ) goto L_008693f5;
L_008693c8:; BB(0x008693c8);
    /* 008693c8: mov dword ptr [ebp - 0x10], 0xc0000000 */ W32((u32)(r_ebp+0xfffffff0u), 0xc0000000u);
    /* 008693cf: jmp 0x8693e1 */ goto L_008693e1;
L_008693d1:; BB(0x008693d1);
    /* 008693d1: mov dword ptr [ebp - 0x10], 0x40000000 */ W32((u32)(r_ebp+0xfffffff0u), 0x40000000u);
    /* 008693d8: jmp 0x8693e1 */ goto L_008693e1;
L_008693da:; BB(0x008693da);
    /* 008693da: mov dword ptr [ebp - 0x10], 0x80000000 */ W32((u32)(r_ebp+0xfffffff0u), 0x80000000u);
L_008693e1:; BB(0x008693e1);
    /* 008693e1: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008693e4: je 0x869426 */ if (fZ) goto L_00869426;
L_008693e6:; BB(0x008693e6);
    /* 008693e6: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008693e9: je 0x86941d */ if (fZ) goto L_0086941d;
L_008693eb:; BB(0x008693eb);
    /* 008693eb: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008693ee: je 0x869414 */ if (fZ) goto L_00869414;
L_008693f0:; BB(0x008693f0);
    /* 008693f0: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008693f3: je 0x86940f */ if (fZ) goto L_0086940f;
L_008693f5:; BB(0x008693f5);
    /* 008693f5: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8693fau); f_00859dd6();
    /* 008693fa: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 00869400: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x869405u); f_00859ddf();
    /* 00869405: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00869407: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086940a: jmp 0x869606 */ goto L_00869606;
L_0086940f:; BB(0x0086940f);
    /* 0086940f: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00869412: jmp 0x869429 */ goto L_00869429;
L_00869414:; BB(0x00869414);
    /* 00869414: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0086941b: jmp 0x869429 */ goto L_00869429;
L_0086941d:; BB(0x0086941d);
    /* 0086941d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00869424: jmp 0x869429 */ goto L_00869429;
L_00869426:; BB(0x00869426);
    /* 00869426: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
L_00869429:; BB(0x00869429);
    /* 00869429: mov eax, edx */ r_eax = r_edx;
    /* 0086942b: mov edx, 0x700 */ r_edx = 0x700u;
    /* 00869430: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00869432: mov ecx, 0x400 */ r_ecx = 0x400u;
    /* 00869437: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00869439: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086943a: mov edi, 0x100 */ r_edi = 0x100u;
    /* 0086943f: jg 0x869470 */ if ((!fZ&&fS==fO)) goto L_00869470;
L_00869441:; BB(0x00869441);
    /* 00869441: je 0x86946b */ if (fZ) goto L_0086946b;
L_00869443:; BB(0x00869443);
    /* 00869443: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869445: je 0x86946b */ if (fZ) goto L_0086946b;
L_00869447:; BB(0x00869447);
    /* 00869447: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869449: je 0x869462 */ if (fZ) goto L_00869462;
L_0086944b:; BB(0x0086944b);
    /* 0086944b: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869450: je 0x86949c */ if (fZ) goto L_0086949c;
L_00869452:; BB(0x00869452);
    /* 00869452: cmp eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869457: jne 0x869482 */ if (!fZ) goto L_00869482;
L_00869459:; BB(0x00869459);
    /* 00869459: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00869460: jmp 0x8694ac */ goto L_008694ac;
L_00869462:; BB(0x00869462);
    /* 00869462: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 00869469: jmp 0x8694ac */ goto L_008694ac;
L_0086946b:; BB(0x0086946b);
    /* 0086946b: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0086946e: jmp 0x8694ac */ goto L_008694ac;
L_00869470:; BB(0x00869470);
    /* 00869470: cmp eax, 0x500 */ {  u32 a = r_eax; u32 b = 0x500u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869475: je 0x8694a5 */ if (fZ) goto L_008694a5;
L_00869477:; BB(0x00869477);
    /* 00869477: cmp eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086947c: je 0x86949c */ if (fZ) goto L_0086949c;
L_0086947e:; BB(0x0086947e);
    /* 0086947e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869480: je 0x8694a5 */ if (fZ) goto L_008694a5;
L_00869482:; BB(0x00869482);
    /* 00869482: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x869487u); f_00859dd6();
    /* 00869487: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0086948d: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x869492u); f_00859ddf();
    /* 00869492: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
L_00869494:; BB(0x00869494);
    /* 00869494: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00869497: jmp 0x869605 */ goto L_00869605;
L_0086949c:; BB(0x0086949c);
    /* 0086949c: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 008694a3: jmp 0x8694ac */ goto L_008694ac;
L_008694a5:; BB(0x008694a5);
    /* 008694a5: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_008694ac:; BB(0x008694ac);
    /* 008694ac: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008694af: test edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008694b1: mov esi, 0x80 */ r_esi = 0x80u;
    /* 008694b6: je 0x8694ca */ if (fZ) goto L_008694ca;
L_008694b8:; BB(0x008694b8);
    /* 008694b8: mov ecx, dword ptr [0xae7a0c] */ r_ecx = R32((u32)(0xae7a0cu));
    /* 008694be: not ecx */ r_ecx = ~r_ecx;
    /* 008694c0: and ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008694c3: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 008694c5: js 0x8694ca */ if (fS) goto L_008694ca;
L_008694c7:; BB(0x008694c7);
    /* 008694c7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008694c9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008694ca:; BB(0x008694ca);
    /* 008694ca: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008694cc: je 0x8694e5 */ if (fZ) goto L_008694e5;
L_008694ce:; BB(0x008694ce);
    /* 008694ce: or byte ptr [ebp - 0xe], 1 */ { u32 ad = (u32)(r_ebp+0xfffffff2u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008694d2: or esi, 0x4000000 */ {  u32 a = r_esi; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008694d8: cmp dword ptr [0xae7a10], 2 */ {  u32 a = R32((u32)(0xae7a10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008694df: jne 0x8694e5 */ if (!fZ) goto L_008694e5;
L_008694e1:; BB(0x008694e1);
    /* 008694e1: or dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_008694e5:; BB(0x008694e5);
    /* 008694e5: test ah, 0x10 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008694e8: je 0x8694ec */ if (fZ) goto L_008694ec;
L_008694ea:; BB(0x008694ea);
    /* 008694ea: or esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_008694ec:; BB(0x008694ec);
    /* 008694ec: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008694ee: je 0x8694f8 */ if (fZ) goto L_008694f8;
L_008694f0:; BB(0x008694f0);
    /* 008694f0: or esi, 0x8000000 */ {  u32 a = r_esi; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008694f6: jmp 0x869502 */ goto L_00869502;
L_008694f8:; BB(0x008694f8);
    /* 008694f8: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008694fa: je 0x869502 */ if (fZ) goto L_00869502;
L_008694fc:; BB(0x008694fc);
    /* 008694fc: or esi, 0x10000000 */ {  u32 a = r_esi; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00869502:; BB(0x00869502);
    /* 00869502: call 0x863bd3 */ r_esp -= 4; W32(r_esp, 0x869507u); f_00863bd3();
    /* 00869507: mov edi, eax */ r_edi = r_eax;
    /* 00869509: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0086950c: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086950e: jne 0x86952a */ if (!fZ) goto L_0086952a;
L_00869510:; BB(0x00869510);
    /* 00869510: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x869515u); f_00859dd6();
    /* 00869515: mov dword ptr [eax], 0x18 */ W32((u32)(r_eax), 0x18u);
    /* 0086951b: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x869520u); f_00859ddf();
    /* 00869520: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00869523:; BB(0x00869523);
    /* 00869523: mov eax, ebx */ r_eax = r_ebx;
    /* 00869525: jmp 0x869605 */ goto L_00869605;
L_0086952a:; BB(0x0086952a);
    /* 0086952a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086952d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086952f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869530: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869533: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00869539: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086953c: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0086953e: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00869541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869542: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869545: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869548: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086954b: call dword ptr [0x8f82d0] */ { u32 t = R32((u32)(0x8f82d0u)); r_esp -= 4; W32(r_esp, 0x869551u); call_ind(t); }
    /* 00869551: mov esi, eax */ r_esi = r_eax;
    /* 00869553: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869555: je 0x869569 */ if (fZ) goto L_00869569;
L_00869557:; BB(0x00869557);
    /* 00869557: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869558: call dword ptr [0x8f8260] */ { u32 t = R32((u32)(0x8f8260u)); r_esp -= 4; W32(r_esp, 0x86955eu); call_ind(t); }
    /* 0086955e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869560: jne 0x869578 */ if (!fZ) goto L_00869578;
L_00869562:; BB(0x00869562);
    /* 00869562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869563: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x869569u); call_ind(t); }
L_00869569:; BB(0x00869569);
    /* 00869569: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86956fu); call_ind(t); }
    /* 0086956f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869570: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x869575u); f_00859de8();
    /* 00869575: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869576: jmp 0x869523 */ goto L_00869523;
L_00869578:; BB(0x00869578);
    /* 00869578: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086957b: jne 0x869583 */ if (!fZ) goto L_00869583;
L_0086957d:; BB(0x0086957d);
    /* 0086957d: or byte ptr [ebp - 1], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00869581: jmp 0x86958c */ goto L_0086958c;
L_00869583:; BB(0x00869583);
    /* 00869583: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869586: jne 0x86958c */ if (!fZ) goto L_0086958c;
L_00869588:; BB(0x00869588);
    /* 00869588: or byte ptr [ebp - 1], 8 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0086958c:; BB(0x0086958c);
    /* 0086958c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086958d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086958e: call 0x8639d5 */ r_esp -= 4; W32(r_esp, 0x869593u); f_008639d5();
    /* 00869593: or byte ptr [ebp - 1], 1 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00869597: mov eax, edi */ r_eax = r_edi;
    /* 00869599: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0086959c: lea ebx, [eax*4 + 0xaf0a80] */ r_ebx = (u32)(r_eax*4+0xaf0a80u);
    /* 008695a3: mov eax, edi */ r_eax = r_edi;
    /* 008695a5: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008695a8: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 008695ab: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 008695ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008695af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008695b0: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008695b2: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008695b5: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 008695b8: and byte ptr [ebp - 1], 0x48 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x48u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 008695bc: mov byte ptr [esi + ecx + 4], al */ W8((u32)(r_esi+r_ecx+0x4u), (u8)r_eax);
    /* 008695c0: jne 0x8695ee */ if (!fZ) goto L_008695ee;
L_008695c2:; BB(0x008695c2);
    /* 008695c2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 008695c4: jns 0x8695ee */ if (!fS) goto L_008695ee;
L_008695c6:; BB(0x008695c6);
    /* 008695c6: test byte ptr [ebp + 0x14], 2 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008695ca: je 0x8695ee */ if (fZ) goto L_008695ee;
L_008695cc:; BB(0x008695cc);
    /* 008695cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008695ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008695d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008695d1: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x8695d6u); f_0086485b();
    /* 008695d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008695d9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008695dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008695df: jne 0x86960a */ if (!fZ) goto L_0086960a;
L_008695e1:; BB(0x008695e1);
    /* 008695e1: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8695e6u); f_00859ddf();
    /* 008695e6: cmp dword ptr [eax], 0x83 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008695ec: jne 0x86964a */ if (!fZ) goto L_0086964a;
L_008695ee:; BB(0x008695ee);
    /* 008695ee: cmp byte ptr [ebp - 1], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffffu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008695f2: jne 0x869603 */ if (!fZ) goto L_00869603;
L_008695f4:; BB(0x008695f4);
    /* 008695f4: test byte ptr [ebp + 0x14], 8 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008695f8: je 0x869603 */ if (fZ) goto L_00869603;
L_008695fa:; BB(0x008695fa);
    /* 008695fa: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008695fc: lea eax, [esi + eax + 4] */ r_eax = (u32)(r_esi+r_eax+0x4u);
    /* 00869600: or byte ptr [eax], 0x20 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00869603:; BB(0x00869603);
    /* 00869603: mov eax, edi */ r_eax = r_edi;
L_00869605:; BB(0x00869605);
    /* 00869605: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00869606:; BB(0x00869606);
    /* 00869606: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869607: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00869608: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00869609: ret  */ FN_RET(0x0086936e); r_esp += 4; return;
L_0086960a:; BB(0x0086960a);
    /* 0086960a: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086960e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00869610: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00869613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869614: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869615: call 0x861a75 */ r_esp -= 4; W32(r_esp, 0x86961au); f_00861a75();
    /* 0086961a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086961d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086961f: jne 0x869638 */ if (!fZ) goto L_00869638;
L_00869621:; BB(0x00869621);
    /* 00869621: cmp word ptr [ebp - 0x14], 0x1a */ {  u32 a = R16((u32)(r_ebp+0xffffffecu)); u32 b = 0x1au; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00869626: jne 0x869638 */ if (!fZ) goto L_00869638;
L_00869628:; BB(0x00869628);
    /* 00869628: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086962b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086962c: call 0x86a2a4 */ r_esp -= 4; W32(r_esp, 0x869631u); f_0086a2a4();
    /* 00869631: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869634: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869635: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869636: je 0x86964a */ if (fZ) goto L_0086964a;
L_00869638:; BB(0x00869638);
    /* 00869638: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086963a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086963c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086963d: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x869642u); f_0086485b();
    /* 00869642: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869645: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869648: jne 0x8695ee */ if (!fZ) goto L_008695ee;
L_0086964a:; BB(0x0086964a);
    /* 0086964a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086964b: call 0x86203d */ r_esp -= 4; W32(r_esp, 0x869650u); f_0086203d();
    /* 00869650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869651: jmp 0x869494 */ goto L_00869494;
}

