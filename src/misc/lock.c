#include "protos.h"

void f_0085bbfc(void) /* __lock_file */
{
    FN_ENTER(0x0085bbfc);
    /* 0085bbfc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085bc00: mov ecx, 0xa239e0 */ r_ecx = 0xa239e0u;
    /* 0085bc05: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085bc07: jb 0x85bc20 */ if (fC) goto L_0085bc20;
L_0085bc09:; BB(0x0085bc09);
    /* 0085bc09: cmp eax, 0xa23c40 */ {  u32 a = r_eax; u32 b = 0xa23c40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085bc0e: ja 0x85bc20 */ if ((!fC&&!fZ)) goto L_0085bc20;
L_0085bc10:; BB(0x0085bc10);
    /* 0085bc10: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc12: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0085bc15: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc19: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85bc1eu); f_0085e57a();
    /* 0085bc1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bc1f: ret  */ FN_RET(0x0085bbfc); r_esp += 4; return;
L_0085bc20:; BB(0x0085bc20);
    /* 0085bc20: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc24: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x85bc2au); call_ind(t); }
    /* 0085bc2a: ret  */ FN_RET(0x0085bbfc); r_esp += 4; return;
}

void f_0085bc2b(void) /* __lock_file2 */
{
    FN_ENTER(0x0085bc2b);
    /* 0085bc2b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085bc2f: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bc32: jge 0x85bc3f */ if ((fS==fO)) goto L_0085bc3f;
L_0085bc34:; BB(0x0085bc34);
    /* 0085bc34: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc38: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85bc3du); f_0085e57a();
    /* 0085bc3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bc3e: ret  */ FN_RET(0x0085bc2b); r_esp += 4; return;
L_0085bc3f:; BB(0x0085bc3f);
    /* 0085bc3f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085bc43: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bc46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bc47: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x85bc4du); call_ind(t); }
    /* 0085bc4d: ret  */ FN_RET(0x0085bc2b); r_esp += 4; return;
}

void f_00863b11(void) /* __lock_fhandle */
{
    FN_ENTER(0x00863b11);
    /* 00863b11: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00863b13: push 0x998ab8 */ { u32 v = 0x998ab8u; r_esp -= 4; W32(r_esp, v); }
    /* 00863b18: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x863b1du); f_0085e5ac();
    /* 00863b1d: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00863b20: mov ecx, edi */ r_ecx = r_edi;
    /* 00863b22: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00863b25: mov eax, edi */ r_eax = r_edi;
    /* 00863b27: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00863b2a: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00863b2d: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 00863b34: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 00863b37: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00863b39: cmp dword ptr [esi + 8], ebx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863b3c: jne 0x863b7f */ if (!fZ) goto L_00863b7f;
L_00863b3e:; BB(0x00863b3e);
    /* 00863b3e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00863b40: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x863b45u); f_0085e57a();
    /* 00863b45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863b46: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00863b49: cmp dword ptr [esi + 8], ebx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863b4c: jne 0x863b76 */ if (!fZ) goto L_00863b76;
L_00863b4e:; BB(0x00863b4e);
    /* 00863b4e: push 0xfa0 */ { u32 v = 0xfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00863b53: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 00863b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863b57: call 0x868a8e */ r_esp -= 4; W32(r_esp, 0x863b5cu); f_00868a8e();
    /* 00863b5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863b5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863b60: jne 0x863b73 */ if (!fZ) goto L_00863b73;
L_00863b62:; BB(0x00863b62);
    /* 00863b62: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00863b64: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00863b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863b68: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x863b6du); f_0085790e();
    /* 00863b6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863b6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863b6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00863b71: jmp 0x863b9f */ goto L_00863b9f;
L_00863b73:; BB(0x00863b73);
    /* 00863b73: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00863b76:; BB(0x00863b76);
    /* 00863b76: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863b7a: call 0x863ba8 */ r_esp -= 4; W32(r_esp, 0x863b7fu); f_00863ba8();
L_00863b7f:; BB(0x00863b7f);
    /* 00863b7f: mov eax, edi */ r_eax = r_edi;
    /* 00863b81: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00863b84: and edi, 0x1f */ {  u32 a = r_edi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00863b87: lea ecx, [edi + edi*8] */ r_ecx = (u32)(r_edi+r_edi*8);
    /* 00863b8a: mov eax, dword ptr [eax*4 + 0xaf0a80] */ r_eax = R32((u32)(r_eax*4+0xaf0a80u));
    /* 00863b91: lea eax, [eax + ecx*4 + 0xc] */ r_eax = (u32)(r_eax+r_ecx*4+0xcu);
    /* 00863b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863b96: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x863b9cu); call_ind(t); }
    /* 00863b9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00863b9e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00863b9f:; BB(0x00863b9f);
    /* 00863b9f: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863ba4u); f_0085e5e7();
    /* 00863ba4: ret  */ FN_RET(0x00863b11); r_esp += 4; return;
}

