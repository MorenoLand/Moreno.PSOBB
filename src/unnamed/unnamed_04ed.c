#include "protos.h"

void f_004ed008(void) /* sub_4ED008 */
{
    FN_ENTER(0x004ed008);
    /* 004ed008: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed009: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed00a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed00d: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4ed012u); f_007a9380();
    /* 004ed012: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4ed017u); f_0082dbac();
    /* 004ed017: mov edx, 0xc */ r_edx = 0xcu;
    /* 004ed01c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ed01e: mov ebx, eax */ r_ebx = r_eax;
    /* 004ed020: mov esi, edx */ r_esi = r_edx;
L_004ed022:; BB(0x004ed022);
    /* 004ed022: lea ecx, [ebx + 0x91dbe0] */ r_ecx = (u32)(r_ebx+0x91dbe0u);
    /* 004ed028: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed029: push 0xc61b3c00 */ { u32 v = 0xc61b3c00u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed02e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed02f: call 0x4e9ce8 */ r_esp -= 4; W32(r_esp, 0x4ed034u); f_004e9ce8();
    /* 004ed034: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed037: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ed03a: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ed03d: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed040: jl 0x4ed022 */ if ((fS!=fO)) goto L_004ed022;
L_004ed042:; BB(0x004ed042);
    /* 004ed042: mov edx, 0xc */ r_edx = 0xcu;
    /* 004ed047: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ed049: mov ebx, eax */ r_ebx = r_eax;
    /* 004ed04b: mov esi, edx */ r_esi = r_edx;
L_004ed04d:; BB(0x004ed04d);
    /* 004ed04d: lea ecx, [ebx + 0x91dbd0] */ r_ecx = (u32)(r_ebx+0x91dbd0u);
    /* 004ed053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed054: push 0xc61b3c00 */ { u32 v = 0xc61b3c00u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed059: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed05a: call 0x4e9ce8 */ r_esp -= 4; W32(r_esp, 0x4ed05fu); f_004e9ce8();
    /* 004ed05f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed062: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ed065: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ed068: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed06b: jl 0x4ed04d */ if ((fS!=fO)) goto L_004ed04d;
L_004ed06d:; BB(0x004ed06d);
    /* 004ed06d: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x4ed072u); f_004d28a4();
    /* 004ed072: movzx eax, byte ptr [0xa722dc] */ r_eax = (u32)R8((u32)(0xa722dcu));
    /* 004ed079: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ed07b: jne 0x4ed0d7 */ if (!fZ) goto L_004ed0d7;
L_004ed07d:; BB(0x004ed07d);
    /* 004ed07d: mov dword ptr [0xa722e0], 0x430c0000 */ W32((u32)(0xa722e0u), 0x430c0000u);
    /* 004ed087: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ed08c: mov byte ptr [0xa722dc], al */ W8((u32)(0xa722dcu), (u8)r_eax);
    /* 004ed091: mov dword ptr [0xa722e4], 0 */ W32((u32)(0xa722e4u), 0x0u);
    /* 004ed09b: mov dword ptr [0xa722e8], 0x43c00000 */ W32((u32)(0xa722e8u), 0x43c00000u);
    /* 004ed0a5: mov dword ptr [0xa722ec], 0 */ W32((u32)(0xa722ecu), 0x0u);
    /* 004ed0af: mov dword ptr [0xa722f0], 0x43c00000 */ W32((u32)(0xa722f0u), 0x43c00000u);
    /* 004ed0b9: mov dword ptr [0xa722f4], 0x44160000 */ W32((u32)(0xa722f4u), 0x44160000u);
    /* 004ed0c3: mov dword ptr [0xa722f8], 0x430c0000 */ W32((u32)(0xa722f8u), 0x430c0000u);
    /* 004ed0cd: mov dword ptr [0xa722fc], 0x44160000 */ W32((u32)(0xa722fcu), 0x44160000u);
L_004ed0d7:; BB(0x004ed0d7);
    /* 004ed0d7: mov dword ptr [esp + 4], 0x9b8de4 */ W32((u32)(r_esp+0x4u), 0x9b8de4u);
    /* 004ed0df: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004ed0e2: mov eax, 4 */ r_eax = 0x4u;
    /* 004ed0e7: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004ed0ef: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004ed0f3: mov dword ptr [esp], 0xa722e0 */ W32((u32)(r_esp), 0xa722e0u);
    /* 004ed0fa: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed0fc: push 0xc61b3800 */ { u32 v = 0xc61b3800u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed102: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed103: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4ed108u); f_0082b5d8();
    /* 004ed108: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed10b: movzx eax, byte ptr [0xa722dc] */ r_eax = (u32)R8((u32)(0xa722dcu));
    /* 004ed112: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ed114: jne 0x4ed152 */ if (!fZ) goto L_004ed152;
L_004ed116:; BB(0x004ed116);
    /* 004ed116: mov dword ptr [0x9b8dcc], 0x43c00000 */ W32((u32)(0x9b8dccu), 0x43c00000u);
    /* 004ed120: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ed125: mov byte ptr [0xa722dc], al */ W8((u32)(0xa722dcu), (u8)r_eax);
    /* 004ed12a: mov dword ptr [0x9b8dd0], 0 */ W32((u32)(0x9b8dd0u), 0x0u);
    /* 004ed134: mov dword ptr [0x9b8dd4], 0x43c00000 */ W32((u32)(0x9b8dd4u), 0x43c00000u);
    /* 004ed13e: mov dword ptr [0x9b8dd8], 0x44160000 */ W32((u32)(0x9b8dd8u), 0x44160000u);
    /* 004ed148: mov dword ptr [0x9b8de0], 0x44160000 */ W32((u32)(0x9b8de0u), 0x44160000u);
L_004ed152:; BB(0x004ed152);
    /* 004ed152: mov dword ptr [esp + 4], 0x9b8db4 */ W32((u32)(r_esp+0x4u), 0x9b8db4u);
    /* 004ed15a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ed15d: mov dword ptr [esp], 0x9b8dc4 */ W32((u32)(r_esp), 0x9b8dc4u);
    /* 004ed164: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed166: push 0xc61b3800 */ { u32 v = 0xc61b3800u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed16b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed16d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed16e: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4ed173u); f_0082b5d8();
    /* 004ed173: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed176: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4ed17bu); f_004d2968();
    /* 004ed17b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4ed180u); f_0082dab0();
    /* 004ed180: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4ed185u); f_007a9318();
    /* 004ed185: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed188: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed189: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed18a: ret  */ FN_RET(0x004ed008); r_esp += 4; return;
}

void f_004ed18c(void) /* sub_4ED18C */
{
    FN_ENTER(0x004ed18c);
    /* 004ed18c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed18d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed18f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ed191: push 0x8d2aa8 */ { u32 v = 0x8d2aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed196: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ed19c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed19d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ed1a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed1a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ed1aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ed1ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ed1b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ed1b3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ed1b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ed1bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ed1c1u); f_005caba4();
    /* 004ed1c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed1c2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ed1c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed1c7: je 0x4ed1fa */ if (fZ) goto L_004ed1fa;
L_004ed1c9:; BB(0x004ed1c9);
    /* 004ed1c9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ed1d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ed1d7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed1da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed1dd: call 0x4ed200 */ r_esp -= 4; W32(r_esp, 0x4ed1e2u); f_004ed200();
    /* 004ed1e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed1e5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ed1ec:; BB(0x004ed1ec);
    /* 004ed1ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed1ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ed1f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed1f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed1f9: ret  */ FN_RET(0x004ed18c); r_esp += 4; return;
L_004ed1fa:; BB(0x004ed1fa);
    /* 004ed1fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed1fc: jmp 0x4ed1ec */ goto L_004ed1ec;
}

void f_004ed200(void) /* sub_4ED200 */
{
    FN_ENTER(0x004ed200);
    /* 004ed200: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed201: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ed203: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed207: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ed209: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ed20eu); f_008193cc();
    /* 004ed20e: mov dword ptr [ebx], 0xafd648 */ W32((u32)(r_ebx), 0xafd648u);
    /* 004ed214: mov edx, dword ptr [0x9b8db0] */ r_edx = R32((u32)(0x9b8db0u));
    /* 004ed21a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004ed21d: mov eax, ebx */ r_eax = r_ebx;
    /* 004ed21f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed220: ret 4 */ FN_RET(0x004ed200); r_esp += 8; return;
}

void f_004ed224(void) /* sub_4ED224 */
{
    FN_ENTER(0x004ed224);
    /* 004ed224: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed225: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ed227: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ed229: call 0x4ed248 */ r_esp -= 4; W32(r_esp, 0x4ed22eu); f_004ed248();
    /* 004ed22e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ed232: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed234: jne 0x4ed23a */ if (!fZ) goto L_004ed23a;
L_004ed236:; BB(0x004ed236);
    /* 004ed236: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed237: ret 4 */ FN_RET(0x004ed224); r_esp += 8; return;
L_004ed23a:; BB(0x004ed23a);
    /* 004ed23a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed23b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ed240u); f_005c2f74();
    /* 004ed240: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed241: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed242: ret 4 */ FN_RET(0x004ed224); r_esp += 8; return;
}

void f_004ed248(void) /* sub_4ED248 */
{
    FN_ENTER(0x004ed248);
    /* 004ed248: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed249: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed24b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ed24d: push 0x8d2ac4 */ { u32 v = 0x8d2ac4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed252: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ed258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed259: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ed260: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed263: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ed266: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ed269: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ed26c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ed26f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ed272: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ed279: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed27c: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004ed27f: mov dword ptr [ecx], 0xafd6a8 */ W32((u32)(r_ecx), 0xafd6a8u);
    /* 004ed285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed287: je 0x4ed2ab */ if (fZ) goto L_004ed2ab;
L_004ed289:; BB(0x004ed289);
    /* 004ed289: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed28a: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x4ed28fu); f_0086dc94();
    /* 004ed28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed290: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed293: je 0x4ed2e5 */ if (fZ) goto L_004ed2e5;
L_004ed295:; BB(0x004ed295);
    /* 004ed295: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed298: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed29b: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x4ed2a0u); f_0086db40();
    /* 004ed2a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed2a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed2a4: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_004ed2ab:; BB(0x004ed2ab);
    /* 004ed2ab: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 004ed2ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed2b0: je 0x4ed2c3 */ if (fZ) goto L_004ed2c3;
L_004ed2b2:; BB(0x004ed2b2);
    /* 004ed2b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed2b3: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4ed2b8u); f_0082e960();
    /* 004ed2b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed2b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed2bc: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_004ed2c3:; BB(0x004ed2c3);
    /* 004ed2c3: call 0x4ed454 */ r_esp -= 4; W32(r_esp, 0x4ed2c8u); f_004ed454();
    /* 004ed2c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ed2cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed2d2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ed2d7u); f_008171e8();
    /* 004ed2d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed2da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ed2e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed2e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed2e4: ret  */ FN_RET(0x004ed248); r_esp += 4; return;
L_004ed2e5:; BB(0x004ed2e5);
    /* 004ed2e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed2e8: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed2eb: call 0x86dcf4 */ r_esp -= 4; W32(r_esp, 0x4ed2f0u); f_0086dcf4();
    /* 004ed2f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed2f1: jmp 0x4ed295 */ goto L_004ed295;
}

void f_004ed2f4(void) /* sub_4ED2F4 */
{
    FN_ENTER(0x004ed2f4);
    /* 004ed2f4: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 004ed2f7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed2fa: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 004ed2fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed2ff: jl 0x4ed30c */ if ((fS!=fO)) goto L_004ed30c;
L_004ed301:; BB(0x004ed301);
    /* 004ed301: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 004ed304: call dword ptr [eax*4 + 0x9b8df4] */ { u32 t = R32((u32)(r_eax*4+0x9b8df4u)); r_esp -= 4; W32(r_esp, 0x4ed30bu); call_ind(t); }
    /* 004ed30b: ret  */ FN_RET(0x004ed2f4); r_esp += 4; return;
L_004ed30c:; BB(0x004ed30c);
    /* 004ed30c: mov dword ptr [ecx + 0x2c], 3 */ W32((u32)(r_ecx+0x2cu), 0x3u);
    /* 004ed313: ret  */ FN_RET(0x004ed2f4); r_esp += 4; return;
}

void f_004ed314(void) /* sub_4ED314 */
{
    FN_ENTER(0x004ed314);
    /* 004ed314: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed315: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed316: mov edi, ecx */ r_edi = r_ecx;
    /* 004ed318: mov ecx, edi */ r_ecx = r_edi;
    /* 004ed31a: call 0x4ed384 */ r_esp -= 4; W32(r_esp, 0x4ed31fu); f_004ed384();
    /* 004ed31f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed321: jne 0x4ed326 */ if (!fZ) goto L_004ed326;
L_004ed323:; BB(0x004ed323);
    /* 004ed323: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed324: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ed325: ret  */ FN_RET(0x004ed314); r_esp += 4; return;
L_004ed326:; BB(0x004ed326);
    /* 004ed326: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed329: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed32c: call 0x86dab0 */ r_esp -= 4; W32(r_esp, 0x4ed331u); f_0086dab0();
    /* 004ed331: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed334: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004ed337: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed339: je 0x4ed36f */ if (fZ) goto L_004ed36f;
L_004ed33b:; BB(0x004ed33b);
    /* 004ed33b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed33c: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x4ed341u); f_0086dc64();
    /* 004ed341: mov esi, eax */ r_esi = r_eax;
    /* 004ed343: mov edx, esi */ r_edx = r_esi;
    /* 004ed345: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004ed348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed349: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4ed34eu); f_0082e940();
    /* 004ed34e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed351: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004ed354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed356: je 0x4ed379 */ if (fZ) goto L_004ed379;
L_004ed358:; BB(0x004ed358);
    /* 004ed358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed359: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed35a: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed35d: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x4ed362u); f_0086db64();
    /* 004ed362: mov dword ptr [edi + 0x2c], 1 */ W32((u32)(r_edi+0x2cu), 0x1u);
    /* 004ed369: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed36c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed36d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ed36e: ret  */ FN_RET(0x004ed314); r_esp += 4; return;
L_004ed36f:; BB(0x004ed36f);
    /* 004ed36f: mov dword ptr [edi + 0x2c], 3 */ W32((u32)(r_edi+0x2cu), 0x3u);
    /* 004ed376: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed377: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ed378: ret  */ FN_RET(0x004ed314); r_esp += 4; return;
L_004ed379:; BB(0x004ed379);
    /* 004ed379: mov dword ptr [edi + 0x2c], 3 */ W32((u32)(r_edi+0x2cu), 0x3u);
    /* 004ed380: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed381: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ed382: ret  */ FN_RET(0x004ed314); r_esp += 4; return;
}

void f_004ed384(void) /* sub_4ED384 */
{
    FN_ENTER(0x004ed384);
    /* 004ed384: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004ed387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed389: jne 0x4ed3ab */ if (!fZ) goto L_004ed3ab;
L_004ed38b:; BB(0x004ed38b);
    /* 004ed38b: mov eax, dword ptr [0xa72304] */ r_eax = R32((u32)(0xa72304u));
    /* 004ed390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed392: je 0x4ed397 */ if (fZ) goto L_004ed397;
L_004ed394:; BB(0x004ed394);
    /* 004ed394: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed396: ret  */ FN_RET(0x004ed384); r_esp += 4; return;
L_004ed397:; BB(0x004ed397);
    /* 004ed397: mov edx, 1 */ r_edx = 0x1u;
    /* 004ed39c: mov dword ptr [0xa72304], edx */ W32((u32)(0xa72304u), r_edx);
    /* 004ed3a2: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 004ed3a5: mov eax, 1 */ r_eax = 0x1u;
    /* 004ed3aa: ret  */ FN_RET(0x004ed384); r_esp += 4; return;
L_004ed3ab:; BB(0x004ed3ab);
    /* 004ed3ab: mov dword ptr [ecx + 0x2c], 3 */ W32((u32)(r_ecx+0x2cu), 0x3u);
    /* 004ed3b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed3b4: ret  */ FN_RET(0x004ed384); r_esp += 4; return;
}

void f_004ed3b8(void) /* sub_4ED3B8 */
{
    FN_ENTER(0x004ed3b8);
    /* 004ed3b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed3b9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ed3bb: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed3be: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x4ed3c3u); f_0086dc94();
    /* 004ed3c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed3c4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ed3c7: je 0x4ed408 */ if (fZ) goto L_004ed408;
L_004ed3c9:; BB(0x004ed3c9);
    /* 004ed3c9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed3cc: jne 0x4ed3ee */ if (!fZ) goto L_004ed3ee;
L_004ed3ce:; BB(0x004ed3ce);
    /* 004ed3ce: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed3d1: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x4ed3d6u); f_0086db40();
    /* 004ed3d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed3d7: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 004ed3de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ed3e0: call 0x4ed454 */ r_esp -= 4; W32(r_esp, 0x4ed3e5u); f_004ed454();
    /* 004ed3e5: mov dword ptr [ebp + 0x2c], 2 */ W32((u32)(r_ebp+0x2cu), 0x2u);
    /* 004ed3ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed3ed: ret  */ FN_RET(0x004ed3b8); r_esp += 4; return;
L_004ed3ee:; BB(0x004ed3ee);
    /* 004ed3ee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ed3f1: jne 0x4ed40a */ if (!fZ) goto L_004ed40a;
L_004ed3f3:; BB(0x004ed3f3);
    /* 004ed3f3: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004ed3f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed3f9: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 004ed3fc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ed3ff: jle 0x4ed413 */ if ((fZ||fS!=fO)) goto L_004ed413;
L_004ed401:; BB(0x004ed401);
    /* 004ed401: mov dword ptr [ebp + 0x2c], 3 */ W32((u32)(r_ebp+0x2cu), 0x3u);
L_004ed408:; BB(0x004ed408);
    /* 004ed408: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed409: ret  */ FN_RET(0x004ed3b8); r_esp += 4; return;
L_004ed40a:; BB(0x004ed40a);
    /* 004ed40a: mov dword ptr [ebp + 0x2c], 3 */ W32((u32)(r_ebp+0x2cu), 0x3u);
    /* 004ed411: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed412: ret  */ FN_RET(0x004ed3b8); r_esp += 4; return;
L_004ed413:; BB(0x004ed413);
    /* 004ed413: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed416: call 0x86dcf4 */ r_esp -= 4; W32(r_esp, 0x4ed41bu); f_0086dcf4();
    /* 004ed41b: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed41e: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x4ed423u); f_0086db40();
    /* 004ed423: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed426: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004ed429: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 004ed430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed432: je 0x4ed442 */ if (fZ) goto L_004ed442;
L_004ed434:; BB(0x004ed434);
    /* 004ed434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed435: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4ed43au); f_0082e960();
    /* 004ed43a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed43b: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
L_004ed442:; BB(0x004ed442);
    /* 004ed442: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ed444: call 0x4ed454 */ r_esp -= 4; W32(r_esp, 0x4ed449u); f_004ed454();
    /* 004ed449: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 004ed450: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed451: ret  */ FN_RET(0x004ed3b8); r_esp += 4; return;
}

void f_004ed454(void) /* sub_4ED454 */
{
    FN_ENTER(0x004ed454);
    /* 004ed454: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004ed457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed459: je 0x4ed477 */ if (fZ) goto L_004ed477;
L_004ed45b:; BB(0x004ed45b);
    /* 004ed45b: mov eax, dword ptr [0xa72304] */ r_eax = R32((u32)(0xa72304u));
    /* 004ed460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed462: jne 0x4ed46c */ if (!fZ) goto L_004ed46c;
L_004ed464:; BB(0x004ed464);
    /* 004ed464: mov dword ptr [ecx + 0x2c], 3 */ W32((u32)(r_ecx+0x2cu), 0x3u);
    /* 004ed46b: ret  */ FN_RET(0x004ed454); r_esp += 4; return;
L_004ed46c:; BB(0x004ed46c);
    /* 004ed46c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed46e: mov dword ptr [0xa72304], eax */ W32((u32)(0xa72304u), r_eax);
    /* 004ed473: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004ed476: ret  */ FN_RET(0x004ed454); r_esp += 4; return;
L_004ed477:; BB(0x004ed477);
    /* 004ed477: ret  */ FN_RET(0x004ed454); r_esp += 4; return;
}

void f_004ed478(void) /* sub_4ED478 */
{
    FN_ENTER(0x004ed478);
    /* 004ed478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed479: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed47b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ed47d: push 0x8d2aec */ { u32 v = 0x8d2aecu; r_esp -= 4; W32(r_esp, v); }
    /* 004ed482: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ed488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed489: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ed490: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed493: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ed496: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ed499: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ed49c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ed49f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ed4a1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ed4a8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ed4adu); f_005caba4();
    /* 004ed4ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed4ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ed4b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed4b3: je 0x4ed4ec */ if (fZ) goto L_004ed4ec;
L_004ed4b5:; BB(0x004ed4b5);
    /* 004ed4b5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ed4bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ed4c3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed4c6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed4c9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed4cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed4cf: call 0x4ed4f0 */ r_esp -= 4; W32(r_esp, 0x4ed4d4u); f_004ed4f0();
    /* 004ed4d4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed4d7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ed4de:; BB(0x004ed4de);
    /* 004ed4de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed4e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ed4e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed4ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed4eb: ret  */ FN_RET(0x004ed478); r_esp += 4; return;
L_004ed4ec:; BB(0x004ed4ec);
    /* 004ed4ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed4ee: jmp 0x4ed4de */ goto L_004ed4de;
}

void f_004ed4f0(void) /* sub_4ED4F0 */
{
    FN_ENTER(0x004ed4f0);
    /* 004ed4f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed4f1: mov esi, ecx */ r_esi = r_ecx;
    /* 004ed4f3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed4f7: mov ecx, esi */ r_ecx = r_esi;
    /* 004ed4f9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ed4feu); f_008193cc();
    /* 004ed4fe: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004ed502: mov dword ptr [esi], 0xafd6a8 */ W32((u32)(r_esi), 0xafd6a8u);
    /* 004ed508: mov edx, dword ptr [0x9b8e04] */ r_edx = R32((u32)(0x9b8e04u));
    /* 004ed50e: mov dword ptr [esi + 0x34], 0x384 */ W32((u32)(r_esi+0x34u), 0x384u);
    /* 004ed515: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 004ed518: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed51a: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004ed51d: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004ed520: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ed524: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 004ed527: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004ed52a: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004ed52d: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004ed530: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004ed533: mov eax, esi */ r_eax = r_esi;
    /* 004ed535: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed536: ret 0xc */ FN_RET(0x004ed4f0); r_esp += 16; return;
}

void f_004ed53c(void) /* sub_4ED53C */
{
    FN_ENTER(0x004ed53c);
    /* 004ed53c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed53d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ed53f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ed541: push 0x8d2b08 */ { u32 v = 0x8d2b08u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed546: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ed54c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed54d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ed554: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed557: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ed55a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ed55d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ed560: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ed563: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004ed566: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004ed569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed56b: mov dword ptr [ecx], 0xafd730 */ W32((u32)(r_ecx), 0xafd730u);
    /* 004ed571: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ed574: jne 0x4ed5a7 */ if (!fZ) goto L_004ed5a7;
L_004ed576:; BB(0x004ed576);
    /* 004ed576: mov eax, ecx */ r_eax = r_ecx;
    /* 004ed578: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004ed57b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed57d: je 0x4ed5a7 */ if (fZ) goto L_004ed5a7;
L_004ed57f:; BB(0x004ed57f);
    /* 004ed57f: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed582: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x4ed587u); f_0086dc94();
    /* 004ed587: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed588: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed58b: je 0x4ed64a */ if (fZ) goto L_004ed64a;
L_004ed591:; BB(0x004ed591);
    /* 004ed591: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed594: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed597: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x4ed59cu); f_0086db40();
    /* 004ed59c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed59d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed5a0: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_004ed5a7:; BB(0x004ed5a7);
    /* 004ed5a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed5aa: call 0x4ed65c */ r_esp -= 4; W32(r_esp, 0x4ed5afu); f_004ed65c();
    /* 004ed5af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed5b2: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004ed5b5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ed5b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed5b9: jle 0x4ed5e5 */ if ((fZ||fS!=fO)) goto L_004ed5e5;
L_004ed5bb:; BB(0x004ed5bb);
    /* 004ed5bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed5be: mov eax, dword ptr [eax + esi*4 + 0x38] */ r_eax = R32((u32)(r_eax+r_esi*4+0x38u));
    /* 004ed5c2: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004ed5c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed5c7: je 0x4ed5de */ if (fZ) goto L_004ed5de;
L_004ed5c9:; BB(0x004ed5c9);
    /* 004ed5c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed5ca: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4ed5cfu); f_0082e960();
    /* 004ed5cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed5d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed5d3: mov dword ptr [eax + ebx*2 + 0x38], 0 */ W32((u32)(r_eax+r_ebx*2+0x38u), 0x0u);
    /* 004ed5db: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
L_004ed5de:; BB(0x004ed5de);
    /* 004ed5de: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ed5e1: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed5e3: jl 0x4ed5bb */ if ((fS!=fO)) goto L_004ed5bb;
L_004ed5e5:; BB(0x004ed5e5);
    /* 004ed5e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed5e8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004ed5eb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed5ee: je 0x4ed62b */ if (fZ) goto L_004ed62b;
L_004ed5f0:; BB(0x004ed5f0);
    /* 004ed5f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ed5f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed5fa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ed5ffu); f_008171e8();
    /* 004ed5ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004ed602: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed604: jne 0x4ed61f */ if (!fZ) goto L_004ed61f;
L_004ed606:; BB(0x004ed606);
    /* 004ed606: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ed609: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ed60c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ed60f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ed612: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ed619: mov esp, ebp */ r_esp = r_ebp;
    /* 004ed61b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed61c: ret 4 */ FN_RET(0x004ed53c); r_esp += 8; return;
L_004ed61f:; BB(0x004ed61f);
    /* 004ed61f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed623: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ed628u); f_005c2f74();
    /* 004ed628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed629: jmp 0x4ed606 */ goto L_004ed606;
L_004ed62b:; BB(0x004ed62b);
    /* 004ed62b: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004ed62e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed630: je 0x4ed63b */ if (fZ) goto L_004ed63b;
L_004ed632:; BB(0x004ed632);
    /* 004ed632: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 004ed635: not edx */ r_edx = ~r_edx;
    /* 004ed637: and dword ptr [ecx], edx */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004ed639: jmp 0x4ed5f0 */ goto L_004ed5f0;
L_004ed63b:; BB(0x004ed63b);
    /* 004ed63b: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 004ed63e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed640: je 0x4ed5f0 */ if (fZ) goto L_004ed5f0;
L_004ed642:; BB(0x004ed642);
    /* 004ed642: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 004ed648: jmp 0x4ed5f0 */ goto L_004ed5f0;
L_004ed64a:; BB(0x004ed64a);
    /* 004ed64a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ed64d: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed650: call 0x86dcf4 */ r_esp -= 4; W32(r_esp, 0x4ed655u); f_0086dcf4();
    /* 004ed655: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed656: jmp 0x4ed591 */ goto L_004ed591;
}

void f_004ed65c(void) /* sub_4ED65C */
{
    FN_ENTER(0x004ed65c);
    /* 004ed65c: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 004ed65f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed661: je 0x4ed681 */ if (fZ) goto L_004ed681;
L_004ed663:; BB(0x004ed663);
    /* 004ed663: mov eax, dword ptr [0xa7230c] */ r_eax = R32((u32)(0xa7230cu));
    /* 004ed668: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ed66b: jg 0x4ed681 */ if ((!fZ&&fS==fO)) goto L_004ed681;
L_004ed66d:; BB(0x004ed66d);
    /* 004ed66d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed670: mov dword ptr [0xa7230c], eax */ W32((u32)(0xa7230cu), r_eax);
    /* 004ed675: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed677: jl 0x4ed681 */ if ((fS!=fO)) goto L_004ed681;
L_004ed679:; BB(0x004ed679);
    /* 004ed679: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 004ed680: ret  */ FN_RET(0x004ed65c); r_esp += 4; return;
L_004ed681:; BB(0x004ed681);
    /* 004ed681: ret  */ FN_RET(0x004ed65c); r_esp += 4; return;
}

void f_004ed684(void) /* sub_4ED684 */
{
    FN_ENTER(0x004ed684);
    /* 004ed684: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 004ed687: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ed68a: je 0x4ed6ac */ if (fZ) goto L_004ed6ac;
L_004ed68c:; BB(0x004ed68c);
    /* 004ed68c: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 004ed68f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed692: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 004ed695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed697: jle 0x4ed6ac */ if ((fZ||fS!=fO)) goto L_004ed6ac;
L_004ed699:; BB(0x004ed699);
    /* 004ed699: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 004ed69c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed69e: jl 0x4ed6ad */ if ((fS!=fO)) goto L_004ed6ad;
L_004ed6a0:; BB(0x004ed6a0);
    /* 004ed6a0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed6a3: jge 0x4ed6ad */ if ((fS==fO)) goto L_004ed6ad;
L_004ed6a5:; BB(0x004ed6a5);
    /* 004ed6a5: call dword ptr [eax*4 + 0x9b8e08] */ { u32 t = R32((u32)(r_eax*4+0x9b8e08u)); r_esp -= 4; W32(r_esp, 0x4ed6acu); call_ind(t); }
L_004ed6ac:; BB(0x004ed6ac);
    /* 004ed6ac: ret  */ FN_RET(0x004ed684); r_esp += 4; return;
L_004ed6ad:; BB(0x004ed6ad);
    /* 004ed6ad: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004ed6b1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed6b6: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004ed6ba: ret  */ FN_RET(0x004ed684); r_esp += 4; return;
}

void f_004ed6bc(void) /* sub_4ED6BC */
{
    FN_ENTER(0x004ed6bc);
    /* 004ed6bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed6bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ed6bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ed6c1: call 0x4ed6d4 */ r_esp -= 4; W32(r_esp, 0x4ed6c6u); f_004ed6d4();
    /* 004ed6c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed6c8: je 0x4ed6d1 */ if (fZ) goto L_004ed6d1;
L_004ed6ca:; BB(0x004ed6ca);
    /* 004ed6ca: mov dword ptr [ebx + 0x2c], 1 */ W32((u32)(r_ebx+0x2cu), 0x1u);
L_004ed6d1:; BB(0x004ed6d1);
    /* 004ed6d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed6d2: ret  */ FN_RET(0x004ed6bc); r_esp += 4; return;
}

void f_004ed6d4(void) /* sub_4ED6D4 */
{
    FN_ENTER(0x004ed6d4);
    /* 004ed6d4: mov edx, dword ptr [0xa7230c] */ r_edx = R32((u32)(0xa7230cu));
    /* 004ed6da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed6dc: jl 0x4ed6f0 */ if ((fS!=fO)) goto L_004ed6f0;
L_004ed6de:; BB(0x004ed6de);
    /* 004ed6de: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed6e1: jg 0x4ed6f0 */ if ((!fZ&&fS==fO)) goto L_004ed6f0;
L_004ed6e3:; BB(0x004ed6e3);
    /* 004ed6e3: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 004ed6e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed6e9: je 0x4ed6f0 */ if (fZ) goto L_004ed6f0;
L_004ed6eb:; BB(0x004ed6eb);
    /* 004ed6eb: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed6ee: jl 0x4ed6f3 */ if ((fS!=fO)) goto L_004ed6f3;
L_004ed6f0:; BB(0x004ed6f0);
    /* 004ed6f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ed6f2: ret  */ FN_RET(0x004ed6d4); r_esp += 4; return;
L_004ed6f3:; BB(0x004ed6f3);
    /* 004ed6f3: mov dword ptr [ecx + 0x68], 1 */ W32((u32)(r_ecx+0x68u), 0x1u);
    /* 004ed6fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed6fd: mov eax, 1 */ r_eax = 0x1u;
    /* 004ed702: mov dword ptr [0xa7230c], edx */ W32((u32)(0xa7230cu), r_edx);
    /* 004ed708: ret  */ FN_RET(0x004ed6d4); r_esp += 4; return;
}

void f_004ed70c(void) /* sub_4ED70C */
{
    FN_ENTER(0x004ed70c);
    /* 004ed70c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed70d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed70e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ed70f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed710: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed713: mov edi, ecx */ r_edi = r_ecx;
    /* 004ed715: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 004ed718: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 004ed71b: mov esi, dword ptr [edi + 0x70] */ r_esi = R32((u32)(r_edi+0x70u));
    /* 004ed71e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed720: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed722: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004ed725: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ed727: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004ed729: mov ebp, dword ptr [ebx + eax] */ r_ebp = R32((u32)(r_ebx+r_eax));
    /* 004ed72c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ed72e: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004ed731: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ed733: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ed735: fild dword ptr [ebx + 0x9b59e4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9b59e4u)));
    /* 004ed73b: mov eax, dword ptr [ebx + 0x9b59e4] */ r_eax = R32((u32)(r_ebx+0x9b59e4u));
    /* 004ed741: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004ed744: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004ed748: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x4ed74du); f_0084d1ac();
    /* 004ed74d: fstp qword ptr [esp + 0x28] */ W_F64((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004ed751: fld qword ptr [0x91dc20] */ FPUSH(R_F64((u32)(0x91dc20u)));
    /* 004ed757: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004ed75a: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x4ed75fu); f_0084d1ac();
    /* 004ed75f: fldz  */ FPUSH(0.0);
    /* 004ed761: fld qword ptr [esp + 0x28] */ FPUSH(R_F64((u32)(r_esp+0x28u)));
    /* 004ed765: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 004ed767: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ed769: fchs  */ ST(0) = -ST(0);
    /* 004ed76b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004ed76d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004ed771: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004ed776: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ed77b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ed77f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004ed783: frndint  */ ST(0) = fx_rint(ST(0));
    /* 004ed785: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004ed789: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ed78b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004ed78d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ed78f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ed790: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004ed792: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ed794: fld dword ptr [0x91dc2c] */ FPUSH(R_F32((u32)(0x91dc2cu)));
    /* 004ed79a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004ed79c: mov ebx, dword ptr [ebx + 0x9b59ec] */ r_ebx = R32((u32)(r_ebx+0x9b59ecu));
    /* 004ed7a2: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 004ed7a6: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004ed7ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ed7ad: jae 0x4ed7b1 */ if (!fC) goto L_004ed7b1;
L_004ed7af:; BB(0x004ed7af);
    /* 004ed7af: fst st(1) */ ST(1) = ST(0);
L_004ed7b1:; BB(0x004ed7b1);
    /* 004ed7b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ed7b2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004ed7b6: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004ed7b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ed7bb: je 0x4ed7bf */ if (fZ) goto L_004ed7bf;
L_004ed7bd:; BB(0x004ed7bd);
    /* 004ed7bd: fst st(1) */ ST(1) = ST(0);
L_004ed7bf:; BB(0x004ed7bf);
    /* 004ed7bf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ed7c1: fchs  */ ST(0) = -ST(0);
    /* 004ed7c3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004ed7c7: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004ed7cb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ed7ce: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004ed7d0: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 004ed7d3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004ed7d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed7d7: jle 0x4ed863 */ if ((fZ||fS!=fO)) goto L_004ed863;
L_004ed7dd:; BB(0x004ed7dd);
    /* 004ed7dd: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004ed7e1: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 004ed7e5: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 004ed7e9: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ed7ec: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 004ed7f0: mov ebp, ebx */ r_ebp = r_ebx;
    /* 004ed7f2: mov ebx, eax */ r_ebx = r_eax;
L_004ed7f4:; BB(0x004ed7f4);
    /* 004ed7f4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004ed7f8: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 004ed7fc: mov esi, dword ptr [edx + ecx*4] */ r_esi = R32((u32)(r_edx+r_ecx*4));
    /* 004ed7ff: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004ed802:; BB(0x004ed802);
    /* 004ed802: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004ed804: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ed806: jne 0x4ed822 */ if (!fZ) goto L_004ed822;
L_004ed808:; BB(0x004ed808);
    /* 004ed808: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004ed80a: je 0x4ed81e */ if (fZ) goto L_004ed81e;
L_004ed80c:; BB(0x004ed80c);
    /* 004ed80c: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004ed80f: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004ed812: jne 0x4ed822 */ if (!fZ) goto L_004ed822;
L_004ed814:; BB(0x004ed814);
    /* 004ed814: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ed817: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ed81a: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004ed81c: jne 0x4ed802 */ if (!fZ) goto L_004ed802;
L_004ed81e:; BB(0x004ed81e);
    /* 004ed81e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ed820: jmp 0x4ed827 */ goto L_004ed827;
L_004ed822:; BB(0x004ed822);
    /* 004ed822: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004ed824: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004ed827:; BB(0x004ed827);
    /* 004ed827: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ed82a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed82c: je 0x4ed8e2 */ if (fZ) goto L_004ed8e2;
L_004ed832:; BB(0x004ed832);
    /* 004ed832: jl 0x4ed8d1 */ if ((fS!=fO)) goto L_004ed8d1;
L_004ed838:; BB(0x004ed838);
    /* 004ed838: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 004ed83c: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ed83e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed840: jl 0x4ed845 */ if ((fS!=fO)) goto L_004ed845;
L_004ed842:; BB(0x004ed842);
    /* 004ed842: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
L_004ed845:; BB(0x004ed845);
    /* 004ed845: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ed848: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004ed84a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed84c: jg 0x4ed853 */ if ((!fZ&&fS==fO)) goto L_004ed853;
L_004ed84e:; BB(0x004ed84e);
    /* 004ed84e: mov ebx, 1 */ r_ebx = 0x1u;
L_004ed853:; BB(0x004ed853);
    /* 004ed853: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 004ed857: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed859: jl 0x4ed7f4 */ if ((fS!=fO)) goto L_004ed7f4;
L_004ed85b:; BB(0x004ed85b);
    /* 004ed85b: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 004ed85f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_004ed863:; BB(0x004ed863);
    /* 004ed863: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004ed867: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ed86c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004ed870: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004ed872:; BB(0x004ed872);
    /* 004ed872: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed873: push dword ptr [esi*8 + 0x9b59e0] */ { u32 v = R32((u32)(r_esi*8+0x9b59e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed87a: call 0x86dab0 */ r_esp -= 4; W32(r_esp, 0x4ed87fu); f_0086dab0();
    /* 004ed87f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed882: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 004ed885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed887: je 0x4ed8ec */ if (fZ) goto L_004ed8ec;
L_004ed889:; BB(0x004ed889);
    /* 004ed889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed88a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ed88c: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004ed88f: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 004ed892: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x4ed897u); f_0086dc64();
    /* 004ed897: mov ebx, eax */ r_ebx = r_eax;
    /* 004ed899: mov edx, ebx */ r_edx = r_ebx;
    /* 004ed89b: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004ed89e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed89f: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4ed8a4u); f_0082e940();
    /* 004ed8a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ed8a7: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004ed8aa: mov dword ptr [edi + edx*4 + 0x38], eax */ W32((u32)(r_edi+r_edx*4+0x38u), r_eax);
    /* 004ed8ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed8b0: je 0x4ed8ec */ if (fZ) goto L_004ed8ec;
L_004ed8b2:; BB(0x004ed8b2);
    /* 004ed8b2: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 004ed8b5: push dword ptr [edi + edx*4 + 0x38] */ { u32 v = R32((u32)(r_edi+r_edx*4+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed8b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed8ba: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed8bd: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x4ed8c2u); f_0086db64();
    /* 004ed8c2: mov dword ptr [edi + 0x2c], 2 */ W32((u32)(r_edi+0x2cu), 0x2u);
    /* 004ed8c9: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed8cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed8cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed8ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed8cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ed8d0: ret  */ FN_RET(0x004ed70c); r_esp += 4; return;
L_004ed8d1:; BB(0x004ed8d1);
    /* 004ed8d1: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004ed8d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed8d5: jge 0x4ed845 */ if ((fS==fO)) goto L_004ed845;
L_004ed8db:; BB(0x004ed8db);
    /* 004ed8db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ed8dd: jmp 0x4ed845 */ goto L_004ed845;
L_004ed8e2:; BB(0x004ed8e2);
    /* 004ed8e2: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 004ed8e6: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004ed8ea: jmp 0x4ed872 */ goto L_004ed872;
L_004ed8ec:; BB(0x004ed8ec);
    /* 004ed8ec: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed8ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed8f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ed8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed8f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ed8f3: ret  */ FN_RET(0x004ed70c); r_esp += 4; return;
}

void f_004ed8f4(void) /* sub_4ED8F4 */
{
    FN_ENTER(0x004ed8f4);
    /* 004ed8f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ed8f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ed8f6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ed8f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ed8fb: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed8fe: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x4ed903u); f_0086dc94();
    /* 004ed903: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed904: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed907: je 0x4eda02 */ if (fZ) goto L_004eda02;
L_004ed90d:; BB(0x004ed90d);
    /* 004ed90d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed910: je 0x4eda02 */ if (fZ) goto L_004eda02;
L_004ed916:; BB(0x004ed916);
    /* 004ed916: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed919: jne 0x4ed935 */ if (!fZ) goto L_004ed935;
L_004ed91b:; BB(0x004ed91b);
    /* 004ed91b: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004ed91e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed921: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 004ed924: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed929: jge 0x4eda14 */ if ((fS==fO)) goto L_004eda14;
L_004ed92f:; BB(0x004ed92f);
    /* 004ed92f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed932: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed933: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed934: ret  */ FN_RET(0x004ed8f4); r_esp += 4; return;
L_004ed935:; BB(0x004ed935);
    /* 004ed935: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed938: jne 0x4ed92f */ if (!fZ) goto L_004ed92f;
L_004ed93a:; BB(0x004ed93a);
    /* 004ed93a: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ed93d: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x4ed942u); f_0086db40();
    /* 004ed942: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ed943: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 004ed946: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 004ed949: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004ed950: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ed953: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 004ed956: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed958: jne 0x4ed9f5 */ if (!fZ) goto L_004ed9f5;
L_004ed95e:; BB(0x004ed95e);
    /* 004ed95e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ed960: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ed962: jle 0x4ed9c8 */ if ((fZ||fS!=fO)) goto L_004ed9c8;
L_004ed964:; BB(0x004ed964);
    /* 004ed964: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004ed968: mov edi, eax */ r_edi = r_eax;
    /* 004ed96a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004ed96d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004ed970: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ed972: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ed974: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ed976: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ed978: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ed97a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ed97c: lea edx, [edx + edx + 0x74] */ r_edx = (u32)(r_edx+r_edx+0x74u);
    /* 004ed980: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ed982: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004ed985: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ed987: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 004ed98a: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ed98c: mov ebp, edx */ r_ebp = r_edx;
L_004ed98e:; BB(0x004ed98e);
    /* 004ed98e: mov edx, dword ptr [ebx + edi*4 + 0x38] */ r_edx = R32((u32)(r_ebx+r_edi*4+0x38u));
    /* 004ed992: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ed994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed995: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ed997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ed999: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x4ed99eu); f_0082a9dc();
    /* 004ed99e: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed9a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ed9a5: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004ed9a8: mov ecx, esi */ r_ecx = r_esi;
    /* 004ed9aa: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ed9ac: mov edx, ebp */ r_edx = r_ebp;
    /* 004ed9ae: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x4ed9b3u); f_0082aa0c();
    /* 004ed9b3: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ed9b6: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ed9b9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ed9bc: cmp edi, dword ptr [ebx + 0x58] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x58u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ed9bf: jl 0x4ed98e */ if ((fS!=fO)) goto L_004ed98e;
L_004ed9c1:; BB(0x004ed9c1);
    /* 004ed9c1: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ed9c5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004ed9c8:; BB(0x004ed9c8);
    /* 004ed9c8: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004ed9cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ed9cd: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x4ed9d2u); f_00829e74();
    /* 004ed9d2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ed9d5: je 0x4ed92f */ if (fZ) goto L_004ed92f;
L_004ed9db:; BB(0x004ed9db);
    /* 004ed9db: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004ed9df: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 004ed9e6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ed9eb: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004ed9ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed9f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ed9f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ed9f4: ret  */ FN_RET(0x004ed8f4); r_esp += 4; return;
L_004ed9f5:; BB(0x004ed9f5);
    /* 004ed9f5: mov dword ptr [ebx + 0x2c], 1 */ W32((u32)(r_ebx+0x2cu), 0x1u);
    /* 004ed9fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ed9ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eda00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eda01: ret  */ FN_RET(0x004ed8f4); r_esp += 4; return;
L_004eda02:; BB(0x004eda02);
    /* 004eda02: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004eda05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004eda08: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 004eda0b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eda0e: jge 0x4ed92f */ if ((fS==fO)) goto L_004ed92f;
L_004eda14:; BB(0x004eda14);
    /* 004eda14: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eda17: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x4eda1cu); f_0086db40();
    /* 004eda1c: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 004eda1f: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004eda26: push dword ptr [ebx + eax*4 + 0x38] */ { u32 v = R32((u32)(r_ebx+r_eax*4+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eda2a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4eda2fu); f_0082e960();
    /* 004eda2f: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 004eda32: mov dword ptr [ebx + eax*4 + 0x38], 0 */ W32((u32)(r_ebx+r_eax*4+0x38u), 0x0u);
    /* 004eda3a: mov dword ptr [ebx + 0x2c], 1 */ W32((u32)(r_ebx+0x2cu), 0x1u);
    /* 004eda41: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eda44: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eda45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eda46: ret  */ FN_RET(0x004ed8f4); r_esp += 4; return;
}

void f_004eda48(void) /* sub_4EDA48 */
{
    FN_ENTER(0x004eda48);
    /* 004eda48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eda49: mov ebp, esp */ r_ebp = r_esp;
    /* 004eda4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eda4d: push 0x8d2b30 */ { u32 v = 0x8d2b30u; r_esp -= 4; W32(r_esp, v); }
    /* 004eda52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eda58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eda59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eda60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eda63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eda66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eda69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eda6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eda6f: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004eda74: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004eda7b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4eda80u); f_005caba4();
    /* 004eda80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eda81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004eda84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eda86: je 0x4edabc */ if (fZ) goto L_004edabc;
L_004eda88:; BB(0x004eda88);
    /* 004eda88: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004eda8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eda96: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004eda99: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eda9c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eda9f: call 0x4edac0 */ r_esp -= 4; W32(r_esp, 0x4edaa4u); f_004edac0();
    /* 004edaa4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edaa7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004edaae:; BB(0x004edaae);
    /* 004edaae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004edab1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edab8: mov esp, ebp */ r_esp = r_ebp;
    /* 004edaba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edabb: ret  */ FN_RET(0x004eda48); r_esp += 4; return;
L_004edabc:; BB(0x004edabc);
    /* 004edabc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edabe: jmp 0x4edaae */ goto L_004edaae;
}

void f_004edac0(void) /* sub_4EDAC0 */
{
    FN_ENTER(0x004edac0);
    /* 004edac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edac1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edac2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004edac4: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004edac8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004edacc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004edace: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4edad3u); f_008193cc();
    /* 004edad3: mov dword ptr [ebp], 0xafd730 */ W32((u32)(r_ebp), 0xafd730u);
    /* 004edada: mov eax, dword ptr [0x9b8e14] */ r_eax = R32((u32)(0x9b8e14u));
    /* 004edadf: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 004edae2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004edae4: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 004edae7: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004edaea: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 004edaed: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 004edaf0: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 004edaf3: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 004edaf6: mov dword ptr [ebp + 0x70], ebx */ W32((u32)(r_ebp+0x70u), r_ebx);
    /* 004edaf9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004edafb: call 0x4edbd0 */ r_esp -= 4; W32(r_esp, 0x4edb00u); f_004edbd0();
    /* 004edb00: mov eax, ebp */ r_eax = r_ebp;
    /* 004edb02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004edb03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edb04: ret 8 */ FN_RET(0x004edac0); r_esp += 12; return;
}

void f_004edb08(void) /* sub_4EDB08 */
{
    FN_ENTER(0x004edb08);
    /* 004edb08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edb09: mov ebp, esp */ r_ebp = r_esp;
    /* 004edb0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004edb0d: push 0x8d2b58 */ { u32 v = 0x8d2b58u; r_esp -= 4; W32(r_esp, v); }
    /* 004edb12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004edb18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004edb19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004edb20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004edb23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004edb26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004edb29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004edb2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004edb2f: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004edb34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004edb3b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4edb40u); f_005caba4();
    /* 004edb40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004edb41: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004edb44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edb46: je 0x4edb82 */ if (fZ) goto L_004edb82;
L_004edb48:; BB(0x004edb48);
    /* 004edb48: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004edb4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004edb56: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004edb59: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004edb5c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004edb5f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edb62: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004edb65: call 0x4edb88 */ r_esp -= 4; W32(r_esp, 0x4edb6au); f_004edb88();
    /* 004edb6a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edb6d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004edb74:; BB(0x004edb74);
    /* 004edb74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004edb77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edb7e: mov esp, ebp */ r_esp = r_ebp;
    /* 004edb80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edb81: ret  */ FN_RET(0x004edb08); r_esp += 4; return;
L_004edb82:; BB(0x004edb82);
    /* 004edb82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edb84: jmp 0x4edb74 */ goto L_004edb74;
}

void f_004edb88(void) /* sub_4EDB88 */
{
    FN_ENTER(0x004edb88);
    /* 004edb88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edb89: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004edb8b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004edb8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004edb91: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4edb96u); f_008193cc();
    /* 004edb96: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004edb9a: mov dword ptr [ebx], 0xafd730 */ W32((u32)(r_ebx), 0xafd730u);
    /* 004edba0: mov eax, dword ptr [0x9b8e14] */ r_eax = R32((u32)(0x9b8e14u));
    /* 004edba5: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004edba8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004edbac: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004edbaf: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 004edbb2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004edbb4: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004edbb6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004edbba: mov dword ptr [ebx + 0x6c], edx */ W32((u32)(r_ebx+0x6cu), r_edx);
    /* 004edbbd: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 004edbc0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004edbc2: call 0x4edbd0 */ r_esp -= 4; W32(r_esp, 0x4edbc7u); f_004edbd0();
    /* 004edbc7: mov eax, ebx */ r_eax = r_ebx;
    /* 004edbc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004edbca: ret 0x10 */ FN_RET(0x004edb88); r_esp += 20; return;
}

void f_004edbd0(void) /* sub_4EDBD0 */
{
    FN_ENTER(0x004edbd0);
    /* 004edbd0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004edbd3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004edbd6: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 004edbd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edbdb: jle 0x4edc13 */ if ((fZ||fS!=fO)) goto L_004edc13;
L_004edbdd:; BB(0x004edbdd);
    /* 004edbdd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004edbe0: jg 0x4edc13 */ if ((!fZ&&fS==fO)) goto L_004edc13;
L_004edbe2:; BB(0x004edbe2);
    /* 004edbe2: mov dword ptr [ecx + 0x64], 0x14fa */ W32((u32)(r_ecx+0x64u), 0x14fau);
    /* 004edbe9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edbeb: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 004edbee: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004edbf1: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 004edbf4: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 004edbf7: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 004edbfa: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 004edbfd: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 004edc00: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 004edc03: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004edc06: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 004edc09: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 004edc0c: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 004edc0f: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 004edc12: ret  */ FN_RET(0x004edbd0); r_esp += 4; return;
L_004edc13:; BB(0x004edc13);
    /* 004edc13: ret  */ FN_RET(0x004edbd0); r_esp += 4; return;
}

void f_004edc14(void) /* sub_4EDC14 */
{
    FN_ENTER(0x004edc14);
    /* 004edc14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edc15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004edc17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004edc19: call 0x4edc38 */ r_esp -= 4; W32(r_esp, 0x4edc1eu); f_004edc38();
    /* 004edc1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004edc22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edc24: jne 0x4edc2a */ if (!fZ) goto L_004edc2a;
L_004edc26:; BB(0x004edc26);
    /* 004edc26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004edc27: ret 4 */ FN_RET(0x004edc14); r_esp += 8; return;
L_004edc2a:; BB(0x004edc2a);
    /* 004edc2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edc2b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4edc30u); f_005c2f74();
    /* 004edc30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004edc31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004edc32: ret 4 */ FN_RET(0x004edc14); r_esp += 8; return;
}

void f_004edc38(void) /* sub_4EDC38 */
{
    FN_ENTER(0x004edc38);
    /* 004edc38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edc39: mov ebp, esp */ r_ebp = r_esp;
    /* 004edc3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004edc3d: push 0x8d2b74 */ { u32 v = 0x8d2b74u; r_esp -= 4; W32(r_esp, v); }
    /* 004edc42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004edc48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004edc49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004edc50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004edc53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004edc56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004edc59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004edc5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004edc5f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004edc62: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004edc69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edc6c: mov dword ptr [ecx], 0xafd7e0 */ W32((u32)(r_ecx), 0xafd7e0u);
    /* 004edc72: call 0x4edcac */ r_esp -= 4; W32(r_esp, 0x4edc77u); f_004edcac();
    /* 004edc77: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edc7a: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004edc7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edc7f: je 0x4edc8d */ if (fZ) goto L_004edc8d;
L_004edc81:; BB(0x004edc81);
    /* 004edc81: je 0x4edc8d */ if (fZ) goto L_004edc8d;
L_004edc83:; BB(0x004edc83);
    /* 004edc83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004edc85: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4edc8au); f_004066a8();
    /* 004edc8a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004edc8d:; BB(0x004edc8d);
    /* 004edc8d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004edc94: mov ecx, eax */ r_ecx = r_eax;
    /* 004edc96: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4edc9bu); f_008171e8();
    /* 004edc9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004edc9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edca5: mov esp, ebp */ r_esp = r_ebp;
    /* 004edca7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edca8: ret  */ FN_RET(0x004edc38); r_esp += 4; return;
}

void f_004edcac(void) /* sub_4EDCAC */
{
    FN_ENTER(0x004edcac);
    /* 004edcac: mov edx, dword ptr [0xa72314] */ r_edx = R32((u32)(0xa72314u));
    /* 004edcb2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edcb4: jl 0x4edcc2 */ if ((fS!=fO)) goto L_004edcc2;
L_004edcb6:; BB(0x004edcb6);
    /* 004edcb6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004edcb9: jg 0x4edcc2 */ if ((!fZ&&fS==fO)) goto L_004edcc2;
L_004edcbb:; BB(0x004edcbb);
    /* 004edcbb: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 004edcbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edcc0: jne 0x4edcc3 */ if (!fZ) goto L_004edcc3;
L_004edcc2:; BB(0x004edcc2);
    /* 004edcc2: ret  */ FN_RET(0x004edcac); r_esp += 4; return;
L_004edcc3:; BB(0x004edcc3);
    /* 004edcc3: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 004edcca: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004edccd: mov dword ptr [0xa72314], edx */ W32((u32)(0xa72314u), r_edx);
    /* 004edcd3: ret  */ FN_RET(0x004edcac); r_esp += 4; return;
}

void f_004edcd4(void) /* sub_4EDCD4 */
{
    FN_ENTER(0x004edcd4);
    /* 004edcd4: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 004edcd7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004edcda: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 004edcdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004edcdf: jl 0x4edcf9 */ if ((fS!=fO)) goto L_004edcf9;
L_004edce1:; BB(0x004edce1);
    /* 004edce1: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 004edce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edce6: jne 0x4edcee */ if (!fZ) goto L_004edcee;
L_004edce8:; BB(0x004edce8);
    /* 004edce8: call 0x4edec0 */ r_esp -= 4; W32(r_esp, 0x4edcedu); f_004edec0();
    /* 004edced: ret  */ FN_RET(0x004edcd4); r_esp += 4; return;
L_004edcee:; BB(0x004edcee);
    /* 004edcee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004edcf1: jne 0x4edcf8 */ if (!fZ) goto L_004edcf8;
L_004edcf3:; BB(0x004edcf3);
    /* 004edcf3: call 0x4edd08 */ r_esp -= 4; W32(r_esp, 0x4edcf8u); f_004edd08();
L_004edcf8:; BB(0x004edcf8);
    /* 004edcf8: ret  */ FN_RET(0x004edcd4); r_esp += 4; return;
L_004edcf9:; BB(0x004edcf9);
    /* 004edcf9: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004edcfd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edd02: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004edd06: ret  */ FN_RET(0x004edcd4); r_esp += 4; return;
}

void f_004edd08(void) /* sub_4EDD08 */
{
    FN_ENTER(0x004edd08);
    /* 004edd08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edd09: mov ebp, esp */ r_ebp = r_esp;
    /* 004edd0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004edd0d: push 0x8d2b9c */ { u32 v = 0x8d2b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004edd12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004edd18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004edd19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004edd20: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004edd23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004edd26: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004edd29: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004edd2c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004edd2f: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 004edd32: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004edd35: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004edd38: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 004edd3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004edd3d: jge 0x4ede01 */ if ((fS==fO)) goto L_004ede01;
L_004edd43:; BB(0x004edd43);
    /* 004edd43: mov eax, ecx */ r_eax = r_ecx;
    /* 004edd45: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004edd48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edd4a: je 0x4eddc9 */ if (fZ) goto L_004eddc9;
L_004edd4c:; BB(0x004edd4c);
    /* 004edd4c: je 0x4edd55 */ if (fZ) goto L_004edd55;
L_004edd4e:; BB(0x004edd4e);
    /* 004edd4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004edd50: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4edd55u); f_004066a8();
L_004edd55:; BB(0x004edd55);
    /* 004edd55: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004edd5c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004edd61: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4edd66u); f_008581c5();
    /* 004edd66: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004edd69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004edd6c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004edd6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edd71: je 0x4edeb3 */ if (fZ) goto L_004edeb3;
L_004edd77:; BB(0x004edd77);
    /* 004edd77: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004edd7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004edd85: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004edd88: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004edd8b: call 0x4f3a04 */ r_esp -= 4; W32(r_esp, 0x4edd90u); f_004f3a04();
    /* 004edd90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004edd91: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004edd94: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004edd97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004edd98: lea edi, [edx + 0x60] */ r_edi = (u32)(r_edx+0x60u);
    /* 004edd9b: lea esi, [edx + 0x64] */ r_esi = (u32)(r_edx+0x64u);
    /* 004edd9e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004edda0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edda1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edda2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004edda3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004edda4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004edda6: call 0x5b74ec */ r_esp -= 4; W32(r_esp, 0x4eddabu); f_005b74ec();
    /* 004eddab: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004eddb2:; BB(0x004eddb2);
    /* 004eddb2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004eddb5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004eddb8: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 004eddbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eddbd: je 0x4edea9 */ if (fZ) goto L_004edea9;
L_004eddc3:; BB(0x004eddc3);
    /* 004eddc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004eddc5:; BB(0x004eddc5);
    /* 004eddc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eddc7: je 0x4edde0 */ if (fZ) goto L_004edde0;
L_004eddc9:; BB(0x004eddc9);
    /* 004eddc9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004eddcc: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eddcf: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004eddd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eddd5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edddc: mov esp, ebp */ r_esp = r_ebp;
    /* 004eddde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edddf: ret  */ FN_RET(0x004edd08); r_esp += 4; return;
L_004edde0:; BB(0x004edde0);
    /* 004edde0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004edde3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004edde6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edde9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004eddec: mov dword ptr [eax + 0x74], 0x12c */ W32((u32)(r_eax+0x74u), 0x12cu);
    /* 004eddf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eddf6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eddfd: mov esp, ebp */ r_esp = r_ebp;
    /* 004eddff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ede00: ret  */ FN_RET(0x004edd08); r_esp += 4; return;
L_004ede01:; BB(0x004ede01);
    /* 004ede01: mov eax, ecx */ r_eax = r_ecx;
    /* 004ede03: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004ede06: call 0x5b864c */ r_esp -= 4; W32(r_esp, 0x4ede0bu); f_005b864c();
    /* 004ede0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ede0d: jne 0x4ede1d */ if (!fZ) goto L_004ede1d;
L_004ede0f:; BB(0x004ede0f);
    /* 004ede0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ede12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ede19: mov esp, ebp */ r_esp = r_ebp;
    /* 004ede1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ede1c: ret  */ FN_RET(0x004edd08); r_esp += 4; return;
L_004ede1d:; BB(0x004ede1d);
    /* 004ede1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ede20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ede22: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004ede25: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4ede2au); f_005b8610();
    /* 004ede2a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ede2d: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004ede30: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004ede32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ede34: jne 0x4ede44 */ if (!fZ) goto L_004ede44;
L_004ede36:; BB(0x004ede36);
    /* 004ede36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ede39: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ede40: mov esp, ebp */ r_esp = r_ebp;
    /* 004ede42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ede43: ret  */ FN_RET(0x004edd08); r_esp += 4; return;
L_004ede44:; BB(0x004ede44);
    /* 004ede44: mov eax, edx */ r_eax = r_edx;
    /* 004ede46: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004ede49: call 0x5b8694 */ r_esp -= 4; W32(r_esp, 0x4ede4eu); f_005b8694();
    /* 004ede4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ede4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ede52: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ede55: call 0x4f3a78 */ r_esp -= 4; W32(r_esp, 0x4ede5au); f_004f3a78();
    /* 004ede5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ede5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ede60: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004ede63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ede65: je 0x4ede6e */ if (fZ) goto L_004ede6e;
L_004ede67:; BB(0x004ede67);
    /* 004ede67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ede69: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4ede6eu); f_004066a8();
L_004ede6e:; BB(0x004ede6e);
    /* 004ede6e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ede71: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 004ede78: call 0x4edcac */ r_esp -= 4; W32(r_esp, 0x4ede7du); f_004edcac();
    /* 004ede7d: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004ede80: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 004ede83: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004ede86: not eax */ r_eax = ~r_eax;
    /* 004ede88: and dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004ede8a: movzx ecx, word ptr [edi + 8] */ r_ecx = (u32)R16((u32)(r_edi+0x8u));
    /* 004ede8e: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ede94: mov word ptr [edi + 8], cx */ W16((u32)(r_edi+0x8u), (u16)r_ecx);
    /* 004ede98: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ede9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ede9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edea5: mov esp, ebp */ r_esp = r_ebp;
    /* 004edea7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edea8: ret  */ FN_RET(0x004edd08); r_esp += 4; return;
L_004edea9:; BB(0x004edea9);
    /* 004edea9: mov eax, 1 */ r_eax = 0x1u;
    /* 004edeae: jmp 0x4eddc5 */ goto L_004eddc5;
L_004edeb3:; BB(0x004edeb3);
    /* 004edeb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004edeb5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004edeb8: jmp 0x4eddb2 */ goto L_004eddb2;
}

void f_004edec0(void) /* sub_4EDEC0 */
{
    FN_ENTER(0x004edec0);
    /* 004edec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004edec1: mov ebp, esp */ r_ebp = r_esp;
    /* 004edec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004edec5: push 0x8d2bc4 */ { u32 v = 0x8d2bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004edeca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eded0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eded1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eded8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ededb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004edede: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004edee1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004edee4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004edee7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004edeea: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x4edeefu); f_005b7a28();
    /* 004edeef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edef1: jne 0x4edf01 */ if (!fZ) goto L_004edf01;
L_004edef3:; BB(0x004edef3);
    /* 004edef3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004edef6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edefd: mov esp, ebp */ r_esp = r_ebp;
    /* 004edeff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edf00: ret  */ FN_RET(0x004edec0); r_esp += 4; return;
L_004edf01:; BB(0x004edf01);
    /* 004edf01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004edf04: call 0x4edfd0 */ r_esp -= 4; W32(r_esp, 0x4edf09u); f_004edfd0();
    /* 004edf09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edf0b: jne 0x4edf1b */ if (!fZ) goto L_004edf1b;
L_004edf0d:; BB(0x004edf0d);
    /* 004edf0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004edf10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edf17: mov esp, ebp */ r_esp = r_ebp;
    /* 004edf19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edf1a: ret  */ FN_RET(0x004edec0); r_esp += 4; return;
L_004edf1b:; BB(0x004edf1b);
    /* 004edf1b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004edf22: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004edf27: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4edf2cu); f_008581c5();
    /* 004edf2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004edf2d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004edf30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edf32: je 0x4edfcc */ if (fZ) goto L_004edfcc;
L_004edf38:; BB(0x004edf38);
    /* 004edf38: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004edf3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004edf46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004edf49: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 004edf4c: call 0x4f3a04 */ r_esp -= 4; W32(r_esp, 0x4edf51u); f_004f3a04();
    /* 004edf51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004edf52: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004edf55: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004edf58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004edf59: lea edi, [edx + 0x60] */ r_edi = (u32)(r_edx+0x60u);
    /* 004edf5c: lea esi, [edx + 0x64] */ r_esi = (u32)(r_edx+0x64u);
    /* 004edf5f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004edf61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edf62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004edf63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004edf64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004edf65: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004edf67: call 0x5b74ec */ r_esp -= 4; W32(r_esp, 0x4edf6cu); f_005b74ec();
    /* 004edf6c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004edf6f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004edf76:; BB(0x004edf76);
    /* 004edf76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004edf79: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 004edf7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edf7e: je 0x4edfc5 */ if (fZ) goto L_004edfc5;
L_004edf80:; BB(0x004edf80);
    /* 004edf80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004edf82:; BB(0x004edf82);
    /* 004edf82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edf84: je 0x4edf9d */ if (fZ) goto L_004edf9d;
L_004edf86:; BB(0x004edf86);
    /* 004edf86: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edf89: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004edf8c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004edf8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004edf92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edf99: mov esp, ebp */ r_esp = r_ebp;
    /* 004edf9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edf9c: ret  */ FN_RET(0x004edec0); r_esp += 4; return;
L_004edf9d:; BB(0x004edf9d);
    /* 004edf9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004edfa0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004edfa3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004edfa6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004edfa9: mov dword ptr [eax + 0x74], 0x12c */ W32((u32)(r_eax+0x74u), 0x12cu);
    /* 004edfb0: mov dword ptr [eax + 0x2c], 1 */ W32((u32)(r_eax+0x2cu), 0x1u);
    /* 004edfb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004edfba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004edfc1: mov esp, ebp */ r_esp = r_ebp;
    /* 004edfc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004edfc4: ret  */ FN_RET(0x004edec0); r_esp += 4; return;
L_004edfc5:; BB(0x004edfc5);
    /* 004edfc5: mov eax, 1 */ r_eax = 0x1u;
    /* 004edfca: jmp 0x4edf82 */ goto L_004edf82;
L_004edfcc:; BB(0x004edfcc);
    /* 004edfcc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004edfce: jmp 0x4edf76 */ goto L_004edf76;
}

void f_004edfd0(void) /* sub_4EDFD0 */
{
    FN_ENTER(0x004edfd0);
    /* 004edfd0: mov edx, dword ptr [0xa72314] */ r_edx = R32((u32)(0xa72314u));
    /* 004edfd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004edfd8: jl 0x4edfea */ if ((fS!=fO)) goto L_004edfea;
L_004edfda:; BB(0x004edfda);
    /* 004edfda: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004edfdd: jg 0x4edfea */ if ((!fZ&&fS==fO)) goto L_004edfea;
L_004edfdf:; BB(0x004edfdf);
    /* 004edfdf: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 004edfe2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004edfe4: jne 0x4edfea */ if (!fZ) goto L_004edfea;
L_004edfe6:; BB(0x004edfe6);
    /* 004edfe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004edfe8: jle 0x4edfed */ if ((fZ||fS!=fO)) goto L_004edfed;
L_004edfea:; BB(0x004edfea);
    /* 004edfea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004edfec: ret  */ FN_RET(0x004edfd0); r_esp += 4; return;
L_004edfed:; BB(0x004edfed);
    /* 004edfed: mov dword ptr [ecx + 0x6c], 1 */ W32((u32)(r_ecx+0x6cu), 0x1u);
    /* 004edff4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004edff7: mov eax, 1 */ r_eax = 0x1u;
    /* 004edffc: mov dword ptr [0xa72314], edx */ W32((u32)(0xa72314u), r_edx);
    /* 004ee002: ret  */ FN_RET(0x004edfd0); r_esp += 4; return;
}

