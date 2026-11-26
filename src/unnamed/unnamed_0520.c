#include "protos.h"

void f_00520018(void)
{
    FN_ENTER(0x00520018);
    /* 00520018: cmp al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffu;   }
    /* 0052001a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052001d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052001f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00520021: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520023: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520025: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00520027: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520029: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052002b: mov edi, ebx */ r_edi = r_ebx;
    /* 0052002d: mov ebx, eax */ r_ebx = r_eax;
L_0052002f:; BB(0x0052002f);
    /* 0052002f: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 00520035: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 00520038: lea ecx, [ecx + ebx + 0x1c] */ r_ecx = (u32)(r_ecx+r_ebx+0x1cu);
    /* 0052003c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052003d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052003f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x520044u); f_00830aa0();
    /* 00520044: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520047: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052004a: cmp esi, dword ptr [edi + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520050: jl 0x52002f */ if ((fS!=fO)) goto L_0052002f;
L_00520052:; BB(0x00520052);
    /* 00520052: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00520056: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x00520018); r_esp += 4; return;
}

void f_00520030(void)
{
    FN_ENTER(0x00520030);
}

void f_0052003d(void)
{
    FN_ENTER(0x0052003d);
    goto L_0052003d;
L_0052002f:; BB(0x0052002f);
    /* 0052002f: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 00520035: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 00520038: lea ecx, [ecx + ebx + 0x1c] */ r_ecx = (u32)(r_ecx+r_ebx+0x1cu);
    /* 0052003c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
L_0052003d:; BB(0x0052003d);
    /* 0052003d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052003f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x520044u); f_00830aa0();
    /* 00520044: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520047: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0052004a: cmp esi, dword ptr [edi + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520050: jl 0x52002f */ if ((fS!=fO)) goto L_0052002f;
L_00520052:; BB(0x00520052);
    /* 00520052: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00520056: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x0052003d); r_esp += 4; return;
}

void f_00520041(void)
{
    FN_ENTER(0x00520041);
    /* 00520041: or dh, byte ptr [ecx] */ {  u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_ecx)); u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00520043: add byte ptr [ebx - 0x397cd33d], al */ { u32 ad = (u32)(r_ebx+0xc6832cc3u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00520049: add dword ptr [ebx], edi */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0052004b: mov bh, 0xa8 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0xa8u) & 0xffu) << 8);
    /* 0052004d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052004f: add byte ptr [ebp + ebx*8 - 0x75], bh */ { u32 ad = (u32)(r_ebp+r_ebx*8+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00520053: je 0x520079 */ if (fZ) goto L_00520079;
L_00520055:; BB(0x00520055);
    /* 00520055: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00520057: cmp al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffu;   }
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x00520041); r_esp += 4; return;
L_00520079:; BB(0x00520079);
    /* 00520079: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0052007a: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0052007c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0052007f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520081: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520083: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520085: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520087: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520089: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052008b: mov dword ptr [ebp + ebx*4 + 0x1c], edx */ W32((u32)(r_ebp+r_ebx*4+0x1cu), r_edx);
    /* 0052008f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520092: mov dword ptr [ebp + ebx*4 + 0x20], edx */ W32((u32)(r_ebp+r_ebx*4+0x20u), r_edx);
    /* 00520096: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00520099: mov dword ptr [ebp + ebx*4 + 0x24], edx */ W32((u32)(r_ebp+r_ebx*4+0x24u), r_edx);
    /* 0052009d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052009f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005200a2: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 005200a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005200aa: lea ebp, [ebx + esi] */ r_ebp = (u32)(r_ebx+r_esi);
    /* 005200ad: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 005200b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005200b3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005200b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005200b9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005200bc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005200bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005200c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5200c6u); f_0082f9c4();
    /* 005200c6: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 005200c9: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 005200cd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005200cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005200d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200d2: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5200d7u); f_00782b64();
    /* 005200d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005200da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005200db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005200dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005200de: ret 8 */ FN_RET(0x00520041); r_esp += 12; return;
}

void f_00520045(void)
{
    FN_ENTER(0x00520045);
    /* 00520045: ret  */ FN_RET(0x00520045); r_esp += 4; return;
}

void f_00520046(void)
{
    FN_ENTER(0x00520046);
    /* 00520046: sub al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00520048: mov byte ptr [ecx], 0x3b */ W8((u32)(r_ecx), 0x3bu);
    /* 0052004b: mov bh, 0xa8 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0xa8u) & 0xffu) << 8);
    /* 0052004d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052004f: add byte ptr [ebp + ebx*8 - 0x75], bh */ { u32 ad = (u32)(r_ebp+r_ebx*8+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00520053: je 0x520079 */ if (fZ) goto L_00520079;
L_00520055:; BB(0x00520055);
    /* 00520055: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00520057: cmp al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffu;   }
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x00520046); r_esp += 4; return;
L_00520079:; BB(0x00520079);
    /* 00520079: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0052007a: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0052007c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0052007f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520081: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520083: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520085: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520087: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520089: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052008b: mov dword ptr [ebp + ebx*4 + 0x1c], edx */ W32((u32)(r_ebp+r_ebx*4+0x1cu), r_edx);
    /* 0052008f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520092: mov dword ptr [ebp + ebx*4 + 0x20], edx */ W32((u32)(r_ebp+r_ebx*4+0x20u), r_edx);
    /* 00520096: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00520099: mov dword ptr [ebp + ebx*4 + 0x24], edx */ W32((u32)(r_ebp+r_ebx*4+0x24u), r_edx);
    /* 0052009d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052009f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005200a2: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 005200a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005200aa: lea ebp, [ebx + esi] */ r_ebp = (u32)(r_ebx+r_esi);
    /* 005200ad: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 005200b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005200b3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005200b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005200b9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005200bc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005200bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005200c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5200c6u); f_0082f9c4();
    /* 005200c6: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 005200c9: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 005200cd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005200cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005200d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200d2: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5200d7u); f_00782b64();
    /* 005200d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005200da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005200db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005200dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005200de: ret 8 */ FN_RET(0x00520046); r_esp += 12; return;
}

void f_0052004f(void)
{
    FN_ENTER(0x0052004f);
    /* 0052004f: add byte ptr [ebp + ebx*8 - 0x75], bh */ { u32 ad = (u32)(r_ebp+r_ebx*8+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00520053: je 0x520079 */ if (fZ) goto L_00520079;
L_00520055:; BB(0x00520055);
    /* 00520055: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00520057: cmp al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffu;   }
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x0052004f); r_esp += 4; return;
L_00520079:; BB(0x00520079);
    /* 00520079: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0052007a: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0052007c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0052007f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520081: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520083: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520085: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520087: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520089: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052008b: mov dword ptr [ebp + ebx*4 + 0x1c], edx */ W32((u32)(r_ebp+r_ebx*4+0x1cu), r_edx);
    /* 0052008f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520092: mov dword ptr [ebp + ebx*4 + 0x20], edx */ W32((u32)(r_ebp+r_ebx*4+0x20u), r_edx);
    /* 00520096: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00520099: mov dword ptr [ebp + ebx*4 + 0x24], edx */ W32((u32)(r_ebp+r_ebx*4+0x24u), r_edx);
    /* 0052009d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052009f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005200a2: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 005200a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005200aa: lea ebp, [ebx + esi] */ r_ebp = (u32)(r_ebx+r_esi);
    /* 005200ad: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 005200b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005200b3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005200b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005200b9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005200bc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005200bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005200c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5200c6u); f_0082f9c4();
    /* 005200c6: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 005200c9: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 005200cd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005200cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005200d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200d2: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5200d7u); f_00782b64();
    /* 005200d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005200da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005200db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005200dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005200de: ret 8 */ FN_RET(0x0052004f); r_esp += 12; return;
}

void f_00520054(void)
{
    FN_ENTER(0x00520054);
    /* 00520054: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00520056: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x00520054); r_esp += 4; return;
}

void f_00520055(void)
{
    FN_ENTER(0x00520055);
    /* 00520055: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00520057: cmp al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b) & 0xffu;   }
    /* 00520059: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x52005eu); f_0082faac();
    /* 0052005e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520063u); f_0082da80();
    /* 00520063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520067: ret  */ FN_RET(0x00520055); r_esp += 4; return;
}

void f_00520068(void) /* sub_520068 */
{
    FN_ENTER(0x00520068);
    /* 00520068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520069: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052006a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052006b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052006c: mov edi, ecx */ r_edi = r_ecx;
    /* 0052006e: mov ebp, dword ptr [edi + 0xa4] */ r_ebp = R32((u32)(r_edi+0xa4u));
    /* 00520074: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00520078: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0052007c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0052007f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520081: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520083: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520085: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520087: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520089: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052008b: mov dword ptr [ebp + ebx*4 + 0x1c], edx */ W32((u32)(r_ebp+r_ebx*4+0x1cu), r_edx);
    /* 0052008f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520092: mov dword ptr [ebp + ebx*4 + 0x20], edx */ W32((u32)(r_ebp+r_ebx*4+0x20u), r_edx);
    /* 00520096: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00520099: mov dword ptr [ebp + ebx*4 + 0x24], edx */ W32((u32)(r_ebp+r_ebx*4+0x24u), r_edx);
    /* 0052009d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052009f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005200a2: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 005200a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005200aa: lea ebp, [ebx + esi] */ r_ebp = (u32)(r_ebx+r_esi);
    /* 005200ad: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 005200b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005200b3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005200b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005200b9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005200bc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005200bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005200c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5200c6u); f_0082f9c4();
    /* 005200c6: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 005200c9: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 005200cd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005200cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005200d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200d2: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5200d7u); f_00782b64();
    /* 005200d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005200da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005200db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005200dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005200de: ret 8 */ FN_RET(0x00520068); r_esp += 12; return;
}

void f_00520070(void)
{
    FN_ENTER(0x00520070);
    /* 00520070: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00520071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00520073: add byte ptr [ebx - 0x74ebdbbc], cl */ { u32 ad = (u32)(r_ebx+0x8b142444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00520079: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0052007a: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0052007c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0052007f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520081: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520083: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520085: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520087: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520089: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052008b: mov dword ptr [ebp + ebx*4 + 0x1c], edx */ W32((u32)(r_ebp+r_ebx*4+0x1cu), r_edx);
    /* 0052008f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520092: mov dword ptr [ebp + ebx*4 + 0x20], edx */ W32((u32)(r_ebp+r_ebx*4+0x20u), r_edx);
    /* 00520096: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00520099: mov dword ptr [ebp + ebx*4 + 0x24], edx */ W32((u32)(r_ebp+r_ebx*4+0x24u), r_edx);
    /* 0052009d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052009f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005200a2: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 005200a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005200aa: lea ebp, [ebx + esi] */ r_ebp = (u32)(r_ebx+r_esi);
    /* 005200ad: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 005200b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005200b3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005200b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005200b9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005200bc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005200bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005200c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5200c6u); f_0082f9c4();
    /* 005200c6: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 005200c9: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 005200cd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005200cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005200d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200d2: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5200d7u); f_00782b64();
    /* 005200d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005200da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005200db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005200dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005200de: ret 8 */ FN_RET(0x00520070); r_esp += 12; return;
}

void f_0052007d(void)
{
    FN_ENTER(0x0052007d);
    /* 0052007d: sbb al, 0x12 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x12u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0052007f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520081: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520083: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520085: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520087: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520089: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052008b: mov dword ptr [ebp + ebx*4 + 0x1c], edx */ W32((u32)(r_ebp+r_ebx*4+0x1cu), r_edx);
    /* 0052008f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520092: mov dword ptr [ebp + ebx*4 + 0x20], edx */ W32((u32)(r_ebp+r_ebx*4+0x20u), r_edx);
    /* 00520096: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00520099: mov dword ptr [ebp + ebx*4 + 0x24], edx */ W32((u32)(r_ebp+r_ebx*4+0x24u), r_edx);
    /* 0052009d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052009f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005200a2: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 005200a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005200aa: lea ebp, [ebx + esi] */ r_ebp = (u32)(r_ebx+r_esi);
    /* 005200ad: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 005200b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005200b3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005200b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005200b9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005200bc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005200bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005200c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5200c6u); f_0082f9c4();
    /* 005200c6: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 005200c9: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 005200cd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005200cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005200d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200d2: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5200d7u); f_00782b64();
    /* 005200d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005200da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005200db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005200dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005200de: ret 8 */ FN_RET(0x0052007d); r_esp += 12; return;
}

void f_0052009c(void)
{
    FN_ENTER(0x0052009c);
    /* 0052009c: and al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 0052009e: adc byte ptr [ebp - 0x6074e4cc], cl */ { u32 ad = (u32)(r_ebp+0x9f8b1b34u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 005200a4: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 005200a5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005200a7: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005200a9: test byte ptr [ebp + 0x5589332c], 0 */ {  u32 a = R8((u32)(r_ebp+0x5589332cu)); u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 005200b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005200b3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005200b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005200b9: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005200bc: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005200bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005200c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5200c6u); f_0082f9c4();
    /* 005200c6: mov edi, dword ptr [edi + 0x60] */ r_edi = R32((u32)(r_edi+0x60u));
    /* 005200c9: lea eax, [ebx + esi + 8] */ r_eax = (u32)(r_ebx+r_esi+0x8u);
    /* 005200cd: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005200cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005200d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200d2: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x5200d7u); f_00782b64();
    /* 005200d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005200da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005200db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005200dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005200dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005200de: ret 8 */ FN_RET(0x0052009c); r_esp += 12; return;
}

void f_005200e4(void) /* sub_5200E4 */
{
    FN_ENTER(0x005200e4);
    /* 005200e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005200e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005200e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005200e7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005200e9: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005200ed: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005200f1: mov esi, dword ptr [ebp + 0xa4] */ r_esi = R32((u32)(r_ebp+0xa4u));
    /* 005200f7: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005200f9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005200fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005200fe: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00520100: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520102: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520104: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00520106: mov dword ptr [esi + edx*4], ecx */ W32((u32)(r_esi+r_edx*4), r_ecx);
    /* 00520109: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0052010c: mov dword ptr [esi + edx*4 + 4], ecx */ W32((u32)(r_esi+r_edx*4+0x4u), r_ecx);
    /* 00520110: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00520113: mov dword ptr [esi + edx*4 + 8], ecx */ W32((u32)(r_esi+r_edx*4+0x8u), r_ecx);
    /* 00520117: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0052011a: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00520120: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520122: lea esi, [edx + eax + 0x1c] */ r_esi = (u32)(r_edx+r_eax+0x1cu);
    /* 00520126: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00520128: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0052012a: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0052012d: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00520130: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00520133: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00520136: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520139: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 0052013c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052013d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052013e: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x520143u); f_00782b64();
    /* 00520143: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520146: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00520149: mov ecx, esi */ r_ecx = r_esi;
    /* 0052014b: mov edx, ebp */ r_edx = r_ebp;
    /* 0052014d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x520152u); f_0082ebac();
    /* 00520152: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520153: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520154: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520155: ret 8 */ FN_RET(0x005200e4); r_esp += 12; return;
}

void f_00520158(void) /* sub_520158 */
{
    FN_ENTER(0x00520158);
    /* 00520158: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520159: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052015a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052015d: mov esi, ecx */ r_esi = r_ecx;
    /* 0052015f: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00520163: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x520168u); f_0082d7b0();
    /* 00520168: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052016a: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x52016fu); f_00830cd8();
    /* 0052016f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00520172: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00520174: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520176: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52017bu); f_0082d8bc();
    /* 0052017b: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0052017e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00520181: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00520184: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520187: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00520189: fchs  */ ST(0) = -ST(0);
    /* 0052018b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052018e: fchs  */ ST(0) = -ST(0);
    /* 00520190: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00520194: fchs  */ ST(0) = -ST(0);
    /* 00520196: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0052019a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052019c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5201a1u); f_00830b74();
    /* 005201a1: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 005201a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005201a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005201ab: jle 0x520212 */ if ((fZ||fS!=fO)) goto L_00520212;
L_005201ad:; BB(0x005201ad);
    /* 005201ad: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005201b1: mov edi, esi */ r_edi = r_esi;
    /* 005201b3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005201b6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005201b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005201bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005201bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005201bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005201c1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005201c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005201c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005201c7: mov ebp, ebx */ r_ebp = r_ebx;
    /* 005201c9: mov ebx, eax */ r_ebx = r_eax;
    /* 005201cb: mov esi, edx */ r_esi = r_edx;
L_005201cd:; BB(0x005201cd);
    /* 005201cd: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 005201d3: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 005201d6: mov dword ptr [ebx + eax + 0x1c], ecx */ W32((u32)(r_ebx+r_eax+0x1cu), r_ecx);
    /* 005201da: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 005201dd: mov edx, ebp */ r_edx = r_ebp;
    /* 005201df: mov dword ptr [ebx + eax + 0x20], ecx */ W32((u32)(r_ebx+r_eax+0x20u), r_ecx);
    /* 005201e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005201e6: mov dword ptr [ebx + eax + 0x24], ecx */ W32((u32)(r_ebx+r_eax+0x24u), r_ecx);
    /* 005201ea: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 005201f0: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005201f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005201f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005201f5: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5201fau); f_00830aa0();
    /* 005201fa: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005201fd: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520200: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00520203: cmp esi, dword ptr [edi + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520209: jl 0x5201cd */ if ((fS!=fO)) goto L_005201cd;
L_0052020b:; BB(0x0052020b);
    /* 0052020b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0052020f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00520212:; BB(0x00520212);
    /* 00520212: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520217u); f_0082da80();
    /* 00520217: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052021a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052021b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052021c: ret 4 */ FN_RET(0x00520158); r_esp += 8; return;
}

void f_00520220(void) /* sub_520220 */
{
    FN_ENTER(0x00520220);
    /* 00520220: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520221: mov esi, ecx */ r_esi = r_ecx;
    /* 00520223: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00520225: mov ecx, esi */ r_ecx = r_esi;
    /* 00520227: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x52022du); call_ind(t); }
    /* 0052022d: mov ecx, esi */ r_ecx = r_esi;
    /* 0052022f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x520234u); f_007b6894();
    /* 00520234: mov ecx, esi */ r_ecx = r_esi;
    /* 00520236: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x52023bu); f_007b798c();
    /* 0052023b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052023c: ret  */ FN_RET(0x00520220); r_esp += 4; return;
}

void f_00520240(void) /* sub_520240 */
{
    FN_ENTER(0x00520240);
    /* 00520240: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520241: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00520242: mov eax, ecx */ r_eax = r_ecx;
    /* 00520244: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 0052024a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052024c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052024e: jle 0x5202ed */ if ((fZ||fS!=fO)) goto L_005202ed;
L_00520254:; BB(0x00520254);
    /* 00520254: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520257: jl 0x5202fa */ if ((fS!=fO)) goto L_005202fa;
L_0052025d:; BB(0x0052025d);
    /* 0052025d: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00520263: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00520266: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520268: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0052026a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052026c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0052026e: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00520270: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00520272: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00520274:; BB(0x00520274);
    /* 00520274: mov esi, dword ptr [ebx + eax + 0x18] */ r_esi = R32((u32)(r_ebx+r_eax+0x18u));
    /* 00520278: test esi, 0x380000 */ {  u32 a = r_esi; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052027e: jne 0x5202f2 */ if (!fZ) goto L_005202f2;
L_00520280:; BB(0x00520280);
    /* 00520280: mov esi, dword ptr [ebx + eax + 0x44] */ r_esi = R32((u32)(r_ebx+r_eax+0x44u));
    /* 00520284: test esi, 0x380000 */ {  u32 a = r_esi; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052028a: jne 0x5202f2 */ if (!fZ) goto L_005202f2;
L_0052028c:; BB(0x0052028c);
    /* 0052028c: mov esi, dword ptr [ebx + eax + 0x70] */ r_esi = R32((u32)(r_ebx+r_eax+0x70u));
    /* 00520290: test esi, 0x380000 */ {  u32 a = r_esi; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520296: jne 0x5202f2 */ if (!fZ) goto L_005202f2;
L_00520298:; BB(0x00520298);
    /* 00520298: mov esi, dword ptr [ebx + eax + 0x9c] */ r_esi = R32((u32)(r_ebx+r_eax+0x9cu));
    /* 0052029f: test esi, 0x380000 */ {  u32 a = r_esi; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005202a5: jne 0x5202f2 */ if (!fZ) goto L_005202f2;
L_005202a7:; BB(0x005202a7);
    /* 005202a7: mov esi, dword ptr [ebx + eax + 0xc8] */ r_esi = R32((u32)(r_ebx+r_eax+0xc8u));
    /* 005202ae: test esi, 0x380000 */ {  u32 a = r_esi; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005202b4: jne 0x5202f2 */ if (!fZ) goto L_005202f2;
L_005202b6:; BB(0x005202b6);
    /* 005202b6: add ebx, 0xdc */ {  u32 a = r_ebx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005202bc: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005202bf: lea esi, [edx - 6] */ r_esi = (u32)(r_edx+0xfffffffau);
    /* 005202c2: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005202c4: jle 0x520274 */ if ((fZ||fS!=fO)) goto L_00520274;
L_005202c6:; BB(0x005202c6);
    /* 005202c6: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005202c9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005202cb: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005202cd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005202cf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005202d1: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005202d3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005202d5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_005202d7:; BB(0x005202d7);
    /* 005202d7: mov esi, dword ptr [ebx + eax + 0x18] */ r_esi = R32((u32)(r_ebx+r_eax+0x18u));
    /* 005202db: test esi, 0x380000 */ {  u32 a = r_esi; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005202e1: jne 0x5202f2 */ if (!fZ) goto L_005202f2;
L_005202e3:; BB(0x005202e3);
    /* 005202e3: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005202e6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005202e9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005202eb: jl 0x5202d7 */ if ((fS!=fO)) goto L_005202d7;
L_005202ed:; BB(0x005202ed);
    /* 005202ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005202ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005202f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005202f1: ret  */ FN_RET(0x00520240); r_esp += 4; return;
L_005202f2:; BB(0x005202f2);
    /* 005202f2: mov eax, 1 */ r_eax = 0x1u;
    /* 005202f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005202f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005202f9: ret  */ FN_RET(0x00520240); r_esp += 4; return;
L_005202fa:; BB(0x005202fa);
    /* 005202fa: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00520300: jmp 0x5202c6 */ goto L_005202c6;
}

void f_00520304(void) /* sub_520304 */
{
    FN_ENTER(0x00520304);
    /* 00520304: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520305: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00520309: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0052030c: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00520310: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00520312: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00520313: jb 0x52031e */ if (fC) goto L_0052031e;
L_00520315:; BB(0x00520315);
    /* 00520315: mov eax, edx */ r_eax = r_edx;
    /* 00520317: call 0x520340 */ r_esp -= 4; W32(r_esp, 0x52031cu); f_00520340();
    /* 0052031c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052031d: ret  */ FN_RET(0x00520304); r_esp += 4; return;
L_0052031e:; BB(0x0052031e);
    /* 0052031e: mov eax, edx */ r_eax = r_edx;
    /* 00520320: call 0x52032c */ r_esp -= 4; W32(r_esp, 0x520325u); f_0052032c();
    /* 00520325: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520326: ret  */ FN_RET(0x00520304); r_esp += 4; return;
}

void f_00520328(void) /* sub_520328 */
{
    FN_ENTER(0x00520328);
    /* 00520328: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0052032c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0052032f: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00520332: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520335: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00520338: ret  */ FN_RET(0x00520328); r_esp += 4; return;
}

void f_0052032c(void)
{
    FN_ENTER(0x0052032c);
    /* 0052032c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0052032f: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00520332: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520335: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00520338: ret  */ FN_RET(0x0052032c); r_esp += 4; return;
}

void f_0052033c(void) /* sub_52033C */
{
    FN_ENTER(0x0052033c);
    /* 0052033c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00520340: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00520343: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00520346: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520349: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0052034c: ret  */ FN_RET(0x0052033c); r_esp += 4; return;
}

void f_00520340(void)
{
    FN_ENTER(0x00520340);
    /* 00520340: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00520343: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00520346: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520349: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0052034c: ret  */ FN_RET(0x00520340); r_esp += 4; return;
}

void f_00520350(void) /* sub_520350 */
{
    FN_ENTER(0x00520350);
    /* 00520350: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 00520356: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520359: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0052035f: ret  */ FN_RET(0x00520350); r_esp += 4; return;
}

void f_00520360(void) /* sub_520360 */
{
    FN_ENTER(0x00520360);
    /* 00520360: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 00520366: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520369: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0052036f: ret  */ FN_RET(0x00520360); r_esp += 4; return;
}

void f_00520370(void) /* sub_520370 */
{
    FN_ENTER(0x00520370);
    /* 00520370: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 00520376: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520379: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0052037f: ret  */ FN_RET(0x00520370); r_esp += 4; return;
}

void f_00520380(void) /* sub_520380 */
{
    FN_ENTER(0x00520380);
    /* 00520380: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 00520386: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520389: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0052038f: ret  */ FN_RET(0x00520380); r_esp += 4; return;
}

void f_0052039c(void) /* sub_52039C */
{
    FN_ENTER(0x0052039c);
    /* 0052039c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052039f: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005203a2: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005203a8: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 005203ae: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005203b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005203b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005203b5: jle 0x5203f8 */ if ((fZ||fS!=fO)) goto L_005203f8;
L_005203b7:; BB(0x005203b7);
    /* 005203b7: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005203bb: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005203be: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005203c1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005203c3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005203c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005203c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005203c9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005203cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005203cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005203cf:; BB(0x005203cf);
    /* 005203cf: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 005203d5: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 005203d9: or ebx, 0x2000000 */ {  u32 a = r_ebx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005203df: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 005203e3: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005203e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005203e9: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005203ef: jl 0x5203cf */ if ((fS!=fO)) goto L_005203cf;
L_005203f1:; BB(0x005203f1);
    /* 005203f1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005203f5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005203f8:; BB(0x005203f8);
    /* 005203f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005203fb: ret  */ FN_RET(0x0052039c); r_esp += 4; return;
}

void f_005203fc(void) /* sub_5203FC */
{
    FN_ENTER(0x005203fc);
    /* 005203fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005203ff: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00520402: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 00520408: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052040e: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00520411: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00520413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00520415: jle 0x520458 */ if ((fZ||fS!=fO)) goto L_00520458;
L_00520417:; BB(0x00520417);
    /* 00520417: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0052041b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0052041e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00520421: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520423: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00520425: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520427: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520429: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052042b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052042d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0052042f:; BB(0x0052042f);
    /* 0052042f: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 00520435: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 00520439: and ebx, 0xfdffffff */ {  u32 a = r_ebx; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0052043f: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 00520443: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520446: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520449: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052044f: jl 0x52042f */ if ((fS!=fO)) goto L_0052042f;
L_00520451:; BB(0x00520451);
    /* 00520451: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00520455: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00520458:; BB(0x00520458);
    /* 00520458: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052045b: ret  */ FN_RET(0x005203fc); r_esp += 4; return;
}

void f_0052045c(void) /* sub_52045C */
{
    FN_ENTER(0x0052045c);
    /* 0052045c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052045f: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 00520465: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00520467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00520469: jle 0x5204a9 */ if ((fZ||fS!=fO)) goto L_005204a9;
L_0052046b:; BB(0x0052046b);
    /* 0052046b: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0052046f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00520472: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00520475: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520477: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00520479: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052047b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052047d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052047f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520481: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00520483:; BB(0x00520483);
    /* 00520483: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 00520489: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 0052048d: or ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00520490: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 00520494: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520497: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052049a: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005204a0: jl 0x520483 */ if ((fS!=fO)) goto L_00520483;
L_005204a2:; BB(0x005204a2);
    /* 005204a2: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005204a6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005204a9:; BB(0x005204a9);
    /* 005204a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005204ac: ret  */ FN_RET(0x0052045c); r_esp += 4; return;
}

void f_005204b0(void) /* sub_5204B0 */
{
    FN_ENTER(0x005204b0);
    /* 005204b0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005204b3: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 005204b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005204bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005204bd: jle 0x5204fd */ if ((fZ||fS!=fO)) goto L_005204fd;
L_005204bf:; BB(0x005204bf);
    /* 005204bf: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005204c3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005204c6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005204c9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005204cb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005204cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005204cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005204d1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005204d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005204d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005204d7:; BB(0x005204d7);
    /* 005204d7: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 005204dd: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 005204e1: and ebx, 0xfffffffe */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005204e4: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 005204e8: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005204eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005204ee: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005204f4: jl 0x5204d7 */ if ((fS!=fO)) goto L_005204d7;
L_005204f6:; BB(0x005204f6);
    /* 005204f6: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005204fa: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005204fd:; BB(0x005204fd);
    /* 005204fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520500: ret  */ FN_RET(0x005204b0); r_esp += 4; return;
}

void f_00520504(void) /* sub_520504 */
{
    FN_ENTER(0x00520504);
    /* 00520504: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520505: mov edi, ecx */ r_edi = r_ecx;
    /* 00520507: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00520509: mov ecx, edi */ r_ecx = r_edi;
    /* 0052050b: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x520511u); call_ind(t); }
    /* 00520511: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00520513: mov ecx, edi */ r_ecx = r_edi;
    /* 00520515: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x52051bu); call_ind(t); }
    /* 0052051b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0052051e: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520523: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00520526: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520527: ret  */ FN_RET(0x00520504); r_esp += 4; return;
}

void f_00520528(void) /* sub_520528 */
{
    FN_ENTER(0x00520528);
    /* 00520528: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520529: mov edi, ecx */ r_edi = r_ecx;
    /* 0052052b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052052d: mov ecx, edi */ r_ecx = r_edi;
    /* 0052052f: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x520535u); call_ind(t); }
    /* 00520535: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00520537: mov ecx, edi */ r_ecx = r_edi;
    /* 00520539: call dword ptr [eax + 0x17c] */ { u32 t = R32((u32)(r_eax+0x17cu)); r_esp -= 4; W32(r_esp, 0x52053fu); call_ind(t); }
    /* 0052053f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00520542: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520547: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0052054a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052054b: ret  */ FN_RET(0x00520528); r_esp += 4; return;
}

void f_0052054c(void) /* sub_52054C */
{
    FN_ENTER(0x0052054c);
    /* 0052054c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052054f: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 00520555: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00520557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00520559: jle 0x52059c */ if ((fZ||fS!=fO)) goto L_0052059c;
L_0052055b:; BB(0x0052055b);
    /* 0052055b: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0052055f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00520562: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00520565: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520567: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00520569: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052056b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052056d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052056f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520571: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00520573:; BB(0x00520573);
    /* 00520573: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 00520579: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 0052057d: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00520580: and ebx, 0xfffffffd */ {  u32 a = r_ebx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00520583: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520586: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 0052058a: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052058d: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520593: jl 0x520573 */ if ((fS!=fO)) goto L_00520573;
L_00520595:; BB(0x00520595);
    /* 00520595: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00520599: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0052059c:; BB(0x0052059c);
    /* 0052059c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052059f: ret  */ FN_RET(0x0052054c); r_esp += 4; return;
}

void f_005205a0(void) /* sub_5205A0 */
{
    FN_ENTER(0x005205a0);
    /* 005205a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005205a3: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 005205a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005205ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005205ad: jle 0x5205f0 */ if ((fZ||fS!=fO)) goto L_005205f0;
L_005205af:; BB(0x005205af);
    /* 005205af: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005205b3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005205b6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005205b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005205bb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005205bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005205bf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005205c1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005205c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005205c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005205c7:; BB(0x005205c7);
    /* 005205c7: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 005205cd: mov ebx, dword ptr [eax + esi + 0x18] */ r_ebx = R32((u32)(r_eax+r_esi+0x18u));
    /* 005205d1: and ebx, 0xfffffffb */ {  u32 a = r_ebx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005205d4: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005205d7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005205da: mov dword ptr [eax + esi + 0x18], ebx */ W32((u32)(r_eax+r_esi+0x18u), r_ebx);
    /* 005205de: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005205e1: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005205e7: jl 0x5205c7 */ if ((fS!=fO)) goto L_005205c7;
L_005205e9:; BB(0x005205e9);
    /* 005205e9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 005205ed: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005205f0:; BB(0x005205f0);
    /* 005205f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005205f3: ret  */ FN_RET(0x005205a0); r_esp += 4; return;
}

void f_005205f4(void) /* sub_5205F4 */
{
    FN_ENTER(0x005205f4);
    /* 005205f4: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005205f7: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005205fa: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005205fd: mov eax, 0 */ r_eax = 0x0u;
    /* 00520602: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00520605: ret  */ FN_RET(0x005205f4); r_esp += 4; return;
}

void f_00520608(void) /* sub_520608 */
{
    FN_ENTER(0x00520608);
    /* 00520608: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00520609: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x52060eu); f_00794548();
    /* 0052060e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052060f: ret  */ FN_RET(0x00520608); r_esp += 4; return;
}

void f_00520610(void) /* sub_520610 */
{
    FN_ENTER(0x00520610);
    /* 00520610: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x520615u); f_00794750();
    /* 00520615: ret  */ FN_RET(0x00520610); r_esp += 4; return;
}

void f_00520618(void) /* sub_520618 */
{
    FN_ENTER(0x00520618);
    /* 00520618: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0052061b: test eax, 0x40800 */ {  u32 a = r_eax; u32 b = 0x40800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520620: jne 0x520637 */ if (!fZ) goto L_00520637;
L_00520622:; BB(0x00520622);
    /* 00520622: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520624: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00520626: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00520629: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052062e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052062f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x520634u); f_00805608();
    /* 00520634: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00520637:; BB(0x00520637);
    /* 00520637: ret  */ FN_RET(0x00520618); r_esp += 4; return;
}

void f_00520638(void) /* sub_520638 */
{
    FN_ENTER(0x00520638);
    /* 00520638: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520639: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052063a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052063b: mov edi, ecx */ r_edi = r_ecx;
    /* 0052063d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00520641: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520642: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 00520645: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00520647: mov ecx, edi */ r_ecx = r_edi;
    /* 00520649: call dword ptr [eax + 0x1a4] */ { u32 t = R32((u32)(r_eax+0x1a4u)); r_esp -= 4; W32(r_esp, 0x52064fu); call_ind(t); }
    /* 0052064f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520651: je 0x520671 */ if (fZ) goto L_00520671;
L_00520653:; BB(0x00520653);
    /* 00520653: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520656: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00520659: mov dword ptr [edi + 0x250], ecx */ W32((u32)(r_edi+0x250u), r_ecx);
    /* 0052065f: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00520662: mov dword ptr [edi + 0x254], ecx */ W32((u32)(r_edi+0x254u), r_ecx);
    /* 00520668: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0052066b: mov dword ptr [edi + 0x258], edx */ W32((u32)(r_edi+0x258u), r_edx);
L_00520671:; BB(0x00520671);
    /* 00520671: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00520674: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 00520677: mov dword ptr [edi + 0x48], ebx */ W32((u32)(r_edi+0x48u), r_ebx);
    /* 0052067a: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 0052067d: mov dword ptr [edi + 0x4c], ebx */ W32((u32)(r_edi+0x4cu), r_ebx);
    /* 00520680: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00520683: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00520686: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00520689: mov dword ptr [edi + 0x38c], 0 */ W32((u32)(r_edi+0x38cu), 0x0u);
    /* 00520693: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 00520696: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520698: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520699: ret 4 */ FN_RET(0x00520638); r_esp += 8; return;
}

void f_0052069c(void) /* sub_52069C */
{
    FN_ENTER(0x0052069c);
    /* 0052069c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052069d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005206a0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005206a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005206a4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005206a7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005206ab: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005206af: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005206b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005206b4: call 0x5206cc */ r_esp -= 4; W32(r_esp, 0x5206b9u); f_005206cc();
    /* 005206b9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005206bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005206bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005206bf: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x5206c4u); f_00520750();
    /* 005206c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005206c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005206c8: ret 0xc */ FN_RET(0x0052069c); r_esp += 16; return;
}

void f_005206cc(void) /* sub_5206CC */
{
    FN_ENTER(0x005206cc);
    /* 005206cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005206cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005206ce: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005206d0: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005206d4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005206d8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005206dc: fld dword ptr [ebp + 0x384] */ FPUSH(R_F32((u32)(r_ebp+0x384u)));
    /* 005206e2: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005206e5: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 005206e9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005206ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005206ef: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005206f2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005206f6: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x5206fbu); f_00520940();
    /* 005206fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005206fd: je 0x52071c */ if (fZ) goto L_0052071c;
L_005206ff:; BB(0x005206ff);
    /* 005206ff: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00520702: add dword ptr [ebp + 0x388], 1 */ { u32 ad = (u32)(r_ebp+0x388u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520709: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0052070b: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0052070e: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00520711: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00520714: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 00520717: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520718: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520719: ret 0x10 */ FN_RET(0x005206cc); r_esp += 20; return;
L_0052071c:; BB(0x0052071c);
    /* 0052071c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00520720: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00520724: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00520726: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520728: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0052072b: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0052072f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00520731: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00520733: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00520736: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00520739: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 0052073c: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0052073f: mov dword ptr [ebp + 0x388], 0 */ W32((u32)(r_ebp+0x388u), 0x0u);
    /* 00520749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052074a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052074b: ret 0x10 */ FN_RET(0x005206cc); r_esp += 20; return;
}

void f_00520750(void) /* sub_520750 */
{
    FN_ENTER(0x00520750);
    /* 00520750: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520751: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520752: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00520753: mov edi, ecx */ r_edi = r_ecx;
    /* 00520755: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00520759: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052075a: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 0052075d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0052075f: mov ecx, edi */ r_ecx = r_edi;
    /* 00520761: call dword ptr [eax + 0x1a4] */ { u32 t = R32((u32)(r_eax+0x1a4u)); r_esp -= 4; W32(r_esp, 0x520767u); call_ind(t); }
    /* 00520767: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520769: je 0x5207b4 */ if (fZ) goto L_005207b4;
L_0052076b:; BB(0x0052076b);
    /* 0052076b: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0052076e: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 00520771: mov dword ptr [edi + 0x48], ebx */ W32((u32)(r_edi+0x48u), r_ebx);
    /* 00520774: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 00520777: mov dword ptr [edi + 0x4c], ebx */ W32((u32)(r_edi+0x4cu), r_ebx);
    /* 0052077a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052077d: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00520780: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00520783: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 00520786: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00520789: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0052078c: mov dword ptr [edi + 0x250], edx */ W32((u32)(r_edi+0x250u), r_edx);
    /* 00520792: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00520795: mov dword ptr [edi + 0x254], edx */ W32((u32)(r_edi+0x254u), r_edx);
    /* 0052079b: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0052079e: mov dword ptr [edi + 0x258], edx */ W32((u32)(r_edi+0x258u), r_edx);
    /* 005207a4: mov dword ptr [edi + 0x38c], 0 */ W32((u32)(r_edi+0x38cu), 0x0u);
    /* 005207ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005207af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005207b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005207b1: ret 4 */ FN_RET(0x00520750); r_esp += 8; return;
L_005207b4:; BB(0x005207b4);
    /* 005207b4: add dword ptr [edi + 0x38c], 1 */ { u32 ad = (u32)(r_edi+0x38cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005207bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005207bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005207bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005207be: ret 4 */ FN_RET(0x00520750); r_esp += 8; return;
}

void f_005207c4(void) /* sub_5207C4 */
{
    FN_ENTER(0x005207c4);
    /* 005207c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005207c5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005207c8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005207ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005207cc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005207cf: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005207d3: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005207d7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005207db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005207dc: call 0x5207f4 */ r_esp -= 4; W32(r_esp, 0x5207e1u); f_005207f4();
    /* 005207e1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005207e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005207e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005207e7: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x5207ecu); f_00520750();
    /* 005207ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005207ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005207f0: ret 0xc */ FN_RET(0x005207c4); r_esp += 16; return;
}

void f_005207f4(void) /* sub_5207F4 */
{
    FN_ENTER(0x005207f4);
    /* 005207f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005207f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005207f6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005207f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005207fb: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 005207ff: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00520803: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00520807: fld dword ptr [ebx + 0x384] */ FPUSH(R_F32((u32)(r_ebx+0x384u)));
    /* 0052080d: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520810: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 00520814: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00520818: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052081a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052081d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00520821: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x520826u); f_00520940();
    /* 00520826: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520828: jne 0x52085f */ if (!fZ) goto L_0052085f;
L_0052082a:; BB(0x0052082a);
    /* 0052082a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0052082e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00520832: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00520834: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520836: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 00520839: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0052083d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0052083f: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00520841: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00520844: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00520847: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 0052084a: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0052084d: mov dword ptr [ebx + 0x388], 0 */ W32((u32)(r_ebx+0x388u), 0x0u);
    /* 00520857: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052085a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052085b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052085c: ret 0x10 */ FN_RET(0x005207f4); r_esp += 20; return;
L_0052085f:; BB(0x0052085f);
    /* 0052085f: add dword ptr [ebx + 0x388], 1 */ { u32 ad = (u32)(r_ebx+0x388u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00520866: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520869: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0052086c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00520870: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00520873: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00520876: fchs  */ ST(0) = -ST(0);
    /* 00520878: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0052087c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00520880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520881: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x520886u); f_007828e4();
    /* 00520886: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00520888: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052088b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052088f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00520893: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00520897: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0052089b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052089d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0052089f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005208a1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005208a3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005208a5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005208a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005208ab: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005208ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005208b0: fcomp dword ptr [0x9216c4] */ fx_compare(ST(0), R_F32((u32)(0x9216c4u))); FPOP();
    /* 005208b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005208b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005208b9: jae 0x5208cf */ if (!fC) goto L_005208cf;
L_005208bb:; BB(0x005208bb);
    /* 005208bb: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005208bf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005208c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005208c4: fchs  */ ST(0) = -ST(0);
    /* 005208c6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005208ca: fchs  */ ST(0) = -ST(0);
    /* 005208cc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_005208cf:; BB(0x005208cf);
    /* 005208cf: fld dword ptr [ebx + 0x384] */ FPUSH(R_F32((u32)(r_ebx+0x384u)));
    /* 005208d5: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005208d8: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 005208dc: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005208e0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005208e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005208e6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005208e9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005208ed: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005208f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005208f3: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x5208f8u); f_00520940();
    /* 005208f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005208fa: je 0x520915 */ if (fZ) goto L_00520915;
L_005208fc:; BB(0x005208fc);
    /* 005208fc: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005208ff: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00520901: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00520904: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00520907: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0052090a: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 0052090d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520910: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520911: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520912: ret 0x10 */ FN_RET(0x005207f4); r_esp += 20; return;
L_00520915:; BB(0x00520915);
    /* 00520915: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00520919: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0052091d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052091f: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 00520922: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00520925: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00520927: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00520929: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0052092c: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0052092f: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 00520932: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00520935: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520938: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520939: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052093a: ret 0x10 */ FN_RET(0x005207f4); r_esp += 20; return;
}

void f_00520940(void) /* sub_520940 */
{
    FN_ENTER(0x00520940);
    /* 00520940: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520941: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520944: mov edi, ecx */ r_edi = r_ecx;
    /* 00520946: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0052094a: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0052094e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00520950: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00520954: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00520956: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0052095a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0052095c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052095f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520960: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00520963: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x520968u); f_0082e900();
    /* 00520968: fcomp dword ptr [0x9216c0] */ fx_compare(ST(0), R_F32((u32)(0x9216c0u))); FPOP();
    /* 0052096e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00520970: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00520971: jae 0x520994 */ if (!fC) goto L_00520994;
L_00520973:; BB(0x00520973);
    /* 00520973: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520974: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00520978: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052097b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x520980u); f_0082e900();
    /* 00520980: fcomp dword ptr [0x9216c0] */ fx_compare(ST(0), R_F32((u32)(0x9216c0u))); FPOP();
    /* 00520986: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00520988: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00520989: jae 0x520994 */ if (!fC) goto L_00520994;
L_0052098b:; BB(0x0052098b);
    /* 0052098b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052098d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520990: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520991: ret 0xc */ FN_RET(0x00520940); r_esp += 16; return;
L_00520994:; BB(0x00520994);
    /* 00520994: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00520998: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0052099b: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0052099f: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 005209a5: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 005209a8: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005209ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005209ad: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005209b1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005209b5: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005209b9: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005209bf: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005209c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005209c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005209c6: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5209cbu); f_0077fffc();
    /* 005209cb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005209ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005209cf: ret 0xc */ FN_RET(0x00520940); r_esp += 16; return;
}

void f_005209d4(void) /* sub_5209D4 */
{
    FN_ENTER(0x005209d4);
    /* 005209d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005209d5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005209d8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005209da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005209dc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005209df: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005209e3: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005209e7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005209eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005209ec: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x5209f1u); f_00520a04();
    /* 005209f1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005209f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005209f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005209f7: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x5209fcu); f_00520750();
    /* 005209fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005209ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520a00: ret 0xc */ FN_RET(0x005209d4); r_esp += 16; return;
}

void f_00520a04(void) /* sub_520A04 */
{
    FN_ENTER(0x00520a04);
    /* 00520a04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520a05: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520a06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520a07: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00520a09: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00520a0d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00520a11: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00520a15: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00520a19: fld dword ptr [ebp + 0x384] */ FPUSH(R_F32((u32)(r_ebp+0x384u)));
    /* 00520a1f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520a21: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00520a24: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00520a26: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520a29: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00520a2d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00520a30: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00520a34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520a36: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x520a3bu); f_00520940();
    /* 00520a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520a3d: jne 0x520a4b */ if (!fZ) goto L_00520a4b;
L_00520a3f:; BB(0x00520a3f);
    /* 00520a3f: mov dword ptr [ebp + 0x388], 0 */ W32((u32)(r_ebp+0x388u), 0x0u);
    /* 00520a49: jmp 0x520a82 */ goto L_00520a82;
L_00520a4b:; BB(0x00520a4b);
    /* 00520a4b: add dword ptr [ebp + 0x388], 1 */ { u32 ad = (u32)(r_ebp+0x388u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00520a52: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00520a55: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00520a57: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 00520a5a: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00520a5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520a5f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00520a61: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520a63: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 00520a66: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00520a68: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00520a6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520a6b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00520a6e: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x520a73u); f_0082dc9c();
    /* 00520a73: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00520a76: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00520a79: fsub dword ptr [ebp + 0x384] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x384u));
    /* 00520a7f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00520a82:; BB(0x00520a82);
    /* 00520a82: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00520a86: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00520a89: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00520a8b: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 00520a8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520a91: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00520a94: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00520a96: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00520a99: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00520a9c: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 00520a9f: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00520aa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520aa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520aa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520aa5: ret 0x10 */ FN_RET(0x00520a04); r_esp += 20; return;
}

void f_00520aa8(void) /* sub_520AA8 */
{
    FN_ENTER(0x00520aa8);
    /* 00520aa8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520aa9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520aac: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00520aae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520ab0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520ab3: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520ab7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520abb: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520abf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520ac0: call 0x5206cc */ r_esp -= 4; W32(r_esp, 0x520ac5u); f_005206cc();
    /* 00520ac5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520ac9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00520acc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520ace: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x520ad4u); call_ind(t); }
    /* 00520ad4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520ad7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520ad8: ret 0xc */ FN_RET(0x00520aa8); r_esp += 16; return;
}

void f_00520adc(void) /* sub_520ADC */
{
    FN_ENTER(0x00520adc);
    /* 00520adc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520add: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520ae0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00520ae2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520ae4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520ae7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520aeb: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520aef: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520af4: call 0x5207f4 */ r_esp -= 4; W32(r_esp, 0x520af9u); f_005207f4();
    /* 00520af9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520afd: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00520b00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520b02: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x520b08u); call_ind(t); }
    /* 00520b08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520b0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520b0c: ret 0xc */ FN_RET(0x00520adc); r_esp += 16; return;
}

void f_00520b10(void) /* sub_520B10 */
{
    FN_ENTER(0x00520b10);
    /* 00520b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520b11: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520b14: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00520b16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520b18: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520b1b: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520b1f: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520b23: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520b27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520b28: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x520b2du); f_00520a04();
    /* 00520b2d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520b31: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00520b34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520b36: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x520b3cu); call_ind(t); }
    /* 00520b3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520b3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520b40: ret 0xc */ FN_RET(0x00520b10); r_esp += 16; return;
}

void f_00520b44(void) /* sub_520B44 */
{
    FN_ENTER(0x00520b44);
    /* 00520b44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520b45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00520b46: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520b49: mov edi, ecx */ r_edi = r_ecx;
    /* 00520b4b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00520b4f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00520b51: mov edx, dword ptr [edi + 0x2b4] */ r_edx = R32((u32)(r_edi+0x2b4u));
    /* 00520b57: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00520b5a: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00520b5d: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 00520b60: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00520b64: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00520b67: lea ebx, [edi + 0x128] */ r_ebx = (u32)(r_edi+0x128u);
    /* 00520b6d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00520b71: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520b74: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520b79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00520b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520b7b: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x520b80u); f_007806dc();
    /* 00520b80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520b83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520b85: je 0x520b91 */ if (fZ) goto L_00520b91;
L_00520b87:; BB(0x00520b87);
    /* 00520b87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00520b89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520b8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520b8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520b8e: ret 4 */ FN_RET(0x00520b44); r_esp += 8; return;
L_00520b91:; BB(0x00520b91);
    /* 00520b91: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00520b94: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00520b96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00520b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520b98: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x520b9du); f_007806dc();
    /* 00520b9d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520ba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520ba2: je 0x520b87 */ if (fZ) goto L_00520b87;
L_00520ba4:; BB(0x00520ba4);
    /* 00520ba4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00520ba7: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00520baa: mov dword ptr [edi + 0x3c], ebx */ W32((u32)(r_edi+0x3cu), r_ebx);
    /* 00520bad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520bb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520bb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520bb2: ret 4 */ FN_RET(0x00520b44); r_esp += 8; return;
}

void f_00520bb8(void) /* sub_520BB8 */
{
    FN_ENTER(0x00520bb8);
    /* 00520bb8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00520bbc: cmp eax, dword ptr [ecx + 0x388] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x388u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00520bc2: jle 0x520bd1 */ if ((fZ||fS!=fO)) goto L_00520bd1;
L_00520bc4:; BB(0x00520bc4);
    /* 00520bc4: cmp eax, dword ptr [ecx + 0x38c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00520bca: jle 0x520bd1 */ if ((fZ||fS!=fO)) goto L_00520bd1;
L_00520bcc:; BB(0x00520bcc);
    /* 00520bcc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520bce: ret 4 */ FN_RET(0x00520bb8); r_esp += 8; return;
L_00520bd1:; BB(0x00520bd1);
    /* 00520bd1: mov eax, 1 */ r_eax = 0x1u;
    /* 00520bd6: ret 4 */ FN_RET(0x00520bb8); r_esp += 8; return;
}

void f_00520bdc(void) /* sub_520BDC */
{
    FN_ENTER(0x00520bdc);
    /* 00520bdc: mov dword ptr [ecx + 0x390], 1 */ W32((u32)(r_ecx+0x390u), 0x1u);
    /* 00520be6: ret  */ FN_RET(0x00520bdc); r_esp += 4; return;
}

void f_00520be8(void) /* sub_520BE8 */
{
    FN_ENTER(0x00520be8);
    /* 00520be8: mov dword ptr [ecx + 0x390], 0 */ W32((u32)(r_ecx+0x390u), 0x0u);
    /* 00520bf2: ret  */ FN_RET(0x00520be8); r_esp += 4; return;
}

void f_00520bf4(void) /* sub_520BF4 */
{
    FN_ENTER(0x00520bf4);
    /* 00520bf4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x520bf9u); f_007751b0();
    /* 00520bf9: fld dword ptr [0x9216bc] */ FPUSH(R_F32((u32)(0x9216bcu)));
    /* 00520bff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00520c01: fmul dword ptr [0x9216b8] */ ST(0) = ST(0) * R_F32((u32)(0x9216b8u));
    /* 00520c07: ret  */ FN_RET(0x00520bf4); r_esp += 4; return;
}

void f_00520c08(void) /* sub_520C08 */
{
    FN_ENTER(0x00520c08);
    /* 00520c08: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x520c0du); f_007751b0();
    /* 00520c0d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00520c11: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00520c15: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00520c17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520c19: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00520c1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00520c1d: ret 8 */ FN_RET(0x00520c08); r_esp += 12; return;
}

void f_00520c20(void) /* sub_520C20 */
{
    FN_ENTER(0x00520c20);
    /* 00520c20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520c23: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x520c28u); f_007751b0();
    /* 00520c28: fld dword ptr [0x9216b4] */ FPUSH(R_F32((u32)(0x9216b4u)));
    /* 00520c2e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00520c30: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00520c33: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00520c37: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00520c3c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00520c40: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00520c44: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00520c48: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00520c4b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00520c4f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520c52: ret  */ FN_RET(0x00520c20); r_esp += 4; return;
}

void f_00520c54(void) /* sub_520C54 */
{
    FN_ENTER(0x00520c54);
    /* 00520c54: call 0x4d4564 */ r_esp -= 4; W32(r_esp, 0x520c59u); f_004d4564();
    /* 00520c59: ret  */ FN_RET(0x00520c54); r_esp += 4; return;
}

void f_00520c5c(void) /* sub_520C5C */
{
    FN_ENTER(0x00520c5c);
    /* 00520c5c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520c60: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520c64: call 0x4d4574 */ r_esp -= 4; W32(r_esp, 0x520c69u); f_004d4574();
    /* 00520c69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520c6c: ret  */ FN_RET(0x00520c5c); r_esp += 4; return;
}

void f_00520c70(void) /* sub_520C70 */
{
    FN_ENTER(0x00520c70);
    /* 00520c70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520c71: mov edi, ecx */ r_edi = r_ecx;
    /* 00520c73: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520c77: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520c7b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520c7f: mov ecx, edi */ r_ecx = r_edi;
    /* 00520c81: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x520c86u); f_007868f8();
    /* 00520c86: movzx edx, word ptr [edi + 0x334] */ r_edx = (u32)R16((u32)(r_edi+0x334u));
    /* 00520c8d: mov word ptr [edi + 0x346], dx */ W16((u32)(r_edi+0x346u), (u16)r_edx);
    /* 00520c94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520c95: ret 0xc */ FN_RET(0x00520c70); r_esp += 16; return;
}

void f_00520c98(void) /* sub_520C98 */
{
    FN_ENTER(0x00520c98);
    /* 00520c98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520c99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520c9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520c9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00520c9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520c9d: mov edi, ecx */ r_edi = r_ecx;
    /* 00520c9f: movzx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)R16((u32)(r_edi+0x2bcu));
    /* 00520ca6: movzx ebx, word ptr [edi + 0x334] */ r_ebx = (u32)R16((u32)(r_edi+0x334u));
    /* 00520cad: movzx ebp, word ptr [edi + 0x2be] */ r_ebp = (u32)R16((u32)(r_edi+0x2beu));
    /* 00520cb4: movzx esi, word ptr [edi + 0x336] */ r_esi = (u32)R16((u32)(r_edi+0x336u));
    /* 00520cbb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00520cbe: mov ecx, edi */ r_ecx = r_edi;
    /* 00520cc0: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520cc4: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520cc8: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520ccc: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x520cd1u); f_007868f8();
    /* 00520cd1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00520cd4: mov word ptr [edi + 0x2bc], dx */ W16((u32)(r_edi+0x2bcu), (u16)r_edx);
    /* 00520cdb: mov word ptr [edi + 0x334], bx */ W16((u32)(r_edi+0x334u), (u16)r_ebx);
    /* 00520ce2: mov word ptr [edi + 0x2be], bp */ W16((u32)(r_edi+0x2beu), (u16)r_ebp);
    /* 00520ce9: mov word ptr [edi + 0x336], si */ W16((u32)(r_edi+0x336u), (u16)r_esi);
    /* 00520cf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520cf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520cf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520cf3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520cf4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520cf5: ret 0xc */ FN_RET(0x00520c98); r_esp += 16; return;
}

void f_00520cf8(void) /* sub_520CF8 */
{
    FN_ENTER(0x00520cf8);
    /* 00520cf8: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520cfc: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520d00: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x520d05u); f_00779d4c();
    /* 00520d05: ret 8 */ FN_RET(0x00520cf8); r_esp += 12; return;
}

void f_00520d08(void) /* sub_520D08 */
{
    FN_ENTER(0x00520d08);
    /* 00520d08: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00520d0d: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520d12: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00520d17: ret  */ FN_RET(0x00520d08); r_esp += 4; return;
}

void f_00520d18(void) /* sub_520D18 */
{
    FN_ENTER(0x00520d18);
    /* 00520d18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520d19: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00520d1c: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00520d20: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00520d23: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00520d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520d28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00520d29: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520d2d: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x520d32u); f_007a8d98();
    /* 00520d32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00520d35: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x520d3au); f_0082d7b0();
    /* 00520d3a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00520d3e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x520d43u); f_0082d838();
    /* 00520d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520d45: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00520d4a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520d4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520d4e: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x520d53u); f_00830b74();
    /* 00520d53: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00520d57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520d59: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x520d5eu); f_00830c04();
    /* 00520d5e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00520d61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520d63: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x520d68u); f_0082e9e4();
    /* 00520d68: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00520d6c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520d6e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x520d73u); f_0082d8bc();
    /* 00520d73: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520d75: je 0x520d7e */ if (fZ) goto L_00520d7e;
L_00520d77:; BB(0x00520d77);
    /* 00520d77: mov ecx, esi */ r_ecx = r_esi;
    /* 00520d79: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x520d7eu); f_00831290();
L_00520d7e:; BB(0x00520d7e);
    /* 00520d7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00520d80: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 00520d85: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x520d8au); f_0082e9e4();
    /* 00520d8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520d8c: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x520d91u); f_0052d46c();
    /* 00520d91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520d92: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x520d97u); f_0082da80();
    /* 00520d97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00520d9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520d9b: ret  */ FN_RET(0x00520d18); r_esp += 4; return;
}

void f_00520d9c(void) /* sub_520D9C */
{
    FN_ENTER(0x00520d9c);
    /* 00520d9c: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x520da1u); f_007a61a4();
    /* 00520da1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00520da4: mov eax, 0 */ r_eax = 0x0u;
    /* 00520da9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00520dac: ret  */ FN_RET(0x00520d9c); r_esp += 4; return;
}

void f_00520db0(void) /* sub_520DB0 */
{
    FN_ENTER(0x00520db0);
    /* 00520db0: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x520db5u); f_0052cf54();
    /* 00520db5: ret  */ FN_RET(0x00520db0); r_esp += 4; return;
}

void f_00520db8(void) /* sub_520DB8 */
{
    FN_ENTER(0x00520db8);
    /* 00520db8: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x520dbdu); f_0067e408();
    /* 00520dbd: ret  */ FN_RET(0x00520db8); r_esp += 4; return;
}

void f_00520dc0(void) /* sub_520DC0 */
{
    FN_ENTER(0x00520dc0);
    /* 00520dc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520dc1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00520dc5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00520dc7: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00520dcb: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00520dcd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00520dd0: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00520dd3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00520dd6: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00520ddc: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00520ddf: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520de5: mov ecx, esi */ r_ecx = r_esi;
    /* 00520de7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x520decu); f_0082f9c4();
    /* 00520dec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520ded: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x520df2u); f_00782868();
    /* 00520df2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520df3: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 00520df7: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00520df9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00520dfb: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00520dfe: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00520e01: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520e03: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00520e05: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00520e07: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00520e09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520e0b: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00520e0d: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00520e13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00520e15: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00520e18: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00520e1b: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00520e21: mov ecx, esi */ r_ecx = r_esi;
    /* 00520e23: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x520e28u); f_0082ebac();
    /* 00520e28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520e29: ret  */ FN_RET(0x00520dc0); r_esp += 4; return;
}

void f_00520e2c(void) /* sub_520E2C */
{
    FN_ENTER(0x00520e2c);
    /* 00520e2c: call 0x69448c */ r_esp -= 4; W32(r_esp, 0x520e31u); f_0069448c();
    /* 00520e31: ret  */ FN_RET(0x00520e2c); r_esp += 4; return;
}

void f_00520e34(void) /* sub_520E34 */
{
    FN_ENTER(0x00520e34);
    /* 00520e34: call 0x6944b8 */ r_esp -= 4; W32(r_esp, 0x520e39u); f_006944b8();
    /* 00520e39: ret  */ FN_RET(0x00520e34); r_esp += 4; return;
}

void f_00520e3c(void) /* sub_520E3C */
{
    FN_ENTER(0x00520e3c);
    /* 00520e3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520e3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520e3e: mov esi, 0xe */ r_esi = 0xeu;
    /* 00520e43: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00520e47: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x520e4cu); f_00520e6c();
    /* 00520e4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520e4e: je 0x520e55 */ if (fZ) goto L_00520e55;
L_00520e50:; BB(0x00520e50);
    /* 00520e50: mov esi, 0x1d */ r_esi = 0x1du;
L_00520e55:; BB(0x00520e55);
    /* 00520e55: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00520e57: jl 0x520e62 */ if ((fS!=fO)) goto L_00520e62;
L_00520e59:; BB(0x00520e59);
    /* 00520e59: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00520e5b: jl 0x520e64 */ if ((fS!=fO)) goto L_00520e64;
L_00520e5d:; BB(0x00520e5d);
    /* 00520e5d: lea ebp, [esi - 1] */ r_ebp = (u32)(r_esi+0xffffffffu);
    /* 00520e60: jmp 0x520e64 */ goto L_00520e64;
L_00520e62:; BB(0x00520e62);
    /* 00520e62: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00520e64:; BB(0x00520e64);
    /* 00520e64: mov eax, ebp */ r_eax = r_ebp;
    /* 00520e66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520e67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520e68: ret  */ FN_RET(0x00520e3c); r_esp += 4; return;
}

void f_00520e6c(void) /* sub_520E6C */
{
    FN_ENTER(0x00520e6c);
    /* 00520e6c: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00520e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520e73: je 0x520e7f */ if (fZ) goto L_00520e7f;
L_00520e75:; BB(0x00520e75);
    /* 00520e75: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00520e7a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00520e7d: je 0x520e82 */ if (fZ) goto L_00520e82;
L_00520e7f:; BB(0x00520e7f);
    /* 00520e7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520e81: ret  */ FN_RET(0x00520e6c); r_esp += 4; return;
L_00520e82:; BB(0x00520e82);
    /* 00520e82: mov eax, 1 */ r_eax = 0x1u;
    /* 00520e87: ret  */ FN_RET(0x00520e6c); r_esp += 4; return;
}

void f_00520e88(void) /* sub_520E88 */
{
    FN_ENTER(0x00520e88);
    /* 00520e88: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 00520e8e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x520e93u); f_0061cdb0();
    /* 00520e93: mov ecx, dword ptr [0xa9d4d4] */ r_ecx = R32((u32)(0xa9d4d4u));
    /* 00520e99: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x520e9eu); f_0061cdb0();
    /* 00520e9e: ret  */ FN_RET(0x00520e88); r_esp += 4; return;
}

void f_00520ea0(void) /* sub_520EA0 */
{
    FN_ENTER(0x00520ea0);
    /* 00520ea0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520ea4: lea eax, [ecx + 0x3b8] */ r_eax = (u32)(r_ecx+0x3b8u);
    /* 00520eaa: push dword ptr [ecx + 0x3bc] */ { u32 v = R32((u32)(r_ecx+0x3bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00520eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520eb1: call 0x520ebc */ r_esp -= 4; W32(r_esp, 0x520eb6u); f_00520ebc();
    /* 00520eb6: ret 4 */ FN_RET(0x00520ea0); r_esp += 8; return;
}

void f_00520ebc(void) /* sub_520EBC */
{
    FN_ENTER(0x00520ebc);
    /* 00520ebc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520ebd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520ebe: mov esi, ecx */ r_esi = r_ecx;
    /* 00520ec0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00520ec4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00520ec6: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520eca: jl 0x520ee4 */ if ((fS!=fO)) goto L_00520ee4;
L_00520ecc:; BB(0x00520ecc);
    /* 00520ecc: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520ed0: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00520ed6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00520ed8: mov ecx, esi */ r_ecx = r_esi;
    /* 00520eda: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x520ee0u); call_ind(t); }
    /* 00520ee0: mov edi, eax */ r_edi = r_eax;
    /* 00520ee2: jmp 0x520efd */ goto L_00520efd;
L_00520ee4:; BB(0x00520ee4);
    /* 00520ee4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00520ee7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00520ee9: mov ecx, esi */ r_ecx = r_esi;
    /* 00520eeb: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x520ef0u); f_00520f04();
    /* 00520ef0: mov edi, eax */ r_edi = r_eax;
    /* 00520ef2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520ef4: jne 0x520efd */ if (!fZ) goto L_00520efd;
L_00520ef6:; BB(0x00520ef6);
    /* 00520ef6: mov ecx, esi */ r_ecx = r_esi;
    /* 00520ef8: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x520efdu); f_00520f68();
L_00520efd:; BB(0x00520efd);
    /* 00520efd: mov eax, edi */ r_eax = r_edi;
    /* 00520eff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520f00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520f01: ret 0xc */ FN_RET(0x00520ebc); r_esp += 16; return;
}

void f_00520f04(void) /* sub_520F04 */
{
    FN_ENTER(0x00520f04);
    /* 00520f04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00520f05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520f06: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00520f08: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 00520f0f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520f14: je 0x520f36 */ if (fZ) goto L_00520f36;
L_00520f16:; BB(0x00520f16);
    /* 00520f16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520f17: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x520f1cu); f_007b4d18();
    /* 00520f1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520f1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520f1f: je 0x520f2f */ if (fZ) goto L_00520f2f;
L_00520f21:; BB(0x00520f21);
    /* 00520f21: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 00520f27: call 0x520f40 */ r_esp -= 4; W32(r_esp, 0x520f2cu); f_00520f40();
    /* 00520f2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520f2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520f2e: ret  */ FN_RET(0x00520f04); r_esp += 4; return;
L_00520f2f:; BB(0x00520f2f);
    /* 00520f2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00520f31: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x520f36u); f_00520f68();
L_00520f36:; BB(0x00520f36);
    /* 00520f36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520f38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520f39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00520f3a: ret  */ FN_RET(0x00520f04); r_esp += 4; return;
}

void f_00520f3c(void) /* sub_520F3C */
{
    FN_ENTER(0x00520f3c);
    /* 00520f3c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00520f40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520f41: mov esi, eax */ r_esi = r_eax;
    /* 00520f43: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520f45: je 0x520f64 */ if (fZ) goto L_00520f64;
L_00520f47:; BB(0x00520f47);
    /* 00520f47: mov ecx, esi */ r_ecx = r_esi;
    /* 00520f49: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x520f4eu); f_008173b4();
    /* 00520f4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520f50: je 0x520f64 */ if (fZ) goto L_00520f64;
L_00520f52:; BB(0x00520f52);
    /* 00520f52: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00520f55: test eax, 0x2040800 */ {  u32 a = r_eax; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520f5a: mov eax, 0 */ r_eax = 0x0u;
    /* 00520f5f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00520f62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520f63: ret  */ FN_RET(0x00520f3c); r_esp += 4; return;
L_00520f64:; BB(0x00520f64);
    /* 00520f64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520f67: ret  */ FN_RET(0x00520f3c); r_esp += 4; return;
}

void f_00520f40(void) /* sub_520F40 */
{
    FN_ENTER(0x00520f40);
    /* 00520f40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00520f41: mov esi, eax */ r_esi = r_eax;
    /* 00520f43: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520f45: je 0x520f64 */ if (fZ) goto L_00520f64;
L_00520f47:; BB(0x00520f47);
    /* 00520f47: mov ecx, esi */ r_ecx = r_esi;
    /* 00520f49: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x520f4eu); f_008173b4();
    /* 00520f4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520f50: je 0x520f64 */ if (fZ) goto L_00520f64;
L_00520f52:; BB(0x00520f52);
    /* 00520f52: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00520f55: test eax, 0x2040800 */ {  u32 a = r_eax; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520f5a: mov eax, 0 */ r_eax = 0x0u;
    /* 00520f5f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00520f62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520f63: ret  */ FN_RET(0x00520f40); r_esp += 4; return;
L_00520f64:; BB(0x00520f64);
    /* 00520f64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520f66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00520f67: ret  */ FN_RET(0x00520f40); r_esp += 4; return;
}

void f_00520f68(void) /* sub_520F68 */
{
    FN_ENTER(0x00520f68);
    /* 00520f68: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 00520f72: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00520f77: mov word ptr [ecx + 0x394], ax */ W16((u32)(r_ecx+0x394u), (u16)r_eax);
    /* 00520f7e: ret  */ FN_RET(0x00520f68); r_esp += 4; return;
}

void f_00520f8c(void) /* sub_520F8C */
{
    FN_ENTER(0x00520f8c);
    /* 00520f8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520f8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00520f8f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00520f93: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520f95: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x520f9au); f_00521160();
    /* 00520f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520f9b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00520f9d: call 0x520fa8 */ r_esp -= 4; W32(r_esp, 0x520fa2u); f_00520fa8();
    /* 00520fa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00520fa3: ret 4 */ FN_RET(0x00520f8c); r_esp += 8; return;
}

void f_00520fa8(void) /* sub_520FA8 */
{
    FN_ENTER(0x00520fa8);
    /* 00520fa8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00520fad: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00520fb2: je 0x520fc2 */ if (fZ) goto L_00520fc2;
L_00520fb4:; BB(0x00520fb4);
    /* 00520fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520fb5: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x520fbau); f_00520fcc();
    /* 00520fba: mov eax, 1 */ r_eax = 0x1u;
    /* 00520fbf: ret 4 */ FN_RET(0x00520fa8); r_esp += 8; return;
L_00520fc2:; BB(0x00520fc2);
    /* 00520fc2: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x520fc7u); f_00520f68();
    /* 00520fc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00520fc9: ret 4 */ FN_RET(0x00520fa8); r_esp += 8; return;
}

void f_00520fcc(void) /* sub_520FCC */
{
    FN_ENTER(0x00520fcc);
    /* 00520fcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00520fcd: mov edi, ecx */ r_edi = r_ecx;
    /* 00520fcf: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00520fd4: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00520fd9: je 0x520ff3 */ if (fZ) goto L_00520ff3;
L_00520fdb:; BB(0x00520fdb);
    /* 00520fdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00520fdc: mov word ptr [edi + 0x394], ax */ W16((u32)(r_edi+0x394u), (u16)r_eax);
    /* 00520fe3: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x520fe8u); f_00578c74();
    /* 00520fe8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00520fe9: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 00520fef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00520ff0: ret 4 */ FN_RET(0x00520fcc); r_esp += 8; return;
L_00520ff3:; BB(0x00520ff3);
    /* 00520ff3: mov dword ptr [edi + 0x398], 0 */ W32((u32)(r_edi+0x398u), 0x0u);
    /* 00520ffd: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00521002: mov word ptr [edi + 0x394], ax */ W16((u32)(r_edi+0x394u), (u16)r_eax);
    /* 00521009: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052100a: ret 4 */ FN_RET(0x00520fcc); r_esp += 8; return;
}

