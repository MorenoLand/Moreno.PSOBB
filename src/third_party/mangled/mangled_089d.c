#include "protos.h"

void f_0089d9b9(void) /* ??0CD3DXCodecYUV@@QAE@PAUD3DX_BLT@@@Z */
{
    FN_ENTER(0x0089d9b9);
    /* 0089d9b9: mov eax, 0x8cb75d */ r_eax = 0x8cb75du;
    /* 0089d9be: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89d9c3u); f_008cb064();
    /* 0089d9c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9ca: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0089d9cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9cd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089d9d0: mov esi, ecx */ r_esi = r_ecx;
    /* 0089d9d2: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0089d9d5: call 0x89a735 */ r_esp -= 4; W32(r_esp, 0x89d9dau); f_0089a735();
    /* 0089d9da: mov ecx, dword ptr [esi + 0x1030] */ r_ecx = R32((u32)(r_esi+0x1030u));
    /* 0089d9e0: mov eax, dword ptr [esi + 0x1038] */ r_eax = R32((u32)(r_esi+0x1038u));
    /* 0089d9e6: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089d9e9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089d9ea: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089d9ed: mov ebx, eax */ r_ebx = r_eax;
    /* 0089d9ef: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0089d9f1: mov dword ptr [esi + 0x1078], eax */ W32((u32)(r_esi+0x1078u), r_eax);
    /* 0089d9f7: mov eax, ebx */ r_eax = r_ebx;
    /* 0089d9f9: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089d9fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089d9fd: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0089da00: mov dword ptr [esi], 0x99bb04 */ W32((u32)(r_esi), 0x99bb04u);
    /* 0089da06: mov dword ptr [esi + 0x1070], ecx */ W32((u32)(r_esi+0x1070u), r_ecx);
    /* 0089da0c: mov dword ptr [esi + 0x1074], edi */ W32((u32)(r_esi+0x1074u), r_edi);
    /* 0089da12: mov dword ptr [esi + 0x1080], edi */ W32((u32)(r_esi+0x1080u), r_edi);
    /* 0089da18: mov dword ptr [esi + 0x107c], edi */ W32((u32)(r_esi+0x107cu), r_edi);
    /* 0089da1e: mov dword ptr [esi + 0x1084], edi */ W32((u32)(r_esi+0x1084u), r_edi);
    /* 0089da24: mov dword ptr [esi + 0x1088], ebx */ W32((u32)(r_esi+0x1088u), r_ebx);
    /* 0089da2a: mov dword ptr [esi + 0x108c], edi */ W32((u32)(r_esi+0x108cu), r_edi);
    /* 0089da30: mov dword ptr [esi + 0x1090], 1 */ W32((u32)(r_esi+0x1090u), 0x1u);
    /* 0089da3a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89da3fu); f_008581c5();
    /* 0089da3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089da40: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089da43: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089da45: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0089da49: je 0x89da5e */ if (fZ) goto L_0089da5e;
L_0089da4b:; BB(0x0089da4b);
    /* 0089da4b: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 0089da50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089da51: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089da53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089da54: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89da59u); f_0088fd17();
    /* 0089da59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089da5c: jmp 0x89da60 */ goto L_0089da60;
L_0089da5e:; BB(0x0089da5e);
    /* 0089da5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0089da60:; BB(0x0089da60);
    /* 0089da60: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089da62: mov dword ptr [esi + 0x106c], eax */ W32((u32)(r_esi+0x106cu), r_eax);
    /* 0089da68: jne 0x89da70 */ if (!fZ) goto L_0089da70;
L_0089da6a:; BB(0x0089da6a);
    /* 0089da6a: mov dword ptr [esi + 0x1090], edi */ W32((u32)(r_esi+0x1090u), r_edi);
L_0089da70:; BB(0x0089da70);
    /* 0089da70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089da73: cmp dword ptr [eax + 4], 0x59565955 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x59565955u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089da7a: jne 0x89da8e */ if (!fZ) goto L_0089da8e;
L_0089da7c:; BB(0x0089da7c);
    /* 0089da7c: mov dword ptr [esi + 0x1094], 8 */ W32((u32)(r_esi+0x1094u), 0x8u);
    /* 0089da86: mov dword ptr [esi + 0x1098], edi */ W32((u32)(r_esi+0x1098u), r_edi);
    /* 0089da8c: jmp 0x89da9e */ goto L_0089da9e;
L_0089da8e:; BB(0x0089da8e);
    /* 0089da8e: mov dword ptr [esi + 0x1094], edi */ W32((u32)(r_esi+0x1094u), r_edi);
    /* 0089da94: mov dword ptr [esi + 0x1098], 8 */ W32((u32)(r_esi+0x1098u), 0x8u);
L_0089da9e:; BB(0x0089da9e);
    /* 0089da9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089daa1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089daa2: mov eax, esi */ r_eax = r_esi;
    /* 0089daa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089daa5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089daa6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089daad: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089daae: ret 4 */ FN_RET(0x0089d9b9); r_esp += 8; return;
}

void f_0089dab1(void) /* ??_GCWin32Heap@ATL@@UAEPAXI@Z_1 */
{
    FN_ENTER(0x0089dab1);
    /* 0089dab1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089dab2: mov esi, ecx */ r_esi = r_ecx;
    /* 0089dab4: call 0x89e619 */ r_esp -= 4; W32(r_esp, 0x89dab9u); f_0089e619();
    /* 0089dab9: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089dabe: je 0x89dac7 */ if (fZ) goto L_0089dac7;
L_0089dac0:; BB(0x0089dac0);
    /* 0089dac0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089dac1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89dac6u); f_00857e98();
    /* 0089dac6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089dac7:; BB(0x0089dac7);
    /* 0089dac7: mov eax, esi */ r_eax = r_esi;
    /* 0089dac9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089daca: ret 4 */ FN_RET(0x0089dab1); r_esp += 8; return;
}

