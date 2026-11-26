#include "protos.h"

void f_008639d5(void) /* __set_osfhnd */
{
    FN_ENTER(0x008639d5);
    /* 008639d5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008639d9: cmp ecx, dword ptr [0xaf0a60] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008639df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008639e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008639e1: jae 0x863a38 */ if (!fC) goto L_00863a38;
L_008639e3:; BB(0x008639e3);
    /* 008639e3: mov eax, ecx */ r_eax = r_ecx;
    /* 008639e5: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008639e8: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 008639ef: mov eax, ecx */ r_eax = r_ecx;
    /* 008639f1: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008639f4: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 008639f7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008639f9: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008639fc: cmp dword ptr [esi + eax], -1 */ {  u32 a = R32((u32)(r_esi+r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863a00: jne 0x863a38 */ if (!fZ) goto L_00863a38;
L_00863a02:; BB(0x00863a02);
    /* 00863a02: cmp dword ptr [0xa239dc], 1 */ {  u32 a = R32((u32)(0xa239dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863a09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863a0a: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00863a0e: jne 0x863a2e */ if (!fZ) goto L_00863a2e;
L_00863a10:; BB(0x00863a10);
    /* 00863a10: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00863a13: je 0x863a25 */ if (fZ) goto L_00863a25;
L_00863a15:; BB(0x00863a15);
    /* 00863a15: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00863a16: je 0x863a20 */ if (fZ) goto L_00863a20;
L_00863a18:; BB(0x00863a18);
    /* 00863a18: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00863a19: jne 0x863a2e */ if (!fZ) goto L_00863a2e;
L_00863a1b:; BB(0x00863a1b);
    /* 00863a1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863a1c: push -0xc */ { u32 v = 0xfffffff4u; r_esp -= 4; W32(r_esp, v); }
    /* 00863a1e: jmp 0x863a28 */ goto L_00863a28;
L_00863a20:; BB(0x00863a20);
    /* 00863a20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863a21: push -0xb */ { u32 v = 0xfffffff5u; r_esp -= 4; W32(r_esp, v); }
    /* 00863a23: jmp 0x863a28 */ goto L_00863a28;
L_00863a25:; BB(0x00863a25);
    /* 00863a25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863a26: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
L_00863a28:; BB(0x00863a28);
    /* 00863a28: call dword ptr [0x8f825c] */ { u32 t = R32((u32)(0x8f825cu)); r_esp -= 4; W32(r_esp, 0x863a2eu); call_ind(t); }
L_00863a2e:; BB(0x00863a2e);
    /* 00863a2e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00863a30: mov dword ptr [esi + eax], ebx */ W32((u32)(r_esi+r_eax), r_ebx);
    /* 00863a33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863a35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00863a36: jmp 0x863a4e */ goto L_00863a4e;
L_00863a38:; BB(0x00863a38);
    /* 00863a38: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x863a3du); f_00859dd6();
    /* 00863a3d: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00863a43: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x863a48u); f_00859ddf();
    /* 00863a48: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863a4b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00863a4e:; BB(0x00863a4e);
    /* 00863a4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00863a4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00863a50: ret  */ FN_RET(0x008639d5); r_esp += 4; return;
}

