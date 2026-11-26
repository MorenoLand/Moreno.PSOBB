#include "protos.h"

void f_004c0000(void)
{
    FN_ENTER(0x004c0000);
    /* 004c0000: lcall 0x9a, 0xbe9ca300 */ UNSUP(0x004c0000, "lcall 0x9a, 0xbe9ca300");
    /* 004c0007: ret  */ FN_RET(0x004c0000); r_esp += 4; return;
}

void f_004c0004(void)
{
    FN_ENTER(0x004c0004);
    /* 004c0004: mov esi, 0xc7c3009a */ r_esi = 0xc7c3009au;
    /* 004c0009: add eax, 0xa48488 */ {  u32 a = r_eax; u32 b = 0xa48488u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c000e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0010: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004c0012: ret  */ FN_RET(0x004c0004); r_esp += 4; return;
}

void f_004c0008(void) /* sub_4C0008 */
{
    FN_ENTER(0x004c0008);
    /* 004c0008: mov dword ptr [0xa48488], 0 */ W32((u32)(0xa48488u), 0x0u);
    /* 004c0012: ret  */ FN_RET(0x004c0008); r_esp += 4; return;
}

void f_004c0014(void)
{
    FN_ENTER(0x004c0014);
    /* 004c0014: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0015: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c0017: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0019: call 0x4c0038 */ r_esp -= 4; W32(r_esp, 0x4c001eu); f_004c0038();
    /* 004c001e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004c0022: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c0024: jne 0x4c002a */ if (!fZ) goto L_004c002a;
L_004c0026:; BB(0x004c0026);
    /* 004c0026: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0027: ret 4 */ FN_RET(0x004c0014); r_esp += 8; return;
L_004c002a:; BB(0x004c002a);
    /* 004c002a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c002b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4c0030u); f_005c2f74();
    /* 004c0030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c0031: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0032: ret 4 */ FN_RET(0x004c0014); r_esp += 8; return;
}

void f_004c0020(void)
{
    FN_ENTER(0x004c0020);
    /* 004c0020: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c0022: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c0024: jne 0x4c002a */ if (!fZ) goto L_004c002a;
L_004c0026:; BB(0x004c0026);
    /* 004c0026: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0027: ret 4 */ FN_RET(0x004c0020); r_esp += 8; return;
L_004c002a:; BB(0x004c002a);
    /* 004c002a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c002b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4c0030u); f_005c2f74();
    /* 004c0030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c0031: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0032: ret 4 */ FN_RET(0x004c0020); r_esp += 8; return;
}

void f_004c0038(void) /* sub_4C0038 */
{
    FN_ENTER(0x004c0038);
    /* 004c0038: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c0039: mov ebp, esp */ r_ebp = r_esp;
    /* 004c003b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c003d: push 0x8d1510 */ { u32 v = 0x8d1510u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0042: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c0048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0049: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0038); r_esp += 4; return;
}

void f_004c0041(void)
{
    FN_ENTER(0x004c0041);
    /* 004c0041: add byte ptr [ecx], ah */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0045: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0047: add byte ptr [eax + 0x64], dl */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c004a: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0041); r_esp += 4; return;
}

void f_004c0042(void)
{
    FN_ENTER(0x004c0042);
    /* 004c0042: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c0048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0049: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0042); r_esp += 4; return;
}

void f_004c0044(void)
{
    FN_ENTER(0x004c0044);
    /* 004c0044: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0046: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0049: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0044); r_esp += 4; return;
}

void f_004c0047(void)
{
    FN_ENTER(0x004c0047);
    /* 004c0047: add byte ptr [eax + 0x64], dl */ { u32 ad = (u32)(r_eax+0x64u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c004a: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0047); r_esp += 4; return;
}

void f_004c0049(void)
{
    FN_ENTER(0x004c0049);
    /* 004c0049: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0049); r_esp += 4; return;
}

void f_004c004a(void)
{
    FN_ENTER(0x004c004a);
    /* 004c004a: mov dword ptr [0], esp */ W32((u32)(0x0u), r_esp);
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c004a); r_esp += 4; return;
}

void f_004c004c(void)
{
    FN_ENTER(0x004c004c);
    /* 004c004c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c004e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0050: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c004c); r_esp += 4; return;
}

void f_004c004f(void)
{
    FN_ENTER(0x004c004f);
    /* 004c004f: add byte ptr [ebx + 0x658914ec], al */ { u32 ad = (u32)(r_ebx+0x658914ecu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x004c0055, "falls out of decoded code");
}

void f_004c0052(void)
{
    FN_ENTER(0x004c0052);
    /* 004c0052: adc al, 0x89 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    UNSUP(0x004c0054, "falls out of decoded code");
}

void f_004c0053(void)
{
    FN_ENTER(0x004c0053);
    /* 004c0053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004c0056: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004c0059: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004c005c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004c005f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c0062: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004c0069: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c006c: mov ecx, dword ptr [eax + 0x68c] */ r_ecx = R32((u32)(r_eax+0x68cu));
    /* 004c0072: mov dword ptr [eax], 0xafb860 */ W32((u32)(r_eax), 0xafb860u);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0053); r_esp += 4; return;
}

void f_004c0078(void)
{
    FN_ENTER(0x004c0078);
    /* 004c0078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c007a: je 0x4c0091 */ if (fZ) goto L_004c0091;
L_004c007c:; BB(0x004c007c);
    /* 004c007c: je 0x4c0087 */ if (fZ) goto L_004c0087;
L_004c007e:; BB(0x004c007e);
    /* 004c007e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c0082: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c0084u); call_ind(t); }
    /* 004c0084: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c0087:; BB(0x004c0087);
    /* 004c0087: mov dword ptr [eax + 0x68c], 0 */ W32((u32)(r_eax+0x68cu), 0x0u);
L_004c0091:; BB(0x004c0091);
    /* 004c0091: mov ecx, dword ptr [eax + 0x688] */ r_ecx = R32((u32)(r_eax+0x688u));
    /* 004c0097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0099: je 0x4c00b1 */ if (fZ) goto L_004c00b1;
L_004c009b:; BB(0x004c009b);
    /* 004c009b: je 0x4c00a7 */ if (fZ) goto L_004c00a7;
L_004c009d:; BB(0x004c009d);
    /* 004c009d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c009f: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4c00a4u); f_00418aa8();
    /* 004c00a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00a7:; BB(0x004c00a7);
    /* 004c00a7: mov dword ptr [eax + 0x688], 0 */ W32((u32)(r_eax+0x688u), 0x0u);
L_004c00b1:; BB(0x004c00b1);
    /* 004c00b1: mov ecx, dword ptr [eax + 0x684] */ r_ecx = R32((u32)(r_eax+0x684u));
    /* 004c00b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00b9: je 0x4c00d0 */ if (fZ) goto L_004c00d0;
L_004c00bb:; BB(0x004c00bb);
    /* 004c00bb: je 0x4c00c6 */ if (fZ) goto L_004c00c6;
L_004c00bd:; BB(0x004c00bd);
    /* 004c00bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c00bf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c00c1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4c00c3u); call_ind(t); }
    /* 004c00c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004c00c6:; BB(0x004c00c6);
    /* 004c00c6: mov dword ptr [eax + 0x684], 0 */ W32((u32)(r_eax+0x684u), 0x0u);
L_004c00d0:; BB(0x004c00d0);
    /* 004c00d0: mov ecx, eax */ r_ecx = r_eax;
    /* 004c00d2: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x4c00d7u); f_007b9c8c();
    /* 004c00d7: mov eax, dword ptr [0xa485cc] */ r_eax = R32((u32)(0xa485ccu));
    /* 004c00dc: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c00df: jne 0x4c00ef */ if (!fZ) goto L_004c00ef;
L_004c00e5:; BB(0x004c00e5);
    /* 004c00e5: mov dword ptr [0xa485cc], 0 */ W32((u32)(0xa485ccu), 0x0u);
L_004c00ef:; BB(0x004c00ef);
    /* 004c00ef: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004c00f6: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004c00fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c00fe: add eax, 0x6e4 */ {  u32 a = r_eax; u32 b = 0x6e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c0078); r_esp += 4; return;
}

void f_004c00f2(void)
{
    FN_ENTER(0x004c00f2);
    /* 004c00f2: add eax, 0x68000000 */ {  u32 a = r_eax; u32 b = 0x68000000u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 004c00f7: in al, dx */ UNSUP(0x004c00f7, "in al, dx");
    /* 004c00f8: jo 0x4c0151 */ if (fO) goto L_004c0151;
L_004c00fa:; BB(0x004c00fa);
    /* 004c00fa: add byte ptr [ebx - 0x1bfa1fbb], cl */ { u32 ad = (u32)(r_ebx+0xe405e045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0100: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0101: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004c0103: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0105: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c0107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0108: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x4c010du); f_008586d6();
    /* 004c010d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c0114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0117: add ecx, 0x618 */ {  u32 a = r_ecx; u32 b = 0x618u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c011d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0122u); f_0061cdb0();
    /* 004c0122: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004c0129: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c012c: add ecx, 0x5f4 */ {  u32 a = r_ecx; u32 b = 0x5f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0132: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4c0137u); f_0061cdb0();
    /* 004c0137: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004c013e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c0141: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0147: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4c014cu); f_008171e8();
    /* 004c014c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c014f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x4c0154u); f_0051f4fc();
L_004c0151:; BB(0x004c0151);
    /* 004c0151: add eax, 0xf44d8b00 */ {  u32 a = r_eax; u32 b = 0xf44d8b00u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0154: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c0157: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c015e: mov esp, ebp */ r_esp = r_ebp;
    /* 004c0160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0161: ret  */ FN_RET(0x004c00f2); r_esp += 4; return;
}

void f_004c0164(void) /* sub_4C0164 */
{
    FN_ENTER(0x004c0164);
    /* 004c0164: mov edx, dword ptr [0xa4865c] */ r_edx = R32((u32)(0xa4865cu));
    /* 004c016a: cmp edx, dword ptr [0xa48658] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa48658u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0170: jne 0x4c019b */ if (!fZ) goto L_004c019b;
L_004c0172:; BB(0x004c0172);
    /* 004c0172: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4c0177u); f_0082d7b0();
    /* 004c0177: call 0x520c54 */ r_esp -= 4; W32(r_esp, 0x4c017cu); f_00520c54();
    /* 004c017c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c017e: push dword ptr [0xa48624] */ { u32 v = R32((u32)(0xa48624u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0184: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0186: mov edx, 0xa48628 */ r_edx = 0xa48628u;
    /* 004c018b: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x4c0190u); f_0082f940();
    /* 004c0190: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4c0195u); f_0082da80();
    /* 004c0195: mov edx, dword ptr [0xa4865c] */ r_edx = R32((u32)(0xa4865cu));
L_004c019b:; BB(0x004c019b);
    /* 004c019b: mov eax, dword ptr [0xa48620] */ r_eax = R32((u32)(0xa48620u));
    /* 004c01a0: cmp edx, dword ptr [eax*4 + 0x908040] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x908040u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c01a7: je 0x4c01b3 */ if (fZ) goto L_004c01b3;
L_004c01a9:; BB(0x004c01a9);
    /* 004c01a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c01ac: mov dword ptr [0xa4865c], edx */ W32((u32)(0xa4865cu), r_edx);
    /* 004c01b2: ret  */ FN_RET(0x004c0164); r_esp += 4; return;
L_004c01b3:; BB(0x004c01b3);
    /* 004c01b3: mov edx, dword ptr [0xa4861c] */ r_edx = R32((u32)(0xa4861cu));
    /* 004c01b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c01ba: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 004c01bd: mov dword ptr [0xa4861c], eax */ W32((u32)(0xa4861cu), r_eax);
    /* 004c01c2: push 0xa4864c */ { u32 v = 0xa4864cu; r_esp -= 4; W32(r_esp, v); }
    /* 004c01c7: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x4c01ccu); f_00520c5c();
    /* 004c01cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c01cf: mov eax, dword ptr [0xa48620] */ r_eax = R32((u32)(0xa48620u));
    /* 004c01d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c01d7: mov edx, eax */ r_edx = r_eax;
    /* 004c01d9: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c01dc: je 0x4c0229 */ if (fZ) goto L_004c0229;
L_004c01de:; BB(0x004c01de);
    /* 004c01de: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c01e1: je 0x4c01f1 */ if (fZ) goto L_004c01f1;
L_004c01e3:; BB(0x004c01e3);
    /* 004c01e3: mov dword ptr [0xa48620], edx */ W32((u32)(0xa48620u), r_edx);
    /* 004c01e9: mov edx, dword ptr [0xa4865c] */ r_edx = R32((u32)(0xa4865cu));
    /* 004c01ef: jmp 0x4c01a9 */ goto L_004c01a9;
L_004c01f1:; BB(0x004c01f1);
    /* 004c01f1: mov eax, dword ptr [0xa48618] */ r_eax = R32((u32)(0xa48618u));
    /* 004c01f6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c01f8: je 0x4c0208 */ if (fZ) goto L_004c0208;
L_004c01fa:; BB(0x004c01fa);
    /* 004c01fa: mov dword ptr [0xa48620], edx */ W32((u32)(0xa48620u), r_edx);
    /* 004c0200: mov edx, dword ptr [0xa4865c] */ r_edx = R32((u32)(0xa4865cu));
    /* 004c0206: jmp 0x4c01a9 */ goto L_004c01a9;
L_004c0208:; BB(0x004c0208);
    /* 004c0208: mov eax, dword ptr [0xa4861c] */ r_eax = R32((u32)(0xa4861cu));
    /* 004c020d: mov edx, dword ptr [0xa4865c] */ r_edx = R32((u32)(0xa4865cu));
    /* 004c0213: mov dword ptr [0xa48620], 0x20 */ W32((u32)(0xa48620u), 0x20u);
    /* 004c021d: add eax, 0xa8 */ {  u32 a = r_eax; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0222: mov dword ptr [0xa4861c], eax */ W32((u32)(0xa4861cu), r_eax);
    /* 004c0227: jmp 0x4c01a9 */ goto L_004c01a9;
L_004c0229:; BB(0x004c0229);
    /* 004c0229: mov ecx, dword ptr [0xa48618] */ r_ecx = R32((u32)(0xa48618u));
    /* 004c022f: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c0232: jne 0x4c01de */ if (!fZ) goto L_004c01de;
L_004c0234:; BB(0x004c0234);
    /* 004c0234: mov ecx, dword ptr [0xa4861c] */ r_ecx = R32((u32)(0xa4861cu));
    /* 004c023a: mov eax, 0xc */ r_eax = 0xcu;
    /* 004c023f: mov edx, 0xc */ r_edx = 0xcu;
    /* 004c0244: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c0247: mov dword ptr [0xa4861c], ecx */ W32((u32)(0xa4861cu), r_ecx);
    /* 004c024d: jmp 0x4c01de */ goto L_004c01de;
}

void f_004c0250(void) /* sub_4C0250 */
{
    FN_ENTER(0x004c0250);
    /* 004c0250: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0251: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0252: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0255: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c0257: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 004c025d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c0260: mov edx, dword ptr [ebx + 0x440] */ r_edx = R32((u32)(r_ebx+0x440u));
    /* 004c0266: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c026a: mov eax, dword ptr [ebx + 0x444] */ r_eax = R32((u32)(r_ebx+0x444u));
    /* 004c0270: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0272: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c0276: mov eax, dword ptr [ebx + 0x478] */ r_eax = R32((u32)(r_ebx+0x478u));
    /* 004c027c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c0280: mov eax, dword ptr [ebx + 0x47c] */ r_eax = R32((u32)(r_ebx+0x47cu));
    /* 004c0286: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c028a: mov eax, dword ptr [ebx + 0x480] */ r_eax = R32((u32)(r_ebx+0x480u));
    /* 004c0290: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004c0294: mov eax, dword ptr [ebx + 0x460] */ r_eax = R32((u32)(r_ebx+0x460u));
    /* 004c029a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004c029e: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 004c02a4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004c02a8: mov eax, dword ptr [ebx + 0x468] */ r_eax = R32((u32)(r_ebx+0x468u));
    /* 004c02ae: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c02b2: mov eax, dword ptr [ebx + 0x448] */ r_eax = R32((u32)(r_ebx+0x448u));
    /* 004c02b8: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c02bc: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 004c02c2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004c02c6: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 004c02cc: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004c02d0: mov eax, dword ptr [ebx + 0x5bc] */ r_eax = R32((u32)(r_ebx+0x5bcu));
    /* 004c02d6: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c02da: mov eax, dword ptr [ebx + 0x5c0] */ r_eax = R32((u32)(r_ebx+0x5c0u));
    /* 004c02e0: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004c02e4: mov eax, dword ptr [ebx + 0x5c4] */ r_eax = R32((u32)(r_ebx+0x5c4u));
    /* 004c02ea: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c02ee: mov eax, dword ptr [ebx + 0x4cc] */ r_eax = R32((u32)(r_ebx+0x4ccu));
    /* 004c02f4: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004c02f8: mov eax, dword ptr [ebx + 0x4d0] */ r_eax = R32((u32)(r_ebx+0x4d0u));
    /* 004c02fe: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c0302: mov eax, dword ptr [ebx + 0x4d4] */ r_eax = R32((u32)(r_ebx+0x4d4u));
    /* 004c0308: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 004c030c: mov eax, dword ptr [ebx + 0x508] */ r_eax = R32((u32)(r_ebx+0x508u));
    /* 004c0312: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c0316: mov eax, dword ptr [ebx + 0x50c] */ r_eax = R32((u32)(r_ebx+0x50cu));
    /* 004c031c: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004c0320: mov eax, dword ptr [ebx + 0x510] */ r_eax = R32((u32)(r_ebx+0x510u));
    /* 004c0326: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004c032a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c032d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c032e: call 0x520158 */ r_esp -= 4; W32(r_esp, 0x4c0333u); f_00520158();
    /* 004c0333: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c0335: mov esi, eax */ r_esi = r_eax;
L_004c0337:; BB(0x004c0337);
    /* 004c0337: mov edx, esi */ r_edx = r_esi;
    /* 004c0339: add edx, dword ptr [ebx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c033f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004c0342: fcomp dword ptr [0x908970] */ fx_compare(ST(0), R_F32((u32)(0x908970u))); FPOP();
    /* 004c0348: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c034a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c034b: jb 0x4c0356 */ if (fC) goto L_004c0356;
L_004c034d:; BB(0x004c034d);
    /* 004c034d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c034e: call 0x52033c */ r_esp -= 4; W32(r_esp, 0x4c0353u); f_0052033c();
    /* 004c0353: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c0354: jmp 0x4c035d */ goto L_004c035d;
L_004c0356:; BB(0x004c0356);
    /* 004c0356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0357: call 0x520328 */ r_esp -= 4; W32(r_esp, 0x4c035cu); f_00520328();
    /* 004c035c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004c035d:; BB(0x004c035d);
    /* 004c035d: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c0360: cmp esi, 0x134 */ {  u32 a = r_esi; u32 b = 0x134u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0366: jl 0x4c0337 */ if ((fS!=fO)) goto L_004c0337;
L_004c0368:; BB(0x004c0368);
    /* 004c0368: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004c036f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0372: je 0x4c0399 */ if (fZ) goto L_004c0399;
L_004c0374:; BB(0x004c0374);
    /* 004c0374: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004c037a: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c037f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0380: call 0x52033c */ r_esp -= 4; W32(r_esp, 0x4c0385u); f_0052033c();
    /* 004c0385: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004c038b: add eax, 0xb0 */ {  u32 a = r_eax; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c0390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0391: call 0x52033c */ r_esp -= 4; W32(r_esp, 0x4c0396u); f_0052033c();
    /* 004c0396: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c0399:; BB(0x004c0399);
    /* 004c0399: mov eax, dword ptr [0xa48500] */ r_eax = R32((u32)(0xa48500u));
    /* 004c039e: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 004c03a1: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004c03a7: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 004c03aa: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 004c03ad: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004c03b3: fstp dword ptr [edx + 0x54] */ W_F32((u32)(r_edx+0x54u), ST(0)); FPOP();
    /* 004c03b6: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 004c03b9: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004c03bf: fstp dword ptr [edx + 0x80] */ W_F32((u32)(r_edx+0x80u), ST(0)); FPOP();
    /* 004c03c5: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 004c03c8: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004c03ce: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 004c03d4: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 004c03d7: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004c03dd: fstp dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0)); FPOP();
    /* 004c03e3: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 004c03e6: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 004c03ec: fstp dword ptr [edx + 0x104] */ W_F32((u32)(r_edx+0x104u), ST(0)); FPOP();
    /* 004c03f2: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 004c03f5: mov ecx, dword ptr [ebx + 0xa4] */ r_ecx = R32((u32)(r_ebx+0xa4u));
    /* 004c03fb: fstp dword ptr [ecx + 0x130] */ W_F32((u32)(r_ecx+0x130u), ST(0)); FPOP();
    /* 004c0401: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0404: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0405: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0406: ret  */ FN_RET(0x004c0250); r_esp += 4; return;
}

void f_004c0408(void) /* sub_4C0408 */
{
    FN_ENTER(0x004c0408);
    /* 004c0408: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0409: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c040c: mov esi, ecx */ r_esi = r_ecx;
    /* 004c040e: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 004c0412: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c0415: ja 0x4c06b7 */ if ((!fC&&!fZ)) goto L_004c06b7;
L_004c041b:; BB(0x004c041b);
    /* 004c041b: mov eax, dword ptr [eax*4 + 0x9078b4] */ r_eax = R32((u32)(r_eax*4+0x9078b4u));
    /* 004c0422: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c06b7:; BB(0x004c06b7);
    /* 004c06b7: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c06ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c06bb: ret 4 */ FN_RET(0x004c0408); r_esp += 8; return;
}

void f_004c0424(void)
{
    FN_ENTER(0x004c0424);
    /* 004c0424: mov edx, dword ptr [esi + 0x3c8] */ r_edx = R32((u32)(r_esi+0x3c8u));
    /* 004c042a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c042c: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004c0433: mov dword ptr [esi + 0x85c], eax */ W32((u32)(r_esi+0x85cu), r_eax);
    /* 004c0439: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c043c: je 0x4c044c */ if (fZ) goto L_004c044c;
L_004c043e:; BB(0x004c043e);
    /* 004c043e: mov ecx, esi */ r_ecx = r_esi;
    /* 004c0440: call 0x4c06c0 */ r_esp -= 4; W32(r_esp, 0x4c0445u); f_004c06c0();
    /* 004c0445: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0448: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0449: ret 4 */ FN_RET(0x004c0424); r_esp += 8; return;
L_004c044c:; BB(0x004c044c);
    /* 004c044c: add esi, 0x63c */ {  u32 a = r_esi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c0452: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c0454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0456: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0457: push 0x401 */ { u32 v = 0x401u; r_esp -= 4; W32(r_esp, v); }
    /* 004c045c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c0461u); f_00814298();
    /* 004c0461: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0464: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0467: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0468: ret 4 */ FN_RET(0x004c0424); r_esp += 8; return;
}

void f_004c046b(void)
{
    FN_ENTER(0x004c046b);
    /* 004c046b: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0471: mov eax, dword ptr [esi + 0x6e0] */ r_eax = R32((u32)(r_esi+0x6e0u));
    /* 004c0477: mov ecx, esi */ r_ecx = r_esi;
    /* 004c0479: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c047c: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c0481u); f_004c6c54();
    /* 004c0481: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0483: je 0x4c052d */ if (fZ) goto L_004c052d;
L_004c0489:; BB(0x004c0489);
    /* 004c0489: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c048b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c048d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c048f: mov ecx, esi */ r_ecx = r_esi;
    /* 004c0491: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c0497u); call_ind(t); }
    /* 004c0497: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c049b: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c04a1: mov byte ptr [esp + 0x30], 0xa8 */ W8((u32)(r_esp+0x30u), 0xa8u);
    /* 004c04a6: mov edx, 3 */ r_edx = 0x3u;
    /* 004c04ab: mov byte ptr [esp + 0x31], 6 */ W8((u32)(r_esp+0x31u), 0x6u);
    /* 004c04b0: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 004c04b5: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c04bb: mov word ptr [esp + 0x34], dx */ W16((u32)(r_esp+0x34u), (u16)r_edx);
    /* 004c04c0: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 004c04c5: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c04cc: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c04d0: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c04d6: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004c04da: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 004c04de: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c04e3u); f_008587a5();
    /* 004c04e3: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c04e7: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 004c04eb: fdiv dword ptr [0x908900] */ ST(0) = ST(0) / R_F32((u32)(0x908900u));
    /* 004c04f1: fmul dword ptr [0x908904] */ ST(0) = ST(0) * R_F32((u32)(0x908904u));
    /* 004c04f7: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 004c04fb: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 004c04ff: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 004c0504: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c0509: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004c050d: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 004c0511: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c0515: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 004c0519: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004c051d: mov byte ptr [esp + 0x44], al */ W8((u32)(r_esp+0x44u), (u8)r_eax);
    /* 004c0521: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c0526u); f_008003e0();
    /* 004c0526: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0529: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c052a: ret 4 */ FN_RET(0x004c046b); r_esp += 8; return;
L_004c052d:; BB(0x004c052d);
    /* 004c052d: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0533: mov eax, dword ptr [esi + 0x6e0] */ r_eax = R32((u32)(r_esi+0x6e0u));
    /* 004c0539: mov ecx, esi */ r_ecx = r_esi;
    /* 004c053b: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c053e: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c0543u); f_004c6c54();
    /* 004c0543: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0545: jne 0x4c0605 */ if (!fZ) goto L_004c0605;
L_004c054b:; BB(0x004c054b);
    /* 004c054b: mov edx, dword ptr [esi + 0x6e0] */ r_edx = R32((u32)(r_esi+0x6e0u));
    /* 004c0551: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c0554: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c055a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c055c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c055d: jbe 0x4c06b7 */ if ((fC||fZ)) goto L_004c06b7;
L_004c0563:; BB(0x004c0563);
    /* 004c0563: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0565: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0567: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c0569: mov ecx, esi */ r_ecx = r_esi;
    /* 004c056b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c0571u); call_ind(t); }
    /* 004c0571: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c0575: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c057b: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c057f: mov edx, 0x19 */ r_edx = 0x19u;
    /* 004c0584: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c0589: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c058e: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c0594: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c0599: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c059e: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c05a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c05a9: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c05af: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c05b3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c05b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c05bcu); f_008587a5();
    /* 004c05bc: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004c05c0: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 004c05c4: fdiv dword ptr [0x908900] */ ST(0) = ST(0) / R_F32((u32)(0x908900u));
    /* 004c05ca: fmul dword ptr [0x908904] */ ST(0) = ST(0) * R_F32((u32)(0x908904u));
    /* 004c05d0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c05d3: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 004c05d7: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 004c05dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c05e1: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004c05e5: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 004c05e9: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c05ed: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 004c05f1: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004c05f5: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c05f9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c05feu); f_008003e0();
    /* 004c05fe: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0602: ret 4 */ FN_RET(0x004c046b); r_esp += 8; return;
L_004c0605:; BB(0x004c0605);
    /* 004c0605: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0607: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0609: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004c060b: mov ecx, esi */ r_ecx = r_esi;
    /* 004c060d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c0613u); call_ind(t); }
    /* 004c0613: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004c0617: mov ecx, dword ptr [esi + 0x694] */ r_ecx = R32((u32)(r_esi+0x694u));
    /* 004c061d: mov byte ptr [esp + 0x18], 0xa8 */ W8((u32)(r_esp+0x18u), 0xa8u);
    /* 004c0622: mov edx, 5 */ r_edx = 0x5u;
    /* 004c0627: mov byte ptr [esp + 0x19], 6 */ W8((u32)(r_esp+0x19u), 0x6u);
    /* 004c062c: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004c0631: mov eax, dword ptr [esi + 0x67c] */ r_eax = R32((u32)(r_esi+0x67cu));
    /* 004c0637: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004c063c: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 004c0641: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004c0648: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c064c: mov eax, dword ptr [esi + 0x690] */ r_eax = R32((u32)(r_esi+0x690u));
    /* 004c0652: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004c0656: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 004c065a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c065fu); f_008587a5();
    /* 004c065f: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004c0663: fild dword ptr [esp + 0x68] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x68u)));
    /* 004c0667: fdiv dword ptr [0x908900] */ ST(0) = ST(0) / R_F32((u32)(0x908900u));
    /* 004c066d: fmul dword ptr [0x908904] */ ST(0) = ST(0) * R_F32((u32)(0x908904u));
    /* 004c0673: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004c0677: fnstcw word ptr [esp + 0x50] */ W16((u32)(r_esp+0x50u), fcw);
    /* 004c067b: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 004c0680: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c0685: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004c0689: fldcw word ptr [esp + 0x58] */ fcw = R16((u32)(r_esp+0x58u));
    /* 004c068d: fistp dword ptr [esp + 0x60] */ W32((u32)(r_esp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c0691: fldcw word ptr [esp + 0x50] */ fcw = R16((u32)(r_esp+0x50u));
    /* 004c0695: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 004c0699: mov byte ptr [esp + 0x2c], al */ W8((u32)(r_esp+0x2cu), (u8)r_eax);
    /* 004c069d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c06a2u); f_008003e0();
    /* 004c06a2: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c06a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c06a6: ret 4 */ FN_RET(0x004c046b); r_esp += 8; return;
L_004c06b7:; BB(0x004c06b7);
    /* 004c06b7: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c06ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c06bb: ret 4 */ FN_RET(0x004c046b); r_esp += 8; return;
}

void f_004c06a9(void)
{
    FN_ENTER(0x004c06a9);
    /* 004c06a9: add dword ptr [esi + 0x85c], 1 */ { u32 ad = (u32)(r_esi+0x85cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004c06b0: mov ecx, esi */ r_ecx = r_esi;
    /* 004c06b2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c06b7u); f_007aa094();
    /* 004c06b7: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c06ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c06bb: ret 4 */ FN_RET(0x004c06a9); r_esp += 8; return;
}

void f_004c06b7(void)
{
    FN_ENTER(0x004c06b7);
    /* 004c06b7: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c06ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c06bb: ret 4 */ FN_RET(0x004c06b7); r_esp += 8; return;
}

void f_004c06c0(void) /* sub_4C06C0 */
{
    FN_ENTER(0x004c06c0);
    /* 004c06c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c06c1: mov edi, ecx */ r_edi = r_ecx;
    /* 004c06c3: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c06c9: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c06cb: jne 0x4c06cf */ if (!fZ) goto L_004c06cf;
L_004c06cd:; BB(0x004c06cd);
    /* 004c06cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c06ce: ret  */ FN_RET(0x004c06c0); r_esp += 4; return;
L_004c06cf:; BB(0x004c06cf);
    /* 004c06cf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c06d0: call 0x4ce784 */ r_esp -= 4; W32(r_esp, 0x4c06d5u); f_004ce784();
    /* 004c06d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c06d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c06d8: jne 0x4c06dc */ if (!fZ) goto L_004c06dc;
L_004c06da:; BB(0x004c06da);
    /* 004c06da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c06db: ret  */ FN_RET(0x004c06c0); r_esp += 4; return;
L_004c06dc:; BB(0x004c06dc);
    /* 004c06dc: lea edx, [edi + 0x63c] */ r_edx = (u32)(r_edi+0x63cu);
    /* 004c06e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c06e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c06e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c06e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c06e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c06e8: push 0x414 */ { u32 v = 0x414u; r_esp -= 4; W32(r_esp, v); }
    /* 004c06ed: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4c06f2u); f_008144b0();
    /* 004c06f2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c06f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c06f6: ret  */ FN_RET(0x004c06c0); r_esp += 4; return;
}

void f_004c06f8(void) /* sub_4C06F8 */
{
    FN_ENTER(0x004c06f8);
    /* 004c06f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c06f9: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c06fc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004c06fe: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004c0702: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c0705: ja 0x4c0980 */ if ((!fC&&!fZ)) goto L_004c0980;
L_004c070b:; BB(0x004c070b);
    /* 004c070b: mov eax, dword ptr [eax*4 + 0x9078e4] */ r_eax = R32((u32)(r_eax*4+0x9078e4u));
    /* 004c0712: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c0980:; BB(0x004c0980);
    /* 004c0980: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0983: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0984: ret 4 */ FN_RET(0x004c06f8); r_esp += 8; return;
}

void f_004c0714(void)
{
    FN_ENTER(0x004c0714);
    /* 004c0714: mov edx, dword ptr [ebx + 0x85c] */ r_edx = R32((u32)(r_ebx+0x85cu));
    /* 004c071a: cmp edx, 0x96 */ {  u32 a = r_edx; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0720: jl 0x4c075a */ if ((fS!=fO)) goto L_004c075a;
L_004c0722:; BB(0x004c0722);
    /* 004c0722: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 004c0728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c072a: je 0x4c075a */ if (fZ) goto L_004c075a;
L_004c072c:; BB(0x004c072c);
    /* 004c072c: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 004c0732: fcomp dword ptr [ebx + 0x874] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x874u))); FPOP();
    /* 004c0738: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c073a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c073b: jb 0x4c0766 */ if (fC) goto L_004c0766;
L_004c073d:; BB(0x004c073d);
    /* 004c073d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c073f: call 0x4c09ec */ r_esp -= 4; W32(r_esp, 0x4c0744u); f_004c09ec();
    /* 004c0744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0746: jne 0x4c0766 */ if (!fZ) goto L_004c0766;
L_004c0748:; BB(0x004c0748);
    /* 004c0748: mov eax, dword ptr [ebx + 0x85c] */ r_eax = R32((u32)(r_ebx+0x85cu));
    /* 004c074e: cmp eax, 0x258 */ {  u32 a = r_eax; u32 b = 0x258u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0753: jge 0x4c0766 */ if ((fS==fO)) goto L_004c0766;
L_004c0755:; BB(0x004c0755);
    /* 004c0755: jmp 0x4c0980 */ goto L_004c0980;
L_004c075a:; BB(0x004c075a);
    /* 004c075a: cmp edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0760: jl 0x4c0980 */ if ((fS!=fO)) goto L_004c0980;
L_004c0766:; BB(0x004c0766);
    /* 004c0766: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004c076c: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c076e: je 0x4c077f */ if (fZ) goto L_004c077f;
L_004c0770:; BB(0x004c0770);
    /* 004c0770: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004c0776: mov ecx, eax */ r_ecx = r_eax;
    /* 004c0778: mov edx, 0x9080e0 */ r_edx = 0x9080e0u;
    /* 004c077d: jmp 0x4c079b */ goto L_004c079b;
L_004c077f:; BB(0x004c077f);
    /* 004c077f: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004c0785: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0788: jge 0x4c0793 */ if ((fS==fO)) goto L_004c0793;
L_004c078a:; BB(0x004c078a);
    /* 004c078a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c078c: mov edx, 0x9088c0 */ r_edx = 0x9088c0u;
    /* 004c0791: jmp 0x4c079b */ goto L_004c079b;
L_004c0793:; BB(0x004c0793);
    /* 004c0793: lea ecx, [eax - 0x32] */ r_ecx = (u32)(r_eax+0xffffffceu);
    /* 004c0796: mov edx, 0x908160 */ r_edx = 0x908160u;
L_004c079b:; BB(0x004c079b);
    /* 004c079b: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 004c079e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c07a1: cmp ecx, 0x21 */ {  u32 a = r_ecx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c07a4: jne 0x4c0987 */ if (!fZ) goto L_004c0987;
L_004c07aa:; BB(0x004c07aa);
    /* 004c07aa: mov dword ptr [ebx + 0x67c], 0 */ W32((u32)(r_ebx+0x67cu), 0x0u);
    /* 004c07b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c07b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c07b8: jmp 0x4c079b */ goto L_004c079b;
L_004c0980:; BB(0x004c0980);
    /* 004c0980: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0983: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0984: ret 4 */ FN_RET(0x004c0714); r_esp += 8; return;
L_004c0987:; BB(0x004c0987);
    /* 004c0987: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c098a: je 0x4c09a1 */ if (fZ) goto L_004c09a1;
L_004c098c:; BB(0x004c098c);
    /* 004c098c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c098d: mov dword ptr [ebx + 0x67c], eax */ W32((u32)(r_ebx+0x67cu), r_eax);
    /* 004c0993: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0995: call 0x4c3074 */ r_esp -= 4; W32(r_esp, 0x4c099au); f_004c3074();
    /* 004c099a: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c099d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c099e: ret 4 */ FN_RET(0x004c0714); r_esp += 8; return;
L_004c09a1:; BB(0x004c09a1);
    /* 004c09a1: mov dword ptr [ebx + 0x67c], 0x32 */ W32((u32)(r_ebx+0x67cu), 0x32u);
    /* 004c09ab: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004c09b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004c09b2: jmp 0x4c079b */ goto L_004c079b;
}

void f_004c07ba(void)
{
    FN_ENTER(0x004c07ba);
    /* 004c07ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c07bc: call 0x4c06c0 */ r_esp -= 4; W32(r_esp, 0x4c07c1u); f_004c06c0();
    /* 004c07c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c07c3: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4c07c8u); f_004c0b50();
    /* 004c07c8: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004c07cd: mov ecx, dword ptr [ebx + 0x85c] */ r_ecx = R32((u32)(r_ebx+0x85cu));
    /* 004c07d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c07d6: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004c07d8: mov dword ptr [ebx + 0x85c], ecx */ W32((u32)(r_ebx+0x85cu), r_ecx);
    /* 004c07de: mov eax, ecx */ r_eax = r_ecx;
    /* 004c07e0: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004c07e3: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004c07e6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004c07e8: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 004c07eb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c07ed: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c07ef: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004c07f1: cmp ecx, 0x13 */ {  u32 a = r_ecx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c07f4: jne 0x4c0980 */ if (!fZ) goto L_004c0980;
L_004c07fa:; BB(0x004c07fa);
    /* 004c07fa: jmp 0x4c09b7 */ goto L_004c09b7;
L_004c0980:; BB(0x004c0980);
    /* 004c0980: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0983: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0984: ret 4 */ FN_RET(0x004c07ba); r_esp += 8; return;
L_004c09b7:; BB(0x004c09b7);
    /* 004c09b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c09b9: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x4c09beu); f_0052126c();
    /* 004c09be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c09c0: je 0x4c09cb */ if (fZ) goto L_004c09cb;
L_004c09c2:; BB(0x004c09c2);
    /* 004c09c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c09c4: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4c09c9u); f_005213d8();
    /* 004c09c9: jmp 0x4c09d7 */ goto L_004c09d7;
L_004c09cb:; BB(0x004c09cb);
    /* 004c09cb: push 0x9088b4 */ { u32 v = 0x9088b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c09d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c09d2: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4c09d7u); f_005213ec();
L_004c09d7:; BB(0x004c09d7);
    /* 004c09d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c09d9: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c09deu); f_004c0b5c();
    /* 004c09de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c09e0: call 0x4c0a9c */ r_esp -= 4; W32(r_esp, 0x4c09e5u); f_004c0a9c();
    /* 004c09e5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c09e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c09e9: ret 4 */ FN_RET(0x004c07ba); r_esp += 8; return;
}

void f_004c07ff(void)
{
    FN_ENTER(0x004c07ff);
    /* 004c07ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0801: call 0x4c0b34 */ r_esp -= 4; W32(r_esp, 0x4c0806u); f_004c0b34();
    /* 004c0806: jmp 0x4c0980 */ goto L_004c0980;
L_004c0980:; BB(0x004c0980);
    /* 004c0980: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0983: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0984: ret 4 */ FN_RET(0x004c07ff); r_esp += 8; return;
}

void f_004c080b(void)
{
    FN_ENTER(0x004c080b);
    /* 004c080b: mov eax, dword ptr [ebx + 0x3bc] */ r_eax = R32((u32)(r_ebx+0x3bcu));
    /* 004c0811: mov dword ptr [ebx + 0x3b8], eax */ W32((u32)(r_ebx+0x3b8u), r_eax);
    /* 004c0817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0819: call 0x4c0b50 */ r_esp -= 4; W32(r_esp, 0x4c081eu); f_004c0b50();
    /* 004c081e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0820: je 0x4c082b */ if (fZ) goto L_004c082b;
L_004c0822:; BB(0x004c0822);
    /* 004c0822: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0824: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x4c0829u); f_005213d8();
    /* 004c0829: jmp 0x4c0837 */ goto L_004c0837;
L_004c082b:; BB(0x004c082b);
    /* 004c082b: push 0x9088b4 */ { u32 v = 0x9088b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0830: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0832: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x4c0837u); f_005213ec();
L_004c0837:; BB(0x004c0837);
    /* 004c0837: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0839: call 0x4c0b5c */ r_esp -= 4; W32(r_esp, 0x4c083eu); f_004c0b5c();
    /* 004c083e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0841: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0842: ret 4 */ FN_RET(0x004c080b); r_esp += 8; return;
}

void f_004c0845(void)
{
    FN_ENTER(0x004c0845);
    /* 004c0845: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004c0847: mov eax, 1 */ r_eax = 0x1u;
    /* 004c084c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004c0853: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0855: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c085bu); call_ind(t); }
    /* 004c085b: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 004c0865: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c0867: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c086cu); f_004cb184();
    /* 004c086c: fld dword ptr [0x9088f8] */ FPUSH(R_F32((u32)(0x9088f8u)));
    /* 004c0872: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 004c0878: mov dword ptr [ebx + 0x85c], 0 */ W32((u32)(r_ebx+0x85cu), 0x0u);
    /* 004c0882: and edx, 0xffffffc9 */ {  u32 a = r_edx; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004c0885: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 004c088b: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004c0891: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004c0894: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c0898: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c089d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c08a2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c08a6: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c08aa: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c08ae: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c08b2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004c08b6: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c08b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c08ba: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x4c08bfu); f_00782a34();
    /* 004c08bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c08c2: fld dword ptr [0x9088f4] */ FPUSH(R_F32((u32)(0x9088f4u)));
    /* 004c08c8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004c08ca: fstp dword ptr [ebx + 0x874] */ W_F32((u32)(r_ebx+0x874u), ST(0)); FPOP();
    /* 004c08d0: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c08d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c08d4: ret 4 */ FN_RET(0x004c0845); r_esp += 8; return;
}

void f_004c08d7(void)
{
    FN_ENTER(0x004c08d7);
    /* 004c08d7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c08d9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c08db: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004c08dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c08df: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c08e5u); call_ind(t); }
    /* 004c08e5: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004c08e9: mov ecx, dword ptr [ebx + 0x694] */ r_ecx = R32((u32)(r_ebx+0x694u));
    /* 004c08ef: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c08f3: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c08f8: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c08fd: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c0902: mov eax, dword ptr [ebx + 0x67c] */ r_eax = R32((u32)(r_ebx+0x67cu));
    /* 004c0908: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c090d: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c0912: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 004c0919: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c091d: mov eax, dword ptr [ebx + 0x690] */ r_eax = R32((u32)(r_ebx+0x690u));
    /* 004c0923: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c0927: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004c092b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c0930u); f_008587a5();
    /* 004c0930: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c0934: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 004c0938: fdiv dword ptr [0x9088ec] */ ST(0) = ST(0) / R_F32((u32)(0x9088ecu));
    /* 004c093e: fmul dword ptr [0x9088f0] */ ST(0) = ST(0) * R_F32((u32)(0x9088f0u));
    /* 004c0944: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c0947: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004c094b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004c0950: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c0955: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c0959: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c095d: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c0961: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004c0965: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004c0969: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c096d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c0972u); f_008003e0();
    /* 004c0972: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0975: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0976: ret 4 */ FN_RET(0x004c08d7); r_esp += 8; return;
}

void f_004c0979(void)
{
    FN_ENTER(0x004c0979);
    /* 004c0979: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004c097b: call 0x4c0b78 */ r_esp -= 4; W32(r_esp, 0x4c0980u); f_004c0b78();
    /* 004c0980: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0983: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0984: ret 4 */ FN_RET(0x004c0979); r_esp += 8; return;
}

void f_004c0980(void)
{
    FN_ENTER(0x004c0980);
    /* 004c0980: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0983: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0984: ret 4 */ FN_RET(0x004c0980); r_esp += 8; return;
}

void f_004c09ec(void) /* sub_4C09EC */
{
    FN_ENTER(0x004c09ec);
    /* 004c09ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c09ed: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c09f0: mov edi, ecx */ r_edi = r_ecx;
    /* 004c09f2: mov ecx, edi */ r_ecx = r_edi;
    /* 004c09f4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004c09f7: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004c09fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c09fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c09fd: call 0x4c0a54 */ r_esp -= 4; W32(r_esp, 0x4c0a02u); f_004c0a54();
    /* 004c0a02: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004c0a06: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 004c0a0c: mov edx, dword ptr [edi + 0x3a0] */ r_edx = R32((u32)(r_edi+0x3a0u));
    /* 004c0a12: mov edi, dword ptr [edi + 0x3a4] */ r_edi = R32((u32)(r_edi+0x3a4u));
    /* 004c0a18: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c0a1c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004c0a20: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 004c0a24: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004c0a27: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4c0a2cu); f_0082f9c4();
    /* 004c0a2c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004c0a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a31: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c0a36u); f_007828e4();
    /* 004c0a36: fcomp dword ptr [0xa48524] */ fx_compare(ST(0), R_F32((u32)(0xa48524u))); FPOP();
    /* 004c0a3c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c0a3e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004c0a43: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c0a45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c0a46: jbe 0x4c0a4a */ if ((fC||fZ)) goto L_004c0a4a;
L_004c0a48:; BB(0x004c0a48);
    /* 004c0a48: mov ecx, edx */ r_ecx = r_edx;
L_004c0a4a:; BB(0x004c0a4a);
    /* 004c0a4a: mov eax, ecx */ r_eax = r_ecx;
    /* 004c0a4c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0a4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c0a50: ret  */ FN_RET(0x004c09ec); r_esp += 4; return;
}

void f_004c0a54(void) /* sub_4C0A54 */
{
    FN_ENTER(0x004c0a54);
    /* 004c0a54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c0a55: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c0a57: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004c0a5a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c0a5fu); f_0082dcbc();
    /* 004c0a5f: fld dword ptr [0xa48528] */ FPUSH(R_F32((u32)(0xa48528u)));
    /* 004c0a65: fadd dword ptr [0x9088b0] */ ST(0) = ST(0) + R_F32((u32)(0x9088b0u));
    /* 004c0a6b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c0a6d: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 004c0a70: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004c0a74: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004c0a76: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004c0a79: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c0a7eu); f_0082ddd8();
    /* 004c0a7e: fld dword ptr [0xa48528] */ FPUSH(R_F32((u32)(0xa48528u)));
    /* 004c0a84: fadd dword ptr [0x9088b0] */ ST(0) = ST(0) + R_F32((u32)(0x9088b0u));
    /* 004c0a8a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004c0a8c: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 004c0a8f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004c0a93: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004c0a95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0a96: ret 8 */ FN_RET(0x004c0a54); r_esp += 12; return;
}

void f_004c0a9c(void) /* sub_4C0A9C */
{
    FN_ENTER(0x004c0a9c);
    /* 004c0a9c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0a9f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 004c0aa3: movzx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)R16((u32)(r_ecx+0x32eu));
    /* 004c0aaa: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004c0aaf: mov eax, dword ptr [ecx + 0x67c] */ r_eax = R32((u32)(r_ecx+0x67cu));
    /* 004c0ab5: mov byte ptr [esp], 0xa8 */ W8((u32)(r_esp), 0xa8u);
    /* 004c0ab9: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 004c0abe: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004c0ac3: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004c0ac8: movzx eax, word ptr [ecx + 0x394] */ r_eax = (u32)R16((u32)(r_ecx+0x394u));
    /* 004c0acf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c0ad3: mov eax, dword ptr [ecx + 0x690] */ r_eax = R32((u32)(r_ecx+0x690u));
    /* 004c0ad9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004c0add: mov eax, dword ptr [ecx + 0x694] */ r_eax = R32((u32)(r_ecx+0x694u));
    /* 004c0ae3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c0ae7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c0aecu); f_008587a5();
    /* 004c0aec: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004c0af0: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004c0af4: fdiv dword ptr [0x9088a8] */ ST(0) = ST(0) / R_F32((u32)(0x9088a8u));
    /* 004c0afa: fmul dword ptr [0x9088ac] */ ST(0) = ST(0) * R_F32((u32)(0x9088acu));
    /* 004c0b00: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004c0b03: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004c0b07: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004c0b0c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c0b11: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004c0b15: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004c0b19: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c0b1d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004c0b21: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004c0b25: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 004c0b29: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c0b2eu); f_008003e0();
    /* 004c0b2e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0b31: ret  */ FN_RET(0x004c0a9c); r_esp += 4; return;
}

void f_004c0b34(void) /* sub_4C0B34 */
{
    FN_ENTER(0x004c0b34);
    /* 004c0b34: mov eax, dword ptr [ecx + 0x698] */ r_eax = R32((u32)(r_ecx+0x698u));
    /* 004c0b3a: mov edx, dword ptr [ecx + 0x69c] */ r_edx = R32((u32)(r_ecx+0x69cu));
    /* 004c0b40: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 004c0b46: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
    /* 004c0b4c: ret  */ FN_RET(0x004c0b34); r_esp += 4; return;
}

void f_004c0b50(void) /* sub_4C0B50 */
{
    FN_ENTER(0x004c0b50);
    /* 004c0b50: push 0x447a0000 */ { u32 v = 0x447a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b55: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x4c0b5au); f_00520ea0();
    /* 004c0b5a: ret  */ FN_RET(0x004c0b50); r_esp += 4; return;
}

void f_004c0b5c(void) /* sub_4C0B5C */
{
    FN_ENTER(0x004c0b5c);
    /* 004c0b5c: mov eax, dword ptr [ecx + 0x39c] */ r_eax = R32((u32)(r_ecx+0x39cu));
    /* 004c0b62: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 004c0b68: mov dword ptr [ecx + 0x690], eax */ W32((u32)(r_ecx+0x690u), r_eax);
    /* 004c0b6e: mov dword ptr [ecx + 0x694], edx */ W32((u32)(r_ecx+0x694u), r_edx);
    /* 004c0b74: ret  */ FN_RET(0x004c0b5c); r_esp += 4; return;
}

void f_004c0b78(void) /* sub_4C0B78 */
{
    FN_ENTER(0x004c0b78);
    /* 004c0b78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0b7a: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0b7d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c0b7f: mov edx, dword ptr [0xa48500] */ r_edx = R32((u32)(0xa48500u));
    /* 004c0b85: fld dword ptr [0x9088a0] */ FPUSH(R_F32((u32)(0x9088a0u)));
    /* 004c0b8b: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 004c0b8e: fadd dword ptr [0x908890] */ ST(0) = ST(0) + R_F32((u32)(0x908890u));
    /* 004c0b94: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004c0b96: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004c0b9a: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 004c0b9e: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 004c0ba3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c0ba8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004c0bac: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004c0bb0: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004c0bb4: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 004c0bb8: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 004c0bbc: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 004c0bc2: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004c0bc4: je 0x4c0bd8 */ if (fZ) goto L_004c0bd8;
L_004c0bc6:; BB(0x004c0bc6);
    /* 004c0bc6: fld dword ptr [0x90889c] */ FPUSH(R_F32((u32)(0x90889cu)));
    /* 004c0bcc: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 004c0bd0: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 004c0bd6: jmp 0x4c0be8 */ goto L_004c0be8;
L_004c0bd8:; BB(0x004c0bd8);
    /* 004c0bd8: fld dword ptr [0x90888c] */ FPUSH(R_F32((u32)(0x90888cu)));
    /* 004c0bde: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 004c0be2: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
L_004c0be8:; BB(0x004c0be8);
    /* 004c0be8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0bea: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c0befu); f_007aa094();
    /* 004c0bef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0bf1: call 0x4c0dc4 */ r_esp -= 4; W32(r_esp, 0x4c0bf6u); f_004c0dc4();
    /* 004c0bf6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0bf8: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x4c0bfdu); f_00521410();
    /* 004c0bfd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0bff: call 0x4c0e04 */ r_esp -= 4; W32(r_esp, 0x4c0c04u); f_004c0e04();
    /* 004c0c04: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0c09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0c0b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c0c10u); f_007aaa30();
    /* 004c0c10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0c12: je 0x4c0c1d */ if (fZ) goto L_004c0c1d;
L_004c0c14:; BB(0x004c0c14);
    /* 004c0c14: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0c16: call 0x4c0f0c */ r_esp -= 4; W32(r_esp, 0x4c0c1bu); f_004c0f0c();
    /* 004c0c1b: jmp 0x4c0c34 */ goto L_004c0c34;
L_004c0c1d:; BB(0x004c0c1d);
    /* 004c0c1d: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0c22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0c24: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c0c29u); f_007aaa30();
    /* 004c0c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0c2b: je 0x4c0c34 */ if (fZ) goto L_004c0c34;
L_004c0c2d:; BB(0x004c0c2d);
    /* 004c0c2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0c2f: call 0x4c0e4c */ r_esp -= 4; W32(r_esp, 0x4c0c34u); f_004c0e4c();
L_004c0c34:; BB(0x004c0c34);
    /* 004c0c34: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004c0c37: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c0c3a: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004c0c3d: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 004c0c43: fcom dword ptr [0x908888] */ fx_compare(ST(0), R_F32((u32)(0x908888u))); 
    /* 004c0c49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c0c4b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c0c4d: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 004c0c51: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c0c53: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 004c0c57: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c0c59: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 004c0c5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c0c5e: jb 0x4c0d3e */ if (fC) goto L_004c0d3e;
L_004c0c64:; BB(0x004c0c64);
    /* 004c0c64: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004c0c66: fcom dword ptr [0x908884] */ fx_compare(ST(0), R_F32((u32)(0x908884u))); 
    /* 004c0c6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c0c6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c0c6f: jae 0x4c0c7c */ if (!fC) goto L_004c0c7c;
L_004c0c71:; BB(0x004c0c71);
    /* 004c0c71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0c73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c0c75: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c0c77: jmp 0x4c0d80 */ goto L_004c0d80;
L_004c0c7c:; BB(0x004c0c7c);
    /* 004c0c7c: fcom dword ptr [0x908880] */ fx_compare(ST(0), R_F32((u32)(0x908880u))); 
    /* 004c0c82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c0c84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c0c85: jb 0x4c0d16 */ if (fC) goto L_004c0d16;
L_004c0c8b:; BB(0x004c0c8b);
    /* 004c0c8b: fcom dword ptr [0x90887c] */ fx_compare(ST(0), R_F32((u32)(0x90887cu))); 
    /* 004c0c91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c0c93: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c0c94: jb 0x4c0cd2 */ if (fC) goto L_004c0cd2;
L_004c0c96:; BB(0x004c0c96);
    /* 004c0c96: fcomp dword ptr [0x908878] */ fx_compare(ST(0), R_F32((u32)(0x908878u))); FPOP();
    /* 004c0c9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c0c9e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c0c9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c0ca1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c0ca3: jb 0x4c0d80 */ if (fC) goto L_004c0d80;
L_004c0ca9:; BB(0x004c0ca9);
    /* 004c0ca9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004c0cab: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004c0cad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0caf: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0cb2: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c0cb6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c0cba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0cbc: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004c0cbf: call 0x521454 */ r_esp -= 4; W32(r_esp, 0x4c0cc4u); f_00521454();
    /* 004c0cc4: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004c0cc7: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c0cca: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004c0ccd: jmp 0x4c0d80 */ goto L_004c0d80;
L_004c0cd2:; BB(0x004c0cd2);
    /* 004c0cd2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0cd4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0cd6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0cd8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0cda: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004c0cdd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c0ce2u); f_0082dcbc();
    /* 004c0ce2: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004c0ce6: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004c0ce9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c0ceeu); f_0082ddd8();
    /* 004c0cee: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0cf1: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c0cf5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c0cf8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c0cfc: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c0d00: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c0d04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0d06: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x4c0d0bu); f_0052069c();
    /* 004c0d0b: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004c0d0e: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c0d11: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004c0d14: jmp 0x4c0d80 */ goto L_004c0d80;
L_004c0d16:; BB(0x004c0d16);
    /* 004c0d16: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0d18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0d1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0d1c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0d1e: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0d21: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c0d25: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c0d29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0d2b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004c0d2e: call 0x521454 */ r_esp -= 4; W32(r_esp, 0x4c0d33u); f_00521454();
    /* 004c0d33: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004c0d36: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c0d39: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004c0d3c: jmp 0x4c0d80 */ goto L_004c0d80;
L_004c0d3e:; BB(0x004c0d3e);
    /* 004c0d3e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 004c0d40: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0d42: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0d44: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c0d46: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004c0d49: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c0d4eu); f_0082dcbc();
    /* 004c0d4e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004c0d52: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 004c0d55: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c0d5au); f_0082ddd8();
    /* 004c0d5a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c0d5d: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c0d61: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c0d64: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c0d68: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c0d6c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c0d70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0d72: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x4c0d77u); f_0052069c();
    /* 004c0d77: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 004c0d7a: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004c0d7d: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
L_004c0d80:; BB(0x004c0d80);
    /* 004c0d80: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c0d84: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004c0d88: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004c0d8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c0d8e: fst dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0));
    /* 004c0d91: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c0d93: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 004c0d96: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c0d98: fst dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0));
    /* 004c0d9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c0d9d: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 004c0d9f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004c0da1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c0da4: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004c0da6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c0da8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c0dac: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004c0dae: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c0db2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c0db5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0db6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0db8: call 0x4c0fcc */ r_esp -= 4; W32(r_esp, 0x4c0dbdu); f_004c0fcc();
    /* 004c0dbd: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0dc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c0dc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0dc2: ret  */ FN_RET(0x004c0b78); r_esp += 4; return;
}

void f_004c0dc4(void) /* sub_4C0DC4 */
{
    FN_ENTER(0x004c0dc4);
    /* 004c0dc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0dc5: mov esi, ecx */ r_esi = r_ecx;
    /* 004c0dc7: mov ecx, esi */ r_ecx = r_esi;
    /* 004c0dc9: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0dce: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c0dd3u); f_007aaa30();
    /* 004c0dd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c0dd5: jne 0x4c0de7 */ if (!fZ) goto L_004c0de7;
L_004c0dd7:; BB(0x004c0dd7);
    /* 004c0dd7: push 0x41c40000 */ { u32 v = 0x41c40000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ddc: mov ecx, esi */ r_ecx = r_esi;
    /* 004c0dde: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c0de3u); f_007aaa30();
    /* 004c0de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c0de5: je 0x4c0dff */ if (fZ) goto L_004c0dff;
L_004c0de7:; BB(0x004c0de7);
    /* 004c0de7: add esi, 0x63c */ {  u32 a = r_esi; u32 b = 0x63cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004c0ded: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c0def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0df1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0df2: push 0x402 */ { u32 v = 0x402u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0df7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4c0dfcu); f_00814298();
    /* 004c0dfc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004c0dff:; BB(0x004c0dff);
    /* 004c0dff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0e00: ret  */ FN_RET(0x004c0dc4); r_esp += 4; return;
}

void f_004c0e04(void) /* sub_4C0E04 */
{
    FN_ENTER(0x004c0e04);
    /* 004c0e04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e05: mov esi, ecx */ r_esi = r_ecx;
    /* 004c0e07: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 004c0e0d: fsub dword ptr [esi + 0x418] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x418u));
    /* 004c0e13: fld dword ptr [esi + 0x3a4] */ FPUSH(R_F32((u32)(r_esi+0x3a4u)));
    /* 004c0e19: fsub dword ptr [esi + 0x420] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x420u));
    /* 004c0e1f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c0e21: fstp dword ptr [esi + 0x5d4] */ W_F32((u32)(r_esi+0x5d4u), ST(0)); FPOP();
    /* 004c0e27: fstp dword ptr [esi + 0x5dc] */ W_F32((u32)(r_esi+0x5dcu), ST(0)); FPOP();
    /* 004c0e2d: mov dword ptr [esi + 0x5d8], 0 */ W32((u32)(r_esi+0x5d8u), 0x0u);
    /* 004c0e37: lea eax, [esi + 0x5d4] */ r_eax = (u32)(r_esi+0x5d4u);
    /* 004c0e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e3e: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c0e43u); f_007828e4();
    /* 004c0e43: fstp dword ptr [esi + 0x5e0] */ W_F32((u32)(r_esi+0x5e0u), ST(0)); FPOP();
    /* 004c0e49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c0e4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0e4b: ret  */ FN_RET(0x004c0e04); r_esp += 4; return;
}

void f_004c0e4c(void) /* sub_4C0E4C */
{
    FN_ENTER(0x004c0e4c);
    /* 004c0e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c0e4f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0e52: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c0e54: mov eax, dword ptr [0x907914] */ r_eax = R32((u32)(0x907914u));
    /* 004c0e59: mov edx, dword ptr [0x907924] */ r_edx = R32((u32)(0x907924u));
    /* 004c0e5f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c0e62: mov eax, dword ptr [ebp + 0x688] */ r_eax = R32((u32)(r_ebp+0x688u));
    /* 004c0e68: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004c0e70: mov dword ptr [esp + 8], 0x41700000 */ W32((u32)(r_esp+0x8u), 0x41700000u);
    /* 004c0e78: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004c0e7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c0e7e: mov dword ptr [esp + 0xc], 0x41000000 */ W32((u32)(r_esp+0xcu), 0x41000000u);
    /* 004c0e86: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 004c0e89: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c0e8b: jle 0x4c0e9d */ if ((fZ||fS!=fO)) goto L_004c0e9d;
L_004c0e8d:; BB(0x004c0e8d);
    /* 004c0e8d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004c0e8f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004c0e92: mov dword ptr [edi + edx*4], esi */ W32((u32)(r_edi+r_edx*4), r_esi);
    /* 004c0e95: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c0e98: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0e9b: jl 0x4c0e8d */ if ((fS!=fO)) goto L_004c0e8d;
L_004c0e9d:; BB(0x004c0e9d);
    /* 004c0e9d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c0e9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ea0: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004c0ea3: lea esi, [ebp + 0x460] */ r_esi = (u32)(r_ebp+0x460u);
    /* 004c0ea9: lea edi, [ebp + 0x46c] */ r_edi = (u32)(r_ebp+0x46cu);
    /* 004c0eaf: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0eb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0eb6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0eb8: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c0ebdu); f_00520c70();
    /* 004c0ebd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c0ec0: push dword ptr [ebp + 0x688] */ { u32 v = R32((u32)(r_ebp+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ec7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0ec9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0eca: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c0ecfu); f_0051fdf8();
    /* 004c0ecf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c0ed2: push dword ptr [ebp + 0x688] */ { u32 v = R32((u32)(r_ebp+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ed9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0edb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0edc: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c0ee1u); f_0051fdf8();
    /* 004c0ee1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c0ee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ee4: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0eea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0eeb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0eed: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c0ef2u); f_00520c70();
    /* 004c0ef2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0ef4: mov eax, dword ptr [ebp + 0x770] */ r_eax = R32((u32)(r_ebp+0x770u));
    /* 004c0efa: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0efd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0efe: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c0f03u); f_0050b7a4();
    /* 004c0f03: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0f06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0f07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0f08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c0f09: ret  */ FN_RET(0x004c0e4c); r_esp += 4; return;
}

void f_004c0f0c(void) /* sub_4C0F0C */
{
    FN_ENTER(0x004c0f0c);
    /* 004c0f0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f0f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0f12: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c0f14: mov eax, dword ptr [0x907928] */ r_eax = R32((u32)(0x907928u));
    /* 004c0f19: mov edx, dword ptr [0x907938] */ r_edx = R32((u32)(0x907938u));
    /* 004c0f1f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c0f22: mov eax, dword ptr [ebp + 0x688] */ r_eax = R32((u32)(r_ebp+0x688u));
    /* 004c0f28: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 004c0f30: mov dword ptr [esp + 8], 0x41700000 */ W32((u32)(r_esp+0x8u), 0x41700000u);
    /* 004c0f38: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004c0f3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c0f3e: mov dword ptr [esp + 0xc], 0x41000000 */ W32((u32)(r_esp+0xcu), 0x41000000u);
    /* 004c0f46: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 004c0f49: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c0f4b: jle 0x4c0f5d */ if ((fZ||fS!=fO)) goto L_004c0f5d;
L_004c0f4d:; BB(0x004c0f4d);
    /* 004c0f4d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004c0f4f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004c0f52: mov dword ptr [edi + edx*4], esi */ W32((u32)(r_edi+r_edx*4), r_esi);
    /* 004c0f55: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c0f58: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0f5b: jl 0x4c0f4d */ if ((fS!=fO)) goto L_004c0f4d;
L_004c0f5d:; BB(0x004c0f5d);
    /* 004c0f5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c0f5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f60: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004c0f63: lea esi, [ebp + 0x478] */ r_esi = (u32)(r_ebp+0x478u);
    /* 004c0f69: lea edi, [ebp + 0x484] */ r_edi = (u32)(r_ebp+0x484u);
    /* 004c0f6f: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0f75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0f78: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c0f7du); f_00520c70();
    /* 004c0f7d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c0f80: push dword ptr [ebp + 0x688] */ { u32 v = R32((u32)(r_ebp+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0f89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f8a: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c0f8fu); f_0051fdf8();
    /* 004c0f8f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c0f92: push dword ptr [ebp + 0x688] */ { u32 v = R32((u32)(r_ebp+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0f9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f9c: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c0fa1u); f_0051fdf8();
    /* 004c0fa1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c0fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fa4: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0fad: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c0fb2u); f_00520c70();
    /* 004c0fb2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fb4: mov eax, dword ptr [ebp + 0x770] */ r_eax = R32((u32)(r_ebp+0x770u));
    /* 004c0fba: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0fbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fbe: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c0fc3u); f_0050b7a4();
    /* 004c0fc3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0fc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0fc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c0fc9: ret  */ FN_RET(0x004c0f0c); r_esp += 4; return;
}

void f_004c0f46(void)
{
    FN_ENTER(0x004c0f46);
    /* 004c0f46: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 004c0f49: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004c0f4b: jle 0x4c0f5d */ if ((fZ||fS!=fO)) goto L_004c0f5d;
L_004c0f4d:; BB(0x004c0f4d);
    /* 004c0f4d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004c0f4f: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004c0f52: mov dword ptr [edi + edx*4], esi */ W32((u32)(r_edi+r_edx*4), r_esi);
    /* 004c0f55: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c0f58: cmp edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c0f5b: jl 0x4c0f4d */ if ((fS!=fO)) goto L_004c0f4d;
L_004c0f5d:; BB(0x004c0f5d);
    /* 004c0f5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c0f5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f60: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004c0f63: lea esi, [ebp + 0x478] */ r_esi = (u32)(r_ebp+0x478u);
    /* 004c0f69: lea edi, [ebp + 0x484] */ r_edi = (u32)(r_ebp+0x484u);
    /* 004c0f6f: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0f75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f76: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0f78: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c0f7du); f_00520c70();
    /* 004c0f7d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c0f80: push dword ptr [ebp + 0x688] */ { u32 v = R32((u32)(r_ebp+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0f89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f8a: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c0f8fu); f_0051fdf8();
    /* 004c0f8f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c0f92: push dword ptr [ebp + 0x688] */ { u32 v = R32((u32)(r_ebp+0x688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0f9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0f9c: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4c0fa1u); f_0051fdf8();
    /* 004c0fa1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c0fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fa4: push dword ptr [0xa48510] */ { u32 v = R32((u32)(0xa48510u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c0fad: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4c0fb2u); f_00520c70();
    /* 004c0fb2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fb4: mov eax, dword ptr [ebp + 0x770] */ r_eax = R32((u32)(r_ebp+0x770u));
    /* 004c0fba: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c0fbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fbe: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4c0fc3u); f_0050b7a4();
    /* 004c0fc3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c0fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c0fc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c0fc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c0fc9: ret  */ FN_RET(0x004c0f46); r_esp += 4; return;
}

void f_004c0fcc(void) /* sub_4C0FCC */
{
    FN_ENTER(0x004c0fcc);
    /* 004c0fcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004c0fd0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c0fd3: mov edi, ecx */ r_edi = r_ecx;
    /* 004c0fd5: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004c0fd9: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004c0fdc: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 004c0fdf: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004c0fe2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004c0fe4: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 004c0feb: mov esi, dword ptr [edi + 0x38] */ r_esi = R32((u32)(r_edi+0x38u));
    /* 004c0fee: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 004c0ff1: mov ebx, dword ptr [edi + 0x40] */ r_ebx = R32((u32)(r_edi+0x40u));
    /* 004c0ff4: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004c0ffc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c0fff: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c1002: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c1006: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004c1009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c100a: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4c100fu); f_007828e4();
    /* 004c100f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c1010: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c1013: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004c1017: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004c101b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c101d: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004c1021: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c1024: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c1028: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004c102c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c1030: call 0x5206cc */ r_esp -= 4; W32(r_esp, 0x4c1035u); f_005206cc();
    /* 004c1035: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004c1039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c103a: mov ecx, edi */ r_ecx = r_edi;
    /* 004c103c: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x4c1041u); f_00520750();
    /* 004c1041: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1042: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 004c1045: call 0x4ce6b8 */ r_esp -= 4; W32(r_esp, 0x4c104au); f_004ce6b8();
    /* 004c104a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c104b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c104d: je 0x4c1063 */ if (fZ) goto L_004c1063;
L_004c104f:; BB(0x004c104f);
    /* 004c104f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c1050: call 0x4ce618 */ r_esp -= 4; W32(r_esp, 0x4c1055u); f_004ce618();
    /* 004c1055: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c1056: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c1058: je 0x4c1063 */ if (fZ) goto L_004c1063;
L_004c105a:; BB(0x004c105a);
    /* 004c105a: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
    /* 004c105d: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 004c1060: mov dword ptr [edi + 0x40], ebx */ W32((u32)(r_edi+0x40u), r_ebx);
L_004c1063:; BB(0x004c1063);
    /* 004c1063: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c1066: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004c1067: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c1068: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c1069: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c106a: ret 4 */ FN_RET(0x004c0fcc); r_esp += 8; return;
}

