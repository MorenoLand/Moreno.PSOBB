#include "protos.h"

void f_008a92d8(void) /* ?out_of_memory@D3DX@@YAXPAUjpeg_common_struct@1@H@Z */
{
    FN_ENTER(0x008a92d8);
    /* 008a92d8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a92da: mov dword ptr [ecx + 0x14], 0x35 */ W32((u32)(r_ecx+0x14u), 0x35u);
    /* 008a92e1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a92e3: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 008a92e6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a92e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a92e9: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a92ebu); call_ind(t); }
    /* 008a92eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a92ec: ret  */ FN_RET(0x008a92d8); r_esp += 4; return;
}

void f_008a9d76(void) /* ?use_merged_upsample@D3DX@@YAEPAUjpeg_decompress_struct@1@@Z */
{
    FN_ENTER(0x008a9d76);
    /* 008a9d76: cmp byte ptr [edx + 0x48], 0 */ {  u32 a = R8((u32)(r_edx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9d7a: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9d7c:; BB(0x008a9d7c);
    /* 008a9d7c: cmp byte ptr [edx + 0x108], 0 */ {  u32 a = R8((u32)(r_edx+0x108u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9d83: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9d85:; BB(0x008a9d85);
    /* 008a9d85: cmp dword ptr [edx + 0x24], 3 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9d89: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9d8b:; BB(0x008a9d8b);
    /* 008a9d8b: cmp dword ptr [edx + 0x20], 3 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9d8f: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9d91:; BB(0x008a9d91);
    /* 008a9d91: cmp dword ptr [edx + 0x28], 2 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9d95: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9d97:; BB(0x008a9d97);
    /* 008a9d97: cmp dword ptr [edx + 0x64], 3 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9d9b: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9d9d:; BB(0x008a9d9d);
    /* 008a9d9d: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 008a9da3: cmp dword ptr [ecx + 8], 2 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9da7: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9da9:; BB(0x008a9da9);
    /* 008a9da9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a9dab: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a9dac: cmp dword ptr [ecx + 0x5c], eax */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9daf: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9db1:; BB(0x008a9db1);
    /* 008a9db1: cmp dword ptr [ecx + 0xb0], eax */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9db7: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9db9:; BB(0x008a9db9);
    /* 008a9db9: cmp dword ptr [ecx + 0xc], 2 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9dbd: jg 0x8a9de4 */ if ((!fZ&&fS==fO)) goto L_008a9de4;
L_008a9dbf:; BB(0x008a9dbf);
    /* 008a9dbf: cmp dword ptr [ecx + 0x60], eax */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9dc2: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9dc4:; BB(0x008a9dc4);
    /* 008a9dc4: cmp dword ptr [ecx + 0xb4], eax */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9dca: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9dcc:; BB(0x008a9dcc);
    /* 008a9dcc: mov edx, dword ptr [edx + 0x114] */ r_edx = R32((u32)(r_edx+0x114u));
    /* 008a9dd2: cmp dword ptr [ecx + 0x24], edx */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9dd5: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9dd7:; BB(0x008a9dd7);
    /* 008a9dd7: cmp dword ptr [ecx + 0x78], edx */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9dda: jne 0x8a9de4 */ if (!fZ) goto L_008a9de4;
L_008a9ddc:; BB(0x008a9ddc);
    /* 008a9ddc: cmp dword ptr [ecx + 0xcc], edx */ {  u32 a = R32((u32)(r_ecx+0xccu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a9de2: je 0x8a9de6 */ if (fZ) goto L_008a9de6;
L_008a9de4:; BB(0x008a9de4);
    /* 008a9de4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a9de6:; BB(0x008a9de6);
    /* 008a9de6: ret  */ FN_RET(0x008a9d76); r_esp += 4; return;
}

