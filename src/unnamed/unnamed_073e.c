#include "protos.h"

void f_0073e0c0(void)
{
    FN_ENTER(0x0073e0c0);
    goto L_0073e0c0;
L_0073dc92:; BB(0x0073dc92);
    /* 0073dc92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dc95: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 0073dc99: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073dca0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dca2: je 0x73dce7 */ if (fZ) goto L_0073dce7;
L_0073dca4:; BB(0x0073dca4);
    /* 0073dca4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dca7: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0073dcab: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073dcae: jne 0x73e019 */ if (!fZ) goto L_0073e019;
L_0073dcb4:; BB(0x0073dcb4);
    /* 0073dcb4: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x73dcb9u); f_00815434();
    /* 0073dcb9: call 0x814718 */ r_esp -= 4; W32(r_esp, 0x73dcbeu); f_00814718();
    /* 0073dcbe: push 0x971e6c */ { u32 v = 0x971e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073dcc3: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x73dcc8u); f_00814afc();
    /* 0073dcc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073dcc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dccc: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073dccf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073dcd2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073dcd5: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073dcd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073dcdc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073dce3: mov esp, ebp */ r_esp = r_ebp;
    /* 0073dce5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073dce6: ret  */ FN_RET(0x0073e0c0); r_esp += 4; return;
L_0073dce7:; BB(0x0073dce7);
    /* 0073dce7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dce9: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dcef:; BB(0x0073dcef);
    /* 0073dcef: mov ecx, esi */ r_ecx = r_esi;
    /* 0073dcf1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73dcf6u); f_007365f4();
    /* 0073dcf6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dcf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073dcfa: call 0x73e2e0 */ r_esp -= 4; W32(r_esp, 0x73dcffu); f_0073e2e0();
    /* 0073dcff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073dd02: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073dd05: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073dd0c: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073dd12: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073dd19: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0073dd1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073dd1e: je 0x73de84 */ if (fZ) goto L_0073de84;
L_0073dd24:; BB(0x0073dd24);
    /* 0073dd24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073dd26: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x73dd2bu); f_00760acc();
    /* 0073dd2b: jmp 0x73de84 */ goto L_0073de84;
L_0073de84:; BB(0x0073de84);
    /* 0073de84: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073de87: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073de8a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073de8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073de90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073de97: mov esp, ebp */ r_esp = r_ebp;
    /* 0073de99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073de9a: ret  */ FN_RET(0x0073e0c0); r_esp += 4; return;
L_0073e019:; BB(0x0073e019);
    /* 0073e019: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e01b: call 0x8153bc */ r_esp -= 4; W32(r_esp, 0x73e020u); f_008153bc();
    /* 0073e020: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e021: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e024: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 0073e028: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0073e02b: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0073e030: mov byte ptr [ebx + 0x1d], al */ W8((u32)(r_ebx+0x1du), (u8)r_eax);
    /* 0073e033: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0073e03a: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073e040: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0073e047: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0073e04a: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073e051: jmp 0x73dce7 */ goto L_0073dce7;
L_0073e0c0:; BB(0x0073e0c0);
    /* 0073e0c0: jnp 0x73e0c1 */ if (!fP) UNSUP(0x0073e0c0, "branch to code that was not decoded");
L_0073e0c2:; BB(0x0073e0c2);
    /* 0073e0c2: inc dword ptr [ebx - 0x47cfe3d] */ { u32 ad = (u32)(r_ebx+0xfb8301c3u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0073e0c8: xor dword ptr [edi + edi*4 + 0x68], edi */ { u32 ad = (u32)(r_edi+r_edi*4+0x68u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 0073e0cc: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0073e0ce: clc  */ fC = 0;
    /* 0073e0cf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073e0d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e0d2: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0073e0d9: or edx, 0xffff0400 */ {  u32 a = r_edx; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0073e0df: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0073e0e6: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e0eb: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x73e0f0u); f_007361d0();
    /* 0073e0f0: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e0f2: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x73e0f7u); f_00736458();
    /* 0073e0f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0073e0fa: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 0073e0fd: jmp 0x73dc92 */ goto L_0073dc92;
}

void f_0073e12c(void) /* sub_73E12C */
{
    FN_ENTER(0x0073e12c);
    /* 0073e12c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e12d: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e132: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e137u); f_0073ec3c();
    /* 0073e137: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e13a: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x73e13fu); f_00735708();
    /* 0073e13f: mov ebx, eax */ r_ebx = r_eax;
    /* 0073e141: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e143: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e145: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e14au); f_00792fe8();
    /* 0073e14a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e14d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e14f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e151: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e154: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e159u); f_00735c90();
    /* 0073e159: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e15b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e15d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e162u); f_00792fe8();
    /* 0073e162: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e165: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e167: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e169: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e16b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e16c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e171u); f_00735c90();
    /* 0073e171: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0073e173: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e175: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e17au); f_00792fe8();
    /* 0073e17a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e17d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e17f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e181: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e183: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e184: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e189u); f_00735c90();
    /* 0073e189: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e18b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e18d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e192u); f_00792fe8();
    /* 0073e192: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e195: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e197: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e199: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e19b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e19c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e1a1u); f_00735c90();
    /* 0073e1a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1a3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1a5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e1aau); f_00792fe8();
    /* 0073e1aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e1ad: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1af: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e1b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1b4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e1b9u); f_00735c90();
    /* 0073e1b9: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e1c0: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x73e1c5u); f_00736138();
    /* 0073e1c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e1c7: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x73e1ccu); f_00736458();
    /* 0073e1cc: mov eax, ebx */ r_eax = r_ebx;
    /* 0073e1ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073e1cf: ret  */ FN_RET(0x0073e12c); r_esp += 4; return;
}

void f_0073e1d0(void) /* sub_73E1D0 */
{
    FN_ENTER(0x0073e1d0);
    /* 0073e1d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1d1: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1d6: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e1dbu); f_0073ec3c();
    /* 0073e1db: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1dd: push 0x971e00 */ { u32 v = 0x971e00u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1e3: call 0x714ac8 */ r_esp -= 4; W32(r_esp, 0x73e1e8u); f_00714ac8();
    /* 0073e1e8: mov ebx, eax */ r_ebx = r_eax;
    /* 0073e1ea: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1ec: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1ee: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e1f3u); f_00792fe8();
    /* 0073e1f3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e1f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e1f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e1fb: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e200u); f_00714d64();
    /* 0073e200: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e202: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e204: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e209u); f_00792fe8();
    /* 0073e209: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e20c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e20e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e20f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e211: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e216u); f_00714d64();
    /* 0073e216: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0073e218: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e21a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e21fu); f_00792fe8();
    /* 0073e21f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e222: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e224: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e225: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e227: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e22cu); f_00714d64();
    /* 0073e22c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e22e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e230: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e235u); f_00792fe8();
    /* 0073e235: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e238: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e23b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e23d: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e242u); f_00714d64();
    /* 0073e242: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e244: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e246: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e24bu); f_00792fe8();
    /* 0073e24b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e24e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e251: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e253: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e258u); f_00714d64();
    /* 0073e258: movsx edx, word ptr [0xa9cd44] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa9cd44u));
    /* 0073e25f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e260: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e262: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x73e267u); f_00714e5c();
    /* 0073e267: mov eax, ebx */ r_eax = r_ebx;
    /* 0073e269: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073e26a: ret  */ FN_RET(0x0073e1d0); r_esp += 4; return;
}

void f_0073e26c(void) /* sub_73E26C */
{
    FN_ENTER(0x0073e26c);
    /* 0073e26c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e26d: mov esi, ecx */ r_esi = r_ecx;
    /* 0073e26f: movsx eax, byte ptr [esp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x8u));
    /* 0073e274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e275: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x73e27au); f_007083d4();
    /* 0073e27a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e27b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e27d: je 0x73e2d9 */ if (fZ) goto L_0073e2d9;
L_0073e27f:; BB(0x0073e27f);
    /* 0073e27f: call 0x81e268 */ r_esp -= 4; W32(r_esp, 0x73e284u); f_0081e268();
    /* 0073e284: call 0x8248a4 */ r_esp -= 4; W32(r_esp, 0x73e289u); f_008248a4();
    /* 0073e289: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0073e28c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e28e: je 0x73e2a4 */ if (fZ) goto L_0073e2a4;
L_0073e290:; BB(0x0073e290);
    /* 0073e290: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073e294: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073e299: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073e29d: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
L_0073e2a4:; BB(0x0073e2a4);
    /* 0073e2a4: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0073e2a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e2a9: je 0x73e2bf */ if (fZ) goto L_0073e2bf;
L_0073e2ab:; BB(0x0073e2ab);
    /* 0073e2ab: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0073e2af: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073e2b4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073e2b8: mov dword ptr [esi + 0x28], 0 */ W32((u32)(r_esi+0x28u), 0x0u);
L_0073e2bf:; BB(0x0073e2bf);
    /* 0073e2bf: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e2c1: call 0x73e12c */ r_esp -= 4; W32(r_esp, 0x73e2c6u); f_0073e12c();
    /* 0073e2c6: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0073e2c9: mov ecx, eax */ r_ecx = r_eax;
    /* 0073e2cb: call 0x712780 */ r_esp -= 4; W32(r_esp, 0x73e2d0u); f_00712780();
    /* 0073e2d0: mov eax, 1 */ r_eax = 0x1u;
    /* 0073e2d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073e2d6: ret 4 */ FN_RET(0x0073e26c); r_esp += 8; return;
L_0073e2d9:; BB(0x0073e2d9);
    /* 0073e2d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e2db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073e2dc: ret 4 */ FN_RET(0x0073e26c); r_esp += 8; return;
}

void f_0073e2e0(void) /* sub_73E2E0 */
{
    FN_ENTER(0x0073e2e0);
    /* 0073e2e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e2e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073e2e3: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x73e2e8u); f_00815434();
    /* 0073e2e8: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x73e2edu); f_00815434();
    /* 0073e2ed: call 0x814718 */ r_esp -= 4; W32(r_esp, 0x73e2f2u); f_00814718();
    /* 0073e2f2: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e2f6: call 0x77bcb0 */ r_esp -= 4; W32(r_esp, 0x73e2fbu); f_0077bcb0();
    /* 0073e2fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e2fc: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x73e301u); f_00814afc();
    /* 0073e301: movzx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)R8((u32)(r_ebx+0x1du));
    /* 0073e305: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073e30a: mov byte ptr [ebx + 0x1d], al */ W8((u32)(r_ebx+0x1du), (u8)r_eax);
    /* 0073e30d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073e310: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073e311: ret 4 */ FN_RET(0x0073e2e0); r_esp += 8; return;
}

void f_0073e314(void) /* sub_73E314 */
{
    FN_ENTER(0x0073e314);
    /* 0073e314: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e315: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e316: mov edi, ecx */ r_edi = r_ecx;
    /* 0073e318: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e31d: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e322u); f_0073ec3c();
    /* 0073e322: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e324: push 0x971e08 */ { u32 v = 0x971e08u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e32a: call 0x714ac8 */ r_esp -= 4; W32(r_esp, 0x73e32fu); f_00714ac8();
    /* 0073e32f: mov esi, eax */ r_esi = r_eax;
    /* 0073e331: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e333: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e335: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e33au); f_00792fe8();
    /* 0073e33a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e33d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e340: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e342: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e347u); f_00714d64();
    /* 0073e347: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e349: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e34b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e350u); f_00792fe8();
    /* 0073e350: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e353: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e356: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e358: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e35du); f_00714d64();
    /* 0073e35d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e35f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e361: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e366u); f_00792fe8();
    /* 0073e366: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e369: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e36b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e36c: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e36e: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e373u); f_00714d64();
    /* 0073e373: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0073e377: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e379: je 0x73e39b */ if (fZ) goto L_0073e39b;
L_0073e37b:; BB(0x0073e37b);
    /* 0073e37b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e37e: jne 0x73e38b */ if (!fZ) goto L_0073e38b;
L_0073e380:; BB(0x0073e380);
    /* 0073e380: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e382: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e384: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x73e389u); f_00714e5c();
    /* 0073e389: jmp 0x73e3a4 */ goto L_0073e3a4;
L_0073e38b:; BB(0x0073e38b);
    /* 0073e38b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073e38e: jne 0x73e3a4 */ if (!fZ) goto L_0073e3a4;
L_0073e390:; BB(0x0073e390);
    /* 0073e390: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e392: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e394: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x73e399u); f_00714e5c();
    /* 0073e399: jmp 0x73e3a4 */ goto L_0073e3a4;
L_0073e39b:; BB(0x0073e39b);
    /* 0073e39b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e39d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e39f: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x73e3a4u); f_00714e5c();
L_0073e3a4:; BB(0x0073e3a4);
    /* 0073e3a4: mov eax, esi */ r_eax = r_esi;
    /* 0073e3a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073e3a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073e3a8: ret  */ FN_RET(0x0073e314); r_esp += 4; return;
}

void f_0073e3ac(void) /* sub_73E3AC */
{
    FN_ENTER(0x0073e3ac);
    /* 0073e3ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073e3ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0073e3af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e3b1: push 0x8f1f98 */ { u32 v = 0x8f1f98u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e3b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073e3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e3bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073e3c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e3c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073e3ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073e3cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073e3d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073e3d3: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e3d5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073e3dc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73e3e1u); f_005caba4();
    /* 0073e3e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e3e2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073e3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e3e7: je 0x73e423 */ if (fZ) goto L_0073e423;
L_0073e3e9:; BB(0x0073e3e9);
    /* 0073e3e9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073e3f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073e3f7: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e3fc: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e401u); f_0073ec3c();
    /* 0073e401: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e402: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073e405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e406: call 0x7433a8 */ r_esp -= 4; W32(r_esp, 0x73e40bu); f_007433a8();
    /* 0073e40b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073e40e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073e415:; BB(0x0073e415);
    /* 0073e415: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073e418: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073e41f: mov esp, ebp */ r_esp = r_ebp;
    /* 0073e421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073e422: ret  */ FN_RET(0x0073e3ac); r_esp += 4; return;
L_0073e423:; BB(0x0073e423);
    /* 0073e423: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e425: jmp 0x73e415 */ goto L_0073e415;
}

void f_0073e428(void) /* sub_73E428 */
{
    FN_ENTER(0x0073e428);
    /* 0073e428: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 0073e42e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e430: je 0x73e444 */ if (fZ) goto L_0073e444;
L_0073e432:; BB(0x0073e432);
    /* 0073e432: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073e436: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0073e43a: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0073e43e: mov byte ptr [ecx + 6], dl */ W8((u32)(r_ecx+0x6u), (u8)r_edx);
    /* 0073e441: ret 8 */ FN_RET(0x0073e428); r_esp += 12; return;
L_0073e444:; BB(0x0073e444);
    /* 0073e444: ret 8 */ FN_RET(0x0073e428); r_esp += 12; return;
}

void f_0073e448(void) /* sub_73E448 */
{
    FN_ENTER(0x0073e448);
    /* 0073e448: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073e449: mov ebp, esp */ r_ebp = r_esp;
    /* 0073e44b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e44d: push 0x8f1fc0 */ { u32 v = 0x8f1fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e452: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073e458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e459: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073e460: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e463: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073e466: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073e469: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073e46c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073e46f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e471: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073e478: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73e47du); f_005caba4();
    /* 0073e47d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e47e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073e481: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e483: je 0x73e4bf */ if (fZ) goto L_0073e4bf;
L_0073e485:; BB(0x0073e485);
    /* 0073e485: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073e48c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073e493: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e498: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e49du); f_0073ec3c();
    /* 0073e49d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e49e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073e4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4a2: call 0x743190 */ r_esp -= 4; W32(r_esp, 0x73e4a7u); f_00743190();
    /* 0073e4a7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073e4aa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073e4b1:; BB(0x0073e4b1);
    /* 0073e4b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073e4b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073e4bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0073e4bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073e4be: ret  */ FN_RET(0x0073e448); r_esp += 4; return;
L_0073e4bf:; BB(0x0073e4bf);
    /* 0073e4bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e4c1: jmp 0x73e4b1 */ goto L_0073e4b1;
}

void f_0073e4c4(void) /* sub_73E4C4 */
{
    FN_ENTER(0x0073e4c4);
    /* 0073e4c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4c5: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4ca: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e4cfu); f_0073ec3c();
    /* 0073e4cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4d2: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x73e4d7u); f_00735708();
    /* 0073e4d7: mov edi, eax */ r_edi = r_eax;
    /* 0073e4d9: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4db: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4dd: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e4e2u); f_00792fe8();
    /* 0073e4e2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e4e5: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4e7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4e9: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e4eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4ec: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e4f1u); f_00735c90();
    /* 0073e4f1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4f3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4f5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e4fau); f_00792fe8();
    /* 0073e4fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e4fd: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e4ff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e501: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e504: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73e509u); f_00735c90();
    /* 0073e509: push 0x43eb0000 */ { u32 v = 0x43eb0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e50e: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e510: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x73e515u); f_00736138();
    /* 0073e515: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e517: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x73e51cu); f_00736458();
    /* 0073e51c: mov eax, edi */ r_eax = r_edi;
    /* 0073e51e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073e51f: ret  */ FN_RET(0x0073e4c4); r_esp += 4; return;
}

void f_0073e520(void) /* sub_73E520 */
{
    FN_ENTER(0x0073e520);
    /* 0073e520: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e521: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e526: call 0x73ec3c */ r_esp -= 4; W32(r_esp, 0x73e52bu); f_0073ec3c();
    /* 0073e52b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e52d: push 0x971e10 */ { u32 v = 0x971e10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e532: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e533: call 0x714ac8 */ r_esp -= 4; W32(r_esp, 0x73e538u); f_00714ac8();
    /* 0073e538: mov edi, eax */ r_edi = r_eax;
    /* 0073e53a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e53c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e53e: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e543u); f_00792fe8();
    /* 0073e543: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e546: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e549: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e54b: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e550u); f_00714d64();
    /* 0073e550: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e552: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e554: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x73e559u); f_00792fe8();
    /* 0073e559: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e55c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e55e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e55f: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e561: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x73e566u); f_00714d64();
    /* 0073e566: call 0x73e594 */ r_esp -= 4; W32(r_esp, 0x73e56bu); f_0073e594();
    /* 0073e56b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e56d: jl 0x73e58d */ if ((fS!=fO)) goto L_0073e58d;
L_0073e56f:; BB(0x0073e56f);
    /* 0073e56f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073e572: jle 0x73e584 */ if ((fZ||fS!=fO)) goto L_0073e584;
L_0073e574:; BB(0x0073e574);
    /* 0073e574: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073e577: jne 0x73e58d */ if (!fZ) goto L_0073e58d;
L_0073e579:; BB(0x0073e579);
    /* 0073e579: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e57b: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e57d: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x73e582u); f_00714e5c();
    /* 0073e582: jmp 0x73e58d */ goto L_0073e58d;
L_0073e584:; BB(0x0073e584);
    /* 0073e584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e586: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e588: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x73e58du); f_00714e5c();
L_0073e58d:; BB(0x0073e58d);
    /* 0073e58d: mov eax, edi */ r_eax = r_edi;
    /* 0073e58f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073e590: ret  */ FN_RET(0x0073e520); r_esp += 4; return;
}

void f_0073e594(void) /* sub_73E594 */
{
    FN_ENTER(0x0073e594);
    /* 0073e594: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 0073e59a: movsx eax, word ptr [edx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 0073e59e: ret  */ FN_RET(0x0073e594); r_esp += 4; return;
}

void f_0073e5a0(void) /* sub_73E5A0 */
{
    FN_ENTER(0x0073e5a0);
    /* 0073e5a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073e5a4: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 0073e5aa: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 0073e5ae: ret 4 */ FN_RET(0x0073e5a0); r_esp += 8; return;
}

void f_0073e5b4(void) /* sub_73E5B4 */
{
    FN_ENTER(0x0073e5b4);
    /* 0073e5b4: mov dword ptr [0xa9a9d0], 0x3f800000 */ W32((u32)(0xa9a9d0u), 0x3f800000u);
    /* 0073e5be: mov dword ptr [0xa9a9d4], 0x41000000 */ W32((u32)(0xa9a9d4u), 0x41000000u);
    /* 0073e5c8: mov dword ptr [0xa9a9d8], 0x3fc00000 */ W32((u32)(0xa9a9d8u), 0x3fc00000u);
    /* 0073e5d2: ret  */ FN_RET(0x0073e5b4); r_esp += 4; return;
}

void f_0073e5d4(void) /* sub_73E5D4 */
{
    FN_ENTER(0x0073e5d4);
    /* 0073e5d4: mov eax, ecx */ r_eax = r_ecx;
    /* 0073e5d6: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 0073e5db: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0073e5df: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0073e5e1: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 0073e5e6: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0073e5ed: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 0073e5f0: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0073e5f3: ret 0xc */ FN_RET(0x0073e5d4); r_esp += 16; return;
}

void f_0073e5f8(void) /* sub_73E5F8 */
{
    FN_ENTER(0x0073e5f8);
    /* 0073e5f8: fld dword ptr [0x971eec] */ FPUSH(R_F32((u32)(0x971eecu)));
    /* 0073e5fe: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0073e601: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0073e603: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073e605: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0073e608: ret  */ FN_RET(0x0073e5f8); r_esp += 4; return;
}

void f_0073e60c(void) /* sub_73E60C */
{
    FN_ENTER(0x0073e60c);
    /* 0073e60c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e60d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e60e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e60f: mov edi, ecx */ r_edi = r_ecx;
    /* 0073e611: mov ecx, edi */ r_ecx = r_edi;
    /* 0073e613: call 0x73e5f8 */ r_esp -= 4; W32(r_esp, 0x73e618u); f_0073e5f8();
    /* 0073e618: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e61b: movsx ebx, byte ptr [edi] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 0073e61e: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x73e623u); f_00719140();
    /* 0073e623: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e624: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e62a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0073e62d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073e62f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073e631: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073e633: lea esi, [eax + eax + 0xaae75c] */ r_esi = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0073e63a: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e63c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x73e641u); f_007c1160();
    /* 0073e641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e643: je 0x73e651 */ if (fZ) goto L_0073e651;
L_0073e645:; BB(0x0073e645);
    /* 0073e645: mov dword ptr [edi + 8], 0x41200000 */ W32((u32)(r_edi+0x8u), 0x41200000u);
    /* 0073e64c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073e64f: jmp 0x73e66c */ goto L_0073e66c;
L_0073e651:; BB(0x0073e651);
    /* 0073e651: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e657: mov ecx, esi */ r_ecx = r_esi;
    /* 0073e659: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x73e65eu); f_007c1160();
    /* 0073e65e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073e660: je 0x73e695 */ if (fZ) goto L_0073e695;
L_0073e662:; BB(0x0073e662);
    /* 0073e662: mov dword ptr [edi + 8], 0xc1200000 */ W32((u32)(r_edi+0x8u), 0xc1200000u);
    /* 0073e669: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0073e66c:; BB(0x0073e66c);
    /* 0073e66c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073e66e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e66f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e671: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e676: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73e67bu); f_00814298();
    /* 0073e67b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073e67e: movsx edx, byte ptr [edi + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x1u));
    /* 0073e682: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 0073e685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0073e687: jl 0x73e6aa */ if ((fS!=fO)) goto L_0073e6aa;
L_0073e689:; BB(0x0073e689);
    /* 0073e689: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073e68b: jl 0x73e691 */ if ((fS!=fO)) goto L_0073e691;
L_0073e68d:; BB(0x0073e68d);
    /* 0073e68d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0073e68f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0073e691:; BB(0x0073e691);
    /* 0073e691: cmp al, byte ptr [edi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0073e693: jne 0x73e69d */ if (!fZ) goto L_0073e69d;
L_0073e695:; BB(0x0073e695);
    /* 0073e695: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e697: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073e698: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073e699: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073e69a: ret 4 */ FN_RET(0x0073e60c); r_esp += 8; return;
L_0073e69d:; BB(0x0073e69d);
    /* 0073e69d: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 0073e69f: mov eax, 1 */ r_eax = 0x1u;
    /* 0073e6a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073e6a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073e6a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073e6a7: ret 4 */ FN_RET(0x0073e60c); r_esp += 8; return;
L_0073e6aa:; BB(0x0073e6aa);
    /* 0073e6aa: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0073e6ad: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 0073e6b0: mov eax, ebx */ r_eax = r_ebx;
    /* 0073e6b2: jmp 0x73e689 */ goto L_0073e689;
}

void f_0073e6b4(void) /* sub_73E6B4 */
{
    FN_ENTER(0x0073e6b4);
    /* 0073e6b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073e6b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073e6b6: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e6b9: mov esi, ecx */ r_esi = r_ecx;
    /* 0073e6bb: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0073e6bf: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0073e6c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0073e6c4: jl 0x73e83b */ if ((fS!=fO)) goto L_0073e83b;
L_0073e6ca:; BB(0x0073e6ca);
    /* 0073e6ca: fld dword ptr [0x971ee0] */ FPUSH(R_F32((u32)(0x971ee0u)));
    /* 0073e6d0: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 0073e6d3: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 0073e6d6: fld dword ptr [0x971edc] */ FPUSH(R_F32((u32)(0x971edcu)));
    /* 0073e6dc: fld dword ptr [0x971ed4] */ FPUSH(R_F32((u32)(0x971ed4u)));
    /* 0073e6e2: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0073e6e5: fdivr dword ptr [0x971ed8] */ ST(0) = R_F32((u32)(0x971ed8u)) / ST(0);
    /* 0073e6eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073e6ed: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0073e6f1: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 0073e6f4: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 0073e6f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073e6f9: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0073e6fd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0073e701: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0073e706: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x73e70bu); f_0082bb30();
    /* 0073e70b: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0073e711: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x73e716u); f_00829cc8();
    /* 0073e716: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073e718: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0073e71d: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x73e722u); f_0082bb60();
    /* 0073e722: fld dword ptr [0x971ecc] */ FPUSH(R_F32((u32)(0x971eccu)));
    /* 0073e728: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0073e72c: fld dword ptr [0x971ed0] */ FPUSH(R_F32((u32)(0x971ed0u)));
    /* 0073e732: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0073e736: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0073e73a: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0073e73d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073e73f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073e743: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073e747: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0073e74b: mov eax, ebp */ r_eax = r_ebp;
    /* 0073e74d: call 0x73e84c */ r_esp -= 4; W32(r_esp, 0x73e752u); f_0073e84c();
    /* 0073e752: fld dword ptr [0x971ec8] */ FPUSH(R_F32((u32)(0x971ec8u)));
    /* 0073e758: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0073e75c: fld dword ptr [0x971ed0] */ FPUSH(R_F32((u32)(0x971ed0u)));
    /* 0073e762: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0073e766: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0073e76a: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0073e76d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073e76f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073e773: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073e777: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0073e77b: mov eax, ebp */ r_eax = r_ebp;
    /* 0073e77d: call 0x73e8d4 */ r_esp -= 4; W32(r_esp, 0x73e782u); f_0073e8d4();
    /* 0073e782: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x73e787u); f_004ac444();
    /* 0073e787: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0073e78b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0073e78f: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0073e792: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073e794: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0073e79c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0073e7a0: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 0073e7a8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0073e7ac: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x73e7b1u); f_0071d484();
    /* 0073e7b1: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x73e7b6u); f_00816d30();
    /* 0073e7b6: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0073e7b9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073e7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e7bd: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73e7c2u); f_00815f24();
    /* 0073e7c2: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e7c7: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x73e7ccu); f_007ac344();
    /* 0073e7cc: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0073e7d0: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073e7d4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0073e7d7: fadd dword ptr [eax*4 + 0x971e78] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x971e78u));
    /* 0073e7de: fsubr dword ptr [esp + 0x20] */ ST(0) = R_F32((u32)(r_esp+0x20u)) - ST(0);
    /* 0073e7e2: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0073e7e6: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e7e8: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x73e7edu); f_008443b4();
    /* 0073e7ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e7ee: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73e7f3u); f_007ac24c();
    /* 0073e7f3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0073e7f6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0073e7fa: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0073e7fe: fmul dword ptr [0x971ec0] */ ST(0) = ST(0) * R_F32((u32)(0x971ec0u));
    /* 0073e804: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 0073e808: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0073e80c: push 0x96f638 */ { u32 v = 0x96f638u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e811: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x73e816u); f_00816cb8();
    /* 0073e816: movsx eax, byte ptr [esi + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1u));
    /* 0073e81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e81b: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x73e820u); f_00815f24();
    /* 0073e820: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0073e824: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e826: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e82b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e82d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073e832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e833: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x73e838u); f_0071d58c();
    /* 0073e838: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073e83b:; BB(0x0073e83b);
    /* 0073e83b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073e83e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073e83f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073e840: ret 4 */ FN_RET(0x0073e6b4); r_esp += 8; return;
}

void f_0073e844(void) /* sub_73E844 */
{
    FN_ENTER(0x0073e844);
    /* 0073e844: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073e848: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0073e84c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e84f: mov edx, eax */ r_edx = r_eax;
    /* 0073e851: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0073e855: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073e859: fcom dword ptr [0x971ebc] */ fx_compare(ST(0), R_F32((u32)(0x971ebcu))); 
    /* 0073e85f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073e861: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073e862: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0073e866: jbe 0x73e86f */ if ((fC||fZ)) goto L_0073e86f;
L_0073e868:; BB(0x0073e868);
    /* 0073e868: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073e86a: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0073e86d: jmp 0x73e874 */ goto L_0073e874;
L_0073e86f:; BB(0x0073e86f);
    /* 0073e86f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073e871: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
L_0073e874:; BB(0x0073e874);
    /* 0073e874: fadd dword ptr [0x971eb8] */ ST(0) = ST(0) + R_F32((u32)(0x971eb8u));
    /* 0073e87a: fld dword ptr [0x971eb4] */ FPUSH(R_F32((u32)(0x971eb4u)));
    /* 0073e880: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0073e884: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073e886: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073e88a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073e88e: mov dword ptr [esp + 0x10], 0x3f570000 */ W32((u32)(r_esp+0x10u), 0x3f570000u);
    /* 0073e896: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0073e899: mov dword ptr [esp + 0x14], 0x3eca0000 */ W32((u32)(r_esp+0x14u), 0x3eca0000u);
    /* 0073e8a1: mov dword ptr [esp + 0x18], 0x3f750000 */ W32((u32)(r_esp+0x18u), 0x3f750000u);
    /* 0073e8a9: mov dword ptr [esp + 0x1c], 0x3eea0000 */ W32((u32)(r_esp+0x1cu), 0x3eea0000u);
    /* 0073e8b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e8b2: mov ecx, edx */ r_ecx = r_edx;
    /* 0073e8b4: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73e8b9u); f_0071bbb4();
    /* 0073e8b9: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e8bd: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073e8c1: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73e8c6u); f_0082b440();
    /* 0073e8c6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073e8c9: ret  */ FN_RET(0x0073e844); r_esp += 4; return;
}

void f_0073e84c(void) /* sub_73E84C */
{
    FN_ENTER(0x0073e84c);
    /* 0073e84c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e84f: mov edx, eax */ r_edx = r_eax;
    /* 0073e851: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0073e855: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073e859: fcom dword ptr [0x971ebc] */ fx_compare(ST(0), R_F32((u32)(0x971ebcu))); 
    /* 0073e85f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073e861: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073e862: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0073e866: jbe 0x73e86f */ if ((fC||fZ)) goto L_0073e86f;
L_0073e868:; BB(0x0073e868);
    /* 0073e868: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073e86a: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0073e86d: jmp 0x73e874 */ goto L_0073e874;
L_0073e86f:; BB(0x0073e86f);
    /* 0073e86f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073e871: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
L_0073e874:; BB(0x0073e874);
    /* 0073e874: fadd dword ptr [0x971eb8] */ ST(0) = ST(0) + R_F32((u32)(0x971eb8u));
    /* 0073e87a: fld dword ptr [0x971eb4] */ FPUSH(R_F32((u32)(0x971eb4u)));
    /* 0073e880: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0073e884: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073e886: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073e88a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073e88e: mov dword ptr [esp + 0x10], 0x3f570000 */ W32((u32)(r_esp+0x10u), 0x3f570000u);
    /* 0073e896: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0073e899: mov dword ptr [esp + 0x14], 0x3eca0000 */ W32((u32)(r_esp+0x14u), 0x3eca0000u);
    /* 0073e8a1: mov dword ptr [esp + 0x18], 0x3f750000 */ W32((u32)(r_esp+0x18u), 0x3f750000u);
    /* 0073e8a9: mov dword ptr [esp + 0x1c], 0x3eea0000 */ W32((u32)(r_esp+0x1cu), 0x3eea0000u);
    /* 0073e8b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e8b2: mov ecx, edx */ r_ecx = r_edx;
    /* 0073e8b4: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73e8b9u); f_0071bbb4();
    /* 0073e8b9: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e8bd: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073e8c1: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73e8c6u); f_0082b440();
    /* 0073e8c6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073e8c9: ret  */ FN_RET(0x0073e84c); r_esp += 4; return;
}

void f_0073e8cc(void) /* sub_73E8CC */
{
    FN_ENTER(0x0073e8cc);
    /* 0073e8cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073e8d0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0073e8d4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e8d7: mov edx, eax */ r_edx = r_eax;
    /* 0073e8d9: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0073e8dd: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073e8e1: fcom dword ptr [0x971ea0] */ fx_compare(ST(0), R_F32((u32)(0x971ea0u))); 
    /* 0073e8e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073e8e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073e8ea: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0073e8ee: jae 0x73e8f7 */ if (!fC) goto L_0073e8f7;
L_0073e8f0:; BB(0x0073e8f0);
    /* 0073e8f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073e8f2: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0073e8f5: jmp 0x73e8fc */ goto L_0073e8fc;
L_0073e8f7:; BB(0x0073e8f7);
    /* 0073e8f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073e8f9: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
L_0073e8fc:; BB(0x0073e8fc);
    /* 0073e8fc: fadd dword ptr [0x971e9c] */ ST(0) = ST(0) + R_F32((u32)(0x971e9cu));
    /* 0073e902: fld dword ptr [0x971e98] */ FPUSH(R_F32((u32)(0x971e98u)));
    /* 0073e908: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0073e90c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073e90e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073e912: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073e916: mov dword ptr [esp + 0x10], 0x3f390000 */ W32((u32)(r_esp+0x10u), 0x3f390000u);
    /* 0073e91e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0073e921: mov dword ptr [esp + 0x14], 0x3eca0000 */ W32((u32)(r_esp+0x14u), 0x3eca0000u);
    /* 0073e929: mov dword ptr [esp + 0x18], 0x3f570000 */ W32((u32)(r_esp+0x18u), 0x3f570000u);
    /* 0073e931: mov dword ptr [esp + 0x1c], 0x3eea0000 */ W32((u32)(r_esp+0x1cu), 0x3eea0000u);
    /* 0073e939: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e93a: mov ecx, edx */ r_ecx = r_edx;
    /* 0073e93c: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73e941u); f_0071bbb4();
    /* 0073e941: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e945: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073e949: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73e94eu); f_0082b440();
    /* 0073e94e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073e951: ret  */ FN_RET(0x0073e8cc); r_esp += 4; return;
}

void f_0073e8d4(void) /* sub_73E8D4 */
{
    FN_ENTER(0x0073e8d4);
    /* 0073e8d4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e8d7: mov edx, eax */ r_edx = r_eax;
    /* 0073e8d9: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0073e8dd: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073e8e1: fcom dword ptr [0x971ea0] */ fx_compare(ST(0), R_F32((u32)(0x971ea0u))); 
    /* 0073e8e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073e8e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073e8ea: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0073e8ee: jae 0x73e8f7 */ if (!fC) goto L_0073e8f7;
L_0073e8f0:; BB(0x0073e8f0);
    /* 0073e8f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073e8f2: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0073e8f5: jmp 0x73e8fc */ goto L_0073e8fc;
L_0073e8f7:; BB(0x0073e8f7);
    /* 0073e8f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073e8f9: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
L_0073e8fc:; BB(0x0073e8fc);
    /* 0073e8fc: fadd dword ptr [0x971e9c] */ ST(0) = ST(0) + R_F32((u32)(0x971e9cu));
    /* 0073e902: fld dword ptr [0x971e98] */ FPUSH(R_F32((u32)(0x971e98u)));
    /* 0073e908: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0073e90c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073e90e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073e912: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073e916: mov dword ptr [esp + 0x10], 0x3f390000 */ W32((u32)(r_esp+0x10u), 0x3f390000u);
    /* 0073e91e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0073e921: mov dword ptr [esp + 0x14], 0x3eca0000 */ W32((u32)(r_esp+0x14u), 0x3eca0000u);
    /* 0073e929: mov dword ptr [esp + 0x18], 0x3f570000 */ W32((u32)(r_esp+0x18u), 0x3f570000u);
    /* 0073e931: mov dword ptr [esp + 0x1c], 0x3eea0000 */ W32((u32)(r_esp+0x1cu), 0x3eea0000u);
    /* 0073e939: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e93a: mov ecx, edx */ r_ecx = r_edx;
    /* 0073e93c: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73e941u); f_0071bbb4();
    /* 0073e941: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073e945: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073e949: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73e94eu); f_0082b440();
    /* 0073e94e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073e951: ret  */ FN_RET(0x0073e8d4); r_esp += 4; return;
}

void f_0073e954(void) /* sub_73E954 */
{
    FN_ENTER(0x0073e954);
    /* 0073e954: movsx edx, byte ptr [esp + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 0073e959: movsx eax, byte ptr [ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0073e95c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073e95e: je 0x73e97c */ if (fZ) goto L_0073e97c;
L_0073e960:; BB(0x0073e960);
    /* 0073e960: jle 0x73e96b */ if ((fZ||fS!=fO)) goto L_0073e96b;
L_0073e962:; BB(0x0073e962);
    /* 0073e962: mov dword ptr [ecx + 8], 0x41200000 */ W32((u32)(r_ecx+0x8u), 0x41200000u);
    /* 0073e969: jmp 0x73e972 */ goto L_0073e972;
L_0073e96b:; BB(0x0073e96b);
    /* 0073e96b: mov dword ptr [ecx + 8], 0xc1200000 */ W32((u32)(r_ecx+0x8u), 0xc1200000u);
L_0073e972:; BB(0x0073e972);
    /* 0073e972: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0073e974: mov eax, 1 */ r_eax = 0x1u;
    /* 0073e979: ret 4 */ FN_RET(0x0073e954); r_esp += 8; return;
L_0073e97c:; BB(0x0073e97c);
    /* 0073e97c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e97e: ret 4 */ FN_RET(0x0073e954); r_esp += 8; return;
}

void f_0073e984(void) /* sub_73E984 */
{
    FN_ENTER(0x0073e984);
    /* 0073e984: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 0073e989: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 0073e98c: mov eax, 1 */ r_eax = 0x1u;
    /* 0073e991: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0073e994: ret 4 */ FN_RET(0x0073e984); r_esp += 8; return;
}

void f_0073e998(void) /* sub_73E998 */
{
    FN_ENTER(0x0073e998);
    /* 0073e998: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e999: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073e99b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073e99d: call 0x73e9bc */ r_esp -= 4; W32(r_esp, 0x73e9a2u); f_0073e9bc();
    /* 0073e9a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073e9a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073e9a8: jne 0x73e9ae */ if (!fZ) goto L_0073e9ae;
L_0073e9aa:; BB(0x0073e9aa);
    /* 0073e9aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073e9ab: ret 4 */ FN_RET(0x0073e998); r_esp += 8; return;
L_0073e9ae:; BB(0x0073e9ae);
    /* 0073e9ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073e9af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73e9b4u); f_005c2f74();
    /* 0073e9b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073e9b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073e9b6: ret 4 */ FN_RET(0x0073e998); r_esp += 8; return;
}

void f_0073e9bc(void) /* sub_73E9BC */
{
    FN_ENTER(0x0073e9bc);
    /* 0073e9bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073e9bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0073e9bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e9c1: push 0x8f1fdc */ { u32 v = 0x8f1fdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073e9c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073e9cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073e9cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073e9d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073e9d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073e9da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073e9dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073e9e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073e9e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073e9e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073e9e9: mov dword ptr [ecx], 0xb41250 */ W32((u32)(r_ecx), 0xb41250u);
    /* 0073e9ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073e9f6: call 0x7421c4 */ r_esp -= 4; W32(r_esp, 0x73e9fbu); f_007421c4();
    /* 0073e9fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073e9fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ea05: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ea07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ea08: ret  */ FN_RET(0x0073e9bc); r_esp += 4; return;
}

void f_0073ea0c(void) /* sub_73EA0C */
{
    FN_ENTER(0x0073ea0c);
    /* 0073ea0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073ea0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea11: push 0x8f2004 */ { u32 v = 0x8f2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073ea1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073ea24: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073ea27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073ea2a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073ea2d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073ea30: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073ea33: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0073ea36: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0073ea3b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0073ea42: lea ecx, [eax + edx + 1] */ r_ecx = (u32)(r_eax+r_edx+0x1u);
    /* 0073ea46: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0073ea49: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0073ea4c: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea4e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73ea53u); f_005caba4();
    /* 0073ea53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073ea54: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073ea57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ea59: je 0x73ea92 */ if (fZ) goto L_0073ea92;
L_0073ea5b:; BB(0x0073ea5b);
    /* 0073ea5b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0073ea62: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073ea69: push 0x9f335c */ { u32 v = 0x9f335cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073ea71: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073ea74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea75: call 0x73ea98 */ r_esp -= 4; W32(r_esp, 0x73ea7au); f_0073ea98();
    /* 0073ea7a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073ea7d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073ea84:; BB(0x0073ea84);
    /* 0073ea84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073ea87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ea8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ea90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ea91: ret  */ FN_RET(0x0073ea0c); r_esp += 4; return;
L_0073ea92:; BB(0x0073ea92);
    /* 0073ea92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ea94: jmp 0x73ea84 */ goto L_0073ea84;
}

void f_0073ea98(void) /* sub_73EA98 */
{
    FN_ENTER(0x0073ea98);
    /* 0073ea98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ea99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073ea9b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0073eaa0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73eaa5u); f_0073ec50();
    /* 0073eaa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073eaa6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073eaaa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073eaac: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073eab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073eab3: call 0x742174 */ r_esp -= 4; W32(r_esp, 0x73eab8u); f_00742174();
    /* 0073eab8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073eabc: mov dword ptr [ebx], 0xb41250 */ W32((u32)(r_ebx), 0xb41250u);
    /* 0073eac2: mov edx, dword ptr [0x9f3358] */ r_edx = R32((u32)(0x9f3358u));
    /* 0073eac8: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0073eacb: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
    /* 0073eacf: mov eax, ebx */ r_eax = r_ebx;
    /* 0073ead1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073ead2: ret 8 */ FN_RET(0x0073ea98); r_esp += 12; return;
}

void f_0073ead8(void) /* sub_73EAD8 */
{
    FN_ENTER(0x0073ead8);
    /* 0073ead8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ead9: mov esi, ecx */ r_esi = r_ecx;
    /* 0073eadb: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eadd: call 0x742430 */ r_esp -= 4; W32(r_esp, 0x73eae2u); f_00742430();
    /* 0073eae2: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eae4: call 0x73eb28 */ r_esp -= 4; W32(r_esp, 0x73eae9u); f_0073eb28();
    /* 0073eae9: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eaeb: call 0x74253c */ r_esp -= 4; W32(r_esp, 0x73eaf0u); f_0074253c();
    /* 0073eaf0: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 0073eaf5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73eafau); f_0073ec50();
    /* 0073eafa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073eafb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073eafc: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eafe: call 0x7426d8 */ r_esp -= 4; W32(r_esp, 0x73eb03u); f_007426d8();
    /* 0073eb03: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eb05: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73eb0au); f_00710db4();
    /* 0073eb0a: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eb0c: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x73eb11u); f_00710ee4();
    /* 0073eb11: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073eb14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb15: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eb17: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x73eb1cu); f_0072a5ec();
    /* 0073eb1c: mov ecx, esi */ r_ecx = r_esi;
    /* 0073eb1e: call 0x7429b0 */ r_esp -= 4; W32(r_esp, 0x73eb23u); f_007429b0();
    /* 0073eb23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073eb24: ret  */ FN_RET(0x0073ead8); r_esp += 4; return;
}

void f_0073eb28(void) /* sub_73EB28 */
{
    FN_ENTER(0x0073eb28);
    /* 0073eb28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073eb2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073eb2d: call 0x7422c4 */ r_esp -= 4; W32(r_esp, 0x73eb32u); f_007422c4();
    /* 0073eb32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073eb34: call 0x742404 */ r_esp -= 4; W32(r_esp, 0x73eb39u); f_00742404();
    /* 0073eb39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073eb3a: ret  */ FN_RET(0x0073eb28); r_esp += 4; return;
}

void f_0073eb3c(void) /* sub_73EB3C */
{
    FN_ENTER(0x0073eb3c);
    /* 0073eb3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb3e: mov edi, ecx */ r_edi = r_ecx;
    /* 0073eb40: mov ecx, edi */ r_ecx = r_edi;
    /* 0073eb42: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x73eb47u); f_00712644();
    /* 0073eb47: mov esi, eax */ r_esi = r_eax;
    /* 0073eb49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb4a: mov ecx, edi */ r_ecx = r_edi;
    /* 0073eb4c: call 0x73eb60 */ r_esp -= 4; W32(r_esp, 0x73eb51u); f_0073eb60();
    /* 0073eb51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb52: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0073eb55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb56: mov ecx, edi */ r_ecx = r_edi;
    /* 0073eb58: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73eb5du); f_0072a648();
    /* 0073eb5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073eb5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073eb5f: ret  */ FN_RET(0x0073eb3c); r_esp += 4; return;
}

void f_0073eb60(void) /* sub_73EB60 */
{
    FN_ENTER(0x0073eb60);
    /* 0073eb60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073eb61: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073eb64: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0073eb68: fld dword ptr [0x971f18] */ FPUSH(R_F32((u32)(0x971f18u)));
    /* 0073eb6e: fdiv dword ptr [ecx + 0x54] */ ST(0) = ST(0) / R_F32((u32)(r_ecx+0x54u));
    /* 0073eb71: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0073eb75: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0073eb7a: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x73eb7fu); f_0082bb30();
    /* 0073eb7f: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0073eb85: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x73eb8au); f_00829cc8();
    /* 0073eb8a: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0073eb8d: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 0073eb92: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x73eb97u); f_0082bb60();
    /* 0073eb97: fld dword ptr [0x971f14] */ FPUSH(R_F32((u32)(0x971f14u)));
    /* 0073eb9d: fld dword ptr [0x971f10] */ FPUSH(R_F32((u32)(0x971f10u)));
    /* 0073eba3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0073eba6: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0073eba9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0073ebac: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0073ebaf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0073ebb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073ebb5: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 0073ebb8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073ebbc: fadd dword ptr [edi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x14u));
    /* 0073ebbf: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0073ebc7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073ebcb: mov dword ptr [esp + 0x14], 0x3f340000 */ W32((u32)(r_esp+0x14u), 0x3f340000u);
    /* 0073ebd3: mov dword ptr [esp + 0x18], 0x3ee40000 */ W32((u32)(r_esp+0x18u), 0x3ee40000u);
    /* 0073ebdb: mov dword ptr [esp + 0x1c], 0x3f620000 */ W32((u32)(r_esp+0x1cu), 0x3f620000u);
    /* 0073ebe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ebe4: mov ecx, edi */ r_ecx = r_edi;
    /* 0073ebe6: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x73ebebu); f_0071bbb4();
    /* 0073ebeb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ebec: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0073ebf0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073ebf3: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0073ebf7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73ebfcu); f_0082b440();
    /* 0073ebfc: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x73ec01u); f_004ac444();
    /* 0073ec01: lea edx, [edi + 0x10] */ r_edx = (u32)(r_edi+0x10u);
    /* 0073ec04: lea eax, [edi + 0x18] */ r_eax = (u32)(r_edi+0x18u);
    /* 0073ec07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec0a: call 0x712914 */ r_esp -= 4; W32(r_esp, 0x73ec0fu); f_00712914();
    /* 0073ec0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ec12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ec14: je 0x73ec32 */ if (fZ) goto L_0073ec32;
L_0073ec16:; BB(0x0073ec16);
    /* 0073ec16: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec18: call 0x712964 */ r_esp -= 4; W32(r_esp, 0x73ec1du); f_00712964();
    /* 0073ec1d: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0073ec21: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec23: call 0x7129a8 */ r_esp -= 4; W32(r_esp, 0x73ec28u); f_007129a8();
    /* 0073ec28: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec2a: call 0x712bc0 */ r_esp -= 4; W32(r_esp, 0x73ec2fu); f_00712bc0();
    /* 0073ec2f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073ec32:; BB(0x0073ec32);
    /* 0073ec32: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073ec35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073ec36: ret 4 */ FN_RET(0x0073eb60); r_esp += 8; return;
}

void f_0073ec3c(void) /* sub_73EC3C */
{
    FN_ENTER(0x0073ec3c);
    /* 0073ec3c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0073ec40: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0073ec43: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073ec45: lea eax, [ecx + ecx + 0x971f40] */ r_eax = (u32)(r_ecx+r_ecx+0x971f40u);
    /* 0073ec4c: ret  */ FN_RET(0x0073ec3c); r_esp += 4; return;
}

void f_0073ec50(void) /* sub_73EC50 */
{
    FN_ENTER(0x0073ec50);
    /* 0073ec50: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073ec54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073ec56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073ec58: lea eax, [eax + eax + 0x971f40] */ r_eax = (u32)(r_eax+r_eax+0x971f40u);
    /* 0073ec5f: ret  */ FN_RET(0x0073ec50); r_esp += 4; return;
}

void f_0073ec54(void) /* sub_73EC54 */
{
    FN_ENTER(0x0073ec54);
    /* 0073ec54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073ec56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073ec58: lea eax, [eax + eax + 0x971f40] */ r_eax = (u32)(r_eax+r_eax+0x971f40u);
    /* 0073ec5f: ret  */ FN_RET(0x0073ec54); r_esp += 4; return;
}

void f_0073ec60(void) /* sub_73EC60 */
{
    FN_ENTER(0x0073ec60);
    /* 0073ec60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ec61: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073ec65: call 0x73ec54 */ r_esp -= 4; W32(r_esp, 0x73ec6au); f_0073ec54();
    /* 0073ec6a: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0073ec6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073ec6e: ret  */ FN_RET(0x0073ec60); r_esp += 4; return;
}

void f_0073ec70(void) /* sub_73EC70 */
{
    FN_ENTER(0x0073ec70);
    /* 0073ec70: mov eax, 0x971f24 */ r_eax = 0x971f24u;
    /* 0073ec75: ret  */ FN_RET(0x0073ec70); r_esp += 4; return;
}

void f_0073ec78(void) /* sub_73EC78 */
{
    FN_ENTER(0x0073ec78);
    /* 0073ec78: mov eax, 0x971f2c */ r_eax = 0x971f2cu;
    /* 0073ec7d: ret  */ FN_RET(0x0073ec78); r_esp += 4; return;
}

void f_0073ec80(void) /* sub_73EC80 */
{
    FN_ENTER(0x0073ec80);
    /* 0073ec80: mov eax, 0x971f34 */ r_eax = 0x971f34u;
    /* 0073ec85: ret  */ FN_RET(0x0073ec80); r_esp += 4; return;
}

void f_0073ec88(void) /* sub_73EC88 */
{
    FN_ENTER(0x0073ec88);
    /* 0073ec88: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x73ec8du); f_00719914();
    /* 0073ec8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ec8f: jne 0x73ec92 */ if (!fZ) goto L_0073ec92;
L_0073ec91:; BB(0x0073ec91);
    /* 0073ec91: ret  */ FN_RET(0x0073ec88); r_esp += 4; return;
L_0073ec92:; BB(0x0073ec92);
    /* 0073ec92: fld dword ptr [0x972ce8] */ FPUSH(R_F32((u32)(0x972ce8u)));
    /* 0073ec98: fld dword ptr [0xa98528] */ FPUSH(R_F32((u32)(0xa98528u)));
    /* 0073ec9e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0073eca0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073eca4: fld dword ptr [eax + 0x54] */ FPUSH(R_F32((u32)(r_eax+0x54u)));
    /* 0073eca7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0073ecab: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0073ecae: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0073ecb1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073ecb3: fstp dword ptr [0xa98528] */ W_F32((u32)(0xa98528u), ST(0)); FPOP();
    /* 0073ecb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ecbb: je 0x73ecda */ if (fZ) goto L_0073ecda;
L_0073ecbd:; BB(0x0073ecbd);
    /* 0073ecbd: fld dword ptr [edx + 0x54] */ FPUSH(R_F32((u32)(r_edx+0x54u)));
    /* 0073ecc0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0073ecc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073ecc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073ecc5: jae 0x73eccc */ if (!fC) goto L_0073eccc;
L_0073ecc7:; BB(0x0073ecc7);
    /* 0073ecc7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0073ecc9: fst dword ptr [edx + 0x54] */ W_F32((u32)(r_edx+0x54u), ST(0));
L_0073eccc:; BB(0x0073eccc);
    /* 0073eccc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ecce: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0073ecd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ecd3: jne 0x73ecbd */ if (!fZ) goto L_0073ecbd;
L_0073ecd5:; BB(0x0073ecd5);
    /* 0073ecd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ecd7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ecd9: ret  */ FN_RET(0x0073ec88); r_esp += 4; return;
L_0073ecda:; BB(0x0073ecda);
    /* 0073ecda: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ecdc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ecde: ret  */ FN_RET(0x0073ec88); r_esp += 4; return;
}

void f_0073ece0(void) /* sub_73ECE0 */
{
    FN_ENTER(0x0073ece0);
    /* 0073ece0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ece1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073ece2: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0073ece6: mov dword ptr [edi + 0x54], 0xbfa66666 */ W32((u32)(r_edi+0x54u), 0xbfa66666u);
    /* 0073eced: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x73ecf2u); f_00719914();
    /* 0073ecf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ecf4: je 0x73edc5 */ if (fZ) goto L_0073edc5;
L_0073ecfa:; BB(0x0073ecfa);
    /* 0073ecfa: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0073ecfd: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073ecff: je 0x73edc5 */ if (fZ) goto L_0073edc5;
L_0073ed05:; BB(0x0073ed05);
    /* 0073ed05: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0073ed08: cmp edi, dword ptr [ecx + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ed0b: je 0x73edd6 */ if (fZ) goto L_0073edd6;
L_0073ed11:; BB(0x0073ed11);
    /* 0073ed11: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0073ed14: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0073ed17: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0073ed1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ed1c: je 0x73edc8 */ if (fZ) goto L_0073edc8;
L_0073ed22:; BB(0x0073ed22);
    /* 0073ed22: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0073ed25: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_0073ed28:; BB(0x0073ed28);
    /* 0073ed28: fld dword ptr [0x972ce0] */ FPUSH(R_F32((u32)(0x972ce0u)));
    /* 0073ed2e: fld dword ptr [0xa98528] */ FPUSH(R_F32((u32)(0xa98528u)));
    /* 0073ed34: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0073ed36: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 0073ed39: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0073ed3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073ed3e: fstp dword ptr [0xa98528] */ W_F32((u32)(0xa98528u), ST(0)); FPOP();
    /* 0073ed44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ed46: je 0x73ed70 */ if (fZ) goto L_0073ed70;
L_0073ed48:; BB(0x0073ed48);
    /* 0073ed48: fcom dword ptr [edx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x1cu))); 
    /* 0073ed4b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073ed4d: mov ebp, edx */ r_ebp = r_edx;
    /* 0073ed4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073ed50: jae 0x73ed8b */ if (!fC) goto L_0073ed8b;
L_0073ed52:; BB(0x0073ed52);
    /* 0073ed52: fld dword ptr [edx + 0x54] */ FPUSH(R_F32((u32)(r_edx+0x54u)));
    /* 0073ed55: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0073ed57: fstp dword ptr [edx + 0x54] */ W_F32((u32)(r_edx+0x54u), ST(0)); FPOP();
    /* 0073ed5a: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0073ed5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ed5f: jne 0x73ed48 */ if (!fZ) goto L_0073ed48;
L_0073ed61:; BB(0x0073ed61);
    /* 0073ed61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ed63: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ed65: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0073ed68: mov eax, ebp */ r_eax = r_ebp;
    /* 0073ed6a: mov ecx, eax */ r_ecx = r_eax;
    /* 0073ed6c: mov eax, edi */ r_eax = r_edi;
    /* 0073ed6e: jmp 0x73ed78 */ goto L_0073ed78;
L_0073ed70:; BB(0x0073ed70);
    /* 0073ed70: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ed72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ed74: mov ecx, eax */ r_ecx = r_eax;
    /* 0073ed76: mov eax, edi */ r_eax = r_edi;
L_0073ed78:; BB(0x0073ed78);
    /* 0073ed78: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0073ed7b: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0073ed7e: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0073ed85: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0073ed88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ed89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073ed8a: ret  */ FN_RET(0x0073ece0); r_esp += 4; return;
L_0073ed8b:; BB(0x0073ed8b);
    /* 0073ed8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073ed8d: cmp edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073ed90: jne 0x73ed95 */ if (!fZ) goto L_0073ed95;
L_0073ed92:; BB(0x0073ed92);
    /* 0073ed92: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
L_0073ed95:; BB(0x0073ed95);
    /* 0073ed95: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0073ed98: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 0073ed9b: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0073ed9e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0073eda1: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0073eda4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073eda6: je 0x73edab */ if (fZ) goto L_0073edab;
L_0073eda8:; BB(0x0073eda8);
    /* 0073eda8: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
L_0073edab:; BB(0x0073edab);
    /* 0073edab: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 0073edae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073edb0: je 0x73edfc */ if (fZ) goto L_0073edfc;
L_0073edb2:; BB(0x0073edb2);
    /* 0073edb2: fld dword ptr [edi + 0x54] */ FPUSH(R_F32((u32)(r_edi+0x54u)));
L_0073edb5:; BB(0x0073edb5);
    /* 0073edb5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0073edb7: fst dword ptr [edi + 0x54] */ W_F32((u32)(r_edi+0x54u), ST(0));
    /* 0073edba: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0073edbd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073edbf: jne 0x73edb5 */ if (!fZ) goto L_0073edb5;
L_0073edc1:; BB(0x0073edc1);
    /* 0073edc1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073edc3: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073edc5:; BB(0x0073edc5);
    /* 0073edc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073edc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073edc7: ret  */ FN_RET(0x0073ece0); r_esp += 4; return;
L_0073edc8:; BB(0x0073edc8);
    /* 0073edc8: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0073edcb: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0073edce: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0073edd1: jmp 0x73ed28 */ goto L_0073ed28;
L_0073edd6:; BB(0x0073edd6);
    /* 0073edd6: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0073edd9: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0073eddc: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0073eddf: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 0073ede6: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0073ede9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073edeb: je 0x73ed28 */ if (fZ) goto L_0073ed28;
L_0073edf1:; BB(0x0073edf1);
    /* 0073edf1: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0073edf4: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0073edf7: jmp 0x73ed28 */ goto L_0073ed28;
L_0073edfc:; BB(0x0073edfc);
    /* 0073edfc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073edfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073edff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073ee00: ret  */ FN_RET(0x0073ece0); r_esp += 4; return;
}

void f_0073ee04(void) /* sub_73EE04 */
{
    FN_ENTER(0x0073ee04);
    /* 0073ee04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073ee07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073ee09: call 0x73ee28 */ r_esp -= 4; W32(r_esp, 0x73ee0eu); f_0073ee28();
    /* 0073ee0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073ee12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073ee14: jne 0x73ee1a */ if (!fZ) goto L_0073ee1a;
L_0073ee16:; BB(0x0073ee16);
    /* 0073ee16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073ee17: ret 4 */ FN_RET(0x0073ee04); r_esp += 8; return;
L_0073ee1a:; BB(0x0073ee1a);
    /* 0073ee1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73ee20u); f_005c2f74();
    /* 0073ee20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073ee21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073ee22: ret 4 */ FN_RET(0x0073ee04); r_esp += 8; return;
}

void f_0073ee28(void) /* sub_73EE28 */
{
    FN_ENTER(0x0073ee28);
    /* 0073ee28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee29: mov ebp, esp */ r_ebp = r_esp;
    /* 0073ee2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee2d: push 0x8f2020 */ { u32 v = 0x8f2020u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073ee38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073ee40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073ee43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073ee46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073ee49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073ee4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073ee4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073ee52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073ee55: mov dword ptr [ecx], 0xb412d8 */ W32((u32)(r_ecx), 0xb412d8u);
    /* 0073ee5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073ee62: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x73ee67u); f_00710c28();
    /* 0073ee67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073ee6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073ee71: mov esp, ebp */ r_esp = r_ebp;
    /* 0073ee73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073ee74: ret  */ FN_RET(0x0073ee28); r_esp += 4; return;
}

void f_0073ee78(void) /* sub_73EE78 */
{
    FN_ENTER(0x0073ee78);
    /* 0073ee78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee79: mov ebp, esp */ r_ebp = r_esp;
    /* 0073ee7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee7d: push 0x8f2048 */ { u32 v = 0x8f2048u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073ee88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ee89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073ee90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073ee93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073ee96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073ee99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073ee9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073ee9f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073eea1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0073eea8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73eeadu); f_005caba4();
    /* 0073eead: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073eeae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0073eeb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073eeb3: je 0x73eee6 */ if (fZ) goto L_0073eee6;
L_0073eeb5:; BB(0x0073eeb5);
    /* 0073eeb5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0073eebc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073eec3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073eec6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073eec9: call 0x73eeec */ r_esp -= 4; W32(r_esp, 0x73eeceu); f_0073eeec();
    /* 0073eece: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073eed1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0073eed8:; BB(0x0073eed8);
    /* 0073eed8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073eedb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073eee2: mov esp, ebp */ r_esp = r_ebp;
    /* 0073eee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073eee5: ret  */ FN_RET(0x0073ee78); r_esp += 4; return;
L_0073eee6:; BB(0x0073eee6);
    /* 0073eee6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073eee8: jmp 0x73eed8 */ goto L_0073eed8;
}

void f_0073eeec(void) /* sub_73EEEC */
{
    FN_ENTER(0x0073eeec);
    /* 0073eeec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073eeed: mov ebp, esp */ r_ebp = r_esp;
    /* 0073eeef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073eef1: push 0x8f2064 */ { u32 v = 0x8f2064u; r_esp -= 4; W32(r_esp, v); }
    /* 0073eef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073eefc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073eefd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073ef04: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073ef07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073ef0a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073ef0d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073ef10: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073ef13: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0073ef16: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0073ef19: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef1b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73ef20u); f_0073ec50();
    /* 0073ef20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073ef21: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0073ef24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef25: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0073ef28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef29: push 0x9f33c4 */ { u32 v = 0x9f33c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef2e: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x73ef33u); f_00710d30();
    /* 0073ef33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073ef3a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0073ef3d: mov dword ptr [edx], 0xb412d8 */ W32((u32)(r_edx), 0xb412d8u);
    /* 0073ef43: mov eax, dword ptr [0x9f33c0] */ r_eax = R32((u32)(0x9f33c0u));
    /* 0073ef48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef4a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0073ef4d: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x73ef52u); f_007930dc();
    /* 0073ef52: mov ebx, eax */ r_ebx = r_eax;
    /* 0073ef54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef55: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x73ef5au); f_007ac344();
    /* 0073ef5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073ef5d: fld dword ptr [0x972d04] */ FPUSH(R_F32((u32)(0x972d04u)));
    /* 0073ef63: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0073ef66: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0073ef69: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0073ef6c: fadd dword ptr [eax*4 + 0x972cf0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x972cf0u));
    /* 0073ef73: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 0073ef76: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073ef78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef79: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073ef7c: call 0x760aac */ r_esp -= 4; W32(r_esp, 0x73ef81u); f_00760aac();
    /* 0073ef81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073ef82: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0073ef85: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 0073ef88: fstp dword ptr [edx + 0x60] */ W_F32((u32)(r_edx+0x60u), ST(0)); FPOP();
    /* 0073ef8b: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0073ef8e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0073ef90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073ef93: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x73ef98u); f_0072db60();
    /* 0073ef98: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0073ef9b: fadd dword ptr [0x972d00] */ ST(0) = ST(0) + R_F32((u32)(0x972d00u));
    /* 0073efa1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0073efa4: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0073efa7: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073efaa: call 0x760e58 */ r_esp -= 4; W32(r_esp, 0x73efafu); f_00760e58();
    /* 0073efaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073efb0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0073efb3: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0073efb6: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x73efbbu); f_00710f64();
    /* 0073efbb: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0073efc0: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0073efc3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073efc6: jle 0x73efd8 */ if ((fZ||fS!=fO)) goto L_0073efd8;
L_0073efc8:; BB(0x0073efc8);
    /* 0073efc8: mov dword ptr [edx + 0x64], 0x3f400000 */ W32((u32)(r_edx+0x64u), 0x3f400000u);
    /* 0073efcf: mov dword ptr [edx + 0x68], 0x3f400000 */ W32((u32)(r_edx+0x68u), 0x3f400000u);
    /* 0073efd6: jmp 0x73efe6 */ goto L_0073efe6;
L_0073efd8:; BB(0x0073efd8);
    /* 0073efd8: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0073efdf: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
L_0073efe6:; BB(0x0073efe6);
    /* 0073efe6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073efe9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073efec: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073efef: mov eax, edx */ r_eax = r_edx;
    /* 0073eff1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073eff4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073effb: mov esp, ebp */ r_esp = r_ebp;
    /* 0073effd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073effe: ret 4 */ FN_RET(0x0073eeec); r_esp += 8; return;
}

