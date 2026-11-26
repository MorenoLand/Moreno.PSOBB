#include "protos.h"

void f_006bf068(void) /* sub_6BF068 */
{
    FN_ENTER(0x006bf068);
    /* 006bf068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf069: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf06a: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bf06d: mov edi, ecx */ r_edi = r_ecx;
    /* 006bf06f: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 006bf075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bf077: jl 0x6bf215 */ if ((fS!=fO)) goto L_006bf215;
L_006bf07d:; BB(0x006bf07d);
    /* 006bf07d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf07e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bf083u); f_006dc358();
    /* 006bf083: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf086: jne 0x6bf215 */ if (!fZ) goto L_006bf215;
L_006bf08c:; BB(0x006bf08c);
    /* 006bf08c: mov edx, dword ptr [edi + 0x468] */ r_edx = R32((u32)(r_edi+0x468u));
    /* 006bf092: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bf094: jle 0x6bf21b */ if ((fZ||fS!=fO)) goto L_006bf21b;
L_006bf09a:; BB(0x006bf09a);
    /* 006bf09a: mov eax, dword ptr [edi + 0x460] */ r_eax = R32((u32)(r_edi+0x460u));
    /* 006bf0a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf0a2: je 0x6bf0bb */ if (fZ) goto L_006bf0bb;
L_006bf0a4:; BB(0x006bf0a4);
    /* 006bf0a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf0a5: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bf0aau); f_0082e960();
    /* 006bf0aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf0ab: mov edx, dword ptr [edi + 0x468] */ r_edx = R32((u32)(r_edi+0x468u));
    /* 006bf0b1: mov dword ptr [edi + 0x460], 0 */ W32((u32)(r_edi+0x460u), 0x0u);
L_006bf0bb:; BB(0x006bf0bb);
    /* 006bf0bb: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bf0be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf0bf: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bf0c4u); f_0082e940();
    /* 006bf0c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf0c5: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 006bf0cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf0cd: je 0x6bf20b */ if (fZ) goto L_006bf20b;
L_006bf0d3:; BB(0x006bf0d3);
    /* 006bf0d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bf0d5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006bf0d8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006bf0dc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006bf0e0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006bf0e4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006bf0e8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006bf0ec: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006bf0f0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006bf0f4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006bf0f8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006bf0fc: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006bf100: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006bf104: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006bf108: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006bf10c: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006bf110: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006bf114: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006bf118: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006bf11c: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006bf120: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006bf124: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006bf128: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006bf12c: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006bf130: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006bf134: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006bf137: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf139: push 0x9ceab4 */ { u32 v = 0x9ceab4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf13e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf13f: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bf144u); f_00858900();
    /* 006bf144: lea eax, [esp + 0x1e] */ r_eax = (u32)(r_esp+0x1eu);
    /* 006bf148: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf14a: push 0xa95d00 */ { u32 v = 0xa95d00u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf14f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf150: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bf155u); f_00858900();
    /* 006bf155: mov ecx, 0xa95e4c */ r_ecx = 0xa95e4cu;
    /* 006bf15a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bf15c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006bf15f: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 006bf162: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006bf166: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006bf169: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006bf16d: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 006bf171: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006bf175: mov esi, dword ptr [0xa95d28] */ r_esi = R32((u32)(0xa95d28u));
    /* 006bf17b: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 006bf17f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bf181: mov edx, 1 */ r_edx = 0x1u;
    /* 006bf186: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006bf18a: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006bf18e: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 006bf193: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 006bf198: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006bf19c: mov eax, dword ptr [0xa95d24] */ r_eax = R32((u32)(0xa95d24u));
    /* 006bf1a1: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 006bf1a6: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 006bf1aa: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006bf1ae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf1b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf1b1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bf1b6u); f_0061cdb0();
    /* 006bf1b6: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006bf1ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf1bb: push dword ptr [edi + 0x460] */ { u32 v = R32((u32)(r_edi+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bf1c1: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6bf1c6u); f_0082c34c();
    /* 006bf1c6: mov esi, eax */ r_esi = r_eax;
    /* 006bf1c8: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006bf1cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf1cd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bf1d2u); f_0061cdb0();
    /* 006bf1d2: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf1d5: cmp esi, 0xffffff00 */ {  u32 a = r_esi; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf1db: jne 0x6bf1ed */ if (!fZ) goto L_006bf1ed;
L_006bf1dd:; BB(0x006bf1dd);
    /* 006bf1dd: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
    /* 006bf1e7: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf1ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf1eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf1ec: ret  */ FN_RET(0x006bf068); r_esp += 4; return;
L_006bf1ed:; BB(0x006bf1ed);
    /* 006bf1ed: cmp esi, dword ptr [edi + 0x468] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x468u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf1f3: je 0x6bf1fb */ if (fZ) goto L_006bf1fb;
L_006bf1f5:; BB(0x006bf1f5);
    /* 006bf1f5: mov dword ptr [edi + 0x468], esi */ W32((u32)(r_edi+0x468u), r_esi);
L_006bf1fb:; BB(0x006bf1fb);
    /* 006bf1fb: mov dword ptr [edi + 0x49c], 0xc */ W32((u32)(r_edi+0x49cu), 0xcu);
    /* 006bf205: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf208: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf209: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf20a: ret  */ FN_RET(0x006bf068); r_esp += 4; return;
L_006bf20b:; BB(0x006bf20b);
    /* 006bf20b: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
L_006bf215:; BB(0x006bf215);
    /* 006bf215: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf218: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf219: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf21a: ret  */ FN_RET(0x006bf068); r_esp += 4; return;
L_006bf21b:; BB(0x006bf21b);
    /* 006bf21b: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
    /* 006bf225: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf228: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf229: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf22a: ret  */ FN_RET(0x006bf068); r_esp += 4; return;
}

void f_006bf22c(void) /* sub_6BF22C */
{
    FN_ENTER(0x006bf22c);
    /* 006bf22c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf22d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bf22f: push dword ptr [ebx + 0x45c] */ { u32 v = R32((u32)(r_ebx+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bf235: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bf23au); f_006dc358();
    /* 006bf23a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf23b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bf23d: jne 0x6bf26e */ if (!fZ) goto L_006bf26e;
L_006bf23f:; BB(0x006bf23f);
    /* 006bf23f: mov eax, dword ptr [ebx + 0x460] */ r_eax = R32((u32)(r_ebx+0x460u));
    /* 006bf245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bf247: je 0x6bf25a */ if (fZ) goto L_006bf25a;
L_006bf249:; BB(0x006bf249);
    /* 006bf249: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf24a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bf24fu); f_0082e960();
    /* 006bf24f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf250: mov dword ptr [ebx + 0x460], 0 */ W32((u32)(r_ebx+0x460u), 0x0u);
L_006bf25a:; BB(0x006bf25a);
    /* 006bf25a: mov dword ptr [ebx + 0x49c], 0xb */ W32((u32)(r_ebx+0x49cu), 0xbu);
    /* 006bf264: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
L_006bf26e:; BB(0x006bf26e);
    /* 006bf26e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bf26f: ret  */ FN_RET(0x006bf22c); r_esp += 4; return;
}

void f_006bf270(void) /* sub_6BF270 */
{
    FN_ENTER(0x006bf270);
    /* 006bf270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf271: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bf272: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf273: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bf276: mov edi, ecx */ r_edi = r_ecx;
    /* 006bf278: push dword ptr [edi + 0x464] */ { u32 v = R32((u32)(r_edi+0x464u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bf27e: push dword ptr [edi + 0x460] */ { u32 v = R32((u32)(r_edi+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bf284: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006bf28e: lea eax, [edi + 0x470] */ r_eax = (u32)(r_edi+0x470u);
    /* 006bf294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf295: push dword ptr [edi + 0x45c] */ { u32 v = R32((u32)(r_edi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bf29b: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6bf2a0u); f_00828928();
    /* 006bf2a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf2a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf2a5: jne 0x6bf316 */ if (!fZ) goto L_006bf316;
L_006bf2a7:; BB(0x006bf2a7);
    /* 006bf2a7: mov dword ptr [edi + 0x49c], 0xa */ W32((u32)(r_edi+0x49cu), 0xau);
    /* 006bf2b1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006bf2b3: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bf2b8u); f_007930dc();
    /* 006bf2b8: mov ebp, eax */ r_ebp = r_eax;
    /* 006bf2ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf2bd: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006bf2c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf2c5: je 0x6bf2e8 */ if (fZ) goto L_006bf2e8;
L_006bf2c7:; BB(0x006bf2c7);
    /* 006bf2c7: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
L_006bf2ca:; BB(0x006bf2ca);
    /* 006bf2ca: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf2cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bf2d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf2d2: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf2d7u); f_006db5d4();
    /* 006bf2d7: mov dword ptr [0xa95d6c], 1 */ W32((u32)(0xa95d6cu), 0x1u);
    /* 006bf2e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf2e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bf2e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf2e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf2e7: ret  */ FN_RET(0x006bf270); r_esp += 4; return;
L_006bf2e8:; BB(0x006bf2e8);
    /* 006bf2e8: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006bf2ef: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006bf2f7: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf2f9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf2feu); f_0073ec50();
    /* 006bf2fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf2ff: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006bf302: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf304: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
    /* 006bf307: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf309: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bf30eu); f_006dbcf0();
    /* 006bf30e: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006bf314: jmp 0x6bf2ca */ goto L_006bf2ca;
L_006bf316:; BB(0x006bf316);
    /* 006bf316: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 006bf320: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf323: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bf324: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf325: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf326: ret  */ FN_RET(0x006bf270); r_esp += 4; return;
}

void f_006bf328(void) /* sub_6BF328 */
{
    FN_ENTER(0x006bf328);
    /* 006bf328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf329: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf32a: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bf32d: mov edi, ecx */ r_edi = r_ecx;
    /* 006bf32f: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 006bf335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bf337: jl 0x6bf4d5 */ if ((fS!=fO)) goto L_006bf4d5;
L_006bf33d:; BB(0x006bf33d);
    /* 006bf33d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf33e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bf343u); f_006dc358();
    /* 006bf343: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf344: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf346: jne 0x6bf4d5 */ if (!fZ) goto L_006bf4d5;
L_006bf34c:; BB(0x006bf34c);
    /* 006bf34c: mov edx, dword ptr [edi + 0x464] */ r_edx = R32((u32)(r_edi+0x464u));
    /* 006bf352: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006bf354: jle 0x6bf4db */ if ((fZ||fS!=fO)) goto L_006bf4db;
L_006bf35a:; BB(0x006bf35a);
    /* 006bf35a: mov eax, dword ptr [edi + 0x460] */ r_eax = R32((u32)(r_edi+0x460u));
    /* 006bf360: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf362: je 0x6bf37b */ if (fZ) goto L_006bf37b;
L_006bf364:; BB(0x006bf364);
    /* 006bf364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf365: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bf36au); f_0082e960();
    /* 006bf36a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf36b: mov edx, dword ptr [edi + 0x464] */ r_edx = R32((u32)(r_edi+0x464u));
    /* 006bf371: mov dword ptr [edi + 0x460], 0 */ W32((u32)(r_edi+0x460u), 0x0u);
L_006bf37b:; BB(0x006bf37b);
    /* 006bf37b: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bf37e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf37f: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bf384u); f_0082e940();
    /* 006bf384: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf385: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 006bf38b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf38d: je 0x6bf4cb */ if (fZ) goto L_006bf4cb;
L_006bf393:; BB(0x006bf393);
    /* 006bf393: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bf395: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006bf398: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006bf39c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006bf3a0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006bf3a4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006bf3a8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006bf3ac: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006bf3b0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006bf3b4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006bf3b8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006bf3bc: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006bf3c0: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006bf3c4: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006bf3c8: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006bf3cc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006bf3d0: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006bf3d4: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006bf3d8: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006bf3dc: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006bf3e0: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006bf3e4: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006bf3e8: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006bf3ec: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006bf3f0: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006bf3f4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006bf3f7: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf3f9: push 0x9ceab4 */ { u32 v = 0x9ceab4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf3fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf3ff: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bf404u); f_00858900();
    /* 006bf404: lea eax, [esp + 0x1e] */ r_eax = (u32)(r_esp+0x1eu);
    /* 006bf408: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf40a: push 0xa95ca0 */ { u32 v = 0xa95ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf40f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf410: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bf415u); f_00858900();
    /* 006bf415: mov ecx, 0xa95e4c */ r_ecx = 0xa95e4cu;
    /* 006bf41a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006bf41c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006bf41f: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 006bf422: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006bf426: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006bf429: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006bf42d: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 006bf431: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006bf435: mov esi, dword ptr [0xa95cc8] */ r_esi = R32((u32)(0xa95cc8u));
    /* 006bf43b: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 006bf43f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bf441: mov edx, 1 */ r_edx = 0x1u;
    /* 006bf446: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006bf44a: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006bf44e: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 006bf453: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 006bf458: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006bf45c: mov eax, dword ptr [0xa95cc4] */ r_eax = R32((u32)(0xa95cc4u));
    /* 006bf461: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 006bf466: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 006bf46a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006bf46e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf471: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bf476u); f_0061cdb0();
    /* 006bf476: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006bf47a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf47b: push dword ptr [edi + 0x460] */ { u32 v = R32((u32)(r_edi+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bf481: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6bf486u); f_0082c34c();
    /* 006bf486: mov esi, eax */ r_esi = r_eax;
    /* 006bf488: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006bf48c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf48d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6bf492u); f_0061cdb0();
    /* 006bf492: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf495: cmp esi, 0xffffff00 */ {  u32 a = r_esi; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf49b: jne 0x6bf4ad */ if (!fZ) goto L_006bf4ad;
L_006bf49d:; BB(0x006bf49d);
    /* 006bf49d: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
    /* 006bf4a7: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf4aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf4ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf4ac: ret  */ FN_RET(0x006bf328); r_esp += 4; return;
L_006bf4ad:; BB(0x006bf4ad);
    /* 006bf4ad: cmp esi, dword ptr [edi + 0x464] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x464u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf4b3: je 0x6bf4bb */ if (fZ) goto L_006bf4bb;
L_006bf4b5:; BB(0x006bf4b5);
    /* 006bf4b5: mov dword ptr [edi + 0x464], esi */ W32((u32)(r_edi+0x464u), r_esi);
L_006bf4bb:; BB(0x006bf4bb);
    /* 006bf4bb: mov dword ptr [edi + 0x49c], 9 */ W32((u32)(r_edi+0x49cu), 0x9u);
    /* 006bf4c5: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf4c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf4c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf4ca: ret  */ FN_RET(0x006bf328); r_esp += 4; return;
L_006bf4cb:; BB(0x006bf4cb);
    /* 006bf4cb: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
L_006bf4d5:; BB(0x006bf4d5);
    /* 006bf4d5: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf4d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf4d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf4da: ret  */ FN_RET(0x006bf328); r_esp += 4; return;
L_006bf4db:; BB(0x006bf4db);
    /* 006bf4db: mov dword ptr [edi + 0x49c], 0x11 */ W32((u32)(r_edi+0x49cu), 0x11u);
    /* 006bf4e5: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf4e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf4e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf4ea: ret  */ FN_RET(0x006bf328); r_esp += 4; return;
}

void f_006bf4ec(void) /* sub_6BF4EC */
{
    FN_ENTER(0x006bf4ec);
    /* 006bf4ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf4ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf4ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bf4ef: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bf4f2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006bf4f4: mov ecx, dword ptr [ebp + 0x490] */ r_ecx = R32((u32)(r_ebp+0x490u));
    /* 006bf4fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf4fc: je 0x6bf64f */ if (fZ) goto L_006bf64f;
L_006bf502:; BB(0x006bf502);
    /* 006bf502: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bf509: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bf50b: je 0x6bf5db */ if (fZ) goto L_006bf5db;
L_006bf511:; BB(0x006bf511);
    /* 006bf511: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6bf516u); f_007365f4();
    /* 006bf516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf518: jne 0x6bf544 */ if (!fZ) goto L_006bf544;
L_006bf51a:; BB(0x006bf51a);
    /* 006bf51a: mov ecx, dword ptr [ebp + 0x490] */ r_ecx = R32((u32)(r_ebp+0x490u));
    /* 006bf520: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf522: je 0x6bf533 */ if (fZ) goto L_006bf533;
L_006bf524:; BB(0x006bf524);
    /* 006bf524: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bf529u); f_007127b0();
    /* 006bf529: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
L_006bf533:; BB(0x006bf533);
    /* 006bf533: mov dword ptr [ebp + 0x49c], 7 */ W32((u32)(r_ebp+0x49cu), 0x7u);
    /* 006bf53d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf540: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf541: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf542: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf543: ret  */ FN_RET(0x006bf4ec); r_esp += 4; return;
L_006bf544:; BB(0x006bf544);
    /* 006bf544: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf547: jne 0x6bf5ce */ if (!fZ) goto L_006bf5ce;
L_006bf54d:; BB(0x006bf54d);
    /* 006bf54d: mov ecx, dword ptr [ebp + 0x490] */ r_ecx = R32((u32)(r_ebp+0x490u));
    /* 006bf553: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf555: je 0x6bf566 */ if (fZ) goto L_006bf566;
L_006bf557:; BB(0x006bf557);
    /* 006bf557: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bf55cu); f_007127b0();
    /* 006bf55c: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
L_006bf566:; BB(0x006bf566);
    /* 006bf566: mov edx, dword ptr [ebp + 0x48c] */ r_edx = R32((u32)(r_ebp+0x48cu));
    /* 006bf56c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf56e: je 0x6bf591 */ if (fZ) goto L_006bf591;
L_006bf570:; BB(0x006bf570);
    /* 006bf570: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006bf577: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bf57c: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006bf57f: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006bf586: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf588: je 0x6bf591 */ if (fZ) goto L_006bf591;
L_006bf58a:; BB(0x006bf58a);
    /* 006bf58a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf58c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6bf591u); f_00760acc();
L_006bf591:; BB(0x006bf591);
    /* 006bf591: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf593: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006bf595: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bf59au); f_00792fe8();
    /* 006bf59a: mov edi, eax */ r_edi = r_eax;
    /* 006bf59c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf59f: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bf5a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf5a7: je 0x6bf656 */ if (fZ) goto L_006bf656;
L_006bf5ad:; BB(0x006bf5ad);
    /* 006bf5ad: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bf5b0:; BB(0x006bf5b0);
    /* 006bf5b0: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf5b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf5b6: mov ecx, esi */ r_ecx = r_esi;
    /* 006bf5b8: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf5bdu); f_006db5d4();
    /* 006bf5bd: mov dword ptr [ebp + 0x49c], 4 */ W32((u32)(r_ebp+0x49cu), 0x4u);
    /* 006bf5c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf5ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf5cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf5cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf5cd: ret  */ FN_RET(0x006bf4ec); r_esp += 4; return;
L_006bf5ce:; BB(0x006bf5ce);
    /* 006bf5ce: mov ecx, dword ptr [ebp + 0x490] */ r_ecx = R32((u32)(r_ebp+0x490u));
    /* 006bf5d4: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
L_006bf5db:; BB(0x006bf5db);
    /* 006bf5db: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bf5dd: je 0x6bf64f */ if (fZ) goto L_006bf64f;
L_006bf5df:; BB(0x006bf5df);
    /* 006bf5df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf5e1: je 0x6bf5f2 */ if (fZ) goto L_006bf5f2;
L_006bf5e3:; BB(0x006bf5e3);
    /* 006bf5e3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bf5e8u); f_007127b0();
    /* 006bf5e8: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
L_006bf5f2:; BB(0x006bf5f2);
    /* 006bf5f2: mov edx, dword ptr [ebp + 0x48c] */ r_edx = R32((u32)(r_ebp+0x48cu));
    /* 006bf5f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf5fa: je 0x6bf61d */ if (fZ) goto L_006bf61d;
L_006bf5fc:; BB(0x006bf5fc);
    /* 006bf5fc: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006bf603: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bf608: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006bf60b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006bf612: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf614: je 0x6bf61d */ if (fZ) goto L_006bf61d;
L_006bf616:; BB(0x006bf616);
    /* 006bf616: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf618: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6bf61du); f_00760acc();
L_006bf61d:; BB(0x006bf61d);
    /* 006bf61d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf61f: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006bf621: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bf626u); f_00792fe8();
    /* 006bf626: mov edi, eax */ r_edi = r_eax;
    /* 006bf628: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf62b: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bf631: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf633: je 0x6bf687 */ if (fZ) goto L_006bf687;
L_006bf635:; BB(0x006bf635);
    /* 006bf635: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bf638:; BB(0x006bf638);
    /* 006bf638: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf63d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf63e: mov ecx, esi */ r_ecx = r_esi;
    /* 006bf640: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf645u); f_006db5d4();
    /* 006bf645: mov dword ptr [ebp + 0x49c], 4 */ W32((u32)(r_ebp+0x49cu), 0x4u);
L_006bf64f:; BB(0x006bf64f);
    /* 006bf64f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bf652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf653: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bf654: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bf655: ret  */ FN_RET(0x006bf4ec); r_esp += 4; return;
L_006bf656:; BB(0x006bf656);
    /* 006bf656: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006bf65d: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006bf665: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf667: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf66cu); f_0073ec50();
    /* 006bf66c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf66d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006bf670: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf672: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bf675: mov ecx, esi */ r_ecx = r_esi;
    /* 006bf677: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bf67cu); f_006dbcf0();
    /* 006bf67c: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bf682: jmp 0x6bf5b0 */ goto L_006bf5b0;
L_006bf687:; BB(0x006bf687);
    /* 006bf687: mov dword ptr [esp + 8], 0x43de0000 */ W32((u32)(r_esp+0x8u), 0x43de0000u);
    /* 006bf68f: mov dword ptr [esp + 0xc], 0x42a80000 */ W32((u32)(r_esp+0xcu), 0x42a80000u);
    /* 006bf697: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf699: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf69eu); f_0073ec50();
    /* 006bf69e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf69f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 006bf6a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6a5: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bf6a8: mov ecx, esi */ r_ecx = r_esi;
    /* 006bf6aa: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bf6afu); f_006dbcf0();
    /* 006bf6af: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bf6b5: jmp 0x6bf638 */ goto L_006bf638;
}

void f_006bf6b8(void) /* sub_6BF6B8 */
{
    FN_ENTER(0x006bf6b8);
    /* 006bf6b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006bf6bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6bd: push 0x8ec4a4 */ { u32 v = 0x8ec4a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bf6c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bf6d0: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bf6d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bf6d6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006bf6d9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006bf6dc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006bf6df: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006bf6e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6e4: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6bf6e9u); f_0082c204();
    /* 006bf6e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf6ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf6ec: je 0x6bf8e8 */ if (fZ) goto L_006bf8e8;
L_006bf6f2:; BB(0x006bf6f2);
    /* 006bf6f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bf6f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf6f6: call 0x82c22c */ r_esp -= 4; W32(r_esp, 0x6bf6fbu); f_0082c22c();
    /* 006bf6fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf6fe: cmp eax, 0xffffff03 */ {  u32 a = r_eax; u32 b = 0xffffff03u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf703: je 0x6bf87a */ if (fZ) goto L_006bf87a;
L_006bf709:; BB(0x006bf709);
    /* 006bf709: cmp eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bf70e: je 0x6bf715 */ if (fZ) goto L_006bf715;
L_006bf710:; BB(0x006bf710);
    /* 006bf710: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bf713: jne 0x6bf723 */ if (!fZ) goto L_006bf723;
L_006bf715:; BB(0x006bf715);
    /* 006bf715: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bf718: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bf71f: mov esp, ebp */ r_esp = r_ebp;
    /* 006bf721: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf722: ret  */ FN_RET(0x006bf6b8); r_esp += 4; return;
L_006bf723:; BB(0x006bf723);
    /* 006bf723: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf726: cmp eax, dword ptr [edx + 0x430] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x430u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bf72c: jge 0x6bf77c */ if ((fS==fO)) goto L_006bf77c;
L_006bf72e:; BB(0x006bf72e);
    /* 006bf72e: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf730: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bf735u); f_007930dc();
    /* 006bf735: mov esi, eax */ r_esi = r_eax;
    /* 006bf737: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf73a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf73d: mov ecx, dword ptr [edx + 0x494] */ r_ecx = R32((u32)(r_edx+0x494u));
    /* 006bf743: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf745: je 0x6bf960 */ if (fZ) goto L_006bf960;
L_006bf74b:; BB(0x006bf74b);
    /* 006bf74b: lea ebx, [edx + 0x1c] */ r_ebx = (u32)(r_edx+0x1cu);
L_006bf74e:; BB(0x006bf74e);
    /* 006bf74e: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf753: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf754: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf756: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf75bu); f_006db5d4();
    /* 006bf75b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf75e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bf761: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bf764: mov dword ptr [eax + 0x49c], 0x12 */ W32((u32)(r_eax+0x49cu), 0x12u);
    /* 006bf76e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bf771: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bf778: mov esp, ebp */ r_esp = r_ebp;
    /* 006bf77a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf77b: ret  */ FN_RET(0x006bf6b8); r_esp += 4; return;
L_006bf77c:; BB(0x006bf77c);
    /* 006bf77c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf77e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bf783u); f_006dc358();
    /* 006bf783: mov ebx, eax */ r_ebx = r_eax;
    /* 006bf785: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf787: call 0x8002f0 */ r_esp -= 4; W32(r_esp, 0x6bf78cu); f_008002f0();
    /* 006bf78c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf78f: cmp ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bf795: jge 0x6bf82c */ if ((fS==fO)) goto L_006bf82c;
L_006bf79b:; BB(0x006bf79b);
    /* 006bf79b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf79e: cmp eax, dword ptr [edx + 0x498] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x498u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006bf7a4: jl 0x6bf82c */ if ((fS!=fO)) goto L_006bf82c;
L_006bf7aa:; BB(0x006bf7aa);
    /* 006bf7aa: mov eax, edx */ r_eax = r_edx;
    /* 006bf7ac: mov ecx, dword ptr [eax + 0x490] */ r_ecx = R32((u32)(r_eax+0x490u));
    /* 006bf7b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf7b4: je 0x6bf7c8 */ if (fZ) goto L_006bf7c8;
L_006bf7b6:; BB(0x006bf7b6);
    /* 006bf7b6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bf7bbu); f_007127b0();
    /* 006bf7bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf7be: mov dword ptr [eax + 0x490], 0 */ W32((u32)(r_eax+0x490u), 0x0u);
L_006bf7c8:; BB(0x006bf7c8);
    /* 006bf7c8: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006bf7ca: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf7cfu); f_0073ec50();
    /* 006bf7cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf7d0: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x6bf7d5u); f_00735874();
    /* 006bf7d5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf7d8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf7da: mov dword ptr [edx + 0x490], eax */ W32((u32)(r_edx+0x490u), r_eax);
    /* 006bf7e0: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bf7e5u); f_007930dc();
    /* 006bf7e5: mov esi, eax */ r_esi = r_eax;
    /* 006bf7e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf7ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf7ed: mov ecx, dword ptr [edx + 0x494] */ r_ecx = R32((u32)(r_edx+0x494u));
    /* 006bf7f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf7f5: je 0x6bf996 */ if (fZ) goto L_006bf996;
L_006bf7fb:; BB(0x006bf7fb);
    /* 006bf7fb: lea ebx, [edx + 0x1c] */ r_ebx = (u32)(r_edx+0x1cu);
L_006bf7fe:; BB(0x006bf7fe);
    /* 006bf7fe: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf803: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf804: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf806: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf80bu); f_006db5d4();
    /* 006bf80b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf80e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bf811: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bf814: mov dword ptr [eax + 0x49c], 6 */ W32((u32)(r_eax+0x49cu), 0x6u);
    /* 006bf81e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bf821: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bf828: mov esp, ebp */ r_esp = r_ebp;
    /* 006bf82a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf82b: ret  */ FN_RET(0x006bf6b8); r_esp += 4; return;
L_006bf82c:; BB(0x006bf82c);
    /* 006bf82c: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf82e: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bf833u); f_007930dc();
    /* 006bf833: mov esi, eax */ r_esi = r_eax;
    /* 006bf835: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf838: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf83b: mov ecx, dword ptr [edx + 0x494] */ r_ecx = R32((u32)(r_edx+0x494u));
    /* 006bf841: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf843: je 0x6bf9cc */ if (fZ) goto L_006bf9cc;
L_006bf849:; BB(0x006bf849);
    /* 006bf849: lea ebx, [edx + 0x1c] */ r_ebx = (u32)(r_edx+0x1cu);
L_006bf84c:; BB(0x006bf84c);
    /* 006bf84c: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf851: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf852: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf854: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf859u); f_006db5d4();
    /* 006bf859: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf85c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bf85f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bf862: mov dword ptr [eax + 0x49c], 0x12 */ W32((u32)(r_eax+0x49cu), 0x12u);
    /* 006bf86c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bf86f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bf876: mov esp, ebp */ r_esp = r_ebp;
    /* 006bf878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf879: ret  */ FN_RET(0x006bf6b8); r_esp += 4; return;
L_006bf87a:; BB(0x006bf87a);
    /* 006bf87a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006bf881: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bf883: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bf888u); f_005caba4();
    /* 006bf888: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bf88b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf88e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006bf891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf893: je 0x6bfa02 */ if (fZ) goto L_006bfa02;
L_006bf899:; BB(0x006bf899);
    /* 006bf899: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006bf8a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bf8a7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf8aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bf8ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf8af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf8b0: call 0x6bfa44 */ r_esp -= 4; W32(r_esp, 0x6bf8b5u); f_006bfa44();
    /* 006bf8b5: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006bf8bc:; BB(0x006bf8bc);
    /* 006bf8bc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bf8bf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf8c2: mov dword ptr [eax + 0x1c], 0x6bfe10 */ W32((u32)(r_eax+0x1cu), 0x6bfe10u);
    /* 006bf8c9: mov dword ptr [eax + 0x20], 0x6bfe10 */ W32((u32)(r_eax+0x20u), 0x6bfe10u);
    /* 006bf8d0: mov dword ptr [edx + 0x49c], 0x16 */ W32((u32)(r_edx+0x49cu), 0x16u);
    /* 006bf8da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bf8dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bf8e4: mov esp, ebp */ r_esp = r_ebp;
    /* 006bf8e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf8e7: ret  */ FN_RET(0x006bf6b8); r_esp += 4; return;
L_006bf8e8:; BB(0x006bf8e8);
    /* 006bf8e8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bf8edu); f_00694c6c();
    /* 006bf8ed: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bf8f3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bf8f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bf8f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bf8fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bf8fc: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bf903: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bf908u); f_007c1160();
    /* 006bf908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bf90a: je 0x6bf715 */ if (fZ) goto L_006bf715;
L_006bf910:; BB(0x006bf910);
    /* 006bf910: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf912: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006bf914: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bf919u); f_00792fe8();
    /* 006bf919: mov esi, eax */ r_esi = r_eax;
    /* 006bf91b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bf91e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf921: mov ecx, dword ptr [edx + 0x494] */ r_ecx = R32((u32)(r_edx+0x494u));
    /* 006bf927: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bf929: je 0x6bfa0c */ if (fZ) goto L_006bfa0c;
L_006bf92f:; BB(0x006bf92f);
    /* 006bf92f: lea ebx, [edx + 0x1c] */ r_ebx = (u32)(r_edx+0x1cu);
L_006bf932:; BB(0x006bf932);
    /* 006bf932: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf937: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bf938: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf93a: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bf93fu); f_006db5d4();
    /* 006bf93f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf942: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bf945: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bf948: mov dword ptr [eax + 0x49c], 4 */ W32((u32)(r_eax+0x49cu), 0x4u);
    /* 006bf952: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bf955: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bf95c: mov esp, ebp */ r_esp = r_ebp;
    /* 006bf95e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bf95f: ret  */ FN_RET(0x006bf6b8); r_esp += 4; return;
L_006bf960:; BB(0x006bf960);
    /* 006bf960: mov dword ptr [ebp - 0x4c], 0x43de0000 */ W32((u32)(r_ebp+0xffffffb4u), 0x43de0000u);
    /* 006bf967: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf969: mov dword ptr [ebp - 0x48], 0x42a80000 */ W32((u32)(r_ebp+0xffffffb8u), 0x42a80000u);
    /* 006bf970: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf975u); f_0073ec50();
    /* 006bf975: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf976: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf979: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 006bf97c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf97d: lea ebx, [ebx + 0x1c] */ r_ebx = (u32)(r_ebx+0x1cu);
    /* 006bf980: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf983: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bf988u); f_006dbcf0();
    /* 006bf988: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf98b: mov dword ptr [edx + 0x494], eax */ W32((u32)(r_edx+0x494u), r_eax);
    /* 006bf991: jmp 0x6bf74e */ goto L_006bf74e;
L_006bf996:; BB(0x006bf996);
    /* 006bf996: mov dword ptr [ebp - 0x34], 0x43de0000 */ W32((u32)(r_ebp+0xffffffccu), 0x43de0000u);
    /* 006bf99d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf99f: mov dword ptr [ebp - 0x30], 0x42a80000 */ W32((u32)(r_ebp+0xffffffd0u), 0x42a80000u);
    /* 006bf9a6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf9abu); f_0073ec50();
    /* 006bf9ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf9ac: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf9af: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006bf9b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf9b3: lea ebx, [ebx + 0x1c] */ r_ebx = (u32)(r_ebx+0x1cu);
    /* 006bf9b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf9b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf9b9: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bf9beu); f_006dbcf0();
    /* 006bf9be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf9c1: mov dword ptr [edx + 0x494], eax */ W32((u32)(r_edx+0x494u), r_eax);
    /* 006bf9c7: jmp 0x6bf7fe */ goto L_006bf7fe;
L_006bf9cc:; BB(0x006bf9cc);
    /* 006bf9cc: mov dword ptr [ebp - 0x44], 0x43de0000 */ W32((u32)(r_ebp+0xffffffbcu), 0x43de0000u);
    /* 006bf9d3: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bf9d5: mov dword ptr [ebp - 0x40], 0x42a80000 */ W32((u32)(r_ebp+0xffffffc0u), 0x42a80000u);
    /* 006bf9dc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bf9e1u); f_0073ec50();
    /* 006bf9e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bf9e2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf9e5: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 006bf9e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bf9e9: lea ebx, [ebx + 0x1c] */ r_ebx = (u32)(r_ebx+0x1cu);
    /* 006bf9ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bf9ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bf9ef: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bf9f4u); f_006dbcf0();
    /* 006bf9f4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bf9f7: mov dword ptr [edx + 0x494], eax */ W32((u32)(r_edx+0x494u), r_eax);
    /* 006bf9fd: jmp 0x6bf84c */ goto L_006bf84c;
L_006bfa02:; BB(0x006bfa02);
    /* 006bfa02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfa04: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bfa07: jmp 0x6bf8bc */ goto L_006bf8bc;
L_006bfa0c:; BB(0x006bfa0c);
    /* 006bfa0c: mov dword ptr [ebp - 0x2c], 0x43de0000 */ W32((u32)(r_ebp+0xffffffd4u), 0x43de0000u);
    /* 006bfa13: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfa15: mov dword ptr [ebp - 0x28], 0x42a80000 */ W32((u32)(r_ebp+0xffffffd8u), 0x42a80000u);
    /* 006bfa1c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfa21u); f_0073ec50();
    /* 006bfa21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfa22: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bfa25: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 006bfa28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfa29: lea ebx, [ebx + 0x1c] */ r_ebx = (u32)(r_ebx+0x1cu);
    /* 006bfa2c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bfa2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfa2f: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfa34u); f_006dbcf0();
    /* 006bfa34: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bfa37: mov dword ptr [edx + 0x494], eax */ W32((u32)(r_edx+0x494u), r_eax);
    /* 006bfa3d: jmp 0x6bf932 */ goto L_006bf932;
}

void f_006bfa44(void) /* sub_6BFA44 */
{
    FN_ENTER(0x006bfa44);
    /* 006bfa44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfa45: mov edi, ecx */ r_edi = r_ecx;
    /* 006bfa47: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bfa4b: mov ecx, edi */ r_ecx = r_edi;
    /* 006bfa4d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bfa52u); f_008193cc();
    /* 006bfa52: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006bfa56: mov dword ptr [edi], 0xb3b010 */ W32((u32)(r_edi), 0xb3b010u);
    /* 006bfa5c: mov edx, dword ptr [0x9ceaac] */ r_edx = R32((u32)(0x9ceaacu));
    /* 006bfa62: mov dword ptr [edi + 0x2c], 0xc */ W32((u32)(r_edi+0x2cu), 0xcu);
    /* 006bfa69: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006bfa6c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfa6e: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006bfa71: mov dword ptr [edi + 0x30], 0x65 */ W32((u32)(r_edi+0x30u), 0x65u);
    /* 006bfa78: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006bfa7b: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 006bfa7e: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 006bfa81: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 006bfa84: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 006bfa87: mov eax, edi */ r_eax = r_edi;
    /* 006bfa89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfa8a: ret 8 */ FN_RET(0x006bfa44); r_esp += 12; return;
}

void f_006bfa90(void) /* sub_6BFA90 */
{
    FN_ENTER(0x006bfa90);
    /* 006bfa90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfa91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfa92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bfa93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bfa96: mov edi, ecx */ r_edi = r_ecx;
    /* 006bfa98: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bfa9du); f_00694c6c();
    /* 006bfa9d: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bfaa3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bfaa6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bfaa8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bfaaa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bfaac: lea ebp, [eax + eax + 0xaae75c] */ r_ebp = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bfab3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bfab5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bfabau); f_007c1160();
    /* 006bfaba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfabc: je 0x6bfacf */ if (fZ) goto L_006bfacf;
L_006bfabe:; BB(0x006bfabe);
    /* 006bfabe: mov dword ptr [edi + 0x49c], 5 */ W32((u32)(r_edi+0x49cu), 0x5u);
    /* 006bfac8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfacb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfacc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfacd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bface: ret  */ FN_RET(0x006bfa90); r_esp += 4; return;
L_006bfacf:; BB(0x006bfacf);
    /* 006bfacf: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bfad5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bfad7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bfadcu); f_007c1160();
    /* 006bfadc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfade: je 0x6bfb17 */ if (fZ) goto L_006bfb17;
L_006bfae0:; BB(0x006bfae0);
    /* 006bfae0: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfae2: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bfae7u); f_007930dc();
    /* 006bfae7: mov esi, eax */ r_esi = r_eax;
    /* 006bfae9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfaec: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006bfaf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfaf4: je 0x6bfb1e */ if (fZ) goto L_006bfb1e;
L_006bfaf6:; BB(0x006bfaf6);
    /* 006bfaf6: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
L_006bfaf9:; BB(0x006bfaf9);
    /* 006bfaf9: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfafe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfaff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bfb01: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bfb06u); f_006db5d4();
    /* 006bfb06: mov dword ptr [edi + 0x49c], 0x14 */ W32((u32)(r_edi+0x49cu), 0x14u);
    /* 006bfb10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfb13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfb14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfb15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfb16: ret  */ FN_RET(0x006bfa90); r_esp += 4; return;
L_006bfb17:; BB(0x006bfb17);
    /* 006bfb17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfb1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfb1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfb1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfb1d: ret  */ FN_RET(0x006bfa90); r_esp += 4; return;
L_006bfb1e:; BB(0x006bfb1e);
    /* 006bfb1e: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006bfb25: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006bfb2d: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb2f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfb34u); f_0073ec50();
    /* 006bfb34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfb35: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006bfb38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb3a: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
    /* 006bfb3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006bfb3f: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfb44u); f_006dbcf0();
    /* 006bfb44: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006bfb4a: jmp 0x6bfaf9 */ goto L_006bfaf9;
}

void f_006bfb4c(void) /* sub_6BFB4C */
{
    FN_ENTER(0x006bfb4c);
    /* 006bfb4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb4f: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bfb52: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006bfb54: mov eax, dword ptr [ebp + 0x494] */ r_eax = R32((u32)(r_ebp+0x494u));
    /* 006bfb5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfb5c: je 0x6bfb65 */ if (fZ) goto L_006bfb65;
L_006bfb5e:; BB(0x006bfb5e);
    /* 006bfb5e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfb61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfb62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfb63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfb64: ret  */ FN_RET(0x006bfb4c); r_esp += 4; return;
L_006bfb65:; BB(0x006bfb65);
    /* 006bfb65: mov eax, dword ptr [ebp + 0x4a0] */ r_eax = R32((u32)(r_ebp+0x4a0u));
    /* 006bfb6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfb6d: je 0x6bfd72 */ if (fZ) goto L_006bfd72;
L_006bfb73:; BB(0x006bfb73);
    /* 006bfb73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfb76: je 0x6bfd15 */ if (fZ) goto L_006bfd15;
L_006bfb7c:; BB(0x006bfb7c);
    /* 006bfb7c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfb7f: je 0x6bfcb8 */ if (fZ) goto L_006bfcb8;
L_006bfb85:; BB(0x006bfb85);
    /* 006bfb85: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfb88: je 0x6bfbf2 */ if (fZ) goto L_006bfbf2;
L_006bfb8a:; BB(0x006bfb8a);
    /* 006bfb8a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfb8d: jne 0x6bfbbe */ if (!fZ) goto L_006bfbbe;
L_006bfb8f:; BB(0x006bfb8f);
    /* 006bfb8f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb91: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006bfb93: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bfb98u); f_00792fe8();
    /* 006bfb98: mov edi, eax */ r_edi = r_eax;
    /* 006bfb9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfb9d: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bfba3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfba5: je 0x6bfc21 */ if (fZ) goto L_006bfc21;
L_006bfba7:; BB(0x006bfba7);
    /* 006bfba7: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bfbaa:; BB(0x006bfbaa);
    /* 006bfbaa: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbaf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbb0: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfbb2: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bfbb7u); f_006db5d4();
    /* 006bfbb7: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfbba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfbbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfbbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfbbd: ret  */ FN_RET(0x006bfb4c); r_esp += 4; return;
L_006bfbbe:; BB(0x006bfbbe);
    /* 006bfbbe: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfbc1: jne 0x6bfb5e */ if (!fZ) goto L_006bfb5e;
L_006bfbc3:; BB(0x006bfbc3);
    /* 006bfbc3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbc5: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbc7: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bfbccu); f_00792fe8();
    /* 006bfbcc: mov edi, eax */ r_edi = r_eax;
    /* 006bfbce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfbd1: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bfbd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfbd9: je 0x6bfc54 */ if (fZ) goto L_006bfc54;
L_006bfbdb:; BB(0x006bfbdb);
    /* 006bfbdb: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bfbde:; BB(0x006bfbde);
    /* 006bfbde: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbe3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbe4: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfbe6: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bfbebu); f_006db5d4();
    /* 006bfbeb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfbee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfbef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfbf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfbf1: ret  */ FN_RET(0x006bfb4c); r_esp += 4; return;
L_006bfbf2:; BB(0x006bfbf2);
    /* 006bfbf2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbf4: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006bfbf6: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bfbfbu); f_00792fe8();
    /* 006bfbfb: mov edi, eax */ r_edi = r_eax;
    /* 006bfbfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfc00: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bfc06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfc08: je 0x6bfc85 */ if (fZ) goto L_006bfc85;
L_006bfc0a:; BB(0x006bfc0a);
    /* 006bfc0a: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bfc0d:; BB(0x006bfc0d);
    /* 006bfc0d: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc13: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfc15: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bfc1au); f_006db5d4();
    /* 006bfc1a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfc1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfc1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfc1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfc20: ret  */ FN_RET(0x006bfb4c); r_esp += 4; return;
L_006bfc21:; BB(0x006bfc21);
    /* 006bfc21: mov dword ptr [esp + 8], 0x43de0000 */ W32((u32)(r_esp+0x8u), 0x43de0000u);
    /* 006bfc29: mov dword ptr [esp + 0xc], 0x42a80000 */ W32((u32)(r_esp+0xcu), 0x42a80000u);
    /* 006bfc31: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc33: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfc38u); f_0073ec50();
    /* 006bfc38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfc39: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 006bfc3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc3f: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bfc42: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfc44: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfc49u); f_006dbcf0();
    /* 006bfc49: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bfc4f: jmp 0x6bfbaa */ goto L_006bfbaa;
L_006bfc54:; BB(0x006bfc54);
    /* 006bfc54: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006bfc5b: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006bfc63: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc65: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfc6au); f_0073ec50();
    /* 006bfc6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfc6b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006bfc6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc70: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bfc73: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfc75: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfc7au); f_006dbcf0();
    /* 006bfc7a: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bfc80: jmp 0x6bfbde */ goto L_006bfbde;
L_006bfc85:; BB(0x006bfc85);
    /* 006bfc85: mov dword ptr [esp + 0x10], 0x43de0000 */ W32((u32)(r_esp+0x10u), 0x43de0000u);
    /* 006bfc8d: mov dword ptr [esp + 0x14], 0x42a80000 */ W32((u32)(r_esp+0x14u), 0x42a80000u);
    /* 006bfc95: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfc97: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfc9cu); f_0073ec50();
    /* 006bfc9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfc9d: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 006bfca1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfca3: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bfca6: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfca8: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfcadu); f_006dbcf0();
    /* 006bfcad: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bfcb3: jmp 0x6bfc0d */ goto L_006bfc0d;
L_006bfcb8:; BB(0x006bfcb8);
    /* 006bfcb8: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfcba: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bfcbfu); f_007930dc();
    /* 006bfcbf: mov edi, eax */ r_edi = r_eax;
    /* 006bfcc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfcc4: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bfcca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfccc: je 0x6bfce5 */ if (fZ) goto L_006bfce5;
L_006bfcce:; BB(0x006bfcce);
    /* 006bfcce: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bfcd1:; BB(0x006bfcd1);
    /* 006bfcd1: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfcd6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfcd7: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfcd9: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bfcdeu); f_006db5d4();
    /* 006bfcde: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfce1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfce2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfce3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfce4: ret  */ FN_RET(0x006bfb4c); r_esp += 4; return;
L_006bfce5:; BB(0x006bfce5);
    /* 006bfce5: mov dword ptr [esp + 0x18], 0x43de0000 */ W32((u32)(r_esp+0x18u), 0x43de0000u);
    /* 006bfced: mov dword ptr [esp + 0x1c], 0x42a80000 */ W32((u32)(r_esp+0x1cu), 0x42a80000u);
    /* 006bfcf5: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfcf7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfcfcu); f_0073ec50();
    /* 006bfcfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfcfd: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 006bfd01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd03: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bfd06: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfd08: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfd0du); f_006dbcf0();
    /* 006bfd0d: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bfd13: jmp 0x6bfcd1 */ goto L_006bfcd1;
L_006bfd15:; BB(0x006bfd15);
    /* 006bfd15: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd17: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bfd1cu); f_007930dc();
    /* 006bfd1c: mov edi, eax */ r_edi = r_eax;
    /* 006bfd1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfd21: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bfd27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfd29: je 0x6bfd42 */ if (fZ) goto L_006bfd42;
L_006bfd2b:; BB(0x006bfd2b);
    /* 006bfd2b: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bfd2e:; BB(0x006bfd2e);
    /* 006bfd2e: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd34: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfd36: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bfd3bu); f_006db5d4();
    /* 006bfd3b: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfd3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfd3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfd40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfd41: ret  */ FN_RET(0x006bfb4c); r_esp += 4; return;
L_006bfd42:; BB(0x006bfd42);
    /* 006bfd42: mov dword ptr [esp + 0x20], 0x43de0000 */ W32((u32)(r_esp+0x20u), 0x43de0000u);
    /* 006bfd4a: mov dword ptr [esp + 0x24], 0x42a80000 */ W32((u32)(r_esp+0x24u), 0x42a80000u);
    /* 006bfd52: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd54: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfd59u); f_0073ec50();
    /* 006bfd59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfd5a: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 006bfd5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd60: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bfd63: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfd65: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfd6au); f_006dbcf0();
    /* 006bfd6a: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bfd70: jmp 0x6bfd2e */ goto L_006bfd2e;
L_006bfd72:; BB(0x006bfd72);
    /* 006bfd72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd74: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd76: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bfd7bu); f_00792fe8();
    /* 006bfd7b: mov edi, eax */ r_edi = r_eax;
    /* 006bfd7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfd80: mov edx, dword ptr [ebp + 0x494] */ r_edx = R32((u32)(r_ebp+0x494u));
    /* 006bfd86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfd88: je 0x6bfda1 */ if (fZ) goto L_006bfda1;
L_006bfd8a:; BB(0x006bfd8a);
    /* 006bfd8a: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
L_006bfd8d:; BB(0x006bfd8d);
    /* 006bfd8d: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfd93: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfd95: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6bfd9au); f_006db5d4();
    /* 006bfd9a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bfd9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bfd9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfd9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfda0: ret  */ FN_RET(0x006bfb4c); r_esp += 4; return;
L_006bfda1:; BB(0x006bfda1);
    /* 006bfda1: mov dword ptr [esp + 0x28], 0x43de0000 */ W32((u32)(r_esp+0x28u), 0x43de0000u);
    /* 006bfda9: mov dword ptr [esp + 0x2c], 0x42a80000 */ W32((u32)(r_esp+0x2cu), 0x42a80000u);
    /* 006bfdb1: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfdb3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bfdb8u); f_0073ec50();
    /* 006bfdb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfdb9: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006bfdbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfdbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfdbf: lea esi, [ebp + 0x1c] */ r_esi = (u32)(r_ebp+0x1cu);
    /* 006bfdc2: mov ecx, esi */ r_ecx = r_esi;
    /* 006bfdc4: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6bfdc9u); f_006dbcf0();
    /* 006bfdc9: mov dword ptr [ebp + 0x494], eax */ W32((u32)(r_ebp+0x494u), r_eax);
    /* 006bfdcf: jmp 0x6bfd8d */ goto L_006bfd8d;
}

void f_006bfdd4(void) /* sub_6BFDD4 */
{
    FN_ENTER(0x006bfdd4);
    /* 006bfdd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfdd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bfdd7: mov ecx, dword ptr [ebx + 0x490] */ r_ecx = R32((u32)(r_ebx+0x490u));
    /* 006bfddd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfddf: mov dword ptr [ebx + 0x49c], 2 */ W32((u32)(r_ebx+0x49cu), 0x2u);
    /* 006bfde9: je 0x6bfdfa */ if (fZ) goto L_006bfdfa;
L_006bfdeb:; BB(0x006bfdeb);
    /* 006bfdeb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bfdf0u); f_007127b0();
    /* 006bfdf0: mov dword ptr [ebx + 0x490], 0 */ W32((u32)(r_ebx+0x490u), 0x0u);
L_006bfdfa:; BB(0x006bfdfa);
    /* 006bfdfa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bfdfc: call 0x6bd7f0 */ r_esp -= 4; W32(r_esp, 0x6bfe01u); f_006bd7f0();
    /* 006bfe01: mov dword ptr [ebx + 0x42c], 0 */ W32((u32)(r_ebx+0x42cu), 0x0u);
    /* 006bfe0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bfe0c: ret  */ FN_RET(0x006bfdd4); r_esp += 4; return;
}

void f_006bfe10(void)
{
    FN_ENTER(0x006bfe10);
    /* 006bfe10: mov eax, dword ptr [0xa95d40] */ r_eax = R32((u32)(0xa95d40u));
    /* 006bfe15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfe17: je 0x6bfe23 */ if (fZ) goto L_006bfe23;
L_006bfe19:; BB(0x006bfe19);
    /* 006bfe19: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
L_006bfe23:; BB(0x006bfe23);
    /* 006bfe23: ret  */ FN_RET(0x006bfe10); r_esp += 4; return;
}

void f_006bfe24(void) /* sub_6BFE24 */
{
    FN_ENTER(0x006bfe24);
    /* 006bfe24: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 006bfe27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfe29: je 0x6bfe57 */ if (fZ) goto L_006bfe57;
L_006bfe2b:; BB(0x006bfe2b);
    /* 006bfe2b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfe2e: je 0x6bfe51 */ if (fZ) goto L_006bfe51;
L_006bfe30:; BB(0x006bfe30);
    /* 006bfe30: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfe33: je 0x6bfe4b */ if (fZ) goto L_006bfe4b;
L_006bfe35:; BB(0x006bfe35);
    /* 006bfe35: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfe38: jne 0x6bfe40 */ if (!fZ) goto L_006bfe40;
L_006bfe3a:; BB(0x006bfe3a);
    /* 006bfe3a: call 0x6c0b30 */ r_esp -= 4; W32(r_esp, 0x6bfe3fu); f_006c0b30();
    /* 006bfe3f: ret  */ FN_RET(0x006bfe24); r_esp += 4; return;
L_006bfe40:; BB(0x006bfe40);
    /* 006bfe40: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bfe43: jne 0x6bfe50 */ if (!fZ) goto L_006bfe50;
L_006bfe45:; BB(0x006bfe45);
    /* 006bfe45: call 0x6bfe60 */ r_esp -= 4; W32(r_esp, 0x6bfe4au); f_006bfe60();
    /* 006bfe4a: ret  */ FN_RET(0x006bfe24); r_esp += 4; return;
L_006bfe4b:; BB(0x006bfe4b);
    /* 006bfe4b: call 0x6bfeb8 */ r_esp -= 4; W32(r_esp, 0x6bfe50u); f_006bfeb8();
L_006bfe50:; BB(0x006bfe50);
    /* 006bfe50: ret  */ FN_RET(0x006bfe24); r_esp += 4; return;
L_006bfe51:; BB(0x006bfe51);
    /* 006bfe51: call 0x6bff28 */ r_esp -= 4; W32(r_esp, 0x6bfe56u); f_006bff28();
    /* 006bfe56: ret  */ FN_RET(0x006bfe24); r_esp += 4; return;
L_006bfe57:; BB(0x006bfe57);
    /* 006bfe57: call 0x6c0b88 */ r_esp -= 4; W32(r_esp, 0x6bfe5cu); f_006c0b88();
    /* 006bfe5c: ret  */ FN_RET(0x006bfe24); r_esp += 4; return;
}

void f_006bfe60(void) /* sub_6BFE60 */
{
    FN_ENTER(0x006bfe60);
    /* 006bfe60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfe61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bfe63: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006bfe66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfe68: je 0x6bfe9b */ if (fZ) goto L_006bfe9b;
L_006bfe6a:; BB(0x006bfe6a);
    /* 006bfe6a: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x6bfe6fu); f_0073b170();
    /* 006bfe6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfe71: jne 0x6bfe75 */ if (!fZ) goto L_006bfe75;
L_006bfe73:; BB(0x006bfe73);
    /* 006bfe73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bfe74: ret  */ FN_RET(0x006bfe60); r_esp += 4; return;
L_006bfe75:; BB(0x006bfe75);
    /* 006bfe75: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bfe7au); f_00694c6c();
    /* 006bfe7a: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bfe80: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bfe83: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bfe85: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bfe87: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bfe89: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bfe90: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bfe95u); f_007c1160();
    /* 006bfe95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfe97: jne 0x6bfe9b */ if (!fZ) goto L_006bfe9b;
L_006bfe99:; BB(0x006bfe99);
    /* 006bfe99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bfe9a: ret  */ FN_RET(0x006bfe60); r_esp += 4; return;
L_006bfe9b:; BB(0x006bfe9b);
    /* 006bfe9b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006bfe9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfea0: je 0x6bfeb3 */ if (fZ) goto L_006bfeb3;
L_006bfea2:; BB(0x006bfea2);
    /* 006bfea2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bfea3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6bfea5u); call_ind(t); }
    /* 006bfea5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfea6: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006bfeaa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfeaf: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006bfeb3:; BB(0x006bfeb3);
    /* 006bfeb3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bfeb4: ret  */ FN_RET(0x006bfe60); r_esp += 4; return;
}

void f_006bfeb8(void) /* sub_6BFEB8 */
{
    FN_ENTER(0x006bfeb8);
    /* 006bfeb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bfeb9: mov esi, ecx */ r_esi = r_ecx;
    /* 006bfebb: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bfebe: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6bfec3u); f_0082c204();
    /* 006bfec3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bfec6: jne 0x6bfeef */ if (!fZ) goto L_006bfeef;
L_006bfec8:; BB(0x006bfec8);
    /* 006bfec8: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bfeca: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006bfecc: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bfed1u); f_00792fe8();
    /* 006bfed1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bfed4: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006bfed7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfed9: je 0x6bfee6 */ if (fZ) goto L_006bfee6;
L_006bfedb:; BB(0x006bfedb);
    /* 006bfedb: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bfee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bfee1: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6bfee6u); f_0073ae38();
L_006bfee6:; BB(0x006bfee6);
    /* 006bfee6: mov dword ptr [esi + 0x24], 3 */ W32((u32)(r_esi+0x24u), 0x3u);
    /* 006bfeed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bfeee: ret  */ FN_RET(0x006bfeb8); r_esp += 4; return;
L_006bfeef:; BB(0x006bfeef);
    /* 006bfeef: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bfef2: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6bfef7u); f_006dc358();
    /* 006bfef7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bfef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bfefa: jne 0x6bff23 */ if (!fZ) goto L_006bff23;
L_006bfefc:; BB(0x006bfefc);
    /* 006bfefc: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 006bfefe: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006bff00: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bff05u); f_00792fe8();
    /* 006bff05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bff08: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006bff0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bff0d: je 0x6bff1a */ if (fZ) goto L_006bff1a;
L_006bff0f:; BB(0x006bff0f);
    /* 006bff0f: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bff14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bff15: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6bff1au); f_0073ae38();
L_006bff1a:; BB(0x006bff1a);
    /* 006bff1a: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 006bff21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bff22: ret  */ FN_RET(0x006bfeb8); r_esp += 4; return;
L_006bff23:; BB(0x006bff23);
    /* 006bff23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bff24: ret  */ FN_RET(0x006bfeb8); r_esp += 4; return;
}

void f_006bff28(void)
{
    FN_ENTER(0x006bff28);
    /* 006bff28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bff29: mov edi, ecx */ r_edi = r_ecx;
    /* 006bff2b: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bff2e: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6bff33u); f_0082c204();
    /* 006bff33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bff34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bff36: jne 0x6bff5f */ if (!fZ) goto L_006bff5f;
L_006bff38:; BB(0x006bff38);
    /* 006bff38: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bff3a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006bff3c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bff41u); f_00792fe8();
    /* 006bff41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bff44: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006bff47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bff49: je 0x6bff56 */ if (fZ) goto L_006bff56;
L_006bff4b:; BB(0x006bff4b);
    /* 006bff4b: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bff50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bff51: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6bff56u); f_0073ae38();
L_006bff56:; BB(0x006bff56);
    /* 006bff56: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006bff5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bff5e: ret  */ FN_RET(0x006bff28); r_esp += 4; return;
L_006bff5f:; BB(0x006bff5f);
    /* 006bff5f: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bff62: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6bff67u); f_007083d4();
    /* 006bff67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bff68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bff6a: jne 0x6bff93 */ if (!fZ) goto L_006bff93;
L_006bff6c:; BB(0x006bff6c);
    /* 006bff6c: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bff6e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006bff70: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6bff75u); f_00792fe8();
    /* 006bff75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bff78: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006bff7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bff7d: je 0x6bff8a */ if (fZ) goto L_006bff8a;
L_006bff7f:; BB(0x006bff7f);
    /* 006bff7f: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bff84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bff85: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6bff8au); f_0073ae38();
L_006bff8a:; BB(0x006bff8a);
    /* 006bff8a: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006bff91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bff92: ret  */ FN_RET(0x006bff28); r_esp += 4; return;
L_006bff93:; BB(0x006bff93);
    /* 006bff93: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bff96: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x6bff9bu); f_0082c1e0();
    /* 006bff9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bff9c: cmp eax, 0xffffff03 */ {  u32 a = r_eax; u32 b = 0xffffff03u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bffa1: jne 0x6bffff */ if (!fZ) goto L_006bffff;
L_006bffa3:; BB(0x006bffa3);
    /* 006bffa3: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006bffa6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bffa8: je 0x6bffd4 */ if (fZ) goto L_006bffd4;
L_006bffaa:; BB(0x006bffaa);
    /* 006bffaa: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bffb1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bffb3: je 0x6bffd4 */ if (fZ) goto L_006bffd4;
L_006bffb5:; BB(0x006bffb5);
    /* 006bffb5: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6bffbau); f_007365f4();
    /* 006bffba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bffbc: je 0x6c0036 */ if (fZ) goto L_006c0036;
L_006bffbe:; BB(0x006bffbe);
    /* 006bffbe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bffc1: je 0x6c0026 */ if (fZ) goto L_006c0026;
L_006bffc3:; BB(0x006bffc3);
    /* 006bffc3: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 006bffc6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bffcbu); f_007127b0();
    /* 006bffcb: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006bffd2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006bffd4:; BB(0x006bffd4);
    /* 006bffd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bffd6: je 0x6bfffd */ if (fZ) goto L_006bfffd;
L_006bffd8:; BB(0x006bffd8);
    /* 006bffd8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bffdf: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bffe1: je 0x6bfffd */ if (fZ) goto L_006bfffd;
L_006bffe3:; BB(0x006bffe3);
    /* 006bffe3: mov dword ptr [edi + 0x24], 4 */ W32((u32)(r_edi+0x24u), 0x4u);
    /* 006bffea: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bffefu); f_007127b0();
    /* 006bffef: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 006bfff6: mov ecx, edi */ r_ecx = r_edi;
    /* 006bfff8: call 0x6c0084 */ r_esp -= 4; W32(r_esp, 0x6bfffdu); f_006c0084();
L_006bfffd:; BB(0x006bfffd);
    /* 006bfffd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bfffe: ret  */ FN_RET(0x006bff28); r_esp += 4; return;
L_006bffff:; BB(0x006bffff);
    /* 006bffff: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0001: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0003: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0008u); f_00792fe8();
    /* 006c0008: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c000b: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006c000e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0010: je 0x6c001d */ if (fZ) goto L_006c001d;
L_006c0012:; BB(0x006c0012);
    /* 006c0012: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0018: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c001du); f_0073ae38();
L_006c001d:; BB(0x006c001d);
    /* 006c001d: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c0024: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c0025: ret  */ FN_RET(0x006bff28); r_esp += 4; return;
L_006c0026:; BB(0x006c0026);
    /* 006c0026: mov ecx, edi */ r_ecx = r_edi;
    /* 006c0028: call 0x6c0084 */ r_esp -= 4; W32(r_esp, 0x6c002du); f_006c0084();
    /* 006c002d: mov dword ptr [edi + 0x24], 4 */ W32((u32)(r_edi+0x24u), 0x4u);
    /* 006c0034: jmp 0x6bffc3 */ f_006bffc3(); return;
L_006c0036:; BB(0x006c0036);
    /* 006c0036: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c003a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c003b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c003c: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c003f: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x6c0044u); f_0082c21c();
    /* 006c0044: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0049: jne 0x6c0057 */ if (!fZ) goto L_006c0057;
L_006c004b:; BB(0x006c004b);
    /* 006c004b: mov dword ptr [edi + 0x24], 2 */ W32((u32)(r_edi+0x24u), 0x2u);
    /* 006c0052: jmp 0x6bffc3 */ f_006bffc3(); return;
L_006c0057:; BB(0x006c0057);
    /* 006c0057: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0059: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c005b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0060u); f_00792fe8();
    /* 006c0060: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0063: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006c0066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

