#include "protos.h"

void f_0082a2cb(void)
{
    FN_ENTER(0x0082a2cb);
    goto L_0082a2cb;
L_00829ea0:; BB(0x00829ea0);
    /* 00829ea0: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00829ea3: mov edx, 0xffffffef */ r_edx = 0xffffffefu;
    /* 00829ea8: mov esi, eax */ r_esi = r_eax;
    /* 00829eaa: and esi, 0x800000 */ {  u32 a = r_esi; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00829eb0: je 0x829eb5 */ if (fZ) goto L_00829eb5;
L_00829eb2:; BB(0x00829eb2);
    /* 00829eb2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
L_00829eb5:; BB(0x00829eb5);
    /* 00829eb5: test eax, 0x48000000 */ {  u32 a = r_eax; u32 b = 0x48000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829eba: je 0x82a08d */ if (fZ) goto L_0082a08d;
L_00829ec0:; BB(0x00829ec0);
    /* 00829ec0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00829ec2: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00829ec8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829eca: je 0x829edc */ if (fZ) goto L_00829edc;
L_00829ecc:; BB(0x00829ecc);
    /* 00829ecc: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00829ed0: call 0x82a3e0 */ r_esp -= 4; W32(r_esp, 0x829ed5u); f_0082a3e0();
    /* 00829ed5: mov esi, eax */ r_esi = r_eax;
    /* 00829ed7: jmp 0x82a2f2 */ goto L_0082a2f2;
L_00829edc:; BB(0x00829edc);
    /* 00829edc: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00829ede: lea eax, [esp + 0x168] */ r_eax = (u32)(r_esp+0x168u);
    /* 00829ee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00829ee6: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x829eebu); f_0082ac20();
    /* 00829eeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829eec: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00829eef: mov dword ptr [esp + 0x168], eax */ W32((u32)(r_esp+0x168u), r_eax);
    /* 00829ef6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00829ef8: mov dword ptr [esp + 0x16c], edx */ W32((u32)(r_esp+0x16cu), r_edx);
    /* 00829eff: mov dword ptr [esp + 0x170], edx */ W32((u32)(r_esp+0x170u), r_edx);
    /* 00829f06: mov edx, dword ptr [0xacb9c8] */ r_edx = R32((u32)(0xacb9c8u));
    /* 00829f0c: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 00829f0f: mov ecx, edx */ r_ecx = r_edx;
    /* 00829f11: mov dword ptr [esp + 0x174], esi */ W32((u32)(r_esp+0x174u), r_esi);
    /* 00829f18: mov esi, dword ptr [0xacb9cc] */ r_esi = R32((u32)(0xacb9ccu));
    /* 00829f1e: movzx eax, word ptr [edi + 0x14] */ r_eax = (u32)R16((u32)(r_edi+0x14u));
    /* 00829f22: mov dword ptr [esp + 0x178], eax */ W32((u32)(r_esp+0x178u), r_eax);
    /* 00829f29: movzx eax, word ptr [edi + 0x16] */ r_eax = (u32)R16((u32)(r_edi+0x16u));
    /* 00829f2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f2f: mov dword ptr [esp + 0x17c], eax */ W32((u32)(r_esp+0x17cu), r_eax);
    /* 00829f36: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00829f39: mov dword ptr [esp + 0x180], eax */ W32((u32)(r_esp+0x180u), r_eax);
    /* 00829f40: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00829f43: mov dword ptr [esp + 0x184], eax */ W32((u32)(r_esp+0x184u), r_eax);
    /* 00829f4a: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00829f4d: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00829f51: je 0x829f72 */ if (fZ) goto L_00829f72;
L_00829f53:; BB(0x00829f53);
    /* 00829f53: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00829f57:; BB(0x00829f57);
    /* 00829f57: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 00829f5a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f5c: je 0x829f66 */ if (fZ) goto L_00829f66;
L_00829f5e:; BB(0x00829f5e);
    /* 00829f5e: cmp eax, dword ptr [ebx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f60: je 0x82a33b */ if (fZ) goto L_0082a33b;
L_00829f66:; BB(0x00829f66);
    /* 00829f66: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00829f69: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00829f6c: jne 0x829f57 */ if (!fZ) goto L_00829f57;
L_00829f6e:; BB(0x00829f6e);
    /* 00829f6e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00829f72:; BB(0x00829f72);
    /* 00829f72: mov ecx, dword ptr [0xacb9c4] */ r_ecx = R32((u32)(0xacb9c4u));
    /* 00829f78: mov eax, dword ptr [0xacb9c0] */ r_eax = R32((u32)(0xacb9c0u));
    /* 00829f7d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00829f7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f81: je 0x829fbd */ if (fZ) goto L_00829fbd;
L_00829f83:; BB(0x00829f83);
    /* 00829f83: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00829f87:; BB(0x00829f87);
    /* 00829f87: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00829f89: cmp ebx, -0x11 */ {  u32 a = r_ebx; u32 b = 0xffffffefu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f8c: je 0x82a330 */ if (fZ) goto L_0082a330;
L_00829f92:; BB(0x00829f92);
    /* 00829f92: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829f95: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00829f98: jne 0x829f87 */ if (!fZ) goto L_00829f87;
L_00829f9a:; BB(0x00829f9a);
    /* 00829f9a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00829f9e:; BB(0x00829f9e);
    /* 00829f9e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fa0: je 0x829fbd */ if (fZ) goto L_00829fbd;
L_00829fa2:; BB(0x00829fa2);
    /* 00829fa2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fa4: je 0x829fbd */ if (fZ) goto L_00829fbd;
L_00829fa6:; BB(0x00829fa6);
    /* 00829fa6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
L_00829faa:; BB(0x00829faa);
    /* 00829faa: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00829fad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829faf: je 0x82a320 */ if (fZ) goto L_0082a320;
L_00829fb5:; BB(0x00829fb5);
    /* 00829fb5: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829fb8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00829fbb: jne 0x829faa */ if (!fZ) goto L_00829faa;
L_00829fbd:; BB(0x00829fbd);
    /* 00829fbd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00829fbf:; BB(0x00829fbf);
    /* 00829fbf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fc1: je 0x82a2f2 */ if (fZ) goto L_0082a2f2;
L_00829fc7:; BB(0x00829fc7);
    /* 00829fc7: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00829fca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fcc: jne 0x82a07b */ if (!fZ) goto L_0082a07b;
L_00829fd2:; BB(0x00829fd2);
    /* 00829fd2: mov eax, dword ptr [esp + 0x168] */ r_eax = R32((u32)(r_esp+0x168u));
    /* 00829fd9: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00829fdc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00829fde: mov eax, dword ptr [esp + 0x16c] */ r_eax = R32((u32)(r_esp+0x16cu));
    /* 00829fe5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00829fe8: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00829feb: mov eax, dword ptr [esp + 0x170] */ r_eax = R32((u32)(r_esp+0x170u));
    /* 00829ff2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00829ff5: mov eax, dword ptr [esp + 0x174] */ r_eax = R32((u32)(r_esp+0x174u));
    /* 00829ffc: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00829fff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a001: mov eax, dword ptr [esp + 0x178] */ r_eax = R32((u32)(r_esp+0x178u));
    /* 0082a008: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0082a00b: mov eax, dword ptr [esp + 0x17c] */ r_eax = R32((u32)(r_esp+0x17cu));
    /* 0082a012: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0082a015: mov eax, dword ptr [esp + 0x180] */ r_eax = R32((u32)(r_esp+0x180u));
    /* 0082a01c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0082a01f: mov eax, dword ptr [esp + 0x184] */ r_eax = R32((u32)(r_esp+0x184u));
    /* 0082a026: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0082a029: mov eax, dword ptr [esp + 0x188] */ r_eax = R32((u32)(r_esp+0x188u));
    /* 0082a030: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a033: mov eax, dword ptr [esp + 0x18c] */ r_eax = R32((u32)(r_esp+0x18cu));
    /* 0082a03a: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0082a03d: mov eax, dword ptr [esp + 0x190] */ r_eax = R32((u32)(r_esp+0x190u));
    /* 0082a044: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0082a047: mov eax, dword ptr [esp + 0x194] */ r_eax = R32((u32)(r_esp+0x194u));
    /* 0082a04e: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0082a051: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082a055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a056: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082a059: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082a05b: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a05e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a05f: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a062: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a065: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a068: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a06b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082a06d: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a072u); f_0083913c();
    /* 0082a072: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a075: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a078: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
L_0082a07b:; BB(0x0082a07b);
    /* 0082a07b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a07e: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0082a081: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a084: add dword ptr [edx + 0x2c], 1 */ { u32 ad = (u32)(r_edx+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a088: jmp 0x82a2f2 */ goto L_0082a2f2;
L_0082a08d:; BB(0x0082a08d);
    /* 0082a08d: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0082a08f: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0082a093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082a095: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0082a097: mov ecx, edi */ r_ecx = r_edi;
    /* 0082a099: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a09b: je 0x82a0a9 */ if (fZ) goto L_0082a0a9;
L_0082a09d:; BB(0x0082a09d);
    /* 0082a09d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a0a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082a0a3: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0082a0a5: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a0a7: jne 0x82a09d */ if (!fZ) goto L_0082a09d;
L_0082a0a9:; BB(0x0082a0a9);
    /* 0082a0a9: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0082a0ad: lea esi, [esp + 0x30] */ r_esi = (u32)(r_esp+0x30u);
    /* 0082a0b1: lea edi, [eax + edx - 4] */ r_edi = (u32)(r_eax+r_edx+0xfffffffcu);
L_0082a0b5:; BB(0x0082a0b5);
    /* 0082a0b5: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a0b7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a0ba: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a0bc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a0bf: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a0c1: jne 0x82a0b5 */ if (!fZ) goto L_0082a0b5;
L_0082a0c3:; BB(0x0082a0c3);
    /* 0082a0c3: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0082a0c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a0c8: call 0x8cab7c */ r_esp -= 4; W32(r_esp, 0x82a0cdu); f_008cab7c();
    /* 0082a0cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082a0ce: movsx eax, byte ptr [esp + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x30u));
    /* 0082a0d3: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a0d6: je 0x82a370 */ if (fZ) goto L_0082a370;
L_0082a0dc:; BB(0x0082a0dc);
    /* 0082a0dc: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0082a0e0: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
L_0082a0e4:; BB(0x0082a0e4);
    /* 0082a0e4: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a0e6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a0e9: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a0eb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a0ee: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a0f0: jne 0x82a0e4 */ if (!fZ) goto L_0082a0e4;
L_0082a0f2:; BB(0x0082a0f2);
    /* 0082a0f2: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 0082a0f6: mov edx, 0x98a148 */ r_edx = 0x98a148u;
    /* 0082a0fb: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0082a100: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082a102: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0082a104: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0082a107:; BB(0x0082a107);
    /* 0082a107: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0082a109: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a10c: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0082a10e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a111: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a113: jne 0x82a107 */ if (!fZ) goto L_0082a107;
L_0082a115:; BB(0x0082a115);
    /* 0082a115: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 0082a119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a11a: call 0x844a30 */ r_esp -= 4; W32(r_esp, 0x82a11fu); f_00844a30();
    /* 0082a11f: mov edi, eax */ r_edi = r_eax;
    /* 0082a121: lea edx, [esp + 0x13c] */ r_edx = (u32)(r_esp+0x13cu);
    /* 0082a128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a129: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x82a12eu); f_0082ac20();
    /* 0082a12e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082a131: mov ecx, dword ptr [0xacb9cc] */ r_ecx = R32((u32)(0xacb9ccu));
    /* 0082a137: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a13a: mov dword ptr [esp + 0x138], edx */ W32((u32)(r_esp+0x138u), r_edx);
    /* 0082a141: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0082a143: mov dword ptr [esp + 0x13c], esi */ W32((u32)(r_esp+0x13cu), r_esi);
    /* 0082a14a: mov dword ptr [esp + 0x140], esi */ W32((u32)(r_esp+0x140u), r_esi);
    /* 0082a151: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a154: mov esi, ecx */ r_esi = r_ecx;
    /* 0082a156: mov dword ptr [esp + 0x144], edx */ W32((u32)(r_esp+0x144u), r_edx);
    /* 0082a15d: movzx edx, word ptr [edi + 0x14] */ r_edx = (u32)R16((u32)(r_edi+0x14u));
    /* 0082a161: mov dword ptr [esp + 0x148], edx */ W32((u32)(r_esp+0x148u), r_edx);
    /* 0082a168: movzx edx, word ptr [edi + 0x16] */ r_edx = (u32)R16((u32)(r_edi+0x16u));
    /* 0082a16c: mov dword ptr [esp + 0x14c], edx */ W32((u32)(r_esp+0x14cu), r_edx);
    /* 0082a173: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0082a176: mov dword ptr [esp + 0x150], edx */ W32((u32)(r_esp+0x150u), r_edx);
    /* 0082a17d: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0082a180: mov dword ptr [esp + 0x154], edx */ W32((u32)(r_esp+0x154u), r_edx);
    /* 0082a187: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a18a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0082a18e: mov edx, dword ptr [0xacb9c8] */ r_edx = R32((u32)(0xacb9c8u));
    /* 0082a194: mov eax, edx */ r_eax = r_edx;
    /* 0082a196: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a198: je 0x82a1c5 */ if (fZ) goto L_0082a1c5;
L_0082a19a:; BB(0x0082a19a);
    /* 0082a19a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0082a19e: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0082a1a2: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0082a1a6:; BB(0x0082a1a6);
    /* 0082a1a6: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0082a1a9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1ab: je 0x82a1b5 */ if (fZ) goto L_0082a1b5;
L_0082a1ad:; BB(0x0082a1ad);
    /* 0082a1ad: cmp ebp, dword ptr [ebx] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1af: je 0x82a363 */ if (fZ) goto L_0082a363;
L_0082a1b5:; BB(0x0082a1b5);
    /* 0082a1b5: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a1b8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082a1bb: jne 0x82a1a6 */ if (!fZ) goto L_0082a1a6;
L_0082a1bd:; BB(0x0082a1bd);
    /* 0082a1bd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a1c1: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0082a1c5:; BB(0x0082a1c5);
    /* 0082a1c5: mov eax, dword ptr [0xacb9c4] */ r_eax = R32((u32)(0xacb9c4u));
    /* 0082a1ca: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0082a1ce: mov eax, dword ptr [0xacb9c0] */ r_eax = R32((u32)(0xacb9c0u));
    /* 0082a1d3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0082a1d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1d7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0082a1db: je 0x82a220 */ if (fZ) goto L_0082a220;
L_0082a1dd:; BB(0x0082a1dd);
    /* 0082a1dd: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0082a1e1: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0082a1e5: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0082a1e9:; BB(0x0082a1e9);
    /* 0082a1e9: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 0082a1ec: cmp ebx, -0x11 */ {  u32 a = r_ebx; u32 b = 0xffffffefu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1ef: je 0x82a34e */ if (fZ) goto L_0082a34e;
L_0082a1f5:; BB(0x0082a1f5);
    /* 0082a1f5: add ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082a1f8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082a1fb: jne 0x82a1e9 */ if (!fZ) goto L_0082a1e9;
L_0082a1fd:; BB(0x0082a1fd);
    /* 0082a1fd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a201: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0082a205:; BB(0x0082a205);
    /* 0082a205: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a207: je 0x82a220 */ if (fZ) goto L_0082a220;
L_0082a209:; BB(0x0082a209);
    /* 0082a209: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a20b: je 0x82a220 */ if (fZ) goto L_0082a220;
L_0082a20d:; BB(0x0082a20d);
    /* 0082a20d: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0082a210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a212: je 0x82a344 */ if (fZ) goto L_0082a344;
L_0082a218:; BB(0x0082a218);
    /* 0082a218: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a21b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0082a21e: jne 0x82a20d */ if (!fZ) goto L_0082a20d;
L_0082a220:; BB(0x0082a220);
    /* 0082a220: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0082a222:; BB(0x0082a222);
    /* 0082a222: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a224: je 0x82a2eb */ if (fZ) goto L_0082a2eb;
L_0082a22a:; BB(0x0082a22a);
    /* 0082a22a: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0082a22d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a22f: jne 0x82a2de */ if (!fZ) goto L_0082a2de;
L_0082a235:; BB(0x0082a235);
    /* 0082a235: mov eax, dword ptr [esp + 0x138] */ r_eax = R32((u32)(r_esp+0x138u));
    /* 0082a23c: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a23f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0082a241: mov eax, dword ptr [esp + 0x13c] */ r_eax = R32((u32)(r_esp+0x13cu));
    /* 0082a248: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0082a24b: lea ecx, [edi + 0x40] */ r_ecx = (u32)(r_edi+0x40u);
    /* 0082a24e: mov eax, dword ptr [esp + 0x140] */ r_eax = R32((u32)(r_esp+0x140u));
    /* 0082a255: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0082a258: mov eax, dword ptr [esp + 0x144] */ r_eax = R32((u32)(r_esp+0x144u));
    /* 0082a25f: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0082a262: mov eax, dword ptr [esp + 0x148] */ r_eax = R32((u32)(r_esp+0x148u));
    /* 0082a269: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0082a26c: mov eax, dword ptr [esp + 0x14c] */ r_eax = R32((u32)(r_esp+0x14cu));
    /* 0082a273: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0082a276: mov eax, dword ptr [esp + 0x150] */ r_eax = R32((u32)(r_esp+0x150u));
    /* 0082a27d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0082a280: mov eax, dword ptr [esp + 0x154] */ r_eax = R32((u32)(r_esp+0x154u));
    /* 0082a287: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0082a28a: mov eax, dword ptr [esp + 0x158] */ r_eax = R32((u32)(r_esp+0x158u));
    /* 0082a291: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a294: mov eax, dword ptr [esp + 0x15c] */ r_eax = R32((u32)(r_esp+0x15cu));
    /* 0082a29b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0082a29e: mov eax, dword ptr [esp + 0x160] */ r_eax = R32((u32)(r_esp+0x160u));
    /* 0082a2a5: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0082a2a8: mov eax, dword ptr [esp + 0x164] */ r_eax = R32((u32)(r_esp+0x164u));
    /* 0082a2af: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0082a2b2: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a2b5: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082a2b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2ba: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2be: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a2c3: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2c6: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2c9: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
L_0082a2cb:; BB(0x0082a2cb);
    /* 0082a2cb: sbb al, 0x6a */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x6au; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0082a2cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2cd: dec dword ptr [ebx - 0x119817ee] */ { u32 ad = (u32)(r_ebx+0xee67e812u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a2ce: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0082a2d0: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a2d5u); f_0083913c();
    /* 0082a2d3: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0082a2d5: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a2d8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a2db: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
L_0082a2de:; BB(0x0082a2de);
    /* 0082a2de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a2e1: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0082a2e4: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a2e7: add dword ptr [edx + 0x2c], 1 */ { u32 ad = (u32)(r_edx+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0082a2eb:; BB(0x0082a2eb);
    /* 0082a2eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2ec: call 0x844ac4 */ r_esp -= 4; W32(r_esp, 0x82a2f1u); f_00844ac4();
    /* 0082a2f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082a2f2:; BB(0x0082a2f2);
    /* 0082a2f2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0082a2f6: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 0082a2f9: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082a2fc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082a2ff: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082a301: jb 0x829ea0 */ if (fC) goto L_00829ea0;
L_0082a307:; BB(0x0082a307);
    /* 0082a307: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0082a30b: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a30f: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0082a313: mov eax, 1 */ r_eax = 0x1u;
    /* 0082a318: add esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a31e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a31f: ret  */ FN_RET(0x0082a2cb); r_esp += 4; return;
L_0082a320:; BB(0x0082a320);
    /* 0082a320: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0082a324: mov eax, ecx */ r_eax = r_ecx;
    /* 0082a326: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 0082a329: mov esi, eax */ r_esi = r_eax;
    /* 0082a32b: jmp 0x829fbf */ goto L_00829fbf;
L_0082a330:; BB(0x0082a330);
    /* 0082a330: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a334: mov esi, ecx */ r_esi = r_ecx;
    /* 0082a336: jmp 0x829f9e */ goto L_00829f9e;
L_0082a33b:; BB(0x0082a33b);
    /* 0082a33b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a33f: jmp 0x829fbf */ goto L_00829fbf;
L_0082a344:; BB(0x0082a344);
    /* 0082a344: mov dword ptr [ecx + 0xc], esi */ W32((u32)(r_ecx+0xcu), r_esi);
    /* 0082a347: mov esi, ecx */ r_esi = r_ecx;
    /* 0082a349: jmp 0x82a222 */ goto L_0082a222;
L_0082a34e:; BB(0x0082a34e);
    /* 0082a34e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a352: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0082a356: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a35a: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0082a35e: jmp 0x82a205 */ goto L_0082a205;
L_0082a363:; BB(0x0082a363);
    /* 0082a363: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a367: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a36b: jmp 0x82a222 */ goto L_0082a222;
L_0082a370:; BB(0x0082a370);
    /* 0082a370: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0082a374: push 0x98a148 */ { u32 v = 0x98a148u; r_esp -= 4; W32(r_esp, v); }
    /* 0082a379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a37a: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x82a37fu); f_008599e3();
    /* 0082a37f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082a382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a384: je 0x82a3c4 */ if (fZ) goto L_0082a3c4;
L_0082a386:; BB(0x0082a386);
    /* 0082a386: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0082a38a: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
L_0082a38e:; BB(0x0082a38e);
    /* 0082a38e: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a390: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a393: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a395: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a398: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a39a: jne 0x82a38e */ if (!fZ) goto L_0082a38e;
L_0082a39c:; BB(0x0082a39c);
    /* 0082a39c: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 0082a3a0: mov edx, 0x98a148 */ r_edx = 0x98a148u;
    /* 0082a3a5: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0082a3aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082a3ac: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0082a3ae: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0082a3b1:; BB(0x0082a3b1);
    /* 0082a3b1: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0082a3b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a3b6: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0082a3b8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a3bb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a3bd: jne 0x82a3b1 */ if (!fZ) goto L_0082a3b1;
L_0082a3bf:; BB(0x0082a3bf);
    /* 0082a3bf: jmp 0x82a115 */ goto L_0082a115;
L_0082a3c4:; BB(0x0082a3c4);
    /* 0082a3c4: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0082a3c8: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
L_0082a3cc:; BB(0x0082a3cc);
    /* 0082a3cc: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a3ce: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a3d1: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a3d3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a3d6: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a3d8: jne 0x82a3cc */ if (!fZ) goto L_0082a3cc;
L_0082a3da:; BB(0x0082a3da);
    /* 0082a3da: jmp 0x82a115 */ goto L_0082a115;
}

void f_0082a3e0(void) /* sub_82A3E0 */
{
    FN_ENTER(0x0082a3e0);
    /* 0082a3e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a3e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a3e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a3e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a3e4: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082a3e7: mov esi, ecx */ r_esi = r_ecx;
    /* 0082a3e9: mov ebx, edx */ r_ebx = r_edx;
    /* 0082a3eb: mov ebp, eax */ r_ebp = r_eax;
    /* 0082a3ed: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 0082a3f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a3f2: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x82a3f7u); f_0082ac20();
    /* 0082a3f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082a3f8: mov eax, dword ptr [0xacb9cc] */ r_eax = R32((u32)(0xacb9ccu));
    /* 0082a3fd: mov ecx, dword ptr [0xacb9c8] */ r_ecx = R32((u32)(0xacb9c8u));
    /* 0082a403: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 0082a406: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0082a40a: mov edx, ecx */ r_edx = r_ecx;
    /* 0082a40c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a40e: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0082a412: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0082a415: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0082a419: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0082a41c: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0082a420: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0082a423: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0082a427: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0082a42a: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0082a42e: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 0082a431: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0082a435: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 0082a438: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0082a43c: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
    /* 0082a43f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0082a443: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 0082a446: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0082a44a: mov edi, dword ptr [ebp + 0x28] */ r_edi = R32((u32)(r_ebp+0x28u));
    /* 0082a44d: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0082a451: mov edi, eax */ r_edi = r_eax;
    /* 0082a453: je 0x82a472 */ if (fZ) goto L_0082a472;
L_0082a455:; BB(0x0082a455);
    /* 0082a455: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0082a458:; BB(0x0082a458);
    /* 0082a458: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 0082a45b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a45d: je 0x82a467 */ if (fZ) goto L_0082a467;
L_0082a45f:; BB(0x0082a45f);
    /* 0082a45f: cmp ebx, dword ptr [esi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a461: je 0x82a7ce */ if (fZ) goto L_0082a7ce;
L_0082a467:; BB(0x0082a467);
    /* 0082a467: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a46a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0082a46d: jne 0x82a458 */ if (!fZ) goto L_0082a458;
L_0082a46f:; BB(0x0082a46f);
    /* 0082a46f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0082a472:; BB(0x0082a472);
    /* 0082a472: mov edi, dword ptr [0xacb9c4] */ r_edi = R32((u32)(0xacb9c4u));
    /* 0082a478: mov ebx, dword ptr [0xacb9c0] */ r_ebx = R32((u32)(0xacb9c0u));
    /* 0082a47e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082a480: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a482: je 0x82a4b8 */ if (fZ) goto L_0082a4b8;
L_0082a484:; BB(0x0082a484);
    /* 0082a484: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_0082a487:; BB(0x0082a487);
    /* 0082a487: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0082a489: cmp esi, -0x11 */ {  u32 a = r_esi; u32 b = 0xffffffefu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a48c: je 0x82a7c4 */ if (fZ) goto L_0082a7c4;
L_0082a492:; BB(0x0082a492);
    /* 0082a492: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a495: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0082a498: jne 0x82a487 */ if (!fZ) goto L_0082a487;
L_0082a49a:; BB(0x0082a49a);
    /* 0082a49a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0082a49d:; BB(0x0082a49d);
    /* 0082a49d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a49f: je 0x82a4b8 */ if (fZ) goto L_0082a4b8;
L_0082a4a1:; BB(0x0082a4a1);
    /* 0082a4a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a4a3: je 0x82a4b8 */ if (fZ) goto L_0082a4b8;
L_0082a4a5:; BB(0x0082a4a5);
    /* 0082a4a5: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 0082a4a8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a4aa: je 0x82a7ba */ if (fZ) goto L_0082a7ba;
L_0082a4b0:; BB(0x0082a4b0);
    /* 0082a4b0: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082a4b3: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0082a4b6: jne 0x82a4a5 */ if (!fZ) goto L_0082a4a5;
L_0082a4b8:; BB(0x0082a4b8);
    /* 0082a4b8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0082a4ba:; BB(0x0082a4ba);
    /* 0082a4ba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a4bc: je 0x82a797 */ if (fZ) goto L_0082a797;
L_0082a4c2:; BB(0x0082a4c2);
    /* 0082a4c2: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a4c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a4c7: jne 0x82a78a */ if (!fZ) goto L_0082a78a;
L_0082a4cd:; BB(0x0082a4cd);
    /* 0082a4cd: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0082a4d1: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a4d4: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 0082a4d6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0082a4da: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0082a4dd: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0082a4e1: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 0082a4e4: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0082a4e8: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 0082a4eb: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0082a4ef: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 0082a4f2: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0082a4f6: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 0082a4f9: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0082a4fd: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 0082a500: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0082a504: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 0082a507: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0082a50b: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 0082a50e: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0082a512: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 0082a515: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0082a519: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0082a51c: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0082a520: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 0082a523: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a526: movzx ebx, word ptr [edx + 6] */ r_ebx = (u32)R16((u32)(r_edx+0x6u));
    /* 0082a52a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0082a52d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0082a530: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0082a534: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0082a53a: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0082a53e: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0082a541: cmp ebx, 0x500 */ {  u32 a = r_ebx; u32 b = 0x500u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a547: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0082a54b: je 0x82a7a6 */ if (fZ) goto L_0082a7a6;
L_0082a551:; BB(0x0082a551);
    /* 0082a551: cmp ebx, 0x600 */ {  u32 a = r_ebx; u32 b = 0x600u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a557: je 0x82a7a6 */ if (fZ) goto L_0082a7a6;
L_0082a55d:; BB(0x0082a55d);
    /* 0082a55d: cmp ebx, 0x700 */ {  u32 a = r_ebx; u32 b = 0x700u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a563: je 0x82a7a1 */ if (fZ) goto L_0082a7a1;
L_0082a569:; BB(0x0082a569);
    /* 0082a569: cmp ebx, 0x800 */ {  u32 a = r_ebx; u32 b = 0x800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a56f: je 0x82a750 */ if (fZ) goto L_0082a750;
L_0082a575:; BB(0x0082a575);
    /* 0082a575: cmp ebx, 0x900 */ {  u32 a = r_ebx; u32 b = 0x900u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a57b: je 0x82a589 */ if (fZ) goto L_0082a589;
L_0082a57d:; BB(0x0082a57d);
    /* 0082a57d: cmp ebx, 0xb00 */ {  u32 a = r_ebx; u32 b = 0xb00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a583: jne 0x82a677 */ if (!fZ) goto L_0082a677;
L_0082a589:; BB(0x0082a589);
    /* 0082a589: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a58d: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0082a590: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082a593: ja 0x82a66c */ if ((!fC&&!fZ)) goto L_0082a66c;
L_0082a599:; BB(0x0082a599);
    /* 0082a599: mov ebx, dword ptr [ebx*4 + 0x98a100] */ r_ebx = R32((u32)(r_ebx*4+0x98a100u));
    /* 0082a5a0: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_0082a66c:; BB(0x0082a66c);
    /* 0082a66c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0082a66f: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a672: jmp 0x82a75f */ goto L_0082a75f;
L_0082a677:; BB(0x0082a677);
    /* 0082a677: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a67b: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0082a67e: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0082a681: ja 0x82a748 */ if ((!fC&&!fZ)) goto L_0082a748;
L_0082a687:; BB(0x0082a687);
    /* 0082a687: mov ebx, dword ptr [ebx*4 + 0x98a124] */ r_ebx = R32((u32)(r_ebx*4+0x98a124u));
    /* 0082a68e: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_0082a748:; BB(0x0082a748);
    /* 0082a748: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0082a74b: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a74e: jmp 0x82a75f */ goto L_0082a75f;
L_0082a750:; BB(0x0082a750);
    /* 0082a750: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
L_0082a753:; BB(0x0082a753);
    /* 0082a753: mov dword ptr [edx + 0xc], 5 */ W32((u32)(r_edx+0xcu), 0x5u);
    /* 0082a75a: mov eax, 5 */ r_eax = 0x5u;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
L_0082a78a:; BB(0x0082a78a);
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0082a797:; BB(0x0082a797);
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a3e0); r_esp += 4; return;
L_0082a7a1:; BB(0x0082a7a1);
    /* 0082a7a1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a7a4: jmp 0x82a753 */ goto L_0082a753;
L_0082a7a6:; BB(0x0082a7a6);
    /* 0082a7a6: mov dword ptr [edx + 0xc], 5 */ W32((u32)(r_edx+0xcu), 0x5u);
    /* 0082a7ad: mov eax, 5 */ r_eax = 0x5u;
    /* 0082a7b2: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0082a7b5: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a7b8: jmp 0x82a75f */ goto L_0082a75f;
L_0082a7ba:; BB(0x0082a7ba);
    /* 0082a7ba: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0082a7bd: mov edi, eax */ r_edi = r_eax;
    /* 0082a7bf: jmp 0x82a4ba */ goto L_0082a4ba;
L_0082a7c4:; BB(0x0082a7c4);
    /* 0082a7c4: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0082a7c7: mov edx, edi */ r_edx = r_edi;
    /* 0082a7c9: jmp 0x82a49d */ goto L_0082a49d;
L_0082a7ce:; BB(0x0082a7ce);
    /* 0082a7ce: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0082a7d1: jmp 0x82a4ba */ goto L_0082a4ba;
}

void f_0082a5a2(void)
{
    FN_ENTER(0x0082a5a2);
    /* 0082a5a2: mov dword ptr [edx + 0xc], 0x13 */ W32((u32)(r_edx+0xcu), 0x13u);
    /* 0082a5a9: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0082a5ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a5b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a5b2: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a5b5: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a5a2); r_esp += 4; return;
}

void f_0082a5ba(void)
{
    FN_ENTER(0x0082a5ba);
    /* 0082a5ba: mov dword ptr [edx + 0xc], 0x11 */ W32((u32)(r_edx+0xcu), 0x11u);
    /* 0082a5c1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a5c4: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0082a5c9: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a5ba); r_esp += 4; return;
}

void f_0082a5ce(void)
{
    FN_ENTER(0x0082a5ce);
    /* 0082a5ce: mov dword ptr [edx + 0xc], 0xb */ W32((u32)(r_edx+0xcu), 0xbu);
    /* 0082a5d5: mov eax, 0xb */ r_eax = 0xbu;
    /* 0082a5da: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a5dc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a5de: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a5e1: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a5ce); r_esp += 4; return;
}

void f_0082a5e6(void)
{
    FN_ENTER(0x0082a5e6);
    /* 0082a5e6: mov dword ptr [edx + 0xc], 0x12 */ W32((u32)(r_edx+0xcu), 0x12u);
    /* 0082a5ed: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0082a5f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a5f4: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a5f7: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a5e6); r_esp += 4; return;
}

void f_0082a5fc(void)
{
    FN_ENTER(0x0082a5fc);
    /* 0082a5fc: mov dword ptr [edx + 0xc], 0x10 */ W32((u32)(r_edx+0xcu), 0x10u);
    /* 0082a603: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0082a608: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a60a: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a60d: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a5fc); r_esp += 4; return;
}

void f_0082a612(void)
{
    FN_ENTER(0x0082a612);
    /* 0082a612: mov dword ptr [edx + 0xc], 0xf */ W32((u32)(r_edx+0xcu), 0xfu);
    /* 0082a619: mov eax, 0xf */ r_eax = 0xfu;
    /* 0082a61e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a620: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a622: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a625: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a612); r_esp += 4; return;
}

void f_0082a62a(void)
{
    FN_ENTER(0x0082a62a);
    /* 0082a62a: mov dword ptr [edx + 0xc], 0xe */ W32((u32)(r_edx+0xcu), 0xeu);
    /* 0082a631: mov eax, 0xe */ r_eax = 0xeu;
    /* 0082a636: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a638: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a63b: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a62a); r_esp += 4; return;
}

void f_0082a640(void)
{
    FN_ENTER(0x0082a640);
    /* 0082a640: mov dword ptr [edx + 0xc], 0xc */ W32((u32)(r_edx+0xcu), 0xcu);
    /* 0082a647: mov eax, 0xc */ r_eax = 0xcu;
    /* 0082a64c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a64e: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a651: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a640); r_esp += 4; return;
}

void f_0082a656(void)
{
    FN_ENTER(0x0082a656);
    /* 0082a656: mov dword ptr [edx + 0xc], 0xd */ W32((u32)(r_edx+0xcu), 0xdu);
    /* 0082a65d: mov eax, 0xd */ r_eax = 0xdu;
    /* 0082a662: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a664: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a667: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a656); r_esp += 4; return;
}

void f_0082a690(void)
{
    FN_ENTER(0x0082a690);
    /* 0082a690: mov dword ptr [edx + 0xc], 0x13 */ W32((u32)(r_edx+0xcu), 0x13u);
    /* 0082a697: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0082a69c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a69e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a6a0: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a6a3: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a690); r_esp += 4; return;
}

void f_0082a6a8(void)
{
    FN_ENTER(0x0082a6a8);
    /* 0082a6a8: mov dword ptr [edx + 0xc], 0x11 */ W32((u32)(r_edx+0xcu), 0x11u);
    /* 0082a6af: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a6b2: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0082a6b7: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a6a8); r_esp += 4; return;
}

void f_0082a6bc(void)
{
    FN_ENTER(0x0082a6bc);
    /* 0082a6bc: mov dword ptr [edx + 0xc], 1 */ W32((u32)(r_edx+0xcu), 0x1u);
    /* 0082a6c3: mov eax, 1 */ r_eax = 0x1u;
    /* 0082a6c8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a6ca: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a6cc: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a6cf: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a6bc); r_esp += 4; return;
}

void f_0082a6d4(void)
{
    FN_ENTER(0x0082a6d4);
    /* 0082a6d4: mov dword ptr [edx + 0xc], 0x12 */ W32((u32)(r_edx+0xcu), 0x12u);
    /* 0082a6db: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0082a6e0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a6e2: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a6e5: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a6d4); r_esp += 4; return;
}

void f_0082a6e7(void)
{
    FN_ENTER(0x0082a6e7);
    /* 0082a6e7: mov dword ptr [edx + 0xc], 0x10 */ W32((u32)(r_edx+0xcu), 0x10u);
    /* 0082a6ee: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0082a6f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a6f5: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a6f8: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a6e7); r_esp += 4; return;
}

void f_0082a6fa(void)
{
    FN_ENTER(0x0082a6fa);
    /* 0082a6fa: mov dword ptr [edx + 0xc], 0xf */ W32((u32)(r_edx+0xcu), 0xfu);
    /* 0082a701: mov eax, 0xf */ r_eax = 0xfu;
    /* 0082a706: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a708: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a70a: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a70d: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a6fa); r_esp += 4; return;
}

void f_0082a70f(void)
{
    FN_ENTER(0x0082a70f);
    /* 0082a70f: mov dword ptr [edx + 0xc], 4 */ W32((u32)(r_edx+0xcu), 0x4u);
    /* 0082a716: mov eax, 4 */ r_eax = 0x4u;
    /* 0082a71b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a71d: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a720: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a70f); r_esp += 4; return;
}

void f_0082a722(void)
{
    FN_ENTER(0x0082a722);
    /* 0082a722: mov dword ptr [edx + 0xc], 2 */ W32((u32)(r_edx+0xcu), 0x2u);
    /* 0082a729: mov eax, 2 */ r_eax = 0x2u;
    /* 0082a72e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a730: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a733: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a722); r_esp += 4; return;
}

void f_0082a735(void)
{
    FN_ENTER(0x0082a735);
    /* 0082a735: mov dword ptr [edx + 0xc], 3 */ W32((u32)(r_edx+0xcu), 0x3u);
    /* 0082a73c: mov eax, 3 */ r_eax = 0x3u;
    /* 0082a741: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a743: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0082a746: jmp 0x82a75f */ goto L_0082a75f;
L_0082a75f:; BB(0x0082a75f);
    /* 0082a75f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a761: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 0082a764: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a766: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a769: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a76e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a772: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a774: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a777: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a77a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0082a77c: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a781u); f_0083913c();
    /* 0082a781: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a784: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a787: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a78a: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0082a78d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a790: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0082a793: add dword ptr [eax + 0x2c], 1 */ { u32 ad = (u32)(r_eax+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a797: mov eax, edi */ r_eax = r_edi;
    /* 0082a799: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a79c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a79d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a79e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a79f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a7a0: ret  */ FN_RET(0x0082a735); r_esp += 4; return;
}

void f_0082a7d8(void) /* sub_82A7D8 */
{
    FN_ENTER(0x0082a7d8);
    /* 0082a7d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a7d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a7da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082a7db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a7dc: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082a7df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082a7e1: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0082a7e5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0082a7e7: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0082a7eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082a7ed: mov ebx, eax */ r_ebx = r_eax;
L_0082a7ef:; BB(0x0082a7ef);
    /* 0082a7ef: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0082a7f2: cmp edx, 0x484d5658 */ {  u32 a = r_edx; u32 b = 0x484d5658u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a7f8: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 0082a7fb: jne 0x82a80c */ if (!fZ) goto L_0082a80c;
L_0082a7fd:; BB(0x0082a7fd);
    /* 0082a7fd: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0082a801: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0082a804: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0082a807: jmp 0x82a9a4 */ goto L_0082a9a4;
L_0082a80c:; BB(0x0082a80c);
    /* 0082a80c: cmp edx, 0x54525658 */ {  u32 a = r_edx; u32 b = 0x54525658u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a812: jne 0x82a9a4 */ if (!fZ) goto L_0082a9a4;
L_0082a818:; BB(0x0082a818);
    /* 0082a818: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0082a81b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a81c: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x82a821u); f_0082ac20();
    /* 0082a821: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082a822: mov eax, dword ptr [0xacb9c8] */ r_eax = R32((u32)(0xacb9c8u));
    /* 0082a827: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0082a82a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0082a82d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0082a82f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a831: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0082a835: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0082a839: mov esi, dword ptr [0xacb9cc] */ r_esi = R32((u32)(0xacb9ccu));
    /* 0082a83f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0082a842: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0082a846: movzx edx, word ptr [ebp + 0x14] */ r_edx = (u32)R16((u32)(r_ebp+0x14u));
    /* 0082a84a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0082a84e: movzx edx, word ptr [ebp + 0x16] */ r_edx = (u32)R16((u32)(r_ebp+0x16u));
    /* 0082a852: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0082a856: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0082a859: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0082a85d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0082a860: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0082a864: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0082a867: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0082a86b: mov edx, eax */ r_edx = r_eax;
    /* 0082a86d: je 0x82a88f */ if (fZ) goto L_0082a88f;
L_0082a86f:; BB(0x0082a86f);
    /* 0082a86f: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
L_0082a873:; BB(0x0082a873);
    /* 0082a873: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 0082a876: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a878: je 0x82a883 */ if (fZ) goto L_0082a883;
L_0082a87a:; BB(0x0082a87a);
    /* 0082a87a: cmp ecx, dword ptr [ebp] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a87d: je 0x82a9c4 */ if (fZ) goto L_0082a9c4;
L_0082a883:; BB(0x0082a883);
    /* 0082a883: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a886: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0082a889: jne 0x82a873 */ if (!fZ) goto L_0082a873;
L_0082a88b:; BB(0x0082a88b);
    /* 0082a88b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
L_0082a88f:; BB(0x0082a88f);
    /* 0082a88f: mov esi, dword ptr [0xacb9c4] */ r_esi = R32((u32)(0xacb9c4u));
    /* 0082a895: mov edx, dword ptr [0xacb9c0] */ r_edx = R32((u32)(0xacb9c0u));
    /* 0082a89b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a89d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a89f: je 0x82a8db */ if (fZ) goto L_0082a8db;
L_0082a8a1:; BB(0x0082a8a1);
    /* 0082a8a1: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
L_0082a8a5:; BB(0x0082a8a5);
    /* 0082a8a5: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 0082a8a7: cmp ebp, -0x11 */ {  u32 a = r_ebp; u32 b = 0xffffffefu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a8aa: je 0x82a9b9 */ if (fZ) goto L_0082a9b9;
L_0082a8b0:; BB(0x0082a8b0);
    /* 0082a8b0: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a8b3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0082a8b6: jne 0x82a8a5 */ if (!fZ) goto L_0082a8a5;
L_0082a8b8:; BB(0x0082a8b8);
    /* 0082a8b8: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
L_0082a8bc:; BB(0x0082a8bc);
    /* 0082a8bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a8be: je 0x82a8db */ if (fZ) goto L_0082a8db;
L_0082a8c0:; BB(0x0082a8c0);
    /* 0082a8c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a8c2: je 0x82a8db */ if (fZ) goto L_0082a8db;
L_0082a8c4:; BB(0x0082a8c4);
    /* 0082a8c4: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
L_0082a8c8:; BB(0x0082a8c8);
    /* 0082a8c8: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a8cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a8cd: je 0x82a9ad */ if (fZ) goto L_0082a9ad;
L_0082a8d3:; BB(0x0082a8d3);
    /* 0082a8d3: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a8d6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082a8d9: jne 0x82a8c8 */ if (!fZ) goto L_0082a8c8;
L_0082a8db:; BB(0x0082a8db);
    /* 0082a8db: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0082a8dd:; BB(0x0082a8dd);
    /* 0082a8dd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a8df: je 0x82a97e */ if (fZ) goto L_0082a97e;
L_0082a8e5:; BB(0x0082a8e5);
    /* 0082a8e5: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0082a8e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a8ea: jne 0x82a971 */ if (!fZ) goto L_0082a971;
L_0082a8f0:; BB(0x0082a8f0);
    /* 0082a8f0: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0082a8f3: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082a8f6: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0082a8f8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082a8fc: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0082a8ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a901: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082a905: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0082a908: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0082a90c: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0082a90f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0082a913: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0082a916: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0082a91a: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0082a91d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0082a921: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0082a924: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0082a928: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0082a92b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082a92f: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0082a932: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0082a936: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0082a939: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0082a93d: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0082a940: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082a944: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0082a947: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082a94a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082a94c: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a94f: lea edx, [ebp + 0x40] */ r_edx = (u32)(r_ebp+0x40u);
    /* 0082a952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a953: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a956: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082a958: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a95b: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a95e: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a961: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082a963: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a968u); f_0083913c();
    /* 0082a968: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a96b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a96e: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
L_0082a971:; BB(0x0082a971);
    /* 0082a971: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a974: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0082a977: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a97a: add dword ptr [edx + 0x2c], 1 */ { u32 ad = (u32)(r_edx+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0082a97e:; BB(0x0082a97e);
    /* 0082a97e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0082a982: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082a984: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082a986: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0082a989: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a98b: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0082a98d: mov dword ptr [ebx + edx + 8], esi */ W32((u32)(r_ebx+r_edx+0x8u), r_esi);
    /* 0082a991: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0082a995: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a998: movzx ebx, si */ r_ebx = (u32)(u16)r_esi;
    /* 0082a99b: cmp ebx, dword ptr [eax + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a99e: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0082a9a2: je 0x82a9cd */ if (fZ) goto L_0082a9cd;
L_0082a9a4:; BB(0x0082a9a4);
    /* 0082a9a4: lea ebp, [ebp + edi + 8] */ r_ebp = (u32)(r_ebp+r_edi+0x8u);
    /* 0082a9a8: jmp 0x82a7ef */ goto L_0082a7ef;
L_0082a9ad:; BB(0x0082a9ad);
    /* 0082a9ad: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0082a9b1: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 0082a9b4: jmp 0x82a8dd */ goto L_0082a8dd;
L_0082a9b9:; BB(0x0082a9b9);
    /* 0082a9b9: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0082a9bd: mov ecx, esi */ r_ecx = r_esi;
    /* 0082a9bf: jmp 0x82a8bc */ goto L_0082a8bc;
L_0082a9c4:; BB(0x0082a9c4);
    /* 0082a9c4: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0082a9c8: jmp 0x82a8dd */ goto L_0082a8dd;
L_0082a9cd:; BB(0x0082a9cd);
    /* 0082a9cd: mov eax, 1 */ r_eax = 0x1u;
    /* 0082a9d2: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a9d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082a9d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a9d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082a9d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082a9d9: ret  */ FN_RET(0x0082a7d8); r_esp += 4; return;
}

void f_0082a9dc(void) /* sub_82A9DC */
{
    FN_ENTER(0x0082a9dc);
    /* 0082a9dc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0082a9e0: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082a9e2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082a9e6: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0082a9e9: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0082a9ec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082a9f0: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0082a9f3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0082a9f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082a9f8: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0082a9fb: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0082a9fe: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0082aa01: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0082aa04: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0082aa07: ret 0xc */ FN_RET(0x0082a9dc); r_esp += 16; return;
}

void f_0082aa0c(void) /* sub_82AA0C */
{
    FN_ENTER(0x0082aa0c);
    /* 0082aa0c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082aa10: test eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082aa15: je 0x82aa26 */ if (fZ) goto L_0082aa26;
L_0082aa17:; BB(0x0082aa17);
    /* 0082aa17: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082aa19: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0082aa1c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082aa20: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0082aa23: ret 8 */ FN_RET(0x0082aa0c); r_esp += 12; return;
L_0082aa26:; BB(0x0082aa26);
    /* 0082aa26: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0082aa28: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0082aa2b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082aa2f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0082aa32: ret 8 */ FN_RET(0x0082aa0c); r_esp += 12; return;
}

void f_0082aa38(void) /* sub_82AA38 */
{
    FN_ENTER(0x0082aa38);
    /* 0082aa38: mov edx, dword ptr [0xaf0388] */ r_edx = R32((u32)(0xaf0388u));
    /* 0082aa3e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0082aa40: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082aa42: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082aa44: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0082aa47: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082aa49: mov eax, dword ptr [eax + edx + 8] */ r_eax = R32((u32)(r_eax+r_edx+0x8u));
    /* 0082aa4d: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0082aa50: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0082aa53: call 0x8396e4 */ r_esp -= 4; W32(r_esp, 0x82aa58u); f_008396e4();
    /* 0082aa58: mov eax, 1 */ r_eax = 0x1u;
    /* 0082aa5d: ret 8 */ FN_RET(0x0082aa38); r_esp += 12; return;
}

void f_0082aa60(void) /* sub_82AA60 */
{
    FN_ENTER(0x0082aa60);
    /* 0082aa60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082aa61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082aa62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082aa63: mov edi, edx */ r_edi = r_edx;
    /* 0082aa65: mov eax, dword ptr [0xaf0388] */ r_eax = R32((u32)(0xaf0388u));
    /* 0082aa6a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0082aa6c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082aa6e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082aa70: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0082aa73: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082aa75: mov ebx, dword ptr [ebx + eax + 8] */ r_ebx = R32((u32)(r_ebx+r_eax+0x8u));
    /* 0082aa79: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0082aa7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082aa7e: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x82aa83u); f_00839a28();
    /* 0082aa83: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0082aa86: call 0x839bd0 */ r_esp -= 4; W32(r_esp, 0x82aa8bu); f_00839bd0();
    /* 0082aa8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082aa8d: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082aa90: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0082aa93: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0082aa96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082aa97: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082aa9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082aa9c: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082aa9f: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082aaa2: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082aaa5: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082aaa8: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82aaadu); f_0083913c();
    /* 0082aaad: mov eax, 1 */ r_eax = 0x1u;
    /* 0082aab2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082aab3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082aab4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082aab5: ret 8 */ FN_RET(0x0082aa60); r_esp += 12; return;
}

void f_0082aab8(void) /* sub_82AAB8 */
{
    FN_ENTER(0x0082aab8);
    /* 0082aab8: mov dword ptr [0xad93c4], ecx */ W32((u32)(0xad93c4u), r_ecx);
    /* 0082aabe: ret  */ FN_RET(0x0082aab8); r_esp += 4; return;
}

void f_0082aac0(void) /* sub_82AAC0 */
{
    FN_ENTER(0x0082aac0);
    /* 0082aac0: mov dword ptr [0xad93c4], 0 */ W32((u32)(0xad93c4u), 0x0u);
    /* 0082aaca: ret  */ FN_RET(0x0082aac0); r_esp += 4; return;
}

void f_0082aacc(void) /* sub_82AACC */
{
    FN_ENTER(0x0082aacc);
    /* 0082aacc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082aacd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082aace: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082aacf: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082aad5: mov edi, edx */ r_edi = r_edx;
    /* 0082aad7: mov esi, ecx */ r_esi = r_ecx;
    /* 0082aad9: mov ebp, dword ptr [esp + 0x98] */ r_ebp = R32((u32)(r_esp+0x98u));
    /* 0082aae0: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0082aae3: mov eax, edi */ r_eax = r_edi;
    /* 0082aae5: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0082aae9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082aaeb: je 0x82ab3f */ if (fZ) goto L_0082ab3f;
L_0082aaed:; BB(0x0082aaed);
    /* 0082aaed: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0082aaf0: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0082aaf3: mov edi, eax */ r_edi = r_eax;
    /* 0082aaf5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0082aaf9: mov eax, ecx */ r_eax = r_ecx;
    /* 0082aafb: mov ebx, edx */ r_ebx = r_edx;
L_0082aafd:; BB(0x0082aafd);
    /* 0082aafd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082aafe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082aaff: call 0x85ad71 */ r_esp -= 4; W32(r_esp, 0x82ab04u); f_0085ad71();
    /* 0082ab04: mov ecx, eax */ r_ecx = r_eax;
    /* 0082ab06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082ab09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082ab0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0082ab0d: jle 0x82ab2b */ if ((fZ||fS!=fO)) goto L_0082ab2b;
L_0082ab0f:; BB(0x0082ab0f);
    /* 0082ab0f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082ab12: jl 0x82ab21 */ if ((fS!=fO)) goto L_0082ab21;
L_0082ab14:; BB(0x0082ab14);
    /* 0082ab14: lea eax, [ecx - 6] */ r_eax = (u32)(r_ecx+0xfffffffau);
L_0082ab17:; BB(0x0082ab17);
    /* 0082ab17: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082ab1a: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082ab1d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082ab1f: jle 0x82ab17 */ if ((fZ||fS!=fO)) goto L_0082ab17;
L_0082ab21:; BB(0x0082ab21);
    /* 0082ab21: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082ab24: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082ab27: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082ab29: jl 0x82ab21 */ if ((fS!=fO)) goto L_0082ab21;
L_0082ab2b:; BB(0x0082ab2b);
    /* 0082ab2b: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 0082ab2f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082ab32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab34: jne 0x82aafd */ if (!fZ) goto L_0082aafd;
L_0082ab36:; BB(0x0082ab36);
    /* 0082ab36: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0082ab39: mov edx, ebx */ r_edx = r_ebx;
    /* 0082ab3b: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_0082ab3f:; BB(0x0082ab3f);
    /* 0082ab3f: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0082ab42: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0082ab46: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 0082ab4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ab4c: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x82ab51u); f_0085957c();
    /* 0082ab51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082ab54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab56: je 0x82ac0f */ if (fZ) goto L_0082ac0f;
L_0082ab5c:; BB(0x0082ab5c);
    /* 0082ab5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082ab5d: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x82ab62u); f_00859710();
    /* 0082ab62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082ab63: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab66: je 0x82ac08 */ if (fZ) goto L_0082ac08;
L_0082ab6c:; BB(0x0082ab6c);
    /* 0082ab6c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab6e: je 0x82ac01 */ if (fZ) goto L_0082ac01;
L_0082ab74:; BB(0x0082ab74);
    /* 0082ab74: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab77: je 0x82abfa */ if (fZ) goto L_0082abfa;
L_0082ab7d:; BB(0x0082ab7d);
    /* 0082ab7d: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab80: je 0x82abf3 */ if (fZ) goto L_0082abf3;
L_0082ab82:; BB(0x0082ab82);
    /* 0082ab82: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab85: je 0x82abb0 */ if (fZ) goto L_0082abb0;
L_0082ab87:; BB(0x0082ab87);
    /* 0082ab87: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab8a: jne 0x82ab93 */ if (!fZ) goto L_0082ab93;
L_0082ab8c:; BB(0x0082ab8c);
    /* 0082ab8c: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0082ab91: jmp 0x82abb5 */ goto L_0082abb5;
L_0082ab93:; BB(0x0082ab93);
    /* 0082ab93: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ab96: jne 0x82ab9f */ if (!fZ) goto L_0082ab9f;
L_0082ab98:; BB(0x0082ab98);
    /* 0082ab98: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 0082ab9d: jmp 0x82abb5 */ goto L_0082abb5;
L_0082ab9f:; BB(0x0082ab9f);
    /* 0082ab9f: mov eax, 3 */ r_eax = 0x3u;
    /* 0082aba4: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082abaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082abab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082abac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082abad: ret 0xc */ FN_RET(0x0082aacc); r_esp += 16; return;
L_0082abb0:; BB(0x0082abb0);
    /* 0082abb0: mov eax, 0x15 */ r_eax = 0x15u;
L_0082abb5:; BB(0x0082abb5);
    /* 0082abb5: push dword ptr [esp + 0xa0] */ { u32 v = R32((u32)(r_esp+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082abbc: mov ecx, esi */ r_ecx = r_esi;
    /* 0082abbe: push dword ptr [esp + 0xa0] */ { u32 v = R32((u32)(r_esp+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082abc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082abc6: mov edx, edi */ r_edx = r_edi;
    /* 0082abc8: call 0x839c68 */ r_esp -= 4; W32(r_esp, 0x82abcdu); f_00839c68();
    /* 0082abcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082abcf: je 0x82abe2 */ if (fZ) goto L_0082abe2;
L_0082abd1:; BB(0x0082abd1);
    /* 0082abd1: mov eax, 1 */ r_eax = 0x1u;
    /* 0082abd6: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082abdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082abdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082abde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082abdf: ret 0xc */ FN_RET(0x0082aacc); r_esp += 16; return;
L_0082abe2:; BB(0x0082abe2);
    /* 0082abe2: mov eax, 4 */ r_eax = 0x4u;
    /* 0082abe7: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082abed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082abee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082abef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082abf0: ret 0xc */ FN_RET(0x0082aacc); r_esp += 16; return;
L_0082abf3:; BB(0x0082abf3);
    /* 0082abf3: mov eax, 0x1a */ r_eax = 0x1au;
    /* 0082abf8: jmp 0x82abb5 */ goto L_0082abb5;
L_0082abfa:; BB(0x0082abfa);
    /* 0082abfa: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0082abff: jmp 0x82abb5 */ goto L_0082abb5;
L_0082ac01:; BB(0x0082ac01);
    /* 0082ac01: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0082ac06: jmp 0x82abb5 */ goto L_0082abb5;
L_0082ac08:; BB(0x0082ac08);
    /* 0082ac08: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0082ac0d: jmp 0x82abb5 */ goto L_0082abb5;
L_0082ac0f:; BB(0x0082ac0f);
    /* 0082ac0f: mov eax, 2 */ r_eax = 0x2u;
    /* 0082ac14: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082ac1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082ac1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082ac1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082ac1d: ret 0xc */ FN_RET(0x0082aacc); r_esp += 16; return;
}

void f_0082ac20(void) /* sub_82AC20 */
{
    FN_ENTER(0x0082ac20);
    /* 0082ac20: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082ac24: mov dword ptr [edx], 0xffffffef */ W32((u32)(r_edx), 0xffffffefu);
    /* 0082ac2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082ac2c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0082ac2f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0082ac32: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0082ac35: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0082ac38: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0082ac3b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0082ac3e: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0082ac41: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082ac44: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0082ac47: ret  */ FN_RET(0x0082ac20); r_esp += 4; return;
}

void f_0082ac48(void) /* sub_82AC48 */
{
    FN_ENTER(0x0082ac48);
    /* 0082ac48: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082ac4c: mov dword ptr [edx + 8], 0xffffffff */ W32((u32)(r_edx+0x8u), 0xffffffffu);
    /* 0082ac53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082ac55: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0082ac57: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0082ac5a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0082ac5d: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0082ac60: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0082ac63: ret  */ FN_RET(0x0082ac48); r_esp += 4; return;
}

void f_0082ac64(void) /* sub_82AC64 */
{
    FN_ENTER(0x0082ac64);
    /* 0082ac64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082ac65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082ac66: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082ac69: mov eax, edx */ r_eax = r_edx;
    /* 0082ac6b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0082ac6d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0082ac71: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0082ac75: mov dword ptr [0xacb9cc], ebx */ W32((u32)(0xacb9ccu), r_ebx);
    /* 0082ac7b: mov dword ptr [0xacb9c8], eax */ W32((u32)(0xacb9c8u), r_eax);
    /* 0082ac80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082ac82: mov dword ptr [0xacb9c4], ecx */ W32((u32)(0xacb9c4u), r_ecx);
    /* 0082ac88: mov dword ptr [0xacb9c0], edx */ W32((u32)(0xacb9c0u), r_edx);
    /* 0082ac8e: je 0x82acb7 */ if (fZ) goto L_0082acb7;
L_0082ac90:; BB(0x0082ac90);
    /* 0082ac90: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0082ac93: mov edi, eax */ r_edi = r_eax;
    /* 0082ac95: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0082ac99: mov ebp, edx */ r_ebp = r_edx;
    /* 0082ac9b: mov esi, ecx */ r_esi = r_ecx;
L_0082ac9d:; BB(0x0082ac9d);
    /* 0082ac9d: mov eax, esi */ r_eax = r_esi;
    /* 0082ac9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082aca0: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082aca3: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x82aca8u); f_0082ac20();
    /* 0082aca8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082aca9: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0082acac: jne 0x82ac9d */ if (!fZ) goto L_0082ac9d;
L_0082acae:; BB(0x0082acae);
    /* 0082acae: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0082acb2: mov eax, edi */ r_eax = r_edi;
    /* 0082acb4: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0082acb7:; BB(0x0082acb7);
    /* 0082acb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082acb9: je 0x82acce */ if (fZ) goto L_0082acce;
L_0082acbb:; BB(0x0082acbb);
    /* 0082acbb: mov esi, eax */ r_esi = r_eax;
L_0082acbd:; BB(0x0082acbd);
    /* 0082acbd: mov edx, ebx */ r_edx = r_ebx;
    /* 0082acbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082acc0: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082acc3: call 0x82ac48 */ r_esp -= 4; W32(r_esp, 0x82acc8u); f_0082ac48();
    /* 0082acc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082acc9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0082accc: jne 0x82acbd */ if (!fZ) goto L_0082acbd;
L_0082acce:; BB(0x0082acce);
    /* 0082acce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082acd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082acd2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082acd3: ret 8 */ FN_RET(0x0082ac64); r_esp += 12; return;
}

void f_0082acd8(void) /* sub_82ACD8 */
{
    FN_ENTER(0x0082acd8);
    /* 0082acd8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082acdc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082ace0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0082ace4: mov dword ptr [0xacb9e0], eax */ W32((u32)(0xacb9e0u), r_eax);
    /* 0082ace9: mov dword ptr [0xacb9e4], edx */ W32((u32)(0xacb9e4u), r_edx);
    /* 0082acef: mov dword ptr [0xacb9e8], ecx */ W32((u32)(0xacb9e8u), r_ecx);
    /* 0082acf5: mov dword ptr [0xacb9ec], ecx */ W32((u32)(0xacb9ecu), r_ecx);
    /* 0082acfb: ret  */ FN_RET(0x0082acd8); r_esp += 4; return;
}

void f_0082acfc(void) /* sub_82ACFC */
{
    FN_ENTER(0x0082acfc);
    /* 0082acfc: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0082ad00: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082ad04: mov dword ptr [ecx*4 + 0xacb9f0], edx */ W32((u32)(r_ecx*4+0xacb9f0u), r_edx);
    /* 0082ad0b: call 0x837468 */ r_esp -= 4; W32(r_esp, 0x82ad10u); f_00837468();
    /* 0082ad10: ret  */ FN_RET(0x0082acfc); r_esp += 4; return;
}

void f_0082ad14(void) /* sub_82AD14 */
{
    FN_ENTER(0x0082ad14);
    /* 0082ad14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0082ad18: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082ad1b: je 0x82adc2 */ if (fZ) goto L_0082adc2;
L_0082ad21:; BB(0x0082ad21);
    /* 0082ad21: fld dword ptr [0x98a178] */ FPUSH(R_F32((u32)(0x98a178u)));
    /* 0082ad27: fld dword ptr [0xaf02e8] */ FPUSH(R_F32((u32)(0xaf02e8u)));
    /* 0082ad2d: fld dword ptr [0x98a174] */ FPUSH(R_F32((u32)(0x98a174u)));
    /* 0082ad33: fld dword ptr [0xaf02ec] */ FPUSH(R_F32((u32)(0xaf02ecu)));
    /* 0082ad39: fld dword ptr [0x98a174] */ FPUSH(R_F32((u32)(0x98a174u)));
    /* 0082ad3f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082ad41: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0082ad43: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ad45: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0082ad47: mov dword ptr [0xaf0330], 0 */ W32((u32)(0xaf0330u), 0x0u);
    /* 0082ad51: mov ecx, 0xaf0338 */ r_ecx = 0xaf0338u;
    /* 0082ad56: mov dword ptr [0xaf0334], 0 */ W32((u32)(0xaf0334u), 0x0u);
    /* 0082ad60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ad62: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0082ad64: mov edx, 0xaf033c */ r_edx = 0xaf033cu;
    /* 0082ad69: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ad6b: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0082ad6d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0082ad6f:; BB(0x0082ad6f);
    /* 0082ad6f: fld dword ptr [0xaf0330] */ FPUSH(R_F32((u32)(0xaf0330u)));
    /* 0082ad75: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0082ad77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082ad79: fld dword ptr [0xaf0334] */ FPUSH(R_F32((u32)(0xaf0334u)));
    /* 0082ad7f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082ad80: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0082ad82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082ad84: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082ad86: ja 0x82ad8a */ if ((!fC&&!fZ)) goto L_0082ad8a;
L_0082ad88:; BB(0x0082ad88);
    /* 0082ad88: fst st(1) */ ST(1) = ST(0);
L_0082ad8a:; BB(0x0082ad8a);
    /* 0082ad8a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ad8c: fstp dword ptr [0xaf0330] */ W_F32((u32)(0xaf0330u), ST(0)); FPOP();
    /* 0082ad92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082ad93: ja 0x82ad97 */ if ((!fC&&!fZ)) goto L_0082ad97;
L_0082ad95:; BB(0x0082ad95);
    /* 0082ad95: fst st(1) */ ST(1) = ST(0);
L_0082ad97:; BB(0x0082ad97);
    /* 0082ad97: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082ad99: fstp dword ptr [0xaf0334] */ W_F32((u32)(0xaf0334u), ST(0)); FPOP();
    /* 0082ad9f: fcom dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); 
    /* 0082ada1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082ada3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082ada4: ja 0x82adae */ if ((!fC&&!fZ)) goto L_0082adae;
L_0082ada6:; BB(0x0082ada6);
    /* 0082ada6: fadd dword ptr [0x98a174] */ ST(0) = ST(0) + R_F32((u32)(0x98a174u));
    /* 0082adac: fst dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0));
L_0082adae:; BB(0x0082adae);
    /* 0082adae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082adb0: fcom dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); 
    /* 0082adb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082adb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082adb5: ja 0x82adbf */ if ((!fC&&!fZ)) goto L_0082adbf;
L_0082adb7:; BB(0x0082adb7);
    /* 0082adb7: fadd dword ptr [0x98a174] */ ST(0) = ST(0) + R_F32((u32)(0x98a174u));
    /* 0082adbd: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
L_0082adbf:; BB(0x0082adbf);
    /* 0082adbf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082adc1: ret  */ FN_RET(0x0082ad14); r_esp += 4; return;
L_0082adc2:; BB(0x0082adc2);
    /* 0082adc2: fld dword ptr [0x98a170] */ FPUSH(R_F32((u32)(0x98a170u)));
    /* 0082adc8: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0082adcc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0082add0: fld dword ptr [0x98a16c] */ FPUSH(R_F32((u32)(0x98a16cu)));
    /* 0082add6: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0082add8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0082adda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082adde: fstp dword ptr [0xaf0330] */ W_F32((u32)(0xaf0330u), ST(0)); FPOP();
    /* 0082ade4: fld dword ptr [0x98a178] */ FPUSH(R_F32((u32)(0x98a178u)));
    /* 0082adea: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0082aded: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082adef: fstp dword ptr [0xaf0334] */ W_F32((u32)(0xaf0334u), ST(0)); FPOP();
    /* 0082adf5: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0082adf8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0082adfa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0082adfe: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0082ae00: fld dword ptr [0xaf02e8] */ FPUSH(R_F32((u32)(0xaf02e8u)));
    /* 0082ae06: mov ecx, 0xaf0338 */ r_ecx = 0xaf0338u;
    /* 0082ae0b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082ae0d: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0082ae0f: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0082ae12: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0082ae14: mov edx, 0xaf033c */ r_edx = 0xaf033cu;
    /* 0082ae19: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082ae1b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0082ae1d: fld dword ptr [0xaf02ec] */ FPUSH(R_F32((u32)(0xaf02ecu)));
    /* 0082ae23: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0082ae25: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0082ae27: jmp 0x82ad6f */ goto L_0082ad6f;
}

void f_0082ae2c(void) /* sub_82AE2C */
{
    FN_ENTER(0x0082ae2c);
    /* 0082ae2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0082ae2d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082ae30: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0082ae34: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082ae38: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0082ae3c: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0082ae40: mov dword ptr [0xaf0340], edx */ W32((u32)(0xaf0340u), r_edx);
    /* 0082ae46: mov dword ptr [0xaf0344], ecx */ W32((u32)(0xaf0344u), r_ecx);
    /* 0082ae4c: mov dword ptr [0xaf0348], ebp */ W32((u32)(0xaf0348u), r_ebp);
    /* 0082ae52: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082ae55: je 0x82ae6f */ if (fZ) goto L_0082ae6f;
L_0082ae57:; BB(0x0082ae57);
    /* 0082ae57: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0082ae5b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0082ae5e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0082ae61: fst dword ptr [0xaf02e8] */ W_F32((u32)(0xaf02e8u), ST(0));
    /* 0082ae67: mov dword ptr [0xaf0350], ecx */ W32((u32)(0xaf0350u), r_ecx);
    /* 0082ae6d: jmp 0x82ae89 */ goto L_0082ae89;
L_0082ae6f:; BB(0x0082ae6f);
    /* 0082ae6f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0082ae73: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0082ae75: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0082ae79: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082ae7d: mov dword ptr [0xaf0350], ecx */ W32((u32)(0xaf0350u), r_ecx);
    /* 0082ae83: fst dword ptr [0xaf02e8] */ W_F32((u32)(0xaf02e8u), ST(0));
L_0082ae89:; BB(0x0082ae89);
    /* 0082ae89: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082ae8c: je 0x82aea3 */ if (fZ) goto L_0082aea3;
L_0082ae8e:; BB(0x0082ae8e);
    /* 0082ae8e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082ae92: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082ae96: fst dword ptr [0xaf02ec] */ W_F32((u32)(0xaf02ecu), ST(0));
    /* 0082ae9c: mov dword ptr [0xaf0354], eax */ W32((u32)(0xaf0354u), r_eax);
    /* 0082aea1: jmp 0x82aeba */ goto L_0082aeba;
L_0082aea3:; BB(0x0082aea3);
    /* 0082aea3: mov dword ptr [0xaf0354], eax */ W32((u32)(0xaf0354u), r_eax);
    /* 0082aea8: mov edx, eax */ r_edx = r_eax;
    /* 0082aeaa: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0082aeac: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0082aeb0: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0082aeb4: fst dword ptr [0xaf02ec] */ W_F32((u32)(0xaf02ecu), ST(0));
L_0082aeba:; BB(0x0082aeba);
    /* 0082aeba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082aebc: fdiv dword ptr [0x98a160] */ ST(0) = ST(0) / R_F32((u32)(0x98a160u));
    /* 0082aec2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082aec4: fdiv dword ptr [0x98a15c] */ ST(0) = ST(0) / R_F32((u32)(0x98a15cu));
    /* 0082aeca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082aecc: fstp dword ptr [0xaf0358] */ W_F32((u32)(0xaf0358u), ST(0)); FPOP();
    /* 0082aed2: fstp dword ptr [0xaf035c] */ W_F32((u32)(0xaf035cu), ST(0)); FPOP();
    /* 0082aed8: push 0xc77fff00 */ { u32 v = 0xc77fff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0082aedd: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0082aee2: call 0x83ac80 */ r_esp -= 4; W32(r_esp, 0x82aee7u); f_0083ac80();
    /* 0082aee7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082aeea: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082aeee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082aef0: call 0x838ca0 */ r_esp -= 4; W32(r_esp, 0x82aef5u); f_00838ca0();
    /* 0082aef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082aef7: jne 0x82afc6 */ if (!fZ) goto L_0082afc6;
L_0082aefd:; BB(0x0082aefd);
    /* 0082aefd: mov eax, dword ptr [0xaf0344] */ r_eax = R32((u32)(0xaf0344u));
    /* 0082af02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082af04: jne 0x82af69 */ if (!fZ) goto L_0082af69;
L_0082af06:; BB(0x0082af06);
    /* 0082af06: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af0b: mov edx, 0x98a17c */ r_edx = 0x98a17cu;
    /* 0082af10: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af15u); f_0083bf84();
    /* 0082af15: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af1a: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082af1f: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af24u); f_0083bf84();
    /* 0082af24: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082af28: mov dword ptr [0xaf0344], 1 */ W32((u32)(0xaf0344u), 0x1u);
    /* 0082af32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082af34: call 0x838ca0 */ r_esp -= 4; W32(r_esp, 0x82af39u); f_00838ca0();
    /* 0082af39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082af3b: jne 0x82afc6 */ if (!fZ) goto L_0082afc6;
L_0082af41:; BB(0x0082af41);
    /* 0082af41: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af46: mov edx, 0x98a1a8 */ r_edx = 0x98a1a8u;
    /* 0082af4b: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af50u); f_0083bf84();
    /* 0082af50: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af55: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082af5a: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af5fu); f_0083bf84();
    /* 0082af5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082af61: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x82af67u); call_ind(t); }
    /* 0082af67: jmp 0x82afc6 */ goto L_0082afc6;
L_0082af69:; BB(0x0082af69);
    /* 0082af69: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af6e: mov edx, 0x98a1d4 */ r_edx = 0x98a1d4u;
    /* 0082af73: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af78u); f_0083bf84();
    /* 0082af78: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af7d: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082af82: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af87u); f_0083bf84();
    /* 0082af87: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082af8b: mov dword ptr [0xaf0344], 5 */ W32((u32)(0xaf0344u), 0x5u);
    /* 0082af95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082af97: call 0x838ca0 */ r_esp -= 4; W32(r_esp, 0x82af9cu); f_00838ca0();
    /* 0082af9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082af9e: jne 0x82afc6 */ if (!fZ) goto L_0082afc6;
L_0082afa0:; BB(0x0082afa0);
    /* 0082afa0: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082afa5: mov edx, 0x98a200 */ r_edx = 0x98a200u;
    /* 0082afaa: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82afafu); f_0083bf84();
    /* 0082afaf: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082afb4: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082afb9: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82afbeu); f_0083bf84();
    /* 0082afbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082afc0: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x82afc6u); call_ind(t); }
L_0082afc6:; BB(0x0082afc6);
    /* 0082afc6: fld dword ptr [0x98a150] */ FPUSH(R_F32((u32)(0x98a150u)));
    /* 0082afcc: fld dword ptr [0xaf02e8] */ FPUSH(R_F32((u32)(0xaf02e8u)));
    /* 0082afd2: fld dword ptr [0x98a154] */ FPUSH(R_F32((u32)(0x98a154u)));
    /* 0082afd8: fld dword ptr [0xaf02ec] */ FPUSH(R_F32((u32)(0xaf02ecu)));
    /* 0082afde: fld dword ptr [0x98a154] */ FPUSH(R_F32((u32)(0x98a154u)));
    /* 0082afe4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082afe6: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0082afe8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082afea: fst dword ptr [0xaf033c] */ W_F32((u32)(0xaf033cu), ST(0));
    /* 0082aff0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082aff2: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0082aff4: fst dword ptr [0xaf0338] */ W_F32((u32)(0xaf0338u), ST(0));
    /* 0082affa: mov dword ptr [0xacb9f8], 2 */ W32((u32)(0xacb9f8u), 0x2u);
    /* 0082b004: mov dword ptr [0xaf0330], 0 */ W32((u32)(0xaf0330u), 0x0u);
    /* 0082b00e: fld dword ptr [0xaf0330] */ FPUSH(R_F32((u32)(0xaf0330u)));
    /* 0082b014: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0082b016: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b018: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b019: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082b01b: ja 0x82b01f */ if ((!fC&&!fZ)) goto L_0082b01f;
L_0082b01d:; BB(0x0082b01d);
    /* 0082b01d: fst st(5) */ ST(5) = ST(0);
L_0082b01f:; BB(0x0082b01f);
    /* 0082b01f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082b021: fstp dword ptr [0xaf0330] */ W_F32((u32)(0xaf0330u), ST(0)); FPOP();
    /* 0082b027: mov dword ptr [0xaf0334], 0 */ W32((u32)(0xaf0334u), 0x0u);
    /* 0082b031: fld dword ptr [0xaf0334] */ FPUSH(R_F32((u32)(0xaf0334u)));
    /* 0082b037: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0082b039: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b03b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b03c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b03e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0082b040: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b042: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b044: ja 0x82b048 */ if ((!fC&&!fZ)) goto L_0082b048;
L_0082b046:; BB(0x0082b046);
    /* 0082b046: fst st(3) */ ST(3) = ST(0);
L_0082b048:; BB(0x0082b048);
    /* 0082b048: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082b04a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b04c: fstp dword ptr [0xaf0334] */ W_F32((u32)(0xaf0334u), ST(0)); FPOP();
    /* 0082b052: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b053: ja 0x82b05f */ if ((!fC&&!fZ)) goto L_0082b05f;
L_0082b055:; BB(0x0082b055);
    /* 0082b055: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b057: fst dword ptr [0xaf0338] */ W_F32((u32)(0xaf0338u), ST(0));
    /* 0082b05d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0082b05f:; BB(0x0082b05f);
    /* 0082b05f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0082b061: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b063: fcomp dword ptr [0xaf033c] */ fx_compare(ST(0), R_F32((u32)(0xaf033cu))); FPOP();
    /* 0082b069: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b06b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b06c: ja 0x82b074 */ if ((!fC&&!fZ)) goto L_0082b074;
L_0082b06e:; BB(0x0082b06e);
    /* 0082b06e: fst dword ptr [0xaf033c] */ W_F32((u32)(0xaf033cu), ST(0));
L_0082b074:; BB(0x0082b074);
    /* 0082b074: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082b076: mov dword ptr [0xacb9f0], 8 */ W32((u32)(0xacb9f0u), 0x8u);
    /* 0082b080: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b082: mov edx, 8 */ r_edx = 0x8u;
    /* 0082b087: call 0x837468 */ r_esp -= 4; W32(r_esp, 0x82b08cu); f_00837468();
    /* 0082b08c: mov dword ptr [0xacb9f4], 6 */ W32((u32)(0xacb9f4u), 0x6u);
    /* 0082b096: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082b09b: mov edx, 6 */ r_edx = 0x6u;
    /* 0082b0a0: call 0x837468 */ r_esp -= 4; W32(r_esp, 0x82b0a5u); f_00837468();
    /* 0082b0a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b0a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082b0a9: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x82b0aeu); f_0082d6fc();
    /* 0082b0ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082b0b1: call 0x82d7a4 */ r_esp -= 4; W32(r_esp, 0x82b0b6u); f_0082d7a4();
    /* 0082b0b6: mov edx, dword ptr [0xaf02e8] */ r_edx = R32((u32)(0xaf02e8u));
    /* 0082b0bc: mov ecx, dword ptr [0xaf02ec] */ r_ecx = R32((u32)(0xaf02ecu));
    /* 0082b0c2: mov dword ptr [0xacb9fc], 0xacba0c */ W32((u32)(0xacb9fcu), 0xacba0cu);
    /* 0082b0cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082b0ce: mov dword ptr [0xacba00], 0xacb9e0 */ W32((u32)(0xacba00u), 0xacb9e0u);
    /* 0082b0d8: mov dword ptr [0xacb9e0], eax */ W32((u32)(0xacb9e0u), r_eax);
    /* 0082b0dd: mov dword ptr [0xacb9e4], eax */ W32((u32)(0xacb9e4u), r_eax);
    /* 0082b0e2: mov dword ptr [0xacba08], 4 */ W32((u32)(0xacba08u), 0x4u);
    /* 0082b0ec: mov dword ptr [0xacb9e8], eax */ W32((u32)(0xacb9e8u), r_eax);
    /* 0082b0f1: mov dword ptr [0xacba0c], 0 */ W32((u32)(0xacba0cu), 0x0u);
    /* 0082b0fb: mov dword ptr [0xacb9ec], eax */ W32((u32)(0xacb9ecu), r_eax);
    /* 0082b100: mov dword ptr [0xacba10], 0 */ W32((u32)(0xacba10u), 0x0u);
    /* 0082b10a: mov dword ptr [0xacba14], edx */ W32((u32)(0xacba14u), r_edx);
    /* 0082b110: mov dword ptr [0xacba18], 0 */ W32((u32)(0xacba18u), 0x0u);
    /* 0082b11a: mov dword ptr [0xacba1c], edx */ W32((u32)(0xacba1cu), r_edx);
    /* 0082b120: mov dword ptr [0xacba24], 0 */ W32((u32)(0xacba24u), 0x0u);
    /* 0082b12a: mov dword ptr [0xacba20], ecx */ W32((u32)(0xacba20u), r_ecx);
    /* 0082b130: mov dword ptr [0xacba28], ecx */ W32((u32)(0xacba28u), r_ecx);
    /* 0082b136: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082b139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b13a: ret  */ FN_RET(0x0082ae2c); r_esp += 4; return;
}

void f_0082aecb(void)
{
    FN_ENTER(0x0082aecb);
    /* 0082aecb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0082aecc: fstp dword ptr [0xaf0358] */ W_F32((u32)(0xaf0358u), ST(0)); FPOP();
    /* 0082aed2: fstp dword ptr [0xaf035c] */ W_F32((u32)(0xaf035cu), ST(0)); FPOP();
    /* 0082aed8: push 0xc77fff00 */ { u32 v = 0xc77fff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0082aedd: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0082aee2: call 0x83ac80 */ r_esp -= 4; W32(r_esp, 0x82aee7u); f_0083ac80();
    /* 0082aee7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082aeea: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082aeee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082aef0: call 0x838ca0 */ r_esp -= 4; W32(r_esp, 0x82aef5u); f_00838ca0();
    /* 0082aef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082aef7: jne 0x82afc6 */ if (!fZ) goto L_0082afc6;
L_0082aefd:; BB(0x0082aefd);
    /* 0082aefd: mov eax, dword ptr [0xaf0344] */ r_eax = R32((u32)(0xaf0344u));
    /* 0082af02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082af04: jne 0x82af69 */ if (!fZ) goto L_0082af69;
L_0082af06:; BB(0x0082af06);
    /* 0082af06: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af0b: mov edx, 0x98a17c */ r_edx = 0x98a17cu;
    /* 0082af10: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af15u); f_0083bf84();
    /* 0082af15: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af1a: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082af1f: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af24u); f_0083bf84();
    /* 0082af24: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082af28: mov dword ptr [0xaf0344], 1 */ W32((u32)(0xaf0344u), 0x1u);
    /* 0082af32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082af34: call 0x838ca0 */ r_esp -= 4; W32(r_esp, 0x82af39u); f_00838ca0();
    /* 0082af39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082af3b: jne 0x82afc6 */ if (!fZ) goto L_0082afc6;
L_0082af41:; BB(0x0082af41);
    /* 0082af41: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af46: mov edx, 0x98a1a8 */ r_edx = 0x98a1a8u;
    /* 0082af4b: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af50u); f_0083bf84();
    /* 0082af50: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af55: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082af5a: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af5fu); f_0083bf84();
    /* 0082af5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082af61: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x82af67u); call_ind(t); }
    /* 0082af67: jmp 0x82afc6 */ goto L_0082afc6;
L_0082af69:; BB(0x0082af69);
    /* 0082af69: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af6e: mov edx, 0x98a1d4 */ r_edx = 0x98a1d4u;
    /* 0082af73: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af78u); f_0083bf84();
    /* 0082af78: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082af7d: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082af82: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82af87u); f_0083bf84();
    /* 0082af87: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0082af8b: mov dword ptr [0xaf0344], 5 */ W32((u32)(0xaf0344u), 0x5u);
    /* 0082af95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0082af97: call 0x838ca0 */ r_esp -= 4; W32(r_esp, 0x82af9cu); f_00838ca0();
    /* 0082af9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082af9e: jne 0x82afc6 */ if (!fZ) goto L_0082afc6;
L_0082afa0:; BB(0x0082afa0);
    /* 0082afa0: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082afa5: mov edx, 0x98a200 */ r_edx = 0x98a200u;
    /* 0082afaa: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82afafu); f_0083bf84();
    /* 0082afaf: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0082afb4: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 0082afb9: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x82afbeu); f_0083bf84();
    /* 0082afbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0082afc0: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x82afc6u); call_ind(t); }
L_0082afc6:; BB(0x0082afc6);
    /* 0082afc6: fld dword ptr [0x98a150] */ FPUSH(R_F32((u32)(0x98a150u)));
    /* 0082afcc: fld dword ptr [0xaf02e8] */ FPUSH(R_F32((u32)(0xaf02e8u)));
    /* 0082afd2: fld dword ptr [0x98a154] */ FPUSH(R_F32((u32)(0x98a154u)));
    /* 0082afd8: fld dword ptr [0xaf02ec] */ FPUSH(R_F32((u32)(0xaf02ecu)));
    /* 0082afde: fld dword ptr [0x98a154] */ FPUSH(R_F32((u32)(0x98a154u)));
    /* 0082afe4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082afe6: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0082afe8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082afea: fst dword ptr [0xaf033c] */ W_F32((u32)(0xaf033cu), ST(0));
    /* 0082aff0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082aff2: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0082aff4: fst dword ptr [0xaf0338] */ W_F32((u32)(0xaf0338u), ST(0));
    /* 0082affa: mov dword ptr [0xacb9f8], 2 */ W32((u32)(0xacb9f8u), 0x2u);
    /* 0082b004: mov dword ptr [0xaf0330], 0 */ W32((u32)(0xaf0330u), 0x0u);
    /* 0082b00e: fld dword ptr [0xaf0330] */ FPUSH(R_F32((u32)(0xaf0330u)));
    /* 0082b014: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0082b016: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b018: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b019: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082b01b: ja 0x82b01f */ if ((!fC&&!fZ)) goto L_0082b01f;
L_0082b01d:; BB(0x0082b01d);
    /* 0082b01d: fst st(5) */ ST(5) = ST(0);
L_0082b01f:; BB(0x0082b01f);
    /* 0082b01f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0082b021: fstp dword ptr [0xaf0330] */ W_F32((u32)(0xaf0330u), ST(0)); FPOP();
    /* 0082b027: mov dword ptr [0xaf0334], 0 */ W32((u32)(0xaf0334u), 0x0u);
    /* 0082b031: fld dword ptr [0xaf0334] */ FPUSH(R_F32((u32)(0xaf0334u)));
    /* 0082b037: fcom st(5) */ fx_compare(ST(0), ST(5)); 
    /* 0082b039: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b03b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b03c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b03e: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0082b040: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b042: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0082b044: ja 0x82b048 */ if ((!fC&&!fZ)) goto L_0082b048;
L_0082b046:; BB(0x0082b046);
    /* 0082b046: fst st(3) */ ST(3) = ST(0);
L_0082b048:; BB(0x0082b048);
    /* 0082b048: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082b04a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b04c: fstp dword ptr [0xaf0334] */ W_F32((u32)(0xaf0334u), ST(0)); FPOP();
    /* 0082b052: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b053: ja 0x82b05f */ if ((!fC&&!fZ)) goto L_0082b05f;
L_0082b055:; BB(0x0082b055);
    /* 0082b055: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0082b057: fst dword ptr [0xaf0338] */ W_F32((u32)(0xaf0338u), ST(0));
    /* 0082b05d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0082b05f:; BB(0x0082b05f);
    /* 0082b05f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0082b061: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0082b063: fcomp dword ptr [0xaf033c] */ fx_compare(ST(0), R_F32((u32)(0xaf033cu))); FPOP();
    /* 0082b069: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0082b06b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0082b06c: ja 0x82b074 */ if ((!fC&&!fZ)) goto L_0082b074;
L_0082b06e:; BB(0x0082b06e);
    /* 0082b06e: fst dword ptr [0xaf033c] */ W_F32((u32)(0xaf033cu), ST(0));
L_0082b074:; BB(0x0082b074);
    /* 0082b074: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0082b076: mov dword ptr [0xacb9f0], 8 */ W32((u32)(0xacb9f0u), 0x8u);
    /* 0082b080: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082b082: mov edx, 8 */ r_edx = 0x8u;
    /* 0082b087: call 0x837468 */ r_esp -= 4; W32(r_esp, 0x82b08cu); f_00837468();
    /* 0082b08c: mov dword ptr [0xacb9f4], 6 */ W32((u32)(0xacb9f4u), 0x6u);
    /* 0082b096: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0082b09b: mov edx, 6 */ r_edx = 0x6u;
    /* 0082b0a0: call 0x837468 */ r_esp -= 4; W32(r_esp, 0x82b0a5u); f_00837468();
    /* 0082b0a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0082b0a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082b0a9: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x82b0aeu); f_0082d6fc();
    /* 0082b0ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082b0b1: call 0x82d7a4 */ r_esp -= 4; W32(r_esp, 0x82b0b6u); f_0082d7a4();
    /* 0082b0b6: mov edx, dword ptr [0xaf02e8] */ r_edx = R32((u32)(0xaf02e8u));
    /* 0082b0bc: mov ecx, dword ptr [0xaf02ec] */ r_ecx = R32((u32)(0xaf02ecu));
    /* 0082b0c2: mov dword ptr [0xacb9fc], 0xacba0c */ W32((u32)(0xacb9fcu), 0xacba0cu);
    /* 0082b0cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082b0ce: mov dword ptr [0xacba00], 0xacb9e0 */ W32((u32)(0xacba00u), 0xacb9e0u);
    /* 0082b0d8: mov dword ptr [0xacb9e0], eax */ W32((u32)(0xacb9e0u), r_eax);
    /* 0082b0dd: mov dword ptr [0xacb9e4], eax */ W32((u32)(0xacb9e4u), r_eax);
    /* 0082b0e2: mov dword ptr [0xacba08], 4 */ W32((u32)(0xacba08u), 0x4u);
    /* 0082b0ec: mov dword ptr [0xacb9e8], eax */ W32((u32)(0xacb9e8u), r_eax);
    /* 0082b0f1: mov dword ptr [0xacba0c], 0 */ W32((u32)(0xacba0cu), 0x0u);
    /* 0082b0fb: mov dword ptr [0xacb9ec], eax */ W32((u32)(0xacb9ecu), r_eax);
    /* 0082b100: mov dword ptr [0xacba10], 0 */ W32((u32)(0xacba10u), 0x0u);
    /* 0082b10a: mov dword ptr [0xacba14], edx */ W32((u32)(0xacba14u), r_edx);
    /* 0082b110: mov dword ptr [0xacba18], 0 */ W32((u32)(0xacba18u), 0x0u);
    /* 0082b11a: mov dword ptr [0xacba1c], edx */ W32((u32)(0xacba1cu), r_edx);
    /* 0082b120: mov dword ptr [0xacba24], 0 */ W32((u32)(0xacba24u), 0x0u);
    /* 0082b12a: mov dword ptr [0xacba20], ecx */ W32((u32)(0xacba20u), r_ecx);
    /* 0082b130: mov dword ptr [0xacba28], ecx */ W32((u32)(0xacba28u), r_ecx);
    /* 0082b136: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082b139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082b13a: ret  */ FN_RET(0x0082aecb); r_esp += 4; return;
}

