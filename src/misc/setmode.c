#include "protos.h"

void f_0086a9eb(void) /* __setmode_lk */
{
    FN_ENTER(0x0086a9eb);
    /* 0086a9eb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086a9ef: mov ecx, eax */ r_ecx = r_eax;
    /* 0086a9f1: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0086a9f4: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086a9f7: lea edx, [ecx*4 + 0xaf0a80] */ r_edx = (u32)(r_ecx*4+0xaf0a80u);
    /* 0086a9fe: lea ecx, [eax + eax*8] */ r_ecx = (u32)(r_eax+r_eax*8);
    /* 0086aa01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0086aa03: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0086aa06: movzx eax, byte ptr [eax + ecx + 4] */ r_eax = (u32)R8((u32)(r_eax+r_ecx+0x4u));
    /* 0086aa0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa0c: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 0086aa11: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086aa16: cmp dword ptr [esp + 0xc], esi */ {  u32 a = R32((u32)(r_esp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aa1a: jne 0x86aa27 */ if (!fZ) goto L_0086aa27;
L_0086aa1c:; BB(0x0086aa1c);
    /* 0086aa1c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0086aa1e: lea ecx, [edx + ecx + 4] */ r_ecx = (u32)(r_edx+r_ecx+0x4u);
    /* 0086aa22: and byte ptr [ecx], 0x7f */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = 0x7fu; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0086aa25: jmp 0x86aa3a */ goto L_0086aa3a;
L_0086aa27:; BB(0x0086aa27);
    /* 0086aa27: cmp dword ptr [esp + 0xc], 0x4000 */ {  u32 a = R32((u32)(r_esp+0xcu)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aa2f: jne 0x86aa47 */ if (!fZ) goto L_0086aa47;
L_0086aa31:; BB(0x0086aa31);
    /* 0086aa31: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0086aa33: lea ecx, [edx + ecx + 4] */ r_ecx = (u32)(r_edx+r_ecx+0x4u);
    /* 0086aa37: or byte ptr [ecx], 0x80 */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0086aa3a:; BB(0x0086aa3a);
    /* 0086aa3a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0086aa3c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0086aa3e: and eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086aa43: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086aa45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086aa46: ret  */ FN_RET(0x0086a9eb); r_esp += 4; return;
L_0086aa47:; BB(0x0086aa47);
    /* 0086aa47: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x86aa4cu); f_00859dd6();
    /* 0086aa4c: mov dword ptr [eax], 0x16 */ W32((u32)(r_eax), 0x16u);
    /* 0086aa52: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086aa55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086aa56: ret  */ FN_RET(0x0086a9eb); r_esp += 4; return;
}

