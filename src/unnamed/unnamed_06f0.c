#include "protos.h"

void f_006f0019(void)
{
    FN_ENTER(0x006f0019);
    /* 006f0019: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006f001a: ror byte ptr [ebx - 0x7e38e3af], 1 */ { u32 ad = (u32)(r_ebx+0x81c71c51u); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 006f0020: cld  */ rt_df = 0;
    /* 006f0021: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0023: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0025: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0027: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006f0029: add dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f002f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0031: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006f0033: add dword ptr [ecx + eax], 0 */ { u32 ad = (u32)(r_ecx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f003a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f003c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f0040: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0043: jge 0x6f0059 */ if ((fS==fO)) goto L_006f0059;
L_006f0045:; BB(0x006f0045);
    /* 006f0045: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f004b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f004d: je 0x6f0059 */ if (fZ) goto L_006f0059;
L_006f004f:; BB(0x006f004f);
    /* 006f004f: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0059:; BB(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0019); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0020(void)
{
    FN_ENTER(0x006f0020);
    /* 006f0020: cld  */ rt_df = 0;
    /* 006f0021: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0023: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0025: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0027: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006f0029: add dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f002f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0031: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006f0033: add dword ptr [ecx + eax], 0 */ { u32 ad = (u32)(r_ecx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f003a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f003c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f0040: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0043: jge 0x6f0059 */ if ((fS==fO)) goto L_006f0059;
L_006f0045:; BB(0x006f0045);
    /* 006f0045: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f004b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f004d: je 0x6f0059 */ if (fZ) goto L_006f0059;
L_006f004f:; BB(0x006f004f);
    /* 006f004f: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0059:; BB(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0020); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0043(void)
{
    FN_ENTER(0x006f0043);
    /* 006f0043: jge 0x6f0059 */ if ((fS==fO)) goto L_006f0059;
L_006f0045:; BB(0x006f0045);
    /* 006f0045: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f004b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f004d: je 0x6f0059 */ if (fZ) goto L_006f0059;
L_006f004f:; BB(0x006f004f);
    /* 006f004f: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0059:; BB(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0043); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0044(void)
{
    FN_ENTER(0x006f0044);
    /* 006f0044: adc al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f0046: cmp ah, 8 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x8u; u32 r = (a - b) & 0xffu;   }
    /* 006f0049: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f004b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f004d: je 0x6f0059 */ if (fZ) goto L_006f0059;
L_006f004f:; BB(0x006f004f);
    /* 006f004f: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0059:; BB(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0044); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0047(void)
{
    FN_ENTER(0x006f0047);
    /* 006f0047: cld  */ rt_df = 0;
    /* 006f0048: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 006f004a: add byte ptr [ebp - 0x38f58b40], al */ { u32 ad = (u32)(r_ebp+0xc70a74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0050: add dword ptr [ecx + eax], 0 */ { u32 ad = (u32)(r_ecx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0057: and cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0047); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f004a(void)
{
    FN_ENTER(0x006f004a);
    /* 006f004a: add byte ptr [ebp - 0x38f58b40], al */ { u32 ad = (u32)(r_ebp+0xc70a74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0050: add dword ptr [ecx + eax], 0 */ { u32 ad = (u32)(r_ecx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0057: and cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f004a); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f004b(void)
{
    FN_ENTER(0x006f004b);
    /* 006f004b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f004d: je 0x6f0059 */ if (fZ) goto L_006f0059;
L_006f004f:; BB(0x006f004f);
    /* 006f004f: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0059:; BB(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f004b); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f004d(void)
{
    FN_ENTER(0x006f004d);
    /* 006f004d: je 0x6f0059 */ if (fZ) goto L_006f0059;
L_006f004f:; BB(0x006f004f);
    /* 006f004f: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0059:; BB(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f004d); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0052(void)
{
    FN_ENTER(0x006f0052);
    /* 006f0052: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0056: add byte ptr [eax], ah */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0058: rol edi, 0x81 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { { u32 k = c % 32; r = k ? (((a << k) | (a >> (32 - k))) & 0xffffffffu) : a; } r_edi = r;  } }
    /* 006f005b: or byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 006f005d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f005f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0061: mov al, byte ptr [0xc81c740] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xc81c740u))) & 0xffu);
    /* 006f0066: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0068: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f006a: add byte ptr [eax + 0x1081c73f], al */ { u32 ad = (u32)(r_eax+0x1081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0070: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0072: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0052); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0053(void)
{
    FN_ENTER(0x006f0053);
    /* 006f0053: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0055: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0057: and cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0053); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0057(void)
{
    FN_ENTER(0x006f0057);
    /* 006f0057: and cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0057); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0059(void)
{
    FN_ENTER(0x006f0059);
    /* 006f0059: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0059); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0061(void)
{
    FN_ENTER(0x006f0061);
    /* 006f0061: mov al, byte ptr [0xc81c740] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xc81c740u))) & 0xffu);
    /* 006f0066: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0068: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f006a: add byte ptr [eax + 0x1081c73f], al */ { u32 ad = (u32)(r_eax+0x1081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0070: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0072: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0061); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0063(void)
{
    FN_ENTER(0x006f0063);
    /* 006f0063: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0063); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0066(void)
{
    FN_ENTER(0x006f0066);
    /* 006f0066: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0068: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f006a: add byte ptr [eax + 0x1081c73f], al */ { u32 ad = (u32)(r_eax+0x1081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0070: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0072: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0066); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0067(void)
{
    FN_ENTER(0x006f0067);
    /* 006f0067: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f006b: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 006f006e: adc dword ptr [eax], 0x1000001 */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x1000001u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0067); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0068(void)
{
    FN_ENTER(0x006f0068);
    /* 006f0068: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f006a: add byte ptr [eax + 0x1081c73f], al */ { u32 ad = (u32)(r_eax+0x1081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0070: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0072: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0068); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0069(void)
{
    FN_ENTER(0x006f0069);
    /* 006f0069: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f006b: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 006f006e: adc dword ptr [eax], 0x1000001 */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x1000001u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0069); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f006b(void)
{
    FN_ENTER(0x006f006b);
    /* 006f006b: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 006f006e: adc dword ptr [eax], 0x1000001 */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x1000001u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f006b); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f006c(void)
{
    FN_ENTER(0x006f006c);
    /* 006f006c: aas  */ UNSUP(0x006f006c, "aas ");
    /* 006f006d: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f006c); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f006e(void)
{
    FN_ENTER(0x006f006e);
    /* 006f006e: adc dword ptr [eax], 0x1000001 */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x1000001u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f006e); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0072(void)
{
    FN_ENTER(0x006f0072);
    /* 006f0072: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0072); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0073(void)
{
    FN_ENTER(0x006f0073);
    /* 006f0073: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f0075: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0073); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0074(void)
{
    FN_ENTER(0x006f0074);
    /* 006f0074: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0074); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0076(void)
{
    FN_ENTER(0x006f0076);
    /* 006f0076: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 006f0078: mov bh, 0x42 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 006f007a: sbb al, 0x83 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007c: clc  */ fC = 0;
    /* 006f007d: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f007f: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006f0081: adc dword ptr [ecx + eax], 0x70000 */ { u32 ad = (u32)(r_ecx+r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x70000u; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 006f0088: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0076); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f0077(void)
{
    FN_ENTER(0x006f0077);
    /* 006f0077: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f007b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f007e: jl 0x6f008c */ if ((fS!=fO)) goto L_006f008c;
L_006f0080:; BB(0x006f0080);
    /* 006f0080: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f008a: jmp 0x6f00ac */ goto L_006f00ac;
L_006f008c:; BB(0x006f008c);
    /* 006f008c: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0094: je 0x6f00a2 */ if (fZ) goto L_006f00a2;
L_006f0096:; BB(0x006f0096);
    /* 006f0096: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f00a0: jmp 0x6f00ac */ goto L_006f00ac;
L_006f00a2:; BB(0x006f00a2);
    /* 006f00a2: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f00ac:; BB(0x006f00ac);
    /* 006f00ac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006f00b3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f00b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f00bdu); f_005caba4();
    /* 006f00bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f00c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f00c3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006f00c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f00c8: je 0x6f012e */ if (fZ) goto L_006f012e;
L_006f00ca:; BB(0x006f00ca);
    /* 006f00ca: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006f00d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f00d8: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f00db: mov ecx, eax */ r_ecx = r_eax;
    /* 006f00dd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f00e2u); f_007b4b48();
    /* 006f00e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006f00e9:; BB(0x006f00e9);
    /* 006f00e9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f00ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f00ef: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f0077); r_esp += 20; return;
L_006f012e:; BB(0x006f012e);
    /* 006f012e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0130: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0133: jmp 0x6f00e9 */ goto L_006f00e9;
}

void f_006f00f1(void)
{
    FN_ENTER(0x006f00f1);
    /* 006f00f1: sub byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 006f00f3: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f00f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f00fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f00fe: je 0x6f0113 */ if (fZ) goto L_006f0113;
L_006f0100:; BB(0x006f0100);
    /* 006f0100: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0104: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f010a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f010b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f0110u); f_007b9a88();
    /* 006f0110: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
L_006f0113:; BB(0x006f0113);
    /* 006f0113: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0116: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f0119: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f011c: mov eax, edx */ r_eax = r_edx;
    /* 006f011e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0128: mov esp, ebp */ r_esp = r_ebp;
    /* 006f012a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f012b: ret 0x10 */ FN_RET(0x006f00f1); r_esp += 20; return;
}

void f_006f0138(void) /* sub_6F0138 */
{
    FN_ENTER(0x006f0138);
    /* 006f0138: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f0139: mov ebp, esp */ r_ebp = r_esp;
    /* 006f013b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f013d: push 0x8efa52 */ { u32 v = 0x8efa52u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0142: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f0148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0149: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f0150: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0153: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f0156: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 006f0159: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 006f015c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 006f015f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006f0162: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006f0165: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 006f0168: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006f016b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006f016e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006f0171: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006f0174: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006f0177: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006f017a: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x6f017fu); f_00501860();
    /* 006f017f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f0186: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006f0189: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006f018c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f018f: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 006f0194: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0196: mov dword ptr [ecx], 0xb3e428 */ W32((u32)(r_ecx), 0xb3e428u);
    /* 006f019c: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 006f01a2: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
    /* 006f01a8: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 006f01ae: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 006f01b4: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 006f01ba: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 006f01c0: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 006f01c6: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 006f01cc: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 006f01d2: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 006f01d8: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 006f01de: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 006f01e4: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 006f01ea: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 006f01f0: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 006f01f6: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 006f01fc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006f01ff: mov word ptr [ecx + 0xc8], bx */ W16((u32)(r_ecx+0xc8u), (u16)r_ebx);
    /* 006f0206: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 006f0208: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 006f020a: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 006f020c: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 006f020f: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 006f0212: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 006f0215: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 006f0218: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f021a: fst dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0));
    /* 006f021d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f021f: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 006f0222: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f0224: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 006f0227: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f0229: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 006f022b: fmul qword ptr [0x96de90] */ ST(0) = ST(0) * R_F64((u32)(0x96de90u));
    /* 006f0231: fdiv qword ptr [0x96de88] */ ST(0) = ST(0) / R_F64((u32)(0x96de88u));
    /* 006f0237: fnstcw word ptr [ebp - 0x50] */ W16((u32)(r_ebp+0xffffffb0u), fcw);
    /* 006f023a: movzx eax, word ptr [ebp - 0x50] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb0u));
    /* 006f023e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f0243: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006f0246: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 006f0249: fistp dword ptr [ebp - 0x40] */ W32((u32)(r_ebp+0xffffffc0u), (u32)fx_int32(ST(0))); FPOP();
    /* 006f024c: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 006f024f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006f0252: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006f0255: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006f0257: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f025a: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006f025d: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 006f0260: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f0263: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006f0266: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 006f0269: mov dword ptr [ecx + 0x12c], 0x40800000 */ W32((u32)(r_ecx+0x12cu), 0x40800000u);
    /* 006f0273: mov dword ptr [ecx + 0x54], edi */ W32((u32)(r_ecx+0x54u), r_edi);
    /* 006f0276: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 006f0279: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f027c: mov dword ptr [ecx + 0x3c], 0x3f800000 */ W32((u32)(r_ecx+0x3cu), 0x3f800000u);
    /* 006f0283: mov dword ptr [ecx + 0x5c], edi */ W32((u32)(r_ecx+0x5cu), r_edi);
    /* 006f0286: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 006f0289: mov dword ptr [ecx + 0x40], 0x3f800000 */ W32((u32)(r_ecx+0x40u), 0x3f800000u);
    /* 006f0290: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 006f0295: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0298: jl 0x6f029c */ if ((fS!=fO)) goto L_006f029c;
L_006f029a:; BB(0x006f029a);
    /* 006f029a: mov edx, eax */ r_edx = r_eax;
L_006f029c:; BB(0x006f029c);
    /* 006f029c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f029e: mov dword ptr [ecx + 0x44], 0x3f800000 */ W32((u32)(r_ecx+0x44u), 0x3f800000u);
    /* 006f02a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f02a7: jg 0x6f02ab */ if ((!fZ&&fS==fO)) goto L_006f02ab;
L_006f02a9:; BB(0x006f02a9);
    /* 006f02a9: mov edx, eax */ r_edx = r_eax;
L_006f02ab:; BB(0x006f02ab);
    /* 006f02ab: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 006f02ae: mov word ptr [ecx + 0xc4], ax */ W16((u32)(r_ecx+0xc4u), (u16)r_eax);
    /* 006f02b5: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 006f02bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f02bd: call 0x6e1cec */ r_esp -= 4; W32(r_esp, 0x6f02c2u); f_006e1cec();
    /* 006f02c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f02c3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006f02c6: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 006f02c9: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 006f02cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006f02cf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f02d1: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 006f02d4: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
    /* 006f02d7: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 006f02da: mov word ptr [ecx + 0xc6], ax */ W16((u32)(r_ecx+0xc6u), (u16)r_eax);
    /* 006f02e1: mov dword ptr [ecx + 0x2c], 0x3f800000 */ W32((u32)(r_ecx+0x2cu), 0x3f800000u);
    /* 006f02e8: mov dword ptr [ecx + 0x30], 0x3f800000 */ W32((u32)(r_ecx+0x30u), 0x3f800000u);
    /* 006f02ef: mov dword ptr [ecx + 0x34], 0x3f800000 */ W32((u32)(r_ecx+0x34u), 0x3f800000u);
    /* 006f02f6: mov dword ptr [ecx + 0x38], 0x3f800000 */ W32((u32)(r_ecx+0x38u), 0x3f800000u);
    /* 006f02fd: mov dword ptr [ecx + 0x64], 0x40400000 */ W32((u32)(r_ecx+0x64u), 0x40400000u);
    /* 006f0304: mov dword ptr [ecx + 0x70], 0x41f00000 */ W32((u32)(r_ecx+0x70u), 0x41f00000u);
    /* 006f030b: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f030e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6f0313u); f_0083173c();
    /* 006f0313: fcomp dword ptr [0x96dec0] */ fx_compare(ST(0), R_F32((u32)(0x96dec0u))); FPOP();
    /* 006f0319: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f031b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f031c: je 0x6f032b */ if (fZ) goto L_006f032b;
L_006f031e:; BB(0x006f031e);
    /* 006f031e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006f0321: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f0324: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6f0329u); f_0082df08();
    /* 006f0329: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006f032b:; BB(0x006f032b);
    /* 006f032b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 006f032e: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 006f0331: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 006f0334: add eax, 0x5c */ {  u32 a = r_eax; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f0337: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f033a: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x6f033fu); f_007a8d98();
    /* 006f033f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0342: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006f0345: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006f0348: mov dword ptr [ecx + 0xfc], 0 */ W32((u32)(r_ecx+0xfcu), 0x0u);
    /* 006f0352: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
    /* 006f035c: mov dword ptr [ecx + 0x104], 0 */ W32((u32)(r_ecx+0x104u), 0x0u);
    /* 006f0366: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f036a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f036d: jge 0x6f0383 */ if ((fS==fO)) goto L_006f0383;
L_006f036f:; BB(0x006f036f);
    /* 006f036f: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f0375: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0377: je 0x6f0383 */ if (fZ) goto L_006f0383;
L_006f0379:; BB(0x006f0379);
    /* 006f0379: mov dword ptr [ecx + 0x104], 0xc1200000 */ W32((u32)(r_ecx+0x104u), 0xc1200000u);
L_006f0383:; BB(0x006f0383);
    /* 006f0383: mov dword ptr [ecx + 0x108], 0x40a00000 */ W32((u32)(r_ecx+0x108u), 0x40a00000u);
    /* 006f038d: mov dword ptr [ecx + 0x10c], 0x3f800000 */ W32((u32)(r_ecx+0x10cu), 0x3f800000u);
    /* 006f0397: mov dword ptr [ecx + 0x110], 1 */ W32((u32)(r_ecx+0x110u), 0x1u);
    /* 006f03a1: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f03a5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f03a8: jl 0x6f03b6 */ if ((fS!=fO)) goto L_006f03b6;
L_006f03aa:; BB(0x006f03aa);
    /* 006f03aa: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f03b4: jmp 0x6f03d6 */ goto L_006f03d6;
L_006f03b6:; BB(0x006f03b6);
    /* 006f03b6: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f03bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f03be: je 0x6f03cc */ if (fZ) goto L_006f03cc;
L_006f03c0:; BB(0x006f03c0);
    /* 006f03c0: mov dword ptr [ecx + 0x114], 0x40007 */ W32((u32)(r_ecx+0x114u), 0x40007u);
    /* 006f03ca: jmp 0x6f03d6 */ goto L_006f03d6;
L_006f03cc:; BB(0x006f03cc);
    /* 006f03cc: mov dword ptr [ecx + 0x114], 0x40107 */ W32((u32)(r_ecx+0x114u), 0x40107u);
L_006f03d6:; BB(0x006f03d6);
    /* 006f03d6: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006f03dd: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006f03e2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f03e7u); f_005caba4();
    /* 006f03e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f03ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f03ed: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006f03f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f03f2: je 0x6f0458 */ if (fZ) goto L_006f0458;
L_006f03f4:; BB(0x006f03f4);
    /* 006f03f4: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 006f03fb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f0402: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0405: mov ecx, eax */ r_ecx = r_eax;
    /* 006f0407: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6f040cu); f_007b4b48();
    /* 006f040c: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_006f0413:; BB(0x006f0413);
    /* 006f0413: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 006f0416: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f0419: mov dword ptr [edx + 0x128], eax */ W32((u32)(r_edx+0x128u), r_eax);
    /* 006f041f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f0426: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0428: je 0x6f043d */ if (fZ) goto L_006f043d;
L_006f042a:; BB(0x006f042a);
    /* 006f042a: mov ecx, eax */ r_ecx = r_eax;
    /* 006f042c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006f042e: add edx, 0xfc */ {  u32 a = r_edx; u32 b = 0xfcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f0434: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0435: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6f043au); f_007b9a88();
    /* 006f043a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
L_006f043d:; BB(0x006f043d);
    /* 006f043d: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 006f0440: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 006f0443: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006f0446: mov eax, edx */ r_eax = r_edx;
    /* 006f0448: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f044b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0452: mov esp, ebp */ r_esp = r_ebp;
    /* 006f0454: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f0455: ret 0x10 */ FN_RET(0x006f0138); r_esp += 20; return;
L_006f0458:; BB(0x006f0458);
    /* 006f0458: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f045a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f045d: jmp 0x6f0413 */ goto L_006f0413;
}

void f_006f0460(void) /* sub_6F0460 */
{
    FN_ENTER(0x006f0460);
    /* 006f0460: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0461: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f0463: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0465: call 0x6f0474 */ r_esp -= 4; W32(r_esp, 0x6f046au); f_006f0474();
    /* 006f046a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f046c: call 0x6f053c */ r_esp -= 4; W32(r_esp, 0x6f0471u); f_006f053c();
    /* 006f0471: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0472: ret  */ FN_RET(0x006f0460); r_esp += 4; return;
}

void f_006f0474(void) /* sub_6F0474 */
{
    FN_ENTER(0x006f0474);
    /* 006f0474: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006f0477: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006f047a: fld dword ptr [ecx + 0x64] */ FPUSH(R_F32((u32)(r_ecx+0x64u)));
    /* 006f047d: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 006f0480: fld dword ptr [ecx + 0x4c] */ FPUSH(R_F32((u32)(r_ecx+0x4cu)));
    /* 006f0483: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 006f0486: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f0488: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f048a: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 006f048d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f048f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f0491: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 006f0494: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f0496: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006f0498: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f049a: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 006f049d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f049f: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 006f04a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f04a4: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 006f04a7: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 006f04aa: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 006f04ad: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 006f04b0: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 006f04b3: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 006f04b9: call 0x6f04c0 */ r_esp -= 4; W32(r_esp, 0x6f04beu); f_006f04c0();
    /* 006f04be: ret  */ FN_RET(0x006f0474); r_esp += 4; return;
}

void f_006f04c0(void) /* sub_6F04C0 */
{
    FN_ENTER(0x006f04c0);
    /* 006f04c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f04c1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f04c4: mov esi, ecx */ r_esi = r_ecx;
    /* 006f04c6: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 006f04c9: mov edx, dword ptr [esi + 0x7c] */ r_edx = R32((u32)(r_esi+0x7cu));
    /* 006f04cc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006f04cf: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 006f04d5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006f04d9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006f04dd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006f04e0: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006f04e3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006f04e7: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006f04ea: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006f04ee: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006f04f1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006f04f5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006f04f9: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006f04fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f04ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0500: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x6f0505u); f_0077fffc();
    /* 006f0505: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f050a: je 0x6f0534 */ if (fZ) goto L_006f0534;
L_006f050c:; BB(0x006f050c);
    /* 006f050c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006f050f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006f0511: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006f0514: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006f0517: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006f051a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006f051d: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 006f0520: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006f0522: mov ecx, esi */ r_ecx = r_esi;
    /* 006f0524: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6f0527u); call_ind(t); }
    /* 006f0527: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006f052b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f0530: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_006f0534:; BB(0x006f0534);
    /* 006f0534: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f0538: ret  */ FN_RET(0x006f04c0); r_esp += 4; return;
}

void f_006f053c(void) /* sub_6F053C */
{
    FN_ENTER(0x006f053c);
    /* 006f053c: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 006f053f: fcom dword ptr [ecx + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x70u))); 
    /* 006f0542: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f0544: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f0545: jbe 0x6f0557 */ if ((fC||fZ)) goto L_006f0557;
L_006f0547:; BB(0x006f0547);
    /* 006f0547: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f0549: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 006f054d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0552: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 006f0556: ret  */ FN_RET(0x006f053c); r_esp += 4; return;
L_006f0557:; BB(0x006f0557);
    /* 006f0557: fld dword ptr [ecx + 0x64] */ FPUSH(R_F32((u32)(r_ecx+0x64u)));
    /* 006f055a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006f055c: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 006f055f: ret  */ FN_RET(0x006f053c); r_esp += 4; return;
}

void f_006f0560(void) /* sub_6F0560 */
{
    FN_ENTER(0x006f0560);
    /* 006f0560: call 0x6f0568 */ r_esp -= 4; W32(r_esp, 0x6f0565u); f_006f0568();
    /* 006f0565: ret  */ FN_RET(0x006f0560); r_esp += 4; return;
}

void f_006f0568(void) /* sub_6F0568 */
{
    FN_ENTER(0x006f0568);
    /* 006f0568: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f0569: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f056c: mov esi, ecx */ r_esi = r_ecx;
    /* 006f056e: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006f0571: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 006f0574: fld dword ptr [0x96deac] */ FPUSH(R_F32((u32)(0x96deacu)));
    /* 006f057a: fld dword ptr [esi + 0x64] */ FPUSH(R_F32((u32)(r_esi+0x64u)));
    /* 006f057d: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 006f0580: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 006f0583: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f0585: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 006f0587: fadd dword ptr [esi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x20u));
    /* 006f058a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f058c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006f058e: fadd dword ptr [esi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x28u));
    /* 006f0591: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f0593: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 006f0596: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 006f0599: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 006f059d: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 006f05a0: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 006f05a3: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006f05a6: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 006f05a9: mov dword ptr [esi + 0x80], edx */ W32((u32)(r_esi+0x80u), r_edx);
    /* 006f05af: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006f05b3: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 006f05b7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006f05bb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006f05be: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 006f05c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f05c4: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x6f05c9u); f_00780630();
    /* 006f05c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f05cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f05ce: je 0x6f06bb */ if (fZ) goto L_006f06bb;
L_006f05d4:; BB(0x006f05d4);
    /* 006f05d4: fld dword ptr [0x96dea8] */ FPUSH(R_F32((u32)(0x96dea8u)));
    /* 006f05da: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006f05dd: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 006f05e0: fst dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0));
L_006f05e3:; BB(0x006f05e3);
    /* 006f05e3: fsubr dword ptr [esi + 0x7c] */ ST(0) = R_F32((u32)(r_esi+0x7cu)) - ST(0);
    /* 006f05e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f05e7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f05ea: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x6f05efu); f_0082e900();
    /* 006f05ef: fcomp dword ptr [0x96dea4] */ fx_compare(ST(0), R_F32((u32)(0x96dea4u))); FPOP();
    /* 006f05f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f05f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f05f8: jbe 0x6f0613 */ if ((fC||fZ)) goto L_006f0613;
L_006f05fa:; BB(0x006f05fa);
    /* 006f05fa: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 006f05fd: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 006f0601: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006f0604: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006f060a: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 006f060e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0611: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f0612: ret  */ FN_RET(0x006f0568); r_esp += 4; return;
L_006f0613:; BB(0x006f0613);
    /* 006f0613: fld dword ptr [0x96dea8] */ FPUSH(R_F32((u32)(0x96dea8u)));
    /* 006f0619: fadd dword ptr [esi + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x7cu));
    /* 006f061c: mov eax, dword ptr [esi + 0x78] */ r_eax = R32((u32)(r_esi+0x78u));
    /* 006f061f: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 006f0625: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006f0629: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006f062d: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006f0630: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006f0634: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006f0638: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006f063c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006f0640: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 006f0644: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006f0647: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006f064b: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006f064f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0656: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x6f065bu); f_0077fffc();
    /* 006f065b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f065e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0660: je 0x6f06b6 */ if (fZ) goto L_006f06b6;
L_006f0662:; BB(0x006f0662);
    /* 006f0662: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 006f0666: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006f0669: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 006f066c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006f0670: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006f0673: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006f0676: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006f067a: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 006f067e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006f0681: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 006f0684: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006f0688: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 006f068c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f068d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f068e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f068f: call 0x7a8d04 */ r_esp -= 4; W32(r_esp, 0x6f0694u); f_007a8d04();
    /* 006f0694: push dword ptr [esp + 0x40] */ { u32 v = R32((u32)(r_esp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0698: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f069a: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x6f069fu); f_007a9018();
    /* 006f069f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f06a2: cmp eax, 0x1555 */ {  u32 a = r_eax; u32 b = 0x1555u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f06a7: jl 0x6f06b6 */ if ((fS!=fO)) goto L_006f06b6;
L_006f06a9:; BB(0x006f06a9);
    /* 006f06a9: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006f06ad: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f06b2: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_006f06b6:; BB(0x006f06b6);
    /* 006f06b6: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f06b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f06ba: ret  */ FN_RET(0x006f0568); r_esp += 4; return;
L_006f06bb:; BB(0x006f06bb);
    /* 006f06bb: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 006f06be: jmp 0x6f05e3 */ goto L_006f05e3;
}

void f_006f06c4(void) /* sub_6F06C4 */
{
    FN_ENTER(0x006f06c4);
    /* 006f06c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f06c5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f06c8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f06ca: mov eax, dword ptr [ebx + 0x128] */ r_eax = R32((u32)(r_ebx+0x128u));
    /* 006f06d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f06d2: je 0x6f0786 */ if (fZ) goto L_006f0786;
L_006f06d8:; BB(0x006f06d8);
    /* 006f06d8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006f06db: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f06df: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f06e2: jge 0x6f070a */ if ((fS==fO)) goto L_006f070a;
L_006f06e4:; BB(0x006f06e4);
    /* 006f06e4: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f06ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f06ec: je 0x6f06fc */ if (fZ) goto L_006f06fc;
L_006f06ee:; BB(0x006f06ee);
    /* 006f06ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f06ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f06f0: call 0x6ea7c4 */ r_esp -= 4; W32(r_esp, 0x6f06f5u); f_006ea7c4();
    /* 006f06f5: mov edx, eax */ r_edx = r_eax;
    /* 006f06f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f06fa: jmp 0x6f0716 */ goto L_006f0716;
L_006f06fc:; BB(0x006f06fc);
    /* 006f06fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f06fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f06fe: call 0x6eaaec */ r_esp -= 4; W32(r_esp, 0x6f0703u); f_006eaaec();
    /* 006f0703: mov edx, eax */ r_edx = r_eax;
    /* 006f0705: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0708: jmp 0x6f0716 */ goto L_006f0716;
L_006f070a:; BB(0x006f070a);
    /* 006f070a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f070b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f070c: call 0x6ea7c4 */ r_esp -= 4; W32(r_esp, 0x6f0711u); f_006ea7c4();
    /* 006f0711: mov edx, eax */ r_edx = r_eax;
    /* 006f0713: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006f0716:; BB(0x006f0716);
    /* 006f0716: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0718: je 0x6f0770 */ if (fZ) goto L_006f0770;
L_006f071a:; BB(0x006f071a);
    /* 006f071a: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 006f0720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0722: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f0724: jle 0x6f076b */ if ((fZ||fS!=fO)) goto L_006f076b;
L_006f0726:; BB(0x006f0726);
    /* 006f0726: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006f072a: mov esi, edx */ r_esi = r_edx;
    /* 006f072c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006f072f: mov edi, ebx */ r_edi = r_ebx;
    /* 006f0731: mov ebx, eax */ r_ebx = r_eax;
L_006f0733:; BB(0x006f0733);
    /* 006f0733: push dword ptr [esi + ebx*4] */ { u32 v = R32((u32)(r_esi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0736: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6f073bu); f_006ea71c();
    /* 006f073b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f073c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f073e: je 0x6f0759 */ if (fZ) goto L_006f0759;
L_006f0740:; BB(0x006f0740);
    /* 006f0740: mov edx, dword ptr [esi + ebx*4] */ r_edx = R32((u32)(r_esi+r_ebx*4));
    /* 006f0743: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0745: je 0x6f0759 */ if (fZ) goto L_006f0759;
L_006f0747:; BB(0x006f0747);
    /* 006f0747: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0748: mov eax, dword ptr [esi + ebx*4 + 0x40] */ r_eax = R32((u32)(r_esi+r_ebx*4+0x40u));
    /* 006f074c: mov dword ptr [edi + 0xf8], eax */ W32((u32)(r_edi+0xf8u), r_eax);
    /* 006f0752: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006f0754: mov ecx, edi */ r_ecx = r_edi;
    /* 006f0756: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6f0759u); call_ind(t); }
L_006f0759:; BB(0x006f0759);
    /* 006f0759: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f075c: cmp ebx, dword ptr [esi + 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x80u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0762: jl 0x6f0733 */ if ((fS!=fO)) goto L_006f0733;
L_006f0764:; BB(0x006f0764);
    /* 006f0764: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006f0768: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006f076b:; BB(0x006f076b);
    /* 006f076b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f076e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f076f: ret  */ FN_RET(0x006f06c4); r_esp += 4; return;
L_006f0770:; BB(0x006f0770);
    /* 006f0770: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006f0772: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0774: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6f0777u); call_ind(t); }
    /* 006f0777: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006f077b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f0780: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006f0784: jmp 0x6f076b */ goto L_006f076b;
L_006f0786:; BB(0x006f0786);
    /* 006f0786: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006f078a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f078f: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006f0793: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0796: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0797: ret  */ FN_RET(0x006f06c4); r_esp += 4; return;
}

void f_006f0798(void) /* sub_6F0798 */
{
    FN_ENTER(0x006f0798);
    /* 006f0798: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f0799: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f079a: mov edi, ecx */ r_edi = r_ecx;
    /* 006f079c: mov eax, dword ptr [edi + 0x128] */ r_eax = R32((u32)(r_edi+0x128u));
    /* 006f07a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f07a4: je 0x6f082d */ if (fZ) goto L_006f082d;
L_006f07aa:; BB(0x006f07aa);
    /* 006f07aa: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 006f07ad: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f07b1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f07b4: jge 0x6f07dc */ if ((fS==fO)) goto L_006f07dc;
L_006f07b6:; BB(0x006f07b6);
    /* 006f07b6: mov eax, dword ptr [edx + 0x8fc] */ r_eax = R32((u32)(r_edx+0x8fcu));
    /* 006f07bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f07be: je 0x6f07ce */ if (fZ) goto L_006f07ce;
L_006f07c0:; BB(0x006f07c0);
    /* 006f07c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f07c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f07c2: call 0x6ea7c4 */ r_esp -= 4; W32(r_esp, 0x6f07c7u); f_006ea7c4();
    /* 006f07c7: mov ebx, eax */ r_ebx = r_eax;
    /* 006f07c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f07cc: jmp 0x6f07e8 */ goto L_006f07e8;
L_006f07ce:; BB(0x006f07ce);
    /* 006f07ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f07cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f07d0: call 0x6eaaec */ r_esp -= 4; W32(r_esp, 0x6f07d5u); f_006eaaec();
    /* 006f07d5: mov ebx, eax */ r_ebx = r_eax;
    /* 006f07d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f07da: jmp 0x6f07e8 */ goto L_006f07e8;
L_006f07dc:; BB(0x006f07dc);
    /* 006f07dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f07dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f07de: call 0x6ea7c4 */ r_esp -= 4; W32(r_esp, 0x6f07e3u); f_006ea7c4();
    /* 006f07e3: mov ebx, eax */ r_ebx = r_eax;
    /* 006f07e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006f07e8:; BB(0x006f07e8);
    /* 006f07e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f07ea: je 0x6f0814 */ if (fZ) goto L_006f0814;
L_006f07ec:; BB(0x006f07ec);
    /* 006f07ec: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 006f07ee: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6f07f3u); f_006ea71c();
    /* 006f07f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f07f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f07f6: je 0x6f080f */ if (fZ) goto L_006f080f;
L_006f07f8:; BB(0x006f07f8);
    /* 006f07f8: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f07fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f07fc: je 0x6f080f */ if (fZ) goto L_006f080f;
L_006f07fe:; BB(0x006f07fe);
    /* 006f07fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f07ff: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 006f0802: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 006f0804: mov dword ptr [edi + 0xf8], eax */ W32((u32)(r_edi+0xf8u), r_eax);
    /* 006f080a: mov ecx, edi */ r_ecx = r_edi;
    /* 006f080c: call dword ptr [ebx + 0x18] */ { u32 t = R32((u32)(r_ebx+0x18u)); r_esp -= 4; W32(r_esp, 0x6f080fu); call_ind(t); }
L_006f080f:; BB(0x006f080f);
    /* 006f080f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0810: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f0811: ret 4 */ FN_RET(0x006f0798); r_esp += 8; return;
L_006f0814:; BB(0x006f0814);
    /* 006f0814: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006f0816: mov ecx, edi */ r_ecx = r_edi;
    /* 006f0818: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6f081bu); call_ind(t); }
    /* 006f081b: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006f081f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0824: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006f0828: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0829: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f082a: ret 4 */ FN_RET(0x006f0798); r_esp += 8; return;
L_006f082d:; BB(0x006f082d);
    /* 006f082d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006f0831: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0836: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006f083a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f083b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f083c: ret 4 */ FN_RET(0x006f0798); r_esp += 8; return;
}

void f_006f0840(void) /* sub_6F0840 */
{
    FN_ENTER(0x006f0840);
    /* 006f0840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f0841: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0844: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006f0846: fld dword ptr [ebp + 0xcc] */ FPUSH(R_F32((u32)(r_ebp+0xccu)));
    /* 006f084c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006f0850: mov dword ptr [esp], 0x1e0014 */ W32((u32)(r_esp), 0x1e0014u);
    /* 006f0857: mov dword ptr [esp + 4], 0x96cb0c */ W32((u32)(r_esp+0x4u), 0x96cb0cu);
    /* 006f085f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6f0864u); f_0061cdb0();
    /* 006f0864: movsx eax, word ptr [ebp + 0xdc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xdcu));
    /* 006f086b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f086c: push 0x96cb18 */ { u32 v = 0x96cb18u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0871: push 0x1e0015 */ { u32 v = 0x1e0015u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0876: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6f087bu); f_0061cdb0();
    /* 006f087b: movsx eax, word ptr [ebp + 0xde] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xdeu));
    /* 006f0882: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0883: push 0x96cb24 */ { u32 v = 0x96cb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0888: push 0x1e0016 */ { u32 v = 0x1e0016u; r_esp -= 4; W32(r_esp, v); }
    /* 006f088d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6f0892u); f_0061cdb0();
    /* 006f0892: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0895: fld dword ptr [ebp + 0xd0] */ FPUSH(R_F32((u32)(r_ebp+0xd0u)));
    /* 006f089b: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006f089f: mov dword ptr [esp], 0x1e0017 */ W32((u32)(r_esp), 0x1e0017u);
    /* 006f08a6: mov dword ptr [esp + 4], 0x96cb30 */ W32((u32)(r_esp+0x4u), 0x96cb30u);
    /* 006f08ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6f08b3u); f_0061cdb0();
    /* 006f08b3: fld dword ptr [ebp + 0xd4] */ FPUSH(R_F32((u32)(r_ebp+0xd4u)));
    /* 006f08b9: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006f08bd: mov dword ptr [esp], 0x1e0018 */ W32((u32)(r_esp), 0x1e0018u);
    /* 006f08c4: mov dword ptr [esp + 4], 0x96cb3c */ W32((u32)(r_esp+0x4u), 0x96cb3cu);
    /* 006f08cc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6f08d1u); f_0061cdb0();
    /* 006f08d1: movsx eax, word ptr [ebp + 0xe0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xe0u));
    /* 006f08d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f08d9: push 0x96cb48 */ { u32 v = 0x96cb48u; r_esp -= 4; W32(r_esp, v); }
    /* 006f08de: push 0x1e0019 */ { u32 v = 0x1e0019u; r_esp -= 4; W32(r_esp, v); }
    /* 006f08e3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6f08e8u); f_0061cdb0();
    /* 006f08e8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f08eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f08ec: ret  */ FN_RET(0x006f0840); r_esp += 4; return;
}

void f_006f08f0(void) /* sub_6F08F0 */
{
    FN_ENTER(0x006f08f0);
    /* 006f08f0: mov dword ptr [0xa968a4], 0x3f800000 */ W32((u32)(0xa968a4u), 0x3f800000u);
    /* 006f08fa: mov dword ptr [0xa968a8], 0x41000000 */ W32((u32)(0xa968a8u), 0x41000000u);
    /* 006f0904: mov dword ptr [0xa968ac], 0x3fc00000 */ W32((u32)(0xa968acu), 0x3fc00000u);
    /* 006f090e: ret  */ FN_RET(0x006f08f0); r_esp += 4; return;
}

void f_006f0910(void) /* sub_6F0910 */
{
    FN_ENTER(0x006f0910);
    /* 006f0910: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0911: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f0913: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0915: call 0x6f0934 */ r_esp -= 4; W32(r_esp, 0x6f091au); f_006f0934();
    /* 006f091a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f091e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0920: jne 0x6f0926 */ if (!fZ) goto L_006f0926;
L_006f0922:; BB(0x006f0922);
    /* 006f0922: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0923: ret 4 */ FN_RET(0x006f0910); r_esp += 8; return;
L_006f0926:; BB(0x006f0926);
    /* 006f0926: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0927: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f092cu); f_005c2f74();
    /* 006f092c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f092d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f092e: ret 4 */ FN_RET(0x006f0910); r_esp += 8; return;
}

void f_006f0934(void) /* sub_6F0934 */
{
    FN_ENTER(0x006f0934);
    /* 006f0934: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f0935: mov ebp, esp */ r_ebp = r_esp;
    /* 006f0937: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0939: push 0x8efa6c */ { u32 v = 0x8efa6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f093e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f0944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0945: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f094c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f094f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f0952: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f0955: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f0958: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f095b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f095e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0961: mov dword ptr [ecx], 0xb3e510 */ W32((u32)(r_ecx), 0xb3e510u);
    /* 006f0967: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f096e: call 0x6ebcf0 */ r_esp -= 4; W32(r_esp, 0x6f0973u); f_006ebcf0();
    /* 006f0973: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0976: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f097d: mov esp, ebp */ r_esp = r_ebp;
    /* 006f097f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f0980: ret  */ FN_RET(0x006f0934); r_esp += 4; return;
}

void f_006f0984(void) /* sub_6F0984 */
{
    FN_ENTER(0x006f0984);
    /* 006f0984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f0985: mov ebp, esp */ r_ebp = r_esp;
    /* 006f0987: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0989: push 0x8efa94 */ { u32 v = 0x8efa94u; r_esp -= 4; W32(r_esp, v); }
    /* 006f098e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f0994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0995: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f099c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f099f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f09a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f09a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f09a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f09ab: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006f09b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006f09b7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f09bcu); f_005caba4();
    /* 006f09bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f09bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006f09c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f09c2: je 0x6f09ea */ if (fZ) goto L_006f09ea;
L_006f09c4:; BB(0x006f09c4);
    /* 006f09c4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006f09cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f09d2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f09d5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f09d8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f09db: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f09de: call 0x6f09f8 */ r_esp -= 4; W32(r_esp, 0x6f09e3u); f_006f09f8();
    /* 006f09e3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006f09ea:; BB(0x006f09ea);
    /* 006f09ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f09ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f09f4: mov esp, ebp */ r_esp = r_ebp;
    /* 006f09f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f09f7: ret  */ FN_RET(0x006f0984); r_esp += 4; return;
}

void f_006f09f8(void) /* sub_6F09F8 */
{
    FN_ENTER(0x006f09f8);
    /* 006f09f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f09f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006f09fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f09fd: push 0x8efab0 */ { u32 v = 0x8efab0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0a02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f0a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0a09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f0a10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0a13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f0a16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f0a19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f0a1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f0a1f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0a22: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0a25: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0a28: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f0a2b: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6f0a30u); f_006ebd58();
    /* 006f0a30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f0a37: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0a3a: mov dword ptr [eax], 0xb3e510 */ W32((u32)(r_eax), 0xb3e510u);
    /* 006f0a40: lea esi, [eax + 0xe4] */ r_esi = (u32)(r_eax+0xe4u);
    /* 006f0a46: mov edi, 0xb */ r_edi = 0xbu;
    /* 006f0a4b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006f0a4d:; BB(0x006f0a4d);
    /* 006f0a4d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006f0a52: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 006f0a55: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f0a57: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 006f0a5b: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006f0a5e: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f0a61: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006f0a64: jne 0x6f0a4d */ if (!fZ) goto L_006f0a4d;
L_006f0a66:; BB(0x006f0a66);
    /* 006f0a66: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f0a68: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 006f0a6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0a71: mov eax, dword ptr [0x9cfa24] */ r_eax = R32((u32)(0x9cfa24u));
    /* 006f0a76: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006f0a79: mov dword ptr [ecx + 0x13c], edx */ W32((u32)(r_ecx+0x13cu), r_edx);
    /* 006f0a7f: call 0x6f0ae4 */ r_esp -= 4; W32(r_esp, 0x6f0a84u); f_006f0ae4();
    /* 006f0a84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0a87: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 006f0a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0a8f: je 0x6f0aa6 */ if (fZ) goto L_006f0aa6;
L_006f0a91:; BB(0x006f0a91);
    /* 006f0a91: fld dword ptr [0x96df98] */ FPUSH(R_F32((u32)(0x96df98u)));
    /* 006f0a97: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 006f0a9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0a9d: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006f0aa3: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006f0aa6:; BB(0x006f0aa6);
    /* 006f0aa6: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006f0aa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0aab: je 0x6f0ab8 */ if (fZ) goto L_006f0ab8;
L_006f0aad:; BB(0x006f0aad);
    /* 006f0aad: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006f0ab1: mov word ptr [ecx + 0xa8], ax */ W16((u32)(r_ecx+0xa8u), (u16)r_eax);
L_006f0ab8:; BB(0x006f0ab8);
    /* 006f0ab8: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6f0abdu); f_006ec06c();
    /* 006f0abd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0ac0: call 0x6f0b74 */ r_esp -= 4; W32(r_esp, 0x6f0ac5u); f_006f0b74();
    /* 006f0ac5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0ac8: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f0acb: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f0ace: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f0ad1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0ad4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0adb: mov esp, ebp */ r_esp = r_ebp;
    /* 006f0add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f0ade: ret 0xc */ FN_RET(0x006f09f8); r_esp += 16; return;
}

void f_006f0ae4(void) /* sub_6F0AE4 */
{
    FN_ENTER(0x006f0ae4);
    /* 006f0ae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0ae5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0ae8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f0aea: movsx eax, word ptr [ebx + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006f0af1: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0af7: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0af9: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6f0afeu); f_006ded14();
    /* 006f0afe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006f0b00: mov dword ptr [ebx + 0x74], edx */ W32((u32)(r_ebx+0x74u), r_edx);
    /* 006f0b03: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006f0b06: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 006f0b09: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006f0b0c: mov dword ptr [ebx + 0x7c], edx */ W32((u32)(r_ebx+0x7cu), r_edx);
    /* 006f0b0f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006f0b12: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
    /* 006f0b18: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006f0b1b: mov dword ptr [ebx + 0x84], edx */ W32((u32)(r_ebx+0x84u), r_edx);
    /* 006f0b21: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006f0b24: mov dword ptr [ebx + 0x88], edx */ W32((u32)(r_ebx+0x88u), r_edx);
    /* 006f0b2a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006f0b2d: mov dword ptr [ebx + 0x8c], edx */ W32((u32)(r_ebx+0x8cu), r_edx);
    /* 006f0b33: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006f0b36: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 006f0b3c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006f0b3f: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 006f0b45: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006f0b48: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 006f0b4e: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006f0b51: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006f0b54: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 006f0b5a: movsx eax, word ptr [ebx + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006f0b61: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006f0b64: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006f0b68: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006f0b6c: fstp dword ptr [ebx + 0x74] */ W_F32((u32)(r_ebx+0x74u), ST(0)); FPOP();
    /* 006f0b6f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0b72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0b73: ret  */ FN_RET(0x006f0ae4); r_esp += 4; return;
}

void f_006f0b74(void) /* sub_6F0B74 */
{
    FN_ENTER(0x006f0b74);
    /* 006f0b74: movsx eax, word ptr [ecx + 0xa6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xa6u));
    /* 006f0b7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0b7d: jl 0x6f0beb */ if ((fS!=fO)) goto L_006f0beb;
L_006f0b7f:; BB(0x006f0b7f);
    /* 006f0b7f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0b82: jle 0x6f0bc2 */ if ((fZ||fS!=fO)) goto L_006f0bc2;
L_006f0b84:; BB(0x006f0b84);
    /* 006f0b84: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006f0b87: jl 0x6f0beb */ if ((fS!=fO)) goto L_006f0beb;
L_006f0b89:; BB(0x006f0b89);
    /* 006f0b89: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0b8c: jle 0x6f0bec */ if ((fZ||fS!=fO)) goto L_006f0bec;
L_006f0b8e:; BB(0x006f0b8e);
    /* 006f0b8e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006f0b91: jl 0x6f0beb */ if ((fS!=fO)) goto L_006f0beb;
L_006f0b93:; BB(0x006f0b93);
    /* 006f0b93: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006f0b96: jg 0x6f0beb */ if ((!fZ&&fS==fO)) goto L_006f0beb;
L_006f0b98:; BB(0x006f0b98);
    /* 006f0b98: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f0b9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0b9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0ba0: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0ba5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f0baau); f_00814298();
    /* 006f0baa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0bad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0baf: jl 0x6f0beb */ if ((fS!=fO)) goto L_006f0beb;
L_006f0bb1:; BB(0x006f0bb1);
    /* 006f0bb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bb3: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bb9: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f0bbeu); f_00814664();
    /* 006f0bbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0bc1: ret  */ FN_RET(0x006f0b74); r_esp += 4; return;
L_006f0bc2:; BB(0x006f0bc2);
    /* 006f0bc2: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f0bc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0bc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bca: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bcf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f0bd4u); f_00814298();
    /* 006f0bd4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0bd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0bd9: jl 0x6f0beb */ if ((fS!=fO)) goto L_006f0beb;
L_006f0bdb:; BB(0x006f0bdb);
    /* 006f0bdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bdd: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0be2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0be3: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f0be8u); f_00814664();
    /* 006f0be8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006f0beb:; BB(0x006f0beb);
    /* 006f0beb: ret  */ FN_RET(0x006f0b74); r_esp += 4; return;
L_006f0bec:; BB(0x006f0bec);
    /* 006f0bec: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f0bef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f0bf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bf4: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0bf9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f0bfeu); f_00814298();
    /* 006f0bfe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0c01: ret  */ FN_RET(0x006f0b74); r_esp += 4; return;
}

void f_006f0c04(void) /* sub_6F0C04 */
{
    FN_ENTER(0x006f0c04);
    /* 006f0c04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c05: mov ebp, esp */ r_ebp = r_esp;
    /* 006f0c07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c09: push 0x8efad8 */ { u32 v = 0x8efad8u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f0c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f0c1c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0c1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f0c22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f0c25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f0c28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f0c2b: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c30: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006f0c37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f0c3cu); f_005caba4();
    /* 006f0c3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f0c3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006f0c40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0c42: je 0x6f0c6d */ if (fZ) goto L_006f0c6d;
L_006f0c44:; BB(0x006f0c44);
    /* 006f0c44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006f0c4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f0c52: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0c55: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0c58: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0c5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0c5e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0c61: call 0x6f0c7c */ r_esp -= 4; W32(r_esp, 0x6f0c66u); f_006f0c7c();
    /* 006f0c66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006f0c6d:; BB(0x006f0c6d);
    /* 006f0c6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0c70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0c77: mov esp, ebp */ r_esp = r_ebp;
    /* 006f0c79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f0c7a: ret  */ FN_RET(0x006f0c04); r_esp += 4; return;
}

void f_006f0c7c(void) /* sub_6F0C7C */
{
    FN_ENTER(0x006f0c7c);
    /* 006f0c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c7d: mov ebp, esp */ r_ebp = r_esp;
    /* 006f0c7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c81: push 0x8efaf4 */ { u32 v = 0x8efaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f0c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0c8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f0c94: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0c97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f0c9a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006f0c9d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006f0ca0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006f0ca3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006f0ca6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0ca9: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0cac: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0caf: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006f0cb2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f0cb5: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6f0cbau); f_006ebd58();
    /* 006f0cba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f0cc1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f0cc4: mov dword ptr [edi], 0xb3e510 */ W32((u32)(r_edi), 0xb3e510u);
    /* 006f0cca: lea ebx, [edi + 0xe4] */ r_ebx = (u32)(r_edi+0xe4u);
    /* 006f0cd0: mov esi, 0xb */ r_esi = 0xbu;
    /* 006f0cd5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006f0cd7:; BB(0x006f0cd7);
    /* 006f0cd7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006f0cdc: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006f0cdf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f0ce1: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006f0ce5: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006f0ce8: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006f0ceb: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006f0cee: jne 0x6f0cd7 */ if (!fZ) goto L_006f0cd7;
L_006f0cf0:; BB(0x006f0cf0);
    /* 006f0cf0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f0cf3: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 006f0cfd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f0d00: mov ecx, dword ptr [0x9cfa24] */ r_ecx = R32((u32)(0x9cfa24u));
    /* 006f0d06: mov dword ptr [edx + 0x13c], 1 */ W32((u32)(r_edx+0x13cu), 0x1u);
    /* 006f0d10: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006f0d13: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006f0d15: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006f0d18: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 006f0d1b: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006f0d1e: add edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f0d24: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006f0d26: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006f0d29: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 006f0d2c: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006f0d2f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006f0d32: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006f0d35: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006f0d38: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006f0d3b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006f0d3e: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006f0d41: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006f0d44: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006f0d47: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006f0d4a: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006f0d4d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006f0d50: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006f0d53: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006f0d56: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006f0d59: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006f0d5c: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006f0d5f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006f0d62: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006f0d65: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006f0d68: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006f0d6b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006f0d6e: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006f0d71: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006f0d74: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006f0d77: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006f0d7a: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006f0d7d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006f0d80: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006f0d83: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006f0d86: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006f0d89: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006f0d8c: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006f0d8f: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006f0d92: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006f0d95: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006f0d98: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006f0d9b: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006f0d9e: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006f0da1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f0da4: call 0x6f0ae4 */ r_esp -= 4; W32(r_esp, 0x6f0da9u); f_006f0ae4();
    /* 006f0da9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f0dac: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 006f0db2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0db4: je 0x6f0dcb */ if (fZ) goto L_006f0dcb;
L_006f0db6:; BB(0x006f0db6);
    /* 006f0db6: fld dword ptr [0x96df90] */ FPUSH(R_F32((u32)(0x96df90u)));
    /* 006f0dbc: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 006f0dbf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f0dc2: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006f0dc8: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006f0dcb:; BB(0x006f0dcb);
    /* 006f0dcb: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006f0dce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0dd0: je 0x6f0ddd */ if (fZ) goto L_006f0ddd;
L_006f0dd2:; BB(0x006f0dd2);
    /* 006f0dd2: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006f0dd6: mov word ptr [ecx + 0xa8], ax */ W16((u32)(r_ecx+0xa8u), (u16)r_eax);
L_006f0ddd:; BB(0x006f0ddd);
    /* 006f0ddd: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 006f0de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0de5: je 0x6f0df7 */ if (fZ) goto L_006f0df7;
L_006f0de7:; BB(0x006f0de7);
    /* 006f0de7: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6f0decu); f_006ec06c();
    /* 006f0dec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f0def: call 0x6f0b74 */ r_esp -= 4; W32(r_esp, 0x6f0df4u); f_006f0b74();
    /* 006f0df4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_006f0df7:; BB(0x006f0df7);
    /* 006f0df7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f0dfa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f0dfd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f0e00: mov eax, ecx */ r_eax = r_ecx;
    /* 006f0e02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0e05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0e0c: mov esp, ebp */ r_esp = r_ebp;
    /* 006f0e0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f0e0f: ret 0x10 */ FN_RET(0x006f0c7c); r_esp += 20; return;
}

void f_006f0e14(void) /* sub_6F0E14 */
{
    FN_ENTER(0x006f0e14);
    /* 006f0e14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0e15: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0e18: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f0e1a: movzx eax, word ptr [ebx + 0xa8] */ r_eax = (u32)R16((u32)(r_ebx+0xa8u));
    /* 006f0e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0e22: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6f0e27u); f_007b4d18();
    /* 006f0e27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f0e28: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006f0e2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0e2d: je 0x6f0edd */ if (fZ) goto L_006f0edd;
L_006f0e33:; BB(0x006f0e33);
    /* 006f0e33: mov edx, dword ptr [ebx + 0x13c] */ r_edx = R32((u32)(r_ebx+0x13cu));
    /* 006f0e39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0e3b: je 0x6f0eae */ if (fZ) goto L_006f0eae;
L_006f0e3d:; BB(0x006f0e3d);
    /* 006f0e3d: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006f0e44: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0e47: jg 0x6f0e53 */ if ((!fZ&&fS==fO)) goto L_006f0e53;
L_006f0e49:; BB(0x006f0e49);
    /* 006f0e49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0e4a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f0e4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0e4e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6f0e51u); call_ind(t); }
    /* 006f0e51: jmp 0x6f0ecb */ goto L_006f0ecb;
L_006f0e53:; BB(0x006f0e53);
    /* 006f0e53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0e54: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f0e56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0e58: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6f0e5bu); call_ind(t); }
    /* 006f0e5b: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 006f0e61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f0e63: je 0x6f0ecb */ if (fZ) goto L_006f0ecb;
L_006f0e65:; BB(0x006f0e65);
    /* 006f0e65: mov eax, 0 */ r_eax = 0x0u;
    /* 006f0e6a: jle 0x6f0ecb */ if ((fZ||fS!=fO)) goto L_006f0ecb;
L_006f0e6c:; BB(0x006f0e6c);
    /* 006f0e6c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006f0e70: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006f0e73: mov edi, eax */ r_edi = r_eax;
L_006f0e75:; BB(0x006f0e75);
    /* 006f0e75: movzx edx, word ptr [ebx + edi*8 + 0xe4] */ r_edx = (u32)R16((u32)(r_ebx+r_edi*8+0xe4u));
    /* 006f0e7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0e7e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6f0e83u); f_007b4d18();
    /* 006f0e83: mov esi, eax */ r_esi = r_eax;
    /* 006f0e85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f0e86: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6f0e8bu); f_006ea700();
    /* 006f0e8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0e8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0e90: je 0x6f0e9a */ if (fZ) goto L_006f0e9a;
L_006f0e92:; BB(0x006f0e92);
    /* 006f0e92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f0e93: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f0e95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0e97: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6f0e9au); call_ind(t); }
L_006f0e9a:; BB(0x006f0e9a);
    /* 006f0e9a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f0e9d: cmp edi, dword ptr [ebx + 0xe0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0ea3: jl 0x6f0e75 */ if ((fS!=fO)) goto L_006f0e75;
L_006f0ea5:; BB(0x006f0ea5);
    /* 006f0ea5: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006f0ea9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006f0eac: jmp 0x6f0ecb */ goto L_006f0ecb;
L_006f0eae:; BB(0x006f0eae);
    /* 006f0eae: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006f0eb5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f0eb8: jg 0x6f0ec4 */ if ((!fZ&&fS==fO)) goto L_006f0ec4;
L_006f0eba:; BB(0x006f0eba);
    /* 006f0eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0ebb: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f0ebd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0ebf: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6f0ec2u); call_ind(t); }
    /* 006f0ec2: jmp 0x6f0ecb */ goto L_006f0ecb;
L_006f0ec4:; BB(0x006f0ec4);
    /* 006f0ec4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0ec6: call 0x6ebfdc */ r_esp -= 4; W32(r_esp, 0x6f0ecbu); f_006ebfdc();
L_006f0ecb:; BB(0x006f0ecb);
    /* 006f0ecb: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006f0ecf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f0ed4: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006f0ed8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0edb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0edc: ret  */ FN_RET(0x006f0e14); r_esp += 4; return;
L_006f0edd:; BB(0x006f0edd);
    /* 006f0edd: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006f0ee1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f0ee6: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006f0eea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0eed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0eee: ret  */ FN_RET(0x006f0e14); r_esp += 4; return;
}

void f_006f0ef0(void) /* sub_6F0EF0 */
{
    FN_ENTER(0x006f0ef0);
    /* 006f0ef0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f0ef1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0ef2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0ef5: mov edi, ecx */ r_edi = r_ecx;
    /* 006f0ef7: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006f0efb: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 006f0f02: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f0f05: jne 0x6f0f0f */ if (!fZ) goto L_006f0f0f;
L_006f0f07:; BB(0x006f0f07);
    /* 006f0f07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0f0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0f0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f0f0c: ret 4 */ FN_RET(0x006f0ef0); r_esp += 8; return;
L_006f0f0f:; BB(0x006f0f0f);
    /* 006f0f0f: mov edx, dword ptr [edi + 0x74] */ r_edx = R32((u32)(r_edi+0x74u));
    /* 006f0f12: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006f0f16: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 006f0f19: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f0f1d: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006f0f21: mov eax, 9 */ r_eax = 0x9u;
    /* 006f0f26: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006f0f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f2c: call 0x71829c */ r_esp -= 4; W32(r_esp, 0x6f0f31u); f_0071829c();
    /* 006f0f31: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f0f34: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f36: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f38: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006f0f3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0f3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f3e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0f42: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0f46: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f0f49: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6f0f4cu); call_ind(t); }
    /* 006f0f4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f0f4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f0f51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0f52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f0f53: ret 4 */ FN_RET(0x006f0ef0); r_esp += 8; return;
}

void f_006f0f58(void) /* sub_6F0F58 */
{
    FN_ENTER(0x006f0f58);
    /* 006f0f58: mov dword ptr [0xa968b0], 0x3f800000 */ W32((u32)(0xa968b0u), 0x3f800000u);
    /* 006f0f62: mov dword ptr [0xa968b4], 0x41000000 */ W32((u32)(0xa968b4u), 0x41000000u);
    /* 006f0f6c: mov dword ptr [0xa968b8], 0x3fc00000 */ W32((u32)(0xa968b8u), 0x3fc00000u);
    /* 006f0f76: ret  */ FN_RET(0x006f0f58); r_esp += 4; return;
}

void f_006f0f78(void) /* sub_6F0F78 */
{
    FN_ENTER(0x006f0f78);
    /* 006f0f78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f79: mov ebp, esp */ r_ebp = r_esp;
    /* 006f0f7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f7d: push 0x8efb10 */ { u32 v = 0x8efb10u; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f0f88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0f89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f0f90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f0f93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f0f96: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006f0f99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006f0f9c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006f0f9f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006f0fa2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006f0fa5: mov eax, ecx */ r_eax = r_ecx;
    /* 006f0fa7: mov dword ptr [eax], 0xb3e608 */ W32((u32)(r_eax), 0xb3e608u);
    /* 006f0fad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f0fb4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6f0fb9u); f_008171e8();
    /* 006f0fb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006f0fbc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0fbe: jne 0x6f0fd0 */ if (!fZ) goto L_006f0fd0;
L_006f0fc0:; BB(0x006f0fc0);
    /* 006f0fc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f0fc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f0fca: mov esp, ebp */ r_esp = r_ebp;
    /* 006f0fcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f0fcd: ret 4 */ FN_RET(0x006f0f78); r_esp += 8; return;
L_006f0fd0:; BB(0x006f0fd0);
    /* 006f0fd0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f0fd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f0fd4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f0fd9u); f_005c2f74();
    /* 006f0fd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f0fda: jmp 0x6f0fc0 */ goto L_006f0fc0;
}

void f_006f0fdc(void) /* sub_6F0FDC */
{
    FN_ENTER(0x006f0fdc);
    /* 006f0fdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0fdd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f0fdf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f0fe1: call 0x6f1000 */ r_esp -= 4; W32(r_esp, 0x6f0fe6u); f_006f1000();
    /* 006f0fe6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f0fea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f0fec: jne 0x6f0ff2 */ if (!fZ) goto L_006f0ff2;
L_006f0fee:; BB(0x006f0fee);
    /* 006f0fee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0fef: ret 4 */ FN_RET(0x006f0fdc); r_esp += 8; return;
L_006f0ff2:; BB(0x006f0ff2);
    /* 006f0ff2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f0ff3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f0ff8u); f_005c2f74();
    /* 006f0ff8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f0ff9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f0ffa: ret 4 */ FN_RET(0x006f0fdc); r_esp += 8; return;
}

