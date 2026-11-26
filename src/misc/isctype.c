#include "protos.h"

void f_0085e5f8(void) /* ___isctype_mt */
{
    FN_ENTER(0x0085e5f8);
    /* 0085e5f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0085e5fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5fc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e5ff: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 0085e602: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085e608: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085e60b: ja 0x85e616 */ if ((!fC&&!fZ)) goto L_0085e616;
L_0085e60d:; BB(0x0085e60d);
    /* 0085e60d: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0085e610: movzx eax, word ptr [ecx + eax*2] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2));
    /* 0085e614: jmp 0x85e66a */ goto L_0085e66a;
L_0085e616:; BB(0x0085e616);
    /* 0085e616: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e617: mov edx, eax */ r_edx = r_eax;
    /* 0085e619: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0085e61c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e61d: mov edi, dword ptr [ecx + 0x48] */ r_edi = R32((u32)(r_ecx+0x48u));
    /* 0085e620: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 0085e623: test byte ptr [edi + esi*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_edi+r_esi*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085e628: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e629: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e62a: je 0x85e63b */ if (fZ) goto L_0085e63b;
L_0085e62c:; BB(0x0085e62c);
    /* 0085e62c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e62e: mov byte ptr [ebp - 3], al */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_eax);
    /* 0085e631: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 0085e634: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 0085e638: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0085e639: jmp 0x85e645 */ goto L_0085e645;
L_0085e63b:; BB(0x0085e63b);
    /* 0085e63b: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 0085e63e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e640: mov byte ptr [ebp - 3], 0 */ W8((u32)(r_ebp+0xfffffffdu), 0x0u);
    /* 0085e644: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085e645:; BB(0x0085e645);
    /* 0085e645: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e647: push dword ptr [ecx + 0x14] */ { u32 v = R32((u32)(r_ecx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e64a: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e64d: lea ecx, [ebp + 0xe] */ r_ecx = (u32)(r_ebp+0xeu);
    /* 0085e650: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e651: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e652: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0085e655: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e656: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e658: call 0x8686c8 */ r_esp -= 4; W32(r_esp, 0x85e65du); f_008686c8();
    /* 0085e65d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085e660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e662: jne 0x85e666 */ if (!fZ) goto L_0085e666;
L_0085e664:; BB(0x0085e664);
    /* 0085e664: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085e665: ret  */ FN_RET(0x0085e5f8); r_esp += 4; return;
L_0085e666:; BB(0x0085e666);
    /* 0085e666: movzx eax, word ptr [ebp + 0xe] */ r_eax = (u32)R16((u32)(r_ebp+0xeu));
L_0085e66a:; BB(0x0085e66a);
    /* 0085e66a: and eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e66d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085e66e: ret  */ FN_RET(0x0085e5f8); r_esp += 4; return;
}

