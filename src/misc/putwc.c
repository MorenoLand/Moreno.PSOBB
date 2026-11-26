#include "protos.h"

void f_00865f69(void) /* __putwc_lk */
{
    FN_ENTER(0x00865f69);
    /* 00865f69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00865f6a: mov ebp, esp */ r_ebp = r_esp;
    /* 00865f6c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00865f6f: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00865f74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865f75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865f76: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00865f79: test byte ptr [esi + 0xc], 0x40 */ {  u32 a = R8((u32)(r_esi+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865f7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00865f80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865f81: jne 0x866012 */ if (!fZ) goto L_00866012;
L_00865f87:; BB(0x00865f87);
    /* 00865f87: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00865f8a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865f8d: je 0x865fa6 */ if (fZ) goto L_00865fa6;
L_00865f8f:; BB(0x00865f8f);
    /* 00865f8f: mov ecx, eax */ r_ecx = r_eax;
    /* 00865f91: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00865f94: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 00865f9b: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00865f9e: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00865fa1: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00865fa4: jmp 0x865fab */ goto L_00865fab;
L_00865fa6:; BB(0x00865fa6);
    /* 00865fa6: mov eax, 0xa24120 */ r_eax = 0xa24120u;
L_00865fab:; BB(0x00865fab);
    /* 00865fab: test byte ptr [eax + 4], 0x80 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865faf: je 0x866012 */ if (fZ) goto L_00866012;
L_00865fb1:; BB(0x00865fb1);
    /* 00865fb1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865fb4: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00865fb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865fb8: call 0x85ad71 */ r_esp -= 4; W32(r_esp, 0x865fbdu); f_0085ad71();
    /* 00865fbd: mov ebx, eax */ r_ebx = r_eax;
    /* 00865fbf: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865fc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865fc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865fc4: jne 0x865fd7 */ if (!fZ) goto L_00865fd7;
L_00865fc6:; BB(0x00865fc6);
    /* 00865fc6: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x865fcbu); f_00859dd6();
    /* 00865fcb: mov dword ptr [eax], 0x2a */ W32((u32)(r_eax), 0x2au);
L_00865fd1:; BB(0x00865fd1);
    /* 00865fd1: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00865fd5: jmp 0x866032 */ goto L_00866032;
L_00865fd7:; BB(0x00865fd7);
    /* 00865fd7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00865fd9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00865fdb: jle 0x86600c */ if ((fZ||fS!=fO)) goto L_0086600c;
L_00865fdd:; BB(0x00865fdd);
    /* 00865fdd: dec dword ptr [esi + 4] */ { u32 ad = (u32)(r_esi+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00865fe0: js 0x865ff4 */ if (fS) goto L_00865ff4;
L_00865fe2:; BB(0x00865fe2);
    /* 00865fe2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00865fe4: mov cl, byte ptr [ebp + edi - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edi+0xfffffff4u))) & 0xffu);
    /* 00865fe8: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00865fea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00865fec: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 00865fef: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00865ff0: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00865ff2: jmp 0x866002 */ goto L_00866002;
L_00865ff4:; BB(0x00865ff4);
    /* 00865ff4: movsx eax, byte ptr [ebp + edi - 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0xfffffff4u));
    /* 00865ff9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865ffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865ffb: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x866000u); f_0085cd86();
    /* 00866000: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866001: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00866002:; BB(0x00866002);
    /* 00866002: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866005: je 0x865fd1 */ if (fZ) goto L_00865fd1;
L_00866007:; BB(0x00866007);
    /* 00866007: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00866008: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086600a: jl 0x865fdd */ if ((fS!=fO)) goto L_00865fdd;
L_0086600c:; BB(0x0086600c);
    /* 0086600c: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00866010: jmp 0x866032 */ goto L_00866032;
L_00866012:; BB(0x00866012);
    /* 00866012: add dword ptr [esi + 4], -2 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00866016: js 0x866025 */ if (fS) goto L_00866025;
L_00866018:; BB(0x00866018);
    /* 00866018: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0086601a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086601d: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00866020: add dword ptr [esi], 2 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00866023: jmp 0x866032 */ goto L_00866032;
L_00866025:; BB(0x00866025);
    /* 00866025: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00866029: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086602a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086602b: call 0x8697db */ r_esp -= 4; W32(r_esp, 0x866030u); f_008697db();
    /* 00866030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866031: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00866032:; BB(0x00866032);
    /* 00866032: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866035: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866036: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866037: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866038: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86603du); f_0085e419();
    /* 0086603d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086603e: ret  */ FN_RET(0x00865f69); r_esp += 4; return;
}

