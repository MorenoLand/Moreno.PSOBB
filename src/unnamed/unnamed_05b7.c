#include "protos.h"

void f_005b70ac(void) /* sub_5B70AC */
{
    FN_ENTER(0x005b70ac);
    /* 005b70ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b70ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005b70af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b70b1: push 0x8d91f0 */ { u32 v = 0x8d91f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b70b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b70bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b70bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b70c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b70c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b70ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005b70cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005b70d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005b70d3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005b70d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005b70df: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5b70e4u); f_008581c5();
    /* 005b70e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b70e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b70e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b70ea: je 0x5b71dc */ if (fZ) goto L_005b71dc;
L_005b70f0:; BB(0x005b70f0);
    /* 005b70f0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005b70f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b70fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7101: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7106: push 0x9c1de8 */ { u32 v = 0x9c1de8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b710b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b710d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5b7112u); f_005b7a84();
    /* 005b7112: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7115: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005b711c:; BB(0x005b711c);
    /* 005b711c: mov dword ptr [0xa74a10], edx */ W32((u32)(0xa74a10u), r_edx);
    /* 005b7122: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b7129: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b712b: je 0x5b719e */ if (fZ) goto L_005b719e;
L_005b712d:; BB(0x005b712d);
    /* 005b712d: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 005b7133: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7135: je 0x5b719e */ if (fZ) goto L_005b719e;
L_005b7137:; BB(0x005b7137);
    /* 005b7137: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005b713d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b713f: je 0x5b719e */ if (fZ) goto L_005b719e;
L_005b7141:; BB(0x005b7141);
    /* 005b7141: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7143: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5b7148u); f_0077a6cc();
    /* 005b7148: mov ebx, eax */ r_ebx = r_eax;
    /* 005b714a: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005b714c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5b7151u); f_0077a6cc();
    /* 005b7151: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7154: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005b7156: mov dword ptr [0x9c1ad0], edx */ W32((u32)(0x9c1ad0u), r_edx);
    /* 005b715c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b715e: mov dword ptr [0x9c1af8], ecx */ W32((u32)(0x9c1af8u), r_ecx);
    /* 005b7164: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 005b7167: mov dword ptr [0x9c1b20], edi */ W32((u32)(0x9c1b20u), r_edi);
    /* 005b716d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7170: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 005b7173: mov dword ptr [0x9c1b48], esi */ W32((u32)(0x9c1b48u), r_esi);
    /* 005b7179: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b717c: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005b717f: mov dword ptr [0x9c1b70], ebx */ W32((u32)(0x9c1b70u), r_ebx);
    /* 005b7185: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7188: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005b718b: mov dword ptr [0x9c1b98], eax */ W32((u32)(0x9c1b98u), r_eax);
    /* 005b7190: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7193: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b719a: mov esp, ebp */ r_esp = r_ebp;
    /* 005b719c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b719d: ret  */ FN_RET(0x005b70ac); r_esp += 4; return;
L_005b719e:; BB(0x005b719e);
    /* 005b719e: push dword ptr [0x9c1de8] */ { u32 v = R32((u32)(0x9c1de8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b71a4: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 005b71a9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b71aeu); f_0061cdb0();
    /* 005b71ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b71b1: mov ecx, dword ptr [0xa74a10] */ r_ecx = R32((u32)(0xa74a10u));
    /* 005b71b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b71b9: je 0x5b71ce */ if (fZ) goto L_005b71ce;
L_005b71bb:; BB(0x005b71bb);
    /* 005b71bb: je 0x5b71c4 */ if (fZ) goto L_005b71c4;
L_005b71bd:; BB(0x005b71bd);
    /* 005b71bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b71bf: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5b71c4u); f_004066a8();
L_005b71c4:; BB(0x005b71c4);
    /* 005b71c4: mov dword ptr [0xa74a10], 0 */ W32((u32)(0xa74a10u), 0x0u);
L_005b71ce:; BB(0x005b71ce);
    /* 005b71ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b71d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b71d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b71da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b71db: ret  */ FN_RET(0x005b70ac); r_esp += 4; return;
L_005b71dc:; BB(0x005b71dc);
    /* 005b71dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b71de: jmp 0x5b711c */ goto L_005b711c;
}

void f_005b71e4(void) /* sub_5B71E4 */
{
    FN_ENTER(0x005b71e4);
    /* 005b71e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b71e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b71e6: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b71e9: mov esi, ecx */ r_esi = r_ecx;
    /* 005b71eb: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 005b71ef: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b71f2: push 0x92b2b8 */ { u32 v = 0x92b2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b71f7: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b71fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b71fc: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x5b7201u); f_0078e1c0();
    /* 005b7201: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005b7205: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b720b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b720c: call 0x5bb53c */ r_esp -= 4; W32(r_esp, 0x5b7211u); f_005bb53c();
    /* 005b7211: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7214: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7219: jg 0x5b7276 */ if ((!fZ&&fS==fO)) goto L_005b7276;
L_005b721b:; BB(0x005b721b);
    /* 005b721b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b721d: jle 0x5b7249 */ if ((fZ||fS!=fO)) goto L_005b7249;
L_005b721f:; BB(0x005b721f);
    /* 005b721f: mov ecx, dword ptr [0xa74a60] */ r_ecx = R32((u32)(0xa74a60u));
    /* 005b7225: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b722b: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 005b722e: mov edx, dword ptr [eax + edi*8 + 0xc] */ r_edx = R32((u32)(r_eax+r_edi*8+0xcu));
    /* 005b7232: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5b7237u); f_0082a7d8();
    /* 005b7237: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b723d: or dword ptr [eax + edi*8], 1 */ { u32 ad = (u32)(r_eax+r_edi*8);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7241: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7244: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b7245: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b7246: ret 8 */ FN_RET(0x005b71e4); r_esp += 12; return;
L_005b7249:; BB(0x005b7249);
    /* 005b7249: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b724f: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005b7252: or dword ptr [eax + edx*8], 2 */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7256: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 005b7258: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b725b: jne 0x5b726e */ if (!fZ) goto L_005b726e;
L_005b725d:; BB(0x005b725d);
    /* 005b725d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b7260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7261: push 0x92b2dc */ { u32 v = 0x92b2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7266: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b726bu); f_0061cdb0();
    /* 005b726b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b726e:; BB(0x005b726e);
    /* 005b726e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7271: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b7272: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b7273: ret 8 */ FN_RET(0x005b71e4); r_esp += 12; return;
L_005b7276:; BB(0x005b7276);
    /* 005b7276: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b7279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b727a: push 0x92b2bc */ { u32 v = 0x92b2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b727f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7284u); f_0061cdb0();
    /* 005b7284: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7287: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b7288: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b7289: ret 8 */ FN_RET(0x005b71e4); r_esp += 12; return;
}

void f_005b728c(void) /* sub_5B728C */
{
    FN_ENTER(0x005b728c);
    /* 005b728c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b728d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b728e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b728f: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7292: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 005b7296: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005b7299: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b729b: mov ebx, edx */ r_ebx = r_edx;
    /* 005b729d: mov esi, ecx */ r_esi = r_ecx;
    /* 005b729f: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_005b72a6:; BB(0x005b72a6);
    /* 005b72a6: cmp eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b72a9: jae 0x5b73cb */ if (!fC) goto L_005b73cb;
L_005b72af:; BB(0x005b72af);
    /* 005b72af: mov ecx, dword ptr [0xa74a60] */ r_ecx = R32((u32)(0xa74a60u));
    /* 005b72b5: mov edi, dword ptr [ebx + 0x424] */ r_edi = R32((u32)(r_ebx+0x424u));
    /* 005b72bb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b72bd: je 0x5b73f9 */ if (fZ) goto L_005b73f9;
L_005b72c3:; BB(0x005b72c3);
    /* 005b72c3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b72c7: mov eax, dword ptr [ebx + 0x428] */ r_eax = R32((u32)(r_ebx+0x428u));
    /* 005b72cd: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b72cf: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005b72d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b72d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b72d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b72d6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b72da: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b72dfu); f_0083b124();
    /* 005b72df: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b72e3: shr eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b72e6: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 005b72ea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b72ec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b72ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b72f0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b72f2: add dword ptr [ebx + 0x428], eax */ { u32 ad = (u32)(r_ebx+0x428u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b72f8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_005b72fc:; BB(0x005b72fc);
    /* 005b72fc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005b7300: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7306: jne 0x5b7396 */ if (!fZ) goto L_005b7396;
L_005b730c:; BB(0x005b730c);
    /* 005b730c: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 005b730f: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 005b7311: lea edi, [esp + 0x14] */ r_edi = (u32)(r_esp+0x14u);
    /* 005b7315: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 005b7318: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 005b731b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b731f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005b7323: push 0x92b2b8 */ { u32 v = 0x92b2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7328: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 005b732a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b732b: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x5b7330u); f_0078e1c0();
    /* 005b7330: lea edi, [esp + 0x20] */ r_edi = (u32)(r_esp+0x20u);
    /* 005b7334: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005b7338: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 005b733c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b733d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b733e: push 0x5b74d0 */ { u32 v = 0x5b74d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7343: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7345: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7346: call 0x5ba5dc */ r_esp -= 4; W32(r_esp, 0x5b734bu); f_005ba5dc();
    /* 005b734b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b734e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7350: jl 0x5b7381 */ if ((fS!=fO)) goto L_005b7381;
L_005b7352:; BB(0x005b7352);
    /* 005b7352: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 005b7356: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 005b7359: mov edi, dword ptr [ebx + 0x418] */ r_edi = R32((u32)(r_ebx+0x418u));
    /* 005b735f: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 005b7362: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 005b7368: mov dword ptr [ebx + edi*4 + 0x18], edx */ W32((u32)(r_ebx+r_edi*4+0x18u), r_edx);
    /* 005b736c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 005b736f: add dword ptr [eax + 0x43c], 1 */ { u32 ad = (u32)(r_eax+0x43cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7376: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005b7379: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 005b737c: jmp 0x5b72a6 */ goto L_005b72a6;
L_005b7381:; BB(0x005b7381);
    /* 005b7381: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 005b7384: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 005b7386: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b738c: je 0x5b73db */ if (fZ) goto L_005b73db;
L_005b738e:; BB(0x005b738e);
    /* 005b738e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005b7391: jmp 0x5b72a6 */ goto L_005b72a6;
L_005b7396:; BB(0x005b7396);
    /* 005b7396: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b739c: jne 0x5b73b5 */ if (!fZ) goto L_005b73b5;
L_005b739e:; BB(0x005b739e);
    /* 005b739e: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005b73a1: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 005b73a3: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 005b73a6: add dword ptr [eax + 4], 1 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b73aa: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005b73ad: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 005b73b0: jmp 0x5b72a6 */ goto L_005b72a6;
L_005b73b5:; BB(0x005b73b5);
    /* 005b73b5: push 0x92b324 */ { u32 v = 0x92b324u; r_esp -= 4; W32(r_esp, v); }
    /* 005b73ba: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b73bfu); f_0061cdb0();
    /* 005b73bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b73c0: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005b73c3: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 005b73c6: jmp 0x5b72a6 */ goto L_005b72a6;
L_005b73cb:; BB(0x005b73cb);
    /* 005b73cb: mov edx, ebx */ r_edx = r_ebx;
    /* 005b73cd: mov ecx, edx */ r_ecx = r_edx;
    /* 005b73cf: call 0x5b7414 */ r_esp -= 4; W32(r_esp, 0x5b73d4u); f_005b7414();
    /* 005b73d4: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b73d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b73d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b73d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b73da: ret  */ FN_RET(0x005b728c); r_esp += 4; return;
L_005b73db:; BB(0x005b73db);
    /* 005b73db: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 005b73df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b73e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b73e1: push 0x92b2fc */ { u32 v = 0x92b2fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b73e6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b73ebu); f_0061cdb0();
    /* 005b73eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b73ee: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005b73f1: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 005b73f4: jmp 0x5b72a6 */ goto L_005b72a6;
L_005b73f9:; BB(0x005b73f9);
    /* 005b73f9: lea ebx, [esp + 4] */ r_ebx = (u32)(r_esp+0x4u);
    /* 005b73fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b73ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7401: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7402: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b7406: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b740bu); f_0083b124();
    /* 005b740b: mov edi, eax */ r_edi = r_eax;
    /* 005b740d: jmp 0x5b72fc */ goto L_005b72fc;
}

void f_005b7414(void) /* sub_5B7414 */
{
    FN_ENTER(0x005b7414);
    /* 005b7414: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7415: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7416: mov esi, ecx */ r_esi = r_ecx;
    /* 005b7418: mov eax, dword ptr [esi + 0x434] */ r_eax = R32((u32)(r_esi+0x434u));
    /* 005b741e: cmp eax, dword ptr [esi + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b7421: jg 0x5b7457 */ if ((!fZ&&fS==fO)) goto L_005b7457;
L_005b7423:; BB(0x005b7423);
    /* 005b7423: mov eax, dword ptr [esi + 0x438] */ r_eax = R32((u32)(r_esi+0x438u));
    /* 005b7429: cmp eax, dword ptr [esi + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b742c: jg 0x5b7457 */ if ((!fZ&&fS==fO)) goto L_005b7457;
L_005b742e:; BB(0x005b742e);
    /* 005b742e: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 005b7434: cmp eax, dword ptr [esi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b7437: jle 0x5b743c */ if ((fZ||fS!=fO)) goto L_005b743c;
L_005b7439:; BB(0x005b7439);
    /* 005b7439: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b743a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b743b: ret  */ FN_RET(0x005b7414); r_esp += 4; return;
L_005b743c:; BB(0x005b743c);
    /* 005b743c: mov ecx, esi */ r_ecx = r_esi;
    /* 005b743e: call 0x5b745c */ r_esp -= 4; W32(r_esp, 0x5b7443u); f_005b745c();
    /* 005b7443: mov dword ptr [esi + 0x418], 0 */ W32((u32)(r_esi+0x418u), 0x0u);
    /* 005b744d: mov eax, 0x92b2a8 */ r_eax = 0x92b2a8u;
    /* 005b7452: call 0x5b900c */ r_esp -= 4; W32(r_esp, 0x5b7457u); f_005b900c();
L_005b7457:; BB(0x005b7457);
    /* 005b7457: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7458: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b7459: ret  */ FN_RET(0x005b7414); r_esp += 4; return;
}

void f_005b745c(void) /* sub_5B745C */
{
    FN_ENTER(0x005b745c);
    /* 005b745c: mov eax, dword ptr [ecx + 0x41c] */ r_eax = R32((u32)(r_ecx+0x41cu));
    /* 005b7462: or dword ptr [ecx], 0x400 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7468: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b746a: je 0x5b7475 */ if (fZ) goto L_005b7475;
L_005b746c:; BB(0x005b746c);
    /* 005b746c: push dword ptr [ecx + 0x420] */ { u32 v = R32((u32)(r_ecx+0x420u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7472: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b7474u); call_ind(t); }
    /* 005b7474: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005b7475:; BB(0x005b7475);
    /* 005b7475: ret  */ FN_RET(0x005b745c); r_esp += 4; return;
}

void f_005b7478(void) /* sub_5B7478 */
{
    FN_ENTER(0x005b7478);
    /* 005b7478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7479: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b747a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b747d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b747f: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005b7483: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b7485: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005b7487: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 005b748a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b748d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b7490: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005b7494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7495: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7496: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b749c: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b74a1u); f_005b83bc();
    /* 005b74a1: mov esi, eax */ r_esi = r_eax;
    /* 005b74a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b74a5: je 0x5b74c0 */ if (fZ) goto L_005b74c0;
L_005b74a7:; BB(0x005b74a7);
    /* 005b74a7: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b74a9: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 005b74ab: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 005b74ae: add dword ptr [eax + 8], 1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b74b2: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 005b74b5: call 0x5b7414 */ r_esp -= 4; W32(r_esp, 0x5b74bau); f_005b7414();
    /* 005b74ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b74bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b74be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b74bf: ret  */ FN_RET(0x005b7478); r_esp += 4; return;
L_005b74c0:; BB(0x005b74c0);
    /* 005b74c0: push 0x92b350 */ { u32 v = 0x92b350u; r_esp -= 4; W32(r_esp, v); }
    /* 005b74c5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b74cau); f_0061cdb0();
    /* 005b74ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b74cb: jmp 0x5b74a7 */ goto L_005b74a7;
}

void f_005b74d0(void) /* sub_5B74D0 */
{
    FN_ENTER(0x005b74d0);
    /* 005b74d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b74d1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 005b74d5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b74d8: add dword ptr [eax + 0xc], 1 */ { u32 ad = (u32)(r_eax+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b74dc: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 005b74df: call 0x5b7414 */ r_esp -= 4; W32(r_esp, 0x5b74e4u); f_005b7414();
    /* 005b74e4: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005b74e7: or dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b74ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b74eb: ret  */ FN_RET(0x005b74d0); r_esp += 4; return;
}

void f_005b74ec(void) /* sub_5B74EC */
{
    FN_ENTER(0x005b74ec);
    /* 005b74ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b74ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b74ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b74ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b74f0: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b74f3: mov esi, ecx */ r_esi = r_ecx;
    /* 005b74f5: mov ecx, esi */ r_ecx = r_esi;
    /* 005b74f7: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 005b74fb: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 005b74ff: call 0x5b916c */ r_esp -= 4; W32(r_esp, 0x5b7504u); f_005b916c();
    /* 005b7504: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 005b7508: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 005b750a: lea edx, [esi + 0x18] */ r_edx = (u32)(r_esi+0x18u);
    /* 005b750d: lea eax, [esi + 0x418] */ r_eax = (u32)(r_esi+0x418u);
L_005b7513:; BB(0x005b7513);
    /* 005b7513: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b7515: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 005b7517: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 005b751a: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 005b751d: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 005b7520: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7523: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b7525: ja 0x5b7513 */ if ((!fC&&!fZ)) goto L_005b7513;
L_005b7527:; BB(0x005b7527);
    /* 005b7527: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 005b752b: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 005b752f: mov dword ptr [esi + 0x41c], eax */ W32((u32)(r_esi+0x41cu), r_eax);
    /* 005b7535: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 005b7539: mov dword ptr [esi + 0x420], edx */ W32((u32)(r_esi+0x420u), r_edx);
    /* 005b753f: mov dword ptr [esi + 0x424], eax */ W32((u32)(r_esi+0x424u), r_eax);
    /* 005b7545: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b7547: mov eax, edi */ r_eax = r_edi;
    /* 005b7549: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b754b: je 0x5b7a1c */ if (fZ) goto L_005b7a1c;
L_005b7551:; BB(0x005b7551);
    /* 005b7551: mov edx, dword ptr [esi + 0x434] */ r_edx = R32((u32)(r_esi+0x434u));
L_005b7557:; BB(0x005b7557);
    /* 005b7557: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b755a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b755d: mov dword ptr [esi + 0x434], edx */ W32((u32)(r_esi+0x434u), r_edx);
    /* 005b7563: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b7565: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7567: jne 0x5b7557 */ if (!fZ) goto L_005b7557;
L_005b7569:; BB(0x005b7569);
    /* 005b7569: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b756b: jle 0x5b75ca */ if ((fZ||fS!=fO)) goto L_005b75ca;
L_005b756d:; BB(0x005b756d);
    /* 005b756d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b756f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7571: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7573: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7576: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5b757bu); f_008581c5();
    /* 005b757b: mov ecx, eax */ r_ecx = r_eax;
    /* 005b757d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7580: mov edx, dword ptr [esi + 0x434] */ r_edx = R32((u32)(r_esi+0x434u));
    /* 005b7586: mov dword ptr [esi + 0x42c], ecx */ W32((u32)(r_esi+0x42cu), r_ecx);
    /* 005b758c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b758e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7590: jle 0x5b75ca */ if ((fZ||fS!=fO)) goto L_005b75ca;
L_005b7592:; BB(0x005b7592);
    /* 005b7592: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005b7595: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7597: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7599: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b759b: jmp 0x5b75a3 */ goto L_005b75a3;
L_005b759d:; BB(0x005b759d);
    /* 005b759d: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
L_005b75a3:; BB(0x005b75a3);
    /* 005b75a3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b75a5: mov dword ptr [edx + ecx], ebx */ W32((u32)(r_edx+r_ecx), r_ebx);
    /* 005b75a8: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b75ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b75b1: mov dword ptr [ecx + edx + 8], ebx */ W32((u32)(r_ecx+r_edx+0x8u), r_ebx);
    /* 005b75b5: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b75bb: mov dword ptr [ecx + edx + 0xc], ebx */ W32((u32)(r_ecx+r_edx+0xcu), r_ebx);
    /* 005b75bf: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75c2: cmp eax, dword ptr [esi + 0x434] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b75c8: jl 0x5b759d */ if ((fS!=fO)) goto L_005b759d;
L_005b75ca:; BB(0x005b75ca);
    /* 005b75ca: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b75cd: mov eax, ebp */ r_eax = r_ebp;
    /* 005b75cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b75d1: je 0x5b7a11 */ if (fZ) goto L_005b7a11;
L_005b75d7:; BB(0x005b75d7);
    /* 005b75d7: mov edx, dword ptr [esi + 0x438] */ r_edx = R32((u32)(r_esi+0x438u));
L_005b75dd:; BB(0x005b75dd);
    /* 005b75dd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b75e0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75e3: mov dword ptr [esi + 0x438], edx */ W32((u32)(r_esi+0x438u), r_edx);
    /* 005b75e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b75eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b75ed: jne 0x5b75dd */ if (!fZ) goto L_005b75dd;
L_005b75ef:; BB(0x005b75ef);
    /* 005b75ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b75f1: jle 0x5b762d */ if ((fZ||fS!=fO)) goto L_005b762d;
L_005b75f3:; BB(0x005b75f3);
    /* 005b75f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b75fa: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5b75ffu); f_008581c5();
    /* 005b75ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7600: mov ecx, dword ptr [esi + 0x438] */ r_ecx = R32((u32)(r_esi+0x438u));
    /* 005b7606: mov dword ptr [esi + 0x430], eax */ W32((u32)(r_esi+0x430u), r_eax);
    /* 005b760c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b760e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7610: jg 0x5b761a */ if ((!fZ&&fS==fO)) goto L_005b761a;
L_005b7612:; BB(0x005b7612);
    /* 005b7612: jmp 0x5b762d */ goto L_005b762d;
L_005b7614:; BB(0x005b7614);
    /* 005b7614: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
L_005b761a:; BB(0x005b761a);
    /* 005b761a: mov dword ptr [eax + edx*8 + 4], 0 */ W32((u32)(r_eax+r_edx*8+0x4u), 0x0u);
    /* 005b7622: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7625: cmp edx, dword ptr [esi + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x438u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b762b: jl 0x5b7614 */ if ((fS!=fO)) goto L_005b7614;
L_005b762d:; BB(0x005b762d);
    /* 005b762d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005b762f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b7631: jne 0x5b7787 */ if (!fZ) goto L_005b7787;
L_005b7637:; BB(0x005b7637);
    /* 005b7637: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b7639: jne 0x5b7647 */ if (!fZ) goto L_005b7647;
L_005b763b:; BB(0x005b763b);
    /* 005b763b: mov eax, esi */ r_eax = r_esi;
    /* 005b763d: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7640: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b7641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b7643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b7644: ret 0x18 */ FN_RET(0x005b74ec); r_esp += 28; return;
L_005b7647:; BB(0x005b7647);
    /* 005b7647: mov eax, 0x92b2a8 */ r_eax = 0x92b2a8u;
    /* 005b764c: call 0x5b7a48 */ r_esp -= 4; W32(r_esp, 0x5b7651u); f_005b7a48();
    /* 005b7651: mov edx, dword ptr [esi + 0x434] */ r_edx = R32((u32)(r_esi+0x434u));
    /* 005b7657: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7659: add edx, dword ptr [esi + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x438u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b765f: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7665: jge 0x5b7777 */ if ((fS==fO)) goto L_005b7777;
L_005b766b:; BB(0x005b766b);
    /* 005b766b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b766d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b766f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7671: je 0x5b7703 */ if (fZ) goto L_005b7703;
L_005b7677:; BB(0x005b7677);
    /* 005b7677: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b7679: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 005b767d: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005b7680: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7682: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7684: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7686: mov ebp, eax */ r_ebp = r_eax;
    /* 005b7688: mov ebx, ecx */ r_ebx = r_ecx;
L_005b768a:; BB(0x005b768a);
    /* 005b768a: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b7690: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b7694: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 005b7698: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 005b769b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005b769f: lea eax, [ebx + ecx + 8] */ r_eax = (u32)(r_ebx+r_ecx+0x8u);
    /* 005b76a3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b76a7: lea eax, [ebx + ecx + 0xc] */ r_eax = (u32)(r_ebx+r_ecx+0xcu);
    /* 005b76ab: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b76af: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 005b76b1: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x5b76b6u); f_005bbe24();
    /* 005b76b6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005b76ba: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005b76be: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005b76c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b76c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b76c4: push 0x5b728c */ { u32 v = 0x5b728cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b76c9: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b76cf: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 005b76d1: call 0x5ba4f4 */ r_esp -= 4; W32(r_esp, 0x5b76d6u); f_005ba4f4();
    /* 005b76d6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b76d9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b76dd: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 005b76e3: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 005b76e6: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 005b76ec: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b76ef: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b76f2: mov dword ptr [esi + ecx*4 + 0x18], eax */ W32((u32)(r_esi+r_ecx*4+0x18u), r_eax);
    /* 005b76f6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b76f8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b76fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b76fd: jne 0x5b768a */ if (!fZ) goto L_005b768a;
L_005b76ff:; BB(0x005b76ff);
    /* 005b76ff: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
L_005b7703:; BB(0x005b7703);
    /* 005b7703: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b7706: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7708: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b770a: je 0x5b763b */ if (fZ) goto L_005b763b;
L_005b7710:; BB(0x005b7710);
    /* 005b7710: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005b7713: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7715: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7717: mov ebx, eax */ r_ebx = r_eax;
L_005b7719:; BB(0x005b7719);
    /* 005b7719: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005b771f: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 005b7723: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005b7727: lea edx, [edi + edx + 4] */ r_edx = (u32)(r_edi+r_edx+0x4u);
    /* 005b772b: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005b772f: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 005b7733: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7735: push 0x5b7478 */ { u32 v = 0x5b7478u; r_esp -= 4; W32(r_esp, v); }
    /* 005b773a: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7740: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7743: call 0x5ba4f4 */ r_esp -= 4; W32(r_esp, 0x5b7748u); f_005ba4f4();
    /* 005b7748: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b774b: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005b774f: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 005b7755: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 005b7758: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 005b775e: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7761: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7764: mov dword ptr [esi + ecx*4 + 0x18], eax */ W32((u32)(r_esi+r_ecx*4+0x18u), r_eax);
    /* 005b7768: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b776b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b776e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7770: jne 0x5b7719 */ if (!fZ) goto L_005b7719;
L_005b7772:; BB(0x005b7772);
    /* 005b7772: jmp 0x5b763b */ goto L_005b763b;
L_005b7777:; BB(0x005b7777);
    /* 005b7777: push 0x92b38c */ { u32 v = 0x92b38cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b777c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7781u); f_0061cdb0();
    /* 005b7781: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7782: jmp 0x5b766b */ goto L_005b766b;
L_005b7787:; BB(0x005b7787);
    /* 005b7787: mov eax, 0x92b378 */ r_eax = 0x92b378u;
    /* 005b778c: call 0x5b7a48 */ r_esp -= 4; W32(r_esp, 0x5b7791u); f_005b7a48();
    /* 005b7791: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b7793: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7795: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7797: je 0x5b7903 */ if (fZ) goto L_005b7903;
L_005b779d:; BB(0x005b779d);
    /* 005b779d: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005b779f: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005b77a3: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 005b77a7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b77a9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005b77ac: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 005b77b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b77b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b77b4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b77b6: mov ebx, edx */ r_ebx = r_edx;
L_005b77b8:; BB(0x005b77b8);
    /* 005b77b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b77b9: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b77bf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b77c1: mov dword ptr [eax + ebx + 8], edi */ W32((u32)(r_eax+r_ebx+0x8u), r_edi);
    /* 005b77c5: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b77cb: mov dword ptr [eax + ebx + 0xc], edi */ W32((u32)(r_eax+r_ebx+0xcu), r_edi);
    /* 005b77cf: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x5b77d4u); f_005bbe24();
    /* 005b77d4: mov edi, eax */ r_edi = r_eax;
    /* 005b77d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b77d9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b77db: jle 0x5b79fe */ if ((fZ||fS!=fO)) goto L_005b79fe;
L_005b77e1:; BB(0x005b77e1);
    /* 005b77e1: cmp edi, 0x90000 */ {  u32 a = r_edi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b77e7: jg 0x5b79e5 */ if ((!fZ&&fS==fO)) goto L_005b79e5;
L_005b77ed:; BB(0x005b77ed);
    /* 005b77ed: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b77f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b77f4: call 0x5b9368 */ r_esp -= 4; W32(r_esp, 0x5b77f9u); f_005b9368();
    /* 005b77f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b77fc: mov edx, dword ptr [0xa74a60] */ r_edx = R32((u32)(0xa74a60u));
    /* 005b7802: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b7808: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 005b780c: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 005b7810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7812: mov dword ptr [ecx + ebx + 8], eax */ W32((u32)(r_ecx+r_ebx+0x8u), r_eax);
    /* 005b7816: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b781c: mov dword ptr [ecx + ebx + 0xc], eax */ W32((u32)(r_ecx+r_ebx+0xcu), r_eax);
    /* 005b7820: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005b7824: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005b7826:; BB(0x005b7826);
    /* 005b7826: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b7828: jae 0x5b78c3 */ if (!fC) goto L_005b78c3;
L_005b782e:; BB(0x005b782e);
    /* 005b782e: mov ebp, dword ptr [esi + 0x424] */ r_ebp = R32((u32)(r_esi+0x424u));
    /* 005b7834: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7836: je 0x5b7993 */ if (fZ) goto L_005b7993;
L_005b783c:; BB(0x005b783c);
    /* 005b783c: add ebp, dword ptr [esi + 0x428] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x428u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7842: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 005b7846: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 005b784a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b784b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b784c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b784d: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 005b7851: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 005b7855: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b785au); f_0083b124();
    /* 005b785a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005b785e: shr eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b7861: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 005b7865: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7867: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7869: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b786b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b786d: add dword ptr [esi + 0x428], eax */ { u32 ad = (u32)(r_esi+0x428u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7873: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_005b7877:; BB(0x005b7877);
    /* 005b7877: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005b787b: cmp eax, 0x4e4a434d */ {  u32 a = r_eax; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7880: jne 0x5b7892 */ if (!fZ) goto L_005b7892;
L_005b7882:; BB(0x005b7882);
    /* 005b7882: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b7886: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b788c: mov dword ptr [eax + ebx + 8], ebp */ W32((u32)(r_eax+r_ebx+0x8u), r_ebp);
    /* 005b7890: jmp 0x5b7826 */ goto L_005b7826;
L_005b7892:; BB(0x005b7892);
    /* 005b7892: cmp eax, 0x4e4a544c */ {  u32 a = r_eax; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7897: jne 0x5b78ac */ if (!fZ) goto L_005b78ac;
L_005b7899:; BB(0x005b7899);
    /* 005b7899: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b789d: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b78a3: mov dword ptr [eax + ebx + 0xc], ebp */ W32((u32)(r_eax+r_ebx+0xcu), r_ebp);
    /* 005b78a7: jmp 0x5b7826 */ goto L_005b7826;
L_005b78ac:; BB(0x005b78ac);
    /* 005b78ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b78ad: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b78b2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b78b7u); f_0061cdb0();
    /* 005b78b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b78ba: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b78be: jmp 0x5b7826 */ goto L_005b7826;
L_005b78c3:; BB(0x005b78c3);
    /* 005b78c3: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 005b78c7: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b78cd: mov edi, dword ptr [eax + ebx + 0xc] */ r_edi = R32((u32)(r_eax+r_ebx+0xcu));
    /* 005b78d1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b78d3: je 0x5b78e2 */ if (fZ) goto L_005b78e2;
L_005b78d5:; BB(0x005b78d5);
    /* 005b78d5: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005b78d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b78da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b78db: mov ecx, esi */ r_ecx = r_esi;
    /* 005b78dd: call 0x5b71e4 */ r_esp -= 4; W32(r_esp, 0x5b78e2u); f_005b71e4();
L_005b78e2:; BB(0x005b78e2);
    /* 005b78e2: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005b78e6: add dword ptr [esp + 0x48], 1 */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b78eb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b78ee: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 005b78f0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005b78f4: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b78f7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b78f9: jne 0x5b77b8 */ if (!fZ) goto L_005b77b8;
L_005b78ff:; BB(0x005b78ff);
    /* 005b78ff: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
L_005b7903:; BB(0x005b7903);
    /* 005b7903: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b7906: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7908: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b790a: je 0x5b797d */ if (fZ) goto L_005b797d;
L_005b790c:; BB(0x005b790c);
    /* 005b790c: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005b790f: mov ebx, eax */ r_ebx = r_eax;
L_005b7911:; BB(0x005b7911);
    /* 005b7911: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7917: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7918: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005b791e: mov dword ptr [edx + ebx*8 + 4], 0 */ W32((u32)(r_edx+r_ebx*8+0x4u), 0x0u);
    /* 005b7926: call 0x5b9368 */ r_esp -= 4; W32(r_esp, 0x5b792bu); f_005b9368();
    /* 005b792b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b792e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7930: je 0x5b79d5 */ if (fZ) goto L_005b79d5;
L_005b7936:; BB(0x005b7936);
    /* 005b7936: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b793b: jg 0x5b79bd */ if ((!fZ&&fS==fO)) goto L_005b79bd;
L_005b7941:; BB(0x005b7941);
    /* 005b7941: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 005b7949: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 005b794d: mov ecx, esi */ r_ecx = r_esi;
    /* 005b794f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 005b7953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7954: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7955: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b795b: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b7960u); f_005b83bc();
    /* 005b7960: mov edi, eax */ r_edi = r_eax;
    /* 005b7962: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7964: je 0x5b79b0 */ if (fZ) goto L_005b79b0;
L_005b7966:; BB(0x005b7966);
    /* 005b7966: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005b796c: mov dword ptr [edx + ebx*8 + 4], edi */ W32((u32)(r_edx+r_ebx*8+0x4u), r_edi);
L_005b7970:; BB(0x005b7970);
    /* 005b7970: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7973: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005b7976: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b7979: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b797b: jne 0x5b7911 */ if (!fZ) goto L_005b7911;
L_005b797d:; BB(0x005b797d);
    /* 005b797d: mov eax, 0x92b378 */ r_eax = 0x92b378u;
    /* 005b7982: call 0x5b900c */ r_esp -= 4; W32(r_esp, 0x5b7987u); f_005b900c();
    /* 005b7987: mov ecx, esi */ r_ecx = r_esi;
    /* 005b7989: call 0x5b745c */ r_esp -= 4; W32(r_esp, 0x5b798eu); f_005b745c();
    /* 005b798e: jmp 0x5b763b */ goto L_005b763b;
L_005b7993:; BB(0x005b7993);
    /* 005b7993: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005b7997: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b799a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b799b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b799c: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 005b79a0: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 005b79a4: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b79a9u); f_0083b124();
    /* 005b79a9: mov ebp, eax */ r_ebp = r_eax;
    /* 005b79ab: jmp 0x5b7877 */ goto L_005b7877;
L_005b79b0:; BB(0x005b79b0);
    /* 005b79b0: push 0x92b23c */ { u32 v = 0x92b23cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b79b5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79bau); f_0061cdb0();
    /* 005b79ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b79bb: jmp 0x5b7966 */ goto L_005b7966;
L_005b79bd:; BB(0x005b79bd);
    /* 005b79bd: add eax, 0xfff70000 */ {  u32 a = r_eax; u32 b = 0xfff70000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b79c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b79c3: push 0x92b218 */ { u32 v = 0x92b218u; r_esp -= 4; W32(r_esp, v); }
    /* 005b79c8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79cdu); f_0061cdb0();
    /* 005b79cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79d0: jmp 0x5b7941 */ goto L_005b7941;
L_005b79d5:; BB(0x005b79d5);
    /* 005b79d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b79d6: push 0x92b1f8 */ { u32 v = 0x92b1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b79db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79e0u); f_0061cdb0();
    /* 005b79e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79e3: jmp 0x5b7970 */ goto L_005b7970;
L_005b79e5:; BB(0x005b79e5);
    /* 005b79e5: lea eax, [edi - 0x90000] */ r_eax = (u32)(r_edi+0xfff70000u);
    /* 005b79eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b79ec: push 0x92b1d4 */ { u32 v = 0x92b1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b79f1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79f6u); f_0061cdb0();
    /* 005b79f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79f9: jmp 0x5b77ed */ goto L_005b77ed;
L_005b79fe:; BB(0x005b79fe);
    /* 005b79fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b79ff: push 0x92b1b4 */ { u32 v = 0x92b1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a04: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7a09u); f_0061cdb0();
    /* 005b7a09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7a0c: jmp 0x5b78e2 */ goto L_005b78e2;
L_005b7a11:; BB(0x005b7a11);
    /* 005b7a11: mov edx, dword ptr [esi + 0x438] */ r_edx = R32((u32)(r_esi+0x438u));
    /* 005b7a17: jmp 0x5b75ef */ goto L_005b75ef;
L_005b7a1c:; BB(0x005b7a1c);
    /* 005b7a1c: mov edx, dword ptr [esi + 0x434] */ r_edx = R32((u32)(r_esi+0x434u));
    /* 005b7a22: jmp 0x5b7569 */ goto L_005b7569;
}

void f_005b7583(void)
{
    FN_ENTER(0x005b7583);
    /* 005b7583: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b7585: add byte ptr [ecx + 0x42c8e], cl */ { u32 ad = (u32)(r_ecx+0x42c8eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b758b: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b758d: rol byte ptr [ebp - 0x72c7812e], 0x14 */ { u32 ad = (u32)(r_ebp+0x8d387ed2u); u32 c = (20u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 005b7594: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005b7596: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 005b7598: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 005b759a: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 005b759c: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
L_005b759d:; BB(0x005b759d);
    /* 005b759d: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b75a3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b75a5: mov dword ptr [edx + ecx], ebx */ W32((u32)(r_edx+r_ecx), r_ebx);
    /* 005b75a8: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b75ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b75b1: mov dword ptr [ecx + edx + 8], ebx */ W32((u32)(r_ecx+r_edx+0x8u), r_ebx);
    /* 005b75b5: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b75bb: mov dword ptr [ecx + edx + 0xc], ebx */ W32((u32)(r_ecx+r_edx+0xcu), r_ebx);
    /* 005b75bf: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75c2: cmp eax, dword ptr [esi + 0x434] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b75c8: jl 0x5b759d */ if ((fS!=fO)) goto L_005b759d;
L_005b75ca:; BB(0x005b75ca);
    /* 005b75ca: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b75cd: mov eax, ebp */ r_eax = r_ebp;
    /* 005b75cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b75d1: je 0x5b7a11 */ if (fZ) goto L_005b7a11;
L_005b75d7:; BB(0x005b75d7);
    /* 005b75d7: mov edx, dword ptr [esi + 0x438] */ r_edx = R32((u32)(r_esi+0x438u));
L_005b75dd:; BB(0x005b75dd);
    /* 005b75dd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b75e0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75e3: mov dword ptr [esi + 0x438], edx */ W32((u32)(r_esi+0x438u), r_edx);
    /* 005b75e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b75eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b75ed: jne 0x5b75dd */ if (!fZ) goto L_005b75dd;
L_005b75ef:; BB(0x005b75ef);
    /* 005b75ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b75f1: jle 0x5b762d */ if ((fZ||fS!=fO)) goto L_005b762d;
L_005b75f3:; BB(0x005b75f3);
    /* 005b75f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b75f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b75fa: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5b75ffu); f_008581c5();
    /* 005b75ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7600: mov ecx, dword ptr [esi + 0x438] */ r_ecx = R32((u32)(r_esi+0x438u));
    /* 005b7606: mov dword ptr [esi + 0x430], eax */ W32((u32)(r_esi+0x430u), r_eax);
    /* 005b760c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b760e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7610: jg 0x5b761a */ if ((!fZ&&fS==fO)) goto L_005b761a;
L_005b7612:; BB(0x005b7612);
    /* 005b7612: jmp 0x5b762d */ goto L_005b762d;
L_005b7614:; BB(0x005b7614);
    /* 005b7614: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
L_005b761a:; BB(0x005b761a);
    /* 005b761a: mov dword ptr [eax + edx*8 + 4], 0 */ W32((u32)(r_eax+r_edx*8+0x4u), 0x0u);
    /* 005b7622: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7625: cmp edx, dword ptr [esi + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x438u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b762b: jl 0x5b7614 */ if ((fS!=fO)) goto L_005b7614;
L_005b762d:; BB(0x005b762d);
    /* 005b762d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005b762f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b7631: jne 0x5b7787 */ if (!fZ) goto L_005b7787;
L_005b7637:; BB(0x005b7637);
    /* 005b7637: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b7639: jne 0x5b7647 */ if (!fZ) goto L_005b7647;
L_005b763b:; BB(0x005b763b);
    /* 005b763b: mov eax, esi */ r_eax = r_esi;
    /* 005b763d: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7640: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b7641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7642: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b7643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b7644: ret 0x18 */ FN_RET(0x005b7583); r_esp += 28; return;
L_005b7647:; BB(0x005b7647);
    /* 005b7647: mov eax, 0x92b2a8 */ r_eax = 0x92b2a8u;
    /* 005b764c: call 0x5b7a48 */ r_esp -= 4; W32(r_esp, 0x5b7651u); f_005b7a48();
    /* 005b7651: mov edx, dword ptr [esi + 0x434] */ r_edx = R32((u32)(r_esi+0x434u));
    /* 005b7657: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7659: add edx, dword ptr [esi + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x438u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b765f: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7665: jge 0x5b7777 */ if ((fS==fO)) goto L_005b7777;
L_005b766b:; BB(0x005b766b);
    /* 005b766b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b766d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b766f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7671: je 0x5b7703 */ if (fZ) goto L_005b7703;
L_005b7677:; BB(0x005b7677);
    /* 005b7677: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b7679: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 005b767d: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005b7680: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7682: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7684: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7686: mov ebp, eax */ r_ebp = r_eax;
    /* 005b7688: mov ebx, ecx */ r_ebx = r_ecx;
L_005b768a:; BB(0x005b768a);
    /* 005b768a: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b7690: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b7694: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 005b7698: lea edx, [ebx + ecx] */ r_edx = (u32)(r_ebx+r_ecx);
    /* 005b769b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005b769f: lea eax, [ebx + ecx + 8] */ r_eax = (u32)(r_ebx+r_ecx+0x8u);
    /* 005b76a3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b76a7: lea eax, [ebx + ecx + 0xc] */ r_eax = (u32)(r_ebx+r_ecx+0xcu);
    /* 005b76ab: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b76af: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 005b76b1: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x5b76b6u); f_005bbe24();
    /* 005b76b6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005b76ba: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005b76be: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005b76c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b76c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b76c4: push 0x5b728c */ { u32 v = 0x5b728cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b76c9: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b76cf: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 005b76d1: call 0x5ba4f4 */ r_esp -= 4; W32(r_esp, 0x5b76d6u); f_005ba4f4();
    /* 005b76d6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b76d9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b76dd: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 005b76e3: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 005b76e6: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 005b76ec: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b76ef: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b76f2: mov dword ptr [esi + ecx*4 + 0x18], eax */ W32((u32)(r_esi+r_ecx*4+0x18u), r_eax);
    /* 005b76f6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b76f8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b76fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b76fd: jne 0x5b768a */ if (!fZ) goto L_005b768a;
L_005b76ff:; BB(0x005b76ff);
    /* 005b76ff: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
L_005b7703:; BB(0x005b7703);
    /* 005b7703: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b7706: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7708: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b770a: je 0x5b763b */ if (fZ) goto L_005b763b;
L_005b7710:; BB(0x005b7710);
    /* 005b7710: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005b7713: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7715: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7717: mov ebx, eax */ r_ebx = r_eax;
L_005b7719:; BB(0x005b7719);
    /* 005b7719: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005b771f: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 005b7723: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005b7727: lea edx, [edi + edx + 4] */ r_edx = (u32)(r_edi+r_edx+0x4u);
    /* 005b772b: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005b772f: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 005b7733: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7735: push 0x5b7478 */ { u32 v = 0x5b7478u; r_esp -= 4; W32(r_esp, v); }
    /* 005b773a: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7740: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7743: call 0x5ba4f4 */ r_esp -= 4; W32(r_esp, 0x5b7748u); f_005ba4f4();
    /* 005b7748: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b774b: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005b774f: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 005b7755: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 005b7758: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 005b775e: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7761: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7764: mov dword ptr [esi + ecx*4 + 0x18], eax */ W32((u32)(r_esi+r_ecx*4+0x18u), r_eax);
    /* 005b7768: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b776b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b776e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7770: jne 0x5b7719 */ if (!fZ) goto L_005b7719;
L_005b7772:; BB(0x005b7772);
    /* 005b7772: jmp 0x5b763b */ goto L_005b763b;
L_005b7777:; BB(0x005b7777);
    /* 005b7777: push 0x92b38c */ { u32 v = 0x92b38cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b777c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7781u); f_0061cdb0();
    /* 005b7781: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7782: jmp 0x5b766b */ goto L_005b766b;
L_005b7787:; BB(0x005b7787);
    /* 005b7787: mov eax, 0x92b378 */ r_eax = 0x92b378u;
    /* 005b778c: call 0x5b7a48 */ r_esp -= 4; W32(r_esp, 0x5b7791u); f_005b7a48();
    /* 005b7791: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005b7793: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7795: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7797: je 0x5b7903 */ if (fZ) goto L_005b7903;
L_005b779d:; BB(0x005b779d);
    /* 005b779d: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 005b779f: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005b77a3: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 005b77a7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b77a9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005b77ac: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 005b77b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b77b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b77b4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b77b6: mov ebx, edx */ r_ebx = r_edx;
L_005b77b8:; BB(0x005b77b8);
    /* 005b77b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b77b9: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b77bf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b77c1: mov dword ptr [eax + ebx + 8], edi */ W32((u32)(r_eax+r_ebx+0x8u), r_edi);
    /* 005b77c5: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b77cb: mov dword ptr [eax + ebx + 0xc], edi */ W32((u32)(r_eax+r_ebx+0xcu), r_edi);
    /* 005b77cf: call 0x5bbe24 */ r_esp -= 4; W32(r_esp, 0x5b77d4u); f_005bbe24();
    /* 005b77d4: mov edi, eax */ r_edi = r_eax;
    /* 005b77d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b77d9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b77db: jle 0x5b79fe */ if ((fZ||fS!=fO)) goto L_005b79fe;
L_005b77e1:; BB(0x005b77e1);
    /* 005b77e1: cmp edi, 0x90000 */ {  u32 a = r_edi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b77e7: jg 0x5b79e5 */ if ((!fZ&&fS==fO)) goto L_005b79e5;
L_005b77ed:; BB(0x005b77ed);
    /* 005b77ed: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b77f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b77f4: call 0x5b9368 */ r_esp -= 4; W32(r_esp, 0x5b77f9u); f_005b9368();
    /* 005b77f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b77fc: mov edx, dword ptr [0xa74a60] */ r_edx = R32((u32)(0xa74a60u));
    /* 005b7802: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b7808: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 005b780c: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 005b7810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7812: mov dword ptr [ecx + ebx + 8], eax */ W32((u32)(r_ecx+r_ebx+0x8u), r_eax);
    /* 005b7816: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 005b781c: mov dword ptr [ecx + ebx + 0xc], eax */ W32((u32)(r_ecx+r_ebx+0xcu), r_eax);
    /* 005b7820: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005b7824: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005b7826:; BB(0x005b7826);
    /* 005b7826: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b7828: jae 0x5b78c3 */ if (!fC) goto L_005b78c3;
L_005b782e:; BB(0x005b782e);
    /* 005b782e: mov ebp, dword ptr [esi + 0x424] */ r_ebp = R32((u32)(r_esi+0x424u));
    /* 005b7834: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7836: je 0x5b7993 */ if (fZ) goto L_005b7993;
L_005b783c:; BB(0x005b783c);
    /* 005b783c: add ebp, dword ptr [esi + 0x428] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x428u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7842: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 005b7846: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 005b784a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b784b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b784c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b784d: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 005b7851: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 005b7855: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b785au); f_0083b124();
    /* 005b785a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005b785e: shr eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b7861: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 005b7865: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7867: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b7869: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b786b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b786d: add dword ptr [esi + 0x428], eax */ { u32 ad = (u32)(r_esi+0x428u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7873: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_005b7877:; BB(0x005b7877);
    /* 005b7877: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005b787b: cmp eax, 0x4e4a434d */ {  u32 a = r_eax; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7880: jne 0x5b7892 */ if (!fZ) goto L_005b7892;
L_005b7882:; BB(0x005b7882);
    /* 005b7882: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b7886: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b788c: mov dword ptr [eax + ebx + 8], ebp */ W32((u32)(r_eax+r_ebx+0x8u), r_ebp);
    /* 005b7890: jmp 0x5b7826 */ goto L_005b7826;
L_005b7892:; BB(0x005b7892);
    /* 005b7892: cmp eax, 0x4e4a544c */ {  u32 a = r_eax; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7897: jne 0x5b78ac */ if (!fZ) goto L_005b78ac;
L_005b7899:; BB(0x005b7899);
    /* 005b7899: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b789d: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b78a3: mov dword ptr [eax + ebx + 0xc], ebp */ W32((u32)(r_eax+r_ebx+0xcu), r_ebp);
    /* 005b78a7: jmp 0x5b7826 */ goto L_005b7826;
L_005b78ac:; BB(0x005b78ac);
    /* 005b78ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b78ad: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b78b2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b78b7u); f_0061cdb0();
    /* 005b78b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b78ba: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005b78be: jmp 0x5b7826 */ goto L_005b7826;
L_005b78c3:; BB(0x005b78c3);
    /* 005b78c3: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 005b78c7: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 005b78cd: mov edi, dword ptr [eax + ebx + 0xc] */ r_edi = R32((u32)(r_eax+r_ebx+0xcu));
    /* 005b78d1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b78d3: je 0x5b78e2 */ if (fZ) goto L_005b78e2;
L_005b78d5:; BB(0x005b78d5);
    /* 005b78d5: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005b78d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b78da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b78db: mov ecx, esi */ r_ecx = r_esi;
    /* 005b78dd: call 0x5b71e4 */ r_esp -= 4; W32(r_esp, 0x5b78e2u); f_005b71e4();
L_005b78e2:; BB(0x005b78e2);
    /* 005b78e2: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005b78e6: add dword ptr [esp + 0x48], 1 */ { u32 ad = (u32)(r_esp+0x48u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b78eb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b78ee: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 005b78f0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 005b78f4: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b78f7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b78f9: jne 0x5b77b8 */ if (!fZ) goto L_005b77b8;
L_005b78ff:; BB(0x005b78ff);
    /* 005b78ff: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
L_005b7903:; BB(0x005b7903);
    /* 005b7903: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005b7906: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7908: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b790a: je 0x5b797d */ if (fZ) goto L_005b797d;
L_005b790c:; BB(0x005b790c);
    /* 005b790c: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005b790f: mov ebx, eax */ r_ebx = r_eax;
L_005b7911:; BB(0x005b7911);
    /* 005b7911: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7917: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7918: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005b791e: mov dword ptr [edx + ebx*8 + 4], 0 */ W32((u32)(r_edx+r_ebx*8+0x4u), 0x0u);
    /* 005b7926: call 0x5b9368 */ r_esp -= 4; W32(r_esp, 0x5b792bu); f_005b9368();
    /* 005b792b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b792e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7930: je 0x5b79d5 */ if (fZ) goto L_005b79d5;
L_005b7936:; BB(0x005b7936);
    /* 005b7936: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b793b: jg 0x5b79bd */ if ((!fZ&&fS==fO)) goto L_005b79bd;
L_005b7941:; BB(0x005b7941);
    /* 005b7941: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 005b7949: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 005b794d: mov ecx, esi */ r_ecx = r_esi;
    /* 005b794f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 005b7953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7954: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7955: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b795b: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b7960u); f_005b83bc();
    /* 005b7960: mov edi, eax */ r_edi = r_eax;
    /* 005b7962: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7964: je 0x5b79b0 */ if (fZ) goto L_005b79b0;
L_005b7966:; BB(0x005b7966);
    /* 005b7966: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 005b796c: mov dword ptr [edx + ebx*8 + 4], edi */ W32((u32)(r_edx+r_ebx*8+0x4u), r_edi);
L_005b7970:; BB(0x005b7970);
    /* 005b7970: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7973: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005b7976: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b7979: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b797b: jne 0x5b7911 */ if (!fZ) goto L_005b7911;
L_005b797d:; BB(0x005b797d);
    /* 005b797d: mov eax, 0x92b378 */ r_eax = 0x92b378u;
    /* 005b7982: call 0x5b900c */ r_esp -= 4; W32(r_esp, 0x5b7987u); f_005b900c();
    /* 005b7987: mov ecx, esi */ r_ecx = r_esi;
    /* 005b7989: call 0x5b745c */ r_esp -= 4; W32(r_esp, 0x5b798eu); f_005b745c();
    /* 005b798e: jmp 0x5b763b */ goto L_005b763b;
L_005b7993:; BB(0x005b7993);
    /* 005b7993: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005b7997: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005b7999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b799a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b799b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b799c: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 005b79a0: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 005b79a4: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b79a9u); f_0083b124();
    /* 005b79a9: mov ebp, eax */ r_ebp = r_eax;
    /* 005b79ab: jmp 0x5b7877 */ goto L_005b7877;
L_005b79b0:; BB(0x005b79b0);
    /* 005b79b0: push 0x92b23c */ { u32 v = 0x92b23cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b79b5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79bau); f_0061cdb0();
    /* 005b79ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b79bb: jmp 0x5b7966 */ goto L_005b7966;
L_005b79bd:; BB(0x005b79bd);
    /* 005b79bd: add eax, 0xfff70000 */ {  u32 a = r_eax; u32 b = 0xfff70000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b79c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b79c3: push 0x92b218 */ { u32 v = 0x92b218u; r_esp -= 4; W32(r_esp, v); }
    /* 005b79c8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79cdu); f_0061cdb0();
    /* 005b79cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79d0: jmp 0x5b7941 */ goto L_005b7941;
L_005b79d5:; BB(0x005b79d5);
    /* 005b79d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b79d6: push 0x92b1f8 */ { u32 v = 0x92b1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b79db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79e0u); f_0061cdb0();
    /* 005b79e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79e3: jmp 0x5b7970 */ goto L_005b7970;
L_005b79e5:; BB(0x005b79e5);
    /* 005b79e5: lea eax, [edi - 0x90000] */ r_eax = (u32)(r_edi+0xfff70000u);
    /* 005b79eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b79ec: push 0x92b1d4 */ { u32 v = 0x92b1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b79f1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b79f6u); f_0061cdb0();
    /* 005b79f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b79f9: jmp 0x5b77ed */ goto L_005b77ed;
L_005b79fe:; BB(0x005b79fe);
    /* 005b79fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b79ff: push 0x92b1b4 */ { u32 v = 0x92b1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a04: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7a09u); f_0061cdb0();
    /* 005b7a09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7a0c: jmp 0x5b78e2 */ goto L_005b78e2;
L_005b7a11:; BB(0x005b7a11);
    /* 005b7a11: mov edx, dword ptr [esi + 0x438] */ r_edx = R32((u32)(r_esi+0x438u));
    /* 005b7a17: jmp 0x5b75ef */ goto L_005b75ef;
}

void f_005b7a28(void) /* sub_5B7A28 */
{
    FN_ENTER(0x005b7a28);
    /* 005b7a28: mov eax, dword ptr [0xa74a58] */ r_eax = R32((u32)(0xa74a58u));
    /* 005b7a2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7a2f: je 0x5b7a40 */ if (fZ) goto L_005b7a40;
L_005b7a31:; BB(0x005b7a31);
    /* 005b7a31: mov eax, dword ptr [0xa74a5c] */ r_eax = R32((u32)(0xa74a5cu));
    /* 005b7a36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b7a38: je 0x5b7a40 */ if (fZ) goto L_005b7a40;
L_005b7a3a:; BB(0x005b7a3a);
    /* 005b7a3a: mov eax, 1 */ r_eax = 0x1u;
    /* 005b7a3f: ret  */ FN_RET(0x005b7a28); r_esp += 4; return;
L_005b7a40:; BB(0x005b7a40);
    /* 005b7a40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b7a42: ret  */ FN_RET(0x005b7a28); r_esp += 4; return;
}

void f_005b7a44(void) /* sub_5B7A44 */
{
    FN_ENTER(0x005b7a44);
    /* 005b7a44: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005b7a48: mov edx, dword ptr [0xa74a58] */ r_edx = R32((u32)(0xa74a58u));
    /* 005b7a4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7a50: je 0x5b7a72 */ if (fZ) goto L_005b7a72;
L_005b7a52:; BB(0x005b7a52);
    /* 005b7a52: mov dword ptr [0xa74a58], 0 */ W32((u32)(0xa74a58u), 0x0u);
    /* 005b7a5c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a5f: push 0xa74a38 */ { u32 v = 0xa74a38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a64: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b7a69u); f_00858900();
    /* 005b7a69: mov eax, dword ptr [0xa74a60] */ r_eax = R32((u32)(0xa74a60u));
    /* 005b7a6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7a71: ret  */ FN_RET(0x005b7a44); r_esp += 4; return;
L_005b7a72:; BB(0x005b7a72);
    /* 005b7a72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a73: push 0x92b530 */ { u32 v = 0x92b530u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a78: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7a7du); f_0061cdb0();
    /* 005b7a7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7a7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7a82: ret  */ FN_RET(0x005b7a44); r_esp += 4; return;
}

void f_005b7a48(void) /* sub_5B7A48 */
{
    FN_ENTER(0x005b7a48);
    /* 005b7a48: mov edx, dword ptr [0xa74a58] */ r_edx = R32((u32)(0xa74a58u));
    /* 005b7a4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7a50: je 0x5b7a72 */ if (fZ) goto L_005b7a72;
L_005b7a52:; BB(0x005b7a52);
    /* 005b7a52: mov dword ptr [0xa74a58], 0 */ W32((u32)(0xa74a58u), 0x0u);
    /* 005b7a5c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a5f: push 0xa74a38 */ { u32 v = 0xa74a38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a64: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b7a69u); f_00858900();
    /* 005b7a69: mov eax, dword ptr [0xa74a60] */ r_eax = R32((u32)(0xa74a60u));
    /* 005b7a6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7a71: ret  */ FN_RET(0x005b7a48); r_esp += 4; return;
L_005b7a72:; BB(0x005b7a72);
    /* 005b7a72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a73: push 0x92b530 */ { u32 v = 0x92b530u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a78: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7a7du); f_0061cdb0();
    /* 005b7a7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7a7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b7a82: ret  */ FN_RET(0x005b7a48); r_esp += 4; return;
}

void f_005b7a84(void) /* sub_5B7A84 */
{
    FN_ENTER(0x005b7a84);
    /* 005b7a84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a85: mov ebp, esp */ r_ebp = r_esp;
    /* 005b7a87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a89: push 0x8d920e */ { u32 v = 0x8d920eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b7a94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7a95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005b7a9c: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b7aa2: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005b7aa5: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 005b7aa8: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 005b7aab: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 005b7aae: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 005b7ab1: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 005b7ab4: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 005b7ab7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b7aba: call 0x5b916c */ r_esp -= 4; W32(r_esp, 0x5b7abfu); f_005b916c();
    /* 005b7abf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b7ac2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ac5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b7ac8: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b7ace: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005b7ad0: mov dword ptr [eax + 0x41c], ebx */ W32((u32)(r_eax+0x41cu), r_ebx);
    /* 005b7ad6: mov dword ptr [eax + 0x420], esi */ W32((u32)(r_eax+0x420u), r_esi);
    /* 005b7adc: mov dword ptr [eax + 0x424], edi */ W32((u32)(r_eax+0x424u), r_edi);
    /* 005b7ae2: movsx edx, word ptr [ecx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 005b7ae6: mov dword ptr [eax + 0x434], edx */ W32((u32)(r_eax+0x434u), r_edx);
    /* 005b7aec: movsx ecx, word ptr [ecx + 0xe] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0xeu));
    /* 005b7af0: mov dword ptr [eax + 0x438], ecx */ W32((u32)(r_eax+0x438u), r_ecx);
    /* 005b7af6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7af8: jle 0x5b7b5e */ if ((fZ||fS!=fO)) goto L_005b7b5e;
L_005b7afa:; BB(0x005b7afa);
    /* 005b7afa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7afc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7afe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7b00: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7b02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b03: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5b7b08u); f_008581c5();
    /* 005b7b08: mov esi, eax */ r_esi = r_eax;
    /* 005b7b0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7b0d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7b10: mov ebx, dword ptr [edx + 0x434] */ r_ebx = R32((u32)(r_edx+0x434u));
    /* 005b7b16: mov dword ptr [edx + 0x42c], esi */ W32((u32)(r_edx+0x42cu), r_esi);
    /* 005b7b1c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7b1e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7b20: jle 0x5b7bfa */ if ((fZ||fS!=fO)) goto L_005b7bfa;
L_005b7b26:; BB(0x005b7b26);
    /* 005b7b26: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7b29: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005b7b2c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b7b2e: mov dword ptr [esi + eax*8], edx */ W32((u32)(r_esi+r_eax*8), r_edx);
    /* 005b7b31: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 005b7b37: mov dword ptr [ebx + eax*8 + 8], edx */ W32((u32)(r_ebx+r_eax*8+0x8u), r_edx);
    /* 005b7b3b: mov esi, dword ptr [edi + 0x42c] */ r_esi = R32((u32)(r_edi+0x42cu));
    /* 005b7b41: mov dword ptr [esi + eax*8 + 0xc], edx */ W32((u32)(r_esi+r_eax*8+0xcu), r_edx);
    /* 005b7b45: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7b48: cmp ecx, dword ptr [edi + 0x434] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7b4e: jge 0x5b7bed */ if ((fS==fO)) goto L_005b7bed;
L_005b7b54:; BB(0x005b7b54);
    /* 005b7b54: mov eax, edi */ r_eax = r_edi;
    /* 005b7b56: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005b7b5c: jmp 0x5b7b26 */ goto L_005b7b26;
L_005b7b5e:; BB(0x005b7b5e);
    /* 005b7b5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7b60: jle 0x5b7ba2 */ if ((fZ||fS!=fO)) goto L_005b7ba2;
L_005b7b62:; BB(0x005b7b62);
    /* 005b7b62: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7b64: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7b66: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7b68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7b69: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5b7b6eu); f_008581c5();
    /* 005b7b6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7b6f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7b72: mov ecx, dword ptr [edx + 0x438] */ r_ecx = R32((u32)(r_edx+0x438u));
    /* 005b7b78: mov dword ptr [edx + 0x430], eax */ W32((u32)(r_edx+0x430u), r_eax);
    /* 005b7b7e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005b7b80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7b82: jle 0x5b7ba2 */ if ((fZ||fS!=fO)) goto L_005b7ba2;
L_005b7b84:; BB(0x005b7b84);
    /* 005b7b84: mov dword ptr [eax + ebx*8 + 4], 0 */ W32((u32)(r_eax+r_ebx*8+0x4u), 0x0u);
    /* 005b7b8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7b8f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b7b92: cmp ebx, dword ptr [eax + 0x438] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x438u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7b98: jge 0x5b7ba2 */ if ((fS==fO)) goto L_005b7ba2;
L_005b7b9a:; BB(0x005b7b9a);
    /* 005b7b9a: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 005b7ba0: jmp 0x5b7b84 */ goto L_005b7b84;
L_005b7ba2:; BB(0x005b7ba2);
    /* 005b7ba2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ba5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b7ba7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b7ba9: jne 0x5b7c07 */ if (!fZ) goto L_005b7c07;
L_005b7bab:; BB(0x005b7bab);
    /* 005b7bab: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b7bad: je 0x5b7bd1 */ if (fZ) goto L_005b7bd1;
L_005b7baf:; BB(0x005b7baf);
    /* 005b7baf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7bb2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7bb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7bb7: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005b7bba: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005b7bbd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005b7bc0: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005b7bc3: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 005b7bc6: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7bc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7bc9: call 0x5ba6dc */ r_esp -= 4; W32(r_esp, 0x5b7bceu); f_005ba6dc();
    /* 005b7bce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005b7bd1:; BB(0x005b7bd1);
    /* 005b7bd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7bd4: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 005b7bd7: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b7bda: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b7bdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7be0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b7be7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7be9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7bea: ret 0x14 */ FN_RET(0x005b7a84); r_esp += 24; return;
L_005b7bed:; BB(0x005b7bed);
    /* 005b7bed: mov eax, edi */ r_eax = r_edi;
    /* 005b7bef: mov ecx, dword ptr [eax + 0x438] */ r_ecx = R32((u32)(r_eax+0x438u));
    /* 005b7bf5: jmp 0x5b7b5e */ goto L_005b7b5e;
L_005b7bfa:; BB(0x005b7bfa);
    /* 005b7bfa: mov eax, edx */ r_eax = r_edx;
    /* 005b7bfc: mov ecx, dword ptr [eax + 0x438] */ r_ecx = R32((u32)(r_eax+0x438u));
    /* 005b7c02: jmp 0x5b7b5e */ goto L_005b7b5e;
L_005b7c07:; BB(0x005b7c07);
    /* 005b7c07: call 0x5baacc */ r_esp -= 4; W32(r_esp, 0x5b7c0cu); f_005baacc();
    /* 005b7c0c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b7c0f: mov dword ptr [0xa74a6c], 1 */ W32((u32)(0xa74a6cu), 0x1u);
    /* 005b7c19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c1b: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7c1d: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7c23: call 0x5bb224 */ r_esp -= 4; W32(r_esp, 0x5b7c28u); f_005bb224();
    /* 005b7c28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b7c2f: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7c35: call 0x5bb534 */ r_esp -= 4; W32(r_esp, 0x5b7c3au); f_005bb534();
    /* 005b7c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b7c3c: jle 0x5b836b */ if ((fZ||fS!=fO)) goto L_005b836b;
L_005b7c42:; BB(0x005b7c42);
    /* 005b7c42: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7c45: mov edx, dword ptr [eax + 0x434] */ r_edx = R32((u32)(r_eax+0x434u));
    /* 005b7c4b: add edx, dword ptr [eax + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x438u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c51: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c53: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c55: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c57: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c59: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b7c5b: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 005b7c5e: lea ecx, [edx + edx + 0x83f] */ r_ecx = (u32)(r_edx+r_edx+0x83fu);
    /* 005b7c65: sar ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b7c68: shr ecx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005b7c6b: lea esi, [ecx + ebx + 0x83f] */ r_esi = (u32)(r_ecx+r_ebx+0x83fu);
    /* 005b7c72: sar esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005b7c75: cmp esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7c7b: jg 0x5b8358 */ if ((!fZ&&fS==fO)) goto L_005b8358;
L_005b7c81:; BB(0x005b7c81);
    /* 005b7c81: mov ebx, dword ptr [0xa74a30] */ r_ebx = R32((u32)(0xa74a30u));
    /* 005b7c87: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7c8d: lea eax, [ebx + 0x40] */ r_eax = (u32)(r_ebx+0x40u);
    /* 005b7c90: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b7c93: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005b7c96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c98: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7c9du); f_005bb3bc();
    /* 005b7c9d: movsx eax, byte ptr [ebx + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x8u));
    /* 005b7ca1: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7ca4: jne 0x5b7caf */ if (!fZ) goto L_005b7caf;
L_005b7ca6:; BB(0x005b7ca6);
    /* 005b7ca6: mov byte ptr [0xa74a64], 1 */ W8((u32)(0xa74a64u), 0x1u);
    /* 005b7cad: jmp 0x5b7cb6 */ goto L_005b7cb6;
L_005b7caf:; BB(0x005b7caf);
    /* 005b7caf: mov byte ptr [0xa74a64], 0 */ W8((u32)(0xa74a64u), 0x0u);
L_005b7cb6:; BB(0x005b7cb6);
    /* 005b7cb6: movsx edx, byte ptr [ebx + 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x9u));
    /* 005b7cba: mov eax, 0x800 */ r_eax = 0x800u;
    /* 005b7cbf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b7cc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7cc4: je 0x5b7cd7 */ if (fZ) goto L_005b7cd7;
L_005b7cc6:; BB(0x005b7cc6);
    /* 005b7cc6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7cc9: or dword ptr [eax], 0x800 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7ccf: mov edx, 0x20 */ r_edx = 0x20u;
    /* 005b7cd4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_005b7cd7:; BB(0x005b7cd7);
    /* 005b7cd7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b7cda: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b7cdd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b7cdf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005b7ce2:; BB(0x005b7ce2);
    /* 005b7ce2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7ce5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ce8: cmp eax, dword ptr [edx + 0x434] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7cee: jge 0x5b80df */ if ((fS==fO)) goto L_005b80df;
L_005b7cf4:; BB(0x005b7cf4);
    /* 005b7cf4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7cf7: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 005b7cfa: cmp esi, 0x90000 */ {  u32 a = r_esi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d00: jg 0x5b80c6 */ if ((!fZ&&fS==fO)) goto L_005b80c6;
L_005b7d06:; BB(0x005b7d06);
    /* 005b7d06: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b7d0d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7d10: jne 0x5b7e6e */ if (!fZ) goto L_005b7e6e;
L_005b7d16:; BB(0x005b7d16);
    /* 005b7d16: lea eax, [esi + 0x800] */ r_eax = (u32)(r_esi+0x800u);
    /* 005b7d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d1d: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b7d22u); f_0082e940();
    /* 005b7d22: mov ebx, eax */ r_ebx = r_eax;
    /* 005b7d24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7d27: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7d29: je 0x5b807c */ if (fZ) goto L_005b807c;
L_005b7d2f:; BB(0x005b7d2f);
    /* 005b7d2f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7d32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d34: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005b7d36: mov dword ptr [0xa74b04], edi */ W32((u32)(0xa74b04u), r_edi);
    /* 005b7d3c: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7d42: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7d47u); f_005bb3bc();
    /* 005b7d47: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7d4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d4b: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7d51: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b7d56u); f_005bb518();
    /* 005b7d56: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7d5c: mov edx, dword ptr [0x9c1e38] */ r_edx = R32((u32)(0x9c1e38u));
    /* 005b7d62: mov dword ptr [0xa74b04], edx */ W32((u32)(0xa74b04u), r_edx);
    /* 005b7d68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d69: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b7d6eu); f_00788154();
    /* 005b7d6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d6f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b7d74u); f_0082e960();
    /* 005b7d74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7d77: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7d7a: mov ebx, dword ptr [0xaab3b0] */ r_ebx = R32((u32)(0xaab3b0u));
    /* 005b7d80: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7d83: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7d86: mov esi, dword ptr [esi + 0x28] */ r_esi = R32((u32)(r_esi+0x28u));
    /* 005b7d89: mov ecx, dword ptr [edi + 0x42c] */ r_ecx = R32((u32)(r_edi+0x42cu));
    /* 005b7d8f: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005b7d92: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 005b7d95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7d97: mov dword ptr [ecx + ebx*8 + 8], eax */ W32((u32)(r_ecx+r_ebx*8+0x8u), r_eax);
    /* 005b7d9b: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005b7da1: mov dword ptr [edx + ebx*8 + 0xc], eax */ W32((u32)(r_edx+r_ebx*8+0xcu), r_eax);
    /* 005b7da5: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005b7dab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005b7dad:; BB(0x005b7dad);
    /* 005b7dad: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b7daf: jae 0x5b7f8c */ if (!fC) goto L_005b7f8c;
L_005b7db5:; BB(0x005b7db5);
    /* 005b7db5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7db8: mov edi, dword ptr [eax + 0x424] */ r_edi = R32((u32)(r_eax+0x424u));
    /* 005b7dbe: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7dc0: je 0x5b805c */ if (fZ) goto L_005b805c;
L_005b7dc6:; BB(0x005b7dc6);
    /* 005b7dc6: mov edx, eax */ r_edx = r_eax;
    /* 005b7dc8: add edi, dword ptr [edx + 0x428] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x428u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7dce: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 005b7dd4: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 005b7dda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ddb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ddd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b7de0: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 005b7de6: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b7debu); f_0083b124();
    /* 005b7deb: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005b7df1: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b7df4: lea ecx, [edx + edx + 2] */ r_ecx = (u32)(r_edx+r_edx+0x2u);
    /* 005b7df8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7dfb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7dfd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7dff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e01: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e03: add dword ptr [edx + 0x428], ecx */ { u32 ad = (u32)(r_edx+0x428u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7e09: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
L_005b7e0f:; BB(0x005b7e0f);
    /* 005b7e0f: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b7e15: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e1b: jne 0x5b7e35 */ if (!fZ) goto L_005b7e35;
L_005b7e1d:; BB(0x005b7e1d);
    /* 005b7e1d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7e20: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7e26: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7e2c: mov dword ptr [ecx + ebx*8 + 8], edi */ W32((u32)(r_ecx+r_ebx*8+0x8u), r_edi);
    /* 005b7e30: jmp 0x5b7dad */ goto L_005b7dad;
L_005b7e35:; BB(0x005b7e35);
    /* 005b7e35: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e3b: jne 0x5b7e55 */ if (!fZ) goto L_005b7e55;
L_005b7e3d:; BB(0x005b7e3d);
    /* 005b7e3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7e40: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7e46: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7e4c: mov dword ptr [ecx + ebx*8 + 0xc], edi */ W32((u32)(r_ecx+r_ebx*8+0xcu), r_edi);
    /* 005b7e50: jmp 0x5b7dad */ goto L_005b7dad;
L_005b7e55:; BB(0x005b7e55);
    /* 005b7e55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e56: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e5b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7e60u); f_0061cdb0();
    /* 005b7e60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7e63: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7e69: jmp 0x5b7dad */ goto L_005b7dad;
L_005b7e6e:; BB(0x005b7e6e);
    /* 005b7e6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e6f: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7e75: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7e7b: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7e80u); f_005bb3bc();
    /* 005b7e80: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7e83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e84: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7e8a: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b7e8fu); f_005bb518();
    /* 005b7e8f: mov ebx, dword ptr [0x9c1e38] */ r_ebx = R32((u32)(0x9c1e38u));
    /* 005b7e95: mov edx, dword ptr [0xaab3b0] */ r_edx = R32((u32)(0xaab3b0u));
    /* 005b7e9b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7e9e: mov dword ptr [0xa74b04], ebx */ W32((u32)(0xa74b04u), r_ebx);
    /* 005b7ea4: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005b7ea7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005b7eaa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ead: mov edi, dword ptr [edx + 0x42c] */ r_edi = R32((u32)(r_edx+0x42cu));
    /* 005b7eb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7eb5: mov dword ptr [edi + ebx*8 + 8], eax */ W32((u32)(r_edi+r_ebx*8+0x8u), r_eax);
    /* 005b7eb9: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005b7ebf: mov dword ptr [edx + ebx*8 + 0xc], eax */ W32((u32)(r_edx+r_ebx*8+0xcu), r_eax);
    /* 005b7ec3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b7ec5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
L_005b7ecb:; BB(0x005b7ecb);
    /* 005b7ecb: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b7ecd: jae 0x5b7f8c */ if (!fC) goto L_005b7f8c;
L_005b7ed3:; BB(0x005b7ed3);
    /* 005b7ed3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ed6: mov edi, dword ptr [eax + 0x424] */ r_edi = R32((u32)(r_eax+0x424u));
    /* 005b7edc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7ede: je 0x5b8093 */ if (fZ) goto L_005b8093;
L_005b7ee4:; BB(0x005b7ee4);
    /* 005b7ee4: mov edx, eax */ r_edx = r_eax;
    /* 005b7ee6: add edi, dword ptr [edx + 0x428] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x428u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7eec: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 005b7ef2: lea edx, [ebp - 0x94] */ r_edx = (u32)(r_ebp+0xffffff6cu);
    /* 005b7ef8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ef9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7efa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7efb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b7efe: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 005b7f04: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b7f09u); f_0083b124();
    /* 005b7f09: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b7f0f: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b7f12: lea ecx, [edx + edx + 2] */ r_ecx = (u32)(r_edx+r_edx+0x2u);
    /* 005b7f16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f19: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f1b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f1d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f1f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f21: add dword ptr [edx + 0x428], ecx */ { u32 ad = (u32)(r_edx+0x428u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7f27: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
L_005b7f2d:; BB(0x005b7f2d);
    /* 005b7f2d: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b7f33: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f39: jne 0x5b7f53 */ if (!fZ) goto L_005b7f53;
L_005b7f3b:; BB(0x005b7f3b);
    /* 005b7f3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f3e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7f44: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005b7f4a: mov dword ptr [ecx + ebx*8 + 8], edi */ W32((u32)(r_ecx+r_ebx*8+0x8u), r_edi);
    /* 005b7f4e: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7f53:; BB(0x005b7f53);
    /* 005b7f53: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f59: jne 0x5b7f73 */ if (!fZ) goto L_005b7f73;
L_005b7f5b:; BB(0x005b7f5b);
    /* 005b7f5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f5e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7f64: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005b7f6a: mov dword ptr [ecx + ebx*8 + 0xc], edi */ W32((u32)(r_ecx+r_ebx*8+0xcu), r_edi);
    /* 005b7f6e: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7f73:; BB(0x005b7f73);
    /* 005b7f73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f74: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f79: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7f7eu); f_0061cdb0();
    /* 005b7f7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7f81: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005b7f87: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7f8c:; BB(0x005b7f8c);
    /* 005b7f8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f8f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b7f91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f97: je 0x5b804f */ if (fZ) goto L_005b804f;
L_005b7f9d:; BB(0x005b7f9d);
    /* 005b7f9d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7fa0: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005b7fa6: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005b7fa9: mov ebx, dword ptr [eax + ecx*8 + 0xc] */ r_ebx = R32((u32)(r_eax+r_ecx*8+0xcu));
    /* 005b7fad: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7faf: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b7fb2: je 0x5b804f */ if (fZ) goto L_005b804f;
L_005b7fb8:; BB(0x005b7fb8);
    /* 005b7fb8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7fbb: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 005b7fbe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7fc0: jne 0x5b7fdf */ if (!fZ) goto L_005b7fdf;
L_005b7fc2:; BB(0x005b7fc2);
    /* 005b7fc2: mov edx, ecx */ r_edx = r_ecx;
    /* 005b7fc4: or dword ptr [eax + edx*8], 2 */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7fc8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7fcb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b7fcd: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b7fd0: jne 0x5b804f */ if (!fZ) goto L_005b804f;
L_005b7fd2:; BB(0x005b7fd2);
    /* 005b7fd2: push 0x92b43c */ { u32 v = 0x92b43cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7fd7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7fdcu); f_0061cdb0();
    /* 005b7fdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7fdd: jmp 0x5b804f */ goto L_005b804f;
L_005b7fdf:; BB(0x005b7fdf);
    /* 005b7fdf: lea eax, [ebx + 0x800] */ r_eax = (u32)(r_ebx+0x800u);
    /* 005b7fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7fe6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b7febu); f_0082e940();
    /* 005b7feb: mov esi, eax */ r_esi = r_eax;
    /* 005b7fed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ff1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ff2: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7ff8: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7ffdu); f_005bb3bc();
    /* 005b7ffd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8001: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b8007: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b800cu); f_005bb518();
    /* 005b800c: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8012: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8013: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b8018u); f_00788154();
    /* 005b8018: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8019: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b801eu); f_0082e960();
    /* 005b801e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8021: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8024: mov ecx, dword ptr [0xaab3b0] */ r_ecx = R32((u32)(0xaab3b0u));
    /* 005b802a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b802d: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 005b8033: mov edx, dword ptr [ebx + esi*8 + 0xc] */ r_edx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 005b8037: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5b803cu); f_0082a7d8();
    /* 005b803c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b803f: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005b8045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b8047: jle 0x5b80b3 */ if ((fZ||fS!=fO)) goto L_005b80b3;
L_005b8049:; BB(0x005b8049);
    /* 005b8049: mov eax, esi */ r_eax = r_esi;
    /* 005b804b: or dword ptr [edx + eax*8], 1 */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_005b804f:; BB(0x005b804f);
    /* 005b804f: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8053: add dword ptr [ebp - 0x18], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8057: jmp 0x5b7ce2 */ goto L_005b7ce2;
L_005b805c:; BB(0x005b805c);
    /* 005b805c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b805f: lea edi, [ebp - 0x8c] */ r_edi = (u32)(r_ebp+0xffffff74u);
    /* 005b8065: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 005b806b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b806d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b806e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b806f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8070: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b8075u); f_0083b124();
    /* 005b8075: mov edi, eax */ r_edi = r_eax;
    /* 005b8077: jmp 0x5b7e0f */ goto L_005b7e0f;
L_005b807c:; BB(0x005b807c);
    /* 005b807c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b807f: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8081: push 0x92b404 */ { u32 v = 0x92b404u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8086: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b808bu); f_0061cdb0();
    /* 005b808b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b808e: jmp 0x5b7f8c */ goto L_005b7f8c;
L_005b8093:; BB(0x005b8093);
    /* 005b8093: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b8096: lea edi, [ebp - 0x98] */ r_edi = (u32)(r_ebp+0xffffff68u);
    /* 005b809c: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 005b80a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b80a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a7: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b80acu); f_0083b124();
    /* 005b80ac: mov edi, eax */ r_edi = r_eax;
    /* 005b80ae: jmp 0x5b7f2d */ goto L_005b7f2d;
L_005b80b3:; BB(0x005b80b3);
    /* 005b80b3: push 0x92b420 */ { u32 v = 0x92b420u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80b8: mov eax, esi */ r_eax = r_esi;
    /* 005b80ba: or dword ptr [edx + eax*8], 2 */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b80be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b80c3u); f_0061cdb0();
    /* 005b80c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b80c4: jmp 0x5b804f */ goto L_005b804f;
L_005b80c6:; BB(0x005b80c6);
    /* 005b80c6: lea eax, [esi - 0x90000] */ r_eax = (u32)(r_esi+0xfff70000u);
    /* 005b80cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80cd: push 0x92b3e4 */ { u32 v = 0x92b3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80d2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b80d7u); f_0061cdb0();
    /* 005b80d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b80da: jmp 0x5b7d06 */ goto L_005b7d06;
L_005b80df:; BB(0x005b80df);
    /* 005b80df: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005b80e1:; BB(0x005b80e1);
    /* 005b80e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b80e4: cmp ebx, dword ptr [eax + 0x438] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x438u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b80ea: jge 0x5b822e */ if ((fS==fO)) goto L_005b822e;
L_005b80f0:; BB(0x005b80f0);
    /* 005b80f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b80f3: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 005b80f6: cmp edi, 0x90000 */ {  u32 a = r_edi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b80fc: jg 0x5b8215 */ if ((!fZ&&fS==fO)) goto L_005b8215;
L_005b8102:; BB(0x005b8102);
    /* 005b8102: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b8109: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b810c: jne 0x5b818f */ if (!fZ) goto L_005b818f;
L_005b8112:; BB(0x005b8112);
    /* 005b8112: lea eax, [edi + 0x800] */ r_eax = (u32)(r_edi+0x800u);
    /* 005b8118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8119: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b811eu); f_0082e940();
    /* 005b811e: mov esi, eax */ r_esi = r_eax;
    /* 005b8120: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8123: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8124: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8125: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b812b: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b8130u); f_005bb3bc();
    /* 005b8130: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8133: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8134: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b813a: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b813fu); f_005bb518();
    /* 005b813f: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8145: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8146: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b814bu); f_00788154();
    /* 005b814b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b814c: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b8151u); f_0082e960();
    /* 005b8151: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8154: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8157: lea edi, [ebp - 0x78] */ r_edi = (u32)(r_ebp+0xffffff88u);
    /* 005b815a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b815b: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 005b8161: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005b8164: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b8166: mov dword ptr [eax + ebx*8 + 4], edx */ W32((u32)(r_eax+r_ebx*8+0x4u), r_edx);
    /* 005b816a: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005b816d: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 005b8170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8171: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8177: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b817cu); f_005b83bc();
    /* 005b817c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b817e: je 0x5b81fb */ if (fZ) goto L_005b81fb;
L_005b8180:; BB(0x005b8180);
    /* 005b8180: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8183: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 005b8189: mov dword ptr [ecx + esi*4 + 4], eax */ W32((u32)(r_ecx+r_esi*4+0x4u), r_eax);
    /* 005b818d: jmp 0x5b81ef */ goto L_005b81ef;
L_005b818f:; BB(0x005b818f);
    /* 005b818f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8190: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8196: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b819c: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b81a1u); f_005bb3bc();
    /* 005b81a1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b81a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b81a5: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b81ab: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b81b0u); f_005bb518();
    /* 005b81b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b81b3: lea edi, [ebp - 0x80] */ r_edi = (u32)(r_ebp+0xffffff80u);
    /* 005b81b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b81b7: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 005b81bd: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005b81c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b81c2: mov dword ptr [eax + ebx*8 + 4], edx */ W32((u32)(r_eax+r_ebx*8+0x4u), r_edx);
    /* 005b81c6: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005b81cc: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 005b81d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b81d3: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b81d9: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b81deu); f_005b83bc();
    /* 005b81de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b81e0: je 0x5b8208 */ if (fZ) goto L_005b8208;
L_005b81e2:; BB(0x005b81e2);
    /* 005b81e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b81e5: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 005b81eb: mov dword ptr [ecx + esi*4 + 4], eax */ W32((u32)(r_ecx+r_esi*4+0x4u), r_eax);
L_005b81ef:; BB(0x005b81ef);
    /* 005b81ef: add dword ptr [ebp - 0x18], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b81f3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b81f6: jmp 0x5b80e1 */ goto L_005b80e1;
L_005b81fb:; BB(0x005b81fb);
    /* 005b81fb: push 0x92b284 */ { u32 v = 0x92b284u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8200: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8205u); f_0061cdb0();
    /* 005b8205: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8206: jmp 0x5b81ef */ goto L_005b81ef;
L_005b8208:; BB(0x005b8208);
    /* 005b8208: push 0x92b284 */ { u32 v = 0x92b284u; r_esp -= 4; W32(r_esp, v); }
    /* 005b820d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8212u); f_0061cdb0();
    /* 005b8212: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8213: jmp 0x5b81ef */ goto L_005b81ef;
L_005b8215:; BB(0x005b8215);
    /* 005b8215: lea eax, [edi - 0x90000] */ r_eax = (u32)(r_edi+0xfff70000u);
    /* 005b821b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b821c: push 0x92b3e4 */ { u32 v = 0x92b3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8221: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8226u); f_0061cdb0();
    /* 005b8226: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8229: jmp 0x5b8102 */ goto L_005b8102;
L_005b822e:; BB(0x005b822e);
    /* 005b822e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b8235: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b823b: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5b8240u); f_005bb854();
    /* 005b8240: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8243: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8245: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b824b: jne 0x5b8313 */ if (!fZ) goto L_005b8313;
L_005b8251:; BB(0x005b8251);
    /* 005b8251: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b8257: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005b8259: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b825b: jle 0x5b8313 */ if ((fZ||fS!=fO)) goto L_005b8313;
L_005b8261:; BB(0x005b8261);
    /* 005b8261: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8264: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005b826a: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005b826d: mov ecx, dword ptr [edx + ebx*8 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 005b8271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8273: je 0x5b8304 */ if (fZ) goto L_005b8304;
L_005b8279:; BB(0x005b8279);
    /* 005b8279: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b827c: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 005b827f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8283: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b8288u); f_00858900();
    /* 005b8288: push 0x92b2b8 */ { u32 v = 0x92b2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b828d: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 005b8290: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 005b8293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8295: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x5b829au); f_0078e1c0();
    /* 005b829a: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b82a0: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b82a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b82a4: call 0x5bb53c */ r_esp -= 4; W32(r_esp, 0x5b82a9u); f_005bb53c();
    /* 005b82a9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82ac: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b82b1: jg 0x5b833c */ if ((!fZ&&fS==fO)) goto L_005b833c;
L_005b82b7:; BB(0x005b82b7);
    /* 005b82b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b82b9: jle 0x5b82e8 */ if ((fZ||fS!=fO)) goto L_005b82e8;
L_005b82bb:; BB(0x005b82bb);
    /* 005b82bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82be: mov ecx, dword ptr [0xa74a60] */ r_ecx = R32((u32)(0xa74a60u));
    /* 005b82c4: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 005b82ca: mov edx, dword ptr [edi + ebx*8 + 0xc] */ r_edx = R32((u32)(r_edi+r_ebx*8+0xcu));
    /* 005b82ce: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5b82d3u); f_0082a7d8();
    /* 005b82d3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82d6: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 005b82dc: or dword ptr [eax + ebx*8], 1 */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b82e0: mov edi, dword ptr [edx + 0x434] */ r_edi = R32((u32)(r_edx+0x434u));
    /* 005b82e6: jmp 0x5b8304 */ goto L_005b8304;
L_005b82e8:; BB(0x005b82e8);
    /* 005b82e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82eb: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 005b82f1: or dword ptr [eax + ebx*8], 2 */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b82f5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005b82f7: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b82fa: je 0x5b8320 */ if (fZ) goto L_005b8320;
L_005b82fc:; BB(0x005b82fc);
    /* 005b82fc: mov eax, edx */ r_eax = r_edx;
    /* 005b82fe: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
L_005b8304:; BB(0x005b8304);
    /* 005b8304: add dword ptr [ebp - 0x28], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8308: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b830b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b830d: jl 0x5b8261 */ if ((fS!=fO)) goto L_005b8261;
L_005b8313:; BB(0x005b8313);
    /* 005b8313: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8316: call 0x5b745c */ r_esp -= 4; W32(r_esp, 0x5b831bu); f_005b745c();
    /* 005b831b: jmp 0x5b7bd1 */ goto L_005b7bd1;
L_005b8320:; BB(0x005b8320);
    /* 005b8320: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b8323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8324: push 0x92b2dc */ { u32 v = 0x92b2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8329: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b832eu); f_0061cdb0();
    /* 005b832e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8331: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8334: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b833a: jmp 0x5b8304 */ goto L_005b8304;
L_005b833c:; BB(0x005b833c);
    /* 005b833c: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8340: push 0x92b2bc */ { u32 v = 0x92b2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8345: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b834au); f_0061cdb0();
    /* 005b834a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b834d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8350: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b8356: jmp 0x5b8304 */ goto L_005b8304;
L_005b8358:; BB(0x005b8358);
    /* 005b8358: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8359: push 0x92b3c4 */ { u32 v = 0x92b3c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b835e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8363u); f_0061cdb0();
    /* 005b8363: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8366: jmp 0x5b7c81 */ goto L_005b7c81;
L_005b836b:; BB(0x005b836b);
    /* 005b836b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b836e: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8370: push 0x92b3a8 */ { u32 v = 0x92b3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8375: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b837au); f_0061cdb0();
    /* 005b837a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b837d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8380: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b8382: mov dword ptr [edx + 0x438], eax */ W32((u32)(r_edx+0x438u), r_eax);
    /* 005b8388: mov dword ptr [edx + 0x434], eax */ W32((u32)(r_edx+0x434u), r_eax);
    /* 005b838e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b8395: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b839b: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5b83a0u); f_005bb854();
    /* 005b83a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b83a3: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 005b83a6: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b83a9: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b83ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b83af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b83b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005b83b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b83b9: ret 0x14 */ FN_RET(0x005b7a84); r_esp += 24; return;
}

void f_005b7c80(void)
{
    FN_ENTER(0x005b7c80);
    goto L_005b7c80;
L_005b7bd1:; BB(0x005b7bd1);
    /* 005b7bd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7bd4: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 005b7bd7: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b7bda: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b7bdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b7be0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b7be7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b7be9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b7bea: ret 0x14 */ FN_RET(0x005b7c80); r_esp += 24; return;
L_005b7c80:; BB(0x005b7c80);
    /* 005b7c80: add byte ptr [ebx - 0x58b5cfe3], cl */ { u32 ad = (u32)(r_ebx+0xa74a301du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b7c86: add byte ptr [ebp - 0xc773], cl */ { u32 ad = (u32)(r_ebp+0xffff388du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b7c8c: dec dword ptr [ebp + 0x45894043] */ { u32 ad = (u32)(r_ebp+0x45894043u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7c92: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005b7c94: out 0xb, al */ UNSUP(0x005b7c94, "out 0xb, al");
    /* 005b7c96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7c98: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7c9du); f_005bb3bc();
    /* 005b7c9d: movsx eax, byte ptr [ebx + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x8u));
    /* 005b7ca1: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7ca4: jne 0x5b7caf */ if (!fZ) goto L_005b7caf;
L_005b7ca6:; BB(0x005b7ca6);
    /* 005b7ca6: mov byte ptr [0xa74a64], 1 */ W8((u32)(0xa74a64u), 0x1u);
    /* 005b7cad: jmp 0x5b7cb6 */ goto L_005b7cb6;
L_005b7caf:; BB(0x005b7caf);
    /* 005b7caf: mov byte ptr [0xa74a64], 0 */ W8((u32)(0xa74a64u), 0x0u);
L_005b7cb6:; BB(0x005b7cb6);
    /* 005b7cb6: movsx edx, byte ptr [ebx + 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x9u));
    /* 005b7cba: mov eax, 0x800 */ r_eax = 0x800u;
    /* 005b7cbf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b7cc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7cc4: je 0x5b7cd7 */ if (fZ) goto L_005b7cd7;
L_005b7cc6:; BB(0x005b7cc6);
    /* 005b7cc6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7cc9: or dword ptr [eax], 0x800 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7ccf: mov edx, 0x20 */ r_edx = 0x20u;
    /* 005b7cd4: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_005b7cd7:; BB(0x005b7cd7);
    /* 005b7cd7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b7cda: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b7cdd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b7cdf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005b7ce2:; BB(0x005b7ce2);
    /* 005b7ce2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7ce5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ce8: cmp eax, dword ptr [edx + 0x434] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x434u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7cee: jge 0x5b80df */ if ((fS==fO)) goto L_005b80df;
L_005b7cf4:; BB(0x005b7cf4);
    /* 005b7cf4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7cf7: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 005b7cfa: cmp esi, 0x90000 */ {  u32 a = r_esi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b7d00: jg 0x5b80c6 */ if ((!fZ&&fS==fO)) goto L_005b80c6;
L_005b7d06:; BB(0x005b7d06);
    /* 005b7d06: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b7d0d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7d10: jne 0x5b7e6e */ if (!fZ) goto L_005b7e6e;
L_005b7d16:; BB(0x005b7d16);
    /* 005b7d16: lea eax, [esi + 0x800] */ r_eax = (u32)(r_esi+0x800u);
    /* 005b7d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d1d: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b7d22u); f_0082e940();
    /* 005b7d22: mov ebx, eax */ r_ebx = r_eax;
    /* 005b7d24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7d27: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7d29: je 0x5b807c */ if (fZ) goto L_005b807c;
L_005b7d2f:; BB(0x005b7d2f);
    /* 005b7d2f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b7d32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d34: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 005b7d36: mov dword ptr [0xa74b04], edi */ W32((u32)(0xa74b04u), r_edi);
    /* 005b7d3c: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7d42: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7d47u); f_005bb3bc();
    /* 005b7d47: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7d4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d4b: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7d51: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b7d56u); f_005bb518();
    /* 005b7d56: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7d5c: mov edx, dword ptr [0x9c1e38] */ r_edx = R32((u32)(0x9c1e38u));
    /* 005b7d62: mov dword ptr [0xa74b04], edx */ W32((u32)(0xa74b04u), r_edx);
    /* 005b7d68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d69: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b7d6eu); f_00788154();
    /* 005b7d6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7d6f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b7d74u); f_0082e960();
    /* 005b7d74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7d77: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7d7a: mov ebx, dword ptr [0xaab3b0] */ r_ebx = R32((u32)(0xaab3b0u));
    /* 005b7d80: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7d83: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7d86: mov esi, dword ptr [esi + 0x28] */ r_esi = R32((u32)(r_esi+0x28u));
    /* 005b7d89: mov ecx, dword ptr [edi + 0x42c] */ r_ecx = R32((u32)(r_edi+0x42cu));
    /* 005b7d8f: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005b7d92: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 005b7d95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7d97: mov dword ptr [ecx + ebx*8 + 8], eax */ W32((u32)(r_ecx+r_ebx*8+0x8u), r_eax);
    /* 005b7d9b: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005b7da1: mov dword ptr [edx + ebx*8 + 0xc], eax */ W32((u32)(r_edx+r_ebx*8+0xcu), r_eax);
    /* 005b7da5: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005b7dab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005b7dad:; BB(0x005b7dad);
    /* 005b7dad: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b7daf: jae 0x5b7f8c */ if (!fC) goto L_005b7f8c;
L_005b7db5:; BB(0x005b7db5);
    /* 005b7db5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7db8: mov edi, dword ptr [eax + 0x424] */ r_edi = R32((u32)(r_eax+0x424u));
    /* 005b7dbe: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7dc0: je 0x5b805c */ if (fZ) goto L_005b805c;
L_005b7dc6:; BB(0x005b7dc6);
    /* 005b7dc6: mov edx, eax */ r_edx = r_eax;
    /* 005b7dc8: add edi, dword ptr [edx + 0x428] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x428u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7dce: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 005b7dd4: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 005b7dda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ddb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ddd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b7de0: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 005b7de6: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b7debu); f_0083b124();
    /* 005b7deb: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005b7df1: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b7df4: lea ecx, [edx + edx + 2] */ r_ecx = (u32)(r_edx+r_edx+0x2u);
    /* 005b7df8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7dfb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7dfd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7dff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e01: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7e03: add dword ptr [edx + 0x428], ecx */ { u32 ad = (u32)(r_edx+0x428u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7e09: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
L_005b7e0f:; BB(0x005b7e0f);
    /* 005b7e0f: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005b7e15: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e1b: jne 0x5b7e35 */ if (!fZ) goto L_005b7e35;
L_005b7e1d:; BB(0x005b7e1d);
    /* 005b7e1d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7e20: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7e26: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7e2c: mov dword ptr [ecx + ebx*8 + 8], edi */ W32((u32)(r_ecx+r_ebx*8+0x8u), r_edi);
    /* 005b7e30: jmp 0x5b7dad */ goto L_005b7dad;
L_005b7e35:; BB(0x005b7e35);
    /* 005b7e35: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7e3b: jne 0x5b7e55 */ if (!fZ) goto L_005b7e55;
L_005b7e3d:; BB(0x005b7e3d);
    /* 005b7e3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7e40: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7e46: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7e4c: mov dword ptr [ecx + ebx*8 + 0xc], edi */ W32((u32)(r_ecx+r_ebx*8+0xcu), r_edi);
    /* 005b7e50: jmp 0x5b7dad */ goto L_005b7dad;
L_005b7e55:; BB(0x005b7e55);
    /* 005b7e55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e56: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e5b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7e60u); f_0061cdb0();
    /* 005b7e60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7e63: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005b7e69: jmp 0x5b7dad */ goto L_005b7dad;
L_005b7e6e:; BB(0x005b7e6e);
    /* 005b7e6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e6f: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b7e75: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7e7b: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7e80u); f_005bb3bc();
    /* 005b7e80: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b7e83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7e84: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7e8a: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b7e8fu); f_005bb518();
    /* 005b7e8f: mov ebx, dword ptr [0x9c1e38] */ r_ebx = R32((u32)(0x9c1e38u));
    /* 005b7e95: mov edx, dword ptr [0xaab3b0] */ r_edx = R32((u32)(0xaab3b0u));
    /* 005b7e9b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7e9e: mov dword ptr [0xa74b04], ebx */ W32((u32)(0xa74b04u), r_ebx);
    /* 005b7ea4: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005b7ea7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005b7eaa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ead: mov edi, dword ptr [edx + 0x42c] */ r_edi = R32((u32)(r_edx+0x42cu));
    /* 005b7eb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b7eb5: mov dword ptr [edi + ebx*8 + 8], eax */ W32((u32)(r_edi+r_ebx*8+0x8u), r_eax);
    /* 005b7eb9: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005b7ebf: mov dword ptr [edx + ebx*8 + 0xc], eax */ W32((u32)(r_edx+r_ebx*8+0xcu), r_eax);
    /* 005b7ec3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b7ec5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
L_005b7ecb:; BB(0x005b7ecb);
    /* 005b7ecb: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b7ecd: jae 0x5b7f8c */ if (!fC) goto L_005b7f8c;
L_005b7ed3:; BB(0x005b7ed3);
    /* 005b7ed3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7ed6: mov edi, dword ptr [eax + 0x424] */ r_edi = R32((u32)(r_eax+0x424u));
    /* 005b7edc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7ede: je 0x5b8093 */ if (fZ) goto L_005b8093;
L_005b7ee4:; BB(0x005b7ee4);
    /* 005b7ee4: mov edx, eax */ r_edx = r_eax;
    /* 005b7ee6: add edi, dword ptr [edx + 0x428] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x428u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005b7eec: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 005b7ef2: lea edx, [ebp - 0x94] */ r_edx = (u32)(r_ebp+0xffffff6cu);
    /* 005b7ef8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ef9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7efa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7efb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b7efe: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 005b7f04: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b7f09u); f_0083b124();
    /* 005b7f09: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005b7f0f: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b7f12: lea ecx, [edx + edx + 2] */ r_ecx = (u32)(r_edx+r_edx+0x2u);
    /* 005b7f16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f19: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f1b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f1d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f1f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b7f21: add dword ptr [edx + 0x428], ecx */ { u32 ad = (u32)(r_edx+0x428u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7f27: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
L_005b7f2d:; BB(0x005b7f2d);
    /* 005b7f2d: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005b7f33: cmp edx, 0x4e4a434d */ {  u32 a = r_edx; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f39: jne 0x5b7f53 */ if (!fZ) goto L_005b7f53;
L_005b7f3b:; BB(0x005b7f3b);
    /* 005b7f3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f3e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7f44: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005b7f4a: mov dword ptr [ecx + ebx*8 + 8], edi */ W32((u32)(r_ecx+r_ebx*8+0x8u), r_edi);
    /* 005b7f4e: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7f53:; BB(0x005b7f53);
    /* 005b7f53: cmp edx, 0x4e4a544c */ {  u32 a = r_edx; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f59: jne 0x5b7f73 */ if (!fZ) goto L_005b7f73;
L_005b7f5b:; BB(0x005b7f5b);
    /* 005b7f5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f5e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005b7f64: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005b7f6a: mov dword ptr [ecx + ebx*8 + 0xc], edi */ W32((u32)(r_ecx+r_ebx*8+0xcu), r_edi);
    /* 005b7f6e: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7f73:; BB(0x005b7f73);
    /* 005b7f73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f74: push 0x92b25c */ { u32 v = 0x92b25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7f79: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7f7eu); f_0061cdb0();
    /* 005b7f7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7f81: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005b7f87: jmp 0x5b7ecb */ goto L_005b7ecb;
L_005b7f8c:; BB(0x005b7f8c);
    /* 005b7f8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7f8f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b7f91: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7f97: je 0x5b804f */ if (fZ) goto L_005b804f;
L_005b7f9d:; BB(0x005b7f9d);
    /* 005b7f9d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b7fa0: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005b7fa6: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005b7fa9: mov ebx, dword ptr [eax + ecx*8 + 0xc] */ r_ebx = R32((u32)(r_eax+r_ecx*8+0xcu));
    /* 005b7fad: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7faf: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b7fb2: je 0x5b804f */ if (fZ) goto L_005b804f;
L_005b7fb8:; BB(0x005b7fb8);
    /* 005b7fb8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b7fbb: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 005b7fbe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b7fc0: jne 0x5b7fdf */ if (!fZ) goto L_005b7fdf;
L_005b7fc2:; BB(0x005b7fc2);
    /* 005b7fc2: mov edx, ecx */ r_edx = r_ecx;
    /* 005b7fc4: or dword ptr [eax + edx*8], 2 */ { u32 ad = (u32)(r_eax+r_edx*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b7fc8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b7fcb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b7fcd: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b7fd0: jne 0x5b804f */ if (!fZ) goto L_005b804f;
L_005b7fd2:; BB(0x005b7fd2);
    /* 005b7fd2: push 0x92b43c */ { u32 v = 0x92b43cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b7fd7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b7fdcu); f_0061cdb0();
    /* 005b7fdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b7fdd: jmp 0x5b804f */ goto L_005b804f;
L_005b7fdf:; BB(0x005b7fdf);
    /* 005b7fdf: lea eax, [ebx + 0x800] */ r_eax = (u32)(r_ebx+0x800u);
    /* 005b7fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b7fe6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b7febu); f_0082e940();
    /* 005b7feb: mov esi, eax */ r_esi = r_eax;
    /* 005b7fed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b7ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ff1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b7ff2: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b7ff8: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b7ffdu); f_005bb3bc();
    /* 005b7ffd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8000: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8001: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b8007: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b800cu); f_005bb518();
    /* 005b800c: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8012: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8013: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b8018u); f_00788154();
    /* 005b8018: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8019: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b801eu); f_0082e960();
    /* 005b801e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8021: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8024: mov ecx, dword ptr [0xaab3b0] */ r_ecx = R32((u32)(0xaab3b0u));
    /* 005b802a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b802d: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 005b8033: mov edx, dword ptr [ebx + esi*8 + 0xc] */ r_edx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 005b8037: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5b803cu); f_0082a7d8();
    /* 005b803c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b803f: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005b8045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b8047: jle 0x5b80b3 */ if ((fZ||fS!=fO)) goto L_005b80b3;
L_005b8049:; BB(0x005b8049);
    /* 005b8049: mov eax, esi */ r_eax = r_esi;
    /* 005b804b: or dword ptr [edx + eax*8], 1 */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_005b804f:; BB(0x005b804f);
    /* 005b804f: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8053: add dword ptr [ebp - 0x18], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8057: jmp 0x5b7ce2 */ goto L_005b7ce2;
L_005b805c:; BB(0x005b805c);
    /* 005b805c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b805f: lea edi, [ebp - 0x8c] */ r_edi = (u32)(r_ebp+0xffffff74u);
    /* 005b8065: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 005b806b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b806d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b806e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b806f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8070: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b8075u); f_0083b124();
    /* 005b8075: mov edi, eax */ r_edi = r_eax;
    /* 005b8077: jmp 0x5b7e0f */ goto L_005b7e0f;
L_005b807c:; BB(0x005b807c);
    /* 005b807c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b807f: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8081: push 0x92b404 */ { u32 v = 0x92b404u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8086: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b808bu); f_0061cdb0();
    /* 005b808b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b808e: jmp 0x5b7f8c */ goto L_005b7f8c;
L_005b8093:; BB(0x005b8093);
    /* 005b8093: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b8096: lea edi, [ebp - 0x98] */ r_edi = (u32)(r_ebp+0xffffff68u);
    /* 005b809c: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 005b80a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b80a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b80a7: call 0x83b124 */ r_esp -= 4; W32(r_esp, 0x5b80acu); f_0083b124();
    /* 005b80ac: mov edi, eax */ r_edi = r_eax;
    /* 005b80ae: jmp 0x5b7f2d */ goto L_005b7f2d;
L_005b80b3:; BB(0x005b80b3);
    /* 005b80b3: push 0x92b420 */ { u32 v = 0x92b420u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80b8: mov eax, esi */ r_eax = r_esi;
    /* 005b80ba: or dword ptr [edx + eax*8], 2 */ { u32 ad = (u32)(r_edx+r_eax*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b80be: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b80c3u); f_0061cdb0();
    /* 005b80c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b80c4: jmp 0x5b804f */ goto L_005b804f;
L_005b80c6:; BB(0x005b80c6);
    /* 005b80c6: lea eax, [esi - 0x90000] */ r_eax = (u32)(r_esi+0xfff70000u);
    /* 005b80cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b80cd: push 0x92b3e4 */ { u32 v = 0x92b3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b80d2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b80d7u); f_0061cdb0();
    /* 005b80d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b80da: jmp 0x5b7d06 */ goto L_005b7d06;
L_005b80df:; BB(0x005b80df);
    /* 005b80df: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005b80e1:; BB(0x005b80e1);
    /* 005b80e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b80e4: cmp ebx, dword ptr [eax + 0x438] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x438u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b80ea: jge 0x5b822e */ if ((fS==fO)) goto L_005b822e;
L_005b80f0:; BB(0x005b80f0);
    /* 005b80f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b80f3: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 005b80f6: cmp edi, 0x90000 */ {  u32 a = r_edi; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b80fc: jg 0x5b8215 */ if ((!fZ&&fS==fO)) goto L_005b8215;
L_005b8102:; BB(0x005b8102);
    /* 005b8102: movsx eax, byte ptr [0xa74a64] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa74a64u));
    /* 005b8109: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b810c: jne 0x5b818f */ if (!fZ) goto L_005b818f;
L_005b8112:; BB(0x005b8112);
    /* 005b8112: lea eax, [edi + 0x800] */ r_eax = (u32)(r_edi+0x800u);
    /* 005b8118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8119: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x5b811eu); f_0082e940();
    /* 005b811e: mov esi, eax */ r_esi = r_eax;
    /* 005b8120: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8123: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8124: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8125: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b812b: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b8130u); f_005bb3bc();
    /* 005b8130: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8133: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8134: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b813a: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b813fu); f_005bb518();
    /* 005b813f: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8145: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8146: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x5b814bu); f_00788154();
    /* 005b814b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b814c: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x5b8151u); f_0082e960();
    /* 005b8151: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8154: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8157: lea edi, [ebp - 0x78] */ r_edi = (u32)(r_ebp+0xffffff88u);
    /* 005b815a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b815b: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 005b8161: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005b8164: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b8166: mov dword ptr [eax + ebx*8 + 4], edx */ W32((u32)(r_eax+r_ebx*8+0x4u), r_edx);
    /* 005b816a: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005b816d: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 005b8170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8171: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8177: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b817cu); f_005b83bc();
    /* 005b817c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b817e: je 0x5b81fb */ if (fZ) goto L_005b81fb;
L_005b8180:; BB(0x005b8180);
    /* 005b8180: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8183: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 005b8189: mov dword ptr [ecx + esi*4 + 4], eax */ W32((u32)(r_ecx+r_esi*4+0x4u), r_eax);
    /* 005b818d: jmp 0x5b81ef */ goto L_005b81ef;
L_005b818f:; BB(0x005b818f);
    /* 005b818f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b8190: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b8196: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b819c: call 0x5bb3bc */ r_esp -= 4; W32(r_esp, 0x5b81a1u); f_005bb3bc();
    /* 005b81a1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b81a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b81a5: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b81ab: call 0x5bb518 */ r_esp -= 4; W32(r_esp, 0x5b81b0u); f_005bb518();
    /* 005b81b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b81b3: lea edi, [ebp - 0x80] */ r_edi = (u32)(r_ebp+0xffffff80u);
    /* 005b81b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b81b7: mov eax, dword ptr [ecx + 0x430] */ r_eax = R32((u32)(r_ecx+0x430u));
    /* 005b81bd: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005b81c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b81c2: mov dword ptr [eax + ebx*8 + 4], edx */ W32((u32)(r_eax+r_ebx*8+0x4u), r_edx);
    /* 005b81c6: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005b81cc: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 005b81d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b81d3: push dword ptr [0xaab3b0] */ { u32 v = R32((u32)(0xaab3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b81d9: call 0x5b83bc */ r_esp -= 4; W32(r_esp, 0x5b81deu); f_005b83bc();
    /* 005b81de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b81e0: je 0x5b8208 */ if (fZ) goto L_005b8208;
L_005b81e2:; BB(0x005b81e2);
    /* 005b81e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b81e5: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 005b81eb: mov dword ptr [ecx + esi*4 + 4], eax */ W32((u32)(r_ecx+r_esi*4+0x4u), r_eax);
L_005b81ef:; BB(0x005b81ef);
    /* 005b81ef: add dword ptr [ebp - 0x18], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b81f3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005b81f6: jmp 0x5b80e1 */ goto L_005b80e1;
L_005b81fb:; BB(0x005b81fb);
    /* 005b81fb: push 0x92b284 */ { u32 v = 0x92b284u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8200: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8205u); f_0061cdb0();
    /* 005b8205: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8206: jmp 0x5b81ef */ goto L_005b81ef;
L_005b8208:; BB(0x005b8208);
    /* 005b8208: push 0x92b284 */ { u32 v = 0x92b284u; r_esp -= 4; W32(r_esp, v); }
    /* 005b820d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8212u); f_0061cdb0();
    /* 005b8212: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b8213: jmp 0x5b81ef */ goto L_005b81ef;
L_005b8215:; BB(0x005b8215);
    /* 005b8215: lea eax, [edi - 0x90000] */ r_eax = (u32)(r_edi+0xfff70000u);
    /* 005b821b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b821c: push 0x92b3e4 */ { u32 v = 0x92b3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8221: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b8226u); f_0061cdb0();
    /* 005b8226: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8229: jmp 0x5b8102 */ goto L_005b8102;
L_005b822e:; BB(0x005b822e);
    /* 005b822e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b8235: lea ecx, [ebp - 0xc8] */ r_ecx = (u32)(r_ebp+0xffffff38u);
    /* 005b823b: call 0x5bb854 */ r_esp -= 4; W32(r_esp, 0x5b8240u); f_005bb854();
    /* 005b8240: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8243: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8245: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b824b: jne 0x5b8313 */ if (!fZ) goto L_005b8313;
L_005b8251:; BB(0x005b8251);
    /* 005b8251: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b8257: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005b8259: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b825b: jle 0x5b8313 */ if ((fZ||fS!=fO)) goto L_005b8313;
L_005b8261:; BB(0x005b8261);
    /* 005b8261: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8264: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005b826a: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005b826d: mov ecx, dword ptr [edx + ebx*8 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ebx*8+0xcu));
    /* 005b8271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8273: je 0x5b8304 */ if (fZ) goto L_005b8304;
L_005b8279:; BB(0x005b8279);
    /* 005b8279: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b827c: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 005b827f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8283: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5b8288u); f_00858900();
    /* 005b8288: push 0x92b2b8 */ { u32 v = 0x92b2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b828d: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 005b8290: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 005b8293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8295: call 0x78e1c0 */ r_esp -= 4; W32(r_esp, 0x5b829au); f_0078e1c0();
    /* 005b829a: push dword ptr [0xa74a60] */ { u32 v = R32((u32)(0xa74a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b82a0: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b82a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b82a4: call 0x5bb53c */ r_esp -= 4; W32(r_esp, 0x5b82a9u); f_005bb53c();
    /* 005b82a9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b82ac: cmp eax, 0x90000 */ {  u32 a = r_eax; u32 b = 0x90000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b82b1: jg 0x5b833c */ if ((!fZ&&fS==fO)) goto L_005b833c;
L_005b82b7:; BB(0x005b82b7);
    /* 005b82b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b82b9: jle 0x5b82e8 */ if ((fZ||fS!=fO)) goto L_005b82e8;
L_005b82bb:; BB(0x005b82bb);
    /* 005b82bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82be: mov ecx, dword ptr [0xa74a60] */ r_ecx = R32((u32)(0xa74a60u));
    /* 005b82c4: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 005b82ca: mov edx, dword ptr [edi + ebx*8 + 0xc] */ r_edx = R32((u32)(r_edi+r_ebx*8+0xcu));
    /* 005b82ce: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5b82d3u); f_0082a7d8();
    /* 005b82d3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82d6: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 005b82dc: or dword ptr [eax + ebx*8], 1 */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b82e0: mov edi, dword ptr [edx + 0x434] */ r_edi = R32((u32)(r_edx+0x434u));
    /* 005b82e6: jmp 0x5b8304 */ goto L_005b8304;
L_005b82e8:; BB(0x005b82e8);
    /* 005b82e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b82eb: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 005b82f1: or dword ptr [eax + ebx*8], 2 */ { u32 ad = (u32)(r_eax+r_ebx*8);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005b82f5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005b82f7: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b82fa: je 0x5b8320 */ if (fZ) goto L_005b8320;
L_005b82fc:; BB(0x005b82fc);
    /* 005b82fc: mov eax, edx */ r_eax = r_edx;
    /* 005b82fe: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
L_005b8304:; BB(0x005b8304);
    /* 005b8304: add dword ptr [ebp - 0x28], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b8308: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b830b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b830d: jl 0x5b8261 */ if ((fS!=fO)) goto L_005b8261;
L_005b8313:; BB(0x005b8313);
    /* 005b8313: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8316: call 0x5b745c */ r_esp -= 4; W32(r_esp, 0x5b831bu); f_005b745c();
    /* 005b831b: jmp 0x5b7bd1 */ goto L_005b7bd1;
L_005b8320:; BB(0x005b8320);
    /* 005b8320: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b8323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8324: push 0x92b2dc */ { u32 v = 0x92b2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8329: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b832eu); f_0061cdb0();
    /* 005b832e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8331: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8334: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b833a: jmp 0x5b8304 */ goto L_005b8304;
L_005b833c:; BB(0x005b833c);
    /* 005b833c: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 005b833f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8340: push 0x92b2bc */ { u32 v = 0x92b2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b8345: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b834au); f_0061cdb0();
    /* 005b834a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b834d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b8350: mov edi, dword ptr [eax + 0x434] */ r_edi = R32((u32)(r_eax+0x434u));
    /* 005b8356: jmp 0x5b8304 */ goto L_005b8304;
}

