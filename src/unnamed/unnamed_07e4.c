#include "protos.h"

void f_007e4c0c(void) /* sub_7E4C0C */
{
    FN_ENTER(0x007e4c0c);
    /* 007e4c0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c0f: mov eax, 0x10fc */ r_eax = 0x10fcu;
    /* 007e4c14: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x7e4c19u); f_00858020();
    /* 007e4c19: mov ecx, dword ptr [esp + 0x10fc] */ r_ecx = R32((u32)(r_esp+0x10fcu));
    /* 007e4c20: mov eax, ecx */ r_eax = r_ecx;
    /* 007e4c22: mov esi, dword ptr [esp + 0x110c] */ r_esi = R32((u32)(r_esp+0x110cu));
    /* 007e4c29: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 007e4c2c: mov ecx, 0x1058 */ r_ecx = 0x1058u;
    /* 007e4c31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c32: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e4c35: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e4c37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e4c38: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e4c3b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e4c3d: mov edx, dword ptr [eax + 0x1e128] */ r_edx = R32((u32)(r_eax+0x1e128u));
    /* 007e4c43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007e4c45: je 0x7e4c55 */ if (fZ) goto L_007e4c55;
L_007e4c47:; BB(0x007e4c47);
    /* 007e4c47: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007e4c4b: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007e4c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c50: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x7e4c52u); call_ind(t); }
    /* 007e4c52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007e4c55:; BB(0x007e4c55);
    /* 007e4c55: add esp, 0x1100 */ {  u32 a = r_esp; u32 b = 0x1100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007e4c5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007e4c5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007e4c5d: ret 4 */ FN_RET(0x007e4c0c); r_esp += 8; return;
}

void f_007e4c60(void) /* sub_7E4C60 */
{
    FN_ENTER(0x007e4c60);
    /* 007e4c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c61: mov ebp, esp */ r_ebp = r_esp;
    /* 007e4c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c65: push 0x8f6c04 */ { u32 v = 0x8f6c04u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007e4c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4c71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007e4c78: sub esp, 0xc88 */ {  u32 a = r_esp; u32 b = 0xc88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007e4c7e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007e4c81: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007e4c84: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007e4c87: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007e4c8a: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007e4c90: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007e4c93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007e4c95: jne 0x7e4cb0 */ if (!fZ) goto L_007e4cb0;
L_007e4c97:; BB(0x007e4c97);
    /* 007e4c97: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007e4c9a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007e4c9d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007e4ca0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007e4ca3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007e4caa: mov esp, ebp */ r_esp = r_ebp;
    /* 007e4cac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007e4cad: ret 0x18 */ FN_RET(0x007e4c60); r_esp += 28; return;
L_007e4cb0:; BB(0x007e4cb0);
    /* 007e4cb0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007e4cb3: lea edx, [eax + 0x370] */ r_edx = (u32)(r_eax+0x370u);
    /* 007e4cb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4cba: call 0x4e6658 */ r_esp -= 4; W32(r_esp, 0x7e4cbfu); f_004e6658();
    /* 007e4cbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e4cc0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007e4cc3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007e4cc6: lea edi, [eax + 0x121d8] */ r_edi = (u32)(r_eax+0x121d8u);
    /* 007e4ccc: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 007e4ccf: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007e4cd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4cd5: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e4cd8: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e4cda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e4cdb: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e4cde: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e4ce0: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4ce5: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4cea: lea edx, [ebp - 0xc48] */ r_edx = (u32)(r_ebp+0xfffff3b8u);
    /* 007e4cf0: mov dword ptr [ebp - 0xc94], edx */ W32((u32)(r_ebp+0xfffff36cu), r_edx);
    /* 007e4cf6: lea ecx, [ebp - 0x868] */ r_ecx = (u32)(r_ebp+0xfffff798u);
    /* 007e4cfc: mov dword ptr [ebp - 0xc8c], ecx */ W32((u32)(r_ebp+0xfffff374u), r_ecx);
    /* 007e4d02: lea ebx, [ebp - 0x868] */ r_ebx = (u32)(r_ebp+0xfffff798u);
    /* 007e4d08: mov dword ptr [ebp - 0xc84], ebx */ W32((u32)(r_ebp+0xfffff37cu), r_ebx);
    /* 007e4d0e: mov esi, 8 */ r_esi = 0x8u;
    /* 007e4d13: mov word ptr [ebp - 0xc50], si */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_esi);
    /* 007e4d1a: lea edi, [ebp - 0x864] */ r_edi = (u32)(r_ebp+0xfffff79cu);
    /* 007e4d20: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007e4d24: mov byte ptr [ebp - 0xc4e], al */ W8((u32)(r_ebp+0xfffff3b2u), (u8)r_eax);
    /* 007e4d2a: mov byte ptr [ebp - 0xc4d], al */ W8((u32)(r_ebp+0xfffff3b3u), (u8)r_eax);
    /* 007e4d30: mov dword ptr [ebp - 0xc4c], eax */ W32((u32)(r_ebp+0xfffff3b4u), r_eax);
    /* 007e4d36: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d39: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e4d3eu); f_00858736();
    /* 007e4d3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007e4d45: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d4a: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d4f: lea eax, [ebp - 0x82c] */ r_eax = (u32)(r_ebp+0xfffff7d4u);
    /* 007e4d55: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d57: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d5a: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e4d5fu); f_00858736();
    /* 007e4d5f: mov dword ptr [ebp - 0x868], 0 */ W32((u32)(r_ebp+0xfffff798u), 0x0u);
    /* 007e4d69: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007e4d70: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d75: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d7a: lea eax, [ebp - 0x7f4] */ r_eax = (u32)(r_ebp+0xfffff80cu);
    /* 007e4d80: mov dword ptr [ebp - 0xc7c], eax */ W32((u32)(r_ebp+0xfffff384u), r_eax);
    /* 007e4d86: lea edx, [ebp - 0x7f0] */ r_edx = (u32)(r_ebp+0xfffff810u);
    /* 007e4d8c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d8e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4d91: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e4d96u); f_00858736();
    /* 007e4d96: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007e4d9d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4da2: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4da7: lea eax, [ebp - 0x7b8] */ r_eax = (u32)(r_ebp+0xfffff848u);
    /* 007e4dad: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4daf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4db2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7e4db7u); f_00858736();
    /* 007e4db7: mov dword ptr [ebp - 0x7f4], 0 */ W32((u32)(r_ebp+0xfffff80cu), 0x0u);
    /* 007e4dc1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007e4dc8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007e4dca:; BB(0x007e4dca);
    /* 007e4dca: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007e4dcd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007e4dcf: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 007e4dd2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007e4dd4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007e4dd6: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007e4dd8: mov byte ptr [ebp + edx - 0xc43], 0xff */ W8((u32)(r_ebp+r_edx+0xfffff3bdu), 0xffu);
    /* 007e4de0: lea ecx, [ebp + edx - 0xc3c] */ r_ecx = (u32)(r_ebp+r_edx+0xfffff3c4u);
    /* 007e4de7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007e4de9: mov byte ptr [ebp + edx - 0xc44], al */ W8((u32)(r_ebp+r_edx+0xfffff3bcu), (u8)r_eax);
    /* 007e4df0: mov dword ptr [ebp + edx - 0xc40], eax */ W32((u32)(r_ebp+r_edx+0xfffff3c0u), r_eax);
    /* 007e4df7: mov byte ptr [ebp + edx - 0xc41], al */ W8((u32)(r_ebp+r_edx+0xfffff3bfu), (u8)r_eax);
    /* 007e4dfe: mov byte ptr [ebp + edx - 0xc42], al */ W8((u32)(r_ebp+r_edx+0xfffff3beu), (u8)r_eax);
    /* 007e4e05: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x7e4e0au); f_005d6a3c();
    /* 007e4e0a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007e4e0d: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007e4e10: jl 0x7e4dca */ if ((fS!=fO)) goto L_007e4dca;
L_007e4e12:; BB(0x007e4e12);
    /* 007e4e12: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007e4e19: lea eax, [ebp - 0xc50] */ r_eax = (u32)(r_ebp+0xfffff3b0u);
    /* 007e4e1f: push 0xc2c */ { u32 v = 0xc2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4e24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4e26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4e27: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7e4e2cu); f_0086b688();
    /* 007e4e2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e4e2f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007e4e32: mov byte ptr [ebp - 0xc4e], 0x61 */ W8((u32)(r_ebp+0xfffff3b2u), 0x61u);
    /* 007e4e39: mov eax, 0xc2c */ r_eax = 0xc2cu;
    /* 007e4e3e: mov dword ptr [ebp - 0xc4c], 3 */ W32((u32)(r_ebp+0xfffff3b4u), 0x3u);
    /* 007e4e48: mov word ptr [ebp - 0xc50], ax */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_eax);
    /* 007e4e4f: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007e4e54: lea edi, [ebp - 0xc48] */ r_edi = (u32)(r_ebp+0xfffff3b8u);
    /* 007e4e5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4e5b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e4e5e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e4e60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e4e61: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e4e64: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e4e66: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 007e4e69: lea edi, [ebp - 0x76c] */ r_edi = (u32)(r_ebp+0xfffff894u);
    /* 007e4e6f: mov ecx, 0x15c */ r_ecx = 0x15cu;
    /* 007e4e74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4e75: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007e4e78: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007e4e7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007e4e7b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007e4e7e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007e4e80: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 007e4e83: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007e4e85: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 007e4e88: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 007e4e8b: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 007e4e8e: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 007e4e91: mov dword ptr [ebp - 0x610], eax */ W32((u32)(r_ebp+0xfffff9f0u), r_eax);
    /* 007e4e97: mov dword ptr [ebp - 0x60c], edx */ W32((u32)(r_ebp+0xfffff9f4u), r_edx);
    /* 007e4e9d: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 007e4ea0: mov dword ptr [ebp - 0x608], ecx */ W32((u32)(r_ebp+0xfffff9f8u), r_ecx);
    /* 007e4ea6: mov dword ptr [ebp - 0x604], ebx */ W32((u32)(r_ebp+0xfffff9fcu), r_ebx);
    /* 007e4eac: mov dword ptr [ebp - 0x600], esi */ W32((u32)(r_ebp+0xfffffa00u), r_esi);
    /* 007e4eb2: mov dword ptr [ebp - 0x5fc], edx */ W32((u32)(r_ebp+0xfffffa04u), r_edx);
    /* 007e4eb8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007e4ebb: mov dword ptr [edx + 0x1e070], eax */ W32((u32)(r_edx+0x1e070u), r_eax);
    /* 007e4ec1: mov eax, dword ptr [edx + 0x1e06c] */ r_eax = R32((u32)(r_edx+0x1e06cu));
    /* 007e4ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007e4ec9: jne 0x7e4ed5 */ if (!fZ) goto L_007e4ed5;
L_007e4ecb:; BB(0x007e4ecb);
    /* 007e4ecb: mov dword ptr [ebp - 0x610], 2 */ W32((u32)(r_ebp+0xfffff9f0u), 0x2u);
L_007e4ed5:; BB(0x007e4ed5);
    /* 007e4ed5: lea eax, [ebp - 0x5f8] */ r_eax = (u32)(r_ebp+0xfffffa08u);
    /* 007e4edb: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4ee0: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007e4ee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4ee4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7e4ee9u); f_00857dec();
    /* 007e4ee9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e4eec: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007e4eef: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e4ef2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007e4ef4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007e4ef6: jbe 0x7e4f0e */ if ((fC||fZ)) goto L_007e4f0e;
L_007e4ef8:; BB(0x007e4ef8);
    /* 007e4ef8: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 007e4efb: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 007e4eff: mov dword ptr [ebp + ecx*4 - 0x4a0], eax */ W32((u32)(r_ebp+r_ecx*4+0xfffffb60u), r_eax);
    /* 007e4f06: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007e4f09: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007e4f0c: jb 0x7e4ef8 */ if (fC) goto L_007e4ef8;
L_007e4f0e:; BB(0x007e4f0e);
    /* 007e4f0e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 007e4f11: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 007e4f14: lea esi, [ebp - 0x424] */ r_esi = (u32)(r_ebp+0xfffffbdcu);
    /* 007e4f1a: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4f1f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007e4f22: mov dword ptr [ebp - 0x428], edx */ W32((u32)(r_ebp+0xfffffbd8u), r_edx);
    /* 007e4f28: lea ebx, [ecx + 8] */ r_ebx = (u32)(r_ecx+0x8u);
    /* 007e4f2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4f2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007e4f2d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7e4f32u); f_00857dec();
    /* 007e4f32: lea eax, [ebp - 0x424] */ r_eax = (u32)(r_ebp+0xfffffbdcu);
    /* 007e4f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4f39: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7e4f3eu); f_00858009();
    /* 007e4f3e: lea edx, [ebp - 0xc48] */ r_edx = (u32)(r_ebp+0xfffff3b8u);
    /* 007e4f44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4f45: lea eax, [eax + eax + 0x831] */ r_eax = (u32)(r_eax+r_eax+0x831u);
    /* 007e4f4c: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007e4f51: mov word ptr [ebp - 0xc50], ax */ W16((u32)(r_ebp+0xfffff3b0u), (u16)r_eax);
    /* 007e4f58: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7e4f5du); f_0061cdb0();
    /* 007e4f5d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007e4f60: movzx eax, word ptr [ebp - 0xc50] */ r_eax = (u32)R16((u32)(r_ebp+0xfffff3b0u));
    /* 007e4f67: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007e4f6a: lea edx, [ebp - 0xc50] */ r_edx = (u32)(r_ebp+0xfffff3b0u);
    /* 007e4f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4f71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007e4f72: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7e4f77u); f_0077fd10();
    /* 007e4f77: lea eax, [ebp - 0xc50] */ r_eax = (u32)(r_ebp+0xfffff3b0u);
    /* 007e4f7d: mov dword ptr [ebp - 0xc74], eax */ W32((u32)(r_ebp+0xfffff38cu), r_eax);
    /* 007e4f83: lea eax, [ebp - 0xc48] */ r_eax = (u32)(r_ebp+0xfffff3b8u);
    /* 007e4f89: mov dword ptr [ebp - 0xc6c], eax */ W32((u32)(r_ebp+0xfffff394u), r_eax);
    /* 007e4f8f: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 007e4f95: mov dword ptr [ebp - 0xc64], eax */ W32((u32)(r_ebp+0xfffff39cu), r_eax);
    /* 007e4f9b: lea eax, [ebp - 0x7f4] */ r_eax = (u32)(r_ebp+0xfffff80cu);
    /* 007e4fa1: mov dword ptr [ebp - 0xc5c], eax */ W32((u32)(r_ebp+0xfffff3a4u), r_eax);
    /* 007e4fa7: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 007e4fae: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fb3: lea eax, [ebp - 0x7b8] */ r_eax = (u32)(r_ebp+0xfffff848u);
    /* 007e4fb9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fbb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fbe: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e4fc3u); f_008586d6();
    /* 007e4fc3: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 007e4fca: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fcf: lea eax, [ebp - 0x7f0] */ r_eax = (u32)(r_ebp+0xfffff810u);
    /* 007e4fd5: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fd7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fda: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e4fdfu); f_008586d6();
    /* 007e4fdf: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 007e4fe5: mov dword ptr [ebp - 0xc54], eax */ W32((u32)(r_ebp+0xfffff3acu), r_eax);
    /* 007e4feb: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 007e4ff2: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e4ff7: lea eax, [ebp - 0x82c] */ r_eax = (u32)(r_ebp+0xfffff7d4u);
    /* 007e4ffd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e4fff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e5002: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e5007u); f_008586d6();
    /* 007e5007: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007e500e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007e5013: lea eax, [ebp - 0x864] */ r_eax = (u32)(r_ebp+0xfffff79cu);
    /* 007e5019: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007e501b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007e501d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007e501e: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7e5023u); f_008586d6();
    /* 007e5023: jmp 0x7e4c97 */ goto L_007e4c97;
}

