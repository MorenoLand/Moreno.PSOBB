#include "protos.h"

void f_0089e438(void) /* ??_GCWin32Heap@ATL@@UAEPAXI@Z_2 */
{
    FN_ENTER(0x0089e438);
    /* 0089e438: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e439: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e43b: call 0x89a278 */ r_esp -= 4; W32(r_esp, 0x89e440u); f_0089a278();
    /* 0089e440: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089e445: je 0x89e44e */ if (fZ) goto L_0089e44e;
L_0089e447:; BB(0x0089e447);
    /* 0089e447: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e448: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89e44du); f_00857e98();
    /* 0089e44d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089e44e:; BB(0x0089e44e);
    /* 0089e44e: mov eax, esi */ r_eax = r_esi;
    /* 0089e450: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e451: ret 4 */ FN_RET(0x0089e438); r_esp += 8; return;
}

void f_0089e987(void) /* ??_GCWin32Heap@ATL@@UAEPAXI@Z_3 */
{
    FN_ENTER(0x0089e987);
    /* 0089e987: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e988: mov esi, ecx */ r_esi = r_ecx;
    /* 0089e98a: call 0x89e9bb */ r_esp -= 4; W32(r_esp, 0x89e98fu); f_0089e9bb();
    /* 0089e98f: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089e994: je 0x89e99d */ if (fZ) goto L_0089e99d;
L_0089e996:; BB(0x0089e996);
    /* 0089e996: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089e997: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89e99cu); f_00857e98();
    /* 0089e99c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089e99d:; BB(0x0089e99d);
    /* 0089e99d: mov eax, esi */ r_eax = r_esi;
    /* 0089e99f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089e9a0: ret 4 */ FN_RET(0x0089e987); r_esp += 8; return;
}

void f_0089ea08(void) /* ??1CD3DXCodecYUV@@UAE@XZ */
{
    FN_ENTER(0x0089ea08);
    /* 0089ea08: mov eax, 0x8cb783 */ r_eax = 0x8cb783u;
    /* 0089ea0d: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89ea12u); f_008cb064();
    /* 0089ea12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089ea13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ea14: mov esi, ecx */ r_esi = r_ecx;
    /* 0089ea16: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0089ea19: mov dword ptr [esi], 0x99bb04 */ W32((u32)(r_esi), 0x99bb04u);
    /* 0089ea1f: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089ea23: call 0x89db21 */ r_esp -= 4; W32(r_esp, 0x89ea28u); f_0089db21();
    /* 0089ea28: mov eax, dword ptr [esi + 0x106c] */ r_eax = R32((u32)(r_esi+0x106cu));
    /* 0089ea2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ea30: je 0x89ea39 */ if (fZ) goto L_0089ea39;
L_0089ea32:; BB(0x0089ea32);
    /* 0089ea32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089ea33: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89ea38u); f_00857e98();
    /* 0089ea38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089ea39:; BB(0x0089ea39);
    /* 0089ea39: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089ea3d: mov ecx, esi */ r_ecx = r_esi;
    /* 0089ea3f: call 0x899f6b */ r_esp -= 4; W32(r_esp, 0x89ea44u); f_00899f6b();
    /* 0089ea44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089ea47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089ea48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089ea4f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089ea50: ret  */ FN_RET(0x0089ea08); r_esp += 4; return;
}

void f_0089ea81(void) /* ?Create@CD3DXCodec@@SAPAV1@PAUD3DX_BLT@@@Z */
{
    FN_ENTER(0x0089ea81);
    /* 0089ea81: mov eax, 0x8cb8ff */ r_eax = 0x8cb8ffu;
    /* 0089ea86: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89ea8bu); f_008cb064();
    /* 0089ea8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ea8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ea8d: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0089ea90: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0089ea93: mov ecx, 0x31545844 */ r_ecx = 0x31545844u;
    /* 0089ea98: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089ea9a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089ea9c: jg 0x89ef8c */ if ((!fZ&&fS==fO)) goto L_0089ef8c;
L_0089eaa2:; BB(0x0089eaa2);
    /* 0089eaa2: je 0x89ef62 */ if (fZ) goto L_0089ef62;
L_0089eaa8:; BB(0x0089eaa8);
    /* 0089eaa8: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089eaab: jg 0x89ed13 */ if ((!fZ&&fS==fO)) goto L_0089ed13;
L_0089eab1:; BB(0x0089eab1);
    /* 0089eab1: je 0x89ece9 */ if (fZ) goto L_0089ece9;
L_0089eab7:; BB(0x0089eab7);
    /* 0089eab7: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089eaba: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089eabd: ja 0x89f191 */ if ((!fC&&!fZ)) goto L_0089f191;
L_0089eac3:; BB(0x0089eac3);
    /* 0089eac3: jmp dword ptr [eax*4 + 0x89f1a1] */ { u32 t = R32((u32)(r_eax*4+0x89f1a1u)); switch (t) { case 0x89eacau: goto L_0089eaca; case 0x89eaf1u: goto L_0089eaf1; case 0x89eb1bu: goto L_0089eb1b; case 0x89eb45u: goto L_0089eb45; case 0x89eb6fu: goto L_0089eb6f; case 0x89eb99u: goto L_0089eb99; case 0x89ebc3u: goto L_0089ebc3; case 0x89ebedu: goto L_0089ebed; case 0x89ec17u: goto L_0089ec17; case 0x89ec41u: goto L_0089ec41; case 0x89ec6bu: goto L_0089ec6b; case 0x89ec95u: goto L_0089ec95; case 0x89f191u: goto L_0089f191; case 0x89ecbfu: goto L_0089ecbf; default: UNSUP(0x0089eac3, "jump table entry is not a known target"); } }
L_0089eaca:; BB(0x0089eaca);
    /* 0089eaca: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eacf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ead4u); f_008581c5();
    /* 0089ead4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ead5: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ead7: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eada: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089eade: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eae0: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089eae6:; BB(0x0089eae6);
    /* 0089eae6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089eae7: call 0x89d99d */ r_esp -= 4; W32(r_esp, 0x89eaecu); f_0089d99d();
    /* 0089eaec: jmp 0x89f17a */ goto L_0089f17a;
L_0089eaf1:; BB(0x0089eaf1);
    /* 0089eaf1: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eaf6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eafbu); f_008581c5();
    /* 0089eafb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eafc: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eafe: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eb01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eb03: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0089eb0a: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089eb10:; BB(0x0089eb10);
    /* 0089eb10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb11: call 0x89dacd */ r_esp -= 4; W32(r_esp, 0x89eb16u); f_0089dacd();
    /* 0089eb16: jmp 0x89f17a */ goto L_0089f17a;
L_0089eb1b:; BB(0x0089eb1b);
    /* 0089eb1b: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb20: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eb25u); f_008581c5();
    /* 0089eb25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eb26: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eb28: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eb2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eb2d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0089eb34: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089eb3a:; BB(0x0089eb3a);
    /* 0089eb3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb3b: call 0x89dae9 */ r_esp -= 4; W32(r_esp, 0x89eb40u); f_0089dae9();
    /* 0089eb40: jmp 0x89f17a */ goto L_0089f17a;
L_0089eb45:; BB(0x0089eb45);
    /* 0089eb45: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb4a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eb4fu); f_008581c5();
    /* 0089eb4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eb50: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eb52: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eb55: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eb57: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0089eb5e: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089eb64:; BB(0x0089eb64);
    /* 0089eb64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb65: call 0x89db05 */ r_esp -= 4; W32(r_esp, 0x89eb6au); f_0089db05();
    /* 0089eb6a: jmp 0x89f17a */ goto L_0089f17a;
L_0089eb6f:; BB(0x0089eb6f);
    /* 0089eb6f: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb74: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eb79u); f_008581c5();
    /* 0089eb79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eb7a: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eb7c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eb7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eb81: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0089eb88: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089eb8e:; BB(0x0089eb8e);
    /* 0089eb8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb8f: call 0x89dd0d */ r_esp -= 4; W32(r_esp, 0x89eb94u); f_0089dd0d();
    /* 0089eb94: jmp 0x89f17a */ goto L_0089f17a;
L_0089eb99:; BB(0x0089eb99);
    /* 0089eb99: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eb9e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eba3u); f_008581c5();
    /* 0089eba3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eba4: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eba6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eba9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ebab: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0089ebb2: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ebb8:; BB(0x0089ebb8);
    /* 0089ebb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ebb9: call 0x89dd29 */ r_esp -= 4; W32(r_esp, 0x89ebbeu); f_0089dd29();
    /* 0089ebbe: jmp 0x89f17a */ goto L_0089f17a;
L_0089ebc3:; BB(0x0089ebc3);
    /* 0089ebc3: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ebc8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ebcdu); f_008581c5();
    /* 0089ebcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ebce: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ebd0: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ebd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ebd5: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0089ebdc: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ebe2:; BB(0x0089ebe2);
    /* 0089ebe2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ebe3: call 0x89e016 */ r_esp -= 4; W32(r_esp, 0x89ebe8u); f_0089e016();
    /* 0089ebe8: jmp 0x89f17a */ goto L_0089f17a;
L_0089ebed:; BB(0x0089ebed);
    /* 0089ebed: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ebf2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ebf7u); f_008581c5();
    /* 0089ebf7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ebf8: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ebfa: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ebfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ebff: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0089ec06: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ec0c:; BB(0x0089ec0c);
    /* 0089ec0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec0d: call 0x89e032 */ r_esp -= 4; W32(r_esp, 0x89ec12u); f_0089e032();
    /* 0089ec12: jmp 0x89f17a */ goto L_0089f17a;
L_0089ec17:; BB(0x0089ec17);
    /* 0089ec17: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec1c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ec21u); f_008581c5();
    /* 0089ec21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ec22: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ec24: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ec27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ec29: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0089ec30: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ec36:; BB(0x0089ec36);
    /* 0089ec36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec37: call 0x89e04e */ r_esp -= 4; W32(r_esp, 0x89ec3cu); f_0089e04e();
    /* 0089ec3c: jmp 0x89f17a */ goto L_0089f17a;
L_0089ec41:; BB(0x0089ec41);
    /* 0089ec41: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec46: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ec4bu); f_008581c5();
    /* 0089ec4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ec4c: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ec4e: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ec51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ec53: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0089ec5a: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ec60:; BB(0x0089ec60);
    /* 0089ec60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec61: call 0x89e06a */ r_esp -= 4; W32(r_esp, 0x89ec66u); f_0089e06a();
    /* 0089ec66: jmp 0x89f17a */ goto L_0089f17a;
L_0089ec6b:; BB(0x0089ec6b);
    /* 0089ec6b: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec70: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ec75u); f_008581c5();
    /* 0089ec75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ec76: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ec78: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ec7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ec7d: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0089ec84: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ec8a:; BB(0x0089ec8a);
    /* 0089ec8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec8b: call 0x89e086 */ r_esp -= 4; W32(r_esp, 0x89ec90u); f_0089e086();
    /* 0089ec90: jmp 0x89f17a */ goto L_0089f17a;
L_0089ec95:; BB(0x0089ec95);
    /* 0089ec95: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ec9a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ec9fu); f_008581c5();
    /* 0089ec9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eca0: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eca2: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eca5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eca7: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0089ecae: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ecb4:; BB(0x0089ecb4);
    /* 0089ecb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ecb5: call 0x89e12f */ r_esp -= 4; W32(r_esp, 0x89ecbau); f_0089e12f();
    /* 0089ecba: jmp 0x89f17a */ goto L_0089f17a;
L_0089ecbf:; BB(0x0089ecbf);
    /* 0089ecbf: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ecc4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ecc9u); f_008581c5();
    /* 0089ecc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ecca: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eccc: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eccf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ecd1: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0089ecd8: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ecde:; BB(0x0089ecde);
    /* 0089ecde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ecdf: call 0x89e1ba */ r_esp -= 4; W32(r_esp, 0x89ece4u); f_0089e1ba();
    /* 0089ece4: jmp 0x89f17a */ goto L_0089f17a;
L_0089ece9:; BB(0x0089ece9);
    /* 0089ece9: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ecee: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ecf3u); f_008581c5();
    /* 0089ecf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ecf4: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ecf6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ecf9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ecfb: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0089ed02: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ed08:; BB(0x0089ed08);
    /* 0089ed08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ed09: call 0x89e3c8 */ r_esp -= 4; W32(r_esp, 0x89ed0eu); f_0089e3c8();
    /* 0089ed0e: jmp 0x89f17a */ goto L_0089f17a;
L_0089ed13:; BB(0x0089ed13);
    /* 0089ed13: cmp eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089ed16: jg 0x89ee70 */ if ((!fZ&&fS==fO)) goto L_0089ee70;
L_0089ed1c:; BB(0x0089ed1c);
    /* 0089ed1c: je 0x89ee46 */ if (fZ) goto L_0089ee46;
L_0089ed22:; BB(0x0089ed22);
    /* 0089ed22: sub eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ed25: je 0x89ee1c */ if (fZ) goto L_0089ee1c;
L_0089ed2b:; BB(0x0089ed2b);
    /* 0089ed2b: sub eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ed2e: je 0x89edf2 */ if (fZ) goto L_0089edf2;
L_0089ed34:; BB(0x0089ed34);
    /* 0089ed34: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ed35: je 0x89edc8 */ if (fZ) goto L_0089edc8;
L_0089ed3b:; BB(0x0089ed3b);
    /* 0089ed3b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ed3c: je 0x89ed9e */ if (fZ) goto L_0089ed9e;
L_0089ed3e:; BB(0x0089ed3e);
    /* 0089ed3e: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = (a < b); }
    /* 0089ed41: je 0x89ed74 */ if (fZ) goto L_0089ed74;
L_0089ed43:; BB(0x0089ed43);
    /* 0089ed43: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089ed44: jne 0x89f191 */ if (!fZ) goto L_0089f191;
L_0089ed4a:; BB(0x0089ed4a);
    /* 0089ed4a: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ed4f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ed54u); f_008581c5();
    /* 0089ed54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ed55: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ed57: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ed5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ed5c: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 0089ed63: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ed69:; BB(0x0089ed69);
    /* 0089ed69: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ed6a: call 0x89e58d */ r_esp -= 4; W32(r_esp, 0x89ed6fu); f_0089e58d();
    /* 0089ed6f: jmp 0x89f17a */ goto L_0089f17a;
L_0089ed74:; BB(0x0089ed74);
    /* 0089ed74: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ed79: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ed7eu); f_008581c5();
    /* 0089ed7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ed7f: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ed81: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ed84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ed86: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 0089ed8d: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ed93:; BB(0x0089ed93);
    /* 0089ed93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ed94: call 0x89e571 */ r_esp -= 4; W32(r_esp, 0x89ed99u); f_0089e571();
    /* 0089ed99: jmp 0x89f17a */ goto L_0089f17a;
L_0089ed9e:; BB(0x0089ed9e);
    /* 0089ed9e: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eda3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eda8u); f_008581c5();
    /* 0089eda8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eda9: mov ecx, eax */ r_ecx = r_eax;
    /* 0089edab: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089edae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089edb0: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 0089edb7: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089edbd:; BB(0x0089edbd);
    /* 0089edbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089edbe: call 0x89e454 */ r_esp -= 4; W32(r_esp, 0x89edc3u); f_0089e454();
    /* 0089edc3: jmp 0x89f17a */ goto L_0089f17a;
L_0089edc8:; BB(0x0089edc8);
    /* 0089edc8: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089edcd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89edd2u); f_008581c5();
    /* 0089edd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089edd3: mov ecx, eax */ r_ecx = r_eax;
    /* 0089edd5: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089edd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089edda: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 0089ede1: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ede7:; BB(0x0089ede7);
    /* 0089ede7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ede8: call 0x89e41c */ r_esp -= 4; W32(r_esp, 0x89ededu); f_0089e41c();
    /* 0089eded: jmp 0x89f17a */ goto L_0089f17a;
L_0089edf2:; BB(0x0089edf2);
    /* 0089edf2: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089edf7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89edfcu); f_008581c5();
    /* 0089edfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089edfd: mov ecx, eax */ r_ecx = r_eax;
    /* 0089edff: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ee02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ee04: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0089ee0b: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ee11:; BB(0x0089ee11);
    /* 0089ee11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ee12: call 0x89e400 */ r_esp -= 4; W32(r_esp, 0x89ee17u); f_0089e400();
    /* 0089ee17: jmp 0x89f17a */ goto L_0089f17a;
L_0089ee1c:; BB(0x0089ee1c);
    /* 0089ee1c: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ee21: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ee26u); f_008581c5();
    /* 0089ee26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ee27: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ee29: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ee2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ee2e: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0089ee35: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ee3b:; BB(0x0089ee3b);
    /* 0089ee3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ee3c: call 0x89e3e4 */ r_esp -= 4; W32(r_esp, 0x89ee41u); f_0089e3e4();
    /* 0089ee41: jmp 0x89f17a */ goto L_0089f17a;
L_0089ee46:; BB(0x0089ee46);
    /* 0089ee46: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ee4b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ee50u); f_008581c5();
    /* 0089ee50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ee51: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ee53: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ee56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ee58: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 0089ee5f: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ee65:; BB(0x0089ee65);
    /* 0089ee65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ee66: call 0x89e5a9 */ r_esp -= 4; W32(r_esp, 0x89ee6bu); f_0089e5a9();
    /* 0089ee6b: jmp 0x89f17a */ goto L_0089f17a;
L_0089ee70:; BB(0x0089ee70);
    /* 0089ee70: sub eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ee73: je 0x89ef38 */ if (fZ) goto L_0089ef38;
L_0089ee79:; BB(0x0089ee79);
    /* 0089ee79: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ee7a: je 0x89ef0e */ if (fZ) goto L_0089ef0e;
L_0089ee80:; BB(0x0089ee80);
    /* 0089ee80: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ee81: je 0x89eee4 */ if (fZ) goto L_0089eee4;
L_0089ee83:; BB(0x0089ee83);
    /* 0089ee83: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089ee84: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089ee85: je 0x89eeba */ if (fZ) goto L_0089eeba;
L_0089ee87:; BB(0x0089ee87);
    /* 0089ee87: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089ee8a: jne 0x89f191 */ if (!fZ) goto L_0089f191;
L_0089ee90:; BB(0x0089ee90);
    /* 0089ee90: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ee95: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ee9au); f_008581c5();
    /* 0089ee9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ee9b: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ee9d: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eea0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eea2: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 0089eea9: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089eeaf:; BB(0x0089eeaf);
    /* 0089eeaf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089eeb0: call 0x89e63a */ r_esp -= 4; W32(r_esp, 0x89eeb5u); f_0089e63a();
    /* 0089eeb5: jmp 0x89f17a */ goto L_0089f17a;
L_0089eeba:; BB(0x0089eeba);
    /* 0089eeba: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eebf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eec4u); f_008581c5();
    /* 0089eec4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eec5: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eec7: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eeca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eecc: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 0089eed3: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089eed9:; BB(0x0089eed9);
    /* 0089eed9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089eeda: call 0x89e61e */ r_esp -= 4; W32(r_esp, 0x89eedfu); f_0089e61e();
    /* 0089eedf: jmp 0x89f17a */ goto L_0089f17a;
L_0089eee4:; BB(0x0089eee4);
    /* 0089eee4: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089eee9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89eeeeu); f_008581c5();
    /* 0089eeee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089eeef: mov ecx, eax */ r_ecx = r_eax;
    /* 0089eef1: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089eef4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089eef6: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 0089eefd: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ef03:; BB(0x0089ef03);
    /* 0089ef03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ef04: call 0x89e5fd */ r_esp -= 4; W32(r_esp, 0x89ef09u); f_0089e5fd();
    /* 0089ef09: jmp 0x89f17a */ goto L_0089f17a;
L_0089ef0e:; BB(0x0089ef0e);
    /* 0089ef0e: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ef13: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ef18u); f_008581c5();
    /* 0089ef18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ef19: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ef1b: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ef1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ef20: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 0089ef27: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ef2d:; BB(0x0089ef2d);
    /* 0089ef2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ef2e: call 0x89e5e1 */ r_esp -= 4; W32(r_esp, 0x89ef33u); f_0089e5e1();
    /* 0089ef33: jmp 0x89f17a */ goto L_0089f17a;
L_0089ef38:; BB(0x0089ef38);
    /* 0089ef38: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089ef3d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ef42u); f_008581c5();
    /* 0089ef42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ef43: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ef45: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ef48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ef4a: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 0089ef51: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ef57:; BB(0x0089ef57);
    /* 0089ef57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ef58: call 0x89e5c5 */ r_esp -= 4; W32(r_esp, 0x89ef5du); f_0089e5c5();
    /* 0089ef5d: jmp 0x89f17a */ goto L_0089f17a;
L_0089ef62:; BB(0x0089ef62);
    /* 0089ef62: push 0x10c4 */ { u32 v = 0x10c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089ef67: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89ef6cu); f_008581c5();
    /* 0089ef6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089ef6d: mov ecx, eax */ r_ecx = r_eax;
    /* 0089ef6f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089ef72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089ef74: mov dword ptr [ebp - 4], 0x20 */ W32((u32)(r_ebp+0xfffffffcu), 0x20u);
    /* 0089ef7b: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089ef81:; BB(0x0089ef81);
    /* 0089ef81: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089ef82: call 0x89e96f */ r_esp -= 4; W32(r_esp, 0x89ef87u); f_0089e96f();
    /* 0089ef87: jmp 0x89f17a */ goto L_0089f17a;
L_0089ef8c:; BB(0x0089ef8c);
    /* 0089ef8c: mov ecx, 0x36314c20 */ r_ecx = 0x36314c20u;
    /* 0089ef91: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089ef93: jg 0x89f0ca */ if ((!fZ&&fS==fO)) goto L_0089f0ca;
L_0089ef99:; BB(0x0089ef99);
    /* 0089ef99: je 0x89f0a0 */ if (fZ) goto L_0089f0a0;
L_0089ef9f:; BB(0x0089ef9f);
    /* 0089ef9f: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089efa4: je 0x89f076 */ if (fZ) goto L_0089f076;
L_0089efaa:; BB(0x0089efaa);
    /* 0089efaa: cmp eax, 0x32595559 */ {  u32 a = r_eax; u32 b = 0x32595559u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089efaf: je 0x89f04c */ if (fZ) goto L_0089f04c;
L_0089efb5:; BB(0x0089efb5);
    /* 0089efb5: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089efba: je 0x89f022 */ if (fZ) goto L_0089f022;
L_0089efbc:; BB(0x0089efbc);
    /* 0089efbc: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089efc1: je 0x89eff8 */ if (fZ) goto L_0089eff8;
L_0089efc3:; BB(0x0089efc3);
    /* 0089efc3: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089efc8: jne 0x89f191 */ if (!fZ) goto L_0089f191;
L_0089efce:; BB(0x0089efce);
    /* 0089efce: push 0x10c4 */ { u32 v = 0x10c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089efd3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89efd8u); f_008581c5();
    /* 0089efd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089efd9: mov ecx, eax */ r_ecx = r_eax;
    /* 0089efdb: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089efde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089efe0: mov dword ptr [ebp - 4], 0x24 */ W32((u32)(r_ebp+0xfffffffcu), 0x24u);
    /* 0089efe7: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089efed:; BB(0x0089efed);
    /* 0089efed: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089efee: call 0x89e9f0 */ r_esp -= 4; W32(r_esp, 0x89eff3u); f_0089e9f0();
    /* 0089eff3: jmp 0x89f17a */ goto L_0089f17a;
L_0089eff8:; BB(0x0089eff8);
    /* 0089eff8: push 0x10c4 */ { u32 v = 0x10c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089effd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f002u); f_008581c5();
    /* 0089f002: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f003: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f005: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f008: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f00a: mov dword ptr [ebp - 4], 0x23 */ W32((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 0089f011: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f017:; BB(0x0089f017);
    /* 0089f017: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f018: call 0x89e9d8 */ r_esp -= 4; W32(r_esp, 0x89f01du); f_0089e9d8();
    /* 0089f01d: jmp 0x89f17a */ goto L_0089f17a;
L_0089f022:; BB(0x0089f022);
    /* 0089f022: push 0x10c4 */ { u32 v = 0x10c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f027: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f02cu); f_008581c5();
    /* 0089f02c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f02d: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f02f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f032: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f034: mov dword ptr [ebp - 4], 0x22 */ W32((u32)(r_ebp+0xfffffffcu), 0x22u);
    /* 0089f03b: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f041:; BB(0x0089f041);
    /* 0089f041: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f042: call 0x89e9c0 */ r_esp -= 4; W32(r_esp, 0x89f047u); f_0089e9c0();
    /* 0089f047: jmp 0x89f17a */ goto L_0089f17a;
L_0089f04c:; BB(0x0089f04c);
    /* 0089f04c: push 0x109c */ { u32 v = 0x109cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f051: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f056u); f_008581c5();
    /* 0089f056: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f057: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f059: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f05c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f05e: mov dword ptr [ebp - 4], 0x1f */ W32((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 0089f065: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f06b:; BB(0x0089f06b);
    /* 0089f06b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f06c: call 0x89ea69 */ r_esp -= 4; W32(r_esp, 0x89f071u); f_0089ea69();
    /* 0089f071: jmp 0x89f17a */ goto L_0089f17a;
L_0089f076:; BB(0x0089f076);
    /* 0089f076: push 0x10c4 */ { u32 v = 0x10c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089f07b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f080u); f_008581c5();
    /* 0089f080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f081: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f083: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f086: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f088: mov dword ptr [ebp - 4], 0x21 */ W32((u32)(r_ebp+0xfffffffcu), 0x21u);
    /* 0089f08f: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f095:; BB(0x0089f095);
    /* 0089f095: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f096: call 0x89e9a3 */ r_esp -= 4; W32(r_esp, 0x89f09bu); f_0089e9a3();
    /* 0089f09b: jmp 0x89f17a */ goto L_0089f17a;
L_0089f0a0:; BB(0x0089f0a0);
    /* 0089f0a0: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f0a5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f0aau); f_008581c5();
    /* 0089f0aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f0ab: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f0ad: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f0b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f0b2: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 0089f0b9: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f0bf:; BB(0x0089f0bf);
    /* 0089f0bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f0c0: call 0x89e656 */ r_esp -= 4; W32(r_esp, 0x89f0c5u); f_0089e656();
    /* 0089f0c5: jmp 0x89f17a */ goto L_0089f17a;
L_0089f0ca:; BB(0x0089f0ca);
    /* 0089f0ca: sub eax, 0x36314c41 */ {  u32 a = r_eax; u32 b = 0x36314c41u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089f0cf: je 0x89f155 */ if (fZ) goto L_0089f155;
L_0089f0d5:; BB(0x0089f0d5);
    /* 0089f0d5: sub eax, 0x5df */ {  u32 a = r_eax; u32 b = 0x5dfu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089f0da: je 0x89f132 */ if (fZ) goto L_0089f132;
L_0089f0dc:; BB(0x0089f0dc);
    /* 0089f0dc: sub eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089f0df: je 0x89f10f */ if (fZ) goto L_0089f10f;
L_0089f0e1:; BB(0x0089f0e1);
    /* 0089f0e1: sub eax, 0x23250714 */ {  u32 a = r_eax; u32 b = 0x23250714u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f0e6: jne 0x89f191 */ if (!fZ) goto L_0089f191;
L_0089f0ec:; BB(0x0089f0ec);
    /* 0089f0ec: push 0x109c */ { u32 v = 0x109cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f0f1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f0f6u); f_008581c5();
    /* 0089f0f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f0f7: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f0f9: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f0fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f0fe: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 0089f105: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f107:; BB(0x0089f107);
    /* 0089f107: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f108: call 0x89ea51 */ r_esp -= 4; W32(r_esp, 0x89f10du); f_0089ea51();
    /* 0089f10d: jmp 0x89f17a */ goto L_0089f17a;
L_0089f10f:; BB(0x0089f10f);
    /* 0089f10f: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f114: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f119u); f_008581c5();
    /* 0089f119: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f11a: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f11c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f11f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f121: mov dword ptr [ebp - 4], 0x1d */ W32((u32)(r_ebp+0xfffffffcu), 0x1du);
    /* 0089f128: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f12a:; BB(0x0089f12a);
    /* 0089f12a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f12b: call 0x89e953 */ r_esp -= 4; W32(r_esp, 0x89f130u); f_0089e953();
    /* 0089f130: jmp 0x89f17a */ goto L_0089f17a;
L_0089f132:; BB(0x0089f132);
    /* 0089f132: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f137: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f13cu); f_008581c5();
    /* 0089f13c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f13d: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f13f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f142: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f144: mov dword ptr [ebp - 4], 0x1c */ W32((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 0089f14b: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f14d:; BB(0x0089f14d);
    /* 0089f14d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f14e: call 0x89e937 */ r_esp -= 4; W32(r_esp, 0x89f153u); f_0089e937();
    /* 0089f153: jmp 0x89f17a */ goto L_0089f17a;
L_0089f155:; BB(0x0089f155);
    /* 0089f155: push 0x106c */ { u32 v = 0x106cu; r_esp -= 4; W32(r_esp, v); }
    /* 0089f15a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89f15fu); f_008581c5();
    /* 0089f15f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089f160: mov ecx, eax */ r_ecx = r_eax;
    /* 0089f162: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0089f165: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089f167: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 0089f16e: je 0x89f178 */ if (fZ) goto L_0089f178;
L_0089f170:; BB(0x0089f170);
    /* 0089f170: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089f171: call 0x89e91b */ r_esp -= 4; W32(r_esp, 0x89f176u); f_0089e91b();
    /* 0089f176: jmp 0x89f17a */ goto L_0089f17a;
L_0089f178:; BB(0x0089f178);
    /* 0089f178: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0089f17a:; BB(0x0089f17a);
    /* 0089f17a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089f17e: mov esi, eax */ r_esi = r_eax;
    /* 0089f180: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089f182: je 0x89f191 */ if (fZ) goto L_0089f191;
L_0089f184:; BB(0x0089f184);
    /* 0089f184: cmp dword ptr [esi + 0x10], 0 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089f188: je 0x89f191 */ if (fZ) goto L_0089f191;
L_0089f18a:; BB(0x0089f18a);
    /* 0089f18a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089f18c: mov ecx, esi */ r_ecx = r_esi;
    /* 0089f18e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x89f191u); call_ind(t); }
L_0089f191:; BB(0x0089f191);
    /* 0089f191: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089f194: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089f195: mov eax, esi */ r_eax = r_esi;
    /* 0089f197: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089f198: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089f19f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089f1a0: ret  */ FN_RET(0x0089ea81); r_esp += 4; return;
}

