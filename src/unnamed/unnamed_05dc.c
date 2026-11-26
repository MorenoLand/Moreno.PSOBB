#include "protos.h"

void f_005dc1e0(void) /* sub_5DC1E0 */
{
    FN_ENTER(0x005dc1e0);
    /* 005dc1e0: mov byte ptr [ecx + 0xe], 0xe */ W8((u32)(r_ecx+0xeu), 0xeu);
    /* 005dc1e4: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 005dc1e9: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 005dc1ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dc1ef: mov word ptr [ecx + 0xa], dx */ W16((u32)(r_ecx+0xau), (u16)r_edx);
    /* 005dc1f3: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005dc1f7: mov word ptr [ecx + 6], dx */ W16((u32)(r_ecx+0x6u), (u16)r_edx);
    /* 005dc1fb: mov byte ptr [ecx + 0xd], dl */ W8((u32)(r_ecx+0xdu), (u8)r_edx);
    /* 005dc1fe: mov byte ptr [ecx + 0xc], dl */ W8((u32)(r_ecx+0xcu), (u8)r_edx);
    /* 005dc201: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005dc204: mov eax, 0x28 */ r_eax = 0x28u;
    /* 005dc209: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 005dc20d: ret  */ FN_RET(0x005dc1e0); r_esp += 4; return;
}

void f_005dc210(void) /* sub_5DC210 */
{
    FN_ENTER(0x005dc210);
    /* 005dc210: mov dword ptr [0xa8dac4], 0x3f800000 */ W32((u32)(0xa8dac4u), 0x3f800000u);
    /* 005dc21a: mov dword ptr [0xa8dac8], 0x41000000 */ W32((u32)(0xa8dac8u), 0x41000000u);
    /* 005dc224: mov dword ptr [0xa8dacc], 0x3fc00000 */ W32((u32)(0xa8daccu), 0x3fc00000u);
    /* 005dc22e: ret  */ FN_RET(0x005dc210); r_esp += 4; return;
}

void f_005dc230(void) /* sub_5DC230 */
{
    FN_ENTER(0x005dc230);
    /* 005dc230: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc231: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dc233: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dc235: call 0x5dc254 */ r_esp -= 4; W32(r_esp, 0x5dc23au); f_005dc254();
    /* 005dc23a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dc23e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dc240: jne 0x5dc246 */ if (!fZ) goto L_005dc246;
L_005dc242:; BB(0x005dc242);
    /* 005dc242: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc243: ret 4 */ FN_RET(0x005dc230); r_esp += 8; return;
L_005dc246:; BB(0x005dc246);
    /* 005dc246: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc247: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dc24cu); f_005c2f74();
    /* 005dc24c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc24d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc24e: ret 4 */ FN_RET(0x005dc230); r_esp += 8; return;
}

void f_005dc254(void) /* sub_5DC254 */
{
    FN_ENTER(0x005dc254);
    /* 005dc254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc255: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc257: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc259: push 0x8daa1a */ { u32 v = 0x8daa1au; r_esp -= 4; W32(r_esp, v); }
    /* 005dc25e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc265: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dc26c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc26f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dc272: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dc275: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dc278: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dc27b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dc27e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc281: mov dword ptr [eax], 0xb0d9a0 */ W32((u32)(r_eax), 0xb0d9a0u);
    /* 005dc287: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dc28a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc291: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc294: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5dc299u); f_008171e8();
    /* 005dc299: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc29c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc2a3: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc2a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc2a6: ret  */ FN_RET(0x005dc254); r_esp += 4; return;
}

void f_005dc2f0(void) /* sub_5DC2F0 */
{
    FN_ENTER(0x005dc2f0);
    /* 005dc2f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc2f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dc2f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dc2f5: call 0x5dc314 */ r_esp -= 4; W32(r_esp, 0x5dc2fau); f_005dc314();
    /* 005dc2fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dc2fe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dc300: jne 0x5dc306 */ if (!fZ) goto L_005dc306;
L_005dc302:; BB(0x005dc302);
    /* 005dc302: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc303: ret 4 */ FN_RET(0x005dc2f0); r_esp += 8; return;
L_005dc306:; BB(0x005dc306);
    /* 005dc306: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc307: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dc30cu); f_005c2f74();
    /* 005dc30c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc30d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc30e: ret 4 */ FN_RET(0x005dc2f0); r_esp += 8; return;
}

void f_005dc314(void) /* sub_5DC314 */
{
    FN_ENTER(0x005dc314);
    /* 005dc314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc315: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc317: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc319: push 0x8daa50 */ { u32 v = 0x8daa50u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc31e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dc324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc325: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dc32c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc32f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dc332: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dc335: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dc338: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dc33b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dc33e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc345: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc348: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dc34b: mov dword ptr [eax], 0xb0d9b0 */ W32((u32)(r_eax), 0xb0d9b0u);
    /* 005dc351: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5dc356u); f_005cdcc0();
    /* 005dc356: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc357: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc35a: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005dc35d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc35f: je 0x5dc36d */ if (fZ) goto L_005dc36d;
L_005dc361:; BB(0x005dc361);
    /* 005dc361: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc364: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005dc367: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dc36a: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
L_005dc36d:; BB(0x005dc36d);
    /* 005dc36d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc374: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5dc379u); f_008171e8();
    /* 005dc379: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc37c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc383: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc385: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc386: ret  */ FN_RET(0x005dc314); r_esp += 4; return;
}

void f_005dc388(void) /* sub_5DC388 */
{
    FN_ENTER(0x005dc388);
    /* 005dc388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc389: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc38c: mov ebp, dword ptr [0xa8daf0] */ r_ebp = R32((u32)(0xa8daf0u));
    /* 005dc392: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc394: je 0x5dc57e */ if (fZ) goto L_005dc57e;
L_005dc39a:; BB(0x005dc39a);
    /* 005dc39a: mov eax, dword ptr [0xa8daec] */ r_eax = R32((u32)(0xa8daecu));
    /* 005dc39f: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 005dc3a3: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 005dc3a7: lea ecx, [ebp + 0xe0] */ r_ecx = (u32)(r_ebp+0xe0u);
    /* 005dc3ad: lea edx, [ebp + 0xf0] */ r_edx = (u32)(r_ebp+0xf0u);
    /* 005dc3b3: mov esi, edx */ r_esi = r_edx;
    /* 005dc3b5: mov edi, ecx */ r_edi = r_ecx;
L_005dc3b7:; BB(0x005dc3b7);
    /* 005dc3b7: movsx edx, byte ptr [edi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005dc3ba: mov ecx, edx */ r_ecx = r_edx;
    /* 005dc3bc: and ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc3c2: cmp ecx, 0xe0 */ {  u32 a = r_ecx; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc3c8: je 0x5dc4c4 */ if (fZ) goto L_005dc4c4;
L_005dc3ce:; BB(0x005dc3ce);
    /* 005dc3ce: mov ecx, edx */ r_ecx = r_edx;
    /* 005dc3d0: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc3d3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc3d5: jne 0x5dc4c4 */ if (!fZ) goto L_005dc4c4;
L_005dc3db:; BB(0x005dc3db);
    /* 005dc3db: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc3de: je 0x5dc429 */ if (fZ) goto L_005dc429;
L_005dc3e0:; BB(0x005dc3e0);
    /* 005dc3e0: movsx eax, word ptr [edi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 005dc3e4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005dc3e7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005dc3ea: fmul dword ptr [0x92cc64] */ ST(0) = ST(0) * R_F32((u32)(0x92cc64u));
    /* 005dc3f0: fdiv dword ptr [0x92cc60] */ ST(0) = ST(0) / R_F32((u32)(0x92cc60u));
    /* 005dc3f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc3f8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005dc3fc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005dc401: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc406: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005dc40a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005dc40e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dc412: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005dc416: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005dc41a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5dc41fu); f_0082e9e4();
    /* 005dc41f: mov eax, dword ptr [0xa8daec] */ r_eax = R32((u32)(0xa8daecu));
    /* 005dc424: jmp 0x5dc4c4 */ goto L_005dc4c4;
L_005dc429:; BB(0x005dc429);
    /* 005dc429: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc42c: je 0x5dc476 */ if (fZ) goto L_005dc476;
L_005dc42e:; BB(0x005dc42e);
    /* 005dc42e: movsx eax, word ptr [edi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 005dc432: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005dc436: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005dc43a: fmul dword ptr [0x92cc64] */ ST(0) = ST(0) * R_F32((u32)(0x92cc64u));
    /* 005dc440: fdiv dword ptr [0x92cc60] */ ST(0) = ST(0) / R_F32((u32)(0x92cc60u));
    /* 005dc446: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc448: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005dc44c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005dc451: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc456: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005dc45a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005dc45e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dc462: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005dc466: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005dc46a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5dc46fu); f_0082d8bc();
    /* 005dc46f: mov eax, dword ptr [0xa8daec] */ r_eax = R32((u32)(0xa8daecu));
    /* 005dc474: jmp 0x5dc4c4 */ goto L_005dc4c4;
L_005dc476:; BB(0x005dc476);
    /* 005dc476: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc47c: je 0x5dc4c4 */ if (fZ) goto L_005dc4c4;
L_005dc47e:; BB(0x005dc47e);
    /* 005dc47e: movsx eax, word ptr [edi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 005dc482: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005dc486: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005dc48a: fmul dword ptr [0x92cc64] */ ST(0) = ST(0) * R_F32((u32)(0x92cc64u));
    /* 005dc490: fdiv dword ptr [0x92cc60] */ ST(0) = ST(0) / R_F32((u32)(0x92cc60u));
    /* 005dc496: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc498: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005dc49c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005dc4a1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc4a6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005dc4aa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005dc4ae: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dc4b2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005dc4b6: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005dc4ba: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5dc4bfu); f_00830c04();
    /* 005dc4bf: mov eax, dword ptr [0xa8daec] */ r_eax = R32((u32)(0xa8daecu));
L_005dc4c4:; BB(0x005dc4c4);
    /* 005dc4c4: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005dc4c7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005dc4c9: ja 0x5dc3b7 */ if ((!fC&&!fZ)) goto L_005dc3b7;
L_005dc4cf:; BB(0x005dc4cf);
    /* 005dc4cf: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 005dc4d3: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 005dc4d7: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 005dc4da: cmp eax, dword ptr [ebp + ecx*4 + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0x70u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc4de: jne 0x5dc525 */ if (!fZ) goto L_005dc525;
L_005dc4e0:; BB(0x005dc4e0);
    /* 005dc4e0: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 005dc4e3: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc4e6: jne 0x5dc518 */ if (!fZ) goto L_005dc518;
L_005dc4e8:; BB(0x005dc4e8);
    /* 005dc4e8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005dc4ed: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc4f0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005dc4f5: lea edx, [ebp + 0xcc] */ r_edx = (u32)(r_ebp+0xccu);
    /* 005dc4fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc4fc: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5dc501u); f_0082d710();
    /* 005dc501: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc502: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5dc507u); f_0082dbac();
    /* 005dc507: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 005dc50a: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 005dc50d: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc510: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 005dc513: mov eax, dword ptr [0xa8daec] */ r_eax = R32((u32)(0xa8daecu));
L_005dc518:; BB(0x005dc518);
    /* 005dc518: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc51b: je 0x5dc576 */ if (fZ) goto L_005dc576;
L_005dc51d:; BB(0x005dc51d);
    /* 005dc51d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc520: mov dword ptr [ebp + 0x6c], ecx */ W32((u32)(r_ebp+0x6cu), r_ecx);
    /* 005dc523: jmp 0x5dc576 */ goto L_005dc576;
L_005dc525:; BB(0x005dc525);
    /* 005dc525: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 005dc528: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc52b: je 0x5dc576 */ if (fZ) goto L_005dc576;
L_005dc52d:; BB(0x005dc52d);
    /* 005dc52d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5dc532u); f_0082dab0();
    /* 005dc532: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005dc537: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005dc53d: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005dc543: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005dc548: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 005dc54d: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005dc553: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005dc559: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 005dc55e: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005dc563: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005dc568: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 005dc56b: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dc56e: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 005dc571: mov eax, dword ptr [0xa8daec] */ r_eax = R32((u32)(0xa8daecu));
L_005dc576:; BB(0x005dc576);
    /* 005dc576: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dc579: mov dword ptr [0xa8daec], eax */ W32((u32)(0xa8daecu), r_eax);
L_005dc57e:; BB(0x005dc57e);
    /* 005dc57e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dc581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc582: ret  */ FN_RET(0x005dc388); r_esp += 4; return;
}

void f_005dc584(void) /* sub_5DC584 */
{
    FN_ENTER(0x005dc584);
    /* 005dc584: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dc588: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005dc58c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005dc590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc591: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc592: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc595: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dc597: mov ebp, eax */ r_ebp = r_eax;
    /* 005dc599: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005dc59d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005dc59f: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc5a1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005dc5a3: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005dc5a7: movsx edx, byte ptr [edx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 005dc5aa: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005dc5ad: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005dc5b0: fmul dword ptr [0x92cc54] */ ST(0) = ST(0) * R_F32((u32)(0x92cc54u));
    /* 005dc5b6: fdiv dword ptr [0x92cc50] */ ST(0) = ST(0) / R_F32((u32)(0x92cc50u));
    /* 005dc5bc: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005dc5c0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005dc5c5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc5ca: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005dc5ce: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005dc5d2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dc5d6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005dc5da: add ecx, dword ptr [esp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc5de: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5dc5e3u); f_0082dcbc();
    /* 005dc5e3: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005dc5e5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005dc5e7: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 005dc5ea: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 005dc5ed: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dc5f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc5f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc5f2: ret  */ FN_RET(0x005dc584); r_esp += 4; return;
}

void f_005dc590(void)
{
    FN_ENTER(0x005dc590);
    /* 005dc590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc591: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc592: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc595: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dc597: mov ebp, eax */ r_ebp = r_eax;
    /* 005dc599: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005dc59d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005dc59f: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc5a1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005dc5a3: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 005dc5a7: movsx edx, byte ptr [edx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 005dc5aa: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005dc5ad: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005dc5b0: fmul dword ptr [0x92cc54] */ ST(0) = ST(0) * R_F32((u32)(0x92cc54u));
    /* 005dc5b6: fdiv dword ptr [0x92cc50] */ ST(0) = ST(0) / R_F32((u32)(0x92cc50u));
    /* 005dc5bc: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005dc5c0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005dc5c5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc5ca: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005dc5ce: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005dc5d2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dc5d6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005dc5da: add ecx, dword ptr [esp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc5de: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5dc5e3u); f_0082dcbc();
    /* 005dc5e3: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005dc5e5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005dc5e7: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 005dc5ea: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 005dc5ed: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dc5f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc5f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc5f2: ret  */ FN_RET(0x005dc590); r_esp += 4; return;
}

void f_005dc600(void) /* sub_5DC600 */
{
    FN_ENTER(0x005dc600);
    /* 005dc600: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dc601: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc602: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dc604: mov edi, eax */ r_edi = r_eax;
    /* 005dc606: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005dc608: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc60b: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005dc60d: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc610: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5dc615u); f_0082dcbc();
    /* 005dc615: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 005dc618: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005dc61a: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 005dc61c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc61d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dc61e: ret  */ FN_RET(0x005dc600); r_esp += 4; return;
}

void f_005dc62c(void) /* sub_5DC62C */
{
    FN_ENTER(0x005dc62c);
    /* 005dc62c: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005dc62e: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 005dc630: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005dc632: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 005dc634: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dc636: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 005dc639: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005dc63c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005dc63e: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 005dc640: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005dc643: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005dc645: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 005dc647: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dc649: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 005dc64c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 005dc64f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 005dc651: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 005dc653: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dc655: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 005dc658: ret  */ FN_RET(0x005dc62c); r_esp += 4; return;
}

void f_005dc65c(void) /* sub_5DC65C */
{
    FN_ENTER(0x005dc65c);
    /* 005dc65c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dc65d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dc65e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc65f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dc661: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005dc665: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 005dc669: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dc66b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dc66c: call 0x5cab88 */ r_esp -= 4; W32(r_esp, 0x5dc671u); f_005cab88();
    /* 005dc671: mov dword ptr [ebx], 0xb0d9a0 */ W32((u32)(r_ebx), 0xb0d9a0u);
    /* 005dc677: mov eax, dword ptr [0x9c27c0] */ r_eax = R32((u32)(0x9c27c0u));
    /* 005dc67c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005dc67f: mov dword ptr [ebx + 0x20], esi */ W32((u32)(r_ebx+0x20u), r_esi);
    /* 005dc682: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005dc684: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 005dc687: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 005dc68a: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 005dc68d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dc68f: call 0x5dc750 */ r_esp -= 4; W32(r_esp, 0x5dc694u); f_005dc750();
    /* 005dc694: mov dword ptr [ebx + 0x64], 0 */ W32((u32)(r_ebx+0x64u), 0x0u);
    /* 005dc69b: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
    /* 005dc69e: mov dword ptr [ebx + 0x8c], 0 */ W32((u32)(r_ebx+0x8cu), 0x0u);
    /* 005dc6a8: mov dword ptr [ebx + 0x90], 0 */ W32((u32)(r_ebx+0x90u), 0x0u);
    /* 005dc6b2: mov dword ptr [ebx + 0x94], 0x3f800000 */ W32((u32)(r_ebx+0x94u), 0x3f800000u);
    /* 005dc6bc: mov dword ptr [ebx + 0x98], 0 */ W32((u32)(r_ebx+0x98u), 0x0u);
    /* 005dc6c6: mov dword ptr [ebx + 0x88], 0 */ W32((u32)(r_ebx+0x88u), 0x0u);
    /* 005dc6d0: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005dc6d7: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc6da: jne 0x5dc6e7 */ if (!fZ) goto L_005dc6e7;
L_005dc6dc:; BB(0x005dc6dc);
    /* 005dc6dc: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005dc6e1: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
L_005dc6e7:; BB(0x005dc6e7);
    /* 005dc6e7: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005dc6ec: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 005dc6ef: mov dword ptr [ebx + 0x74], edx */ W32((u32)(r_ebx+0x74u), r_edx);
    /* 005dc6f2: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005dc6f5: mov dword ptr [ebx + 0x7c], edx */ W32((u32)(r_ebx+0x7cu), r_edx);
    /* 005dc6f8: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
    /* 005dc6fe: mov dword ptr [ebx + 0x84], edx */ W32((u32)(r_ebx+0x84u), r_edx);
    /* 005dc704: fld dword ptr [esi + 0x97c] */ FPUSH(R_F32((u32)(r_esi+0x97cu)));
    /* 005dc70a: fcom qword ptr [0x92cbf8] */ fx_compare(ST(0), R_F64((u32)(0x92cbf8u))); 
    /* 005dc710: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dc712: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dc713: jbe 0x5dc72b */ if ((fC||fZ)) goto L_005dc72b;
L_005dc715:; BB(0x005dc715);
    /* 005dc715: fld dword ptr [0x92cc40] */ FPUSH(R_F32((u32)(0x92cc40u)));
    /* 005dc71b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005dc71d: fadd dword ptr [0x92cc44] */ ST(0) = ST(0) + R_F32((u32)(0x92cc44u));
    /* 005dc723: fstp dword ptr [ebx + 0xdc] */ W_F32((u32)(r_ebx+0xdcu), ST(0)); FPOP();
    /* 005dc729: jmp 0x5dc738 */ goto L_005dc738;
L_005dc72b:; BB(0x005dc72b);
    /* 005dc72b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dc72d: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005dc732: mov dword ptr [ebx + 0xdc], eax */ W32((u32)(r_ebx+0xdcu), r_eax);
L_005dc738:; BB(0x005dc738);
    /* 005dc738: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005dc73c: or edx, 0xffff0110 */ {  u32 a = r_edx; u32 b = 0xffff0110u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dc742: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 005dc746: mov eax, ebx */ r_eax = r_ebx;
    /* 005dc748: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc749: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dc74a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dc74b: ret 8 */ FN_RET(0x005dc65c); r_esp += 12; return;
}

void f_005dc750(void) /* sub_5DC750 */
{
    FN_ENTER(0x005dc750);
    /* 005dc750: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 005dc753: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 005dc759: mov dword ptr [ecx + 0xc0], edx */ W32((u32)(r_ecx+0xc0u), r_edx);
    /* 005dc75f: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 005dc765: mov dword ptr [ecx + 0xc4], edx */ W32((u32)(r_ecx+0xc4u), r_edx);
    /* 005dc76b: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005dc771: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 005dc77b: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 005dc781: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 005dc78b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dc78d: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005dc790: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 005dc793: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 005dc79d: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 005dc7a0: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005dc7a3: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 005dc7a6: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 005dc7a9: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 005dc7ac: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005dc7af: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 005dc7b2: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 005dc7b5: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 005dc7b8: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 005dc7bb: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005dc7be: ret  */ FN_RET(0x005dc750); r_esp += 4; return;
}

void f_005dc7c0(void) /* sub_5DC7C0 */
{
    FN_ENTER(0x005dc7c0);
    /* 005dc7c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7c3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc7c6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dc7c8: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 005dc7cb: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc7d0: je 0x5dc7e6 */ if (fZ) goto L_005dc7e6;
L_005dc7d2:; BB(0x005dc7d2);
    /* 005dc7d2: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005dc7d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc7db: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005dc7df: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dc7e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc7e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dc7e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dc7e5: ret  */ FN_RET(0x005dc7c0); r_esp += 4; return;
L_005dc7e6:; BB(0x005dc7e6);
    /* 005dc7e6: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 005dc7e9: call 0x5db444 */ r_esp -= 4; W32(r_esp, 0x5dc7eeu); f_005db444();
    /* 005dc7ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc7f0: jne 0x5dc800 */ if (!fZ) goto L_005dc800;
L_005dc7f2:; BB(0x005dc7f2);
    /* 005dc7f2: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 005dc7f5: mov edx, dword ptr [eax + 0x1b0] */ r_edx = R32((u32)(r_eax+0x1b0u));
    /* 005dc7fb: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc7fe: je 0x5dc807 */ if (fZ) goto L_005dc807;
L_005dc800:; BB(0x005dc800);
    /* 005dc800: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dc803: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc804: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dc805: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dc806: ret  */ FN_RET(0x005dc7c0); r_esp += 4; return;
L_005dc807:; BB(0x005dc807);
    /* 005dc807: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 005dc80a: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005dc811: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc814: jne 0x5dc824 */ if (!fZ) goto L_005dc824;
L_005dc816:; BB(0x005dc816);
    /* 005dc816: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dc818: call 0x5dcec0 */ r_esp -= 4; W32(r_esp, 0x5dc81du); f_005dcec0();
    /* 005dc81d: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dc820: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dc821: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dc822: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dc823: ret  */ FN_RET(0x005dc7c0); r_esp += 4; return;
L_005dc824:; BB(0x005dc824);
    /* 005dc824: mov eax, dword ptr [ecx + 0x6fc] */ r_eax = R32((u32)(r_ecx+0x6fcu));
    /* 005dc82a: mov dword ptr [ebx + 0xcc], eax */ W32((u32)(r_ebx+0xccu), r_eax);
    /* 005dc830: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 005dc833: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc835: je 0x5dc843 */ if (fZ) goto L_005dc843;
L_005dc837:; BB(0x005dc837);
    /* 005dc837: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dc839: call 0x5dcbd4 */ r_esp -= 4; W32(r_esp, 0x5dc83eu); f_005dcbd4();
    /* 005dc83e: jmp 0x5dcab1 */ goto L_005dcab1;
L_005dc843:; BB(0x005dc843);
    /* 005dc843: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005dc846: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc848: je 0x5dca97 */ if (fZ) goto L_005dca97;
L_005dc84e:; BB(0x005dc84e);
    /* 005dc84e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005dc850: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc853: jne 0x5dc875 */ if (!fZ) goto L_005dc875;
L_005dc855:; BB(0x005dc855);
    /* 005dc855: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 005dc85b: mov esi, dword ptr [ecx + 0x304] */ r_esi = R32((u32)(r_ecx+0x304u));
    /* 005dc861: mov edi, dword ptr [ecx + 0x308] */ r_edi = R32((u32)(r_ecx+0x308u));
    /* 005dc867: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005dc86b: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 005dc86f: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 005dc873: jmp 0x5dc886 */ goto L_005dc886;
L_005dc875:; BB(0x005dc875);
    /* 005dc875: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005dc879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc87a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc87b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005dc87d: call dword ptr [esi + 0x10c] */ { u32 t = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, 0x5dc883u); call_ind(t); }
    /* 005dc883: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
L_005dc886:; BB(0x005dc886);
    /* 005dc886: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc888: je 0x5dc8aa */ if (fZ) goto L_005dc8aa;
L_005dc88a:; BB(0x005dc88a);
    /* 005dc88a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005dc88e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005dc892: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005dc896: mov dword ptr [ebx + 0xb4], eax */ W32((u32)(r_ebx+0xb4u), r_eax);
    /* 005dc89c: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 005dc8a2: mov dword ptr [ebx + 0xbc], esi */ W32((u32)(r_ebx+0xbcu), r_esi);
    /* 005dc8a8: jmp 0x5dc8d9 */ goto L_005dc8d9;
L_005dc8aa:; BB(0x005dc8aa);
    /* 005dc8aa: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dc8ac: je 0x5dc8c4 */ if (fZ) goto L_005dc8c4;
L_005dc8ae:; BB(0x005dc8ae);
    /* 005dc8ae: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005dc8b2: lea edx, [ebx + 0xb4] */ r_edx = (u32)(r_ebx+0xb4u);
    /* 005dc8b8: mov ecx, 0x9c27cc */ r_ecx = 0x9c27ccu;
    /* 005dc8bd: call 0x5dc62c */ r_esp -= 4; W32(r_esp, 0x5dc8c2u); f_005dc62c();
    /* 005dc8c2: jmp 0x5dc8d9 */ goto L_005dc8d9;
L_005dc8c4:; BB(0x005dc8c4);
    /* 005dc8c4: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005dc8c8: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dc8cb: lea edx, [ebx + 0xb4] */ r_edx = (u32)(r_ebx+0xb4u);
    /* 005dc8d1: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc8d4: call 0x5dc62c */ r_esp -= 4; W32(r_esp, 0x5dc8d9u); f_005dc62c();
L_005dc8d9:; BB(0x005dc8d9);
    /* 005dc8d9: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dc8dc: lea eax, [ebx + 0xc0] */ r_eax = (u32)(r_ebx+0xc0u);
    /* 005dc8e2: lea edx, [ebx + 0x4c] */ r_edx = (u32)(r_ebx+0x4cu);
    /* 005dc8e5: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc8e8: call 0x5dc600 */ r_esp -= 4; W32(r_esp, 0x5dc8edu); f_005dc600();
    /* 005dc8ed: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dc8f0: lea eax, [ebx + 0xc4] */ r_eax = (u32)(r_ebx+0xc4u);
    /* 005dc8f6: lea edx, [ebx + 0x50] */ r_edx = (u32)(r_ebx+0x50u);
    /* 005dc8f9: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc8fc: call 0x5dc600 */ r_esp -= 4; W32(r_esp, 0x5dc901u); f_005dc600();
    /* 005dc901: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dc904: lea eax, [ebx + 0xc8] */ r_eax = (u32)(r_ebx+0xc8u);
    /* 005dc90a: lea edx, [ebx + 0x54] */ r_edx = (u32)(r_ebx+0x54u);
    /* 005dc90d: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc910: call 0x5dc600 */ r_esp -= 4; W32(r_esp, 0x5dc915u); f_005dc600();
    /* 005dc915: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 005dc918: lea eax, [ebx + 0xa8] */ r_eax = (u32)(r_ebx+0xa8u);
    /* 005dc91e: lea edx, [ebx + 0x58] */ r_edx = (u32)(r_ebx+0x58u);
    /* 005dc921: lea ecx, [edi + 0x10] */ r_ecx = (u32)(r_edi+0x10u);
    /* 005dc924: lea esi, [edi + 0x28] */ r_esi = (u32)(r_edi+0x28u);
    /* 005dc927: add edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005dc92a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005dc92e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005dc932: call 0x5dc590 */ r_esp -= 4; W32(r_esp, 0x5dc937u); f_005dc590();
    /* 005dc937: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 005dc93a: lea eax, [ebx + 0xac] */ r_eax = (u32)(r_ebx+0xacu);
    /* 005dc940: lea edx, [ebx + 0x5c] */ r_edx = (u32)(r_ebx+0x5cu);
    /* 005dc943: lea ecx, [edi + 0x14] */ r_ecx = (u32)(r_edi+0x14u);
    /* 005dc946: lea esi, [edi + 0x2c] */ r_esi = (u32)(r_edi+0x2cu);
    /* 005dc949: add edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005dc94c: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005dc950: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005dc954: call 0x5dc590 */ r_esp -= 4; W32(r_esp, 0x5dc959u); f_005dc590();
    /* 005dc959: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 005dc95c: lea eax, [ebx + 0xb0] */ r_eax = (u32)(r_ebx+0xb0u);
    /* 005dc962: lea edx, [ebx + 0x60] */ r_edx = (u32)(r_ebx+0x60u);
    /* 005dc965: lea ecx, [edi + 0x18] */ r_ecx = (u32)(r_edi+0x18u);
    /* 005dc968: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 005dc96b: add edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005dc96e: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 005dc972: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005dc976: call 0x5dc590 */ r_esp -= 4; W32(r_esp, 0x5dc97bu); f_005dc590();
    /* 005dc97b: lea ecx, [ebx + 0xc0] */ r_ecx = (u32)(r_ebx+0xc0u);
    /* 005dc981: lea edx, [ebx + 0xa8] */ r_edx = (u32)(r_ebx+0xa8u);
    /* 005dc987: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5dc98cu); f_0082ebac();
    /* 005dc98c: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 005dc98f: call 0x5db764 */ r_esp -= 4; W32(r_esp, 0x5dc994u); f_005db764();
    /* 005dc994: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc996: je 0x5dc9de */ if (fZ) goto L_005dc9de;
L_005dc998:; BB(0x005dc998);
    /* 005dc998: fld dword ptr [0x92cc38] */ FPUSH(R_F32((u32)(0x92cc38u)));
    /* 005dc99e: fld dword ptr [0x92cc34] */ FPUSH(R_F32((u32)(0x92cc34u)));
    /* 005dc9a4: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005dc9a7: movzx eax, byte ptr [edx + 0xc] */ r_eax = (u32)R8((u32)(r_edx+0xcu));
    /* 005dc9ab: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005dc9af: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005dc9b3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005dc9b5: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005dc9b7: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dc9bb: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dc9c0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dc9c5: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dc9c9: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dc9cd: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dc9d1: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dc9d5: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005dc9d9: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 005dc9dc: jmp 0x5dc9f6 */ goto L_005dc9f6;
L_005dc9de:; BB(0x005dc9de);
    /* 005dc9de: fld dword ptr [0x92cc38] */ FPUSH(R_F32((u32)(0x92cc38u)));
    /* 005dc9e4: fld dword ptr [0x92cc34] */ FPUSH(R_F32((u32)(0x92cc34u)));
    /* 005dc9ea: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005dc9ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc9ef: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_005dc9f6:; BB(0x005dc9f6);
    /* 005dc9f6: movsx esi, byte ptr [edx + 5] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+0x5u));
    /* 005dc9fa: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 005dc9fe: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 005dca02: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005dca04: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005dca06: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dca0a: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dca0f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dca14: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dca18: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dca1c: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dca20: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dca24: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 005dca28: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dca2a: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 005dca2d: movsx eax, byte ptr [edx + 6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6u));
    /* 005dca31: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 005dca35: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 005dca39: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005dca3b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005dca3d: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dca41: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dca46: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dca4b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dca4f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dca53: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dca57: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dca5b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005dca5f: add dword ptr [ebx + 0x38], eax */ { u32 ad = (u32)(r_ebx+0x38u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005dca62: movsx edx, byte ptr [edx + 7] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x7u));
    /* 005dca66: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005dca6a: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 005dca6e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005dca70: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005dca72: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dca76: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dca7b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dca80: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dca84: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dca88: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dca8c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dca90: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005dca94: add dword ptr [ebx + 0x3c], eax */ { u32 ad = (u32)(r_ebx+0x3cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005dca97:; BB(0x005dca97);
    /* 005dca97: lea edi, [ebx + 0xe0] */ r_edi = (u32)(r_ebx+0xe0u);
    /* 005dca9d: lea esi, [ebx + 0xf0] */ r_esi = (u32)(r_ebx+0xf0u);
L_005dcaa3:; BB(0x005dcaa3);
    /* 005dcaa3: mov ecx, edi */ r_ecx = r_edi;
    /* 005dcaa5: call 0x5dbb48 */ r_esp -= 4; W32(r_esp, 0x5dcaaau); f_005dbb48();
    /* 005dcaaa: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005dcaad: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcaaf: jg 0x5dcaa3 */ if ((!fZ&&fS==fO)) goto L_005dcaa3;
L_005dcab1:; BB(0x005dcab1);
    /* 005dcab1: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 005dcab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcab6: je 0x5dcb8b */ if (fZ) goto L_005dcb8b;
L_005dcabc:; BB(0x005dcabc);
    /* 005dcabc: fld dword ptr [0x92cc30] */ FPUSH(R_F32((u32)(0x92cc30u)));
    /* 005dcac2: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 005dcac8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005dcaca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcacc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcacd: jbe 0x5dcb2c */ if ((fC||fZ)) goto L_005dcb2c;
L_005dcacf:; BB(0x005dcacf);
    /* 005dcacf: fld dword ptr [ebx + 0x90] */ FPUSH(R_F32((u32)(r_ebx+0x90u)));
    /* 005dcad5: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005dcad7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005dcad9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcadb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcadd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcade: je 0x5dcb92 */ if (fZ) goto L_005dcb92;
L_005dcae4:; BB(0x005dcae4);
    /* 005dcae4: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 005dcaea: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005dcaec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcaee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcaef: jbe 0x5dcaf9 */ if ((fC||fZ)) goto L_005dcaf9;
L_005dcaf1:; BB(0x005dcaf1);
    /* 005dcaf1: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005dcaf3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005dcaf5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005dcaf7: jmp 0x5dcb06 */ goto L_005dcb06;
L_005dcaf9:; BB(0x005dcaf9);
    /* 005dcaf9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 005dcafb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005dcafd: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005dcaff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcb01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcb02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005dcb04: jbe 0x5dcb10 */ if ((fC||fZ)) goto L_005dcb10;
L_005dcb06:; BB(0x005dcb06);
    /* 005dcb06: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcb08: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 005dcb0e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
L_005dcb10:; BB(0x005dcb10);
    /* 005dcb10: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005dcb12: fcomp dword ptr [ebx + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x98u))); FPOP();
    /* 005dcb18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcb1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcb1b: jbe 0x5dcb8b */ if ((fC||fZ)) goto L_005dcb8b;
L_005dcb1d:; BB(0x005dcb1d);
    /* 005dcb1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dcb1f: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 005dcb25: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dcb28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dcb29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dcb2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dcb2b: ret  */ FN_RET(0x005dc7c0); r_esp += 4; return;
L_005dcb2c:; BB(0x005dcb2c);
    /* 005dcb2c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005dcb2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcb30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcb31: jae 0x5dcbb9 */ if (!fC) goto L_005dcbb9;
L_005dcb37:; BB(0x005dcb37);
    /* 005dcb37: fld dword ptr [ebx + 0x90] */ FPUSH(R_F32((u32)(r_ebx+0x90u)));
    /* 005dcb3d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005dcb3f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcb41: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcb42: je 0x5dcba7 */ if (fZ) goto L_005dcba7;
L_005dcb44:; BB(0x005dcb44);
    /* 005dcb44: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 005dcb4a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005dcb4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcb4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcb4f: jae 0x5dcb5b */ if (!fC) goto L_005dcb5b;
L_005dcb51:; BB(0x005dcb51);
    /* 005dcb51: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005dcb53: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005dcb55: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005dcb57: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005dcb59: jmp 0x5dcb6a */ goto L_005dcb6a;
L_005dcb5b:; BB(0x005dcb5b);
    /* 005dcb5b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005dcb5d: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005dcb5f: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005dcb61: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005dcb63: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcb65: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcb67: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcb68: jbe 0x5dcbc4 */ if ((fC||fZ)) goto L_005dcbc4;
L_005dcb6a:; BB(0x005dcb6a);
    /* 005dcb6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcb6c: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
L_005dcb72:; BB(0x005dcb72);
    /* 005dcb72: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005dcb74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005dcb76: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcb78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcb7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcb7b: jae 0x5dcbc8 */ if (!fC) goto L_005dcbc8;
L_005dcb7d:; BB(0x005dcb7d);
    /* 005dcb7d: fld dword ptr [ebx + 0x98] */ FPUSH(R_F32((u32)(r_ebx+0x98u)));
    /* 005dcb83: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dcb85: fstp dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0)); FPOP();
L_005dcb8b:; BB(0x005dcb8b);
    /* 005dcb8b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dcb8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dcb8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dcb90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dcb91: ret  */ FN_RET(0x005dc7c0); r_esp += 4; return;
L_005dcb92:; BB(0x005dcb92);
    /* 005dcb92: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005dcb94: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 005dcb9a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005dcb9c: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 005dcba2: jmp 0x5dcb10 */ goto L_005dcb10;
L_005dcba7:; BB(0x005dcba7);
    /* 005dcba7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcba9: fld dword ptr [ebx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+0x8cu)));
    /* 005dcbaf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005dcbb1: fst dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0));
    /* 005dcbb7: jmp 0x5dcb72 */ goto L_005dcb72;
L_005dcbb9:; BB(0x005dcbb9);
    /* 005dcbb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcbbb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcbbd: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dcbc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dcbc1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dcbc2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dcbc3: ret  */ FN_RET(0x005dc7c0); r_esp += 4; return;
L_005dcbc4:; BB(0x005dcbc4);
    /* 005dcbc4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005dcbc6: jmp 0x5dcb72 */ goto L_005dcb72;
L_005dcbc8:; BB(0x005dcbc8);
    /* 005dcbc8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dcbca: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dcbcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dcbce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dcbcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dcbd0: ret  */ FN_RET(0x005dc7c0); r_esp += 4; return;
}

void f_005dcbd4(void) /* sub_5DCBD4 */
{
    FN_ENTER(0x005dcbd4);
    /* 005dcbd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbd7: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcbda: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dcbdc: fld dword ptr [ebx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+0x88u)));
    /* 005dcbe2: fadd dword ptr [ebx + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x94u));
    /* 005dcbe8: fcom dword ptr [0x9c27c8] */ fx_compare(ST(0), R_F32((u32)(0x9c27c8u))); 
    /* 005dcbee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dcbf0: fstp dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0)); FPOP();
    /* 005dcbf6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dcbf7: je 0x5dce78 */ if (fZ) goto L_005dce78;
L_005dcbfd:; BB(0x005dcbfd);
    /* 005dcbfd: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005dcc00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcc02: je 0x5dce57 */ if (fZ) goto L_005dce57;
L_005dcc08:; BB(0x005dcc08);
    /* 005dcc08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dcc0a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcc0d: jne 0x5dcc32 */ if (!fZ) goto L_005dcc32;
L_005dcc0f:; BB(0x005dcc0f);
    /* 005dcc0f: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 005dcc12: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 005dcc18: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 005dcc1e: mov esi, dword ptr [ebp + 0x308] */ r_esi = R32((u32)(r_ebp+0x308u));
    /* 005dcc24: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005dcc28: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005dcc2c: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 005dcc30: jmp 0x5dcc43 */ goto L_005dcc43;
L_005dcc32:; BB(0x005dcc32);
    /* 005dcc32: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005dcc36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcc37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcc38: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 005dcc3b: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 005dcc3d: call dword ptr [ebp + 0x10c] */ { u32 t = R32((u32)(r_ebp+0x10cu)); r_esp -= 4; W32(r_esp, 0x5dcc43u); call_ind(t); }
L_005dcc43:; BB(0x005dcc43);
    /* 005dcc43: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 005dcc46: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dcc48: je 0x5dcc6a */ if (fZ) goto L_005dcc6a;
L_005dcc4a:; BB(0x005dcc4a);
    /* 005dcc4a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005dcc4e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005dcc52: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005dcc56: mov dword ptr [ebx + 0xb4], eax */ W32((u32)(r_ebx+0xb4u), r_eax);
    /* 005dcc5c: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 005dcc62: mov dword ptr [ebx + 0xbc], ebp */ W32((u32)(r_ebx+0xbcu), r_ebp);
    /* 005dcc68: jmp 0x5dcc99 */ goto L_005dcc99;
L_005dcc6a:; BB(0x005dcc6a);
    /* 005dcc6a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dcc6c: je 0x5dcc84 */ if (fZ) goto L_005dcc84;
L_005dcc6e:; BB(0x005dcc6e);
    /* 005dcc6e: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005dcc72: lea edx, [ebx + 0xb4] */ r_edx = (u32)(r_ebx+0xb4u);
    /* 005dcc78: mov ecx, 0x9c27cc */ r_ecx = 0x9c27ccu;
    /* 005dcc7d: call 0x5dc62c */ r_esp -= 4; W32(r_esp, 0x5dcc82u); f_005dc62c();
    /* 005dcc82: jmp 0x5dcc99 */ goto L_005dcc99;
L_005dcc84:; BB(0x005dcc84);
    /* 005dcc84: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005dcc88: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dcc8b: lea edx, [ebx + 0xb4] */ r_edx = (u32)(r_ebx+0xb4u);
    /* 005dcc91: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcc94: call 0x5dc62c */ r_esp -= 4; W32(r_esp, 0x5dcc99u); f_005dc62c();
L_005dcc99:; BB(0x005dcc99);
    /* 005dcc99: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dcc9c: lea eax, [ebx + 0xc0] */ r_eax = (u32)(r_ebx+0xc0u);
    /* 005dcca2: lea edx, [ebx + 0x4c] */ r_edx = (u32)(r_ebx+0x4cu);
    /* 005dcca5: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcca8: call 0x5dc600 */ r_esp -= 4; W32(r_esp, 0x5dccadu); f_005dc600();
    /* 005dccad: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dccb0: lea eax, [ebx + 0xc4] */ r_eax = (u32)(r_ebx+0xc4u);
    /* 005dccb6: lea edx, [ebx + 0x50] */ r_edx = (u32)(r_ebx+0x50u);
    /* 005dccb9: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dccbc: call 0x5dc600 */ r_esp -= 4; W32(r_esp, 0x5dccc1u); f_005dc600();
    /* 005dccc1: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 005dccc4: lea eax, [ebx + 0xc8] */ r_eax = (u32)(r_ebx+0xc8u);
    /* 005dccca: lea edx, [ebx + 0x54] */ r_edx = (u32)(r_ebx+0x54u);
    /* 005dcccd: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dccd0: call 0x5dc600 */ r_esp -= 4; W32(r_esp, 0x5dccd5u); f_005dc600();
    /* 005dccd5: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 005dccd8: lea eax, [ebx + 0xa8] */ r_eax = (u32)(r_ebx+0xa8u);
    /* 005dccde: lea edx, [ebx + 0x58] */ r_edx = (u32)(r_ebx+0x58u);
    /* 005dcce1: lea ecx, [esi + 0x10] */ r_ecx = (u32)(r_esi+0x10u);
    /* 005dcce4: lea ebp, [esi + 0x28] */ r_ebp = (u32)(r_esi+0x28u);
    /* 005dcce7: add esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005dccea: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 005dccee: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 005dccf2: call 0x5dc590 */ r_esp -= 4; W32(r_esp, 0x5dccf7u); f_005dc590();
    /* 005dccf7: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 005dccfa: lea eax, [ebx + 0xac] */ r_eax = (u32)(r_ebx+0xacu);
    /* 005dcd00: lea edx, [ebx + 0x5c] */ r_edx = (u32)(r_ebx+0x5cu);
    /* 005dcd03: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 005dcd06: lea ebp, [esi + 0x2c] */ r_ebp = (u32)(r_esi+0x2cu);
    /* 005dcd09: add esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005dcd0c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 005dcd10: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 005dcd14: call 0x5dc590 */ r_esp -= 4; W32(r_esp, 0x5dcd19u); f_005dc590();
    /* 005dcd19: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 005dcd1c: lea eax, [ebx + 0xb0] */ r_eax = (u32)(r_ebx+0xb0u);
    /* 005dcd22: lea edx, [ebx + 0x60] */ r_edx = (u32)(r_ebx+0x60u);
    /* 005dcd25: lea ecx, [esi + 0x18] */ r_ecx = (u32)(r_esi+0x18u);
    /* 005dcd28: lea ebp, [esi + 0x30] */ r_ebp = (u32)(r_esi+0x30u);
    /* 005dcd2b: add esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005dcd2e: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 005dcd32: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 005dcd36: call 0x5dc590 */ r_esp -= 4; W32(r_esp, 0x5dcd3bu); f_005dc590();
    /* 005dcd3b: lea ecx, [ebx + 0xc0] */ r_ecx = (u32)(r_ebx+0xc0u);
    /* 005dcd41: lea edx, [ebx + 0xa8] */ r_edx = (u32)(r_ebx+0xa8u);
    /* 005dcd47: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5dcd4cu); f_0082ebac();
    /* 005dcd4c: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 005dcd4f: call 0x5db764 */ r_esp -= 4; W32(r_esp, 0x5dcd54u); f_005db764();
    /* 005dcd54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcd56: je 0x5dcd9e */ if (fZ) goto L_005dcd9e;
L_005dcd58:; BB(0x005dcd58);
    /* 005dcd58: fld dword ptr [0x92cc28] */ FPUSH(R_F32((u32)(0x92cc28u)));
    /* 005dcd5e: fld dword ptr [0x92cc24] */ FPUSH(R_F32((u32)(0x92cc24u)));
    /* 005dcd64: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005dcd67: movzx eax, byte ptr [edx + 0xc] */ r_eax = (u32)R8((u32)(r_edx+0xcu));
    /* 005dcd6b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005dcd6f: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005dcd73: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005dcd75: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005dcd77: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dcd7b: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dcd80: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dcd85: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dcd89: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dcd8d: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dcd91: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dcd95: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005dcd99: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 005dcd9c: jmp 0x5dcdb6 */ goto L_005dcdb6;
L_005dcd9e:; BB(0x005dcd9e);
    /* 005dcd9e: fld dword ptr [0x92cc28] */ FPUSH(R_F32((u32)(0x92cc28u)));
    /* 005dcda4: fld dword ptr [0x92cc24] */ FPUSH(R_F32((u32)(0x92cc24u)));
    /* 005dcdaa: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005dcdad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcdaf: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
L_005dcdb6:; BB(0x005dcdb6);
    /* 005dcdb6: movsx ebp, byte ptr [edx + 5] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_edx+0x5u));
    /* 005dcdba: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 005dcdbe: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 005dcdc2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005dcdc4: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005dcdc6: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dcdca: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dcdcf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dcdd4: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dcdd8: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dcddc: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dcde0: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dcde4: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 005dcde8: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcdea: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 005dcded: movsx eax, byte ptr [edx + 6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x6u));
    /* 005dcdf1: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 005dcdf5: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 005dcdf9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005dcdfb: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 005dcdfd: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dce01: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dce06: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dce0b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dce0f: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dce13: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dce17: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dce1b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005dce1f: add dword ptr [ebx + 0x38], eax */ { u32 ad = (u32)(r_ebx+0x38u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005dce22: movsx edx, byte ptr [edx + 7] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x7u));
    /* 005dce26: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005dce2a: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 005dce2e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005dce30: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005dce32: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 005dce36: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 005dce3b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dce40: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005dce44: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 005dce48: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 005dce4c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005dce50: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005dce54: add dword ptr [ebx + 0x3c], eax */ { u32 ad = (u32)(r_ebx+0x3cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005dce57:; BB(0x005dce57);
    /* 005dce57: lea ebp, [ebx + 0xe0] */ r_ebp = (u32)(r_ebx+0xe0u);
    /* 005dce5d: add ebx, 0xf0 */ {  u32 a = r_ebx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_005dce63:; BB(0x005dce63);
    /* 005dce63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dce65: call 0x5dbb48 */ r_esp -= 4; W32(r_esp, 0x5dce6au); f_005dbb48();
    /* 005dce6a: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005dce6d: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dce6f: jg 0x5dce63 */ if ((!fZ&&fS==fO)) goto L_005dce63;
L_005dce71:; BB(0x005dce71);
    /* 005dce71: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dce74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dce75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dce76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dce77: ret  */ FN_RET(0x005dcbd4); r_esp += 4; return;
L_005dce78:; BB(0x005dce78);
    /* 005dce78: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 005dce7b: and eax, 0xffffffe7 */ {  u32 a = r_eax; u32 b = 0xffffffe7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dce7e: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 005dce81: lea ebp, [ebx + 0x34] */ r_ebp = (u32)(r_ebx+0x34u);
    /* 005dce84: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005dce86: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 005dce89: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005dce8c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 005dce8f: lea edx, [ebx + 0x58] */ r_edx = (u32)(r_ebx+0x58u);
    /* 005dce92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dce94: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005dce96: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005dce99: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005dce9c: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 005dcea6: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 005dceb0: mov dword ptr [ebx + 0xa8], 0 */ W32((u32)(r_ebx+0xa8u), 0x0u);
    /* 005dceba: jmp 0x5dcbfd */ goto L_005dcbfd;
}

void f_005dcec0(void) /* sub_5DCEC0 */
{
    FN_ENTER(0x005dcec0);
    /* 005dcec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcec1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcec2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcec5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dcec7: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005dceca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcecc: je 0x5dcf78 */ if (fZ) goto L_005dcf78;
L_005dced2:; BB(0x005dced2);
    /* 005dced2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dced4: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dced7: jne 0x5dcf08 */ if (!fZ) goto L_005dcf08;
L_005dced9:; BB(0x005dced9);
    /* 005dced9: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 005dcedc: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005dcee2: mov dword ptr [ebp + 0xb4], eax */ W32((u32)(r_ebp+0xb4u), r_eax);
    /* 005dcee8: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005dceee: mov dword ptr [ebp + 0xb8], edx */ W32((u32)(r_ebp+0xb8u), r_edx);
    /* 005dcef4: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005dcefa: mov dword ptr [ebp + 0xbc], eax */ W32((u32)(r_ebp+0xbcu), r_eax);
    /* 005dcf00: lea ebx, [ebp + 0xb4] */ r_ebx = (u32)(r_ebp+0xb4u);
    /* 005dcf06: jmp 0x5dcf1b */ goto L_005dcf1b;
L_005dcf08:; BB(0x005dcf08);
    /* 005dcf08: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005dcf0b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005dcf0d: lea ebx, [ebp + 0xb4] */ r_ebx = (u32)(r_ebp+0xb4u);
    /* 005dcf13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf15: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5dcf1bu); call_ind(t); }
L_005dcf1b:; BB(0x005dcf1b);
    /* 005dcf1b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005dcf20: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5dcf25u); f_0082d990();
    /* 005dcf25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dcf27: call 0x5dcf80 */ r_esp -= 4; W32(r_esp, 0x5dcf2cu); f_005dcf80();
    /* 005dcf2c: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dcf31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dcf33: mov edx, eax */ r_edx = r_eax;
    /* 005dcf35: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5dcf3au); f_0082d8bc();
    /* 005dcf3a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005dcf41: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005dcf44: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005dcf48: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005dcf50: mov dword ptr [esp + 8], 0x40a00000 */ W32((u32)(r_esp+0x8u), 0x40a00000u);
    /* 005dcf58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf5a: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5dcf5fu); f_00835c3c();
    /* 005dcf5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcf62: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005dcf66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dcf68: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5dcf6du); f_0082ebac();
    /* 005dcf6d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5dcf72u); f_0082da80();
    /* 005dcf72: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dcf75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dcf76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcf77: ret  */ FN_RET(0x005dcec0); r_esp += 4; return;
L_005dcf78:; BB(0x005dcf78);
    /* 005dcf78: lea ebx, [ebp + 0xb4] */ r_ebx = (u32)(r_ebp+0xb4u);
    /* 005dcf7e: jmp 0x5dcf1b */ goto L_005dcf1b;
}

void f_005dcf80(void) /* sub_5DCF80 */
{
    FN_ENTER(0x005dcf80);
    /* 005dcf80: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005dcf83: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005dcf86: mov edx, dword ptr [edx + 0xf8] */ r_edx = R32((u32)(r_edx+0xf8u));
    /* 005dcf8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dcf8e: je 0x5dcfa3 */ if (fZ) goto L_005dcfa3;
L_005dcf90:; BB(0x005dcf90);
    /* 005dcf90: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005dcf92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dcf94: je 0x5dcfa3 */ if (fZ) goto L_005dcfa3;
L_005dcf96:; BB(0x005dcf96);
    /* 005dcf96: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 005dcf99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dcf9b: je 0x5dcfa3 */ if (fZ) goto L_005dcfa3;
L_005dcf9d:; BB(0x005dcf9d);
    /* 005dcf9d: movsx edx, word ptr [edx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 005dcfa1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005dcfa3:; BB(0x005dcfa3);
    /* 005dcfa3: ret  */ FN_RET(0x005dcf80); r_esp += 4; return;
}

void f_005dcfa4(void) /* sub_5DCFA4 */
{
    FN_ENTER(0x005dcfa4);
    /* 005dcfa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfa5: mov edi, ecx */ r_edi = r_ecx;
    /* 005dcfa7: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005dcfaa: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dcfaf: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfb4: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfba: call 0x5c5284 */ r_esp -= 4; W32(r_esp, 0x5dcfbfu); f_005c5284();
    /* 005dcfbf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcfc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dcfc4: je 0x5dd096 */ if (fZ) goto L_005dd096;
L_005dcfca:; BB(0x005dcfca);
    /* 005dcfca: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005dcfcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dcfcf: je 0x5dd096 */ if (fZ) goto L_005dd096;
L_005dcfd5:; BB(0x005dcfd5);
    /* 005dcfd5: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dcfd8: mov dword ptr [0xa8daf0], edi */ W32((u32)(0xa8daf0u), r_edi);
    /* 005dcfde: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5dcfe3u); f_0081a9b8();
    /* 005dcfe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dcfe4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5dcfe9u); f_0082d7b0();
    /* 005dcfe9: mov ecx, edi */ r_ecx = r_edi;
    /* 005dcfeb: call 0x5dd0d8 */ r_esp -= 4; W32(r_esp, 0x5dcff0u); f_005dd0d8();
    /* 005dcff0: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 005dcff3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dcff5: mov dword ptr [0xa8daec], eax */ W32((u32)(0xa8daecu), r_eax);
    /* 005dcffa: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 005dcffd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcfff: je 0x5dd098 */ if (fZ) goto L_005dd098;
L_005dd005:; BB(0x005dd005);
    /* 005dd005: mov ecx, 0x5dc388 */ r_ecx = 0x5dc388u;
    /* 005dd00a: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5dd00fu); f_0082fac4();
    /* 005dd00f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5dd014u); f_0082fa9c();
    /* 005dd014: push dword ptr [edi + 0x8c] */ { u32 v = R32((u32)(r_edi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd01a: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd01d: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd020: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5dd025u); f_0083046c();
    /* 005dd025: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd028: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5dd02du); f_0082faac();
    /* 005dd02d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd02f: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5dd034u); f_0082fac4();
L_005dd034:; BB(0x005dd034);
    /* 005dd034: mov dword ptr [0xa8daec], 0 */ W32((u32)(0xa8daecu), 0x0u);
    /* 005dd03e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5dd043u); f_0082da80();
    /* 005dd043: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 005dd046: mov dword ptr [0xa8daf0], 0 */ W32((u32)(0xa8daf0u), 0x0u);
    /* 005dd050: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd052: je 0x5dd096 */ if (fZ) goto L_005dd096;
L_005dd054:; BB(0x005dd054);
    /* 005dd054: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5dd059u); f_0082dab0();
    /* 005dd059: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005dd05e: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005dd064: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005dd069: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 005dd06e: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005dd074: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 005dd079: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 005dd07e: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 005dd083: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005dd088: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005dd08d: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 005dd090: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd093: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
L_005dd096:; BB(0x005dd096);
    /* 005dd096: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd097: ret  */ FN_RET(0x005dcfa4); r_esp += 4; return;
L_005dd098:; BB(0x005dd098);
    /* 005dd098: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 005dd09b: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0a0: je 0x5dd0c1 */ if (fZ) goto L_005dd0c1;
L_005dd0a2:; BB(0x005dd0a2);
    /* 005dd0a2: mov ecx, 0x5dc388 */ r_ecx = 0x5dc388u;
    /* 005dd0a7: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5dd0acu); f_0082fac4();
    /* 005dd0ac: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd0af: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5dd0b4u); f_0082e1e8();
    /* 005dd0b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd0b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd0b7: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5dd0bcu); f_0082fac4();
    /* 005dd0bc: jmp 0x5dd034 */ goto L_005dd034;
L_005dd0c1:; BB(0x005dd0c1);
    /* 005dd0c1: push 0x5dc388 */ { u32 v = 0x5dc388u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd0c6: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd0c9: call 0x5c53c0 */ r_esp -= 4; W32(r_esp, 0x5dd0ceu); f_005c53c0();
    /* 005dd0ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd0d1: jmp 0x5dd034 */ goto L_005dd034;
}

