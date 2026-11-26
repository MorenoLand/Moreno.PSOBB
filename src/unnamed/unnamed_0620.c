#include "protos.h"

void f_00620000(void)
{
    FN_ENTER(0x00620000);
    /* 00620000: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00620002: mov dword ptr [ebp - 0x30], 7 */ W32((u32)(r_ebp+0xffffffd0u), 0x7u);
    /* 00620009: mov dword ptr [ebp - 0x2c], 9 */ W32((u32)(r_ebp+0xffffffd4u), 0x9u);
    /* 00620010: mov dword ptr [ebp - 0x28], 0xb */ W32((u32)(r_ebp+0xffffffd8u), 0xbu);
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x00620000); r_esp += 12; return;
}

void f_0062001b(void)
{
    FN_ENTER(0x0062001b);
    goto L_0062001b;
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
L_0062001b:; BB(0x0062001b);
    /* 0062001b: adc al, 0x1b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x1bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x0062001b); r_esp += 12; return;
}

void f_00620036(void)
{
    FN_ENTER(0x00620036);
    goto L_00620036;
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
L_00620036:; BB(0x00620036);
    /* 00620036: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00620037: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00620039: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x00620036); r_esp += 12; return;
}

void f_00620041(void)
{
    FN_ENTER(0x00620041);
    goto L_00620041;
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
L_00620041:; BB(0x00620041);
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x00620041); r_esp += 12; return;
}

void f_00620042(void)
{
    FN_ENTER(0x00620042);
    goto L_00620042;
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
L_00620026:; BB(0x00620026);
    /* 00620026: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 00620028: test cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a & b) & 0xffu;   }
    /* 0062002a: push ss */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0062002b: add byte ptr [ebx + 0x8c483d0], cl */ { u32 ad = (u32)(r_ebx+0x8c483d0u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620042:; BB(0x00620042);
    /* 00620042: aam 0x8b */ UNSUP(0x00620042, "aam 0x8b");
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620044: jge 0x620026 */ if ((fS==fO)) goto L_00620026;
L_00620046:; BB(0x00620046);
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x00620042); r_esp += 12; return;
}

void f_00620046(void)
{
    FN_ENTER(0x00620046);
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x00620046); r_esp += 12; return;
}

void f_00620047(void)
{
    FN_ENTER(0x00620047);
    goto L_00620047;
L_00620017:; BB(0x00620017);
    /* 00620017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0062001a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0062001d: push dword ptr [ebp + edx - 0x44] */ { u32 v = R32((u32)(r_ebp+r_edx+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00620021: push dword ptr [eax + 0xd4] */ { u32 v = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620027: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x62002cu); f_0078e9b0();
    /* 0062002c: mov edx, eax */ r_edx = r_eax;
L_0062002d:; BB(0x0062002d);
    /* 0062002d: rol byte ptr [ebx + 0x458b08c4], 1 */ { u32 ad = (u32)(r_ebx+0x458b08c4u); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0062002e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00620031: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620033: fmul qword ptr [ecx + 0xd85894] */ ST(0) = ST(0) * R_F64((u32)(r_ecx+0xd85894u));
    /* 00620034: mov dword ptr [eax + ebx*2 + 0xd8], edx */ W32((u32)(r_eax+r_ebx*2+0xd8u), r_edx);
    /* 00620039: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062003b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062003e: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620041: jl 0x620017 */ if ((fS!=fO)) goto L_00620017;
L_00620043:; BB(0x00620043);
    /* 00620043: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620046: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_00620047:; BB(0x00620047);
    /* 00620047: jne 0x62002d */ if (!fZ) goto L_0062002d;
L_00620049:; BB(0x00620049);
    /* 00620049: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062004c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062004f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620056: mov esp, ebp */ r_esp = r_ebp;
    /* 00620058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620059: ret 8 */ FN_RET(0x00620047); r_esp += 12; return;
}

void f_00620059(void)
{
    FN_ENTER(0x00620059);
    /* 00620059: ret 8 */ FN_RET(0x00620059); r_esp += 12; return;
}

void f_00620062(void)
{
    FN_ENTER(0x00620062);
    /* 00620062: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00620064: shr cl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 00620066: xor bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    UNSUP(0x00620068, "falls out of decoded code");
}

void f_0062006f(void)
{
    FN_ENTER(0x0062006f);
}

void f_00620072(void)
{
    FN_ENTER(0x00620072);
    /* 00620072: nop  */ ;
    /* 00620073: nop  */ ;
    /* 00620074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620075: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00620077: mov edx, dword ptr [ebp + 0x84] */ r_edx = R32((u32)(r_ebp+0x84u));
    /* 0062007d: mov dword ptr [ebp + 0xc8], edx */ W32((u32)(r_ebp+0xc8u), r_edx);
    /* 00620083: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620089: jle 0x620097 */ if ((fZ||fS!=fO)) goto L_00620097;
L_0062008b:; BB(0x0062008b);
    /* 0062008b: mov dword ptr [ebp + 0xcc], 0 */ W32((u32)(r_ebp+0xccu), 0x0u);
    /* 00620095: jmp 0x6200af */ goto L_006200af;
L_00620097:; BB(0x00620097);
    /* 00620097: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00620099: jl 0x6200eb */ if ((fS!=fO)) goto L_006200eb;
L_0062009b:; BB(0x0062009b);
    /* 0062009b: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 006200a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006200a3: jl 0x6200b3 */ if ((fS!=fO)) goto L_006200b3;
L_006200a5:; BB(0x006200a5);
    /* 006200a5: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
L_006200af:; BB(0x006200af);
    /* 006200af: mov eax, edx */ r_eax = r_edx;
    /* 006200b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006200b2: ret  */ FN_RET(0x00620072); r_esp += 4; return;
L_006200b3:; BB(0x006200b3);
    /* 006200b3: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6200b8u); f_007a61a4();
    /* 006200b8: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006200bb: je 0x6200d9 */ if (fZ) goto L_006200d9;
L_006200bd:; BB(0x006200bd);
    /* 006200bd: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6200c2u); f_006dc358();
    /* 006200c2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006200c5: je 0x6200d9 */ if (fZ) goto L_006200d9;
L_006200c7:; BB(0x006200c7);
    /* 006200c7: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 006200cd: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
    /* 006200d7: jmp 0x6200af */ goto L_006200af;
L_006200d9:; BB(0x006200d9);
    /* 006200d9: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 006200df: mov dword ptr [ebp + 0xcc], 3 */ W32((u32)(r_ebp+0xccu), 0x3u);
    /* 006200e9: jmp 0x6200af */ goto L_006200af;
L_006200eb:; BB(0x006200eb);
    /* 006200eb: mov dword ptr [ebp + 0xcc], 1 */ W32((u32)(r_ebp+0xccu), 0x1u);
    /* 006200f5: jmp 0x6200af */ goto L_006200af;
}

void f_00620074(void) /* sub_620074 */
{
    FN_ENTER(0x00620074);
    /* 00620074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620075: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00620077: mov edx, dword ptr [ebp + 0x84] */ r_edx = R32((u32)(r_ebp+0x84u));
    /* 0062007d: mov dword ptr [ebp + 0xc8], edx */ W32((u32)(r_ebp+0xc8u), r_edx);
    /* 00620083: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620089: jle 0x620097 */ if ((fZ||fS!=fO)) goto L_00620097;
L_0062008b:; BB(0x0062008b);
    /* 0062008b: mov dword ptr [ebp + 0xcc], 0 */ W32((u32)(r_ebp+0xccu), 0x0u);
    /* 00620095: jmp 0x6200af */ goto L_006200af;
L_00620097:; BB(0x00620097);
    /* 00620097: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00620099: jl 0x6200eb */ if ((fS!=fO)) goto L_006200eb;
L_0062009b:; BB(0x0062009b);
    /* 0062009b: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 006200a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006200a3: jl 0x6200b3 */ if ((fS!=fO)) goto L_006200b3;
L_006200a5:; BB(0x006200a5);
    /* 006200a5: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
L_006200af:; BB(0x006200af);
    /* 006200af: mov eax, edx */ r_eax = r_edx;
    /* 006200b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006200b2: ret  */ FN_RET(0x00620074); r_esp += 4; return;
L_006200b3:; BB(0x006200b3);
    /* 006200b3: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6200b8u); f_007a61a4();
    /* 006200b8: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006200bb: je 0x6200d9 */ if (fZ) goto L_006200d9;
L_006200bd:; BB(0x006200bd);
    /* 006200bd: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6200c2u); f_006dc358();
    /* 006200c2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006200c5: je 0x6200d9 */ if (fZ) goto L_006200d9;
L_006200c7:; BB(0x006200c7);
    /* 006200c7: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 006200cd: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
    /* 006200d7: jmp 0x6200af */ goto L_006200af;
L_006200d9:; BB(0x006200d9);
    /* 006200d9: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 006200df: mov dword ptr [ebp + 0xcc], 3 */ W32((u32)(r_ebp+0xccu), 0x3u);
    /* 006200e9: jmp 0x6200af */ goto L_006200af;
L_006200eb:; BB(0x006200eb);
    /* 006200eb: mov dword ptr [ebp + 0xcc], 1 */ W32((u32)(r_ebp+0xccu), 0x1u);
    /* 006200f5: jmp 0x6200af */ goto L_006200af;
}

void f_006200a4(void)
{
    FN_ENTER(0x006200a4);
    /* 006200a4: push cs */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006200a5: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
    /* 006200af: mov eax, edx */ r_eax = r_edx;
    /* 006200b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006200b2: ret  */ FN_RET(0x006200a4); r_esp += 4; return;
}

void f_006200aa(void)
{
    FN_ENTER(0x006200aa);
    /* 006200aa: add byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006200ac: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006200ae: add byte ptr [ebx - 0x173ca23e], cl */ { u32 ad = (u32)(r_ebx+0xe8c35dc2u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
L_006200af:; BB(0x006200af);
    /* 006200af: mov eax, edx */ r_eax = r_edx;
    /* 006200b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006200b2: ret  */ FN_RET(0x006200aa); r_esp += 4; return;
    /* 006200b4: in al, dx */ UNSUP(0x006200b4, "in al, dx");
    /* 006200b5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006200b6: sbb byte ptr [eax], al */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 006200b8: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006200bb: je 0x6200d9 */ if (fZ) goto L_006200d9;
L_006200bd:; BB(0x006200bd);
    /* 006200bd: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6200c2u); f_006dc358();
    /* 006200c2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006200c5: je 0x6200d9 */ if (fZ) goto L_006200d9;
L_006200c7:; BB(0x006200c7);
    /* 006200c7: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 006200cd: mov dword ptr [ebp + 0xcc], 2 */ W32((u32)(r_ebp+0xccu), 0x2u);
    /* 006200d7: jmp 0x6200af */ goto L_006200af;
L_006200d9:; BB(0x006200d9);
    /* 006200d9: mov edx, dword ptr [ebp + 0xc8] */ r_edx = R32((u32)(r_ebp+0xc8u));
    /* 006200df: mov dword ptr [ebp + 0xcc], 3 */ W32((u32)(r_ebp+0xccu), 0x3u);
    /* 006200e9: jmp 0x6200af */ goto L_006200af;
}

void f_006200f8(void) /* sub_6200F8 */
{
    FN_ENTER(0x006200f8);
    /* 006200f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006200f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006200fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006200fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006200fc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006200ff: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00620101: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00620103: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620105: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062010b: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620111: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x620114u); call_ind(t); }
    /* 00620114: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620117: je 0x620121 */ if (fZ) goto L_00620121;
L_00620119:; BB(0x00620119);
    /* 00620119: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062011c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062011d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062011e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062011f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00620120: ret  */ FN_RET(0x006200f8); r_esp += 4; return;
L_00620121:; BB(0x00620121);
    /* 00620121: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00620126: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620128: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x62012du); f_00613244();
    /* 0062012d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620130: jne 0x620119 */ if (!fZ) goto L_00620119;
L_00620132:; BB(0x00620132);
    /* 00620132: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00620138: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062013b: je 0x6201eb */ if (fZ) goto L_006201eb;
L_00620141:; BB(0x00620141);
    /* 00620141: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620144: je 0x6201eb */ if (fZ) goto L_006201eb;
L_0062014a:; BB(0x0062014a);
    /* 0062014a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062014d: jne 0x620195 */ if (!fZ) goto L_00620195;
L_0062014f:; BB(0x0062014f);
    /* 0062014f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x620154u); f_0082d7b0();
    /* 00620154: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 0062015a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62015fu); f_00829cc8();
    /* 0062015f: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00620162: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x620167u); f_0082d838();
    /* 00620167: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0062016a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062016c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x620171u); f_0082d8bc();
    /* 00620171: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620177: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 0062017d: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 00620183: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x620188u); f_0083bd00();
    /* 00620188: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62018du); f_0082da80();
    /* 0062018d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00620190: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620191: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620192: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00620193: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00620194: ret  */ FN_RET(0x006200f8); r_esp += 4; return;
L_00620195:; BB(0x00620195);
    /* 00620195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620197: jne 0x620119 */ if (!fZ) goto L_00620119;
L_00620199:; BB(0x00620199);
    /* 00620199: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0062019f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006201a2: je 0x620231 */ if (fZ) goto L_00620231;
L_006201a8:; BB(0x006201a8);
    /* 006201a8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006201ab: je 0x620231 */ if (fZ) goto L_00620231;
L_006201b1:; BB(0x006201b1);
    /* 006201b1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6201b6u); f_0082d7b0();
    /* 006201b6: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 006201bc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6201c1u); f_00829cc8();
    /* 006201c1: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006201c4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6201c9u); f_0082d838();
    /* 006201c9: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006201cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006201ce: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6201d3u); f_0082d8bc();
    /* 006201d3: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 006201d9: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6201deu); f_00831758();
    /* 006201de: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6201e3u); f_0082da80();
    /* 006201e3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006201e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006201e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006201e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006201e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006201ea: ret  */ FN_RET(0x006200f8); r_esp += 4; return;
L_006201eb:; BB(0x006201eb);
    /* 006201eb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6201f0u); f_0082d7b0();
    /* 006201f0: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 006201f6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6201fbu); f_00829cc8();
    /* 006201fb: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006201fe: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x620203u); f_0082d838();
    /* 00620203: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00620206: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00620208: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62020du); f_0082d8bc();
    /* 0062020d: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620213: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 00620219: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 0062021f: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x620224u); f_0083bd00();
    /* 00620224: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x620229u); f_0082da80();
    /* 00620229: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062022c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062022d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062022e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062022f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00620230: ret  */ FN_RET(0x006200f8); r_esp += 4; return;
L_00620231:; BB(0x00620231);
    /* 00620231: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 00620237: mov eax, 1 */ r_eax = 0x1u;
    /* 0062023c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0062023f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00620243: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00620247: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0062024b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062024e: jne 0x62028c */ if (!fZ) goto L_0062028c;
L_00620250:; BB(0x00620250);
    /* 00620250: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 00620256: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00620258: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062025a: jle 0x62028c */ if ((fZ||fS!=fO)) goto L_0062028c;
L_0062025c:; BB(0x0062025c);
    /* 0062025c: mov eax, ebp */ r_eax = r_ebp;
    /* 0062025e: add eax, dword ptr [ebx + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620264: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00620267: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620268: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x62026du); f_00816eec();
    /* 0062026d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062026e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00620271: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620274: je 0x6203ae */ if (fZ) goto L_006203ae;
L_0062027a:; BB(0x0062027a);
    /* 0062027a: mov dword ptr [esp + ebp*4], 0 */ W32((u32)(r_esp+r_ebp*4), 0x0u);
L_00620281:; BB(0x00620281);
    /* 00620281: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00620284: cmp ebp, dword ptr [ebx + 0x88] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x88u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062028a: jl 0x62025c */ if ((fS!=fO)) goto L_0062025c;
L_0062028c:; BB(0x0062028c);
    /* 0062028c: mov edi, dword ptr [ebx + 0xd4] */ r_edi = R32((u32)(r_ebx+0xd4u));
    /* 00620292: lea esi, [ebx + 0xd8] */ r_esi = (u32)(r_ebx+0xd8u);
    /* 00620298: lea ebp, [ebx + 0xe8] */ r_ebp = (u32)(r_ebx+0xe8u);
    /* 0062029e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6202a3u); f_0082d7b0();
    /* 006202a3: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006202a6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6202abu); f_00829cc8();
    /* 006202ab: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006202ae: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6202b3u); f_0082d838();
    /* 006202b3: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006202b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006202b8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6202bdu); f_0082d8bc();
    /* 006202bd: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 006202c0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6202c5u); f_0082d838();
    /* 006202c5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6202cau); f_0082d7b0();
    /* 006202ca: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006202cd: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006202d0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6202d5u); f_0082d838();
    /* 006202d5: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006202d8: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006202db: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6202e0u); f_008321d8();
    /* 006202e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006202e1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6202e6u); f_0082da80();
    /* 006202e6: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006202e9: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006202ec: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006202ef: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6202f4u); f_0082d838();
    /* 006202f4: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006202f7: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006202fa: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006202fd: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x620302u); f_008321d8();
    /* 00620302: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620303: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00620306: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00620309: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0062030c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062030f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x620314u); f_0082d838();
    /* 00620314: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00620317: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0062031a: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 0062031d: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620320: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x620325u); f_008321d8();
    /* 00620325: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620326: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x62032bu); f_0082dbac();
    /* 0062032b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0062032d:; BB(0x0062032d);
    /* 0062032d: mov eax, dword ptr [esp + edi*4] */ r_eax = R32((u32)(r_esp+r_edi*4));
    /* 00620330: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620333: je 0x6203ba */ if (fZ) goto L_006203ba;
L_00620339:; BB(0x00620339);
    /* 00620339: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 0062033c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x620341u); f_00829cc8();
L_00620341:; BB(0x00620341);
    /* 00620341: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00620343: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620345: je 0x620366 */ if (fZ) goto L_00620366;
L_00620347:; BB(0x00620347);
    /* 00620347: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62034cu); f_0082d7b0();
    /* 0062034c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0062034e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620351: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x620356u); f_0082d838();
    /* 00620356: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00620358: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062035b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x620360u); f_008321d8();
    /* 00620360: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620361: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x620366u); f_0082da80();
L_00620366:; BB(0x00620366);
    /* 00620366: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00620369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062036b: je 0x62038e */ if (fZ) goto L_0062038e;
L_0062036d:; BB(0x0062036d);
    /* 0062036d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x620372u); f_0082d7b0();
    /* 00620372: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00620375: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00620378: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62037du); f_0082d838();
    /* 0062037d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00620380: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620383: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x620388u); f_008321d8();
    /* 00620388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620389: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62038eu); f_0082da80();
L_0062038e:; BB(0x0062038e);
    /* 0062038e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00620391: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00620394: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00620397: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062039a: jl 0x62032d */ if ((fS!=fO)) goto L_0062032d;
L_0062039c:; BB(0x0062039c);
    /* 0062039c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6203a1u); f_0082dab0();
    /* 006203a1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6203a6u); f_0082da80();
    /* 006203a6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006203a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006203aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006203ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006203ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006203ad: ret  */ FN_RET(0x006200f8); r_esp += 4; return;
L_006203ae:; BB(0x006203ae);
    /* 006203ae: mov dword ptr [esp + ebp*4], 1 */ W32((u32)(r_esp+r_ebp*4), 0x1u);
    /* 006203b5: jmp 0x620281 */ goto L_00620281;
L_006203ba:; BB(0x006203ba);
    /* 006203ba: mov ecx, dword ptr [0xa8ec50] */ r_ecx = R32((u32)(0xa8ec50u));
    /* 006203c0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6203c5u); f_00829cc8();
    /* 006203c5: jmp 0x620341 */ goto L_00620341;
}

void f_006203cc(void) /* sub_6203CC */
{
    FN_ENTER(0x006203cc);
    /* 006203cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006203cd: mov esi, ecx */ r_esi = r_ecx;
    /* 006203cf: mov edx, dword ptr [esi + 0x84] */ r_edx = R32((u32)(r_esi+0x84u));
    /* 006203d5: mov eax, 0xfc */ r_eax = 0xfcu;
    /* 006203da: cmp edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006203e0: mov ecx, esi */ r_ecx = r_esi;
    /* 006203e2: jl 0x6203e6 */ if ((fS!=fO)) goto L_006203e6;
L_006203e4:; BB(0x006203e4);
    /* 006203e4: mov edx, eax */ r_edx = r_eax;
L_006203e6:; BB(0x006203e6);
    /* 006203e6: mov dword ptr [esi + 0x84], edx */ W32((u32)(r_esi+0x84u), r_edx);
    /* 006203ec: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 006203f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006203f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006203f6: jg 0x6203fa */ if ((!fZ&&fS==fO)) goto L_006203fa;
L_006203f8:; BB(0x006203f8);
    /* 006203f8: mov edx, eax */ r_edx = r_eax;
L_006203fa:; BB(0x006203fa);
    /* 006203fa: mov eax, 4 */ r_eax = 0x4u;
    /* 006203ff: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620402: jl 0x620406 */ if ((fS!=fO)) goto L_00620406;
L_00620404:; BB(0x00620404);
    /* 00620404: mov edx, eax */ r_edx = r_eax;
L_00620406:; BB(0x00620406);
    /* 00620406: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00620408: mov dword ptr [esi + 0x88], edx */ W32((u32)(r_esi+0x88u), r_edx);
    /* 0062040e: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x620411u); call_ind(t); }
    /* 00620411: push dword ptr [esi + 0xc8] */ { u32 v = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620417: push 0x9311ec */ { u32 v = 0x9311ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0062041c: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00620421: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x620426u); f_0061cdb0();
    /* 00620426: push dword ptr [esi + 0x88] */ { u32 v = R32((u32)(r_esi+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062042c: push 0x9311fc */ { u32 v = 0x9311fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00620431: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 00620436: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x62043bu); f_0061cdb0();
    /* 0062043b: push 0x931210 */ { u32 v = 0x931210u; r_esp -= 4; W32(r_esp, v); }
    /* 00620440: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 00620445: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x62044au); f_0061cdb0();
    /* 0062044a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062044d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062044e: ret  */ FN_RET(0x006203cc); r_esp += 4; return;
}

void f_00620450(void) /* sub_620450 */
{
    FN_ENTER(0x00620450);
    /* 00620450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620451: mov ebp, esp */ r_ebp = r_esp;
    /* 00620453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00620455: push 0x8e21a2 */ { u32 v = 0x8e21a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062045a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00620460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620461: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00620468: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062046b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062046e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00620471: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00620474: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00620477: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00620479: mov dword ptr [0xa8ec54], eax */ W32((u32)(0xa8ec54u), r_eax);
    /* 0062047e: mov dword ptr [0xa8ec50], eax */ W32((u32)(0xa8ec50u), r_eax);
    /* 00620483: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x620488u); f_00807ac0();
    /* 00620488: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062048b: jl 0x620579 */ if ((fS!=fO)) goto L_00620579;
L_00620491:; BB(0x00620491);
    /* 00620491: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620494: jle 0x620512 */ if ((fZ||fS!=fO)) goto L_00620512;
L_00620496:; BB(0x00620496);
    /* 00620496: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620499: jl 0x620579 */ if ((fS!=fO)) goto L_00620579;
L_0062049f:; BB(0x0062049f);
    /* 0062049f: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006204a2: jg 0x620579 */ if ((!fZ&&fS==fO)) goto L_00620579;
L_006204a8:; BB(0x006204a8);
    /* 006204a8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006204af: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006204b4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6204b9u); f_008581c5();
    /* 006204b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006204ba: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006204bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006204bf: je 0x6205e8 */ if (fZ) goto L_006205e8;
L_006204c5:; BB(0x006204c5);
    /* 006204c5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006204cc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006204d3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006204d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006204d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006204d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006204da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006204db: push 0x9c5440 */ { u32 v = 0x9c5440u; r_esp -= 4; W32(r_esp, v); }
    /* 006204e0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006204e2: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6204e7u); f_005b7a84();
    /* 006204e7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006204ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006204f1:; BB(0x006204f1);
    /* 006204f1: mov dword ptr [0xa8ec54], eax */ W32((u32)(0xa8ec54u), r_eax);
    /* 006204f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006204fd: push 0x9311d0 */ { u32 v = 0x9311d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00620502: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x620507u); f_008009dc();
    /* 00620507: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620508: mov dword ptr [0xa8ec50], eax */ W32((u32)(0xa8ec50u), r_eax);
    /* 0062050d: jmp 0x6205da */ goto L_006205da;
L_00620512:; BB(0x00620512);
    /* 00620512: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00620519: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062051e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x620523u); f_008581c5();
    /* 00620523: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620524: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00620527: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620529: je 0x6205ef */ if (fZ) goto L_006205ef;
L_0062052f:; BB(0x0062052f);
    /* 0062052f: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00620536: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0062053d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00620540: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00620542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620545: push 0x9c5420 */ { u32 v = 0x9c5420u; r_esp -= 4; W32(r_esp, v); }
    /* 0062054a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062054c: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x620551u); f_005b7a84();
    /* 00620551: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00620554: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0062055b:; BB(0x0062055b);
    /* 0062055b: mov dword ptr [0xa8ec54], eax */ W32((u32)(0xa8ec54u), r_eax);
    /* 00620560: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00620567: push 0x9311b4 */ { u32 v = 0x9311b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062056c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x620571u); f_008009dc();
    /* 00620571: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620572: mov dword ptr [0xa8ec50], eax */ W32((u32)(0xa8ec50u), r_eax);
    /* 00620577: jmp 0x6205da */ goto L_006205da;
L_00620579:; BB(0x00620579);
    /* 00620579: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00620580: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00620585: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x62058au); f_008581c5();
    /* 0062058a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062058b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062058e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620590: je 0x6205f6 */ if (fZ) goto L_006205f6;
L_00620592:; BB(0x00620592);
    /* 00620592: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00620599: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006205a0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006205a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006205a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006205a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006205a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006205a8: push 0x9c5420 */ { u32 v = 0x9c5420u; r_esp -= 4; W32(r_esp, v); }
    /* 006205ad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006205af: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6205b4u); f_005b7a84();
    /* 006205b4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006205b7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006205be:; BB(0x006205be);
    /* 006205be: mov dword ptr [0xa8ec54], eax */ W32((u32)(0xa8ec54u), r_eax);
    /* 006205c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006205ca: push 0x9311b4 */ { u32 v = 0x9311b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006205cf: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6205d4u); f_008009dc();
    /* 006205d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006205d5: mov dword ptr [0xa8ec50], eax */ W32((u32)(0xa8ec50u), r_eax);
L_006205da:; BB(0x006205da);
    /* 006205da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006205dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006205e4: mov esp, ebp */ r_esp = r_ebp;
    /* 006205e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006205e7: ret  */ FN_RET(0x00620450); r_esp += 4; return;
L_006205e8:; BB(0x006205e8);
    /* 006205e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006205ea: jmp 0x6204f1 */ goto L_006204f1;
L_006205ef:; BB(0x006205ef);
    /* 006205ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006205f1: jmp 0x62055b */ goto L_0062055b;
L_006205f6:; BB(0x006205f6);
    /* 006205f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006205f8: jmp 0x6205be */ goto L_006205be;
}

void f_006205fc(void) /* sub_6205FC */
{
    FN_ENTER(0x006205fc);
    /* 006205fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006205fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006205ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620601: call 0x6206ac */ r_esp -= 4; W32(r_esp, 0x620606u); f_006206ac();
    /* 00620606: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062060a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062060c: jne 0x620612 */ if (!fZ) goto L_00620612;
L_0062060e:; BB(0x0062060e);
    /* 0062060e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062060f: ret 4 */ FN_RET(0x006205fc); r_esp += 8; return;
L_00620612:; BB(0x00620612);
    /* 00620612: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620613: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x620618u); f_005c2f74();
    /* 00620618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620619: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062061a: ret 4 */ FN_RET(0x006205fc); r_esp += 8; return;
}

void f_00620620(void) /* sub_620620 */
{
    FN_ENTER(0x00620620);
    /* 00620620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620621: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00620623: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620625: call 0x620644 */ r_esp -= 4; W32(r_esp, 0x62062au); f_00620644();
    /* 0062062a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062062e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00620630: jne 0x620636 */ if (!fZ) goto L_00620636;
L_00620632:; BB(0x00620632);
    /* 00620632: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620633: ret 4 */ FN_RET(0x00620620); r_esp += 8; return;
L_00620636:; BB(0x00620636);
    /* 00620636: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620637: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x62063cu); f_005c2f74();
    /* 0062063c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062063d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062063e: ret 4 */ FN_RET(0x00620620); r_esp += 8; return;
}

void f_00620644(void) /* sub_620644 */
{
    FN_ENTER(0x00620644);
    /* 00620644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620645: mov ebp, esp */ r_ebp = r_esp;
    /* 00620647: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00620649: push 0x8e21bc */ { u32 v = 0x8e21bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0062064e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00620654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620655: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062065c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062065f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00620662: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00620665: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00620668: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062066b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062066e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620675: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620678: mov dword ptr [eax], 0xb27da0 */ W32((u32)(r_eax), 0xb27da0u);
    /* 0062067e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062067f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x620684u); f_007b4e84();
    /* 00620684: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620685: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620688: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x62068du); f_007b9c8c();
    /* 0062068d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00620694: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620697: call 0x6206ac */ r_esp -= 4; W32(r_esp, 0x62069cu); f_006206ac();
    /* 0062069c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062069f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006206a6: mov esp, ebp */ r_esp = r_ebp;
    /* 006206a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006206a9: ret  */ FN_RET(0x00620644); r_esp += 4; return;
}

void f_006206ac(void) /* sub_6206AC */
{
    FN_ENTER(0x006206ac);
    /* 006206ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006206ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006206af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006206b1: push 0x8e21d8 */ { u32 v = 0x8e21d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006206b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006206bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006206bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006206c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006206c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006206ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006206cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006206d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006206d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006206d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006206d9: mov dword ptr [ecx], 0xb27d40 */ W32((u32)(r_ecx), 0xb27d40u);
    /* 006206df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006206e6: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x6206ebu); f_00619b10();
    /* 006206eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006206ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006206f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006206f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006206f8: ret  */ FN_RET(0x006206ac); r_esp += 4; return;
}

void f_006206fc(void) /* sub_6206FC */
{
    FN_ENTER(0x006206fc);
    /* 006206fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006206fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006206ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620701: call 0x620720 */ r_esp -= 4; W32(r_esp, 0x620706u); f_00620720();
    /* 00620706: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062070a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062070c: jne 0x620712 */ if (!fZ) goto L_00620712;
L_0062070e:; BB(0x0062070e);
    /* 0062070e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062070f: ret 4 */ FN_RET(0x006206fc); r_esp += 8; return;
L_00620712:; BB(0x00620712);
    /* 00620712: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620713: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x620718u); f_005c2f74();
    /* 00620718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620719: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062071a: ret 4 */ FN_RET(0x006206fc); r_esp += 8; return;
}

void f_00620720(void) /* sub_620720 */
{
    FN_ENTER(0x00620720);
    /* 00620720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620721: mov ebp, esp */ r_ebp = r_esp;
    /* 00620723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00620725: push 0x8e21f4 */ { u32 v = 0x8e21f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062072a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00620730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620731: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00620738: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062073b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062073e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00620741: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00620744: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00620747: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062074a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620751: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620754: mov dword ptr [eax], 0xb27e00 */ W32((u32)(r_eax), 0xb27e00u);
    /* 0062075a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062075b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x620760u); f_007b4e84();
    /* 00620760: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620761: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620764: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x620769u); f_007b9c8c();
    /* 00620769: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00620770: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00620773: call 0x6206ac */ r_esp -= 4; W32(r_esp, 0x620778u); f_006206ac();
    /* 00620778: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062077b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00620782: mov esp, ebp */ r_esp = r_ebp;
    /* 00620784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620785: ret  */ FN_RET(0x00620720); r_esp += 4; return;
}

void f_00620788(void) /* sub_620788 */
{
    FN_ENTER(0x00620788);
    /* 00620788: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620789: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062078b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062078d: call 0x6207ac */ r_esp -= 4; W32(r_esp, 0x620792u); f_006207ac();
    /* 00620792: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00620796: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00620798: jne 0x62079e */ if (!fZ) goto L_0062079e;
L_0062079a:; BB(0x0062079a);
    /* 0062079a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062079b: ret 4 */ FN_RET(0x00620788); r_esp += 8; return;
L_0062079e:; BB(0x0062079e);
    /* 0062079e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062079f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6207a4u); f_005c2f74();
    /* 006207a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006207a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006207a6: ret 4 */ FN_RET(0x00620788); r_esp += 8; return;
}

void f_006207ac(void) /* sub_6207AC */
{
    FN_ENTER(0x006207ac);
    /* 006207ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006207ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006207af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006207b1: push 0x8e2210 */ { u32 v = 0x8e2210u; r_esp -= 4; W32(r_esp, v); }
    /* 006207b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006207bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006207bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006207c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006207c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006207ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006207cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006207d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006207d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006207d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006207dd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006207e0: mov dword ptr [eax], 0xb27e60 */ W32((u32)(r_eax), 0xb27e60u);
    /* 006207e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006207e7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6207ecu); f_007b4e84();
    /* 006207ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006207ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006207f0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6207f5u); f_007b9c8c();
    /* 006207f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006207fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006207ff: call 0x6206ac */ r_esp -= 4; W32(r_esp, 0x620804u); f_006206ac();
    /* 00620804: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620807: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062080e: mov esp, ebp */ r_esp = r_ebp;
    /* 00620810: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00620811: ret  */ FN_RET(0x006207ac); r_esp += 4; return;
}

void f_00620814(void) /* sub_620814 */
{
    FN_ENTER(0x00620814);
    /* 00620814: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620815: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00620817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620819: call 0x620838 */ r_esp -= 4; W32(r_esp, 0x62081eu); f_00620838();
    /* 0062081e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00620822: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00620824: jne 0x62082a */ if (!fZ) goto L_0062082a;
L_00620826:; BB(0x00620826);
    /* 00620826: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620827: ret 4 */ FN_RET(0x00620814); r_esp += 8; return;
L_0062082a:; BB(0x0062082a);
    /* 0062082a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062082b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x620830u); f_005c2f74();
    /* 00620830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620831: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620832: ret 4 */ FN_RET(0x00620814); r_esp += 8; return;
}

void f_00620838(void) /* sub_620838 */
{
    FN_ENTER(0x00620838);
    /* 00620838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620839: mov ebp, esp */ r_ebp = r_esp;
    /* 0062083b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062083d: push 0x8e222c */ { u32 v = 0x8e222cu; r_esp -= 4; W32(r_esp, v); }
    /* 00620842: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00620848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620849: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00620850: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620853: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00620856: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00620859: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062085c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062085f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00620862: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620869: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062086c: mov dword ptr [eax], 0xb27ec0 */ W32((u32)(r_eax), 0xb27ec0u);
    /* 00620872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620873: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x620878u); f_007b4e84();
    /* 00620878: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620879: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062087c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x620881u); f_007b9c8c();
    /* 00620881: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00620888: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062088b: call 0x6206ac */ r_esp -= 4; W32(r_esp, 0x620890u); f_006206ac();
    /* 00620890: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00620893: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062089a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062089c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062089d: ret  */ FN_RET(0x00620838); r_esp += 4; return;
}

void f_006208a0(void) /* sub_6208A0 */
{
    FN_ENTER(0x006208a0);
    /* 006208a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006208a1: mov edi, ecx */ r_edi = r_ecx;
    /* 006208a3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006208a5: mov ecx, edi */ r_ecx = r_edi;
    /* 006208a7: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006208ad: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006208b3: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6208b6u); call_ind(t); }
    /* 006208b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006208b9: je 0x6208bd */ if (fZ) goto L_006208bd;
L_006208bb:; BB(0x006208bb);
    /* 006208bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006208bc: ret  */ FN_RET(0x006208a0); r_esp += 4; return;
L_006208bd:; BB(0x006208bd);
    /* 006208bd: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 006208c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006208c6: je 0x620984 */ if (fZ) goto L_00620984;
L_006208cc:; BB(0x006208cc);
    /* 006208cc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006208cf: je 0x620984 */ if (fZ) goto L_00620984;
L_006208d5:; BB(0x006208d5);
    /* 006208d5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006208d8: jne 0x620927 */ if (!fZ) goto L_00620927;
L_006208da:; BB(0x006208da);
    /* 006208da: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6208dfu); f_0082d7b0();
    /* 006208df: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006208e1: mov ecx, edi */ r_ecx = r_edi;
    /* 006208e3: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x6208e6u); call_ind(t); }
    /* 006208e6: mov ecx, eax */ r_ecx = r_eax;
    /* 006208e8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6208edu); f_00829cc8();
    /* 006208ed: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006208f0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6208f5u); f_0082d838();
    /* 006208f5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006208f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006208fa: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6208ffu); f_0082d8bc();
    /* 006208ff: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x620904u); f_00835068();
    /* 00620904: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062090a: mov ecx, dword ptr [edi + 0xd4] */ r_ecx = R32((u32)(r_edi+0xd4u));
    /* 00620910: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 00620916: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x62091bu); f_00835574();
    /* 0062091b: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x620920u); f_00835078();
    /* 00620920: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x620925u); f_0082da80();
    /* 00620925: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00620926: ret  */ FN_RET(0x006208a0); r_esp += 4; return;
L_00620927:; BB(0x00620927);
    /* 00620927: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00620929: jne 0x6208bb */ if (!fZ) goto L_006208bb;
L_0062092b:; BB(0x0062092b);
    /* 0062092b: mov eax, dword ptr [edi + 0xcc] */ r_eax = R32((u32)(r_edi+0xccu));
    /* 00620931: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620934: je 0x6209d1 */ if (fZ) goto L_006209d1;
L_0062093a:; BB(0x0062093a);
    /* 0062093a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062093d: je 0x6209d1 */ if (fZ) goto L_006209d1;
L_00620943:; BB(0x00620943);
    /* 00620943: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x620948u); f_0082d7b0();
    /* 00620948: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062094a: mov ecx, edi */ r_ecx = r_edi;
    /* 0062094c: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x62094fu); call_ind(t); }
    /* 0062094f: mov ecx, eax */ r_ecx = r_eax;
    /* 00620951: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x620956u); f_00829cc8();
    /* 00620956: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00620959: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62095eu); f_0082d838();
    /* 0062095e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00620961: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00620963: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x620968u); f_0082d8bc();
    /* 00620968: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x62096du); f_00835068();
    /* 0062096d: mov ecx, dword ptr [edi + 0xd4] */ r_ecx = R32((u32)(r_edi+0xd4u));
    /* 00620973: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x620978u); f_00835090();
    /* 00620978: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x62097du); f_00835078();
    /* 0062097d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x620982u); f_0082da80();
    /* 00620982: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00620983: ret  */ FN_RET(0x006208a0); r_esp += 4; return;
L_00620984:; BB(0x00620984);
    /* 00620984: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x620989u); f_0082d7b0();
    /* 00620989: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062098b: mov ecx, edi */ r_ecx = r_edi;
    /* 0062098d: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x620990u); call_ind(t); }
    /* 00620990: mov ecx, eax */ r_ecx = r_eax;
    /* 00620992: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x620997u); f_00829cc8();
    /* 00620997: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0062099a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62099fu); f_0082d838();
    /* 0062099f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006209a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006209a4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6209a9u); f_0082d8bc();
    /* 006209a9: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x6209aeu); f_00835068();
    /* 006209ae: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006209b4: mov ecx, dword ptr [edi + 0xd4] */ r_ecx = R32((u32)(r_edi+0xd4u));
    /* 006209ba: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 006209c0: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x6209c5u); f_00835574();
    /* 006209c5: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x6209cau); f_00835078();
    /* 006209ca: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6209cfu); f_0082da80();
    /* 006209cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006209d0: ret  */ FN_RET(0x006208a0); r_esp += 4; return;
L_006209d1:; BB(0x006209d1);
    /* 006209d1: mov ecx, edi */ r_ecx = r_edi;
    /* 006209d3: call 0x6209dc */ r_esp -= 4; W32(r_esp, 0x6209d8u); f_006209dc();
    /* 006209d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006209d9: ret  */ FN_RET(0x006208a0); r_esp += 4; return;
}

void f_006209dc(void) /* sub_6209DC */
{
    FN_ENTER(0x006209dc);
    /* 006209dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006209dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006209de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006209df: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006209e1: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 006209e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006209e9: je 0x6209fd */ if (fZ) goto L_006209fd;
L_006209eb:; BB(0x006209eb);
    /* 006209eb: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006209f1: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 006209f7: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_006209fd:; BB(0x006209fd);
    /* 006209fd: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 00620a03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a05: je 0x620a19 */ if (fZ) goto L_00620a19;
L_00620a07:; BB(0x00620a07);
    /* 00620a07: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620a0d: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 00620a13: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620a19:; BB(0x00620a19);
    /* 00620a19: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 00620a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a21: je 0x620a35 */ if (fZ) goto L_00620a35;
L_00620a23:; BB(0x00620a23);
    /* 00620a23: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620a29: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 00620a2f: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620a35:; BB(0x00620a35);
    /* 00620a35: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00620a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a3d: je 0x620a51 */ if (fZ) goto L_00620a51;
L_00620a3f:; BB(0x00620a3f);
    /* 00620a3f: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620a45: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 00620a4b: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620a51:; BB(0x00620a51);
    /* 00620a51: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 00620a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a59: je 0x620a6d */ if (fZ) goto L_00620a6d;
L_00620a5b:; BB(0x00620a5b);
    /* 00620a5b: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620a61: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 00620a67: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620a6d:; BB(0x00620a6d);
    /* 00620a6d: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 00620a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a75: je 0x620a89 */ if (fZ) goto L_00620a89;
L_00620a77:; BB(0x00620a77);
    /* 00620a77: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620a7d: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 00620a83: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620a89:; BB(0x00620a89);
    /* 00620a89: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 00620a8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620a91: je 0x620aa5 */ if (fZ) goto L_00620aa5;
L_00620a93:; BB(0x00620a93);
    /* 00620a93: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620a99: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 00620a9f: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620aa5:; BB(0x00620aa5);
    /* 00620aa5: mov eax, dword ptr [ebx + 0xf4] */ r_eax = R32((u32)(r_ebx+0xf4u));
    /* 00620aab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620aad: je 0x620ac1 */ if (fZ) goto L_00620ac1;
L_00620aaf:; BB(0x00620aaf);
    /* 00620aaf: or dword ptr [eax], 0x100000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620ab5: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 00620abb: or dword ptr [eax], 0x200000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620ac1:; BB(0x00620ac1);
    /* 00620ac1: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620ac7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00620ac9: jne 0x620b27 */ if (!fZ) goto L_00620b27;
L_00620acb:; BB(0x00620acb);
    /* 00620acb: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00620ad1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00620ad3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00620ad5: jle 0x620b27 */ if ((fZ||fS!=fO)) goto L_00620b27;
L_00620ad7:; BB(0x00620ad7);
    /* 00620ad7: mov esi, eax */ r_esi = r_eax;
L_00620ad9:; BB(0x00620ad9);
    /* 00620ad9: mov edx, esi */ r_edx = r_esi;
    /* 00620adb: add edx, dword ptr [ebx + 0xc8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00620ae1: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00620ae4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620ae5: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x620aeau); f_00816eec();
    /* 00620aea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620aeb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00620aee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620af1: je 0x620c15 */ if (fZ) goto L_00620c15;
L_00620af7:; BB(0x00620af7);
    /* 00620af7: mov edx, dword ptr [ebx + esi*4 + 0xd8] */ r_edx = R32((u32)(r_ebx+r_esi*4+0xd8u));
    /* 00620afe: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00620b01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b03: je 0x620b0b */ if (fZ) goto L_00620b0b;
L_00620b05:; BB(0x00620b05);
    /* 00620b05: and dword ptr [edx], 0xffefffff */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00620b0b:; BB(0x00620b0b);
    /* 00620b0b: mov edx, dword ptr [ebx + eax*2 + 0xe8] */ r_edx = R32((u32)(r_ebx+r_eax*2+0xe8u));
    /* 00620b12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b14: je 0x620b1c */ if (fZ) goto L_00620b1c;
L_00620b16:; BB(0x00620b16);
    /* 00620b16: and dword ptr [edx], 0xffefffff */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00620b1c:; BB(0x00620b1c);
    /* 00620b1c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00620b1f: cmp esi, dword ptr [ebx + 0xf8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620b25: jl 0x620ad9 */ if ((fS!=fO)) goto L_00620ad9;
L_00620b27:; BB(0x00620b27);
    /* 00620b27: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x620b2cu); f_0082d7b0();
    /* 00620b2c: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00620b2f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x620b34u); f_0082d838();
    /* 00620b34: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00620b37: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00620b39: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x620b3eu); f_0082d8bc();
    /* 00620b3e: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x620b43u); f_00835068();
    /* 00620b43: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 00620b49: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00620b4c: mov esi, ebx */ r_esi = r_ebx;
    /* 00620b4e: mov ebx, eax */ r_ebx = r_eax;
L_00620b50:; BB(0x00620b50);
    /* 00620b50: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00620b52: test edi, 0x100000 */ {  u32 a = r_edi; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b58: je 0x620b6a */ if (fZ) goto L_00620b6a;
L_00620b5a:; BB(0x00620b5a);
    /* 00620b5a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00620b5c: mov ecx, esi */ r_ecx = r_esi;
    /* 00620b5e: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x620b61u); call_ind(t); }
    /* 00620b61: mov ecx, eax */ r_ecx = r_eax;
    /* 00620b63: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x620b68u); f_00829cc8();
    /* 00620b68: jmp 0x620b78 */ goto L_00620b78;
L_00620b6a:; BB(0x00620b6a);
    /* 00620b6a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00620b6c: mov ecx, esi */ r_ecx = r_esi;
    /* 00620b6e: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x620b71u); call_ind(t); }
    /* 00620b71: mov ecx, eax */ r_ecx = r_eax;
    /* 00620b73: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x620b78u); f_00829cc8();
L_00620b78:; BB(0x00620b78);
    /* 00620b78: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00620b7a: test edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b80: je 0x620b89 */ if (fZ) goto L_00620b89;
L_00620b82:; BB(0x00620b82);
    /* 00620b82: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x620b87u); f_0082dbac();
    /* 00620b87: jmp 0x620b8e */ goto L_00620b8e;
L_00620b89:; BB(0x00620b89);
    /* 00620b89: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x620b8eu); f_0082dab0();
L_00620b8e:; BB(0x00620b8e);
    /* 00620b8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x620b93u); f_0082d7b0();
    /* 00620b93: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620b99: jne 0x620ba3 */ if (!fZ) goto L_00620ba3;
L_00620b9b:; BB(0x00620b9b);
    /* 00620b9b: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00620b9e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x620ba3u); f_0082d838();
L_00620ba3:; BB(0x00620ba3);
    /* 00620ba3: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ba9: jne 0x620bb8 */ if (!fZ) goto L_00620bb8;
L_00620bab:; BB(0x00620bab);
    /* 00620bab: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00620bae: mov edx, edi */ r_edx = r_edi;
    /* 00620bb0: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00620bb3: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x620bb8u); f_00830df8();
L_00620bb8:; BB(0x00620bb8);
    /* 00620bb8: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bbe: jne 0x620bc8 */ if (!fZ) goto L_00620bc8;
L_00620bc0:; BB(0x00620bc0);
    /* 00620bc0: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00620bc3: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x620bc8u); f_00831290();
L_00620bc8:; BB(0x00620bc8);
    /* 00620bc8: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bce: jne 0x620bd8 */ if (!fZ) goto L_00620bd8;
L_00620bd0:; BB(0x00620bd0);
    /* 00620bd0: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00620bd3: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x620bd8u); f_00835120();
L_00620bd8:; BB(0x00620bd8);
    /* 00620bd8: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bde: jne 0x620bef */ if (!fZ) goto L_00620bef;
L_00620be0:; BB(0x00620be0);
    /* 00620be0: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 00620be3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620be5: je 0x620bef */ if (fZ) goto L_00620bef;
L_00620be7:; BB(0x00620be7);
    /* 00620be7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620be8: mov ecx, esi */ r_ecx = r_esi;
    /* 00620bea: call 0x620c44 */ r_esp -= 4; W32(r_esp, 0x620befu); f_00620c44();
L_00620bef:; BB(0x00620bef);
    /* 00620bef: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x620bf4u); f_0082da80();
    /* 00620bf4: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00620bf7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620bf9: jne 0x620b50 */ if (!fZ) goto L_00620b50;
L_00620bff:; BB(0x00620bff);
    /* 00620bff: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00620c02: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x620c07u); f_00835078();
    /* 00620c07: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x620c0cu); f_0082da80();
    /* 00620c0c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x620c11u); f_0082dab0();
    /* 00620c11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620c12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620c13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00620c14: ret  */ FN_RET(0x006209dc); r_esp += 4; return;
L_00620c15:; BB(0x00620c15);
    /* 00620c15: mov edx, dword ptr [ebx + esi*4 + 0xd8] */ r_edx = R32((u32)(r_ebx+r_esi*4+0xd8u));
    /* 00620c1c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00620c1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c21: je 0x620c29 */ if (fZ) goto L_00620c29;
L_00620c23:; BB(0x00620c23);
    /* 00620c23: or dword ptr [edx], 0x100000 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00620c29:; BB(0x00620c29);
    /* 00620c29: mov edx, dword ptr [ebx + eax*2 + 0xe8] */ r_edx = R32((u32)(r_ebx+r_eax*2+0xe8u));
    /* 00620c30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c32: je 0x620b1c */ if (fZ) goto L_00620b1c;
L_00620c38:; BB(0x00620c38);
    /* 00620c38: or dword ptr [edx], 0x100000 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00620c3e: jmp 0x620b1c */ goto L_00620b1c;
}

void f_00620c44(void) /* sub_620C44 */
{
    FN_ENTER(0x00620c44);
    /* 00620c44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00620c45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00620c46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620c47: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00620c4b: mov ebx, eax */ r_ebx = r_eax;
    /* 00620c4d: mov esi, ecx */ r_esi = r_ecx;
L_00620c4f:; BB(0x00620c4f);
    /* 00620c4f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00620c51: test edi, 0x100000 */ {  u32 a = r_edi; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c57: je 0x620c69 */ if (fZ) goto L_00620c69;
L_00620c59:; BB(0x00620c59);
    /* 00620c59: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00620c5b: mov ecx, esi */ r_ecx = r_esi;
    /* 00620c5d: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x620c60u); call_ind(t); }
    /* 00620c60: mov ecx, eax */ r_ecx = r_eax;
    /* 00620c62: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x620c67u); f_00829cc8();
    /* 00620c67: jmp 0x620c77 */ goto L_00620c77;
L_00620c69:; BB(0x00620c69);
    /* 00620c69: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00620c6b: mov ecx, esi */ r_ecx = r_esi;
    /* 00620c6d: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x620c70u); call_ind(t); }
    /* 00620c70: mov ecx, eax */ r_ecx = r_eax;
    /* 00620c72: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x620c77u); f_00829cc8();
L_00620c77:; BB(0x00620c77);
    /* 00620c77: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00620c79: test edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c7f: je 0x620c88 */ if (fZ) goto L_00620c88;
L_00620c81:; BB(0x00620c81);
    /* 00620c81: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x620c86u); f_0082dbac();
    /* 00620c86: jmp 0x620c8d */ goto L_00620c8d;
L_00620c88:; BB(0x00620c88);
    /* 00620c88: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x620c8du); f_0082dab0();
L_00620c8d:; BB(0x00620c8d);
    /* 00620c8d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x620c92u); f_0082d7b0();
    /* 00620c92: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620c98: jne 0x620ca2 */ if (!fZ) goto L_00620ca2;
L_00620c9a:; BB(0x00620c9a);
    /* 00620c9a: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00620c9d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x620ca2u); f_0082d838();
L_00620ca2:; BB(0x00620ca2);
    /* 00620ca2: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ca8: jne 0x620cb7 */ if (!fZ) goto L_00620cb7;
L_00620caa:; BB(0x00620caa);
    /* 00620caa: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00620cad: mov edx, edi */ r_edx = r_edi;
    /* 00620caf: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00620cb2: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x620cb7u); f_00830df8();
L_00620cb7:; BB(0x00620cb7);
    /* 00620cb7: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620cbd: jne 0x620cc7 */ if (!fZ) goto L_00620cc7;
L_00620cbf:; BB(0x00620cbf);
    /* 00620cbf: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00620cc2: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x620cc7u); f_00831290();
L_00620cc7:; BB(0x00620cc7);
    /* 00620cc7: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ccd: jne 0x620cd7 */ if (!fZ) goto L_00620cd7;
L_00620ccf:; BB(0x00620ccf);
    /* 00620ccf: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00620cd2: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x620cd7u); f_00835120();
L_00620cd7:; BB(0x00620cd7);
    /* 00620cd7: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620cdd: jne 0x620cee */ if (!fZ) goto L_00620cee;
L_00620cdf:; BB(0x00620cdf);
    /* 00620cdf: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 00620ce2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ce4: je 0x620cee */ if (fZ) goto L_00620cee;
L_00620ce6:; BB(0x00620ce6);
    /* 00620ce6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620ce7: mov ecx, esi */ r_ecx = r_esi;
    /* 00620ce9: call 0x620c44 */ r_esp -= 4; W32(r_esp, 0x620ceeu); f_00620c44();
L_00620cee:; BB(0x00620cee);
    /* 00620cee: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x620cf3u); f_0082da80();
    /* 00620cf3: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00620cf6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00620cf8: jne 0x620c4f */ if (!fZ) goto L_00620c4f;
L_00620cfe:; BB(0x00620cfe);
    /* 00620cfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620cff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00620d00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00620d01: ret 4 */ FN_RET(0x00620c44); r_esp += 8; return;
}

void f_00620d04(void) /* sub_620D04 */
{
    FN_ENTER(0x00620d04);
    /* 00620d04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00620d05: mov edi, ecx */ r_edi = r_ecx;
    /* 00620d07: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 00620d0d: mov eax, 0xfc */ r_eax = 0xfcu;
    /* 00620d12: cmp edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620d18: mov ecx, edi */ r_ecx = r_edi;
    /* 00620d1a: jl 0x620d1e */ if ((fS!=fO)) goto L_00620d1e;
L_00620d1c:; BB(0x00620d1c);
    /* 00620d1c: mov edx, eax */ r_edx = r_eax;
L_00620d1e:; BB(0x00620d1e);
    /* 00620d1e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00620d20: mov dword ptr [edi + 0x84], edx */ W32((u32)(r_edi+0x84u), r_edx);
    /* 00620d26: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x620d29u); call_ind(t); }
    /* 00620d29: mov ecx, edi */ r_ecx = r_edi;
    /* 00620d2b: call 0x620d70 */ r_esp -= 4; W32(r_esp, 0x620d30u); f_00620d70();
    /* 00620d30: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620d36: push 0x9311ec */ { u32 v = 0x9311ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00620d3b: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00620d40: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x620d45u); f_0061cdb0();
    /* 00620d45: push dword ptr [edi + 0x88] */ { u32 v = R32((u32)(r_edi+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620d4b: push 0x9311fc */ { u32 v = 0x9311fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00620d50: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 00620d55: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x620d5au); f_0061cdb0();
    /* 00620d5a: push 0x931210 */ { u32 v = 0x931210u; r_esp -= 4; W32(r_esp, v); }
    /* 00620d5f: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 00620d64: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x620d69u); f_0061cdb0();
    /* 00620d69: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00620d6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00620d6d: ret  */ FN_RET(0x00620d04); r_esp += 4; return;
}

void f_00620d70(void) /* sub_620D70 */
{
    FN_ENTER(0x00620d70);
    /* 00620d70: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 00620d76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00620d78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00620d7a: jg 0x620d7e */ if ((!fZ&&fS==fO)) goto L_00620d7e;
L_00620d7c:; BB(0x00620d7c);
    /* 00620d7c: mov eax, edx */ r_eax = r_edx;
L_00620d7e:; BB(0x00620d7e);
    /* 00620d7e: mov edx, 4 */ r_edx = 0x4u;
    /* 00620d83: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00620d86: jl 0x620d8a */ if ((fS!=fO)) goto L_00620d8a;
L_00620d88:; BB(0x00620d88);
    /* 00620d88: mov eax, edx */ r_eax = r_edx;
L_00620d8a:; BB(0x00620d8a);
    /* 00620d8a: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 00620d90: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 00620d96: ret  */ FN_RET(0x00620d70); r_esp += 4; return;
}

void f_00620d98(void) /* sub_620D98 */
{
    FN_ENTER(0x00620d98);
    /* 00620d98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00620d99: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620d9c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00620d9e: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 00620da4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620da7: je 0x620f29 */ if (fZ) goto L_00620f29;
L_00620dad:; BB(0x00620dad);
    /* 00620dad: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620db0: jne 0x620e3a */ if (!fZ) goto L_00620e3a;
L_00620db6:; BB(0x00620db6);
    /* 00620db6: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 00620dbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00620dbe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00620dc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00620dc2: jle 0x620e1f */ if ((fZ||fS!=fO)) goto L_00620e1f;
L_00620dc4:; BB(0x00620dc4);
    /* 00620dc4: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00620dc8: mov esi, ebx */ r_esi = r_ebx;
    /* 00620dca: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00620dce: mov ebx, eax */ r_ebx = r_eax;
    /* 00620dd0: mov edi, edx */ r_edi = r_edx;
L_00620dd2:; BB(0x00620dd2);
    /* 00620dd2: mov eax, edi */ r_eax = r_edi;
    /* 00620dd4: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620dda: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00620ddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620dde: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x620de3u); f_00816eec();
    /* 00620de3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620de4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00620de7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620de9: jne 0x620df0 */ if (!fZ) goto L_00620df0;
L_00620deb:; BB(0x00620deb);
    /* 00620deb: mov ebx, 1 */ r_ebx = 0x1u;
L_00620df0:; BB(0x00620df0);
    /* 00620df0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00620df3: cmp edi, dword ptr [esi + 0xf8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620df9: jl 0x620dd2 */ if ((fS!=fO)) goto L_00620dd2;
L_00620dfb:; BB(0x00620dfb);
    /* 00620dfb: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00620dff: mov eax, ebx */ r_eax = r_ebx;
    /* 00620e01: mov ebx, esi */ r_ebx = r_esi;
    /* 00620e03: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00620e07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e09: je 0x620e1f */ if (fZ) goto L_00620e1f;
L_00620e0b:; BB(0x00620e0b);
    /* 00620e0b: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620e11: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00620e14: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00620e1a: jmp 0x620f3f */ goto L_00620f3f;
L_00620e1f:; BB(0x00620e1f);
    /* 00620e1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620e21: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x620e26u); f_00619c10();
    /* 00620e26: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620e2c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00620e2f: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00620e35: jmp 0x620f3f */ goto L_00620f3f;
L_00620e3a:; BB(0x00620e3a);
    /* 00620e3a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e3d: jne 0x620f18 */ if (!fZ) goto L_00620f18;
L_00620e43:; BB(0x00620e43);
    /* 00620e43: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620e49: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00620e4b: jne 0x620f3f */ if (!fZ) goto L_00620f3f;
L_00620e51:; BB(0x00620e51);
    /* 00620e51: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 00620e57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00620e59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00620e5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00620e5d: jle 0x620eba */ if ((fZ||fS!=fO)) goto L_00620eba;
L_00620e5f:; BB(0x00620e5f);
    /* 00620e5f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00620e63: mov esi, ebx */ r_esi = r_ebx;
    /* 00620e65: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00620e69: mov ebx, eax */ r_ebx = r_eax;
    /* 00620e6b: mov edi, edx */ r_edi = r_edx;
L_00620e6d:; BB(0x00620e6d);
    /* 00620e6d: mov eax, edi */ r_eax = r_edi;
    /* 00620e6f: add eax, dword ptr [esi + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00620e75: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00620e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620e79: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x620e7eu); f_00816eec();
    /* 00620e7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00620e7f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00620e82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620e84: jne 0x620e8b */ if (!fZ) goto L_00620e8b;
L_00620e86:; BB(0x00620e86);
    /* 00620e86: mov ebx, 1 */ r_ebx = 0x1u;
L_00620e8b:; BB(0x00620e8b);
    /* 00620e8b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00620e8e: cmp edi, dword ptr [esi + 0xf8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620e94: jl 0x620e6d */ if ((fS!=fO)) goto L_00620e6d;
L_00620e96:; BB(0x00620e96);
    /* 00620e96: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00620e9a: mov eax, ebx */ r_eax = r_ebx;
    /* 00620e9c: mov ebx, esi */ r_ebx = r_esi;
    /* 00620e9e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00620ea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ea4: je 0x620eba */ if (fZ) goto L_00620eba;
L_00620ea6:; BB(0x00620ea6);
    /* 00620ea6: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620eac: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00620eaf: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00620eb5: jmp 0x620f3f */ goto L_00620f3f;
L_00620eba:; BB(0x00620eba);
    /* 00620eba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620ebc: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x620ec1u); f_00619c10();
    /* 00620ec1: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620ec7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00620eca: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00620ed0: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 00620ed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620ed8: je 0x620f3f */ if (fZ) goto L_00620f3f;
L_00620eda:; BB(0x00620eda);
    /* 00620eda: je 0x620f8c */ if (fZ) goto L_00620f8c;
L_00620ee0:; BB(0x00620ee0);
    /* 00620ee0: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00620ee4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00620ee6: jl 0x620f0f */ if ((fS!=fO)) goto L_00620f0f;
L_00620ee8:; BB(0x00620ee8);
    /* 00620ee8: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620eee: jg 0x620f0f */ if ((!fZ&&fS==fO)) goto L_00620f0f;
L_00620ef0:; BB(0x00620ef0);
    /* 00620ef0: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 00620ef6: movzx eax, word ptr [edx + ecx*4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4));
    /* 00620efa: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00620efe: movzx eax, word ptr [edx + ecx*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*4+0x2u));
    /* 00620f03: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00620f08: mov eax, 1 */ r_eax = 0x1u;
    /* 00620f0d: jmp 0x620f11 */ goto L_00620f11;
L_00620f0f:; BB(0x00620f0f);
    /* 00620f0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00620f11:; BB(0x00620f11);
    /* 00620f11: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620f14: jne 0x620f3f */ if (!fZ) goto L_00620f3f;
L_00620f16:; BB(0x00620f16);
    /* 00620f16: jmp 0x620f44 */ goto L_00620f44;
L_00620f18:; BB(0x00620f18);
    /* 00620f18: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620f1e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00620f21: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00620f27: jmp 0x620f3f */ goto L_00620f3f;
L_00620f29:; BB(0x00620f29);
    /* 00620f29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620f2b: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x620f30u); f_00619c10();
    /* 00620f30: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00620f36: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00620f39: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
L_00620f3f:; BB(0x00620f3f);
    /* 00620f3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00620f42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00620f43: ret  */ FN_RET(0x00620d98); r_esp += 4; return;
L_00620f44:; BB(0x00620f44);
    /* 00620f44: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00620f47: mov eax, 1 */ r_eax = 0x1u;
    /* 00620f4c: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00620f50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620f51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00620f53: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x620f58u); f_007b5038();
    /* 00620f58: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 00620f5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00620f60: je 0x620f3f */ if (fZ) goto L_00620f3f;
L_00620f62:; BB(0x00620f62);
    /* 00620f62: movsx ebx, word ptr [eax + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00620f66: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00620f68: jl 0x620f3f */ if ((fS!=fO)) goto L_00620f3f;
L_00620f6a:; BB(0x00620f6a);
    /* 00620f6a: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00620f70: jg 0x620f3f */ if ((!fZ&&fS==fO)) goto L_00620f3f;
L_00620f72:; BB(0x00620f72);
    /* 00620f72: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00620f78: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00620f7c: mov word ptr [ecx + ebx*4], ax */ W16((u32)(r_ecx+r_ebx*4), (u16)r_eax);
    /* 00620f80: movzx edx, word ptr [esp + 2] */ r_edx = (u32)R16((u32)(r_esp+0x2u));
    /* 00620f85: mov word ptr [ecx + ebx*4 + 2], dx */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_edx);
    /* 00620f8a: jmp 0x620f3f */ goto L_00620f3f;
L_00620f8c:; BB(0x00620f8c);
    /* 00620f8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00620f8e: jmp 0x620f11 */ goto L_00620f11;
}

void f_00620f90(void) /* sub_620F90 */
{
    FN_ENTER(0x00620f90);
    /* 00620f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00620f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00620f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00620f95: push 0x8e2256 */ { u32 v = 0x8e2256u; r_esp -= 4; W32(r_esp, v); }
    /* 00620f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00620fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00620fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00620fa8: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00620fab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00620fae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00620fb1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00620fb4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00620fb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00620fba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00620fbd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00620fc0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00620fc3: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00620fc6: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x620fcbu); f_00619df0();
    /* 00620fcb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00620fd2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620fd5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00620fd8: mov dword ptr [ecx], 0xb27d40 */ W32((u32)(r_ecx), 0xb27d40u);
    /* 00620fde: mov eax, dword ptr [0x9c5508] */ r_eax = R32((u32)(0x9c5508u));
    /* 00620fe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00620fe4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00620fe7: call dword ptr [0xb27d54] */ { u32 t = R32((u32)(0xb27d54u)); r_esp -= 4; W32(r_esp, 0x620fedu); call_ind(t); }
    /* 00620fed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620ff0: call 0x61c84c */ r_esp -= 4; W32(r_esp, 0x620ff5u); f_0061c84c();
    /* 00620ff5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00620ff8: mov eax, 0 */ r_eax = 0x0u;
    /* 00620ffd: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 00621003: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00621009: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 0062100f: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 00621015: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 0062101b: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 00621021: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 00621027: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 0062102d: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 00621033: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062103a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062103d: mov dword ptr [ecx], 0xb27da0 */ W32((u32)(r_ecx), 0xb27da0u);
    /* 00621043: mov eax, dword ptr [0x9c550c] */ r_eax = R32((u32)(0x9c550cu));
    /* 00621048: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062104a: push 0x9c551c */ { u32 v = 0x9c551cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062104f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00621052: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x621057u); f_007b9a88();
    /* 00621057: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062105a: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62105fu); f_007b999c();
    /* 0062105f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00621060: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621063: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x621068u); f_007b4f54();
    /* 00621068: mov ecx, dword ptr [0xa8ec8c] */ r_ecx = R32((u32)(0xa8ec8cu));
    /* 0062106e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621070: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x621075u); f_005b8610();
    /* 00621075: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621078: mov ecx, dword ptr [0xa8ec8c] */ r_ecx = R32((u32)(0xa8ec8cu));
    /* 0062107e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00621080: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 00621086: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62108bu); f_005b8638();
    /* 0062108b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062108e: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 00621094: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00621097: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062109a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0062109d: fadd dword ptr [edx*4 + 0x931250] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x931250u));
    /* 006210a4: fadd dword ptr [0x931270] */ ST(0) = ST(0) + R_F32((u32)(0x931270u));
    /* 006210aa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006210ac: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 006210b2: mov dword ptr [ecx + 0xb8], 0x3f000000 */ W32((u32)(r_ecx+0xb8u), 0x3f000000u);
    /* 006210bc: mov dword ptr [ebp - 0x44], 2 */ W32((u32)(r_ebp+0xffffffbcu), 0x2u);
    /* 006210c3: mov dword ptr [ebp - 0x40], 4 */ W32((u32)(r_ebp+0xffffffc0u), 0x4u);
    /* 006210ca: mov dword ptr [ebp - 0x3c], 9 */ W32((u32)(r_ebp+0xffffffc4u), 0x9u);
    /* 006210d1: mov dword ptr [ebp - 0x38], 0xb */ W32((u32)(r_ebp+0xffffffc8u), 0xbu);
    /* 006210d8: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 006210df: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 006210e6: mov dword ptr [ebp - 0x2c], 0xa */ W32((u32)(r_ebp+0xffffffd4u), 0xau);
    /* 006210ed: mov dword ptr [ebp - 0x28], 0xc */ W32((u32)(r_ebp+0xffffffd8u), 0xcu);
L_006210f4:; BB(0x006210f4);
    /* 006210f4: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006210f7: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006210fa: push dword ptr [ebp + eax - 0x44] */ { u32 v = R32((u32)(r_ebp+r_eax+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006210fe: push dword ptr [ecx + 0xd4] */ { u32 v = R32((u32)(r_ecx+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00621104: call 0x78e9b0 */ r_esp -= 4; W32(r_esp, 0x621109u); f_0078e9b0();
    /* 00621109: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062110c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062110f: mov dword ptr [ecx + ebx*2 + 0xd8], eax */ W32((u32)(r_ecx+r_ebx*2+0xd8u), r_eax);
    /* 00621116: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00621119: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062111c: jl 0x6210f4 */ if ((fS!=fO)) goto L_006210f4;
L_0062111e:; BB(0x0062111e);
    /* 0062111e: call 0x620d70 */ r_esp -= 4; W32(r_esp, 0x621123u); f_00620d70();
    /* 00621123: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00621126: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00621129: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062112c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062112f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00621132: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00621139: mov esp, ebp */ r_esp = r_ebp;
    /* 0062113b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062113c: ret 8 */ FN_RET(0x00620f90); r_esp += 12; return;
}

