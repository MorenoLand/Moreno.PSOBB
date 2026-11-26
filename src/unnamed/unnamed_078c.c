#include "protos.h"

void f_0078c098(void) /* sub_78C098 */
{
    FN_ENTER(0x0078c098);
    /* 0078c098: mov eax, 0xa9c948 */ r_eax = 0xa9c948u;
    /* 0078c09d: ret  */ FN_RET(0x0078c098); r_esp += 4; return;
}

void f_0078c0a0(void) /* sub_78C0A0 */
{
    FN_ENTER(0x0078c0a0);
    /* 0078c0a0: mov eax, 0xa9c978 */ r_eax = 0xa9c978u;
    /* 0078c0a5: ret  */ FN_RET(0x0078c0a0); r_esp += 4; return;
}

void f_0078c0a8(void) /* sub_78C0A8 */
{
    FN_ENTER(0x0078c0a8);
    /* 0078c0a8: mov eax, dword ptr [0xa9c944] */ r_eax = R32((u32)(0xa9c944u));
    /* 0078c0ad: ret  */ FN_RET(0x0078c0a8); r_esp += 4; return;
}

void f_0078c0b0(void) /* sub_78C0B0 */
{
    FN_ENTER(0x0078c0b0);
    /* 0078c0b0: mov eax, dword ptr [0xa9c940] */ r_eax = R32((u32)(0xa9c940u));
    /* 0078c0b5: ret  */ FN_RET(0x0078c0b0); r_esp += 4; return;
}

void f_0078c0b8(void) /* sub_78C0B8 */
{
    FN_ENTER(0x0078c0b8);
    /* 0078c0b8: mov dword ptr [0xa9c998], 0x3f800000 */ W32((u32)(0xa9c998u), 0x3f800000u);
    /* 0078c0c2: mov dword ptr [0xa9c99c], 0x41000000 */ W32((u32)(0xa9c99cu), 0x41000000u);
    /* 0078c0cc: mov dword ptr [0xa9c9a0], 0x3fc00000 */ W32((u32)(0xa9c9a0u), 0x3fc00000u);
    /* 0078c0d6: ret  */ FN_RET(0x0078c0b8); r_esp += 4; return;
}

void f_0078c0d8(void) /* sub_78C0D8 */
{
    FN_ENTER(0x0078c0d8);
    /* 0078c0d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c0d9: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c0dc: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 0078c0e0: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x78c0e5u); f_007917b8();
    /* 0078c0e5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0078c0e8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c0eb: je 0x78c1bb */ if (fZ) goto L_0078c1bb;
L_0078c0f1:; BB(0x0078c0f1);
    /* 0078c0f1: mov byte ptr [esp], 0xce */ W8((u32)(r_esp), 0xceu);
    /* 0078c0f5: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0078c0f8: mov byte ptr [esp + 1], 0x17 */ W8((u32)(r_esp+0x1u), 0x17u);
    /* 0078c0fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078c0ff: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0078c102: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078c106: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0078c109: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0078c10d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0078c111: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0078c114: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0078c118: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0078c11b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0078c11f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0078c122: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0078c126: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0078c129: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0078c12d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0078c130: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0078c134: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0078c137: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0078c13b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0078c13e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0078c142: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0078c145: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0078c149: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0078c14c: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0078c150: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0078c153: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0078c157: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0078c15a: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0078c15e: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0078c161: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0078c165: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0078c168: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0078c16c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0078c16f: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0078c173: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0078c176: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0078c17a: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0078c17d: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0078c181: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0078c184: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0078c188: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0078c18b: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0078c18e: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0078c192: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0078c196: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078c19c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x78c1a1u); f_0068d5a8();
    /* 0078c1a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c1a2: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 0078c1aa: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078c1ad: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0078c1b1: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x78c1b6u); f_00800464();
    /* 0078c1b6: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078c1b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c1ba: ret  */ FN_RET(0x0078c0d8); r_esp += 4; return;
L_0078c1bb:; BB(0x0078c1bb);
    /* 0078c1bb: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0078c1c2: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078c1c4: jne 0x78c0f1 */ if (!fZ) goto L_0078c0f1;
L_0078c1ca:; BB(0x0078c1ca);
    /* 0078c1ca: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0078c1cd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0078c1cf: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0078c1d2: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 0078c1d7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0078c1d9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0078c1dc: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0078c1df: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0078c1e2: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0078c1e5: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0078c1e8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0078c1eb: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0078c1ee: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0078c1f1: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0078c1f4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0078c1f7: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0078c1fa: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0078c1fd: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0078c200: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0078c203: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0078c206: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078c209: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0078c20c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078c20f: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0078c212: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0078c215: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0078c218: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0078c21b: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0078c21e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0078c221: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0078c224: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0078c227: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0078c22a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0078c22d: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0078c230: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0078c233: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 0078c236: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0078c239: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0078c23c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0078c23f: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 0078c242: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0078c245: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 0078c248: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0078c24b: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0078c24e: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0078c251: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0078c254: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0078c25b: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078c260: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0078c266: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078c269: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c26a: ret  */ FN_RET(0x0078c0d8); r_esp += 4; return;
}

void f_0078c26c(void) /* sub_78C26C */
{
    FN_ENTER(0x0078c26c);
    /* 0078c26c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c26d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078c26f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078c271: push 0x8f4cfc */ { u32 v = 0x8f4cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0078c276: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078c27c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c27d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078c284: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c287: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078c28a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078c28d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078c290: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078c293: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0078c296: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0078c299: mov eax, ecx */ r_eax = r_ecx;
    /* 0078c29b: mov dword ptr [eax], 0xb452a0 */ W32((u32)(r_eax), 0xb452a0u);
    /* 0078c2a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078c2a8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78c2adu); f_008171e8();
    /* 0078c2ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c2b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c2b2: jne 0x78c2c4 */ if (!fZ) goto L_0078c2c4;
L_0078c2b4:; BB(0x0078c2b4);
    /* 0078c2b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c2b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c2be: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c2c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c2c1: ret 4 */ FN_RET(0x0078c26c); r_esp += 8; return;
L_0078c2c4:; BB(0x0078c2c4);
    /* 0078c2c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078c2c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c2c8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78c2cdu); f_005c2f74();
    /* 0078c2cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c2ce: jmp 0x78c2b4 */ goto L_0078c2b4;
}

void f_0078c2d0(void) /* sub_78C2D0 */
{
    FN_ENTER(0x0078c2d0);
    /* 0078c2d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c2d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078c2d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078c2d5: call 0x78c2f4 */ r_esp -= 4; W32(r_esp, 0x78c2dau); f_0078c2f4();
    /* 0078c2da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078c2de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c2e0: jne 0x78c2e6 */ if (!fZ) goto L_0078c2e6;
L_0078c2e2:; BB(0x0078c2e2);
    /* 0078c2e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c2e3: ret 4 */ FN_RET(0x0078c2d0); r_esp += 8; return;
L_0078c2e6:; BB(0x0078c2e6);
    /* 0078c2e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c2e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78c2ecu); f_005c2f74();
    /* 0078c2ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c2ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c2ee: ret 4 */ FN_RET(0x0078c2d0); r_esp += 8; return;
}

void f_0078c2f4(void) /* sub_78C2F4 */
{
    FN_ENTER(0x0078c2f4);
    /* 0078c2f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c2f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0078c2f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078c2f9: push 0x8f4d18 */ { u32 v = 0x8f4d18u; r_esp -= 4; W32(r_esp, v); }
    /* 0078c2fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078c304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c305: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078c30c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c30f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078c312: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078c315: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078c318: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078c31b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078c31e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078c321: mov dword ptr [ecx], 0xb452b0 */ W32((u32)(r_ecx), 0xb452b0u);
    /* 0078c327: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078c32e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78c333u); f_008171e8();
    /* 0078c333: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c336: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c33d: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c33f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c340: ret  */ FN_RET(0x0078c2f4); r_esp += 4; return;
}

void f_0078c344(void) /* sub_78C344 */
{
    FN_ENTER(0x0078c344);
    /* 0078c344: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c345: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c346: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0078c349: mov eax, dword ptr [edx + 0xdf0] */ r_eax = R32((u32)(r_edx+0xdf0u));
    /* 0078c34f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c351: jne 0x78c3ff */ if (!fZ) goto L_0078c3ff;
L_0078c357:; BB(0x0078c357);
    /* 0078c357: movsx eax, byte ptr [0x9fdf60] */ r_eax = (u32)(i32)(i8)R8((u32)(0x9fdf60u));
    /* 0078c35e: mov esi, 0x9fdf60 */ r_esi = 0x9fdf60u;
    /* 0078c363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078c365: jl 0x78c404 */ if ((fS!=fO)) goto L_0078c404;
L_0078c36b:; BB(0x0078c36b);
    /* 0078c36b: movsx eax, byte ptr [0x9fdf60] */ r_eax = (u32)(i32)(i8)R8((u32)(0x9fdf60u));
    /* 0078c372: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078c374: jmp 0x78c379 */ goto L_0078c379;
L_0078c376:; BB(0x0078c376);
    /* 0078c376: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_0078c379:; BB(0x0078c379);
    /* 0078c379: movsx ecx, byte ptr [edx + 0x961] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x961u));
    /* 0078c380: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078c382: jg 0x78c414 */ if ((!fZ&&fS==fO)) goto L_0078c414;
L_0078c388:; BB(0x0078c388);
    /* 0078c388: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c38a: jne 0x78c3ee */ if (!fZ) goto L_0078c3ee;
L_0078c38c:; BB(0x0078c38c);
    /* 0078c38c: movsx eax, word ptr [edx + 0x970] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x970u));
    /* 0078c393: movsx ecx, byte ptr [esi + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x1u));
    /* 0078c397: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c399: jne 0x78c3a3 */ if (!fZ) goto L_0078c3a3;
L_0078c39b:; BB(0x0078c39b);
    /* 0078c39b: mov ecx, dword ptr [edx + 0x9a4] */ r_ecx = R32((u32)(r_edx+0x9a4u));
    /* 0078c3a1: jmp 0x78c3c6 */ goto L_0078c3c6;
L_0078c3a3:; BB(0x0078c3a3);
    /* 0078c3a3: movsx ecx, byte ptr [esi + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x2u));
    /* 0078c3a7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c3a9: jne 0x78c3b3 */ if (!fZ) goto L_0078c3b3;
L_0078c3ab:; BB(0x0078c3ab);
    /* 0078c3ab: mov ecx, dword ptr [edx + 0x9a0] */ r_ecx = R32((u32)(r_edx+0x9a0u));
    /* 0078c3b1: jmp 0x78c3c6 */ goto L_0078c3c6;
L_0078c3b3:; BB(0x0078c3b3);
    /* 0078c3b3: movsx eax, byte ptr [esi + 3] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x3u));
    /* 0078c3b7: cmp ax, word ptr [edx + 0x96e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x96eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0078c3be: jne 0x78c3ee */ if (!fZ) goto L_0078c3ee;
L_0078c3c0:; BB(0x0078c3c0);
    /* 0078c3c0: mov ecx, dword ptr [edx + 0x9a8] */ r_ecx = R32((u32)(r_edx+0x9a8u));
L_0078c3c6:; BB(0x0078c3c6);
    /* 0078c3c6: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0078c3c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c3cb: je 0x78c3da */ if (fZ) goto L_0078c3da;
L_0078c3cd:; BB(0x0078c3cd);
    /* 0078c3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c3ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c3cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c3d0: call 0x78cc2c */ r_esp -= 4; W32(r_esp, 0x78c3d5u); f_0078cc2c();
    /* 0078c3d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078c3d8: jmp 0x78c3ee */ goto L_0078c3ee;
L_0078c3da:; BB(0x0078c3da);
    /* 0078c3da: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0078c3dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c3df: je 0x78c3ee */ if (fZ) goto L_0078c3ee;
L_0078c3e1:; BB(0x0078c3e1);
    /* 0078c3e1: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078c3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c3e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c3e6: call 0x78d75c */ r_esp -= 4; W32(r_esp, 0x78c3ebu); f_0078d75c();
    /* 0078c3eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0078c3ee:; BB(0x0078c3ee);
    /* 0078c3ee: movsx eax, byte ptr [esi + 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x10u));
    /* 0078c3f2: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078c3f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078c3f7: jge 0x78c376 */ if ((fS==fO)) goto L_0078c376;
L_0078c3fd:; BB(0x0078c3fd);
    /* 0078c3fd: jmp 0x78c402 */ goto L_0078c402;
L_0078c3ff:; BB(0x0078c3ff);
    /* 0078c3ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c400: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078c401: ret  */ FN_RET(0x0078c344); r_esp += 4; return;
L_0078c402:; BB(0x0078c402);
    /* 0078c402: mov ecx, ebx */ r_ecx = r_ebx;
L_0078c404:; BB(0x0078c404);
    /* 0078c404: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0078c408: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c40d: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0078c411: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c412: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078c413: ret  */ FN_RET(0x0078c344); r_esp += 4; return;
L_0078c414:; BB(0x0078c414);
    /* 0078c414: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078c416: jmp 0x78c404 */ goto L_0078c404;
}

void f_0078c418(void) /* sub_78C418 */
{
    FN_ENTER(0x0078c418);
    /* 0078c418: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c419: mov ebp, esp */ r_ebp = r_esp;
    /* 0078c41b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078c41d: push 0x8f4d40 */ { u32 v = 0x8f4d40u; r_esp -= 4; W32(r_esp, v); }
    /* 0078c422: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078c428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c429: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078c430: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c433: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078c436: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078c439: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078c43c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078c43f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c442: lea edx, [eax + 0x930] */ r_edx = (u32)(r_eax+0x930u);
    /* 0078c448: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c449: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x78c44eu); f_004e6f24();
    /* 0078c44e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c44f: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c452: je 0x78c557 */ if (fZ) goto L_0078c557;
L_0078c458:; BB(0x0078c458);
    /* 0078c458: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c45b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c45c: call 0x78c578 */ r_esp -= 4; W32(r_esp, 0x78c461u); f_0078c578();
    /* 0078c461: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c462: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c464: je 0x78c489 */ if (fZ) goto L_0078c489;
L_0078c466:; BB(0x0078c466);
    /* 0078c466: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c46a: call 0x78c5c0 */ r_esp -= 4; W32(r_esp, 0x78c46fu); f_0078c5c0();
    /* 0078c46f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078c470:; BB(0x0078c470);
    /* 0078c470: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078c473: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078c476: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078c479: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c47b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c47e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c485: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c488: ret  */ FN_RET(0x0078c418); r_esp += 4; return;
L_0078c489:; BB(0x0078c489);
    /* 0078c489: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c48c: movzx edx, byte ptr [eax + 0x962] */ r_edx = (u32)R8((u32)(r_eax+0x962u));
    /* 0078c493: test dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078c496: jne 0x78c470 */ if (!fZ) goto L_0078c470;
L_0078c498:; BB(0x0078c498);
    /* 0078c498: movsx eax, byte ptr [0x9fdf60] */ r_eax = (u32)(i32)(i8)R8((u32)(0x9fdf60u));
    /* 0078c49f: mov edx, 0x9fdf60 */ r_edx = 0x9fdf60u;
    /* 0078c4a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078c4a6: jl 0x78c470 */ if ((fS!=fO)) goto L_0078c470;
L_0078c4a8:; BB(0x0078c4a8);
    /* 0078c4a8: movsx ecx, byte ptr [0x9fdf60] */ r_ecx = (u32)(i32)(i8)R8((u32)(0x9fdf60u));
    /* 0078c4af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c4b2: movsx eax, byte ptr [eax + 0x961] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x961u));
L_0078c4b9:; BB(0x0078c4b9);
    /* 0078c4b9: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078c4bb: jg 0x78c470 */ if ((!fZ&&fS==fO)) goto L_0078c470;
L_0078c4bd:; BB(0x0078c4bd);
    /* 0078c4bd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c4bf: jne 0x78c4eb */ if (!fZ) goto L_0078c4eb;
L_0078c4c1:; BB(0x0078c4c1);
    /* 0078c4c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0078c4c4: movsx ecx, word ptr [ecx + 0x970] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x970u));
    /* 0078c4cb: movsx ebx, byte ptr [edx + 1] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0078c4cf: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c4d1: je 0x78c4fa */ if (fZ) goto L_0078c4fa;
L_0078c4d3:; BB(0x0078c4d3);
    /* 0078c4d3: movsx ebx, byte ptr [edx + 2] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+0x2u));
    /* 0078c4d7: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c4d9: je 0x78c4fa */ if (fZ) goto L_0078c4fa;
L_0078c4db:; BB(0x0078c4db);
    /* 0078c4db: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0078c4de: movsx ecx, byte ptr [edx + 3] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x3u));
    /* 0078c4e2: cmp cx, word ptr [ebx + 0x96e] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_ebx+0x96eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0078c4e9: je 0x78c4fa */ if (fZ) goto L_0078c4fa;
L_0078c4eb:; BB(0x0078c4eb);
    /* 0078c4eb: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078c4ee: movsx ecx, byte ptr [edx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0078c4f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078c4f3: jge 0x78c4b9 */ if ((fS==fO)) goto L_0078c4b9;
L_0078c4f5:; BB(0x0078c4f5);
    /* 0078c4f5: jmp 0x78c470 */ goto L_0078c470;
L_0078c4fa:; BB(0x0078c4fa);
    /* 0078c4fa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0078c501: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0078c503: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78c508u); f_005caba4();
    /* 0078c508: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078c50b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078c50e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0078c511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c513: je 0x78c550 */ if (fZ) goto L_0078c550;
L_0078c515:; BB(0x0078c515);
    /* 0078c515: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0078c51c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078c523: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c526: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078c529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c52a: call 0x78c68c */ r_esp -= 4; W32(r_esp, 0x78c52fu); f_0078c68c();
    /* 0078c52f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0078c536:; BB(0x0078c536);
    /* 0078c536: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078c539: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078c53c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078c53f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078c542: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c545: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c54c: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c54e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c54f: ret  */ FN_RET(0x0078c418); r_esp += 4; return;
L_0078c550:; BB(0x0078c550);
    /* 0078c550: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c552: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078c555: jmp 0x78c536 */ goto L_0078c536;
L_0078c557:; BB(0x0078c557);
    /* 0078c557: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c55a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c55b: call 0x78dcdc */ r_esp -= 4; W32(r_esp, 0x78c560u); f_0078dcdc();
    /* 0078c560: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c561: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c563: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c566: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c56d: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c56f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c570: ret  */ FN_RET(0x0078c418); r_esp += 4; return;
}

void f_0078c578(void) /* sub_78C578 */
{
    FN_ENTER(0x0078c578);
    /* 0078c578: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c579: call 0x78c594 */ r_esp -= 4; W32(r_esp, 0x78c57eu); f_0078c594();
    /* 0078c57e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078c581: je 0x78c58a */ if (fZ) goto L_0078c58a;
L_0078c583:; BB(0x0078c583);
    /* 0078c583: mov eax, 1 */ r_eax = 0x1u;
    /* 0078c588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c589: ret  */ FN_RET(0x0078c578); r_esp += 4; return;
L_0078c58a:; BB(0x0078c58a);
    /* 0078c58a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c58c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c58d: ret  */ FN_RET(0x0078c578); r_esp += 4; return;
}

void f_0078c594(void) /* sub_78C594 */
{
    FN_ENTER(0x0078c594);
    /* 0078c594: movzx edx, byte ptr [eax + 0x962] */ r_edx = (u32)R8((u32)(r_eax+0x962u));
    /* 0078c59b: test dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c59e: je 0x78c5ba */ if (fZ) goto L_0078c5ba;
L_0078c5a0:; BB(0x0078c5a0);
    /* 0078c5a0: movsx eax, byte ptr [eax + 0x94c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x94cu));
    /* 0078c5a7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c5aa: jne 0x78c5af */ if (!fZ) goto L_0078c5af;
L_0078c5ac:; BB(0x0078c5ac);
    /* 0078c5ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c5ae: ret  */ FN_RET(0x0078c594); r_esp += 4; return;
L_0078c5af:; BB(0x0078c5af);
    /* 0078c5af: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078c5b2: jne 0x78c5ba */ if (!fZ) goto L_0078c5ba;
L_0078c5b4:; BB(0x0078c5b4);
    /* 0078c5b4: mov eax, 1 */ r_eax = 0x1u;
    /* 0078c5b9: ret  */ FN_RET(0x0078c594); r_esp += 4; return;
L_0078c5ba:; BB(0x0078c5ba);
    /* 0078c5ba: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0078c5bf: ret  */ FN_RET(0x0078c594); r_esp += 4; return;
}

void f_0078c5c0(void) /* sub_78C5C0 */
{
    FN_ENTER(0x0078c5c0);
    /* 0078c5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0078c5c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078c5c5: push 0x8f4d68 */ { u32 v = 0x8f4d68u; r_esp -= 4; W32(r_esp, v); }
    /* 0078c5ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078c5d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c5d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078c5d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c5db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078c5de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078c5e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078c5e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078c5e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c5e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c5eb: call 0x78c578 */ r_esp -= 4; W32(r_esp, 0x78c5f0u); f_0078c578();
    /* 0078c5f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c5f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c5f3: jne 0x78c605 */ if (!fZ) goto L_0078c605;
L_0078c5f5:; BB(0x0078c5f5);
    /* 0078c5f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c5f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c5fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c601: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c603: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c604: ret  */ FN_RET(0x0078c5c0); r_esp += 4; return;
L_0078c605:; BB(0x0078c605);
    /* 0078c605: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0078c60c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0078c60e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78c613u); f_005caba4();
    /* 0078c613: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c614: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078c617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c619: je 0x78c64d */ if (fZ) goto L_0078c64d;
L_0078c61b:; BB(0x0078c61b);
    /* 0078c61b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0078c622: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078c629: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c62c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078c62f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c630: call 0x78c654 */ r_esp -= 4; W32(r_esp, 0x78c635u); f_0078c654();
    /* 0078c635: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078c638: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0078c63f:; BB(0x0078c63f);
    /* 0078c63f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c642: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c649: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c64b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c64c: ret  */ FN_RET(0x0078c5c0); r_esp += 4; return;
L_0078c64d:; BB(0x0078c64d);
    /* 0078c64d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c64f: jmp 0x78c63f */ goto L_0078c63f;
}

void f_0078c654(void) /* sub_78C654 */
{
    FN_ENTER(0x0078c654);
    /* 0078c654: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c655: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c656: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c657: mov edi, ecx */ r_edi = r_ecx;
    /* 0078c659: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0078c65d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c65e: mov ecx, edi */ r_ecx = r_edi;
    /* 0078c660: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78c665u); f_008193cc();
    /* 0078c665: mov dword ptr [edi], 0xb452b0 */ W32((u32)(r_edi), 0xb452b0u);
    /* 0078c66b: mov edx, dword ptr [0x9fe1f4] */ r_edx = R32((u32)(0x9fe1f4u));
    /* 0078c671: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0078c674: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0078c677: mov eax, ebx */ r_eax = r_ebx;
    /* 0078c679: call 0x78c594 */ r_esp -= 4; W32(r_esp, 0x78c67eu); f_0078c594();
    /* 0078c67e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0078c681: mov eax, edi */ r_eax = r_edi;
    /* 0078c683: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c684: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c685: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078c686: ret 4 */ FN_RET(0x0078c654); r_esp += 8; return;
}

void f_0078c68c(void) /* sub_78C68C */
{
    FN_ENTER(0x0078c68c);
    /* 0078c68c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c68d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c68e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078c690: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0078c694: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c695: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078c697: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78c69cu); f_008193cc();
    /* 0078c69c: mov dword ptr [ebp], 0xb452a0 */ W32((u32)(r_ebp), 0xb452a0u);
    /* 0078c6a3: mov edx, dword ptr [0x9fe1f0] */ r_edx = R32((u32)(0x9fe1f0u));
    /* 0078c6a9: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0078c6ac: mov dword ptr [ebp + 0x1c], ebx */ W32((u32)(r_ebp+0x1cu), r_ebx);
    /* 0078c6af: mov eax, ebp */ r_eax = r_ebp;
    /* 0078c6b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c6b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c6b3: ret 4 */ FN_RET(0x0078c68c); r_esp += 8; return;
}

void f_0078c6b8(void) /* sub_78C6B8 */
{
    FN_ENTER(0x0078c6b8);
    /* 0078c6b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c6b9: mov edi, ecx */ r_edi = r_ecx;
    /* 0078c6bb: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0078c6be: mov edx, dword ptr [eax + 0xdf0] */ r_edx = R32((u32)(r_eax+0xdf0u));
    /* 0078c6c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c6c6: je 0x78c6ca */ if (fZ) goto L_0078c6ca;
L_0078c6c8:; BB(0x0078c6c8);
    /* 0078c6c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078c6c9: ret  */ FN_RET(0x0078c6b8); r_esp += 4; return;
L_0078c6ca:; BB(0x0078c6ca);
    /* 0078c6ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0078c6cc: call 0x78c6e0 */ r_esp -= 4; W32(r_esp, 0x78c6d1u); f_0078c6e0();
    /* 0078c6d1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0078c6d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c6da: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0078c6de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078c6df: ret  */ FN_RET(0x0078c6b8); r_esp += 4; return;
}

void f_0078c6e0(void) /* sub_78C6E0 */
{
    FN_ENTER(0x0078c6e0);
    /* 0078c6e0: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0078c6e3: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0078c6e6: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0078c6e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078c6eb: lea edx, [edx + edx + 0x9fd290] */ r_edx = (u32)(r_edx+r_edx+0x9fd290u);
    /* 0078c6f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c6f3: push dword ptr [eax + 0x9a0] */ { u32 v = R32((u32)(r_eax+0x9a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078c6f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c6fa: call 0x78cc2c */ r_esp -= 4; W32(r_esp, 0x78c6ffu); f_0078cc2c();
    /* 0078c6ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078c702: ret  */ FN_RET(0x0078c6e0); r_esp += 4; return;
}

void f_0078c6ed(void)
{
    FN_ENTER(0x0078c6ed);
    /* 0078c6ed: adc dl, byte ptr [eax + 0x52009fd2] */ { u32 c = fC; u32 a = (u8)r_edx; u32 b = R8((u32)(r_eax+0x52009fd2u)); u32 r = (a + b + c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0078c6f3: push dword ptr [eax + 0x9a0] */ { u32 v = R32((u32)(r_eax+0x9a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078c6f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c6fa: call 0x78cc2c */ r_esp -= 4; W32(r_esp, 0x78c6ffu); f_0078cc2c();
    /* 0078c6ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078c702: ret  */ FN_RET(0x0078c6ed); r_esp += 4; return;
}

void f_0078c704(void) /* sub_78C704 */
{
    FN_ENTER(0x0078c704);
    /* 0078c704: mov dword ptr [0xa9c9c0], 0x3f800000 */ W32((u32)(0xa9c9c0u), 0x3f800000u);
    /* 0078c70e: mov dword ptr [0xa9c9c4], 0x41000000 */ W32((u32)(0xa9c9c4u), 0x41000000u);
    /* 0078c718: mov dword ptr [0xa9c9c8], 0x3fc00000 */ W32((u32)(0xa9c9c8u), 0x3fc00000u);
    /* 0078c722: ret  */ FN_RET(0x0078c704); r_esp += 4; return;
}

void f_0078c724(void) /* sub_78C724 */
{
    FN_ENTER(0x0078c724);
    /* 0078c724: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c725: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078c727: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078c729: call 0x78c7ac */ r_esp -= 4; W32(r_esp, 0x78c72eu); f_0078c7ac();
    /* 0078c72e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078c732: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c734: jne 0x78c73a */ if (!fZ) goto L_0078c73a;
L_0078c736:; BB(0x0078c736);
    /* 0078c736: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c737: ret 4 */ FN_RET(0x0078c724); r_esp += 8; return;
L_0078c73a:; BB(0x0078c73a);
    /* 0078c73a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c73b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78c740u); f_005c2f74();
    /* 0078c740: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c741: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c742: ret 4 */ FN_RET(0x0078c724); r_esp += 8; return;
}

void f_0078c748(void) /* sub_78C748 */
{
    FN_ENTER(0x0078c748);
    /* 0078c748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c749: mov ebp, esp */ r_ebp = r_esp;
    /* 0078c74b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078c74d: push 0x8f4d84 */ { u32 v = 0x8f4d84u; r_esp -= 4; W32(r_esp, v); }
    /* 0078c752: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078c758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c759: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078c760: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c763: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078c766: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078c769: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078c76c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078c76f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0078c772: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0078c775: mov eax, ecx */ r_eax = r_ecx;
    /* 0078c777: mov dword ptr [eax], 0xb45370 */ W32((u32)(r_eax), 0xb45370u);
    /* 0078c77d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078c784: call 0x78c7ac */ r_esp -= 4; W32(r_esp, 0x78c789u); f_0078c7ac();
    /* 0078c789: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078c78c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c78e: jne 0x78c7a0 */ if (!fZ) goto L_0078c7a0;
L_0078c790:; BB(0x0078c790);
    /* 0078c790: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c793: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c79a: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c79c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c79d: ret 4 */ FN_RET(0x0078c748); r_esp += 8; return;
L_0078c7a0:; BB(0x0078c7a0);
    /* 0078c7a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0078c7a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c7a4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78c7a9u); f_005c2f74();
    /* 0078c7a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078c7aa: jmp 0x78c790 */ goto L_0078c790;
}

void f_0078c7ac(void) /* sub_78C7AC */
{
    FN_ENTER(0x0078c7ac);
    /* 0078c7ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c7ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0078c7af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078c7b1: push 0x8f4da0 */ { u32 v = 0x8f4da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078c7b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078c7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078c7bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078c7c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c7c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078c7ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078c7cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078c7d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078c7d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078c7d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078c7d9: mov dword ptr [ecx], 0xb45360 */ W32((u32)(r_ecx), 0xb45360u);
    /* 0078c7df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078c7e6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78c7ebu); f_008171e8();
    /* 0078c7eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078c7ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078c7f5: mov esp, ebp */ r_esp = r_ebp;
    /* 0078c7f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c7f8: ret  */ FN_RET(0x0078c7ac); r_esp += 4; return;
}

void f_0078c7fc(void) /* sub_78C7FC */
{
    FN_ENTER(0x0078c7fc);
    /* 0078c7fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c7fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078c7ff: mov edx, dword ptr [ebp + 0x98] */ r_edx = R32((u32)(r_ebp+0x98u));
    /* 0078c805: mov ecx, dword ptr [edx + 0x328] */ r_ecx = R32((u32)(r_edx+0x328u));
    /* 0078c80b: and ecx, 0xdf7ff */ {  u32 a = r_ecx; u32 b = 0xdf7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0078c811: test ecx, 0x99003 */ {  u32 a = r_ecx; u32 b = 0x99003u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c817: je 0x78c827 */ if (fZ) goto L_0078c827;
L_0078c819:; BB(0x0078c819);
    /* 0078c819: fld dword ptr [0x97aa34] */ FPUSH(R_F32((u32)(0x97aa34u)));
    /* 0078c81f: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0078c825: jmp 0x78c86a */ goto L_0078c86a;
L_0078c827:; BB(0x0078c827);
    /* 0078c827: test ecx, 0x1e0 */ {  u32 a = r_ecx; u32 b = 0x1e0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c82d: jne 0x78c85e */ if (!fZ) goto L_0078c85e;
L_0078c82f:; BB(0x0078c82f);
    /* 0078c82f: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 0078c835: cmp eax, dword ptr [edx + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x60u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c838: jne 0x78c85e */ if (!fZ) goto L_0078c85e;
L_0078c83a:; BB(0x0078c83a);
    /* 0078c83a: test ecx, 0x4661c */ {  u32 a = r_ecx; u32 b = 0x4661cu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c840: je 0x78c850 */ if (fZ) goto L_0078c850;
L_0078c842:; BB(0x0078c842);
    /* 0078c842: fld dword ptr [0x97aa30] */ FPUSH(R_F32((u32)(0x97aa30u)));
    /* 0078c848: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0078c84e: jmp 0x78c86a */ goto L_0078c86a;
L_0078c850:; BB(0x0078c850);
    /* 0078c850: fld dword ptr [0x97aa34] */ FPUSH(R_F32((u32)(0x97aa34u)));
    /* 0078c856: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
    /* 0078c85c: jmp 0x78c86a */ goto L_0078c86a;
L_0078c85e:; BB(0x0078c85e);
    /* 0078c85e: fld dword ptr [0x97aa2c] */ FPUSH(R_F32((u32)(0x97aa2cu)));
    /* 0078c864: fadd dword ptr [ebp + 0x94] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x94u));
L_0078c86a:; BB(0x0078c86a);
    /* 0078c86a: fcom dword ptr [0x97aa50] */ fx_compare(ST(0), R_F32((u32)(0x97aa50u))); 
    /* 0078c870: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078c872: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078c873: jae 0x78c881 */ if (!fC) goto L_0078c881;
L_0078c875:; BB(0x0078c875);
    /* 0078c875: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078c877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078c879: mov dword ptr [ebp + 0x94], eax */ W32((u32)(r_ebp+0x94u), r_eax);
    /* 0078c87f: jmp 0x78c898 */ goto L_0078c898;
L_0078c881:; BB(0x0078c881);
    /* 0078c881: fld dword ptr [0x97aa4c] */ FPUSH(R_F32((u32)(0x97aa4cu)));
    /* 0078c887: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0078c889: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078c88b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078c88c: ja 0x78c890 */ if ((!fC&&!fZ)) goto L_0078c890;
L_0078c88e:; BB(0x0078c88e);
    /* 0078c88e: fst st(1) */ ST(1) = ST(0);
L_0078c890:; BB(0x0078c890);
    /* 0078c890: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078c892: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
L_0078c898:; BB(0x0078c898);
    /* 0078c898: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078c89a: call 0x78c8b0 */ r_esp -= 4; W32(r_esp, 0x78c89fu); f_0078c8b0();
    /* 0078c89f: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 0078c8a5: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0078c8a8: mov dword ptr [ebp + 0x9c], edx */ W32((u32)(r_ebp+0x9cu), r_edx);
    /* 0078c8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078c8af: ret  */ FN_RET(0x0078c7fc); r_esp += 4; return;
}

void f_0078c8b0(void) /* sub_78C8B0 */
{
    FN_ENTER(0x0078c8b0);
    /* 0078c8b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c8b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078c8b3: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078c8b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078c8bb: call 0x78c8e0 */ r_esp -= 4; W32(r_esp, 0x78c8c0u); f_0078c8e0();
    /* 0078c8c0: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0078c8c6: fcomp dword ptr [0x97aa48] */ fx_compare(ST(0), R_F32((u32)(0x97aa48u))); FPOP();
    /* 0078c8cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078c8ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078c8cf: jbe 0x78c8dd */ if ((fC||fZ)) goto L_0078c8dd;
L_0078c8d1:; BB(0x0078c8d1);
    /* 0078c8d1: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0078c8d4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0078c8d7: add dword ptr [ebx + 0x84], edx */ { u32 ad = (u32)(r_ebx+0x84u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0078c8dd:; BB(0x0078c8dd);
    /* 0078c8dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078c8de: ret  */ FN_RET(0x0078c8b0); r_esp += 4; return;
}

void f_0078c8e0(void) /* sub_78C8E0 */
{
    FN_ENTER(0x0078c8e0);
    /* 0078c8e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c8e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078c8e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078c8e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078c8e4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078c8e7: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0078c8ea: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0078c8ee: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 0078c8f8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0078c8fb: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 0078c901: lea ebx, [ecx + 0x24] */ r_ebx = (u32)(r_ecx+0x24u);
    /* 0078c904: mov dword ptr [ecx + 0x90], ebx */ W32((u32)(r_ecx+0x90u), r_ebx);
    /* 0078c90a: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0078c90c: fmul dword ptr [ecx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x94u));
    /* 0078c912: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 0078c915: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078c918: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078c91c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078c921: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078c925: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078c929: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078c92d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0078c930: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078c934: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0078c936: mov ebx, eax */ r_ebx = r_eax;
    /* 0078c938: mov esi, ecx */ r_esi = r_ecx;
    /* 0078c93a: jmp 0x78c942 */ goto L_0078c942;
L_0078c93c:; BB(0x0078c93c);
    /* 0078c93c: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
L_0078c942:; BB(0x0078c942);
    /* 0078c942: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0078c944: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078c946: jl 0x78ca8e */ if ((fS!=fO)) goto L_0078ca8e;
L_0078c94c:; BB(0x0078c94c);
    /* 0078c94c: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
    /* 0078c952: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078c954: jne 0x78ca37 */ if (!fZ) goto L_0078ca37;
L_0078c95a:; BB(0x0078c95a);
    /* 0078c95a: mov ecx, edi */ r_ecx = r_edi;
    /* 0078c95c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x78c961u); f_0082dcbc();
    /* 0078c961: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078c967: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078c96d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0078c971: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0078c975: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078c977: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0078c97a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078c97c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078c97f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078c983: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078c988: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078c98c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078c990: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078c994: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0078c997: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078c99b: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078c99d: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0078c9a0: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078c9a6: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078c9ac: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078c9af: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078c9b1: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078c9b4: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078c9b8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078c9bd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078c9c1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078c9c5: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078c9c9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0078c9cc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078c9d0: add eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078c9d3: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0078c9d6: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078c9dc: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078c9e2: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0078c9e5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078c9e7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078c9ea: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078c9ee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078c9f3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078c9f7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078c9fb: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078c9ff: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0078ca02: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078ca06: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078ca09: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0078ca0c: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078ca12: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078ca18: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078ca1b: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 0078ca21: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 0078ca24: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 0078ca2a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0078ca2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078ca2f: jl 0x78ca8e */ if ((fS!=fO)) goto L_0078ca8e;
L_0078ca31:; BB(0x0078ca31);
    /* 0078ca31: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
L_0078ca37:; BB(0x0078ca37);
    /* 0078ca37: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078ca3a: mov dword ptr [esi + 0x88], eax */ W32((u32)(r_esi+0x88u), r_eax);
    /* 0078ca40: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0078ca43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ca45: je 0x78ca83 */ if (fZ) goto L_0078ca83;
L_0078ca47:; BB(0x0078ca47);
    /* 0078ca47: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0078ca4a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0078ca4d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0078ca51: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0078ca55: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 0078ca58: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0078ca5b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0078ca5f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078ca64: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078ca68: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078ca6c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078ca70: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0078ca73: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078ca75: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078ca79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ca7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ca7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ca7c: mov ecx, esi */ r_ecx = r_esi;
    /* 0078ca7e: call 0x78ca98 */ r_esp -= 4; W32(r_esp, 0x78ca83u); f_0078ca98();
L_0078ca83:; BB(0x0078ca83);
    /* 0078ca83: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0078ca86: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ca88: jne 0x78c93c */ if (!fZ) goto L_0078c93c;
L_0078ca8e:; BB(0x0078ca8e);
    /* 0078ca8e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078ca91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ca92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078ca93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ca94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078ca95: ret 4 */ FN_RET(0x0078c8e0); r_esp += 8; return;
}

void f_0078ca98(void) /* sub_78CA98 */
{
    FN_ENTER(0x0078ca98);
    /* 0078ca98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078ca99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078ca9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078ca9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ca9c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078ca9f: mov esi, ecx */ r_esi = r_ecx;
    /* 0078caa1: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0078caa5: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0078caa9: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0078caad: mov ebx, eax */ r_ebx = r_eax;
    /* 0078caaf: mov ebp, edx */ r_ebp = r_edx;
L_0078cab1:; BB(0x0078cab1);
    /* 0078cab1: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078cab7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0078cab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078cabb: jl 0x78cc17 */ if ((fS!=fO)) goto L_0078cc17;
L_0078cac1:; BB(0x0078cac1);
    /* 0078cac1: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
    /* 0078cac7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cac9: jne 0x78cbb3 */ if (!fZ) goto L_0078cbb3;
L_0078cacf:; BB(0x0078cacf);
    /* 0078cacf: mov ecx, edi */ r_ecx = r_edi;
    /* 0078cad1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x78cad6u); f_0082dcbc();
    /* 0078cad6: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078cadc: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078cae2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0078cae5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0078cae8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078caea: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0078caed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078caef: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0078caf3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0078caf8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078cafd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0078cb01: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0078cb05: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078cb09: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078cb0d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0078cb11: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078cb13: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0078cb16: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078cb1c: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078cb22: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0078cb25: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0078cb27: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0078cb2b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0078cb30: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078cb35: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0078cb39: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0078cb3d: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078cb41: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078cb45: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0078cb49: add eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078cb4c: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0078cb4f: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078cb55: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078cb5b: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0078cb5e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078cb60: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0078cb64: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0078cb69: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078cb6e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0078cb72: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0078cb76: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078cb7a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078cb7e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0078cb82: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078cb85: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0078cb88: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 0078cb8e: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 0078cb94: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078cb97: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 0078cb9d: lea eax, [edx + 0x10] */ r_eax = (u32)(r_edx+0x10u);
    /* 0078cba0: mov dword ptr [esi + 0x8c], eax */ W32((u32)(r_esi+0x8cu), r_eax);
    /* 0078cba6: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0078cba9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078cbab: jl 0x78cc21 */ if ((fS!=fO)) goto L_0078cc21;
L_0078cbad:; BB(0x0078cbad);
    /* 0078cbad: mov edx, dword ptr [esi + 0x88] */ r_edx = R32((u32)(r_esi+0x88u));
L_0078cbb3:; BB(0x0078cbb3);
    /* 0078cbb3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078cbb6: mov dword ptr [esi + 0x88], edx */ W32((u32)(r_esi+0x88u), r_edx);
    /* 0078cbbc: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0078cbbf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cbc1: je 0x78cc02 */ if (fZ) goto L_0078cc02;
L_0078cbc3:; BB(0x0078cbc3);
    /* 0078cbc3: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0078cbc6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0078cbc9: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0078cbcd: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0078cbd1: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 0078cbd4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0078cbd8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0078cbdd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078cbe2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0078cbe6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0078cbea: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0078cbee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0078cbf2: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078cbf4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0078cbf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078cbf9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078cbfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078cbfb: mov ecx, esi */ r_ecx = r_esi;
    /* 0078cbfd: call 0x78ca98 */ r_esp -= 4; W32(r_esp, 0x78cc02u); f_0078ca98();
L_0078cc02:; BB(0x0078cc02);
    /* 0078cc02: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 0078cc05: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cc07: jne 0x78cab1 */ if (!fZ) goto L_0078cab1;
L_0078cc0d:; BB(0x0078cc0d);
    /* 0078cc0d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078cc10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078cc11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078cc12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078cc13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078cc14: ret 0xc */ FN_RET(0x0078ca98); r_esp += 16; return;
L_0078cc17:; BB(0x0078cc17);
    /* 0078cc17: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078cc1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078cc1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078cc1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078cc1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078cc1e: ret 0xc */ FN_RET(0x0078ca98); r_esp += 16; return;
L_0078cc21:; BB(0x0078cc21);
    /* 0078cc21: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078cc24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078cc25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078cc26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078cc27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078cc28: ret 0xc */ FN_RET(0x0078ca98); r_esp += 16; return;
}

void f_0078cc2c(void) /* sub_78CC2C */
{
    FN_ENTER(0x0078cc2c);
    /* 0078cc2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078cc2d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078cc2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078cc31: push 0x8f4dc8 */ { u32 v = 0x8f4dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0078cc36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078cc3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078cc3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078cc44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078cc47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078cc4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078cc4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078cc50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078cc53: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078cc58: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0078cc5f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78cc64u); f_005caba4();
    /* 0078cc64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078cc65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078cc68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cc6a: je 0x78cca3 */ if (fZ) goto L_0078cca3;
L_0078cc6c:; BB(0x0078cc6c);
    /* 0078cc6c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0078cc73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078cc7a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078cc7d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078cc80: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078cc83: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cc86: call 0x78cca8 */ r_esp -= 4; W32(r_esp, 0x78cc8bu); f_0078cca8();
    /* 0078cc8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cc8e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0078cc95:; BB(0x0078cc95);
    /* 0078cc95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078cc98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078cc9f: mov esp, ebp */ r_esp = r_ebp;
    /* 0078cca1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078cca2: ret  */ FN_RET(0x0078cc2c); r_esp += 4; return;
L_0078cca3:; BB(0x0078cca3);
    /* 0078cca3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078cca5: jmp 0x78cc95 */ goto L_0078cc95;
}

void f_0078cca8(void) /* sub_78CCA8 */
{
    FN_ENTER(0x0078cca8);
    /* 0078cca8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078cca9: mov ebp, esp */ r_ebp = r_esp;
    /* 0078ccab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078ccad: push 0x8f4de4 */ { u32 v = 0x8f4de4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ccb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078ccb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ccb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078ccc0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078ccc3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078ccc6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078ccc9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078cccc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078cccf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0078ccd2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0078ccd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ccd6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0078ccd9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78ccdeu); f_008193cc();
    /* 0078ccde: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078cce5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078cce8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0078cceb: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0078ccee: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0078ccf1: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 0078ccf4: mov dword ptr [ecx], 0xb45360 */ W32((u32)(r_ecx), 0xb45360u);
    /* 0078ccfa: mov eax, dword ptr [0x9fe420] */ r_eax = R32((u32)(0x9fe420u));
    /* 0078ccff: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0078cd02: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0078cd05: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0078cd07: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078cd09: jl 0x78cd14 */ if ((fS!=fO)) goto L_0078cd14;
L_0078cd0b:; BB(0x0078cd0b);
    /* 0078cd0b: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078cd0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078cd10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078cd12: jge 0x78cd0b */ if ((fS==fO)) goto L_0078cd0b;
L_0078cd14:; BB(0x0078cd14);
    /* 0078cd14: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078cd17: call 0x78ce38 */ r_esp -= 4; W32(r_esp, 0x78cd1cu); f_0078ce38();
    /* 0078cd1c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078cd1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0078cd22: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cd25: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078cd28: mov dword ptr [ebx + 0x98], ecx */ W32((u32)(r_ebx+0x98u), r_ecx);
    /* 0078cd2e: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
    /* 0078cd38: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 0078cd42: mov dword ptr [ebx], 0xb45370 */ W32((u32)(r_ebx), 0xb45370u);
    /* 0078cd48: mov edx, dword ptr [0x9fe424] */ r_edx = R32((u32)(0x9fe424u));
    /* 0078cd4e: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0078cd51: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0078cd54: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 0078cd5a: mov eax, ebx */ r_eax = r_ebx;
    /* 0078cd5c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078cd5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078cd62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078cd69: mov esp, ebp */ r_esp = r_ebp;
    /* 0078cd6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078cd6c: ret 0xc */ FN_RET(0x0078cca8); r_esp += 16; return;
}

void f_0078cd70(void) /* sub_78CD70 */
{
    FN_ENTER(0x0078cd70);
    /* 0078cd70: mov dword ptr [0xa9c9d4], 0x3f800000 */ W32((u32)(0xa9c9d4u), 0x3f800000u);
    /* 0078cd7a: mov dword ptr [0xa9c9d8], 0x41000000 */ W32((u32)(0xa9c9d8u), 0x41000000u);
    /* 0078cd84: mov dword ptr [0xa9c9dc], 0x3fc00000 */ W32((u32)(0xa9c9dcu), 0x3fc00000u);
    /* 0078cd8e: ret  */ FN_RET(0x0078cd70); r_esp += 4; return;
}

void f_0078cd90(void) /* sub_78CD90 */
{
    FN_ENTER(0x0078cd90);
    /* 0078cd90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078cd91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078cd92: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0078cd96: mov ebx, eax */ r_ebx = r_eax;
    /* 0078cd98: mov esi, ecx */ r_esi = r_ecx;
L_0078cd9a:; BB(0x0078cd9a);
    /* 0078cd9a: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 0078cda0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0078cda2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078cda4: jl 0x78ce2d */ if ((fS!=fO)) goto L_0078ce2d;
L_0078cdaa:; BB(0x0078cdaa);
    /* 0078cdaa: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
    /* 0078cdb0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cdb2: jne 0x78ce05 */ if (!fZ) goto L_0078ce05;
L_0078cdb4:; BB(0x0078cdb4);
    /* 0078cdb4: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0078cdb7: and dword ptr [ebx], 0xfffffffd */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0078cdba: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 0078cdc0: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0078cdc2: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 0078cdc8: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0078cdcb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0078cdce: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 0078cdd4: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0078cdd7: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0078cdda: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0078cde0: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0078cde6: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078cde9: mov dword ptr [esi + 0x90], edx */ W32((u32)(r_esi+0x90u), r_edx);
    /* 0078cdef: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 0078cdf2: mov dword ptr [esi + 0x8c], edx */ W32((u32)(r_esi+0x8cu), r_edx);
    /* 0078cdf8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0078cdfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078cdfd: jl 0x78ce32 */ if ((fS!=fO)) goto L_0078ce32;
L_0078cdff:; BB(0x0078cdff);
    /* 0078cdff: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
L_0078ce05:; BB(0x0078ce05);
    /* 0078ce05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078ce08: mov dword ptr [esi + 0x88], eax */ W32((u32)(r_esi+0x88u), r_eax);
    /* 0078ce0e: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0078ce11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ce13: je 0x78ce1d */ if (fZ) goto L_0078ce1d;
L_0078ce15:; BB(0x0078ce15);
    /* 0078ce15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ce16: mov ecx, esi */ r_ecx = r_esi;
    /* 0078ce18: call 0x78cd90 */ r_esp -= 4; W32(r_esp, 0x78ce1du); f_0078cd90();
L_0078ce1d:; BB(0x0078ce1d);
    /* 0078ce1d: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0078ce20: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ce22: jne 0x78cd9a */ if (!fZ) goto L_0078cd9a;
L_0078ce28:; BB(0x0078ce28);
    /* 0078ce28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ce29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ce2a: ret 4 */ FN_RET(0x0078cd90); r_esp += 8; return;
L_0078ce2d:; BB(0x0078ce2d);
    /* 0078ce2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ce2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ce2f: ret 4 */ FN_RET(0x0078cd90); r_esp += 8; return;
L_0078ce32:; BB(0x0078ce32);
    /* 0078ce32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ce33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ce34: ret 4 */ FN_RET(0x0078cd90); r_esp += 8; return;
}

void f_0078ce38(void) /* sub_78CE38 */
{
    FN_ENTER(0x0078ce38);
    /* 0078ce38: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ce3b: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0078ce3e: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 0078ce48: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0078ce4b: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 0078ce51: lea eax, [ecx + 0x24] */ r_eax = (u32)(r_ecx+0x24u);
    /* 0078ce54: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 0078ce5a: call 0x78cd90 */ r_esp -= 4; W32(r_esp, 0x78ce5fu); f_0078cd90();
    /* 0078ce5f: ret  */ FN_RET(0x0078ce38); r_esp += 4; return;
}

void f_0078ce60(void) /* sub_78CE60 */
{
    FN_ENTER(0x0078ce60);
    /* 0078ce60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ce61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078ce63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078ce65: call 0x78cf44 */ r_esp -= 4; W32(r_esp, 0x78ce6au); f_0078cf44();
    /* 0078ce6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078ce6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ce70: jne 0x78ce76 */ if (!fZ) goto L_0078ce76;
L_0078ce72:; BB(0x0078ce72);
    /* 0078ce72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ce73: ret 4 */ FN_RET(0x0078ce60); r_esp += 8; return;
L_0078ce76:; BB(0x0078ce76);
    /* 0078ce76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ce77: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78ce7cu); f_005c2f74();
    /* 0078ce7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078ce7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ce7e: ret 4 */ FN_RET(0x0078ce60); r_esp += 8; return;
}

void f_0078ce84(void) /* sub_78CE84 */
{
    FN_ENTER(0x0078ce84);
    /* 0078ce84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ce85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078ce87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078ce89: call 0x78cea8 */ r_esp -= 4; W32(r_esp, 0x78ce8eu); f_0078cea8();
    /* 0078ce8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078ce92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ce94: jne 0x78ce9a */ if (!fZ) goto L_0078ce9a;
L_0078ce96:; BB(0x0078ce96);
    /* 0078ce96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ce97: ret 4 */ FN_RET(0x0078ce84); r_esp += 8; return;
L_0078ce9a:; BB(0x0078ce9a);
    /* 0078ce9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ce9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78cea0u); f_005c2f74();
    /* 0078cea0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078cea1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078cea2: ret 4 */ FN_RET(0x0078ce84); r_esp += 8; return;
}

void f_0078cea8(void) /* sub_78CEA8 */
{
    FN_ENTER(0x0078cea8);
    /* 0078cea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078cea9: mov ebp, esp */ r_ebp = r_esp;
    /* 0078ceab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078cead: push 0x8f4e00 */ { u32 v = 0x8f4e00u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ceb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078ceb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ceb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078cec0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078cec3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078cec6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078cec9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078cecc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078cecf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078ced2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078ced9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cedc: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0078cedf: mov dword ptr [ecx], 0xb45408 */ W32((u32)(r_ecx), 0xb45408u);
    /* 0078cee5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cee7: je 0x78cefa */ if (fZ) goto L_0078cefa;
L_0078cee9:; BB(0x0078cee9);
    /* 0078cee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ceea: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x78ceefu); f_0082e960();
    /* 0078ceef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078cef0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cef3: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_0078cefa:; BB(0x0078cefa);
    /* 0078cefa: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0078cefd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ceff: je 0x78cf12 */ if (fZ) goto L_0078cf12;
L_0078cf01:; BB(0x0078cf01);
    /* 0078cf01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078cf02: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x78cf07u); f_0082e960();
    /* 0078cf07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078cf08: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cf0b: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_0078cf12:; BB(0x0078cf12);
    /* 0078cf12: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0078cf15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cf17: je 0x78cf2a */ if (fZ) goto L_0078cf2a;
L_0078cf19:; BB(0x0078cf19);
    /* 0078cf19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078cf1a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x78cf1fu); f_0082e960();
    /* 0078cf1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078cf20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cf23: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_0078cf2a:; BB(0x0078cf2a);
    /* 0078cf2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078cf31: call 0x78cf44 */ r_esp -= 4; W32(r_esp, 0x78cf36u); f_0078cf44();
    /* 0078cf36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078cf39: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078cf40: mov esp, ebp */ r_esp = r_ebp;
    /* 0078cf42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078cf43: ret  */ FN_RET(0x0078cea8); r_esp += 4; return;
}

void f_0078cf44(void) /* sub_78CF44 */
{
    FN_ENTER(0x0078cf44);
    /* 0078cf44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078cf45: mov ebp, esp */ r_ebp = r_esp;
    /* 0078cf47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078cf49: push 0x8f4e1c */ { u32 v = 0x8f4e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078cf4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078cf54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078cf55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078cf5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078cf5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078cf62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078cf65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078cf68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078cf6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078cf6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078cf75: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cf78: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0078cf7b: mov dword ptr [ecx], 0xb453f8 */ W32((u32)(r_ecx), 0xb453f8u);
    /* 0078cf81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cf83: je 0x78cf96 */ if (fZ) goto L_0078cf96;
L_0078cf85:; BB(0x0078cf85);
    /* 0078cf85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078cf86: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x78cf8bu); f_0082e960();
    /* 0078cf8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078cf8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078cf8f: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_0078cf96:; BB(0x0078cf96);
    /* 0078cf96: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078cf9d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78cfa2u); f_008171e8();
    /* 0078cfa2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078cfa5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078cfac: mov esp, ebp */ r_esp = r_ebp;
    /* 0078cfae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078cfaf: ret  */ FN_RET(0x0078cf44); r_esp += 4; return;
}

void f_0078cfb0(void) /* sub_78CFB0 */
{
    FN_ENTER(0x0078cfb0);
    /* 0078cfb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078cfb1: mov edi, ecx */ r_edi = r_ecx;
    /* 0078cfb3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078cfb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0078cfb9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78cfbeu); f_008193cc();
    /* 0078cfbe: mov dword ptr [edi], 0xb453f8 */ W32((u32)(r_edi), 0xb453f8u);
    /* 0078cfc4: mov edx, dword ptr [0x9fe428] */ r_edx = R32((u32)(0x9fe428u));
    /* 0078cfca: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0078cfcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078cfcf: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0078cfd2: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0078cfd5: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0078cfd8: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0078cfdb: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0078cfde: mov eax, edi */ r_eax = r_edi;
    /* 0078cfe0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078cfe1: ret 4 */ FN_RET(0x0078cfb0); r_esp += 8; return;
}

void f_0078cfe4(void) /* sub_78CFE4 */
{
    FN_ENTER(0x0078cfe4);
    /* 0078cfe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078cfe5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078cfe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078cfe7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078cfe8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078cfe9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078cfeb: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 0078cfee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078cff0: je 0x78d075 */ if (fZ) goto L_0078d075;
L_0078cff6:; BB(0x0078cff6);
    /* 0078cff6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x78cffbu); f_0082d7b0();
    /* 0078cffb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078cffd: call 0x83c670 */ r_esp -= 4; W32(r_esp, 0x78d002u); f_0083c670();
    /* 0078d002: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0078d005: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 0078d008: movsx esi, byte ptr [edx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0078d00b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d00d: jl 0x78d070 */ if ((fS!=fO)) goto L_0078d070;
L_0078d00f:; BB(0x0078d00f);
    /* 0078d00f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0078d012: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 0078d015: lea esi, [edx + 8] */ r_esi = (u32)(r_edx+0x8u);
    /* 0078d018: mov ebp, eax */ r_ebp = r_eax;
    /* 0078d01a: mov edi, edx */ r_edi = r_edx;
    /* 0078d01c: mov ebx, ecx */ r_ebx = r_ecx;
L_0078d01e:; BB(0x0078d01e);
    /* 0078d01e: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0078d021: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0078d024: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x78d029u); f_0082d7b0();
    /* 0078d029: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0078d02c: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0078d02f: movsx edx, byte ptr [edi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 0078d032: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d034: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d036: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d038: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d03a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d03c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d03e: add edx, dword ptr [eax + 0xe0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d044: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d046: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x78d04bu); f_00831308();
    /* 0078d04b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078d04c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d04e: mov edx, esi */ r_edx = r_esi;
    /* 0078d050: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x78d055u); f_00830aa0();
    /* 0078d055: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78d05au); f_0082da80();
    /* 0078d05a: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d05d: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078d060: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 0078d063: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d066: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d069: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d06b: jge 0x78d01e */ if ((fS==fO)) goto L_0078d01e;
L_0078d06d:; BB(0x0078d06d);
    /* 0078d06d: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0078d070:; BB(0x0078d070);
    /* 0078d070: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78d075u); f_0082da80();
L_0078d075:; BB(0x0078d075);
    /* 0078d075: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x78d07au); f_0082d7b0();
    /* 0078d07a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d07c: call 0x83c670 */ r_esp -= 4; W32(r_esp, 0x78d081u); f_0083c670();
    /* 0078d081: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0078d084: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0078d087: movsx esi, byte ptr [edx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0078d08a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d08c: jl 0x78d0f8 */ if ((fS!=fO)) goto L_0078d0f8;
L_0078d08e:; BB(0x0078d08e);
    /* 0078d08e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0078d091: lea ecx, [eax + 4] */ r_ecx = (u32)(r_eax+0x4u);
    /* 0078d094: lea esi, [edx + 8] */ r_esi = (u32)(r_edx+0x8u);
    /* 0078d097: mov ebp, eax */ r_ebp = r_eax;
    /* 0078d099: mov edi, edx */ r_edi = r_edx;
    /* 0078d09b: mov ebx, ecx */ r_ebx = r_ecx;
L_0078d09d:; BB(0x0078d09d);
    /* 0078d09d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0078d0a0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0078d0a3: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0078d0a6: add eax, dword ptr [edi + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078d0a9: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 0078d0ac: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x78d0b1u); f_0082d7b0();
    /* 0078d0b1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0078d0b4: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0078d0b7: movsx edx, byte ptr [edi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 0078d0ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d0bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d0be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d0c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d0c2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d0c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d0c6: add edx, dword ptr [eax + 0xe0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078d0cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d0ce: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x78d0d3u); f_00831308();
    /* 0078d0d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078d0d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078d0d6: mov edx, esi */ r_edx = r_esi;
    /* 0078d0d8: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x78d0ddu); f_00830aa0();
    /* 0078d0dd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78d0e2u); f_0082da80();
    /* 0078d0e2: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078d0e5: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078d0e8: movsx eax, byte ptr [edi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 0078d0eb: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078d0ee: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078d0f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0078d0f3: jge 0x78d09d */ if ((fS==fO)) goto L_0078d09d;
L_0078d0f5:; BB(0x0078d0f5);
    /* 0078d0f5: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0078d0f8:; BB(0x0078d0f8);
    /* 0078d0f8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x78d0fdu); f_0082da80();
    /* 0078d0fd: movzx eax, byte ptr [0xa9c9e8] */ r_eax = (u32)R8((u32)(0xa9c9e8u));
    /* 0078d104: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078d106: jne 0x78d11c */ if (!fZ) goto L_0078d11c;
L_0078d108:; BB(0x0078d108);
    /* 0078d108: mov dword ptr [0xa9ca10], 0xbf400000 */ W32((u32)(0xa9ca10u), 0xbf400000u);
    /* 0078d112: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078d117: mov byte ptr [0xa9c9e8], al */ W8((u32)(0xa9c9e8u), (u8)r_eax);
L_0078d11c:; BB(0x0078d11c);
    /* 0078d11c: push 0xa9ca0c */ { u32 v = 0xa9ca0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078d121: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078d123: call 0x78d130 */ r_esp -= 4; W32(r_esp, 0x78d128u); f_0078d130();
    /* 0078d128: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078d129: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078d12a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078d12b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078d12c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078d12d: ret  */ FN_RET(0x0078cfe4); r_esp += 4; return;
}

