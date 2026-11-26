#include "protos.h"

void f_00858a24(void) /* ___toupper_mt */
{
    FN_ENTER(0x00858a24);
    /* 00858a24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858a25: mov ebp, esp */ r_ebp = r_esp;
    /* 00858a27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00858a28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858a29: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00858a2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858a2d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00858a30: cmp dword ptr [esi + 0x14], 0 */ {  u32 a = R32((u32)(r_esi+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858a34: je 0x858ada */ if (fZ) goto L_00858ada;
L_00858a3a:; BB(0x00858a3a);
    /* 00858a3a: cmp dword ptr [esi + 0x24], 0 */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858a3e: je 0x858a49 */ if (fZ) goto L_00858a49;
L_00858a40:; BB(0x00858a40);
    /* 00858a40: cmp ebx, 0x7f */ {  u32 a = r_ebx; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00858a43: jbe 0x858ada */ if ((fC||fZ)) goto L_00858ada;
L_00858a49:; BB(0x00858a49);
    /* 00858a49: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00858a4f: jae 0x858a73 */ if (!fC) goto L_00858a73;
L_00858a51:; BB(0x00858a51);
    /* 00858a51: cmp dword ptr [esi + 0x28], 1 */ {  u32 a = R32((u32)(r_esi+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858a55: jle 0x858a65 */ if ((fZ||fS!=fO)) goto L_00858a65;
L_00858a57:; BB(0x00858a57);
    /* 00858a57: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00858a59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858a5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858a5b: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x858a60u); f_0085e5f8();
    /* 00858a60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00858a63: jmp 0x858a6f */ goto L_00858a6f;
L_00858a65:; BB(0x00858a65);
    /* 00858a65: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 00858a68: movzx eax, byte ptr [eax + ebx*2] */ r_eax = (u32)R8((u32)(r_eax+r_ebx*2));
    /* 00858a6c: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00858a6f:; BB(0x00858a6f);
    /* 00858a6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858a71: je 0x858ae7 */ if (fZ) goto L_00858ae7;
L_00858a73:; BB(0x00858a73);
    /* 00858a73: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 00858a76: mov eax, ebx */ r_eax = r_ebx;
    /* 00858a78: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00858a7b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00858a7e: test byte ptr [edx + ecx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_edx+r_ecx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00858a83: je 0x858a94 */ if (fZ) goto L_00858a94;
L_00858a85:; BB(0x00858a85);
    /* 00858a85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00858a87: mov byte ptr [ebp + 8], al */ W8((u32)(r_ebp+0x8u), (u8)r_eax);
    /* 00858a8a: mov byte ptr [ebp + 9], bl */ W8((u32)(r_ebp+0x9u), (u8)r_ebx);
    /* 00858a8d: mov byte ptr [ebp + 0xa], 0 */ W8((u32)(r_ebp+0xau), 0x0u);
    /* 00858a91: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00858a92: jmp 0x858a9e */ goto L_00858a9e;
L_00858a94:; BB(0x00858a94);
    /* 00858a94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00858a96: mov byte ptr [ebp + 8], bl */ W8((u32)(r_ebp+0x8u), (u8)r_ebx);
    /* 00858a99: mov byte ptr [ebp + 9], 0 */ W8((u32)(r_ebp+0x9u), 0x0u);
    /* 00858a9d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00858a9e:; BB(0x00858a9e);
    /* 00858a9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00858aa0: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858aa3: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00858aa6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00858aa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00858aa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858aaa: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00858aad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858aae: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00858ab3: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858ab6: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x858abbu); f_00860103();
    /* 00858abb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00858abe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858ac0: je 0x858ae7 */ if (fZ) goto L_00858ae7;
L_00858ac2:; BB(0x00858ac2);
    /* 00858ac2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858ac5: jne 0x858acd */ if (!fZ) goto L_00858acd;
L_00858ac7:; BB(0x00858ac7);
    /* 00858ac7: movzx eax, byte ptr [ebp - 4] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 00858acb: jmp 0x858ae9 */ goto L_00858ae9;
L_00858acd:; BB(0x00858acd);
    /* 00858acd: movzx ecx, byte ptr [ebp - 3] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 00858ad1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00858ad3: mov ah, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu) << 8);
    /* 00858ad6: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858ad8: jmp 0x858ae9 */ goto L_00858ae9;
L_00858ada:; BB(0x00858ada);
    /* 00858ada: cmp ebx, 0x61 */ {  u32 a = r_ebx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858add: jl 0x858ae7 */ if ((fS!=fO)) goto L_00858ae7;
L_00858adf:; BB(0x00858adf);
    /* 00858adf: cmp ebx, 0x7a */ {  u32 a = r_ebx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00858ae2: lea eax, [ebx - 0x20] */ r_eax = (u32)(r_ebx+0xffffffe0u);
    /* 00858ae5: jle 0x858ae9 */ if ((fZ||fS!=fO)) goto L_00858ae9;
L_00858ae7:; BB(0x00858ae7);
    /* 00858ae7: mov eax, ebx */ r_eax = r_ebx;
L_00858ae9:; BB(0x00858ae9);
    /* 00858ae9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858aea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00858aeb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858aec: ret  */ FN_RET(0x00858a24); r_esp += 4; return;
}

