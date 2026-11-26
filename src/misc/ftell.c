#include "protos.h"

void f_0085a8f2(void) /* __ftell_lk */
{
    FN_ENTER(0x0085a8f2);
    /* 0085a8f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a8f3: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a8f5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085a8f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a8f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a8fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a8fb: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0085a8fe: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 0085a901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085a903: cmp dword ptr [edi + 4], ebx */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a906: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0085a909: jge 0x85a90e */ if ((fS==fO)) goto L_0085a90e;
L_0085a90b:; BB(0x0085a90b);
    /* 0085a90b: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
L_0085a90e:; BB(0x0085a90e);
    /* 0085a90e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a910: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a911: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a912: call 0x8648cf */ r_esp -= 4; W32(r_esp, 0x85a917u); f_008648cf();
    /* 0085a917: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a91a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085a91c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085a91f: jl 0x85a98f */ if ((fS!=fO)) goto L_0085a98f;
L_0085a921:; BB(0x0085a921);
    /* 0085a921: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0085a924: test cx, 0x108 */ {  u32 a = (u16)r_ecx; u32 b = 0x108u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085a929: jne 0x85a933 */ if (!fZ) goto L_0085a933;
L_0085a92b:; BB(0x0085a92b);
    /* 0085a92b: sub eax, dword ptr [edi + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a92e: jmp 0x85aa4f */ goto L_0085aa4f;
L_0085a933:; BB(0x0085a933);
    /* 0085a933: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0085a935: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0085a938: mov ebx, eax */ r_ebx = r_eax;
    /* 0085a93a: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0085a93c: test cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a93f: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 0085a942: je 0x85a980 */ if (fZ) goto L_0085a980;
L_0085a944:; BB(0x0085a944);
    /* 0085a944: mov ebx, esi */ r_ebx = r_esi;
    /* 0085a946: mov ecx, esi */ r_ecx = r_esi;
    /* 0085a948: sar ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0085a94b: mov ebx, dword ptr [ebx*4 + 0xaf0a80] */ r_ebx = R32((u32)(r_ebx*4+0xaf0a80u));
    /* 0085a952: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085a955: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 0085a958: test byte ptr [ebx + ecx*4 + 4], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_ecx*4+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a95d: je 0x85a972 */ if (fZ) goto L_0085a972;
L_0085a95f:; BB(0x0085a95f);
    /* 0085a95f: mov ecx, edx */ r_ecx = r_edx;
    /* 0085a961: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085a963: jae 0x85a972 */ if (!fC) goto L_0085a972;
L_0085a965:; BB(0x0085a965);
    /* 0085a965: cmp byte ptr [ecx], 0xa */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085a968: jne 0x85a96d */ if (!fZ) goto L_0085a96d;
L_0085a96a:; BB(0x0085a96a);
    /* 0085a96a: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085a96d:; BB(0x0085a96d);
    /* 0085a96d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085a96e: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085a970: jb 0x85a965 */ if (fC) goto L_0085a965;
L_0085a972:; BB(0x0085a972);
    /* 0085a972: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085a976: jne 0x85a997 */ if (!fZ) goto L_0085a997;
L_0085a978:; BB(0x0085a978);
    /* 0085a978: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085a97b: jmp 0x85aa4f */ goto L_0085aa4f;
L_0085a980:; BB(0x0085a980);
    /* 0085a980: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 0085a982: js 0x85a972 */ if (fS) goto L_0085a972;
L_0085a984:; BB(0x0085a984);
    /* 0085a984: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85a989u); f_00859dd6();
    /* 0085a989: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
L_0085a98f:; BB(0x0085a98f);
    /* 0085a98f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a992: jmp 0x85aa4f */ goto L_0085aa4f;
L_0085a997:; BB(0x0085a997);
    /* 0085a997: test byte ptr [edi + 0xc], 1 */ {  u32 a = R8((u32)(r_edi+0xcu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a99b: je 0x85aa47 */ if (fZ) goto L_0085aa47;
L_0085a9a1:; BB(0x0085a9a1);
    /* 0085a9a1: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0085a9a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a9a6: jne 0x85a9b0 */ if (!fZ) goto L_0085a9b0;
L_0085a9a8:; BB(0x0085a9a8);
    /* 0085a9a8: and dword ptr [ebp - 8], ecx */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085a9ab: jmp 0x85aa47 */ goto L_0085aa47;
L_0085a9b0:; BB(0x0085a9b0);
    /* 0085a9b0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085a9b2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085a9b4: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0085a9b7: mov eax, esi */ r_eax = r_esi;
    /* 0085a9b9: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0085a9bc: lea ebx, [eax*4 + 0xaf0a80] */ r_ebx = (u32)(r_eax*4+0xaf0a80u);
    /* 0085a9c3: mov eax, esi */ r_eax = r_esi;
    /* 0085a9c5: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085a9c8: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 0085a9cb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0085a9cd: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0085a9d0: test byte ptr [esi + eax + 4], 0x80 */ {  u32 a = R8((u32)(r_esi+r_eax+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085a9d5: je 0x85aa41 */ if (fZ) goto L_0085aa41;
L_0085a9d7:; BB(0x0085a9d7);
    /* 0085a9d7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a9d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a9db: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a9de: call 0x8648cf */ r_esp -= 4; W32(r_esp, 0x85a9e3u); f_008648cf();
    /* 0085a9e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a9e6: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085a9e9: jne 0x85aa08 */ if (!fZ) goto L_0085aa08;
L_0085a9eb:; BB(0x0085a9eb);
    /* 0085a9eb: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0085a9ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085a9f1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085a9f3: jmp 0x85a9fe */ goto L_0085a9fe;
L_0085a9f5:; BB(0x0085a9f5);
    /* 0085a9f5: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085a9f8: jne 0x85a9fd */ if (!fZ) goto L_0085a9fd;
L_0085a9fa:; BB(0x0085a9fa);
    /* 0085a9fa: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085a9fd:; BB(0x0085a9fd);
    /* 0085a9fd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085a9fe:; BB(0x0085a9fe);
    /* 0085a9fe: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085aa00: jb 0x85a9f5 */ if (fC) goto L_0085a9f5;
L_0085aa02:; BB(0x0085aa02);
    /* 0085aa02: test byte ptr [edi + 0xd], 0x20 */ {  u32 a = R8((u32)(r_edi+0xdu)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085aa06: jmp 0x85aa3c */ goto L_0085aa3c;
L_0085aa08:; BB(0x0085aa08);
    /* 0085aa08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085aa0a: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aa0d: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085aa10: call 0x8648cf */ r_esp -= 4; W32(r_esp, 0x85aa15u); f_008648cf();
    /* 0085aa15: mov eax, 0x200 */ r_eax = 0x200u;
    /* 0085aa1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085aa1d: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085aa20: ja 0x85aa2f */ if ((!fC&&!fZ)) goto L_0085aa2f;
L_0085aa22:; BB(0x0085aa22);
    /* 0085aa22: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0085aa25: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085aa28: je 0x85aa2f */ if (fZ) goto L_0085aa2f;
L_0085aa2a:; BB(0x0085aa2a);
    /* 0085aa2a: test ch, 4 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085aa2d: je 0x85aa32 */ if (fZ) goto L_0085aa32;
L_0085aa2f:; BB(0x0085aa2f);
    /* 0085aa2f: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
L_0085aa32:; BB(0x0085aa32);
    /* 0085aa32: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0085aa35: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0085aa37: test byte ptr [esi + eax + 4], 4 */ {  u32 a = R8((u32)(r_esi+r_eax+0x4u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
L_0085aa3c:; BB(0x0085aa3c);
    /* 0085aa3c: je 0x85aa41 */ if (fZ) goto L_0085aa41;
L_0085aa3e:; BB(0x0085aa3e);
    /* 0085aa3e: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085aa41:; BB(0x0085aa41);
    /* 0085aa41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085aa44: sub dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085aa47:; BB(0x0085aa47);
    /* 0085aa47: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085aa4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085aa4d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0085aa4f:; BB(0x0085aa4f);
    /* 0085aa4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085aa50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085aa51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085aa52: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085aa53: ret  */ FN_RET(0x0085a8f2); r_esp += 4; return;
}

