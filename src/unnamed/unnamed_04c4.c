#include "protos.h"

void f_004c414d(void)
{
    FN_ENTER(0x004c414d);
    goto L_004c414d;
L_004c3e09:; BB(0x004c3e09);
    /* 004c3e09: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004c3e0c: fcomp dword ptr [0x908708] */ fx_compare(ST(0), R_F32((u32)(0x908708u))); FPOP();
    /* 004c3e12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3e14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3e15: ja 0x4c3e8c */ if ((!fC&&!fZ)) goto L_004c3e8c;
L_004c3e17:; BB(0x004c3e17);
    /* 004c3e17: mov eax, dword ptr [esi + 0x8a0] */ r_eax = R32((u32)(r_esi+0x8a0u));
    /* 004c3e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3e1f: jne 0x4c3e8c */ if (!fZ) goto L_004c3e8c;
L_004c3e21:; BB(0x004c3e21);
    /* 004c3e21: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e23: call 0x4c4218 */ r_esp -= 4; W32(r_esp, 0x4c3e28u); f_004c4218();
    /* 004c3e28: mov edx, dword ptr [esi + 0x688] */ r_edx = R32((u32)(r_esi+0x688u));
    /* 004c3e2e: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 004c3e31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e33: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c3e35: jle 0x4c3e47 */ if ((fZ||fS!=fO)) goto L_004c3e47;
L_004c3e37:; BB(0x004c3e37);
    /* 004c3e37: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004c3e39: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004c3e3c: mov dword ptr [edi + eax*4], ebx */ W32((u32)(r_edi+r_eax*4), r_ebx);
    /* 004c3e3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e42: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e45: jl 0x4c3e37 */ if ((fS!=fO)) goto L_004c3e37;
L_004c3e47:; BB(0x004c3e47);
    /* 004c3e47: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c3e4e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c3e52: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004c3e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e56: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5c: call 0x4cfc08 */ r_esp -= 4; W32(r_esp, 0x4c3e61u); f_004cfc08();
    /* 004c3e61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3e64: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e66: mov dword ptr [esi + 0x8a0], 1 */ W32((u32)(r_esi+0x8a0u), 0x1u);
    /* 004c3e70: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e72: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x4c3e78u); call_ind(t); }
    /* 004c3e78: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e7a: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e7c: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c3e82u); call_ind(t); }
    /* 004c3e82: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
L_004c3e8c:; BB(0x004c3e8c);
    /* 004c3e8c: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c3e92: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e95: jl 0x4c3f67 */ if ((fS!=fO)) goto L_004c3f67;
L_004c3e9b:; BB(0x004c3e9b);
    /* 004c3e9b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c3ea1: mov dword ptr [esi + 0x85c], 6 */ W32((u32)(r_esi+0x85cu), 0x6u);
    /* 004c3eab: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c3eae: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c3eb4: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3eba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3ebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3ebc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3ebd: ret 4 */ FN_RET(0x004c414d); r_esp += 8; return;
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c414d); r_esp += 8; return;
L_004c414d:; BB(0x004c414d);
    /* 004c414d: add eax, 0x8d000000 */ {  u32 a = r_eax; u32 b = 0x8d000000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4152: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 004c4153: cmp al, 6 */ {  u32 a = (u8)r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffu;   }
    /* 004c4155: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c415a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c415b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c415c: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4161: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c4166u); f_00814298();
    /* 004c4166: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4169: jmp 0x4c3e09 */ goto L_004c3e09;
}

void f_004c4152(void)
{
    FN_ENTER(0x004c4152);
    goto L_004c4152;
L_004c3e09:; BB(0x004c3e09);
    /* 004c3e09: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004c3e0c: fcomp dword ptr [0x908708] */ fx_compare(ST(0), R_F32((u32)(0x908708u))); FPOP();
    /* 004c3e12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3e14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3e15: ja 0x4c3e8c */ if ((!fC&&!fZ)) goto L_004c3e8c;
L_004c3e17:; BB(0x004c3e17);
    /* 004c3e17: mov eax, dword ptr [esi + 0x8a0] */ r_eax = R32((u32)(r_esi+0x8a0u));
    /* 004c3e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3e1f: jne 0x4c3e8c */ if (!fZ) goto L_004c3e8c;
L_004c3e21:; BB(0x004c3e21);
    /* 004c3e21: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e23: call 0x4c4218 */ r_esp -= 4; W32(r_esp, 0x4c3e28u); f_004c4218();
    /* 004c3e28: mov edx, dword ptr [esi + 0x688] */ r_edx = R32((u32)(r_esi+0x688u));
    /* 004c3e2e: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 004c3e31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e33: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c3e35: jle 0x4c3e47 */ if ((fZ||fS!=fO)) goto L_004c3e47;
L_004c3e37:; BB(0x004c3e37);
    /* 004c3e37: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004c3e39: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004c3e3c: mov dword ptr [edi + eax*4], ebx */ W32((u32)(r_edi+r_eax*4), r_ebx);
    /* 004c3e3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e42: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e45: jl 0x4c3e37 */ if ((fS!=fO)) goto L_004c3e37;
L_004c3e47:; BB(0x004c3e47);
    /* 004c3e47: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c3e4e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c3e52: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004c3e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e56: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5c: call 0x4cfc08 */ r_esp -= 4; W32(r_esp, 0x4c3e61u); f_004cfc08();
    /* 004c3e61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3e64: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e66: mov dword ptr [esi + 0x8a0], 1 */ W32((u32)(r_esi+0x8a0u), 0x1u);
    /* 004c3e70: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e72: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x4c3e78u); call_ind(t); }
    /* 004c3e78: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e7a: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e7c: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c3e82u); call_ind(t); }
    /* 004c3e82: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
L_004c3e8c:; BB(0x004c3e8c);
    /* 004c3e8c: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c3e92: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e95: jl 0x4c3f67 */ if ((fS!=fO)) goto L_004c3f67;
L_004c3e9b:; BB(0x004c3e9b);
    /* 004c3e9b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c3ea1: mov dword ptr [esi + 0x85c], 6 */ W32((u32)(r_esi+0x85cu), 0x6u);
    /* 004c3eab: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c3eae: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c3eb4: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3eba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3ebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3ebc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3ebd: ret 4 */ FN_RET(0x004c4152); r_esp += 8; return;
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c4152); r_esp += 8; return;
L_004c4152:; BB(0x004c4152);
    /* 004c4152: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 004c4153: cmp al, 6 */ {  u32 a = (u8)r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffu;   }
    /* 004c4155: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c415a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c415b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c415c: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4161: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c4166u); f_00814298();
    /* 004c4166: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4169: jmp 0x4c3e09 */ goto L_004c3e09;
}

void f_004c4156(void)
{
    FN_ENTER(0x004c4156);
    goto L_004c4156;
L_004c3e09:; BB(0x004c3e09);
    /* 004c3e09: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004c3e0c: fcomp dword ptr [0x908708] */ fx_compare(ST(0), R_F32((u32)(0x908708u))); FPOP();
    /* 004c3e12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c3e14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c3e15: ja 0x4c3e8c */ if ((!fC&&!fZ)) goto L_004c3e8c;
L_004c3e17:; BB(0x004c3e17);
    /* 004c3e17: mov eax, dword ptr [esi + 0x8a0] */ r_eax = R32((u32)(r_esi+0x8a0u));
    /* 004c3e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c3e1f: jne 0x4c3e8c */ if (!fZ) goto L_004c3e8c;
L_004c3e21:; BB(0x004c3e21);
    /* 004c3e21: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e23: call 0x4c4218 */ r_esp -= 4; W32(r_esp, 0x4c3e28u); f_004c4218();
    /* 004c3e28: mov edx, dword ptr [esi + 0x688] */ r_edx = R32((u32)(r_esi+0x688u));
    /* 004c3e2e: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 004c3e31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e33: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c3e35: jle 0x4c3e47 */ if ((fZ||fS!=fO)) goto L_004c3e47;
L_004c3e37:; BB(0x004c3e37);
    /* 004c3e37: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004c3e39: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004c3e3c: mov dword ptr [edi + eax*4], ebx */ W32((u32)(r_edi+r_eax*4), r_ebx);
    /* 004c3e3f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c3e42: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e45: jl 0x4c3e37 */ if ((fS!=fO)) goto L_004c3e37;
L_004c3e47:; BB(0x004c3e47);
    /* 004c3e47: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004c3e4e: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c3e52: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 004c3e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e56: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c3e5c: call 0x4cfc08 */ r_esp -= 4; W32(r_esp, 0x4c3e61u); f_004cfc08();
    /* 004c3e61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c3e64: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e66: mov dword ptr [esi + 0x8a0], 1 */ W32((u32)(r_esi+0x8a0u), 0x1u);
    /* 004c3e70: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e72: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x4c3e78u); call_ind(t); }
    /* 004c3e78: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c3e7a: mov ecx, esi */ r_ecx = r_esi;
    /* 004c3e7c: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c3e82u); call_ind(t); }
    /* 004c3e82: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
L_004c3e8c:; BB(0x004c3e8c);
    /* 004c3e8c: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 004c3e92: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c3e95: jl 0x4c3f67 */ if ((fS!=fO)) goto L_004c3f67;
L_004c3e9b:; BB(0x004c3e9b);
    /* 004c3e9b: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c3ea1: mov dword ptr [esi + 0x85c], 6 */ W32((u32)(r_esi+0x85cu), 0x6u);
    /* 004c3eab: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c3eae: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c3eb4: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3eba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3ebb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3ebc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3ebd: ret 4 */ FN_RET(0x004c4156); r_esp += 8; return;
L_004c3f67:; BB(0x004c3f67);
    /* 004c3f67: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c3f6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c3f6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c3f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c3f70: ret 4 */ FN_RET(0x004c4156); r_esp += 8; return;
L_004c4156:; BB(0x004c4156);
    /* 004c4156: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004c4158: rcl byte ptr [eax + 0x50], 0x52 */ UNSUP(0x004c4158, "rcl byte ptr [eax + 0x50], 0x52");
    /* 004c415c: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4161: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c4166u); f_00814298();
    /* 004c4166: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4169: jmp 0x4c3e09 */ goto L_004c3e09;
}

void f_004c4218(void) /* sub_4C4218 */
{
    FN_ENTER(0x004c4218);
    /* 004c4218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4219: mov edi, ecx */ r_edi = r_ecx;
    /* 004c421b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c421d: call 0x4c4238 */ r_esp -= 4; W32(r_esp, 0x4c4222u); f_004c4238();
    /* 004c4222: push 0x9ac4bc */ { u32 v = 0x9ac4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004c4227: mov ecx, edi */ r_ecx = r_edi;
    /* 004c4229: call 0x4c36d0 */ r_esp -= 4; W32(r_esp, 0x4c422eu); f_004c36d0();
    /* 004c422e: mov ecx, edi */ r_ecx = r_edi;
    /* 004c4230: call 0x4c4268 */ r_esp -= 4; W32(r_esp, 0x4c4235u); f_004c4268();
    /* 004c4235: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4236: ret  */ FN_RET(0x004c4218); r_esp += 4; return;
}

void f_004c4238(void) /* sub_4C4238 */
{
    FN_ENTER(0x004c4238);
    /* 004c4238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4239: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c423a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c423c: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004c423e: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4c4243u); f_0077a684();
    /* 004c4243: mov ebx, eax */ r_ebx = r_eax;
    /* 004c4245: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4247: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4c424cu); f_0077a6b4();
    /* 004c424c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c424f: mov edx, dword ptr [0x9ac4b4] */ r_edx = R32((u32)(0x9ac4b4u));
    /* 004c4255: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4256: push dword ptr [edx*4 + 0xa48510] */ { u32 v = R32((u32)(r_edx*4+0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c425d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c425e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4260: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4c4265u); f_00520c98();
    /* 004c4265: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4266: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4267: ret  */ FN_RET(0x004c4238); r_esp += 4; return;
}

void f_004c4268(void) /* sub_4C4268 */
{
    FN_ENTER(0x004c4268);
    /* 004c4268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4269: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c426a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c426c: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004c426e: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4c4273u); f_0077a684();
    /* 004c4273: mov ebx, eax */ r_ebx = r_eax;
    /* 004c4275: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4277: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4c427cu); f_0077a6b4();
    /* 004c427c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c427f: mov edx, dword ptr [0x9ac4a8] */ r_edx = R32((u32)(0x9ac4a8u));
    /* 004c4285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4286: push dword ptr [edx*4 + 0xa48510] */ { u32 v = R32((u32)(r_edx*4+0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c428d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c428e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4290: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4c4295u); f_00520c98();
    /* 004c4295: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4296: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4297: ret  */ FN_RET(0x004c4268); r_esp += 4; return;
}

void f_004c4298(void) /* sub_4C4298 */
{
    FN_ENTER(0x004c4298);
    /* 004c4298: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004c429a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c429e: call 0x4c42a8 */ r_esp -= 4; W32(r_esp, 0x4c42a3u); f_004c42a8();
    /* 004c42a3: ret 4 */ FN_RET(0x004c4298); r_esp += 8; return;
}

void f_004c42a8(void) /* sub_4C42A8 */
{
    FN_ENTER(0x004c42a8);
    /* 004c42a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c42a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c42aa: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c42ad: mov esi, ecx */ r_esi = r_ecx;
    /* 004c42af: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 004c42b3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c42b6: ja 0x4c463f */ if ((!fC&&!fZ)) goto L_004c463f;
L_004c42bc:; BB(0x004c42bc);
    /* 004c42bc: mov eax, dword ptr [eax*4 + 0x907abc] */ r_eax = R32((u32)(r_eax*4+0x907abcu));
    /* 004c42c3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c463f:; BB(0x004c463f);
    /* 004c463f: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4644: ret 8 */ FN_RET(0x004c42a8); r_esp += 12; return;
}

void f_004c42c5(void)
{
    FN_ENTER(0x004c42c5);
    /* 004c42c5: mov eax, dword ptr [esi + 0x8b0] */ r_eax = R32((u32)(r_esi+0x8b0u));
    /* 004c42cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c42cd: jne 0x4c42e3 */ if (!fZ) goto L_004c42e3;
L_004c42cf:; BB(0x004c42cf);
    /* 004c42cf: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c42d5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c42d8: jne 0x4c463f */ if (!fZ) goto L_004c463f;
L_004c42de:; BB(0x004c42de);
    /* 004c42de: jmp 0x4c4647 */ goto L_004c4647;
L_004c42e3:; BB(0x004c42e3);
    /* 004c42e3: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c42e9: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c42eb: je 0x4c42fc */ if (fZ) goto L_004c42fc;
L_004c42ed:; BB(0x004c42ed);
    /* 004c42ed: mov edx, dword ptr [esi + 0x67c] */ r_edx = R32((u32)(r_esi+0x67cu));
    /* 004c42f3: mov eax, edx */ r_eax = r_edx;
    /* 004c42f5: mov edi, 0x9080e0 */ r_edi = 0x9080e0u;
    /* 004c42fa: jmp 0x4c4318 */ goto L_004c4318;
L_004c42fc:; BB(0x004c42fc);
    /* 004c42fc: mov edx, dword ptr [esi + 0x67c] */ r_edx = R32((u32)(r_esi+0x67cu));
    /* 004c4302: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4305: jge 0x4c4310 */ if ((fS==fO)) goto L_004c4310;
L_004c4307:; BB(0x004c4307);
    /* 004c4307: mov eax, edx */ r_eax = r_edx;
    /* 004c4309: mov edi, 0x9088c0 */ r_edi = 0x9088c0u;
    /* 004c430e: jmp 0x4c4318 */ goto L_004c4318;
L_004c4310:; BB(0x004c4310);
    /* 004c4310: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004c4313: mov edi, 0x908160 */ r_edi = 0x908160u;
L_004c4318:; BB(0x004c4318);
    /* 004c4318: mov eax, dword ptr [edi + eax*4] */ r_eax = R32((u32)(r_edi+r_eax*4));
    /* 004c431b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c431e: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4321: jne 0x4c46ef */ if (!fZ) goto L_004c46ef;
L_004c4327:; BB(0x004c4327);
    /* 004c4327: mov dword ptr [esi + 0x67c], 0 */ W32((u32)(r_esi+0x67cu), 0x0u);
    /* 004c4331: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c4333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4335: jmp 0x4c4318 */ goto L_004c4318;
L_004c463f:; BB(0x004c463f);
    /* 004c463f: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4644: ret 8 */ FN_RET(0x004c42c5); r_esp += 12; return;
L_004c4647:; BB(0x004c4647);
    /* 004c4647: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004c464a: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004c464d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004c4655: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c4658: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004c465c: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 004c465f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4660: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c4665u); f_007828e4();
    /* 004c4665: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c4666: fcomp dword ptr [0x9086c0] */ fx_compare(ST(0), R_F32((u32)(0x9086c0u))); FPOP();
    /* 004c466c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c466e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c466f: jae 0x4c463f */ if (!fC) goto L_004c463f;
L_004c4671:; BB(0x004c4671);
    /* 004c4671: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c4677: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c4679: je 0x4c468a */ if (fZ) goto L_004c468a;
L_004c467b:; BB(0x004c467b);
    /* 004c467b: mov edx, dword ptr [esi + 0x67c] */ r_edx = R32((u32)(r_esi+0x67cu));
    /* 004c4681: mov eax, edx */ r_eax = r_edx;
    /* 004c4683: mov edi, 0x9080e0 */ r_edi = 0x9080e0u;
    /* 004c4688: jmp 0x4c46a6 */ goto L_004c46a6;
L_004c468a:; BB(0x004c468a);
    /* 004c468a: mov edx, dword ptr [esi + 0x67c] */ r_edx = R32((u32)(r_esi+0x67cu));
    /* 004c4690: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4693: jge 0x4c469e */ if ((fS==fO)) goto L_004c469e;
L_004c4695:; BB(0x004c4695);
    /* 004c4695: mov eax, edx */ r_eax = r_edx;
    /* 004c4697: mov edi, 0x9088c0 */ r_edi = 0x9088c0u;
    /* 004c469c: jmp 0x4c46a6 */ goto L_004c46a6;
L_004c469e:; BB(0x004c469e);
    /* 004c469e: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004c46a1: mov edi, 0x908160 */ r_edi = 0x908160u;
L_004c46a6:; BB(0x004c46a6);
    /* 004c46a6: mov eax, dword ptr [edi + eax*4] */ r_eax = R32((u32)(r_edi+r_eax*4));
    /* 004c46a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c46ac: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c46af: jne 0x4c46c1 */ if (!fZ) goto L_004c46c1;
L_004c46b1:; BB(0x004c46b1);
    /* 004c46b1: mov dword ptr [esi + 0x67c], 0 */ W32((u32)(r_esi+0x67cu), 0x0u);
    /* 004c46bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c46bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c46bf: jmp 0x4c46a6 */ goto L_004c46a6;
L_004c46c1:; BB(0x004c46c1);
    /* 004c46c1: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c46c4: je 0x4c46dc */ if (fZ) goto L_004c46dc;
L_004c46c6:; BB(0x004c46c6);
    /* 004c46c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c46c7: mov dword ptr [esi + 0x67c], edx */ W32((u32)(r_esi+0x67cu), r_edx);
    /* 004c46cd: mov ecx, esi */ r_ecx = r_esi;
    /* 004c46cf: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c46d4u); f_004c3074();
    /* 004c46d4: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c46d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c46d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c46d9: ret 8 */ FN_RET(0x004c42c5); r_esp += 12; return;
L_004c46dc:; BB(0x004c46dc);
    /* 004c46dc: mov dword ptr [esi + 0x67c], 0x32 */ W32((u32)(r_esi+0x67cu), 0x32u);
    /* 004c46e6: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004c46eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c46ed: jmp 0x4c46a6 */ goto L_004c46a6;
L_004c46ef:; BB(0x004c46ef);
    /* 004c46ef: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c46f2: je 0x4c4714 */ if (fZ) goto L_004c4714;
L_004c46f4:; BB(0x004c46f4);
    /* 004c46f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c46f5: mov dword ptr [esi + 0x67c], edx */ W32((u32)(r_esi+0x67cu), r_edx);
    /* 004c46fb: mov ecx, esi */ r_ecx = r_esi;
    /* 004c46fd: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c4702u); f_004c3074();
    /* 004c4702: mov dword ptr [esi + 0x8b0], 0 */ W32((u32)(r_esi+0x8b0u), 0x0u);
    /* 004c470c: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c470f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4710: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4711: ret 8 */ FN_RET(0x004c42c5); r_esp += 12; return;
L_004c4714:; BB(0x004c4714);
    /* 004c4714: mov dword ptr [esi + 0x67c], 0x32 */ W32((u32)(r_esi+0x67cu), 0x32u);
    /* 004c471e: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004c4723: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4725: jmp 0x4c4318 */ goto L_004c4318;
}

void f_004c4337(void)
{
    FN_ENTER(0x004c4337);
    /* 004c4337: mov ecx, esi */ r_ecx = r_esi;
    /* 004c4339: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4c433eu); f_007751b0();
    /* 004c433e: fld dword ptr [0x9086cc] */ FPUSH(R_F32((u32)(0x9086ccu)));
    /* 004c4344: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4346: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004c434a: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004c434f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c4354: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004c4358: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004c435c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4360: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004c4364: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 004c4368: mov ecx, edi */ r_ecx = r_edi;
    /* 004c436a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c436fu); f_0082dcbc();
    /* 004c436f: fld dword ptr [0xa4855c] */ FPUSH(R_F32((u32)(0xa4855cu)));
    /* 004c4375: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4377: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 004c437a: mov ecx, edi */ r_ecx = r_edi;
    /* 004c437c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4381u); f_0082ddd8();
    /* 004c4381: fld dword ptr [0xa4855c] */ FPUSH(R_F32((u32)(0xa4855cu)));
    /* 004c4387: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4389: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004c438c: mov ecx, esi */ r_ecx = r_esi;
    /* 004c438e: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c4393u); f_004c32c4();
    /* 004c4393: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4397: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4398: ret 8 */ FN_RET(0x004c4337); r_esp += 12; return;
}

void f_004c4353(void)
{
    FN_ENTER(0x004c4353);
    /* 004c4353: add byte ptr [ecx - 0x26d3dbbc], cl */ { u32 ad = (u32)(r_ecx+0xd92c2444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4359: insb byte ptr es:[edi], dx */ UNSUP(0x004c4359, "insb byte ptr es:[edi], dx");
    /* 004c435a: and al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c435c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4360: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004c4364: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 004c4368: mov ecx, edi */ r_ecx = r_edi;
    /* 004c436a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c436fu); f_0082dcbc();
    /* 004c436f: fld dword ptr [0xa4855c] */ FPUSH(R_F32((u32)(0xa4855cu)));
    /* 004c4375: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4377: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 004c437a: mov ecx, edi */ r_ecx = r_edi;
    /* 004c437c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4381u); f_0082ddd8();
    /* 004c4381: fld dword ptr [0xa4855c] */ FPUSH(R_F32((u32)(0xa4855cu)));
    /* 004c4387: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4389: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004c438c: mov ecx, esi */ r_ecx = r_esi;
    /* 004c438e: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c4393u); f_004c32c4();
    /* 004c4393: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4397: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4398: ret 8 */ FN_RET(0x004c4353); r_esp += 12; return;
}

void f_004c439b(void)
{
    FN_ENTER(0x004c439b);
    /* 004c439b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c439d: mov ecx, esi */ r_ecx = r_esi;
    /* 004c439f: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4c43a5u); call_ind(t); }
    /* 004c43a5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c43a7: mov ecx, esi */ r_ecx = r_esi;
    /* 004c43a9: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x4c43afu); call_ind(t); }
    /* 004c43af: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c43b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c43b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c43b4: ret 8 */ FN_RET(0x004c439b); r_esp += 12; return;
}

void f_004c43b7(void)
{
    FN_ENTER(0x004c43b7);
    /* 004c43b7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c43b9: mov ecx, esi */ r_ecx = r_esi;
    /* 004c43bb: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4c43c1u); call_ind(t); }
    /* 004c43c1: mov dword ptr [esi + 0x3ec], 2 */ W32((u32)(r_esi+0x3ecu), 0x2u);
    /* 004c43cb: mov ecx, esi */ r_ecx = r_esi;
    /* 004c43cd: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c43d2u); f_004c473c();
    /* 004c43d2: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004c43d8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004c43da: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c43dd: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c43e0: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004c43e6: mov ecx, esi */ r_ecx = r_esi;
    /* 004c43e8: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c43eeu); call_ind(t); }
    /* 004c43ee: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c43f0: mov ecx, esi */ r_ecx = r_esi;
    /* 004c43f2: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c43f8u); call_ind(t); }
    /* 004c43f8: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 004c43fc: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c43ff: je 0x4c472a */ if (fZ) goto L_004c472a;
L_004c4405:; BB(0x004c4405);
    /* 004c4405: add dword ptr [esi + 0x6d8], 1 */ { u32 ad = (u32)(r_esi+0x6d8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004c440c:; BB(0x004c440c);
    /* 004c440c: mov edx, dword ptr [esi + 0x688] */ r_edx = R32((u32)(r_esi+0x688u));
    /* 004c4412: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004c4415: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4417: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c4419: jle 0x4c442b */ if ((fZ||fS!=fO)) goto L_004c442b;
L_004c441b:; BB(0x004c441b);
    /* 004c441b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004c441d: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004c4420: mov dword ptr [ecx + eax*4], edi */ W32((u32)(r_ecx+r_eax*4), r_edi);
    /* 004c4423: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4426: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4429: jl 0x4c441b */ if ((fS!=fO)) goto L_004c441b;
L_004c442b:; BB(0x004c442b);
    /* 004c442b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c442d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004c4430: fild dword ptr [esi + 0x6d8] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x6d8u)));
    /* 004c4436: fmul dword ptr [0x90892c] */ ST(0) = ST(0) * R_F32((u32)(0x90892cu));
    /* 004c443c: fadd dword ptr [0x908930] */ ST(0) = ST(0) + R_F32((u32)(0x908930u));
    /* 004c4442: mov dword ptr [esi + 0x874], 0 */ W32((u32)(r_esi+0x874u), 0x0u);
    /* 004c444c: fstp dword ptr [esi + 0x878] */ W_F32((u32)(r_esi+0x878u), ST(0)); FPOP();
    /* 004c4452: mov dword ptr [esi + 0x85c], eax */ W32((u32)(r_esi+0x85cu), r_eax);
    /* 004c4458: mov dword ptr [esi + 0x860], eax */ W32((u32)(r_esi+0x860u), r_eax);
    /* 004c445e: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4461: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4462: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4463: ret 8 */ FN_RET(0x004c43b7); r_esp += 12; return;
L_004c472a:; BB(0x004c472a);
    /* 004c472a: mov dword ptr [esi + 0x6d8], 0 */ W32((u32)(r_esi+0x6d8u), 0x0u);
    /* 004c4734: jmp 0x4c440c */ goto L_004c440c;
}

void f_004c444e(void)
{
    FN_ENTER(0x004c444e);
    /* 004c444e: js 0x4c4458 */ if (fS) goto L_004c4458;
L_004c4450:; BB(0x004c4450);
    /* 004c4450: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4452: mov dword ptr [esi + 0x85c], eax */ W32((u32)(r_esi+0x85cu), r_eax);
L_004c4458:; BB(0x004c4458);
    /* 004c4458: mov dword ptr [esi + 0x860], eax */ W32((u32)(r_esi+0x860u), r_eax);
    /* 004c445e: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4461: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4462: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4463: ret 8 */ FN_RET(0x004c444e); r_esp += 12; return;
}

void f_004c4466(void)
{
    FN_ENTER(0x004c4466);
    /* 004c4466: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4468: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c446a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c446c: mov ecx, esi */ r_ecx = r_esi;
    /* 004c446e: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c4474u); call_ind(t); }
    /* 004c4474: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c4478: mov edi, dword ptr [esi + 0x67c] */ r_edi = R32((u32)(r_esi+0x67cu));
    /* 004c447e: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c4484: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004c4489: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c4490: mov byte ptr [esp + 0xc], 0xa8 */ W8((u32)(r_esp+0xcu), 0xa8u);
    /* 004c4495: mov word ptr [esp + 0x12], di */ W16((u32)(r_esp+0x12u), (u16)r_edi);
    /* 004c449a: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004c449f: mov byte ptr [esp + 0xd], 6 */ W8((u32)(r_esp+0xdu), 0x6u);
    /* 004c44a4: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004c44a9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004c44ad: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c44b3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004c44b7: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 004c44bb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c44c0u); f_008587a5();
    /* 004c44c0: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004c44c4: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004c44c8: fdiv dword ptr [0x9086c4] */ ST(0) = ST(0) / R_F32((u32)(0x9086c4u));
    /* 004c44ce: fmul dword ptr [0x9086c8] */ ST(0) = ST(0) * R_F32((u32)(0x9086c8u));
    /* 004c44d4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004c44d8: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004c44dc: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004c44e1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c44e6: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004c44ea: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004c44ee: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c44f2: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004c44f6: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004c44fa: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 004c44fe: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c4503u); f_008003e0();
    /* 004c4503: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4506: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4507: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4508: ret 8 */ FN_RET(0x004c4466); r_esp += 12; return;
}

void f_004c450b(void)
{
    FN_ENTER(0x004c450b);
    /* 004c450b: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 004c4511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4513: jne 0x4c45b5 */ if (!fZ) goto L_004c45b5;
L_004c4519:; BB(0x004c4519);
    /* 004c4519: mov edx, dword ptr [esi + 0x860] */ r_edx = R32((u32)(r_esi+0x860u));
    /* 004c451f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c4522: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004c4526: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 004c452a: fcomp dword ptr [0x9086b8] */ fx_compare(ST(0), R_F32((u32)(0x9086b8u))); FPOP();
    /* 004c4530: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4532: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4533: jae 0x4c4540 */ if (!fC) goto L_004c4540;
L_004c4535:; BB(0x004c4535);
    /* 004c4535: mov dword ptr [esi + 0x860], edx */ W32((u32)(r_esi+0x860u), r_edx);
    /* 004c453b: jmp 0x4c4626 */ goto L_004c4626;
L_004c4540:; BB(0x004c4540);
    /* 004c4540: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
    /* 004c454a: mov ecx, esi */ r_ecx = r_esi;
    /* 004c454c: mov dword ptr [esi + 0x85c], 1 */ W32((u32)(r_esi+0x85cu), 0x1u);
    /* 004c4556: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c455bu); f_004c32b0();
    /* 004c455b: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004c455e: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004c4561: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c4563: fmul qword ptr [0x908258] */ ST(0) = ST(0) * R_F64((u32)(0x908258u));
    /* 004c4569: fdiv qword ptr [0x908250] */ ST(0) = ST(0) / R_F64((u32)(0x908250u));
    /* 004c456f: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004c4573: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004c4578: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c457d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004c4581: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004c4585: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4589: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004c458d: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 004c4591: add ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4597: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 004c459a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c459fu); f_0082dcbc();
    /* 004c459f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004c45a2: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 004c45a8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c45adu); f_0082ddd8();
    /* 004c45ad: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
    /* 004c45b3: jmp 0x4c4626 */ goto L_004c4626;
L_004c45b5:; BB(0x004c45b5);
    /* 004c45b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c45b8: jne 0x4c4626 */ if (!fZ) goto L_004c4626;
L_004c45ba:; BB(0x004c45ba);
    /* 004c45ba: fld dword ptr [0x9086bc] */ FPUSH(R_F32((u32)(0x9086bcu)));
    /* 004c45c0: fadd dword ptr [esi + 0x874] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x874u));
    /* 004c45c6: fld dword ptr [esi + 0x878] */ FPUSH(R_F32((u32)(r_esi+0x878u)));
    /* 004c45cc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c45ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c45d0: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 004c45d6: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 004c45dc: mov edx, dword ptr [esi + 0x860] */ r_edx = R32((u32)(r_esi+0x860u));
    /* 004c45e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c45e3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c45e5: jb 0x4c45e9 */ if (fC) goto L_004c45e9;
L_004c45e7:; BB(0x004c45e7);
    /* 004c45e7: fst st(2) */ ST(2) = ST(0);
L_004c45e9:; BB(0x004c45e9);
    /* 004c45e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c45eb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c45ed: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004c45f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c45f2: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c45f4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c45f6: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 004c45f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c45fb: fstp dword ptr [esi + 0x874] */ W_F32((u32)(r_esi+0x874u), ST(0)); FPOP();
    /* 004c4601: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 004c4604: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004c4607: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c460a: mov dword ptr [esi + 0x860], edx */ W32((u32)(r_esi+0x860u), r_edx);
    /* 004c4610: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4613: jle 0x4c4626 */ if ((fZ||fS!=fO)) goto L_004c4626;
L_004c4615:; BB(0x004c4615);
    /* 004c4615: mov ecx, esi */ r_ecx = r_esi;
    /* 004c4617: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x4c461cu); f_0041a874();
    /* 004c461c: mov dword ptr [esi + 0x860], 0 */ W32((u32)(r_esi+0x860u), 0x0u);
L_004c4626:; BB(0x004c4626);
    /* 004c4626: lea edx, [esi + 0x63c] */ r_edx = (u32)(r_esi+0x63cu);
    /* 004c462c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c462e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c462f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4631: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4632: push 0x412 */ { u32 v = 0x412u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4637: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c463cu); f_008144b0();
    /* 004c463c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c463f: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4644: ret 8 */ FN_RET(0x004c450b); r_esp += 12; return;
}

void f_004c4542(void)
{
    FN_ENTER(0x004c4542);
    /* 004c4542: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004c4543: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004c4545: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4547: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4549: add byte ptr [ebx + 0x5c86c7ce], cl */ { u32 ad = (u32)(r_ebx+0x5c86c7ceu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c454f: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004c4551: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4553: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4555: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c4557: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4558: in eax, dx */ UNSUP(0x004c4558, "in eax, dx");
    UNSUP(0x004c4559, "falls out of decoded code");
}

void f_004c4544(void)
{
    FN_ENTER(0x004c4544);
    /* 004c4544: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4546: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4548: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c454a: mov ecx, esi */ r_ecx = r_esi;
    /* 004c454c: mov dword ptr [esi + 0x85c], 1 */ W32((u32)(r_esi+0x85cu), 0x1u);
    /* 004c4556: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c455bu); f_004c32b0();
    /* 004c455b: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004c455e: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004c4561: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c4563: fmul qword ptr [0x908258] */ ST(0) = ST(0) * R_F64((u32)(0x908258u));
    /* 004c4569: fdiv qword ptr [0x908250] */ ST(0) = ST(0) / R_F64((u32)(0x908250u));
    /* 004c456f: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004c4573: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004c4578: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c457d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004c4581: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004c4585: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4589: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004c458d: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 004c4591: add ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c4597: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 004c459a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c459fu); f_0082dcbc();
    /* 004c459f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 004c45a2: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 004c45a8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c45adu); f_0082ddd8();
    /* 004c45ad: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
    /* 004c45b3: jmp 0x4c4626 */ goto L_004c4626;
L_004c4626:; BB(0x004c4626);
    /* 004c4626: lea edx, [esi + 0x63c] */ r_edx = (u32)(r_esi+0x63cu);
    /* 004c462c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c462e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c462f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4631: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4632: push 0x412 */ { u32 v = 0x412u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4637: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c463cu); f_008144b0();
    /* 004c463c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c463f: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4644: ret 8 */ FN_RET(0x004c4544); r_esp += 12; return;
}

void f_004c463f(void)
{
    FN_ENTER(0x004c463f);
    /* 004c463f: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4644: ret 8 */ FN_RET(0x004c463f); r_esp += 12; return;
}

void f_004c473c(void) /* sub_4C473C */
{
    FN_ENTER(0x004c473c);
    /* 004c473c: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 004c4742: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c4745: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 004c474b: mov dword ptr [ecx + 0x3c], 0xc3c80000 */ W32((u32)(r_ecx+0x3cu), 0xc3c80000u);
    /* 004c4752: ret  */ FN_RET(0x004c473c); r_esp += 4; return;
}

void f_004c4754(void) /* sub_4C4754 */
{
    FN_ENTER(0x004c4754);
    /* 004c4754: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4756: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c475a: call 0x4c42a8 */ r_esp -= 4; W32(r_esp, 0x4c475fu); f_004c42a8();
    /* 004c475f: ret 4 */ FN_RET(0x004c4754); r_esp += 8; return;
}

void f_004c4764(void) /* sub_4C4764 */
{
    FN_ENTER(0x004c4764);
    /* 004c4764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4765: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4766: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4767: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c476a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c476c: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 004c4773: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c4776: ja 0x4c4b6b */ if ((!fC&&!fZ)) goto L_004c4b6b;
L_004c477c:; BB(0x004c477c);
    /* 004c477c: mov eax, dword ptr [eax*4 + 0x907aec] */ r_eax = R32((u32)(r_eax*4+0x907aecu));
    /* 004c4783: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4764); r_esp += 8; return;
}

void f_004c4785(void)
{
    FN_ENTER(0x004c4785);
    /* 004c4785: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 004c4788: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004c478b: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004c478e: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 004c4791: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c4794: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c4798: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004c479c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c479d: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c47a2u); f_007828e4();
    /* 004c47a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c47a3: fcomp dword ptr [0x9086a8] */ fx_compare(ST(0), R_F32((u32)(0x9086a8u))); FPOP();
    /* 004c47a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c47ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c47ac: jbe 0x4c4b6b */ if ((fC||fZ)) goto L_004c4b6b;
L_004c47b2:; BB(0x004c47b2);
    /* 004c47b2: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004c47b8: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c47ba: je 0x4c47cb */ if (fZ) goto L_004c47cb;
L_004c47bc:; BB(0x004c47bc);
    /* 004c47bc: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004c47c2: mov eax, edx */ r_eax = r_edx;
    /* 004c47c4: mov ebp, 0x9080e0 */ r_ebp = 0x9080e0u;
    /* 004c47c9: jmp 0x4c47e7 */ goto L_004c47e7;
L_004c47cb:; BB(0x004c47cb);
    /* 004c47cb: mov edx, dword ptr [ebx + 0x67c] */ r_edx = R32((u32)(r_ebx+0x67cu));
    /* 004c47d1: cmp edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c47d4: jge 0x4c47df */ if ((fS==fO)) goto L_004c47df;
L_004c47d6:; BB(0x004c47d6);
    /* 004c47d6: mov eax, edx */ r_eax = r_edx;
    /* 004c47d8: mov ebp, 0x9088c0 */ r_ebp = 0x9088c0u;
    /* 004c47dd: jmp 0x4c47e7 */ goto L_004c47e7;
L_004c47df:; BB(0x004c47df);
    /* 004c47df: lea eax, [edx - 0x32] */ r_eax = (u32)(r_edx+0xffffffceu);
    /* 004c47e2: mov ebp, 0x908160 */ r_ebp = 0x908160u;
L_004c47e7:; BB(0x004c47e7);
    /* 004c47e7: mov eax, dword ptr [ebp + eax*4] */ r_eax = R32((u32)(r_ebp+r_eax*4));
    /* 004c47eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c47ee: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c47f1: jne 0x4c4b74 */ if (!fZ) goto L_004c4b74;
L_004c47f7:; BB(0x004c47f7);
    /* 004c47f7: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004c4801: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c4803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4805: jmp 0x4c47e7 */ goto L_004c47e7;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4785); r_esp += 8; return;
L_004c4b74:; BB(0x004c4b74);
    /* 004c4b74: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4b77: je 0x4c4b89 */ if (fZ) goto L_004c4b89;
L_004c4b79:; BB(0x004c4b79);
    /* 004c4b79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b7a: mov dword ptr [ebx + 0x67c], edx */ W32((u32)(r_ebx+0x67cu), r_edx);
    /* 004c4b80: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4b82: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c4b87u); f_004c3074();
    /* 004c4b87: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b89:; BB(0x004c4b89);
    /* 004c4b89: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004c4b93: mov edx, 0x32 */ r_edx = 0x32u;
    /* 004c4b98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4b9a: jmp 0x4c47e7 */ goto L_004c47e7;
}

void f_004c4807(void)
{
    FN_ENTER(0x004c4807);
    /* 004c4807: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4809: call 0x4c0b34 */ r_esp -= 4; W32(r_esp, 0x4c480eu); f_004c0b34();
    /* 004c480e: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4807); r_esp += 8; return;
}

void f_004c4813(void)
{
    FN_ENTER(0x004c4813);
    /* 004c4813: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 004c4819: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004c481b: mov eax, 4 */ r_eax = 0x4u;
    /* 004c4820: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4823: mov ecx, 0x3000 */ r_ecx = 0x3000u;
    /* 004c4828: jle 0x4c482c */ if ((fZ||fS!=fO)) goto L_004c482c;
L_004c482a:; BB(0x004c482a);
    /* 004c482a: mov edi, eax */ r_edi = r_eax;
L_004c482c:; BB(0x004c482c);
    /* 004c482c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4831u); f_0082ddd8();
    /* 004c4831: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004c4835: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c4838: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c483du); f_0082dcbc();
    /* 004c483d: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c4840: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004c4844: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004c484c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4851u); f_0082ddd8();
    /* 004c4851: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004c4855: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4857: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c4859: jle 0x4c4bb1 */ if ((fZ||fS!=fO)) goto L_004c4bb1;
L_004c485f:; BB(0x004c485f);
    /* 004c485f: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
    /* 004c4863: mov ebp, eax */ r_ebp = r_eax;
    /* 004c4865: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
L_004c4869:; BB(0x004c4869);
    /* 004c4869: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 004c4870: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4871: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4c4876u); f_00520f3c();
    /* 004c4876: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c4877: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4879: je 0x4c48d7 */ if (fZ) goto L_004c48d7;
L_004c487b:; BB(0x004c487b);
    /* 004c487b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c487f: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004c4882: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004c4886: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004c4889: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004c488d: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004c4890: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004c4894: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 004c4897: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4c489cu); f_0082f9c4();
    /* 004c489c: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004c48a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c48a1: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c48a6u); f_007828e4();
    /* 004c48a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c48a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c48ab: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c48af: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004c48b3: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4c48b8u); f_0082f9e0();
    /* 004c48b8: fcomp dword ptr [esp + 0x64] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x64u))); FPOP();
    /* 004c48bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c48be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c48bf: jbe 0x4c48d7 */ if ((fC||fZ)) goto L_004c48d7;
L_004c48c1:; BB(0x004c48c1);
    /* 004c48c1: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 004c48c5: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c48c9: mov eax, edx */ r_eax = r_edx;
    /* 004c48cb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c48ce: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004c48d2: mov word ptr [esp + eax*2 + 0x24], si */ W16((u32)(r_esp+r_eax*2+0x24u), (u16)r_esi);
L_004c48d7:; BB(0x004c48d7);
    /* 004c48d7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c48da: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c48dc: jl 0x4c4869 */ if ((fS!=fO)) goto L_004c4869;
L_004c48de:; BB(0x004c48de);
    /* 004c48de: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 004c48e2: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 004c48e6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c48e8: jle 0x4c4bb1 */ if ((fZ||fS!=fO)) goto L_004c4bb1;
L_004c48ee:; BB(0x004c48ee);
    /* 004c48ee: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c48f1: je 0x4c4b9f */ if (fZ) goto L_004c4b9f;
L_004c48f7:; BB(0x004c48f7);
    /* 004c48f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c48f9: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4c48feu); f_007751b0();
    /* 004c48fe: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 004c4902: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004c4906: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4908: fnstcw word ptr [esp + 0x44] */ W16((u32)(r_esp+0x44u), fcw);
    /* 004c490c: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004c4911: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c4916: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c491b: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004c491f: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 004c4923: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4927: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c492b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c492d: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004c4931: movzx edx, word ptr [esp + eax*2 + 0x24] */ r_edx = (u32)R16((u32)(r_esp+r_eax*2+0x24u));
    /* 004c4936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4937: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x4c493cu); f_00520fcc();
L_004c493c:; BB(0x004c493c);
    /* 004c493c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c493e: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4c4943u); f_005213d8();
    /* 004c4943: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4945: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c494au); f_00521410();
    /* 004c494a: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
L_004c4950:; BB(0x004c4950);
    /* 004c4950: fld dword ptr [0xa48560] */ FPUSH(R_F32((u32)(0xa48560u)));
    /* 004c4956: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 004c495c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c495e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4960: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4962: fstp dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0)); FPOP();
    /* 004c4968: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 004c496e: mov dword ptr [ebx + 0x3a0], 0 */ W32((u32)(r_ebx+0x3a0u), 0x0u);
    /* 004c4978: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c497a: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c497fu); f_004c0b5c();
    /* 004c497f: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4813); r_esp += 8; return;
L_004c4b9f:; BB(0x004c4b9f);
    /* 004c4b9f: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004c4ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ba5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4ba7: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x4c4bacu); f_00520fcc();
    /* 004c4bac: jmp 0x4c493c */ goto L_004c493c;
L_004c4bb1:; BB(0x004c4bb1);
    /* 004c4bb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4bb3: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4c4bb8u); f_00520f68();
    /* 004c4bb8: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c4bbb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c4bc0u); f_0082dcbc();
    /* 004c4bc0: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c4bc3: fstp dword ptr [ebx + 0x3a8] */ W_F32((u32)(r_ebx+0x3a8u), ST(0)); FPOP();
    /* 004c4bc9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4bceu); f_0082ddd8();
    /* 004c4bce: fst dword ptr [ebx + 0x3b0] */ W_F32((u32)(r_ebx+0x3b0u), ST(0));
    /* 004c4bd4: jmp 0x4c4950 */ goto L_004c4950;
}

void f_004c4843(void)
{
    FN_ENTER(0x004c4843);
    /* 004c4843: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c4845: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4846: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c4848: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c484a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c484c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4851u); f_0082ddd8();
    /* 004c4851: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004c4855: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4857: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c4859: jle 0x4c4bb1 */ if ((fZ||fS!=fO)) goto L_004c4bb1;
L_004c485f:; BB(0x004c485f);
    /* 004c485f: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
    /* 004c4863: mov ebp, eax */ r_ebp = r_eax;
    /* 004c4865: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
L_004c4869:; BB(0x004c4869);
    /* 004c4869: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 004c4870: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4871: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4c4876u); f_00520f3c();
    /* 004c4876: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c4877: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4879: je 0x4c48d7 */ if (fZ) goto L_004c48d7;
L_004c487b:; BB(0x004c487b);
    /* 004c487b: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c487f: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004c4882: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004c4886: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004c4889: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004c488d: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004c4890: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004c4894: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 004c4897: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4c489cu); f_0082f9c4();
    /* 004c489c: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004c48a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c48a1: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c48a6u); f_007828e4();
    /* 004c48a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c48a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c48ab: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c48af: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004c48b3: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x4c48b8u); f_0082f9e0();
    /* 004c48b8: fcomp dword ptr [esp + 0x64] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x64u))); FPOP();
    /* 004c48bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c48be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c48bf: jbe 0x4c48d7 */ if ((fC||fZ)) goto L_004c48d7;
L_004c48c1:; BB(0x004c48c1);
    /* 004c48c1: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 004c48c5: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c48c9: mov eax, edx */ r_eax = r_edx;
    /* 004c48cb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c48ce: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004c48d2: mov word ptr [esp + eax*2 + 0x24], si */ W16((u32)(r_esp+r_eax*2+0x24u), (u16)r_esi);
L_004c48d7:; BB(0x004c48d7);
    /* 004c48d7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c48da: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c48dc: jl 0x4c4869 */ if ((fS!=fO)) goto L_004c4869;
L_004c48de:; BB(0x004c48de);
    /* 004c48de: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 004c48e2: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 004c48e6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c48e8: jle 0x4c4bb1 */ if ((fZ||fS!=fO)) goto L_004c4bb1;
L_004c48ee:; BB(0x004c48ee);
    /* 004c48ee: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c48f1: je 0x4c4b9f */ if (fZ) goto L_004c4b9f;
L_004c48f7:; BB(0x004c48f7);
    /* 004c48f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c48f9: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4c48feu); f_007751b0();
    /* 004c48fe: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 004c4902: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004c4906: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4908: fnstcw word ptr [esp + 0x44] */ W16((u32)(r_esp+0x44u), fcw);
    /* 004c490c: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004c4911: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c4916: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c491b: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004c491f: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 004c4923: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4927: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c492b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c492d: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004c4931: movzx edx, word ptr [esp + eax*2 + 0x24] */ r_edx = (u32)R16((u32)(r_esp+r_eax*2+0x24u));
    /* 004c4936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4937: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x4c493cu); f_00520fcc();
L_004c493c:; BB(0x004c493c);
    /* 004c493c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c493e: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4c4943u); f_005213d8();
    /* 004c4943: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4945: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c494au); f_00521410();
    /* 004c494a: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
L_004c4950:; BB(0x004c4950);
    /* 004c4950: fld dword ptr [0xa48560] */ FPUSH(R_F32((u32)(0xa48560u)));
    /* 004c4956: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 004c495c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c495e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4960: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4962: fstp dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0)); FPOP();
    /* 004c4968: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 004c496e: mov dword ptr [ebx + 0x3a0], 0 */ W32((u32)(r_ebx+0x3a0u), 0x0u);
    /* 004c4978: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c497a: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c497fu); f_004c0b5c();
    /* 004c497f: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4843); r_esp += 8; return;
L_004c4b9f:; BB(0x004c4b9f);
    /* 004c4b9f: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004c4ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ba5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4ba7: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x4c4bacu); f_00520fcc();
    /* 004c4bac: jmp 0x4c493c */ goto L_004c493c;
L_004c4bb1:; BB(0x004c4bb1);
    /* 004c4bb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4bb3: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4c4bb8u); f_00520f68();
    /* 004c4bb8: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c4bbb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c4bc0u); f_0082dcbc();
    /* 004c4bc0: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c4bc3: fstp dword ptr [ebx + 0x3a8] */ W_F32((u32)(r_ebx+0x3a8u), ST(0)); FPOP();
    /* 004c4bc9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4bceu); f_0082ddd8();
    /* 004c4bce: fst dword ptr [ebx + 0x3b0] */ W_F32((u32)(r_ebx+0x3b0u), ST(0));
    /* 004c4bd4: jmp 0x4c4950 */ goto L_004c4950;
}

void f_004c4945(void)
{
    FN_ENTER(0x004c4945);
    /* 004c4945: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c494au); f_00521410();
    /* 004c494a: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 004c4950: fld dword ptr [0xa48560] */ FPUSH(R_F32((u32)(0xa48560u)));
    /* 004c4956: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 004c495c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c495e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4960: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4962: fstp dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0)); FPOP();
    /* 004c4968: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 004c496e: mov dword ptr [ebx + 0x3a0], 0 */ W32((u32)(r_ebx+0x3a0u), 0x0u);
    /* 004c4978: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c497a: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c497fu); f_004c0b5c();
    /* 004c497f: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4945); r_esp += 8; return;
}

void f_004c4984(void)
{
    FN_ENTER(0x004c4984);
    /* 004c4984: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004c4986: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4988: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4c498eu); call_ind(t); }
    /* 004c498e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004c4990: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4992: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x4c4998u); call_ind(t); }
    /* 004c4998: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4984); r_esp += 8; return;
}

void f_004c499d(void)
{
    FN_ENTER(0x004c499d);
    /* 004c499d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004c499f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c49a1: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4c49a7u); call_ind(t); }
    /* 004c49a7: mov dword ptr [ebx + 0x3ec], 2 */ W32((u32)(r_ebx+0x3ecu), 0x2u);
    /* 004c49b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c49b3: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c49b8u); f_004c473c();
    /* 004c49b8: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004c49be: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004c49c0: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c49c3: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c49c6: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 004c49cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c49ce: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x4c49d4u); call_ind(t); }
    /* 004c49d4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004c49d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c49d8: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x4c49deu); call_ind(t); }
    /* 004c49de: fild dword ptr [ebx + 0x6d8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x6d8u)));
    /* 004c49e4: fmul dword ptr [0x90892c] */ ST(0) = ST(0) * R_F32((u32)(0x90892cu));
    /* 004c49ea: fadd dword ptr [0x908930] */ ST(0) = ST(0) + R_F32((u32)(0x908930u));
    /* 004c49f0: fstp dword ptr [ebx + 0x878] */ W_F32((u32)(r_ebx+0x878u), ST(0)); FPOP();
    /* 004c49f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c49f8: mov dword ptr [ebx + 0x85c], eax */ W32((u32)(r_ebx+0x85cu), r_eax);
    /* 004c49fe: mov dword ptr [ebx + 0x860], eax */ W32((u32)(r_ebx+0x860u), r_eax);
    /* 004c4a04: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c499d); r_esp += 8; return;
}

void f_004c4a09(void)
{
    FN_ENTER(0x004c4a09);
    /* 004c4a09: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a0b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a0d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004c4a0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4a11: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c4a17u); call_ind(t); }
    /* 004c4a17: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004c4a1b: mov ebp, dword ptr [ebx + 0x67c] */ r_ebp = R32((u32)(r_ebx+0x67cu));
    /* 004c4a21: movzx edi, word ptr [ebx + 0x394] */ r_edi = (u32)R16((u32)(r_ebx+0x394u));
    /* 004c4a28: mov ecx, dword ptr [ebx + 0x694] */ r_ecx = R32((u32)(r_ebx+0x694u));
    /* 004c4a2e: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004c4a33: mov byte ptr [esp + 0x2c], 0xa8 */ W8((u32)(r_esp+0x2cu), 0xa8u);
    /* 004c4a38: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 004c4a3d: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 004c4a43: mov byte ptr [esp + 0x2d], 6 */ W8((u32)(r_esp+0x2du), 0x6u);
    /* 004c4a48: mov word ptr [esp + 0x30], dx */ W16((u32)(r_esp+0x30u), (u16)r_edx);
    /* 004c4a4d: mov word ptr [esp + 0x32], bp */ W16((u32)(r_esp+0x32u), (u16)r_ebp);
    /* 004c4a52: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 004c4a56: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c4a5a: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 004c4a5e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c4a63u); f_008587a5();
    /* 004c4a63: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004c4a67: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 004c4a6b: fdiv dword ptr [0x9086ac] */ ST(0) = ST(0) / R_F32((u32)(0x9086acu));
    /* 004c4a71: fmul dword ptr [0x9086b0] */ ST(0) = ST(0) * R_F32((u32)(0x9086b0u));
    /* 004c4a77: lea ecx, [esp + 0x2c] */ r_ecx = (u32)(r_esp+0x2cu);
    /* 004c4a7b: fnstcw word ptr [esp + 0x44] */ W16((u32)(r_esp+0x44u), fcw);
    /* 004c4a7f: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004c4a84: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c4a89: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004c4a8d: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 004c4a91: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4a95: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c4a99: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004c4a9d: mov byte ptr [esp + 0x40], al */ W8((u32)(r_esp+0x40u), (u8)r_eax);
    /* 004c4aa1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c4aa6u); f_008003e0();
    /* 004c4aa6: jmp 0x4c4b6b */ goto L_004c4b6b;
L_004c4b6b:; BB(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4a09); r_esp += 8; return;
}

void f_004c4aab(void)
{
    FN_ENTER(0x004c4aab);
    /* 004c4aab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4aad: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c4ab2u); f_00521410();
    /* 004c4ab2: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 004c4ab8: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 004c4abe: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c4ac0: fmul qword ptr [0x908248] */ ST(0) = ST(0) * R_F64((u32)(0x908248u));
    /* 004c4ac6: fdiv qword ptr [0x908240] */ ST(0) = ST(0) / R_F64((u32)(0x908240u));
    /* 004c4acc: fnstcw word ptr [esp + 0x44] */ W16((u32)(r_esp+0x44u), fcw);
    /* 004c4ad0: movzx eax, word ptr [esp + 0x44] */ r_eax = (u32)R16((u32)(r_esp+0x44u));
    /* 004c4ad5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c4ada: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004c4ade: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 004c4ae2: fistp dword ptr [esp + 0x5c] */ W32((u32)(r_esp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4ae6: fldcw word ptr [esp + 0x44] */ fcw = R16((u32)(r_esp+0x44u));
    /* 004c4aea: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004c4aee: push 0x600 */ { u32 v = 0x600u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4af4: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4af7: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4afcu); f_007a8c74();
    /* 004c4afc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4aff: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 004c4b02: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4b04: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c4b09u); f_0082dcbc();
    /* 004c4b09: fld dword ptr [ebx + 0x878] */ FPUSH(R_F32((u32)(r_ebx+0x878u)));
    /* 004c4b0f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4b11: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004c4b14: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004c4b17: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004c4b1a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4b1fu); f_0082ddd8();
    /* 004c4b1f: fld dword ptr [ebx + 0x878] */ FPUSH(R_F32((u32)(r_ebx+0x878u)));
    /* 004c4b25: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4b27: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 004c4b2a: mov eax, dword ptr [ebx + 0x860] */ r_eax = R32((u32)(r_ebx+0x860u));
    /* 004c4b30: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004c4b33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4b36: mov dword ptr [ebx + 0x860], eax */ W32((u32)(r_ebx+0x860u), r_eax);
    /* 004c4b3c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4b3f: jle 0x4c4b52 */ if ((fZ||fS!=fO)) goto L_004c4b52;
L_004c4b41:; BB(0x004c4b41);
    /* 004c4b41: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c4b43: call 0x41a874 */ r_esp -= 4; W32(r_esp, 0x4c4b48u); f_0041a874();
    /* 004c4b48: mov dword ptr [ebx + 0x860], 0 */ W32((u32)(r_ebx+0x860u), 0x0u);
L_004c4b52:; BB(0x004c4b52);
    /* 004c4b52: lea edx, [ebx + 0x63c] */ r_edx = (u32)(r_ebx+0x63cu);
    /* 004c4b58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4b5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b5e: push 0x412 */ { u32 v = 0x412u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b63: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c4b68u); f_008144b0();
    /* 004c4b68: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4aab); r_esp += 8; return;
}

void f_004c4b6b(void)
{
    FN_ENTER(0x004c4b6b);
    /* 004c4b6b: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4b71: ret 4 */ FN_RET(0x004c4b6b); r_esp += 8; return;
}

void f_004c4bdc(void) /* sub_4C4BDC */
{
    FN_ENTER(0x004c4bdc);
    /* 004c4bdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4bdd: mov ebx, esp */ r_ebx = r_esp;
    /* 004c4bdf: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004c4be2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4be3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4be4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4be5: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c4be8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c4bea: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004c4bed: lea esi, [ebp + 0x888] */ r_esi = (u32)(r_ebp+0x888u);
    /* 004c4bf3: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c4bf6: ja 0x4c4f9d */ if ((!fC&&!fZ)) goto L_004c4f9d;
L_004c4bfc:; BB(0x004c4bfc);
    /* 004c4bfc: mov eax, dword ptr [eax*4 + 0x907b1c] */ r_eax = R32((u32)(r_eax*4+0x907b1cu));
    /* 004c4c03: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4bdc); r_esp += 8; return;
}

void f_004c4c05(void)
{
    FN_ENTER(0x004c4c05);
    /* 004c4c05: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c4c0b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4c0e: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4c14:; BB(0x004c4c14);
    /* 004c4c14: jmp 0x4c4fa9 */ goto L_004c4fa9;
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4c05); r_esp += 8; return;
L_004c4fa9:; BB(0x004c4fa9);
    /* 004c4fa9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4fab: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4fad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c4fb0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4fb2: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c4fb8u); call_ind(t); }
    /* 004c4fb8: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c4fbc: mov esi, dword ptr [ebp + 0x67c] */ r_esi = R32((u32)(r_ebp+0x67cu));
    /* 004c4fc2: movzx edi, word ptr [ebp + 0x394] */ r_edi = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c4fc9: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c4fcf: mov edx, 8 */ r_edx = 0x8u;
    /* 004c4fd4: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c4fd8: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c4fdd: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c4fe3: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c4fe8: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c4fed: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 004c4ff2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 004c4ff6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c4ffa: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c4ffe: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c5003u); f_008587a5();
    /* 004c5003: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c5007: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004c500b: fdiv dword ptr [0x9086a0] */ ST(0) = ST(0) / R_F32((u32)(0x9086a0u));
    /* 004c5011: fmul dword ptr [0x9086a4] */ ST(0) = ST(0) * R_F32((u32)(0x9086a4u));
    /* 004c5017: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c501a: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c501e: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c5023: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5028: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c502c: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c5030: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c5034: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c5038: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c503c: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c5040: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c5045u); f_008003e0();
    /* 004c5045: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5048: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5049: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c504a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c504b: mov esp, ebx */ r_esp = r_ebx;
    /* 004c504d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c504e: ret 4 */ FN_RET(0x004c4c05); r_esp += 8; return;
}

void f_004c4c19(void)
{
    FN_ENTER(0x004c4c19);
    /* 004c4c19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4c1b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4c4c20u); f_007751b0();
    /* 004c4c20: fld dword ptr [0x90869c] */ FPUSH(R_F32((u32)(0x90869cu)));
    /* 004c4c26: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4c28: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c4c2c: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c4c31: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c4c36: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c4c3b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c4c3f: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c4c43: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4c47: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c4c4b: mov eax, dword ptr [ebp + 0x6a0] */ r_eax = R32((u32)(r_ebp+0x6a0u));
    /* 004c4c51: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 004c4c55: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4c58: jge 0x4c4cbe */ if ((fS==fO)) goto L_004c4cbe;
L_004c4c5a:; BB(0x004c4c5a);
    /* 004c4c5a: fld dword ptr [0x908698] */ FPUSH(R_F32((u32)(0x908698u)));
    /* 004c4c60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4c63: mov dword ptr [ebp + 0x6a0], eax */ W32((u32)(r_ebp+0x6a0u), r_eax);
    /* 004c4c69: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 004c4c6c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c6e: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c70: fcom dword ptr [edi + 0x6a8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6a8u))); 
    /* 004c4c76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4c78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4c79: je 0x4c53d1 */ if (fZ) goto L_004c53d1;
L_004c4c7f:; BB(0x004c4c7f);
    /* 004c4c7f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c4c82: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4c85: jl 0x4c4c89 */ if ((fS!=fO)) goto L_004c4c89;
L_004c4c87:; BB(0x004c4c87);
    /* 004c4c87: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004c4c89:; BB(0x004c4c89);
    /* 004c4c89: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 004c4c8c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c8e: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c90: fcom dword ptr [edi + 0x6a8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6a8u))); 
    /* 004c4c96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4c98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4c99: jne 0x4c4c7f */ if (!fZ) goto L_004c4c7f;
L_004c4c9b:; BB(0x004c4c9b);
    /* 004c4c9b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004c4c9d:; BB(0x004c4c9d);
    /* 004c4c9d: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ca2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ca4: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ca9: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x4c4caeu); f_00520c08();
    /* 004c4cae: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c4cb2: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c4cb6: fstp dword ptr [edi + 0x6a8] */ W_F32((u32)(r_edi+0x6a8u), ST(0)); FPOP();
    /* 004c4cbc: jmp 0x4c4cc9 */ goto L_004c4cc9;
L_004c4cbe:; BB(0x004c4cbe);
    /* 004c4cbe: fld dword ptr [ebp + esi*4 + 0x6a8] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4+0x6a8u)));
    /* 004c4cc5: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
L_004c4cc9:; BB(0x004c4cc9);
    /* 004c4cc9: imul esi, esi, 0x1555 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x1555u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c4ccf: mov ecx, esi */ r_ecx = r_esi;
    /* 004c4cd1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c4cd6u); f_0082dcbc();
    /* 004c4cd6: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 004c4cda: fstp dword ptr [ebp + 0x39c] */ W_F32((u32)(r_ebp+0x39cu), ST(0)); FPOP();
    /* 004c4ce0: mov ecx, esi */ r_ecx = r_esi;
    /* 004c4ce2: mov dword ptr [ebp + 0x3a0], 0 */ W32((u32)(r_ebp+0x3a0u), 0x0u);
    /* 004c4cec: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4cf1u); f_0082ddd8();
    /* 004c4cf1: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 004c4cf5: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 004c4cfb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4cfd: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c4d02u); f_004c0b5c();
    /* 004c4d02: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4d05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4d06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4d07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4d08: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4d0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4d0b: ret 4 */ FN_RET(0x004c4c19); r_esp += 8; return;
L_004c53d1:; BB(0x004c53d1);
    /* 004c53d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c53d3: jmp 0x4c4c9d */ goto L_004c4c9d;
}

void f_004c4c41(void)
{
    FN_ENTER(0x004c4c41);
    /* 004c4c41: and al, 0x38 */ {  u32 a = (u8)r_eax; u32 b = 0x38u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c4c43: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c4c47: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c4c4b: mov eax, dword ptr [ebp + 0x6a0] */ r_eax = R32((u32)(r_ebp+0x6a0u));
    /* 004c4c51: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 004c4c55: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4c58: jge 0x4c4cbe */ if ((fS==fO)) goto L_004c4cbe;
L_004c4c5a:; BB(0x004c4c5a);
    /* 004c4c5a: fld dword ptr [0x908698] */ FPUSH(R_F32((u32)(0x908698u)));
    /* 004c4c60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4c63: mov dword ptr [ebp + 0x6a0], eax */ W32((u32)(r_ebp+0x6a0u), r_eax);
    /* 004c4c69: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 004c4c6c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c6e: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c70: fcom dword ptr [edi + 0x6a8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6a8u))); 
    /* 004c4c76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4c78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4c79: je 0x4c53d1 */ if (fZ) goto L_004c53d1;
L_004c4c7f:; BB(0x004c4c7f);
    /* 004c4c7f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c4c82: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4c85: jl 0x4c4c89 */ if ((fS!=fO)) goto L_004c4c89;
L_004c4c87:; BB(0x004c4c87);
    /* 004c4c87: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004c4c89:; BB(0x004c4c89);
    /* 004c4c89: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 004c4c8c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c8e: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c4c90: fcom dword ptr [edi + 0x6a8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x6a8u))); 
    /* 004c4c96: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4c98: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4c99: jne 0x4c4c7f */ if (!fZ) goto L_004c4c7f;
L_004c4c9b:; BB(0x004c4c9b);
    /* 004c4c9b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004c4c9d:; BB(0x004c4c9d);
    /* 004c4c9d: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ca2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ca4: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ca9: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x4c4caeu); f_00520c08();
    /* 004c4cae: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c4cb2: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c4cb6: fstp dword ptr [edi + 0x6a8] */ W_F32((u32)(r_edi+0x6a8u), ST(0)); FPOP();
    /* 004c4cbc: jmp 0x4c4cc9 */ goto L_004c4cc9;
L_004c4cbe:; BB(0x004c4cbe);
    /* 004c4cbe: fld dword ptr [ebp + esi*4 + 0x6a8] */ FPUSH(R_F32((u32)(r_ebp+r_esi*4+0x6a8u)));
    /* 004c4cc5: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
L_004c4cc9:; BB(0x004c4cc9);
    /* 004c4cc9: imul esi, esi, 0x1555 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x1555u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c4ccf: mov ecx, esi */ r_ecx = r_esi;
    /* 004c4cd1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c4cd6u); f_0082dcbc();
    /* 004c4cd6: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 004c4cda: fstp dword ptr [ebp + 0x39c] */ W_F32((u32)(r_ebp+0x39cu), ST(0)); FPOP();
    /* 004c4ce0: mov ecx, esi */ r_ecx = r_esi;
    /* 004c4ce2: mov dword ptr [ebp + 0x3a0], 0 */ W32((u32)(r_ebp+0x3a0u), 0x0u);
    /* 004c4cec: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c4cf1u); f_0082ddd8();
    /* 004c4cf1: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 004c4cf5: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 004c4cfb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4cfd: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c4d02u); f_004c0b5c();
    /* 004c4d02: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4d05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4d06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4d07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4d08: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4d0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4d0b: ret 4 */ FN_RET(0x004c4c41); r_esp += 8; return;
L_004c53d1:; BB(0x004c53d1);
    /* 004c53d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c53d3: jmp 0x4c4c9d */ goto L_004c4c9d;
}

void f_004c4d0e(void)
{
    FN_ENTER(0x004c4d0e);
    /* 004c4d0e: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004c4d15: jmp 0x4c4f9d */ goto L_004c4f9d;
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4d0e); r_esp += 8; return;
}

void f_004c4d1a(void)
{
    FN_ENTER(0x004c4d1a);
    /* 004c4d1a: mov eax, 0x18 */ r_eax = 0x18u;
    /* 004c4d1f: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004c4d26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4d28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4d2du); f_007aa094();
    /* 004c4d2d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c4d30: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4d32: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4c4d38u); call_ind(t); }
    /* 004c4d38: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 004c4d42: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4d44: call 0x4c473c */ r_esp -= 4; W32(r_esp, 0x4c4d49u); f_004c473c();
    /* 004c4d49: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c4d4f: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c4d52: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c4d55: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c4d5b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c4d5d: mov dword ptr [ebp + 0x85c], edx */ W32((u32)(r_ebp+0x85cu), r_edx);
    /* 004c4d63: mov dword ptr [ebp + 0x860], edx */ W32((u32)(r_ebp+0x860u), r_edx);
    /* 004c4d69: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4d6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4d6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4d6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4d6f: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4d71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4d72: ret 4 */ FN_RET(0x004c4d1a); r_esp += 8; return;
}

void f_004c4d75(void)
{
    FN_ENTER(0x004c4d75);
    /* 004c4d75: mov eax, dword ptr [ebp + 0x85c] */ r_eax = R32((u32)(r_ebp+0x85cu));
    /* 004c4d7b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4d7e: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4d84:; BB(0x004c4d84);
    /* 004c4d84: jmp 0x4c5051 */ goto L_004c5051;
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4d75); r_esp += 8; return;
L_004c5051:; BB(0x004c5051);
    /* 004c5051: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c5053: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004c5055: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c5058: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c505a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c5060u); call_ind(t); }
    /* 004c5060: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c5064: mov esi, dword ptr [ebp + 0x67c] */ r_esi = R32((u32)(r_ebp+0x67cu));
    /* 004c506a: movzx edi, word ptr [ebp + 0x394] */ r_edi = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c5071: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c5077: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004c507c: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c5081: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c5086: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c508c: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c5091: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c5096: mov word ptr [esp + 0x1e], si */ W16((u32)(r_esp+0x1eu), (u16)r_esi);
    /* 004c509b: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004c509f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c50a3: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c50a7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c50acu); f_008587a5();
    /* 004c50ac: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c50b0: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004c50b4: fdiv dword ptr [0x9086a0] */ ST(0) = ST(0) / R_F32((u32)(0x9086a0u));
    /* 004c50ba: fmul dword ptr [0x9086a4] */ ST(0) = ST(0) * R_F32((u32)(0x9086a4u));
    /* 004c50c0: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c50c4: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c50c8: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c50cd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c50d2: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c50d6: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c50da: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c50de: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c50e2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c50e6: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c50ea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c50efu); f_008003e0();
    /* 004c50ef: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c50f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c50f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c50f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c50f5: mov esp, ebx */ r_esp = r_ebx;
    /* 004c50f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c50f8: ret 4 */ FN_RET(0x004c4d75); r_esp += 8; return;
}

void f_004c4d89(void)
{
    FN_ENTER(0x004c4d89);
    /* 004c4d89: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c4d8f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4d91: je 0x4c51fa */ if (fZ) goto L_004c51fa;
L_004c4d97:; BB(0x004c4d97);
    /* 004c4d97: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4d9a: je 0x4c515b */ if (fZ) goto L_004c515b;
L_004c4da0:; BB(0x004c4da0);
    /* 004c4da0: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4da3: je 0x4c4e2f */ if (fZ) goto L_004c4e2f;
L_004c4da9:; BB(0x004c4da9);
    /* 004c4da9: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4dac: jne 0x4c4df6 */ if (!fZ) goto L_004c4df6;
L_004c4dae:; BB(0x004c4dae);
    /* 004c4dae: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4db4: fcomp dword ptr [0x908698] */ fx_compare(ST(0), R_F32((u32)(0x908698u))); FPOP();
    /* 004c4dba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4dbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4dbd: jae 0x4c4e4c */ if (!fC) goto L_004c4e4c;
L_004c4dc3:; BB(0x004c4dc3);
    /* 004c4dc3: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4dc6: fcomp dword ptr [0x908678] */ fx_compare(ST(0), R_F32((u32)(0x908678u))); FPOP();
    /* 004c4dcc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4dce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4dcf: jae 0x4c4e4c */ if (!fC) goto L_004c4e4c;
L_004c4dd1:; BB(0x004c4dd1);
    /* 004c4dd1: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4dd7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004c4dd9: fdiv dword ptr [0x90868c] */ ST(0) = ST(0) / R_F32((u32)(0x90868cu));
    /* 004c4ddf: fstp dword ptr [ebp + 0x87c] */ W_F32((u32)(r_ebp+0x87cu), ST(0)); FPOP();
    /* 004c4de5: mov edi, 4 */ r_edi = 0x4u;
    /* 004c4dea: mov dword ptr [ebp + 0x85c], 4 */ W32((u32)(r_ebp+0x85cu), 0x4u);
    /* 004c4df4: jmp 0x4c4e4c */ goto L_004c4e4c;
L_004c4df6:; BB(0x004c4df6);
    /* 004c4df6: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4df9: jne 0x4c4e4c */ if (!fZ) goto L_004c4e4c;
L_004c4dfb:; BB(0x004c4dfb);
    /* 004c4dfb: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4e01: fcomp dword ptr [0x908698] */ fx_compare(ST(0), R_F32((u32)(0x908698u))); FPOP();
    /* 004c4e07: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4e09: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4e0a: jbe 0x4c4e4c */ if ((fC||fZ)) goto L_004c4e4c;
L_004c4e0c:; BB(0x004c4e0c);
    /* 004c4e0c: mov dword ptr [ebp + 0x85c], 5 */ W32((u32)(r_ebp+0x85cu), 0x5u);
    /* 004c4e16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c4e18: mov dword ptr [ebp + 0x878], eax */ W32((u32)(r_ebp+0x878u), r_eax);
    /* 004c4e1e: mov edi, 5 */ r_edi = 0x5u;
    /* 004c4e23: mov dword ptr [ebp + 0x860], 0 */ W32((u32)(r_ebp+0x860u), 0x0u);
    /* 004c4e2d: jmp 0x4c4e4c */ goto L_004c4e4c;
L_004c4e2f:; BB(0x004c4e2f);
    /* 004c4e2f: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4e32: fcomp dword ptr [0x908674] */ fx_compare(ST(0), R_F32((u32)(0x908674u))); FPOP();
    /* 004c4e38: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4e3a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4e3b: jbe 0x4c4e4c */ if ((fC||fZ)) goto L_004c4e4c;
L_004c4e3d:; BB(0x004c4e3d);
    /* 004c4e3d: mov dword ptr [ebp + 0x85c], 3 */ W32((u32)(r_ebp+0x85cu), 0x3u);
    /* 004c4e47: mov edi, 3 */ r_edi = 0x3u;
L_004c4e4c:; BB(0x004c4e4c);
    /* 004c4e4c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e4f: je 0x4c5139 */ if (fZ) goto L_004c5139;
L_004c4e55:; BB(0x004c4e55);
    /* 004c4e55: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e58: je 0x4c5107 */ if (fZ) goto L_004c5107;
L_004c4e5e:; BB(0x004c4e5e);
    /* 004c4e5e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e61: je 0x4c4f26 */ if (fZ) goto L_004c4f26;
L_004c4e67:; BB(0x004c4e67);
    /* 004c4e67: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e6a: jne 0x4c4ee1 */ if (!fZ) goto L_004c4ee1;
L_004c4e6c:; BB(0x004c4e6c);
    /* 004c4e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4e6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4e73u); f_007aa094();
    /* 004c4e73: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004c4e7a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e7d: je 0x4c50fb */ if (fZ) goto L_004c50fb;
L_004c4e83:; BB(0x004c4e83);
    /* 004c4e83: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4e89: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c4e8f: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4e95: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4e98: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4e9e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4ea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ea6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004c4ea8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c4eaa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4eac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c4eae: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c4eb4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c4eb6: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4ebc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ebe: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
    /* 004c4ec4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c4ec6: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4ec9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c4ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ece: mov edx, esi */ r_edx = r_esi;
    /* 004c4ed0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4ed5u); f_0082ebac();
    /* 004c4ed5: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4ed8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4ed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4eda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4edb: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4ede: ret 4 */ FN_RET(0x004c4d89); r_esp += 8; return;
L_004c4ee1:; BB(0x004c4ee1);
    /* 004c4ee1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4ee4: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4eea:; BB(0x004c4eea);
    /* 004c4eea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4eec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4ef1u); f_007aa094();
    /* 004c4ef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ef3: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c4ef8u); f_004c53d8();
    /* 004c4ef8: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c4efe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4f01: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c4f07: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4f0a: jl 0x4c4f9d */ if ((fS!=fO)) goto L_004c4f9d;
L_004c4f10:; BB(0x004c4f10);
    /* 004c4f10: mov dword ptr [ebp + 0x85c], 6 */ W32((u32)(r_ebp+0x85cu), 0x6u);
    /* 004c4f1a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4f1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4f1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4f1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4f20: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4f23: ret 4 */ FN_RET(0x004c4d89); r_esp += 8; return;
L_004c4f26:; BB(0x004c4f26);
    /* 004c4f26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4f28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4f2du); f_007aa094();
    /* 004c4f2d: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c4f33: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4f39: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004c4f3f: fcomp dword ptr [0x90867c] */ fx_compare(ST(0), R_F32((u32)(0x90867cu))); FPOP();
    /* 004c4f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4f47: fstp dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0)); FPOP();
    /* 004c4f4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4f4e: jb 0x4c4f72 */ if (fC) goto L_004c4f72;
L_004c4f50:; BB(0x004c4f50);
    /* 004c4f50: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4f56: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c4f5e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4f64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4f66: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4f6c: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
L_004c4f72:; BB(0x004c4f72);
    /* 004c4f72: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c4f75: mov edx, esi */ r_edx = r_esi;
    /* 004c4f77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4f7cu); f_0082ebac();
    /* 004c4f7c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f83: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4f89: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c4f8c: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4f8f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4f92: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4f97u); f_007a8c74();
    /* 004c4f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4f9a: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4d89); r_esp += 8; return;
L_004c50fb:; BB(0x004c50fb);
    /* 004c50fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c50fd: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c5102u); f_004c53d8();
    /* 004c5102: jmp 0x4c4e83 */ goto L_004c4e83;
L_004c5107:; BB(0x004c5107);
    /* 004c5107: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c510a: mov edx, esi */ r_edx = r_esi;
    /* 004c510c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5111u); f_0082ebac();
    /* 004c5111: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c5117: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c511d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c5120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5122: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c5128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c512a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c512d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5131: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5132: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5133: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5136: ret 4 */ FN_RET(0x004c4d89); r_esp += 8; return;
L_004c5139:; BB(0x004c5139);
    /* 004c5139: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c513c: mov edx, esi */ r_edx = r_esi;
    /* 004c513e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5143u); f_0082ebac();
    /* 004c5143: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c5149: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c514c: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c514f: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5155: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5158: ret 4 */ FN_RET(0x004c4d89); r_esp += 8; return;
L_004c515b:; BB(0x004c515b);
    /* 004c515b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c515e: fcomp dword ptr [0x9088b8] */ fx_compare(ST(0), R_F32((u32)(0x9088b8u))); FPOP();
    /* 004c5164: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5166: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c5167: jbe 0x4c4e4c */ if ((fC||fZ)) goto L_004c4e4c;
L_004c516d:; BB(0x004c516d);
    /* 004c516d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c5170: mov dword ptr [ebp + 0x85c], 2 */ W32((u32)(r_ebp+0x85cu), 0x2u);
    /* 004c517a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c517c: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x4c5182u); call_ind(t); }
    /* 004c5182: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c5185: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c5187: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x4c518du); call_ind(t); }
    /* 004c518d: mov dword ptr [ebp + 0x3ec], 1 */ W32((u32)(r_ebp+0x3ecu), 0x1u);
    /* 004c5197: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c5199: call 0x4c4218 */ r_esp -= 4; W32(r_esp, 0x4c519eu); f_004c4218();
    /* 004c519e: mov edi, dword ptr [ebp + 0x688] */ r_edi = R32((u32)(r_ebp+0x688u));
    /* 004c51a4: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 004c51a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c51a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c51ab: jle 0x4c51bd */ if ((fZ||fS!=fO)) goto L_004c51bd;
L_004c51ad:; BB(0x004c51ad);
    /* 004c51ad: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004c51af: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 004c51b2: mov dword ptr [ecx + eax*4], edx */ W32((u32)(r_ecx+r_eax*4), r_edx);
    /* 004c51b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c51b8: cmp eax, dword ptr [edi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c51bb: jl 0x4c51ad */ if ((fS!=fO)) goto L_004c51ad;
L_004c51bd:; BB(0x004c51bd);
    /* 004c51bd: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 004c51c4: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c51c8: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004c51cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c51cc: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c51d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c51d2: call 0x4cfc08 */ r_esp -= 4; W32(r_esp, 0x4c51d7u); f_004cfc08();
    /* 004c51d7: lea edi, [ebp + 0x63c] */ r_edi = (u32)(r_ebp+0x63cu);
    /* 004c51dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c51df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c51e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c51e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c51e2: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 004c51e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c51ecu); f_00814298();
    /* 004c51ec: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c51ef: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c51f5: jmp 0x4c4e4c */ goto L_004c4e4c;
L_004c51fa:; BB(0x004c51fa);
    /* 004c51fa: mov edi, dword ptr [ebp + 0x860] */ r_edi = R32((u32)(r_ebp+0x860u));
    /* 004c5200: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004c5203: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 004c5207: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004c520b: fcomp dword ptr [0x908670] */ fx_compare(ST(0), R_F32((u32)(0x908670u))); FPOP();
    /* 004c5211: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5213: mov dword ptr [ebp + 0x860], edi */ W32((u32)(r_ebp+0x860u), r_edi);
    /* 004c5219: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c521a: jae 0x4c5227 */ if (!fC) goto L_004c5227;
L_004c521c:; BB(0x004c521c);
    /* 004c521c: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c5222: jmp 0x4c4e4c */ goto L_004c4e4c;
L_004c5227:; BB(0x004c5227);
    /* 004c5227: fld dword ptr [0x9088b4] */ FPUSH(R_F32((u32)(0x9088b4u)));
    /* 004c522d: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 004c5230: fld dword ptr [0x9088bc] */ FPUSH(R_F32((u32)(0x9088bcu)));
    /* 004c5236: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 004c5239: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c523f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5241: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c5247: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
    /* 004c524d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5250: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c5256: mov dword ptr [ebp + 0x85c], 1 */ W32((u32)(r_ebp+0x85cu), 0x1u);
    /* 004c5260: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c5261: mov dword ptr [ebp + 0x88c], 0 */ W32((u32)(r_ebp+0x88cu), 0x0u);
    /* 004c526b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c5270u); f_007828e4();
    /* 004c5270: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004c5274: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c5277: fld dword ptr [0x90866c] */ FPUSH(R_F32((u32)(0x90866cu)));
    /* 004c527d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c5281: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c5283: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5285: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c5286: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5288: jbe 0x4c528c */ if ((fC||fZ)) goto L_004c528c;
L_004c528a:; BB(0x004c528a);
    /* 004c528a: fst st(1) */ ST(1) = ST(0);
L_004c528c:; BB(0x004c528c);
    /* 004c528c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c528e: fcom dword ptr [0x908668] */ fx_compare(ST(0), R_F32((u32)(0x908668u))); 
    /* 004c5294: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c5296: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c529a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c529b: ja 0x4c52c6 */ if ((!fC&&!fZ)) goto L_004c52c6;
L_004c529d:; BB(0x004c529d);
    /* 004c529d: fld qword ptr [0x908230] */ FPUSH(R_F64((u32)(0x908230u)));
    /* 004c52a3: fld qword ptr [0x908228] */ FPUSH(R_F64((u32)(0x908228u)));
    /* 004c52a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52ab: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c52af: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c52b3: mov dword ptr [ebp + 0x874], 0 */ W32((u32)(r_ebp+0x874u), 0x0u);
    /* 004c52bd: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004c52c4: jmp 0x4c5340 */ goto L_004c5340;
L_004c52c6:; BB(0x004c52c6);
    /* 004c52c6: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c52cc: fld dword ptr [0x908664] */ FPUSH(R_F32((u32)(0x908664u)));
    /* 004c52d2: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004c52d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52d6: fdivr dword ptr [0x908688] */ ST(0) = R_F32((u32)(0x908688u)) / ST(0);
    /* 004c52dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c52de: fchs  */ ST(0) = -ST(0);
    /* 004c52e0: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004c52e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c52e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c52e8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4c52edu); f_0082dc9c();
    /* 004c52ed: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 004c52f1: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004c52f5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004c52f7: fst dword ptr [ebp + 0x874] */ W_F32((u32)(r_ebp+0x874u), ST(0));
    /* 004c52fd: fld qword ptr [0x908238] */ FPUSH(R_F64((u32)(0x908238u)));
    /* 004c5303: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c5305: fld qword ptr [0x908230] */ FPUSH(R_F64((u32)(0x908230u)));
    /* 004c530b: fld qword ptr [0x908228] */ FPUSH(R_F64((u32)(0x908228u)));
    /* 004c5311: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5313: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004c5315: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5317: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004c5319: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c531b: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004c531f: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004c5323: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c5327: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c532c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c5331: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c5335: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c5339: fistp dword ptr [ebp + 0x5c] */ W32((u32)(r_ebp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c533c: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
L_004c5340:; BB(0x004c5340);
    /* 004c5340: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c5346: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c534c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004c534e: fld dword ptr [0x908684] */ FPUSH(R_F32((u32)(0x908684u)));
    /* 004c5354: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c535a: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c5360: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c5366: fmul dword ptr [ebp + 0x874] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x874u));
    /* 004c536c: mov edi, dword ptr [ebp + 0x85c] */ r_edi = R32((u32)(r_ebp+0x85cu));
    /* 004c5372: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5374: fst dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0));
    /* 004c537a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004c537c: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004c537f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5381: fst dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0));
    /* 004c5387: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c5389: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c538b: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004c538e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5390: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004c5393: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004c5396: fmul qword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x58u));
    /* 004c539a: fdiv qword ptr [esp + 0x60] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x60u));
    /* 004c539e: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 004c53a2: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 004c53a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c53ac: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c53b0: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 004c53b4: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c53b7: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004c53bb: mov dword ptr [ebp + 0x878], 0x41700000 */ W32((u32)(r_ebp+0x878u), 0x41700000u);
    /* 004c53c5: mov dword ptr [ebp + 0x3c], 0xc32a0000 */ W32((u32)(r_ebp+0x3cu), 0xc32a0000u);
    /* 004c53cc: jmp 0x4c4e4c */ goto L_004c4e4c;
}

void f_004c4e45(void)
{
    FN_ENTER(0x004c4e45);
    /* 004c4e45: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4e47: mov edi, 3 */ r_edi = 0x3u;
    /* 004c4e4c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e4f: je 0x4c5139 */ if (fZ) goto L_004c5139;
L_004c4e55:; BB(0x004c4e55);
    /* 004c4e55: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e58: je 0x4c5107 */ if (fZ) goto L_004c5107;
L_004c4e5e:; BB(0x004c4e5e);
    /* 004c4e5e: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e61: je 0x4c4f26 */ if (fZ) goto L_004c4f26;
L_004c4e67:; BB(0x004c4e67);
    /* 004c4e67: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e6a: jne 0x4c4ee1 */ if (!fZ) goto L_004c4ee1;
L_004c4e6c:; BB(0x004c4e6c);
    /* 004c4e6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4e6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4e73u); f_007aa094();
    /* 004c4e73: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 004c4e7a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4e7d: je 0x4c50fb */ if (fZ) goto L_004c50fb;
L_004c4e83:; BB(0x004c4e83);
    /* 004c4e83: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4e89: fld dword ptr [ebp + 0x87c] */ FPUSH(R_F32((u32)(r_ebp+0x87cu)));
    /* 004c4e8f: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4e95: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c4e98: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4e9e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4ea4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ea6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004c4ea8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c4eaa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c4eac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c4eae: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c4eb4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c4eb6: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4ebc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c4ebe: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
    /* 004c4ec4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c4ec6: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4ec9: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004c4ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ece: mov edx, esi */ r_edx = r_esi;
    /* 004c4ed0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4ed5u); f_0082ebac();
    /* 004c4ed5: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4ed8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4ed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4eda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4edb: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4edd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4ede: ret 4 */ FN_RET(0x004c4e45); r_esp += 8; return;
L_004c4ee1:; BB(0x004c4ee1);
    /* 004c4ee1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4ee4: jne 0x4c4f9d */ if (!fZ) goto L_004c4f9d;
L_004c4eea:; BB(0x004c4eea);
    /* 004c4eea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4eec: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4ef1u); f_007aa094();
    /* 004c4ef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4ef3: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c4ef8u); f_004c53d8();
    /* 004c4ef8: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c4efe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c4f01: mov dword ptr [ebp + 0x860], eax */ W32((u32)(r_ebp+0x860u), r_eax);
    /* 004c4f07: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c4f0a: jl 0x4c4f9d */ if ((fS!=fO)) goto L_004c4f9d;
L_004c4f10:; BB(0x004c4f10);
    /* 004c4f10: mov dword ptr [ebp + 0x85c], 6 */ W32((u32)(r_ebp+0x85cu), 0x6u);
    /* 004c4f1a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4f1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4f1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4f1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4f20: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4f23: ret 4 */ FN_RET(0x004c4e45); r_esp += 8; return;
L_004c4f26:; BB(0x004c4f26);
    /* 004c4f26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c4f28: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c4f2du); f_007aa094();
    /* 004c4f2d: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c4f33: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c4f39: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004c4f3f: fcomp dword ptr [0x90867c] */ fx_compare(ST(0), R_F32((u32)(0x90867cu))); FPOP();
    /* 004c4f45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c4f47: fstp dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0)); FPOP();
    /* 004c4f4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4f4e: jb 0x4c4f72 */ if (fC) goto L_004c4f72;
L_004c4f50:; BB(0x004c4f50);
    /* 004c4f50: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
    /* 004c4f56: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c4f5e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4f64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4f66: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4f6c: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
L_004c4f72:; BB(0x004c4f72);
    /* 004c4f72: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c4f75: mov edx, esi */ r_edx = r_esi;
    /* 004c4f77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4f7cu); f_0082ebac();
    /* 004c4f7c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f83: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4f89: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c4f8c: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4f8f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4f92: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4f97u); f_007a8c74();
    /* 004c4f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4f9a: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
L_004c4f9d:; BB(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4e45); r_esp += 8; return;
L_004c50fb:; BB(0x004c50fb);
    /* 004c50fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c50fd: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c5102u); f_004c53d8();
    /* 004c5102: jmp 0x4c4e83 */ goto L_004c4e83;
L_004c5107:; BB(0x004c5107);
    /* 004c5107: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c510a: mov edx, esi */ r_edx = r_esi;
    /* 004c510c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5111u); f_0082ebac();
    /* 004c5111: fld dword ptr [0xa48564] */ FPUSH(R_F32((u32)(0xa48564u)));
    /* 004c5117: fadd dword ptr [ebp + 0x878] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x878u));
    /* 004c511d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c5120: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c5122: fst dword ptr [ebp + 0x878] */ W_F32((u32)(r_ebp+0x878u), ST(0));
    /* 004c5128: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c512a: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c512d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5131: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5132: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5133: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5136: ret 4 */ FN_RET(0x004c4e45); r_esp += 8; return;
L_004c5139:; BB(0x004c5139);
    /* 004c5139: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c513c: mov edx, esi */ r_edx = r_esi;
    /* 004c513e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c5143u); f_0082ebac();
    /* 004c5143: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c5149: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c514c: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c514f: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c5152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c5153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c5154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c5155: mov esp, ebx */ r_esp = r_ebx;
    /* 004c5157: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c5158: ret 4 */ FN_RET(0x004c4e45); r_esp += 8; return;
}

void f_004c4f43(void)
{
    FN_ENTER(0x004c4f43);
    goto L_004c4f43;
L_004c4f21:; BB(0x004c4f21);
    /* 004c4f21: jecxz 0x4c4f7e */ if (!r_ecx) goto L_004c4f7e;
L_004c4f23:; BB(0x004c4f23);
    /* 004c4f23: ret 4 */ FN_RET(0x004c4f43); r_esp += 8; return;
L_004c4f43:; BB(0x004c4f43);
    /* 004c4f43: nop  */ ;
    /* 004c4f44: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004c4f46: loopne 0x4c4f21 */ r_ecx--; if (r_ecx && !fZ) goto L_004c4f21;
    /* 004c4f48: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 004c4f49: js 0x4c4f53 */ if (fS) goto L_004c4f53;
L_004c4f4b:; BB(0x004c4f4b);
    /* 004c4f4b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4f4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c4f4e: jb 0x4c4f72 */ if (fC) goto L_004c4f72;
L_004c4f50:; BB(0x004c4f50);
    /* 004c4f50: fld dword ptr [0x908680] */ FPUSH(R_F32((u32)(0x908680u)));
L_004c4f53:; BB(0x004c4f53);
    /* 004c4f53: xchg byte ptr [eax - 0x777a2700], dl */ { u32 x = R8((u32)(r_eax+0x8885d900u)); u32 y = (u8)r_edx; W8((u32)(r_eax+0x8885d900u), y); r_edx = (r_edx & 0xffffff00u) | ((x) & 0xffu); }
    /* 004c4f56: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 004c4f59: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004c4f5b: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c4f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004c4f5d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 004c4f5e: fld dword ptr [ebp + 0x890] */ FPUSH(R_F32((u32)(r_ebp+0x890u)));
    /* 004c4f64: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004c4f66: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 004c4f6c: fstp dword ptr [ebp + 0x890] */ W_F32((u32)(r_ebp+0x890u), ST(0)); FPOP();
L_004c4f72:; BB(0x004c4f72);
    /* 004c4f72: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004c4f75: mov edx, esi */ r_edx = r_esi;
    /* 004c4f77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4c4f7cu); f_0082ebac();
    /* 004c4f7c: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
L_004c4f7e:; BB(0x004c4f7e);
    /* 004c4f7e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4f80: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c4f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4f83: fld dword ptr [ebp + 0x878] */ FPUSH(R_F32((u32)(r_ebp+0x878u)));
    /* 004c4f89: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004c4f8c: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c4f8f: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004c4f92: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c4f97u); f_007a8c74();
    /* 004c4f97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4f9a: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4f43); r_esp += 8; return;
}

void f_004c4f9d(void)
{
    FN_ENTER(0x004c4f9d);
    /* 004c4f9d: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c4fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4fa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c4fa3: mov esp, ebx */ r_esp = r_ebx;
    /* 004c4fa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c4fa6: ret 4 */ FN_RET(0x004c4f9d); r_esp += 8; return;
}

