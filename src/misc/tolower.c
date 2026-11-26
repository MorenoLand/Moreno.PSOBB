#include "protos.h"

void f_008598f9(void) /* ___tolower_mt */
{
    FN_ENTER(0x008598f9);
    /* 008598f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008598fa: mov ebp, esp */ r_ebp = r_esp;
    /* 008598fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008598fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008598fe: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00859901: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859902: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859905: cmp dword ptr [esi + 0x14], 0 */ {  u32 a = R32((u32)(r_esi+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859909: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085990a: je 0x8599ad */ if (fZ) goto L_008599ad;
L_00859910:; BB(0x00859910);
    /* 00859910: cmp dword ptr [esi + 0x24], 0 */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859914: je 0x85991f */ if (fZ) goto L_0085991f;
L_00859916:; BB(0x00859916);
    /* 00859916: cmp ebx, 0x7f */ {  u32 a = r_ebx; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00859919: jbe 0x8599ad */ if ((fC||fZ)) goto L_008599ad;
L_0085991f:; BB(0x0085991f);
    /* 0085991f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00859921: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00859922: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00859928: jae 0x859949 */ if (!fC) goto L_00859949;
L_0085992a:; BB(0x0085992a);
    /* 0085992a: cmp dword ptr [esi + 0x28], edi */ {  u32 a = R32((u32)(r_esi+0x28u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085992d: jle 0x85993c */ if ((fZ||fS!=fO)) goto L_0085993c;
L_0085992f:; BB(0x0085992f);
    /* 0085992f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859930: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00859931: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859932: call 0x85e5f8 */ r_esp -= 4; W32(r_esp, 0x859937u); f_0085e5f8();
    /* 00859937: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085993a: jmp 0x859945 */ goto L_00859945;
L_0085993c:; BB(0x0085993c);
    /* 0085993c: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 0085993f: movzx eax, byte ptr [eax + ebx*2] */ r_eax = (u32)R8((u32)(r_eax+r_ebx*2));
    /* 00859943: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00859945:; BB(0x00859945);
    /* 00859945: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859947: je 0x8599ba */ if (fZ) goto L_008599ba;
L_00859949:; BB(0x00859949);
    /* 00859949: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 0085994c: mov eax, ebx */ r_eax = r_ebx;
    /* 0085994e: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00859951: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00859954: test byte ptr [edx + ecx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_edx+r_ecx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00859959: je 0x85996a */ if (fZ) goto L_0085996a;
L_0085995b:; BB(0x0085995b);
    /* 0085995b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085995d: mov byte ptr [ebp + 8], al */ W8((u32)(r_ebp+0x8u), (u8)r_eax);
    /* 00859960: mov byte ptr [ebp + 9], bl */ W8((u32)(r_ebp+0x9u), (u8)r_ebx);
    /* 00859963: mov byte ptr [ebp + 0xa], 0 */ W8((u32)(r_ebp+0xau), 0x0u);
    /* 00859967: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00859968: jmp 0x859973 */ goto L_00859973;
L_0085996a:; BB(0x0085996a);
    /* 0085996a: mov byte ptr [ebp + 8], bl */ W8((u32)(r_ebp+0x8u), (u8)r_ebx);
    /* 0085996d: mov byte ptr [ebp + 9], 0 */ W8((u32)(r_ebp+0x9u), 0x0u);
    /* 00859971: mov eax, edi */ r_eax = r_edi;
L_00859973:; BB(0x00859973);
    /* 00859973: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00859974: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859977: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0085997a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0085997c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085997d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085997e: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00859981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859982: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00859987: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085998a: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x85998fu); f_00860103();
    /* 0085998f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859994: je 0x8599ba */ if (fZ) goto L_008599ba;
L_00859996:; BB(0x00859996);
    /* 00859996: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00859998: jne 0x8599a0 */ if (!fZ) goto L_008599a0;
L_0085999a:; BB(0x0085999a);
    /* 0085999a: movzx eax, byte ptr [ebp - 4] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 0085999e: jmp 0x8599bc */ goto L_008599bc;
L_008599a0:; BB(0x008599a0);
    /* 008599a0: movzx ecx, byte ptr [ebp - 3] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 008599a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008599a6: mov ah, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu) << 8);
    /* 008599a9: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008599ab: jmp 0x8599bc */ goto L_008599bc;
L_008599ad:; BB(0x008599ad);
    /* 008599ad: cmp ebx, 0x41 */ {  u32 a = r_ebx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008599b0: jl 0x8599ba */ if ((fS!=fO)) goto L_008599ba;
L_008599b2:; BB(0x008599b2);
    /* 008599b2: cmp ebx, 0x5a */ {  u32 a = r_ebx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008599b5: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 008599b8: jle 0x8599bc */ if ((fZ||fS!=fO)) goto L_008599bc;
L_008599ba:; BB(0x008599ba);
    /* 008599ba: mov eax, ebx */ r_eax = r_ebx;
L_008599bc:; BB(0x008599bc);
    /* 008599bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008599bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008599be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008599bf: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008599c0: ret  */ FN_RET(0x008598f9); r_esp += 4; return;
}

