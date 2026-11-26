#include "protos.h"

void f_0085ad11(void) /* ___wctomb_mt */
{
    FN_ENTER(0x0085ad11);
    /* 0085ad11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad12: mov ebp, esp */ r_ebp = r_esp;
    /* 0085ad14: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085ad17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad18: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085ad1a: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ad1c: jne 0x85ad22 */ if (!fZ) goto L_0085ad22;
L_0085ad1e:; BB(0x0085ad1e);
    /* 0085ad1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085ad20: jmp 0x85ad6e */ goto L_0085ad6e;
L_0085ad22:; BB(0x0085ad22);
    /* 0085ad22: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085ad25: cmp dword ptr [eax + 0x14], esi */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ad28: jne 0x85ad3b */ if (!fZ) goto L_0085ad3b;
L_0085ad2a:; BB(0x0085ad2a);
    /* 0085ad2a: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0085ad2e: cmp ax, 0xff */ {  u32 a = (u16)r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ad32: ja 0x85ad60 */ if ((!fC&&!fZ)) goto L_0085ad60;
L_0085ad34:; BB(0x0085ad34);
    /* 0085ad34: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0085ad36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085ad38: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085ad39: jmp 0x85ad6e */ goto L_0085ad6e;
L_0085ad3b:; BB(0x0085ad3b);
    /* 0085ad3b: lea edx, [ebp + 0xc] */ r_edx = (u32)(r_ebp+0xcu);
    /* 0085ad3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad40: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ad43: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 0085ad46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad49: lea ecx, [ebp + 0x10] */ r_ecx = (u32)(r_ebp+0x10u);
    /* 0085ad4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ad4e: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ad51: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x85ad57u); call_ind(t); }
    /* 0085ad57: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ad59: je 0x85ad60 */ if (fZ) goto L_0085ad60;
L_0085ad5b:; BB(0x0085ad5b);
    /* 0085ad5b: cmp dword ptr [ebp + 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085ad5e: je 0x85ad6e */ if (fZ) goto L_0085ad6e;
L_0085ad60:; BB(0x0085ad60);
    /* 0085ad60: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85ad65u); f_00859dd6();
    /* 0085ad65: mov dword ptr [eax], 0x2a */ W32((u32)(r_eax), 0x2au);
    /* 0085ad6b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085ad6e:; BB(0x0085ad6e);
    /* 0085ad6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ad6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085ad70: ret  */ FN_RET(0x0085ad11); r_esp += 4; return;
}

