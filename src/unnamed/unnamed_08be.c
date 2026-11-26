#include "protos.h"

void f_008bed3d(void) /* sub_8BED3D */
{
    FN_ENTER(0x008bed3d);
    /* 008bed3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bed3e: mov ebp, esp */ r_ebp = r_esp;
    /* 008bed40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bed43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bed44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bed45: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 008bed48: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008bed4a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008bed4d: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008bed50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bed51: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008bed54: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 008bed57: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 008bed5a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 008bed5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008bed60: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008bed63: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bed65: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 008bed68: jae 0x8bed6f */ if (!fC) goto L_008bed6f;
L_008bed6a:; BB(0x008bed6a);
    /* 008bed6a: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bed6c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bed6d: jmp 0x8bed74 */ goto L_008bed74;
L_008bed6f:; BB(0x008bed6f);
    /* 008bed6f: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008bed72: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008bed74:; BB(0x008bed74);
    /* 008bed74: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008bed77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bed7a: mov eax, dword ptr [eax*4 + 0xa37ae0] */ r_eax = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008bed81: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008bed84: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bed87: mov eax, dword ptr [eax*4 + 0xa37ae0] */ r_eax = R32((u32)(r_eax*4+0xa37ae0u));
    /* 008bed8e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008bed91: jmp 0x8beda8 */ goto L_008beda8;
L_008bed93:; BB(0x008bed93);
    /* 008bed93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bed96: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008bed99: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bed9c: mov ecx, edx */ r_ecx = r_edx;
    /* 008bed9e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008beda0: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008beda2: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008beda5: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008beda8:; BB(0x008beda8);
    /* 008beda8: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bedab: jb 0x8bed93 */ if (fC) goto L_008bed93;
L_008bedad:; BB(0x008bedad);
    /* 008bedad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008bedb0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008bedb3: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bedb5: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 008bedb8: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008bedbb: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008bedbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008bedc0: jmp 0x8bede2 */ goto L_008bede2;
L_008bedc2:; BB(0x008bedc2);
    /* 008bedc2: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bedc5: jne 0x8bef8b */ if (!fZ) goto L_008bef8b;
L_008bedcb:; BB(0x008bedcb);
    /* 008bedcb: mov ecx, dword ptr [ecx*4 + 0xa37ae0] */ r_ecx = R32((u32)(r_ecx*4+0xa37ae0u));
    /* 008bedd2: and ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bedd4: add ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bedd7: lea eax, [eax + ecx*8] */ r_eax = (u32)(r_eax+r_ecx*8);
    /* 008bedda: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008beddd: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008bede0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
L_008bede2:; BB(0x008bede2);
    /* 008bede2: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bede6: je 0x8bef2b */ if (fZ) goto L_008bef2b;
L_008bedec:; BB(0x008bedec);
    /* 008bedec: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008bedee: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bedf2: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bedf4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008bedf7: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bedfa: je 0x8bedc2 */ if (fZ) goto L_008bedc2;
L_008bedfc:; BB(0x008bedfc);
    /* 008bedfc: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bedff: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008bee02: mov ecx, dword ptr [ecx*4 + 0xa37ae0] */ r_ecx = R32((u32)(r_ecx*4+0xa37ae0u));
    /* 008bee09: and ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bee0b: add ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bee0e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008bee11: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008bee14: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008bee16: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bee18: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bee1b: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008bee1e: jae 0x8bee3d */ if (!fC) goto L_008bee3d;
L_008bee20:; BB(0x008bee20);
    /* 008bee20: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bee23: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 008bee26: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bee29: mov ecx, edx */ r_ecx = r_edx;
    /* 008bee2b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bee2d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bee30: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008bee32: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bee35: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bee38: jb 0x8bee20 */ if (fC) goto L_008bee20;
L_008bee3a:; BB(0x008bee3a);
    /* 008bee3a: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_008bee3d:; BB(0x008bee3d);
    /* 008bee3d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008bee40: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008bee43: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008bee45: lea eax, [ecx + eax*8] */ r_eax = (u32)(r_ecx+r_eax*8);
    /* 008bee48: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bee4c: shr dword ptr [ebp + 8], cl */ { u32 ad = (u32)(r_ebp+0x8u); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008bee4f: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bee53: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bee55: jmp 0x8bee7c */ goto L_008bee7c;
L_008bee57:; BB(0x008bee57);
    /* 008bee57: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bee5a: jne 0x8bef6b */ if (!fZ) goto L_008bef6b;
L_008bee60:; BB(0x008bee60);
    /* 008bee60: mov ecx, dword ptr [ebx*4 + 0xa37ae0] */ r_ecx = R32((u32)(r_ebx*4+0xa37ae0u));
    /* 008bee67: and ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bee6a: add ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008bee6d: lea eax, [eax + ecx*8] */ r_eax = (u32)(r_eax+r_ecx*8);
    /* 008bee70: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bee74: shr dword ptr [ebp + 8], cl */ { u32 ad = (u32)(r_ebp+0x8u); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008bee77: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008bee7a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008bee7c:; BB(0x008bee7c);
    /* 008bee7c: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 008bee7f: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bee82: je 0x8bee57 */ if (fZ) goto L_008bee57;
L_008bee84:; BB(0x008bee84);
    /* 008bee84: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bee87: jmp 0x8bee9f */ goto L_008bee9f;
L_008bee89:; BB(0x008bee89);
    /* 008bee89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bee8c: movzx edi, byte ptr [ecx] */ r_edi = (u32)R8((u32)(r_ecx));
    /* 008bee8f: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bee92: mov ecx, edx */ r_ecx = r_edx;
    /* 008bee94: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008bee96: or dword ptr [ebp + 8], edi */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008bee99: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bee9c: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008bee9f:; BB(0x008bee9f);
    /* 008bee9f: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008beea1: jb 0x8bee89 */ if (fC) goto L_008bee89;
L_008beea3:; BB(0x008beea3);
    /* 008beea3: mov ecx, dword ptr [ebx*4 + 0xa37ae0] */ r_ecx = R32((u32)(r_ebx*4+0xa37ae0u));
    /* 008beeaa: and ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008beead: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008beeb0: add ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008beeb3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008beeb6: sub dword ptr [ebp - 0x10], eax */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008beeb9: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 008beebc: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008beebf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008beec1: shr dword ptr [ebp + 8], cl */ { u32 ad = (u32)(r_ebp+0x8u); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
    /* 008beec4: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008beec7: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008beec9: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008beecb: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008beece: jb 0x8beeea */ if (fC) goto L_008beeea;
L_008beed0:; BB(0x008beed0);
    /* 008beed0: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008beed3: mov eax, ecx */ r_eax = r_ecx;
    /* 008beed5: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008beed8: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008beeda: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008beedc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008beedd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008beede: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008beee0: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008beee2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008beee3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008beee4: sub dword ptr [ebp - 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008beee8: jmp 0x8bef18 */ goto L_008bef18;
L_008beeea:; BB(0x008beeea);
    /* 008beeea: sub eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008beeed: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008beef0: mov ecx, eax */ r_ecx = r_eax;
    /* 008beef2: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 008beef5: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008beef7: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008beefa: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008beefd: jbe 0x8bef15 */ if ((fC||fZ)) goto L_008bef15;
L_008beeff:; BB(0x008beeff);
    /* 008beeff: sub dword ptr [ebp - 0xc], ecx */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008bef02:; BB(0x008bef02);
    /* 008bef02: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 008bef05: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008bef07: inc dword ptr [ebp + 0x1c] */ { u32 ad = (u32)(r_ebp+0x1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bef0a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bef0b: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008bef0e: mov byte ptr [ebx], cl */ W8((u32)(r_ebx), (u8)r_ecx);
    /* 008bef10: jne 0x8bef02 */ if (!fZ) goto L_008bef02;
L_008bef12:; BB(0x008bef12);
    /* 008bef12: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
L_008bef15:; BB(0x008bef15);
    /* 008bef15: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
L_008bef18:; BB(0x008bef18);
    /* 008bef18: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008bef1a: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008bef1c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bef1d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bef1e: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008bef21: jne 0x8bef18 */ if (!fZ) goto L_008bef18;
L_008bef23:; BB(0x008bef23);
    /* 008bef23: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008bef26: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 008bef29: jmp 0x8bef41 */ goto L_008bef41;
L_008bef2b:; BB(0x008bef2b);
    /* 008bef2b: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008bef2d: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 008bef31: mov al, byte ptr [eax + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 008bef34: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bef36: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008bef39: inc dword ptr [ebp + 0x1c] */ { u32 ad = (u32)(r_ebp+0x1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bef3c: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bef3f: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
L_008bef41:; BB(0x008bef41);
    /* 008bef41: cmp dword ptr [ebp - 0x10], 0x102 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bef48: jb 0x8bef54 */ if (fC) goto L_008bef54;
L_008bef4a:; BB(0x008bef4a);
    /* 008bef4a: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bef4e: jae 0x8beda8 */ if (!fC) goto L_008beda8;
L_008bef54:; BB(0x008bef54);
    /* 008bef54: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008bef57: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bef5a: mov eax, edx */ r_eax = r_edx;
    /* 008bef5c: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008bef5f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bef61: jae 0x8bef65 */ if (!fC) goto L_008bef65;
L_008bef63:; BB(0x008bef63);
    /* 008bef63: mov ecx, eax */ r_ecx = r_eax;
L_008bef65:; BB(0x008bef65);
    /* 008bef65: and dword ptr [ebp + 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bef69: jmp 0x8befc1 */ goto L_008befc1;
L_008bef6b:; BB(0x008bef6b);
    /* 008bef6b: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008bef6e: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bef71: mov eax, edx */ r_eax = r_edx;
    /* 008bef73: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008bef76: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bef78: mov dword ptr [esi + 0x18], 0x99edd0 */ W32((u32)(r_esi+0x18u), 0x99edd0u);
    /* 008bef7f: jae 0x8bef83 */ if (!fC) goto L_008bef83;
L_008bef81:; BB(0x008bef81);
    /* 008bef81: mov ecx, eax */ r_ecx = r_eax;
L_008bef83:; BB(0x008bef83);
    /* 008bef83: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008bef86: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008bef89: jmp 0x8befba */ goto L_008befba;
L_008bef8b:; BB(0x008bef8b);
    /* 008bef8b: mov eax, edx */ r_eax = r_edx;
    /* 008bef8d: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008bef90: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008bef93: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008bef96: je 0x8befaa */ if (fZ) goto L_008befaa;
L_008bef98:; BB(0x008bef98);
    /* 008bef98: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bef9b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008bef9d: jae 0x8befa1 */ if (!fC) goto L_008befa1;
L_008bef9f:; BB(0x008bef9f);
    /* 008bef9f: mov ecx, eax */ r_ecx = r_eax;
L_008befa1:; BB(0x008befa1);
    /* 008befa1: mov dword ptr [ebp + 0xc], 1 */ W32((u32)(r_ebp+0xcu), 0x1u);
    /* 008befa8: jmp 0x8befc1 */ goto L_008befc1;
L_008befaa:; BB(0x008befaa);
    /* 008befaa: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008befad: mov dword ptr [esi + 0x18], 0x99ede8 */ W32((u32)(r_esi+0x18u), 0x99ede8u);
    /* 008befb4: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008befb6: jae 0x8befba */ if (!fC) goto L_008befba;
L_008befb8:; BB(0x008befb8);
    /* 008befb8: mov ecx, eax */ r_ecx = r_eax;
L_008befba:; BB(0x008befba);
    /* 008befba: mov dword ptr [ebp + 0xc], 0xfffffffd */ W32((u32)(r_ebp+0xcu), 0xfffffffdu);
L_008befc1:; BB(0x008befc1);
    /* 008befc1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008befc4: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 008befc7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008befc9: shl ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008befcc: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008befce: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 008befd1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008befd4: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008befd6: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008befd8: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 008befdb: mov ecx, eax */ r_ecx = r_eax;
    /* 008befdd: sub ecx, dword ptr [esi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008befdf: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008befe1: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008befe4: add dword ptr [esi + 8], ecx */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008befe7: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 008befea: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008befed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008befee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008befef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008beff0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008beff1: ret  */ FN_RET(0x008bed3d); r_esp += 4; return;
}

