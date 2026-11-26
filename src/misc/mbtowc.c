#include "protos.h"

void f_00866ebf(void) /* ___mbtowc_mt */
{
    FN_ENTER(0x00866ebf);
    /* 00866ebf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866ec0: mov ebp, esp */ r_ebp = r_esp;
    /* 00866ec2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00866ec3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866ec4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866ec5: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00866ec8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00866eca: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866ecc: je 0x866ee3 */ if (fZ) goto L_00866ee3;
L_00866ece:; BB(0x00866ece);
    /* 00866ece: cmp dword ptr [ebp + 0x14], ebx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866ed1: je 0x866ee3 */ if (fZ) goto L_00866ee3;
L_00866ed3:; BB(0x00866ed3);
    /* 00866ed3: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00866ed5: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00866ed7: jne 0x866eea */ if (!fZ) goto L_00866eea;
L_00866ed9:; BB(0x00866ed9);
    /* 00866ed9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00866edc: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866ede: je 0x866ee3 */ if (fZ) goto L_00866ee3;
L_00866ee0:; BB(0x00866ee0);
    /* 00866ee0: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
L_00866ee3:; BB(0x00866ee3);
    /* 00866ee3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00866ee5:; BB(0x00866ee5);
    /* 00866ee5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866ee6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866ee7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866ee8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00866ee9: ret  */ FN_RET(0x00866ebf); r_esp += 4; return;
L_00866eea:; BB(0x00866eea);
    /* 00866eea: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00866eed: cmp dword ptr [esi + 0x14], ebx */ {  u32 a = R32((u32)(r_esi+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866ef0: jne 0x866f05 */ if (!fZ) goto L_00866f05;
L_00866ef2:; BB(0x00866ef2);
    /* 00866ef2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00866ef5: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866ef7: je 0x866f00 */ if (fZ) goto L_00866f00;
L_00866ef9:; BB(0x00866ef9);
    /* 00866ef9: movzx ax, al */ r_eax = (r_eax & 0xffff0000u) | (((u32)(u8)r_eax) & 0xffffu);
    /* 00866efd: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
L_00866f00:; BB(0x00866f00);
    /* 00866f00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00866f02: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00866f03: jmp 0x866ee5 */ goto L_00866ee5;
L_00866f05:; BB(0x00866f05);
    /* 00866f05: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 00866f08: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00866f0b: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866f10: je 0x866f4e */ if (fZ) goto L_00866f4e;
L_00866f12:; BB(0x00866f12);
    /* 00866f12: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00866f15: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866f18: jle 0x866f3c */ if ((fZ||fS!=fO)) goto L_00866f3c;
L_00866f1a:; BB(0x00866f1a);
    /* 00866f1a: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866f1d: jl 0x866f3c */ if ((fS!=fO)) goto L_00866f3c;
L_00866f1f:; BB(0x00866f1f);
    /* 00866f1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00866f21: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866f24: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00866f27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00866f28: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866f2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866f2d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00866f2f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866f32: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x866f38u); call_ind(t); }
    /* 00866f38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866f3a: jne 0x866f49 */ if (!fZ) goto L_00866f49;
L_00866f3c:; BB(0x00866f3c);
    /* 00866f3c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00866f3f: cmp eax, dword ptr [esi + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00866f42: jb 0x866f6c */ if (fC) goto L_00866f6c;
L_00866f44:; BB(0x00866f44);
    /* 00866f44: cmp byte ptr [edi + 1], bl */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00866f47: je 0x866f6c */ if (fZ) goto L_00866f6c;
L_00866f49:; BB(0x00866f49);
    /* 00866f49: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00866f4c: jmp 0x866ee5 */ goto L_00866ee5;
L_00866f4e:; BB(0x00866f4e);
    /* 00866f4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866f50: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866f53: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00866f56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866f57: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866f5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00866f5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866f5d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00866f5f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866f62: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x866f68u); call_ind(t); }
    /* 00866f68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866f6a: jne 0x866f00 */ if (!fZ) goto L_00866f00;
L_00866f6c:; BB(0x00866f6c);
    /* 00866f6c: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x866f71u); f_00859dd6();
    /* 00866f71: mov dword ptr [eax], 0x2a */ W32((u32)(r_eax), 0x2au);
    /* 00866f77: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866f7a: jmp 0x866ee5 */ goto L_00866ee5;
}

