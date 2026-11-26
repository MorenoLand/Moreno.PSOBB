#include "protos.h"

void f_0061b218(void) /* sub_61B218 */
{
    FN_ENTER(0x0061b218);
    /* 0061b218: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b219: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061b21b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061b21d: call 0x61b23c */ r_esp -= 4; W32(r_esp, 0x61b222u); f_0061b23c();
    /* 0061b222: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061b226: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b228: jne 0x61b22e */ if (!fZ) goto L_0061b22e;
L_0061b22a:; BB(0x0061b22a);
    /* 0061b22a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061b22b: ret 4 */ FN_RET(0x0061b218); r_esp += 8; return;
L_0061b22e:; BB(0x0061b22e);
    /* 0061b22e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b22f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61b234u); f_005c2f74();
    /* 0061b234: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b235: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061b236: ret 4 */ FN_RET(0x0061b218); r_esp += 8; return;
}

void f_0061b23c(void) /* sub_61B23C */
{
    FN_ENTER(0x0061b23c);
    /* 0061b23c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b23d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b23f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b241: push 0x8e1bb0 */ { u32 v = 0x8e1bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b246: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061b24c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b24d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061b254: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b257: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061b25a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061b25d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061b260: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061b263: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061b266: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b26d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b270: mov dword ptr [eax], 0xb27040 */ W32((u32)(r_eax), 0xb27040u);
    /* 0061b276: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b277: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61b27cu); f_007b4e84();
    /* 0061b27c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b27d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b280: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61b285u); f_007b9c8c();
    /* 0061b285: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061b28c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b28f: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61b294u); f_00619b10();
    /* 0061b294: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b297: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061b29e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b2a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b2a1: ret  */ FN_RET(0x0061b23c); r_esp += 4; return;
}

void f_0061b2a4(void) /* sub_61B2A4 */
{
    FN_ENTER(0x0061b2a4);
    /* 0061b2a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0061b2a7: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061b2ad: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b2af: jne 0x61b2bd */ if (!fZ) goto L_0061b2bd;
L_0061b2b1:; BB(0x0061b2b1);
    /* 0061b2b1: mov eax, dword ptr [0xa8ebdc] */ r_eax = R32((u32)(0xa8ebdcu));
    /* 0061b2b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b2b8: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
L_0061b2bb:; BB(0x0061b2bb);
    /* 0061b2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b2bc: ret  */ FN_RET(0x0061b2a4); r_esp += 4; return;
L_0061b2bd:; BB(0x0061b2bd);
    /* 0061b2bd: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2c2: mov eax, dword ptr [0xa8ebdc] */ r_eax = R32((u32)(0xa8ebdcu));
    /* 0061b2c7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061b2ca: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 0061b2cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061b2cf: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61b2d4u); f_006134c8();
    /* 0061b2d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061b2d7: jne 0x61b2bb */ if (!fZ) goto L_0061b2bb;
L_0061b2d9:; BB(0x0061b2d9);
    /* 0061b2d9: mov dword ptr [ebp + 0xac], 1 */ W32((u32)(r_ebp+0xacu), 0x1u);
    /* 0061b2e3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2e5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061b2e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2e9: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61b2eeu); f_007b52c4();
    /* 0061b2ee: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061b2f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b2f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2f6: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b2fb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61b300u); f_00814298();
    /* 0061b300: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061b303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b304: ret  */ FN_RET(0x0061b2a4); r_esp += 4; return;
}

void f_0061b308(void) /* sub_61B308 */
{
    FN_ENTER(0x0061b308);
    /* 0061b308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b309: mov edi, ecx */ r_edi = r_ecx;
    /* 0061b30b: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061b311: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061b313: jne 0x61b34b */ if (!fZ) goto L_0061b34b;
L_0061b315:; BB(0x0061b315);
    /* 0061b315: mov eax, dword ptr [0xa8ebdc] */ r_eax = R32((u32)(0xa8ebdcu));
    /* 0061b31a: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061b324: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b326: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061b329: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b32b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b32d: mov ecx, edi */ r_ecx = r_edi;
    /* 0061b32f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61b334u); f_007b52ec();
    /* 0061b334: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061b337: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b33a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b33b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b33c: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b341: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61b346u); f_00814298();
    /* 0061b346: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0061b349:; BB(0x0061b349);
    /* 0061b349: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061b34a: ret  */ FN_RET(0x0061b308); r_esp += 4; return;
L_0061b34b:; BB(0x0061b34b);
    /* 0061b34b: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b350: mov eax, dword ptr [0xa8ebdc] */ r_eax = R32((u32)(0xa8ebdcu));
    /* 0061b355: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061b358: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061b35b: mov ecx, edi */ r_ecx = r_edi;
    /* 0061b35d: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61b362u); f_006134c8();
    /* 0061b362: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061b365: je 0x61b349 */ if (fZ) goto L_0061b349;
L_0061b367:; BB(0x0061b367);
    /* 0061b367: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061b371: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b373: mov ecx, edi */ r_ecx = r_edi;
    /* 0061b375: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b377: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61b37cu); f_007b52ec();
    /* 0061b37c: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061b37f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b383: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b384: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b389: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61b38eu); f_00814298();
    /* 0061b38e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061b391: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061b392: ret  */ FN_RET(0x0061b308); r_esp += 4; return;
}

void f_0061b394(void) /* sub_61B394 */
{
    FN_ENTER(0x0061b394);
    /* 0061b394: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b395: mov esi, ecx */ r_esi = r_ecx;
    /* 0061b397: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061b399: mov ecx, esi */ r_ecx = r_esi;
    /* 0061b39b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3a0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3a5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61b3a8u); call_ind(t); }
    /* 0061b3a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b3aa: je 0x61b40a */ if (fZ) goto L_0061b40a;
L_0061b3ac:; BB(0x0061b3ac);
    /* 0061b3ac: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3b1: mov ecx, esi */ r_ecx = r_esi;
    /* 0061b3b3: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61b3b8u); f_00613244();
    /* 0061b3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b3ba: je 0x61b40a */ if (fZ) goto L_0061b40a;
L_0061b3bc:; BB(0x0061b3bc);
    /* 0061b3bc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61b3c1u); f_0082d7b0();
    /* 0061b3c1: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061b3c4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61b3c9u); f_0082d838();
    /* 0061b3c9: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061b3cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b3ce: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61b3d3u); f_0082d8bc();
    /* 0061b3d3: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0061b3d6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61b3dbu); f_00829cc8();
    /* 0061b3db: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0061b3e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b3e3: je 0x61b40c */ if (fZ) goto L_0061b40c;
L_0061b3e5:; BB(0x0061b3e5);
    /* 0061b3e5: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0061b3eb: fcomp dword ptr [0x930a40] */ fx_compare(ST(0), R_F32((u32)(0x930a40u))); FPOP();
    /* 0061b3f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061b3f3: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0061b3f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061b3fa: je 0x61b40c */ if (fZ) goto L_0061b40c;
L_0061b3fc:; BB(0x0061b3fc);
    /* 0061b3fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b3fd: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0061b400: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61b405u); f_0083bd00();
L_0061b405:; BB(0x0061b405);
    /* 0061b405: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61b40au); f_0082da80();
L_0061b40a:; BB(0x0061b40a);
    /* 0061b40a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061b40b: ret  */ FN_RET(0x0061b394); r_esp += 4; return;
L_0061b40c:; BB(0x0061b40c);
    /* 0061b40c: mov ecx, dword ptr [0xa8ebe4] */ r_ecx = R32((u32)(0xa8ebe4u));
    /* 0061b412: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61b417u); f_00831758();
    /* 0061b417: mov ecx, dword ptr [0xa8ebe4] */ r_ecx = R32((u32)(0xa8ebe4u));
    /* 0061b41d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b420: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61b425u); f_00831758();
    /* 0061b425: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61b42au); f_0082dbac();
    /* 0061b42a: mov ecx, dword ptr [0xa8ebe4] */ r_ecx = R32((u32)(0xa8ebe4u));
    /* 0061b430: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b433: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61b438u); f_00831758();
    /* 0061b438: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61b43du); f_0082dab0();
    /* 0061b43d: jmp 0x61b405 */ goto L_0061b405;
}

void f_0061b440(void) /* sub_61B440 */
{
    FN_ENTER(0x0061b440);
    /* 0061b440: mov eax, dword ptr [0xa8ebe4] */ r_eax = R32((u32)(0xa8ebe4u));
    /* 0061b445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b447: je 0x61b45a */ if (fZ) goto L_0061b45a;
L_0061b449:; BB(0x0061b449);
    /* 0061b449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b44a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61b44fu); f_00857e98();
    /* 0061b44f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b450: mov dword ptr [0xa8ebe4], 0 */ W32((u32)(0xa8ebe4u), 0x0u);
L_0061b45a:; BB(0x0061b45a);
    /* 0061b45a: mov eax, dword ptr [0xa8ebdc] */ r_eax = R32((u32)(0xa8ebdcu));
    /* 0061b45f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b461: je 0x61b494 */ if (fZ) goto L_0061b494;
L_0061b463:; BB(0x0061b463);
    /* 0061b463: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061b466: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61b46bu); f_00800b5c();
    /* 0061b46b: mov eax, dword ptr [0xa8ebdc] */ r_eax = R32((u32)(0xa8ebdcu));
    /* 0061b470: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0061b472: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61b477u); f_00800b5c();
    /* 0061b477: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b47a: mov eax, dword ptr [0xa8ebdc] */ r_eax = R32((u32)(0xa8ebdcu));
    /* 0061b47f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b481: je 0x61b494 */ if (fZ) goto L_0061b494;
L_0061b483:; BB(0x0061b483);
    /* 0061b483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b484: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61b489u); f_00857e98();
    /* 0061b489: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b48a: mov dword ptr [0xa8ebdc], 0 */ W32((u32)(0xa8ebdcu), 0x0u);
L_0061b494:; BB(0x0061b494);
    /* 0061b494: mov ecx, dword ptr [0xa8ebe0] */ r_ecx = R32((u32)(0xa8ebe0u));
    /* 0061b49a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b49c: je 0x61b4b1 */ if (fZ) goto L_0061b4b1;
L_0061b49e:; BB(0x0061b49e);
    /* 0061b49e: je 0x61b4a7 */ if (fZ) goto L_0061b4a7;
L_0061b4a0:; BB(0x0061b4a0);
    /* 0061b4a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4a2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61b4a7u); f_004066a8();
L_0061b4a7:; BB(0x0061b4a7);
    /* 0061b4a7: mov dword ptr [0xa8ebe0], 0 */ W32((u32)(0xa8ebe0u), 0x0u);
L_0061b4b1:; BB(0x0061b4b1);
    /* 0061b4b1: ret  */ FN_RET(0x0061b440); r_esp += 4; return;
}

void f_0061b4b4(void)
{
    FN_ENTER(0x0061b4b4);
    /* 0061b4b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b4b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4b9: push 0x8e1bd8 */ { u32 v = 0x8e1bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061b4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061b4cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b4cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061b4d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061b4d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061b4d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061b4db: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b4e0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061b4e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61b4ecu); f_005caba4();
    /* 0061b4ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b4ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061b4f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b4f2: je 0x61b52b */ if (fZ) goto L_0061b52b;
L_0061b4f4:; BB(0x0061b4f4);
    /* 0061b4f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061b4fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b502: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061b505: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061b50b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b50e: call 0x61b530 */ r_esp -= 4; W32(r_esp, 0x61b513u); f_0061b530();
    /* 0061b513: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b516: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061b51d:; BB(0x0061b51d);
    /* 0061b51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061b527: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b52a: ret  */ FN_RET(0x0061b4b4); r_esp += 4; return;
L_0061b52b:; BB(0x0061b52b);
    /* 0061b52b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b52d: jmp 0x61b51d */ goto L_0061b51d;
}

void f_0061b530(void) /* sub_61B530 */
{
    FN_ENTER(0x0061b530);
    /* 0061b530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b531: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b535: push 0x8e1bf4 */ { u32 v = 0x8e1bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b53a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061b540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b541: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061b548: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b54b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061b54e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061b551: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061b554: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061b557: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b55a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061b55d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061b560: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061b563: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61b568u); f_00619df0();
    /* 0061b568: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b56f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061b572: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b575: mov dword ptr [ecx], 0xb27040 */ W32((u32)(r_ecx), 0xb27040u);
    /* 0061b57b: mov eax, dword ptr [0x9c50c0] */ r_eax = R32((u32)(0x9c50c0u));
    /* 0061b580: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b581: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061b584: call dword ptr [0xb27054] */ { u32 t = R32((u32)(0xb27054u)); r_esp -= 4; W32(r_esp, 0x61b58au); call_ind(t); }
    /* 0061b58a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061b58d: mov edi, dword ptr [0xa8ebe0] */ r_edi = R32((u32)(0xa8ebe0u));
    /* 0061b593: mov ebx, dword ptr [0xa8ebdc] */ r_ebx = R32((u32)(0xa8ebdcu));
    /* 0061b599: fld dword ptr [0x930a38] */ FPUSH(R_F32((u32)(0x930a38u)));
    /* 0061b59f: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061b5a5: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061b5a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b5aa: push 0x9c50c4 */ { u32 v = 0x9c50c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b5af: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061b5b2: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0061b5b4: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061b5b7: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061b5bd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061b5c0: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061b5c6: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061b5c9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061b5cc: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061b5cf: fadd dword ptr [edx*4 + 0x930a30] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930a30u));
    /* 0061b5d6: fadd dword ptr [0x930a3c] */ ST(0) = ST(0) + R_F32((u32)(0x930a3cu));
    /* 0061b5dc: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061b5e2: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061b5e4: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061b5ea: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61b5efu); f_007b9a88();
    /* 0061b5ef: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061b5f2: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61b5f7u); f_007b999c();
    /* 0061b5f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b5f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061b5fb: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61b600u); f_007b4f54();
    /* 0061b600: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061b603: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061b605: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61b608u); call_ind(t); }
    /* 0061b608: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061b60b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b60e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061b611: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061b614: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b617: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061b61e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b621: ret 8 */ FN_RET(0x0061b530); r_esp += 12; return;
}

void f_0061b624(void) /* sub_61B624 */
{
    FN_ENTER(0x0061b624);
    /* 0061b624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b625: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b629: push 0x8e1c1c */ { u32 v = 0x8e1c1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b62e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061b634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061b63c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b63f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061b642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061b645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061b648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061b64b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b650: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061b657: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61b65cu); f_008581c5();
    /* 0061b65c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b65d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061b660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b662: je 0x61b870 */ if (fZ) goto L_0061b870;
L_0061b668:; BB(0x0061b668);
    /* 0061b668: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061b66f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b676: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b679: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b67b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b67c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b67d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b67e: push 0x9c5100 */ { u32 v = 0x9c5100u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b683: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b685: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61b68au); f_005b7a84();
    /* 0061b68a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b68d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061b694:; BB(0x0061b694);
    /* 0061b694: mov dword ptr [0xa8ebe0], eax */ W32((u32)(0xa8ebe0u), r_eax);
    /* 0061b699: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061b6a0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6a2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61b6a7u); f_008581c5();
    /* 0061b6a7: push 0x930a58 */ { u32 v = 0x930a58u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6ac: mov dword ptr [0xa8ebdc], eax */ W32((u32)(0xa8ebdcu), r_eax);
    /* 0061b6b1: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61b6b6u); f_008009dc();
    /* 0061b6b6: push 0x930a74 */ { u32 v = 0x930a74u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6bb: mov edx, dword ptr [0xa8ebdc] */ r_edx = R32((u32)(0xa8ebdcu));
    /* 0061b6c1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0061b6c3: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61b6c8u); f_008009dc();
    /* 0061b6c8: mov edx, dword ptr [0xa8ebdc] */ r_edx = R32((u32)(0xa8ebdcu));
    /* 0061b6ce: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b6d3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061b6d6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61b6dbu); f_008581c5();
    /* 0061b6db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b6de: mov edx, dword ptr [0xa8ebe0] */ r_edx = R32((u32)(0xa8ebe0u));
    /* 0061b6e4: mov dword ptr [0xa8ebe4], eax */ W32((u32)(0xa8ebe4u), r_eax);
    /* 0061b6e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b6eb: je 0x61b859 */ if (fZ) goto L_0061b859;
L_0061b6f1:; BB(0x0061b6f1);
    /* 0061b6f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b6f3: je 0x61b859 */ if (fZ) goto L_0061b859;
L_0061b6f9:; BB(0x0061b6f9);
    /* 0061b6f9: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0061b6ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0061b702: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0061b704: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0061b706: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0061b709: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0061b70c: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0061b70f: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0061b712: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0061b715: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0061b718: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0061b71b: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0061b71e: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0061b721: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0061b724: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0061b727: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0061b72a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0061b72d: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0061b730: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0061b733: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0061b736: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0061b739: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0061b73c: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0061b73f: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0061b742: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0061b745: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0061b748: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0061b74b: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0061b74e: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0061b751: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0061b754: mov eax, dword ptr [0xa8ebe4] */ r_eax = R32((u32)(0xa8ebe4u));
    /* 0061b759: or dword ptr [eax], 0x10 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0061b75c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b75e: mov ebx, dword ptr [0xa8ebe4] */ r_ebx = R32((u32)(0xa8ebe4u));
    /* 0061b764: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 0061b767: mov eax, dword ptr [0xa8ebe0] */ r_eax = R32((u32)(0xa8ebe0u));
    /* 0061b76c: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0061b772: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0061b775: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0061b778: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061b77a: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0061b77d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0061b780: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0061b783: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0061b786: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0061b789: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0061b78c: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 0061b78f: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0061b792: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 0061b795: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0061b798: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0061b79b: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0061b79e: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 0061b7a1: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0061b7a4: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 0061b7a7: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0061b7aa: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0061b7ad: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0061b7b0: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0061b7b3: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0061b7b6: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0061b7b9: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0061b7bc: mov edx, dword ptr [0xa8ebe4] */ r_edx = R32((u32)(0xa8ebe4u));
    /* 0061b7c2: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 0061b7c5: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0061b7c8: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 0061b7cb: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0061b7ce: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 0061b7d1: mov eax, dword ptr [0xa8ebe0] */ r_eax = R32((u32)(0xa8ebe0u));
    /* 0061b7d6: mov dword ptr [edx + 0x68], esi */ W32((u32)(r_edx+0x68u), r_esi);
    /* 0061b7d9: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0061b7df: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0061b7e2: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0061b7e5: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0061b7e8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061b7ea: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 0061b7ed: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061b7f0: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0061b7f3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061b7f6: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0061b7f9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0061b7fc: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0061b7ff: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0061b802: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0061b808: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0061b80b: mov dword ptr [edx + 0x84], ecx */ W32((u32)(r_edx+0x84u), r_ecx);
    /* 0061b811: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061b814: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 0061b81a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061b81d: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 0061b823: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0061b826: mov dword ptr [edx + 0x90], ecx */ W32((u32)(r_edx+0x90u), r_ecx);
    /* 0061b82c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0061b82f: mov dword ptr [edx + 0x94], ecx */ W32((u32)(r_edx+0x94u), r_ecx);
    /* 0061b835: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0061b838: mov dword ptr [edx + 0x98], ecx */ W32((u32)(r_edx+0x98u), r_ecx);
    /* 0061b83e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0061b841: mov dword ptr [edx + 0x9c], ecx */ W32((u32)(r_edx+0x9cu), r_ecx);
    /* 0061b847: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061b84a: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 0061b850: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0061b853: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
L_0061b859:; BB(0x0061b859);
    /* 0061b859: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061b85c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061b85f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061b862: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b865: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061b86c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b86e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b86f: ret  */ FN_RET(0x0061b624); r_esp += 4; return;
L_0061b870:; BB(0x0061b870);
    /* 0061b870: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b872: jmp 0x61b694 */ goto L_0061b694;
}

void f_0061b878(void) /* sub_61B878 */
{
    FN_ENTER(0x0061b878);
    /* 0061b878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b879: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061b87b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061b87d: call 0x61b89c */ r_esp -= 4; W32(r_esp, 0x61b882u); f_0061b89c();
    /* 0061b882: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061b886: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b888: jne 0x61b88e */ if (!fZ) goto L_0061b88e;
L_0061b88a:; BB(0x0061b88a);
    /* 0061b88a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061b88b: ret 4 */ FN_RET(0x0061b878); r_esp += 8; return;
L_0061b88e:; BB(0x0061b88e);
    /* 0061b88e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b88f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61b894u); f_005c2f74();
    /* 0061b894: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b895: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061b896: ret 4 */ FN_RET(0x0061b878); r_esp += 8; return;
}

void f_0061b89c(void) /* sub_61B89C */
{
    FN_ENTER(0x0061b89c);
    /* 0061b89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b89d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061b89f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061b8a1: push 0x8e1c38 */ { u32 v = 0x8e1c38u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b8a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061b8ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b8ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061b8b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061b8b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061b8ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061b8bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061b8c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061b8c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061b8c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061b8cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b8d0: mov dword ptr [eax], 0xb27140 */ W32((u32)(r_eax), 0xb27140u);
    /* 0061b8d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b8d7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61b8dcu); f_007b4e84();
    /* 0061b8dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061b8dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b8e0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61b8e5u); f_007b9c8c();
    /* 0061b8e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061b8ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b8ef: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61b8f4u); f_00619b10();
    /* 0061b8f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b8f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061b8fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b900: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b901: ret  */ FN_RET(0x0061b89c); r_esp += 4; return;
}

void f_0061b904(void) /* sub_61B904 */
{
    FN_ENTER(0x0061b904);
    /* 0061b904: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b905: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0061b907: mov eax, dword ptr [ebp + 0xd0] */ r_eax = R32((u32)(r_ebp+0xd0u));
    /* 0061b90d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061b90f: jne 0x61b91d */ if (!fZ) goto L_0061b91d;
L_0061b911:; BB(0x0061b911);
    /* 0061b911: mov eax, dword ptr [0xa8ebec] */ r_eax = R32((u32)(0xa8ebecu));
    /* 0061b916: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b918: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
L_0061b91b:; BB(0x0061b91b);
    /* 0061b91b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b91c: ret  */ FN_RET(0x0061b904); r_esp += 4; return;
L_0061b91d:; BB(0x0061b91d);
    /* 0061b91d: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b922: mov eax, dword ptr [0xa8ebec] */ r_eax = R32((u32)(0xa8ebecu));
    /* 0061b927: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061b92a: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 0061b92d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061b92f: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61b934u); f_006134c8();
    /* 0061b934: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061b937: jne 0x61b91b */ if (!fZ) goto L_0061b91b;
L_0061b939:; BB(0x0061b939);
    /* 0061b939: mov dword ptr [ebp + 0xac], 1 */ W32((u32)(r_ebp+0xacu), 0x1u);
    /* 0061b943: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b945: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061b947: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b949: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61b94eu); f_007b52c4();
    /* 0061b94e: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0061b951: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b955: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061b956: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b95b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61b960u); f_00814298();
    /* 0061b960: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061b963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b964: ret  */ FN_RET(0x0061b904); r_esp += 4; return;
}

void f_0061b968(void) /* sub_61B968 */
{
    FN_ENTER(0x0061b968);
    /* 0061b968: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b969: mov edi, ecx */ r_edi = r_ecx;
    /* 0061b96b: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061b971: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061b973: jne 0x61b9ab */ if (!fZ) goto L_0061b9ab;
L_0061b975:; BB(0x0061b975);
    /* 0061b975: mov eax, dword ptr [0xa8ebec] */ r_eax = R32((u32)(0xa8ebecu));
    /* 0061b97a: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061b984: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061b986: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061b989: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b98b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b98d: mov ecx, edi */ r_ecx = r_edi;
    /* 0061b98f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61b994u); f_007b52ec();
    /* 0061b994: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061b997: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b99b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b99c: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9a1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61b9a6u); f_00814298();
    /* 0061b9a6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0061b9a9:; BB(0x0061b9a9);
    /* 0061b9a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061b9aa: ret  */ FN_RET(0x0061b968); r_esp += 4; return;
L_0061b9ab:; BB(0x0061b9ab);
    /* 0061b9ab: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9b0: mov eax, dword ptr [0xa8ebec] */ r_eax = R32((u32)(0xa8ebecu));
    /* 0061b9b5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061b9b8: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061b9bb: mov ecx, edi */ r_ecx = r_edi;
    /* 0061b9bd: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61b9c2u); f_006134c8();
    /* 0061b9c2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061b9c5: je 0x61b9a9 */ if (fZ) goto L_0061b9a9;
L_0061b9c7:; BB(0x0061b9c7);
    /* 0061b9c7: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061b9d1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9d3: mov ecx, edi */ r_ecx = r_edi;
    /* 0061b9d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9d7: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61b9dcu); f_007b52ec();
    /* 0061b9dc: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061b9df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061b9e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9e4: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9e9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61b9eeu); f_00814298();
    /* 0061b9ee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061b9f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061b9f2: ret  */ FN_RET(0x0061b968); r_esp += 4; return;
}

void f_0061b9f4(void) /* sub_61B9F4 */
{
    FN_ENTER(0x0061b9f4);
    /* 0061b9f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061b9f5: mov esi, ecx */ r_esi = r_ecx;
    /* 0061b9f7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061b9f9: mov ecx, esi */ r_ecx = r_esi;
    /* 0061b9fb: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba00: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba05: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61ba08u); call_ind(t); }
    /* 0061ba08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ba0a: je 0x61ba6a */ if (fZ) goto L_0061ba6a;
L_0061ba0c:; BB(0x0061ba0c);
    /* 0061ba0c: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba11: mov ecx, esi */ r_ecx = r_esi;
    /* 0061ba13: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61ba18u); f_00613244();
    /* 0061ba18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ba1a: je 0x61ba6a */ if (fZ) goto L_0061ba6a;
L_0061ba1c:; BB(0x0061ba1c);
    /* 0061ba1c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ba21u); f_0082d7b0();
    /* 0061ba21: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061ba24: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61ba29u); f_0082d838();
    /* 0061ba29: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061ba2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ba2e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61ba33u); f_0082d8bc();
    /* 0061ba33: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0061ba36: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ba3bu); f_00829cc8();
    /* 0061ba3b: mov edx, dword ptr [esi + 0xbc] */ r_edx = R32((u32)(r_esi+0xbcu));
    /* 0061ba41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ba43: je 0x61ba6c */ if (fZ) goto L_0061ba6c;
L_0061ba45:; BB(0x0061ba45);
    /* 0061ba45: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0061ba4b: fcomp dword ptr [0x930aa0] */ fx_compare(ST(0), R_F32((u32)(0x930aa0u))); FPOP();
    /* 0061ba51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061ba53: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0061ba59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061ba5a: je 0x61ba6c */ if (fZ) goto L_0061ba6c;
L_0061ba5c:; BB(0x0061ba5c);
    /* 0061ba5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ba5d: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 0061ba60: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61ba65u); f_0083bd00();
L_0061ba65:; BB(0x0061ba65);
    /* 0061ba65: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61ba6au); f_0082da80();
L_0061ba6a:; BB(0x0061ba6a);
    /* 0061ba6a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061ba6b: ret  */ FN_RET(0x0061b9f4); r_esp += 4; return;
L_0061ba6c:; BB(0x0061ba6c);
    /* 0061ba6c: mov ecx, dword ptr [0xa8ebf4] */ r_ecx = R32((u32)(0xa8ebf4u));
    /* 0061ba72: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61ba77u); f_00831758();
    /* 0061ba77: mov ecx, dword ptr [0xa8ebf4] */ r_ecx = R32((u32)(0xa8ebf4u));
    /* 0061ba7d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ba80: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61ba85u); f_00831758();
    /* 0061ba85: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61ba8au); f_0082dbac();
    /* 0061ba8a: mov ecx, dword ptr [0xa8ebf4] */ r_ecx = R32((u32)(0xa8ebf4u));
    /* 0061ba90: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ba93: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x61ba98u); f_00831758();
    /* 0061ba98: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61ba9du); f_0082dab0();
    /* 0061ba9d: jmp 0x61ba65 */ goto L_0061ba65;
}

void f_0061baa0(void) /* sub_61BAA0 */
{
    FN_ENTER(0x0061baa0);
    /* 0061baa0: mov eax, dword ptr [0xa8ebf4] */ r_eax = R32((u32)(0xa8ebf4u));
    /* 0061baa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061baa7: je 0x61baba */ if (fZ) goto L_0061baba;
L_0061baa9:; BB(0x0061baa9);
    /* 0061baa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061baaa: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61baafu); f_00857e98();
    /* 0061baaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061bab0: mov dword ptr [0xa8ebf4], 0 */ W32((u32)(0xa8ebf4u), 0x0u);
L_0061baba:; BB(0x0061baba);
    /* 0061baba: mov eax, dword ptr [0xa8ebec] */ r_eax = R32((u32)(0xa8ebecu));
    /* 0061babf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061bac1: je 0x61baf4 */ if (fZ) goto L_0061baf4;
L_0061bac3:; BB(0x0061bac3);
    /* 0061bac3: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061bac6: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61bacbu); f_00800b5c();
    /* 0061bacb: mov eax, dword ptr [0xa8ebec] */ r_eax = R32((u32)(0xa8ebecu));
    /* 0061bad0: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0061bad2: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61bad7u); f_00800b5c();
    /* 0061bad7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bada: mov eax, dword ptr [0xa8ebec] */ r_eax = R32((u32)(0xa8ebecu));
    /* 0061badf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061bae1: je 0x61baf4 */ if (fZ) goto L_0061baf4;
L_0061bae3:; BB(0x0061bae3);
    /* 0061bae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bae4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61bae9u); f_00857e98();
    /* 0061bae9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061baea: mov dword ptr [0xa8ebec], 0 */ W32((u32)(0xa8ebecu), 0x0u);
L_0061baf4:; BB(0x0061baf4);
    /* 0061baf4: mov ecx, dword ptr [0xa8ebf0] */ r_ecx = R32((u32)(0xa8ebf0u));
    /* 0061bafa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061bafc: je 0x61bb11 */ if (fZ) goto L_0061bb11;
L_0061bafe:; BB(0x0061bafe);
    /* 0061bafe: je 0x61bb07 */ if (fZ) goto L_0061bb07;
L_0061bb00:; BB(0x0061bb00);
    /* 0061bb00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb02: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61bb07u); f_004066a8();
L_0061bb07:; BB(0x0061bb07);
    /* 0061bb07: mov dword ptr [0xa8ebf0], 0 */ W32((u32)(0xa8ebf0u), 0x0u);
L_0061bb11:; BB(0x0061bb11);
    /* 0061bb11: ret  */ FN_RET(0x0061baa0); r_esp += 4; return;
}

void f_0061bb14(void)
{
    FN_ENTER(0x0061bb14);
    /* 0061bb14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb15: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bb17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb19: push 0x8e1c60 */ { u32 v = 0x8e1c60u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061bb24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061bb2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bb2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061bb32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061bb35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061bb38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061bb3b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb40: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061bb47: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61bb4cu); f_005caba4();
    /* 0061bb4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061bb4d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061bb50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061bb52: je 0x61bb8b */ if (fZ) goto L_0061bb8b;
L_0061bb54:; BB(0x0061bb54);
    /* 0061bb54: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061bb5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061bb62: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061bb65: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061bb6b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bb6e: call 0x61bb90 */ r_esp -= 4; W32(r_esp, 0x61bb73u); f_0061bb90();
    /* 0061bb73: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bb76: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061bb7d:; BB(0x0061bb7d);
    /* 0061bb7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bb80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061bb87: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bb89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bb8a: ret  */ FN_RET(0x0061bb14); r_esp += 4; return;
L_0061bb8b:; BB(0x0061bb8b);
    /* 0061bb8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061bb8d: jmp 0x61bb7d */ goto L_0061bb7d;
}

void f_0061bb90(void) /* sub_61BB90 */
{
    FN_ENTER(0x0061bb90);
    /* 0061bb90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb91: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bb93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb95: push 0x8e1c7c */ { u32 v = 0x8e1c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061bb9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061bba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bba1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061bba8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bbab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061bbae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061bbb1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061bbb4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061bbb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061bbba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061bbbd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061bbc0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061bbc3: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61bbc8u); f_00619df0();
    /* 0061bbc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061bbcf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061bbd2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bbd5: mov dword ptr [ecx], 0xb27140 */ W32((u32)(r_ecx), 0xb27140u);
    /* 0061bbdb: mov eax, dword ptr [0x9c5110] */ r_eax = R32((u32)(0x9c5110u));
    /* 0061bbe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bbe1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061bbe4: call dword ptr [0xb27154] */ { u32 t = R32((u32)(0xb27154u)); r_esp -= 4; W32(r_esp, 0x61bbeau); call_ind(t); }
    /* 0061bbea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061bbed: mov edi, dword ptr [0xa8ebf0] */ r_edi = R32((u32)(0xa8ebf0u));
    /* 0061bbf3: mov ebx, dword ptr [0xa8ebec] */ r_ebx = R32((u32)(0xa8ebecu));
    /* 0061bbf9: fld dword ptr [0x930a98] */ FPUSH(R_F32((u32)(0x930a98u)));
    /* 0061bbff: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061bc05: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061bc08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc0a: push 0x9c5114 */ { u32 v = 0x9c5114u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc0f: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061bc12: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0061bc14: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061bc17: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061bc1d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061bc20: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061bc26: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061bc29: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061bc2c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061bc2f: fadd dword ptr [edx*4 + 0x930a90] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930a90u));
    /* 0061bc36: fadd dword ptr [0x930a9c] */ ST(0) = ST(0) + R_F32((u32)(0x930a9cu));
    /* 0061bc3c: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 0061bc42: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0061bc44: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 0061bc4a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61bc4fu); f_007b9a88();
    /* 0061bc4f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061bc52: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61bc57u); f_007b999c();
    /* 0061bc57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061bc58: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061bc5b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61bc60u); f_007b4f54();
    /* 0061bc60: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061bc63: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061bc65: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61bc68u); call_ind(t); }
    /* 0061bc68: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061bc6b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bc6e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061bc71: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061bc74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bc77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061bc7e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bc80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bc81: ret 8 */ FN_RET(0x0061bb90); r_esp += 12; return;
}

void f_0061bc84(void) /* sub_61BC84 */
{
    FN_ENTER(0x0061bc84);
    /* 0061bc84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc85: mov ebp, esp */ r_ebp = r_esp;
    /* 0061bc87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc89: push 0x8e1ca4 */ { u32 v = 0x8e1ca4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061bc94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bc95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061bc9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bc9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061bca2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061bca5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061bca8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061bcab: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcb0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061bcb7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61bcbcu); f_008581c5();
    /* 0061bcbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061bcbd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061bcc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061bcc2: je 0x61bed0 */ if (fZ) goto L_0061bed0;
L_0061bcc8:; BB(0x0061bcc8);
    /* 0061bcc8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061bccf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061bcd6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bcd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061bcdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bcde: push 0x9c5100 */ { u32 v = 0x9c5100u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bce3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bce5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61bceau); f_005b7a84();
    /* 0061bcea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bced: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061bcf4:; BB(0x0061bcf4);
    /* 0061bcf4: mov dword ptr [0xa8ebf0], eax */ W32((u32)(0xa8ebf0u), r_eax);
    /* 0061bcf9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061bd00: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd02: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61bd07u); f_008581c5();
    /* 0061bd07: push 0x930afc */ { u32 v = 0x930afcu; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd0c: mov dword ptr [0xa8ebec], eax */ W32((u32)(0xa8ebecu), r_eax);
    /* 0061bd11: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61bd16u); f_008009dc();
    /* 0061bd16: push 0x930b18 */ { u32 v = 0x930b18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd1b: mov edx, dword ptr [0xa8ebec] */ r_edx = R32((u32)(0xa8ebecu));
    /* 0061bd21: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0061bd23: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61bd28u); f_008009dc();
    /* 0061bd28: mov edx, dword ptr [0xa8ebec] */ r_edx = R32((u32)(0xa8ebecu));
    /* 0061bd2e: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bd33: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0061bd36: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61bd3bu); f_008581c5();
    /* 0061bd3b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061bd3e: mov edx, dword ptr [0xa8ebf0] */ r_edx = R32((u32)(0xa8ebf0u));
    /* 0061bd44: mov dword ptr [0xa8ebf4], eax */ W32((u32)(0xa8ebf4u), r_eax);
    /* 0061bd49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061bd4b: je 0x61beb9 */ if (fZ) goto L_0061beb9;
L_0061bd51:; BB(0x0061bd51);
    /* 0061bd51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061bd53: je 0x61beb9 */ if (fZ) goto L_0061beb9;
L_0061bd59:; BB(0x0061bd59);
    /* 0061bd59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0061bd5f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0061bd62: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0061bd64: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0061bd66: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0061bd69: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0061bd6c: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0061bd6f: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0061bd72: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0061bd75: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0061bd78: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0061bd7b: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0061bd7e: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0061bd81: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0061bd84: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0061bd87: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0061bd8a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0061bd8d: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0061bd90: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0061bd93: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0061bd96: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0061bd99: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0061bd9c: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0061bd9f: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0061bda2: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0061bda5: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0061bda8: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0061bdab: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0061bdae: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 0061bdb1: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0061bdb4: mov eax, dword ptr [0xa8ebf4] */ r_eax = R32((u32)(0xa8ebf4u));
    /* 0061bdb9: or dword ptr [eax], 0x10 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0061bdbc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061bdbe: mov ebx, dword ptr [0xa8ebf4] */ r_ebx = R32((u32)(0xa8ebf4u));
    /* 0061bdc4: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 0061bdc7: mov eax, dword ptr [0xa8ebf0] */ r_eax = R32((u32)(0xa8ebf0u));
    /* 0061bdcc: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0061bdd2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0061bdd5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0061bdd8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061bdda: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 0061bddd: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0061bde0: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0061bde3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0061bde6: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0061bde9: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0061bdec: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 0061bdef: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0061bdf2: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 0061bdf5: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0061bdf8: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0061bdfb: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0061bdfe: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 0061be01: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0061be04: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 0061be07: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0061be0a: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0061be0d: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0061be10: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0061be13: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0061be16: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0061be19: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0061be1c: mov edx, dword ptr [0xa8ebf4] */ r_edx = R32((u32)(0xa8ebf4u));
    /* 0061be22: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 0061be25: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0061be28: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 0061be2b: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0061be2e: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 0061be31: mov eax, dword ptr [0xa8ebf0] */ r_eax = R32((u32)(0xa8ebf0u));
    /* 0061be36: mov dword ptr [edx + 0x68], esi */ W32((u32)(r_edx+0x68u), r_esi);
    /* 0061be39: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0061be3f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0061be42: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0061be45: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0061be48: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0061be4a: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 0061be4d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061be50: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0061be53: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061be56: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0061be59: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0061be5c: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0061be5f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0061be62: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0061be68: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0061be6b: mov dword ptr [edx + 0x84], ecx */ W32((u32)(r_edx+0x84u), r_ecx);
    /* 0061be71: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061be74: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 0061be7a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0061be7d: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 0061be83: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0061be86: mov dword ptr [edx + 0x90], ecx */ W32((u32)(r_edx+0x90u), r_ecx);
    /* 0061be8c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0061be8f: mov dword ptr [edx + 0x94], ecx */ W32((u32)(r_edx+0x94u), r_ecx);
    /* 0061be95: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0061be98: mov dword ptr [edx + 0x98], ecx */ W32((u32)(r_edx+0x98u), r_ecx);
    /* 0061be9e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0061bea1: mov dword ptr [edx + 0x9c], ecx */ W32((u32)(r_edx+0x9cu), r_ecx);
    /* 0061bea7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061beaa: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 0061beb0: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0061beb3: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
L_0061beb9:; BB(0x0061beb9);
    /* 0061beb9: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061bebc: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061bebf: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061bec2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bec5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061becc: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061becf: ret  */ FN_RET(0x0061bc84); r_esp += 4; return;
L_0061bed0:; BB(0x0061bed0);
    /* 0061bed0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061bed2: jmp 0x61bcf4 */ goto L_0061bcf4;
}

void f_0061bed8(void) /* sub_61BED8 */
{
    FN_ENTER(0x0061bed8);
    /* 0061bed8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061bed9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061bedb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061bedd: call 0x61befc */ r_esp -= 4; W32(r_esp, 0x61bee2u); f_0061befc();
    /* 0061bee2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061bee6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061bee8: jne 0x61beee */ if (!fZ) goto L_0061beee;
L_0061beea:; BB(0x0061beea);
    /* 0061beea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061beeb: ret 4 */ FN_RET(0x0061bed8); r_esp += 8; return;
L_0061beee:; BB(0x0061beee);
    /* 0061beee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061beef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61bef4u); f_005c2f74();
    /* 0061bef4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061bef5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061bef6: ret 4 */ FN_RET(0x0061bed8); r_esp += 8; return;
}

void f_0061befc(void) /* sub_61BEFC */
{
    FN_ENTER(0x0061befc);
    /* 0061befc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061befd: mov ebp, esp */ r_ebp = r_esp;
    /* 0061beff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf01: push 0x8e1cc0 */ { u32 v = 0x8e1cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061bf0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061bf14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061bf17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061bf1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061bf1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061bf20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061bf23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061bf26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061bf2d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bf30: mov dword ptr [eax], 0xb27240 */ W32((u32)(r_eax), 0xb27240u);
    /* 0061bf36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf37: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61bf3cu); f_007b4e84();
    /* 0061bf3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061bf3d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bf40: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61bf45u); f_007b9c8c();
    /* 0061bf45: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061bf4c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061bf4f: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61bf54u); f_00619b10();
    /* 0061bf54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061bf57: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061bf5e: mov esp, ebp */ r_esp = r_ebp;
    /* 0061bf60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061bf61: ret  */ FN_RET(0x0061befc); r_esp += 4; return;
}

void f_0061bf64(void) /* sub_61BF64 */
{
    FN_ENTER(0x0061bf64);
    /* 0061bf64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf65: mov edi, ecx */ r_edi = r_ecx;
    /* 0061bf67: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061bf6d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061bf6f: jne 0x61bf73 */ if (!fZ) goto L_0061bf73;
L_0061bf71:; BB(0x0061bf71);
    /* 0061bf71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061bf72: ret  */ FN_RET(0x0061bf64); r_esp += 4; return;
L_0061bf73:; BB(0x0061bf73);
    /* 0061bf73: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf78: mov ecx, edi */ r_ecx = r_edi;
    /* 0061bf7a: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61bf7fu); f_006134c8();
    /* 0061bf7f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061bf82: jne 0x61bf71 */ if (!fZ) goto L_0061bf71;
L_0061bf84:; BB(0x0061bf84);
    /* 0061bf84: mov eax, dword ptr [0xa8ebfc] */ r_eax = R32((u32)(0xa8ebfcu));
    /* 0061bf89: mov dword ptr [edi + 0xac], 1 */ W32((u32)(r_edi+0xacu), 0x1u);
    /* 0061bf93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061bf95: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 0061bf98: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bf9c: mov ecx, edi */ r_ecx = r_edi;
    /* 0061bf9e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61bfa3u); f_007b52c4();
    /* 0061bfa3: mov dword ptr [edi + 0xe4], 1 */ W32((u32)(r_edi+0xe4u), 0x1u);
    /* 0061bfad: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x61bfb2u); f_00807ac0();
    /* 0061bfb2: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061bfb5: ja 0x61bf71 */ if ((!fC&&!fZ)) goto L_0061bf71;
L_0061bfb7:; BB(0x0061bfb7);
    /* 0061bfb7: mov eax, dword ptr [eax*4 + 0x930b40] */ r_eax = R32((u32)(r_eax*4+0x930b40u));
    /* 0061bfbe: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
}

void f_0061bf71(void)
{
    FN_ENTER(0x0061bf71);
    /* 0061bf71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061bf72: ret  */ FN_RET(0x0061bf71); r_esp += 4; return;
}

void f_0061bfc0(void)
{
    FN_ENTER(0x0061bfc0);
    /* 0061bfc0: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061bfc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061bfc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfc7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfc8: push 0x479 */ { u32 v = 0x479u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfcd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61bfd2u); f_00814298();
    /* 0061bfd2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061bfd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061bfd6: ret  */ FN_RET(0x0061bfc0); r_esp += 4; return;
}

void f_0061bfd7(void)
{
    FN_ENTER(0x0061bfd7);
    /* 0061bfd7: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061bfda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061bfdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfdf: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0061bfe4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61bfe9u); f_00814298();
    /* 0061bfe9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061bfec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061bfed: ret  */ FN_RET(0x0061bfd7); r_esp += 4; return;
}

void f_0061bfee(void)
{
    FN_ENTER(0x0061bfee);
    /* 0061bfee: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061bff1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061bff3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061bff5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061bff6: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061bffb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61c000u); f_00814298();
    /* 0061c000: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061c003: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061c004: ret  */ FN_RET(0x0061bfee); r_esp += 4; return;
}

