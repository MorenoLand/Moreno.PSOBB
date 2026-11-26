#include "protos.h"

void f_006e4058(void) /* sub_6E4058 */
{
    FN_ENTER(0x006e4058);
    /* 006e4058: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e4059: mov ebp, esp */ r_ebp = r_esp;
    /* 006e405b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e405d: push 0x8eeb6e */ { u32 v = 0x8eeb6eu; r_esp -= 4; W32(r_esp, v); }
    /* 006e4062: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e4068: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4069: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e4070: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e4073: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e4076: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e4079: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e407c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e407f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4084: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e408b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e4090u); f_005caba4();
    /* 006e4090: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e4093: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4096: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006e4099: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e409b: je 0x6e4206 */ if (fZ) goto L_006e4206;
L_006e40a1:; BB(0x006e40a1);
    /* 006e40a1: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006e40a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e40af: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e40b2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e40b5: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e40b8: mov ecx, eax */ r_ecx = r_eax;
    /* 006e40ba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e40bd: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006e40c0: call 0x6f0138 */ r_esp -= 4; W32(r_esp, 0x6e40c5u); f_006f0138();
    /* 006e40c5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e40cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e40cf: mov dword ptr [ecx], 0xb3d328 */ W32((u32)(r_ecx), 0xb3d328u);
    /* 006e40d5: mov eax, dword ptr [0x9cf8a0] */ r_eax = R32((u32)(0x9cf8a0u));
    /* 006e40da: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e40dd: call 0x6e3a94 */ r_esp -= 4; W32(r_esp, 0x6e40e2u); f_006e3a94();
    /* 006e40e2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e40e5: mov dword ptr [edx + 0x12c], 0x41400000 */ W32((u32)(r_edx+0x12cu), 0x41400000u);
    /* 006e40ef: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e40f4: mov dword ptr [edx + 0x174], 0 */ W32((u32)(r_edx+0x174u), 0x0u);
    /* 006e40fe: mov word ptr [edx + 0x134], ax */ W16((u32)(r_edx+0x134u), (u16)r_eax);
    /* 006e4105: mov word ptr [edx + 0x136], ax */ W16((u32)(r_edx+0x136u), (u16)r_eax);
    /* 006e410c: mov word ptr [edx + 0x138], ax */ W16((u32)(r_edx+0x138u), (u16)r_eax);
    /* 006e4113: mov word ptr [edx + 0x13a], ax */ W16((u32)(r_edx+0x13au), (u16)r_eax);
    /* 006e411a: mov word ptr [edx + 0x13c], ax */ W16((u32)(r_edx+0x13cu), (u16)r_eax);
    /* 006e4121: mov word ptr [edx + 0x13e], ax */ W16((u32)(r_edx+0x13eu), (u16)r_eax);
    /* 006e4128: mov word ptr [edx + 0x140], ax */ W16((u32)(r_edx+0x140u), (u16)r_eax);
    /* 006e412f: mov word ptr [edx + 0x142], ax */ W16((u32)(r_edx+0x142u), (u16)r_eax);
    /* 006e4136: mov word ptr [edx + 0x144], ax */ W16((u32)(r_edx+0x144u), (u16)r_eax);
    /* 006e413d: mov word ptr [edx + 0x146], ax */ W16((u32)(r_edx+0x146u), (u16)r_eax);
    /* 006e4144: mov word ptr [edx + 0x148], ax */ W16((u32)(r_edx+0x148u), (u16)r_eax);
    /* 006e414b: mov word ptr [edx + 0x14a], ax */ W16((u32)(r_edx+0x14au), (u16)r_eax);
    /* 006e4152: mov word ptr [edx + 0x14c], ax */ W16((u32)(r_edx+0x14cu), (u16)r_eax);
    /* 006e4159: mov word ptr [edx + 0x14e], ax */ W16((u32)(r_edx+0x14eu), (u16)r_eax);
    /* 006e4160: mov word ptr [edx + 0x150], ax */ W16((u32)(r_edx+0x150u), (u16)r_eax);
    /* 006e4167: mov word ptr [edx + 0x152], ax */ W16((u32)(r_edx+0x152u), (u16)r_eax);
    /* 006e416e: mov word ptr [edx + 0x154], ax */ W16((u32)(r_edx+0x154u), (u16)r_eax);
    /* 006e4175: mov word ptr [edx + 0x156], ax */ W16((u32)(r_edx+0x156u), (u16)r_eax);
    /* 006e417c: mov word ptr [edx + 0x158], ax */ W16((u32)(r_edx+0x158u), (u16)r_eax);
    /* 006e4183: mov word ptr [edx + 0x15a], ax */ W16((u32)(r_edx+0x15au), (u16)r_eax);
    /* 006e418a: mov word ptr [edx + 0x15c], ax */ W16((u32)(r_edx+0x15cu), (u16)r_eax);
    /* 006e4191: mov word ptr [edx + 0x15e], ax */ W16((u32)(r_edx+0x15eu), (u16)r_eax);
    /* 006e4198: mov word ptr [edx + 0x160], ax */ W16((u32)(r_edx+0x160u), (u16)r_eax);
    /* 006e419f: mov word ptr [edx + 0x162], ax */ W16((u32)(r_edx+0x162u), (u16)r_eax);
    /* 006e41a6: mov word ptr [edx + 0x164], ax */ W16((u32)(r_edx+0x164u), (u16)r_eax);
    /* 006e41ad: mov word ptr [edx + 0x166], ax */ W16((u32)(r_edx+0x166u), (u16)r_eax);
    /* 006e41b4: mov word ptr [edx + 0x168], ax */ W16((u32)(r_edx+0x168u), (u16)r_eax);
    /* 006e41bb: mov word ptr [edx + 0x16a], ax */ W16((u32)(r_edx+0x16au), (u16)r_eax);
    /* 006e41c2: mov word ptr [edx + 0x16c], ax */ W16((u32)(r_edx+0x16cu), (u16)r_eax);
    /* 006e41c9: mov word ptr [edx + 0x16e], ax */ W16((u32)(r_edx+0x16eu), (u16)r_eax);
    /* 006e41d0: mov word ptr [edx + 0x170], ax */ W16((u32)(r_edx+0x170u), (u16)r_eax);
    /* 006e41d7: mov word ptr [edx + 0x172], ax */ W16((u32)(r_edx+0x172u), (u16)r_eax);
    /* 006e41de: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006e41e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e41e3: je 0x6e41f0 */ if (fZ) goto L_006e41f0;
L_006e41e5:; BB(0x006e41e5);
    /* 006e41e5: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e41e9: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006e41f0:; BB(0x006e41f0);
    /* 006e41f0: mov ecx, edx */ r_ecx = r_edx;
    /* 006e41f2: call 0x6e3ba0 */ r_esp -= 4; W32(r_esp, 0x6e41f7u); f_006e3ba0();
    /* 006e41f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e41fa: call 0x6e3f68 */ r_esp -= 4; W32(r_esp, 0x6e41ffu); f_006e3f68();
    /* 006e41ff: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006e4206:; BB(0x006e4206);
    /* 006e4206: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e4209: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e4210: mov esp, ebp */ r_esp = r_ebp;
    /* 006e4212: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e4213: ret  */ FN_RET(0x006e4058); r_esp += 4; return;
}

void f_006e4214(void) /* sub_6E4214 */
{
    FN_ENTER(0x006e4214);
    /* 006e4214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e4215: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006e4217: movzx eax, word ptr [ebp + 0xc8] */ r_eax = (u32)R16((u32)(r_ebp+0xc8u));
    /* 006e421e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e421f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e4224u); f_007b4d18();
    /* 006e4224: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4225: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 006e4228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e422a: je 0x6e4243 */ if (fZ) goto L_006e4243;
L_006e422c:; BB(0x006e422c);
    /* 006e422c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e422e: call 0x6f0474 */ r_esp -= 4; W32(r_esp, 0x6e4233u); f_006f0474();
    /* 006e4233: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e4235: call 0x6f053c */ r_esp -= 4; W32(r_esp, 0x6e423au); f_006f053c();
    /* 006e423a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e423c: call 0x6f06c4 */ r_esp -= 4; W32(r_esp, 0x6e4241u); f_006f06c4();
    /* 006e4241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e4242: ret  */ FN_RET(0x006e4214); r_esp += 4; return;
L_006e4243:; BB(0x006e4243);
    /* 006e4243: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006e4247: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e424c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006e4250: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e4251: ret  */ FN_RET(0x006e4214); r_esp += 4; return;
}

void f_006e4254(void) /* sub_6E4254 */
{
    FN_ENTER(0x006e4254);
    /* 006e4254: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e4255: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4256: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e4259: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e425b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006e425f: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006e4263: movzx edi, word ptr [ebx + 0x134] */ r_edi = (u32)R16((u32)(r_ebx+0x134u));
    /* 006e426a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e426c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e426e: jne 0x6e4275 */ if (!fZ) goto L_006e4275;
L_006e4270:; BB(0x006e4270);
    /* 006e4270: mov eax, 1 */ r_eax = 0x1u;
L_006e4275:; BB(0x006e4275);
    /* 006e4275: movzx edi, word ptr [ebx + 0x136] */ r_edi = (u32)R16((u32)(r_ebx+0x136u));
    /* 006e427c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e427e: jne 0x6e4285 */ if (!fZ) goto L_006e4285;
L_006e4280:; BB(0x006e4280);
    /* 006e4280: mov eax, 1 */ r_eax = 0x1u;
L_006e4285:; BB(0x006e4285);
    /* 006e4285: movzx edi, word ptr [ebx + 0x138] */ r_edi = (u32)R16((u32)(r_ebx+0x138u));
    /* 006e428c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e428e: jne 0x6e4295 */ if (!fZ) goto L_006e4295;
L_006e4290:; BB(0x006e4290);
    /* 006e4290: mov eax, 1 */ r_eax = 0x1u;
L_006e4295:; BB(0x006e4295);
    /* 006e4295: movzx edi, word ptr [ebx + 0x13a] */ r_edi = (u32)R16((u32)(r_ebx+0x13au));
    /* 006e429c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e429e: jne 0x6e42a5 */ if (!fZ) goto L_006e42a5;
L_006e42a0:; BB(0x006e42a0);
    /* 006e42a0: mov eax, 1 */ r_eax = 0x1u;
L_006e42a5:; BB(0x006e42a5);
    /* 006e42a5: movzx edi, word ptr [ebx + 0x13c] */ r_edi = (u32)R16((u32)(r_ebx+0x13cu));
    /* 006e42ac: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e42ae: jne 0x6e42b5 */ if (!fZ) goto L_006e42b5;
L_006e42b0:; BB(0x006e42b0);
    /* 006e42b0: mov eax, 1 */ r_eax = 0x1u;
L_006e42b5:; BB(0x006e42b5);
    /* 006e42b5: movzx edi, word ptr [ebx + 0x13e] */ r_edi = (u32)R16((u32)(r_ebx+0x13eu));
    /* 006e42bc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e42be: jne 0x6e42c5 */ if (!fZ) goto L_006e42c5;
L_006e42c0:; BB(0x006e42c0);
    /* 006e42c0: mov eax, 1 */ r_eax = 0x1u;
L_006e42c5:; BB(0x006e42c5);
    /* 006e42c5: movzx edi, word ptr [ebx + 0x140] */ r_edi = (u32)R16((u32)(r_ebx+0x140u));
    /* 006e42cc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e42ce: jne 0x6e42d5 */ if (!fZ) goto L_006e42d5;
L_006e42d0:; BB(0x006e42d0);
    /* 006e42d0: mov eax, 1 */ r_eax = 0x1u;
L_006e42d5:; BB(0x006e42d5);
    /* 006e42d5: movzx edi, word ptr [ebx + 0x142] */ r_edi = (u32)R16((u32)(r_ebx+0x142u));
    /* 006e42dc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e42de: jne 0x6e42e5 */ if (!fZ) goto L_006e42e5;
L_006e42e0:; BB(0x006e42e0);
    /* 006e42e0: mov eax, 1 */ r_eax = 0x1u;
L_006e42e5:; BB(0x006e42e5);
    /* 006e42e5: movzx edi, word ptr [ebx + 0x144] */ r_edi = (u32)R16((u32)(r_ebx+0x144u));
    /* 006e42ec: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e42ee: jne 0x6e42f5 */ if (!fZ) goto L_006e42f5;
L_006e42f0:; BB(0x006e42f0);
    /* 006e42f0: mov eax, 1 */ r_eax = 0x1u;
L_006e42f5:; BB(0x006e42f5);
    /* 006e42f5: movzx edi, word ptr [ebx + 0x146] */ r_edi = (u32)R16((u32)(r_ebx+0x146u));
    /* 006e42fc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e42fe: jne 0x6e4305 */ if (!fZ) goto L_006e4305;
L_006e4300:; BB(0x006e4300);
    /* 006e4300: mov eax, 1 */ r_eax = 0x1u;
L_006e4305:; BB(0x006e4305);
    /* 006e4305: movzx edi, word ptr [ebx + 0x148] */ r_edi = (u32)R16((u32)(r_ebx+0x148u));
    /* 006e430c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e430e: jne 0x6e4315 */ if (!fZ) goto L_006e4315;
L_006e4310:; BB(0x006e4310);
    /* 006e4310: mov eax, 1 */ r_eax = 0x1u;
L_006e4315:; BB(0x006e4315);
    /* 006e4315: movzx edi, word ptr [ebx + 0x14a] */ r_edi = (u32)R16((u32)(r_ebx+0x14au));
    /* 006e431c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e431e: jne 0x6e4325 */ if (!fZ) goto L_006e4325;
L_006e4320:; BB(0x006e4320);
    /* 006e4320: mov eax, 1 */ r_eax = 0x1u;
L_006e4325:; BB(0x006e4325);
    /* 006e4325: movzx edi, word ptr [ebx + 0x14c] */ r_edi = (u32)R16((u32)(r_ebx+0x14cu));
    /* 006e432c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e432e: jne 0x6e4335 */ if (!fZ) goto L_006e4335;
L_006e4330:; BB(0x006e4330);
    /* 006e4330: mov eax, 1 */ r_eax = 0x1u;
L_006e4335:; BB(0x006e4335);
    /* 006e4335: movzx edi, word ptr [ebx + 0x14e] */ r_edi = (u32)R16((u32)(r_ebx+0x14eu));
    /* 006e433c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e433e: jne 0x6e4345 */ if (!fZ) goto L_006e4345;
L_006e4340:; BB(0x006e4340);
    /* 006e4340: mov eax, 1 */ r_eax = 0x1u;
L_006e4345:; BB(0x006e4345);
    /* 006e4345: movzx edi, word ptr [ebx + 0x150] */ r_edi = (u32)R16((u32)(r_ebx+0x150u));
    /* 006e434c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e434e: jne 0x6e4355 */ if (!fZ) goto L_006e4355;
L_006e4350:; BB(0x006e4350);
    /* 006e4350: mov eax, 1 */ r_eax = 0x1u;
L_006e4355:; BB(0x006e4355);
    /* 006e4355: movzx edi, word ptr [ebx + 0x152] */ r_edi = (u32)R16((u32)(r_ebx+0x152u));
    /* 006e435c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e435e: jne 0x6e4365 */ if (!fZ) goto L_006e4365;
L_006e4360:; BB(0x006e4360);
    /* 006e4360: mov eax, 1 */ r_eax = 0x1u;
L_006e4365:; BB(0x006e4365);
    /* 006e4365: movzx edi, word ptr [ebx + 0x154] */ r_edi = (u32)R16((u32)(r_ebx+0x154u));
    /* 006e436c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e436e: jne 0x6e4375 */ if (!fZ) goto L_006e4375;
L_006e4370:; BB(0x006e4370);
    /* 006e4370: mov eax, 1 */ r_eax = 0x1u;
L_006e4375:; BB(0x006e4375);
    /* 006e4375: movzx edi, word ptr [ebx + 0x156] */ r_edi = (u32)R16((u32)(r_ebx+0x156u));
    /* 006e437c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e437e: jne 0x6e4385 */ if (!fZ) goto L_006e4385;
L_006e4380:; BB(0x006e4380);
    /* 006e4380: mov eax, 1 */ r_eax = 0x1u;
L_006e4385:; BB(0x006e4385);
    /* 006e4385: movzx edi, word ptr [ebx + 0x158] */ r_edi = (u32)R16((u32)(r_ebx+0x158u));
    /* 006e438c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e438e: jne 0x6e4395 */ if (!fZ) goto L_006e4395;
L_006e4390:; BB(0x006e4390);
    /* 006e4390: mov eax, 1 */ r_eax = 0x1u;
L_006e4395:; BB(0x006e4395);
    /* 006e4395: movzx edi, word ptr [ebx + 0x15a] */ r_edi = (u32)R16((u32)(r_ebx+0x15au));
    /* 006e439c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e439e: jne 0x6e43a5 */ if (!fZ) goto L_006e43a5;
L_006e43a0:; BB(0x006e43a0);
    /* 006e43a0: mov eax, 1 */ r_eax = 0x1u;
L_006e43a5:; BB(0x006e43a5);
    /* 006e43a5: movzx edi, word ptr [ebx + 0x15c] */ r_edi = (u32)R16((u32)(r_ebx+0x15cu));
    /* 006e43ac: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e43ae: jne 0x6e43b5 */ if (!fZ) goto L_006e43b5;
L_006e43b0:; BB(0x006e43b0);
    /* 006e43b0: mov eax, 1 */ r_eax = 0x1u;
L_006e43b5:; BB(0x006e43b5);
    /* 006e43b5: movzx edi, word ptr [ebx + 0x15e] */ r_edi = (u32)R16((u32)(r_ebx+0x15eu));
    /* 006e43bc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e43be: jne 0x6e43c5 */ if (!fZ) goto L_006e43c5;
L_006e43c0:; BB(0x006e43c0);
    /* 006e43c0: mov eax, 1 */ r_eax = 0x1u;
L_006e43c5:; BB(0x006e43c5);
    /* 006e43c5: movzx edi, word ptr [ebx + 0x160] */ r_edi = (u32)R16((u32)(r_ebx+0x160u));
    /* 006e43cc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e43ce: jne 0x6e43d5 */ if (!fZ) goto L_006e43d5;
L_006e43d0:; BB(0x006e43d0);
    /* 006e43d0: mov eax, 1 */ r_eax = 0x1u;
L_006e43d5:; BB(0x006e43d5);
    /* 006e43d5: movzx edi, word ptr [ebx + 0x162] */ r_edi = (u32)R16((u32)(r_ebx+0x162u));
    /* 006e43dc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e43de: jne 0x6e43e5 */ if (!fZ) goto L_006e43e5;
L_006e43e0:; BB(0x006e43e0);
    /* 006e43e0: mov eax, 1 */ r_eax = 0x1u;
L_006e43e5:; BB(0x006e43e5);
    /* 006e43e5: movzx edi, word ptr [ebx + 0x164] */ r_edi = (u32)R16((u32)(r_ebx+0x164u));
    /* 006e43ec: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e43ee: jne 0x6e43f5 */ if (!fZ) goto L_006e43f5;
L_006e43f0:; BB(0x006e43f0);
    /* 006e43f0: mov eax, 1 */ r_eax = 0x1u;
L_006e43f5:; BB(0x006e43f5);
    /* 006e43f5: movzx edi, word ptr [ebx + 0x166] */ r_edi = (u32)R16((u32)(r_ebx+0x166u));
    /* 006e43fc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e43fe: jne 0x6e4405 */ if (!fZ) goto L_006e4405;
L_006e4400:; BB(0x006e4400);
    /* 006e4400: mov eax, 1 */ r_eax = 0x1u;
L_006e4405:; BB(0x006e4405);
    /* 006e4405: movzx edi, word ptr [ebx + 0x168] */ r_edi = (u32)R16((u32)(r_ebx+0x168u));
    /* 006e440c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e440e: jne 0x6e4415 */ if (!fZ) goto L_006e4415;
L_006e4410:; BB(0x006e4410);
    /* 006e4410: mov eax, 1 */ r_eax = 0x1u;
L_006e4415:; BB(0x006e4415);
    /* 006e4415: movzx edi, word ptr [ebx + 0x16a] */ r_edi = (u32)R16((u32)(r_ebx+0x16au));
    /* 006e441c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e441e: jne 0x6e4425 */ if (!fZ) goto L_006e4425;
L_006e4420:; BB(0x006e4420);
    /* 006e4420: mov eax, 1 */ r_eax = 0x1u;
L_006e4425:; BB(0x006e4425);
    /* 006e4425: movzx edi, word ptr [ebx + 0x16c] */ r_edi = (u32)R16((u32)(r_ebx+0x16cu));
    /* 006e442c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e442e: jne 0x6e4435 */ if (!fZ) goto L_006e4435;
L_006e4430:; BB(0x006e4430);
    /* 006e4430: mov eax, 1 */ r_eax = 0x1u;
L_006e4435:; BB(0x006e4435);
    /* 006e4435: movzx edi, word ptr [ebx + 0x16e] */ r_edi = (u32)R16((u32)(r_ebx+0x16eu));
    /* 006e443c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e443e: jne 0x6e4445 */ if (!fZ) goto L_006e4445;
L_006e4440:; BB(0x006e4440);
    /* 006e4440: mov eax, 1 */ r_eax = 0x1u;
L_006e4445:; BB(0x006e4445);
    /* 006e4445: movzx edi, word ptr [ebx + 0x170] */ r_edi = (u32)R16((u32)(r_ebx+0x170u));
    /* 006e444c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e444e: jne 0x6e4455 */ if (!fZ) goto L_006e4455;
L_006e4450:; BB(0x006e4450);
    /* 006e4450: mov eax, 1 */ r_eax = 0x1u;
L_006e4455:; BB(0x006e4455);
    /* 006e4455: movzx edi, word ptr [ebx + 0x172] */ r_edi = (u32)R16((u32)(r_ebx+0x172u));
    /* 006e445c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e445e: jne 0x6e4465 */ if (!fZ) goto L_006e4465;
L_006e4460:; BB(0x006e4460);
    /* 006e4460: mov eax, 1 */ r_eax = 0x1u;
L_006e4465:; BB(0x006e4465);
    /* 006e4465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4467: jne 0x6e44bf */ if (!fZ) goto L_006e44bf;
L_006e4469:; BB(0x006e4469);
    /* 006e4469: mov eax, dword ptr [ebx + 0x174] */ r_eax = R32((u32)(r_ebx+0x174u));
    /* 006e446f: mov word ptr [ebx + eax*2 + 0x134], dx */ W16((u32)(r_ebx+r_eax*2+0x134u), (u16)r_edx);
    /* 006e4477: mov eax, dword ptr [ebx + 0x174] */ r_eax = R32((u32)(r_ebx+0x174u));
    /* 006e447d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4480: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4483: jl 0x6e4491 */ if ((fS!=fO)) goto L_006e4491;
L_006e4485:; BB(0x006e4485);
    /* 006e4485: mov dword ptr [ebx + 0x174], 0x1f */ W32((u32)(r_ebx+0x174u), 0x1fu);
    /* 006e448f: jmp 0x6e4497 */ goto L_006e4497;
L_006e4491:; BB(0x006e4491);
    /* 006e4491: mov dword ptr [ebx + 0x174], eax */ W32((u32)(r_ebx+0x174u), r_eax);
L_006e4497:; BB(0x006e4497);
    /* 006e4497: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 006e449d: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006e449f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006e44a3: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 006e44aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e44ac: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e44ae: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e44b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e44b5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006e44b7: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e44ba: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x6e44bdu); call_ind(t); }
    /* 006e44bd: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006e44bf:; BB(0x006e44bf);
    /* 006e44bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e44c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e44c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e44c4: ret 4 */ FN_RET(0x006e4254); r_esp += 8; return;
}

void f_006e44c8(void) /* sub_6E44C8 */
{
    FN_ENTER(0x006e44c8);
    /* 006e44c8: mov dword ptr [0xa966d8], 0x3f800000 */ W32((u32)(0xa966d8u), 0x3f800000u);
    /* 006e44d2: mov dword ptr [0xa966dc], 0x41000000 */ W32((u32)(0xa966dcu), 0x41000000u);
    /* 006e44dc: mov dword ptr [0xa966e0], 0x3fc00000 */ W32((u32)(0xa966e0u), 0x3fc00000u);
    /* 006e44e6: ret  */ FN_RET(0x006e44c8); r_esp += 4; return;
}

void f_006e44e8(void) /* sub_6E44E8 */
{
    FN_ENTER(0x006e44e8);
    /* 006e44e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e44e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006e44eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e44ed: push 0x8eeb88 */ { u32 v = 0x8eeb88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e44f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e44f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e44f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e4500: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e4503: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e4506: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e4509: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e450c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e450f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e4512: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e4515: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e451c: mov eax, ecx */ r_eax = r_ecx;
    /* 006e451e: mov dword ptr [eax], 0xb3d3f8 */ W32((u32)(r_eax), 0xb3d3f8u);
    /* 006e4524: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006e4526:; BB(0x006e4526);
    /* 006e4526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4529: push dword ptr [eax + esi*4 + 0xec] */ { u32 v = R32((u32)(r_eax+r_esi*4+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e4530: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006e4533: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e4538u); f_006ea700();
    /* 006e4538: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e453b: je 0x6e455f */ if (fZ) goto L_006e455f;
L_006e453d:; BB(0x006e453d);
    /* 006e453d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4540: mov edx, dword ptr [ecx + ebx*2 + 0xec] */ r_edx = R32((u32)(r_ecx+r_ebx*2+0xecu));
    /* 006e4547: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e454b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e4550: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e4554: mov dword ptr [ecx + ebx*2 + 0xec], 0 */ W32((u32)(r_ecx+r_ebx*2+0xecu), 0x0u);
L_006e455f:; BB(0x006e455f);
    /* 006e455f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e4562: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4565: jl 0x6e4526 */ if ((fS!=fO)) goto L_006e4526;
L_006e4567:; BB(0x006e4567);
    /* 006e4567: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e456e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4571: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6e4576u); f_006de56c();
    /* 006e4576: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e4579: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e457b: jne 0x6e4596 */ if (!fZ) goto L_006e4596;
L_006e457d:; BB(0x006e457d);
    /* 006e457d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e4580: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e4583: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e4586: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e4589: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e4590: mov esp, ebp */ r_esp = r_ebp;
    /* 006e4592: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e4593: ret 4 */ FN_RET(0x006e44e8); r_esp += 8; return;
L_006e4596:; BB(0x006e4596);
    /* 006e4596: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4599: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e459a: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e459fu); f_005c2f74();
    /* 006e459f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e45a0: jmp 0x6e457d */ goto L_006e457d;
}

void f_006e45a4(void) /* sub_6E45A4 */
{
    FN_ENTER(0x006e45a4);
    /* 006e45a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e45a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e45a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e45a9: push 0x8eeba4 */ { u32 v = 0x8eeba4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e45ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e45b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e45b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e45bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e45bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e45c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e45c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e45c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e45cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e45ce: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e45d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e45d8: mov eax, ecx */ r_eax = r_ecx;
    /* 006e45da: movzx edx, byte ptr [eax + 0x47] */ r_edx = (u32)R8((u32)(r_eax+0x47u));
    /* 006e45de: mov dword ptr [eax], 0xb3d418 */ W32((u32)(r_eax), 0xb3d418u);
    /* 006e45e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e45e6: je 0x6e4640 */ if (fZ) goto L_006e4640;
L_006e45e8:; BB(0x006e45e8);
    /* 006e45e8: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 006e45eb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006e45ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e45ef: je 0x6e460a */ if (fZ) goto L_006e460a;
L_006e45f1:; BB(0x006e45f1);
    /* 006e45f1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e45f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e45fa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e45fe: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006e4601: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006e4607: mov esi, dword ptr [ecx + 0x1c] */ r_esi = R32((u32)(r_ecx+0x1cu));
L_006e460a:; BB(0x006e460a);
    /* 006e460a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e460b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6e4610u); f_00857e98();
    /* 006e4610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4611: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e4618: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e461b: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e4620u); f_008171e8();
    /* 006e4620: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e4623: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4625: jne 0x6e4695 */ if (!fZ) goto L_006e4695;
L_006e4627:; BB(0x006e4627);
    /* 006e4627: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e462a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e462d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e4630: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e4633: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e463a: mov esp, ebp */ r_esp = r_ebp;
    /* 006e463c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e463d: ret 4 */ FN_RET(0x006e45a4); r_esp += 8; return;
L_006e4640:; BB(0x006e4640);
    /* 006e4640: movzx edx, byte ptr [eax + 0x44] */ r_edx = (u32)R8((u32)(r_eax+0x44u));
    /* 006e4644: mov eax, dword ptr [edx*8 + 0x96d3f8] */ r_eax = R32((u32)(r_edx*8+0x96d3f8u));
    /* 006e464b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e464d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e464f: jbe 0x6e46a1 */ if ((fC||fZ)) goto L_006e46a1;
L_006e4651:; BB(0x006e4651);
    /* 006e4651: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4654: mov esi, dword ptr [edx + 0x1c] */ r_esi = R32((u32)(r_edx+0x1cu));
L_006e4657:; BB(0x006e4657);
    /* 006e4657: mov ebx, dword ptr [esi + ecx*4] */ r_ebx = R32((u32)(r_esi+r_ecx*4));
    /* 006e465a: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006e465d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e465f: je 0x6e4689 */ if (fZ) goto L_006e4689;
L_006e4661:; BB(0x006e4661);
    /* 006e4661: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4664: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e4668: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e466d: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e4671: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 006e4674: mov dword ptr [ebx + edx*2], 0 */ W32((u32)(r_ebx+r_edx*2), 0x0u);
    /* 006e467b: movzx edx, byte ptr [esi + 0x44] */ r_edx = (u32)R8((u32)(r_esi+0x44u));
    /* 006e467f: mov esi, dword ptr [esi + 0x1c] */ r_esi = R32((u32)(r_esi+0x1cu));
    /* 006e4682: mov eax, dword ptr [edx*8 + 0x96d3f8] */ r_eax = R32((u32)(r_edx*8+0x96d3f8u));
L_006e4689:; BB(0x006e4689);
    /* 006e4689: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e468c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e468e: jb 0x6e4657 */ if (fC) goto L_006e4657;
L_006e4690:; BB(0x006e4690);
    /* 006e4690: jmp 0x6e460a */ goto L_006e460a;
L_006e4695:; BB(0x006e4695);
    /* 006e4695: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4698: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4699: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e469eu); f_005c2f74();
    /* 006e469e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e469f: jmp 0x6e4627 */ goto L_006e4627;
L_006e46a1:; BB(0x006e46a1);
    /* 006e46a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e46a4: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 006e46a7: jmp 0x6e460a */ goto L_006e460a;
}

void f_006e46ac(void) /* sub_6E46AC */
{
    FN_ENTER(0x006e46ac);
    /* 006e46ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e46ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006e46af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e46b1: push 0x8eebcc */ { u32 v = 0x8eebccu; r_esp -= 4; W32(r_esp, v); }
    /* 006e46b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e46bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e46bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e46c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e46c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e46ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e46cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e46d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e46d3: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e46d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e46df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e46e4u); f_005caba4();
    /* 006e46e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e46e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e46e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e46ea: je 0x6e4712 */ if (fZ) goto L_006e4712;
L_006e46ec:; BB(0x006e46ec);
    /* 006e46ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e46f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e46fa: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e46fd: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e4700: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e4703: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e4706: call 0x6e4720 */ r_esp -= 4; W32(r_esp, 0x6e470bu); f_006e4720();
    /* 006e470b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e4712:; BB(0x006e4712);
    /* 006e4712: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e4715: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e471c: mov esp, ebp */ r_esp = r_ebp;
    /* 006e471e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e471f: ret  */ FN_RET(0x006e46ac); r_esp += 4; return;
}

void f_006e4720(void) /* sub_6E4720 */
{
    FN_ENTER(0x006e4720);
    /* 006e4720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e4721: mov ebp, esp */ r_ebp = r_esp;
    /* 006e4723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e4725: push 0x8eec14 */ { u32 v = 0x8eec14u; r_esp -= 4; W32(r_esp, v); }
    /* 006e472a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e4730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4731: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e4738: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e473e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e4741: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 006e4744: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 006e4747: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 006e474a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e474d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e4750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4751: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 006e4754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4755: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e4758: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6e475du); f_006de5f0();
    /* 006e475d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e4764: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006e4767: mov dword ptr [ecx], 0xb3d3f8 */ W32((u32)(r_ecx), 0xb3d3f8u);
    /* 006e476d: mov eax, dword ptr [0x9cf8a4] */ r_eax = R32((u32)(0x9cf8a4u));
    /* 006e4772: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e4775: call 0x6e4cc4 */ r_esp -= 4; W32(r_esp, 0x6e477au); f_006e4cc4();
    /* 006e477a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 006e477d: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006e4783: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4785: je 0x6e479f */ if (fZ) goto L_006e479f;
L_006e4787:; BB(0x006e4787);
    /* 006e4787: fld dword ptr [0x96d3a8] */ FPUSH(R_F32((u32)(0x96d3a8u)));
    /* 006e478d: fadd dword ptr [eax + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x90u));
    /* 006e4793: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 006e4799: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 006e479c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
L_006e479f:; BB(0x006e479f);
    /* 006e479f: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006e47a4: mov word ptr [eax + 0xf8], dx */ W16((u32)(r_eax+0xf8u), (u16)r_edx);
    /* 006e47ab: mov word ptr [eax + 0xfa], dx */ W16((u32)(r_eax+0xfau), (u16)r_edx);
    /* 006e47b2: mov word ptr [eax + 0xfc], dx */ W16((u32)(r_eax+0xfcu), (u16)r_edx);
    /* 006e47b9: mov word ptr [eax + 0xfe], dx */ W16((u32)(r_eax+0xfeu), (u16)r_edx);
    /* 006e47c0: mov word ptr [eax + 0x100], dx */ W16((u32)(r_eax+0x100u), (u16)r_edx);
    /* 006e47c7: mov word ptr [eax + 0x102], dx */ W16((u32)(r_eax+0x102u), (u16)r_edx);
    /* 006e47ce: mov word ptr [eax + 0x104], dx */ W16((u32)(r_eax+0x104u), (u16)r_edx);
    /* 006e47d5: mov word ptr [eax + 0x106], dx */ W16((u32)(r_eax+0x106u), (u16)r_edx);
    /* 006e47dc: mov word ptr [eax + 0x108], dx */ W16((u32)(r_eax+0x108u), (u16)r_edx);
    /* 006e47e3: mov word ptr [eax + 0x10a], dx */ W16((u32)(r_eax+0x10au), (u16)r_edx);
    /* 006e47ea: mov word ptr [eax + 0x10c], dx */ W16((u32)(r_eax+0x10cu), (u16)r_edx);
    /* 006e47f1: mov word ptr [eax + 0x10e], dx */ W16((u32)(r_eax+0x10eu), (u16)r_edx);
    /* 006e47f8: mov word ptr [eax + 0x110], dx */ W16((u32)(r_eax+0x110u), (u16)r_edx);
    /* 006e47ff: mov word ptr [eax + 0x112], dx */ W16((u32)(r_eax+0x112u), (u16)r_edx);
    /* 006e4806: mov word ptr [eax + 0x114], dx */ W16((u32)(r_eax+0x114u), (u16)r_edx);
    /* 006e480d: mov word ptr [eax + 0x116], dx */ W16((u32)(r_eax+0x116u), (u16)r_edx);
    /* 006e4814: mov word ptr [eax + 0x118], dx */ W16((u32)(r_eax+0x118u), (u16)r_edx);
    /* 006e481b: mov word ptr [eax + 0x11a], dx */ W16((u32)(r_eax+0x11au), (u16)r_edx);
    /* 006e4822: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
    /* 006e4829: mov word ptr [eax + 0x11e], dx */ W16((u32)(r_eax+0x11eu), (u16)r_edx);
    /* 006e4830: mov word ptr [eax + 0x120], dx */ W16((u32)(r_eax+0x120u), (u16)r_edx);
    /* 006e4837: mov word ptr [eax + 0x122], dx */ W16((u32)(r_eax+0x122u), (u16)r_edx);
    /* 006e483e: mov word ptr [eax + 0x124], dx */ W16((u32)(r_eax+0x124u), (u16)r_edx);
    /* 006e4845: mov word ptr [eax + 0x126], dx */ W16((u32)(r_eax+0x126u), (u16)r_edx);
    /* 006e484c: mov word ptr [eax + 0x128], dx */ W16((u32)(r_eax+0x128u), (u16)r_edx);
    /* 006e4853: mov word ptr [eax + 0x12a], dx */ W16((u32)(r_eax+0x12au), (u16)r_edx);
    /* 006e485a: mov word ptr [eax + 0x12c], dx */ W16((u32)(r_eax+0x12cu), (u16)r_edx);
    /* 006e4861: mov word ptr [eax + 0x12e], dx */ W16((u32)(r_eax+0x12eu), (u16)r_edx);
    /* 006e4868: mov word ptr [eax + 0x130], dx */ W16((u32)(r_eax+0x130u), (u16)r_edx);
    /* 006e486f: mov word ptr [eax + 0x132], dx */ W16((u32)(r_eax+0x132u), (u16)r_edx);
    /* 006e4876: mov word ptr [eax + 0x134], dx */ W16((u32)(r_eax+0x134u), (u16)r_edx);
    /* 006e487d: mov word ptr [eax + 0x136], dx */ W16((u32)(r_eax+0x136u), (u16)r_edx);
    /* 006e4884: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e4886: mov dword ptr [eax + 0xec], ecx */ W32((u32)(r_eax+0xecu), r_ecx);
    /* 006e488c: mov dword ptr [eax + 0xf0], ecx */ W32((u32)(r_eax+0xf0u), r_ecx);
    /* 006e4892: mov dword ptr [eax + 0xf4], ecx */ W32((u32)(r_eax+0xf4u), r_ecx);
    /* 006e4898: mov dword ptr [eax + 0x138], ecx */ W32((u32)(r_eax+0x138u), r_ecx);
    /* 006e489e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e48a0: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006e48a3: movsx ebx, word ptr [eax + 0x7a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006e48a7: movzx ecx, byte ptr [ebx + 0x96d32c] */ r_ecx = (u32)R8((u32)(r_ebx+0x96d32cu));
    /* 006e48ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e48b0: jle 0x6e4af7 */ if ((fZ||fS!=fO)) goto L_006e4af7;
L_006e48b6:; BB(0x006e48b6);
    /* 006e48b6: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 006e48bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e48bf: mov eax, 0x168 */ r_eax = 0x168u;
    /* 006e48c4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006e48c4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006e48c4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006e48c6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006e48cb: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 006e48d2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006e48d5: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 006e48d8: fmul dword ptr [0x96d3a4] */ ST(0) = ST(0) * R_F32((u32)(0x96d3a4u));
    /* 006e48de: fdiv dword ptr [0x96d3a0] */ ST(0) = ST(0) / R_F32((u32)(0x96d3a0u));
    /* 006e48e4: mov dword ptr [ebp - 0x70], 0xc1200000 */ W32((u32)(r_ebp+0xffffff90u), 0xc1200000u);
    /* 006e48eb: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 006e48ee: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 006e48f2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e48f7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006e48fa: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 006e48fd: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 006e4900: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 006e4903: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006e4906: imul ebx, dword ptr [ebp - 0x28] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_ebp+0xffffffd8u)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e490a: add ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e4910: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e4913: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6e4918u); f_0082d990();
    /* 006e4918: mov edx, ebx */ r_edx = r_ebx;
    /* 006e491a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e491c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6e4921u); f_0082d8bc();
    /* 006e4921: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 006e4924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4925: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 006e4928: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e492a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6e492fu); f_00830aa0();
    /* 006e492f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006e4934: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6e4939u); f_0082eb80();
    /* 006e4939: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 006e493c: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 006e493f: fadd dword ptr [ebp - 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff88u));
    /* 006e4942: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 006e4945: fadd dword ptr [ebp - 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff8cu));
    /* 006e4948: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 006e494b: fadd dword ptr [ebp - 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff90u));
    /* 006e494e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e4950: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e4953: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 006e4956: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 006e4959: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e495b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006e4962: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e4967u); f_005caba4();
    /* 006e4967: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e496a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e496d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006e4970: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4972: je 0x6e4cb9 */ if (fZ) goto L_006e4cb9;
L_006e4978:; BB(0x006e4978);
    /* 006e4978: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 006e497f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e4986: mov ecx, eax */ r_ecx = r_eax;
    /* 006e4988: mov eax, ebx */ r_eax = r_ebx;
    /* 006e498a: mov ebx, dword ptr [ebp - 0x58] */ r_ebx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006e498d: mov edi, dword ptr [0xaca344] */ r_edi = R32((u32)(0xaca344u));
    /* 006e4993: movsx edx, word ptr [ebx + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x7au));
    /* 006e4997: movsx esi, word ptr [ebx + 0x78] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x78u));
    /* 006e499b: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 006e49a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e49a2: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 006e49a8: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 006e49ae: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 006e49b4: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 006e49b7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e49bcu); f_008193cc();
    /* 006e49bc: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006e49c3: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e49c6: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e49c9: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 006e49cc: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 006e49cf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e49d1: fst dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0));
    /* 006e49d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e49d6: fst dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0));
    /* 006e49d9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e49db: fst dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0));
    /* 006e49de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e49e0: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 006e49e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e49e5: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 006e49e8: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 006e49eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e49ed: mov byte ptr [esi + 0x46], al */ W8((u32)(r_esi+0x46u), (u8)r_eax);
    /* 006e49f0: mov dword ptr [esi], 0xb3d418 */ W32((u32)(r_esi), 0xb3d418u);
    /* 006e49f6: movzx edx, byte ptr [ebp - 0x88] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff78u));
    /* 006e49fd: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 006e4a03: mov ebx, dword ptr [ebp - 0x8c] */ r_ebx = R32((u32)(r_ebp+0xffffff74u));
    /* 006e4a09: mov edi, dword ptr [edx*8 + 0x96d3f8] */ r_edi = R32((u32)(r_edx*8+0x96d3f8u));
    /* 006e4a10: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
    /* 006e4a17: mov byte ptr [esi + 0x44], dl */ W8((u32)(r_esi+0x44u), (u8)r_edx);
    /* 006e4a1a: mov byte ptr [esi + 0x45], cl */ W8((u32)(r_esi+0x45u), (u8)r_ecx);
    /* 006e4a1d: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 006e4a20: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 006e4a23: mov byte ptr [esi + 0x47], al */ W8((u32)(r_esi+0x47u), (u8)r_eax);
    /* 006e4a26: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e4a28: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e4a2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e4a2b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e4a30u); f_008581c5();
    /* 006e4a30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4a31: mov edx, esi */ r_edx = r_esi;
    /* 006e4a33: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006e4a36: movzx eax, byte ptr [edx + 0x44] */ r_eax = (u32)R8((u32)(r_edx+0x44u));
    /* 006e4a3a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e4a3c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4a3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4a40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4a42: mov ecx, dword ptr [eax + 0x96d3f8] */ r_ecx = R32((u32)(r_eax+0x96d3f8u));
    /* 006e4a48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e4a4a: jbe 0x6e4abe */ if ((fC||fZ)) goto L_006e4abe;
L_006e4a4c:; BB(0x006e4a4c);
    /* 006e4a4c: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
L_006e4a4f:; BB(0x006e4a4f);
    /* 006e4a4f: mov dword ptr [ebp - 0x5c], 0x4000 */ W32((u32)(r_ebp+0xffffffa4u), 0x4000u);
    /* 006e4a56: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e4a58: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e4a5b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e4a5d: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 006e4a60: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006e4a63: mov edx, dword ptr [eax + 0x96d3f4] */ r_edx = R32((u32)(r_eax+0x96d3f4u));
    /* 006e4a69: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e4a6c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4a6e: mov edi, dword ptr [edx + eax + 4] */ r_edi = R32((u32)(r_edx+r_eax+0x4u));
    /* 006e4a72: test edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4a78: je 0x6e4a81 */ if (fZ) goto L_006e4a81;
L_006e4a7a:; BB(0x006e4a7a);
    /* 006e4a7a: mov ecx, 0x2000 */ r_ecx = 0x2000u;
    /* 006e4a7f: jmp 0x6e4a83 */ goto L_006e4a83;
L_006e4a81:; BB(0x006e4a81);
    /* 006e4a81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006e4a83:; BB(0x006e4a83);
    /* 006e4a83: lea edi, [ebp - 0x64] */ r_edi = (u32)(r_ebp+0xffffff9cu);
    /* 006e4a86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4a87: push dword ptr [edx + eax] */ { u32 v = R32((u32)(r_edx+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006e4a8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e4a8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4a8c: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x6e4a91u); f_00509dc4();
    /* 006e4a91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4a94: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4a97: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006e4a9a: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 006e4a9d: movzx eax, byte ptr [edi + 0x44] */ r_eax = (u32)R8((u32)(r_edi+0x44u));
    /* 006e4aa1: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e4aa4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4aa7: je 0x6e4c33 */ if (fZ) goto L_006e4c33;
L_006e4aad:; BB(0x006e4aad);
    /* 006e4aad: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e4ab0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4ab2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4ab4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4ab6: cmp esi, dword ptr [eax + 0x96d3f8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x96d3f8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e4abc: jb 0x6e4a4f */ if (fC) goto L_006e4a4f;
L_006e4abe:; BB(0x006e4abe);
    /* 006e4abe: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_006e4ac5:; BB(0x006e4ac5);
    /* 006e4ac5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 006e4ac8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e4acb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e4ace: mov dword ptr [eax + ecx*4 + 0xec], edx */ W32((u32)(r_eax+r_ecx*4+0xecu), r_edx);
    /* 006e4ad5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e4adc: mov edx, ecx */ r_edx = r_ecx;
    /* 006e4ade: movsx ebx, word ptr [eax + 0x7a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006e4ae2: movzx ecx, byte ptr [ebx + 0x96d32c] */ r_ecx = (u32)R8((u32)(r_ebx+0x96d32cu));
    /* 006e4ae9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e4aec: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4aee: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 006e4af1: jl 0x6e48b6 */ if ((fS!=fO)) goto L_006e48b6;
L_006e4af7:; BB(0x006e4af7);
    /* 006e4af7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4af9: je 0x6e4c01 */ if (fZ) goto L_006e4c01;
L_006e4aff:; BB(0x006e4aff);
    /* 006e4aff: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4b02: je 0x6e4bea */ if (fZ) goto L_006e4bea;
L_006e4b08:; BB(0x006e4b08);
    /* 006e4b08: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4b0b: jge 0x6e4b24 */ if ((fS==fO)) goto L_006e4b24;
L_006e4b0d:; BB(0x006e4b0d);
    /* 006e4b0d: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4b10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e4b12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b15: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b1a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e4b1fu); f_00814298();
    /* 006e4b1f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4b22: jmp 0x6e4b86 */ goto L_006e4b86;
L_006e4b24:; BB(0x006e4b24);
    /* 006e4b24: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4b27: jle 0x6e4b5d */ if ((fZ||fS!=fO)) goto L_006e4b5d;
L_006e4b29:; BB(0x006e4b29);
    /* 006e4b29: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4b2c: jne 0x6e4bb6 */ if (!fZ) goto L_006e4bb6;
L_006e4b32:; BB(0x006e4b32);
    /* 006e4b32: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4b35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e4b37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b3a: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b3f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e4b44u); f_00814298();
    /* 006e4b44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4b47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e4b49: jl 0x6e4b86 */ if ((fS!=fO)) goto L_006e4b86;
L_006e4b4b:; BB(0x006e4b4b);
    /* 006e4b4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b4d: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b53: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e4b58u); f_00814664();
    /* 006e4b58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4b5b: jmp 0x6e4b86 */ goto L_006e4b86;
L_006e4b5d:; BB(0x006e4b5d);
    /* 006e4b5d: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4b60: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e4b62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b65: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b6a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e4b6fu); f_00814298();
    /* 006e4b6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e4b74: jl 0x6e4b86 */ if ((fS!=fO)) goto L_006e4b86;
L_006e4b76:; BB(0x006e4b76);
    /* 006e4b76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b78: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4b7e: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e4b83u); f_00814664();
    /* 006e4b83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e4b86:; BB(0x006e4b86);
    /* 006e4b86: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006e4b89: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006e4b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4b8e: je 0x6e4b9b */ if (fZ) goto L_006e4b9b;
L_006e4b90:; BB(0x006e4b90);
    /* 006e4b90: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e4b94: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
L_006e4b9b:; BB(0x006e4b9b);
    /* 006e4b9b: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006e4b9e: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e4ba1: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e4ba4: mov eax, edx */ r_eax = r_edx;
    /* 006e4ba6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e4ba9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e4bb0: mov esp, ebp */ r_esp = r_ebp;
    /* 006e4bb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e4bb3: ret 0xc */ FN_RET(0x006e4720); r_esp += 16; return;
L_006e4bb6:; BB(0x006e4bb6);
    /* 006e4bb6: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4bb9: jne 0x6e4b0d */ if (!fZ) goto L_006e4b0d;
L_006e4bbf:; BB(0x006e4bbf);
    /* 006e4bbf: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4bc2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e4bc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bc7: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bcc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e4bd1u); f_00814298();
    /* 006e4bd1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e4bd6: jl 0x6e4b86 */ if ((fS!=fO)) goto L_006e4b86;
L_006e4bd8:; BB(0x006e4bd8);
    /* 006e4bd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bda: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4be0: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e4be5u); f_00814664();
    /* 006e4be5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4be8: jmp 0x6e4b86 */ goto L_006e4b86;
L_006e4bea:; BB(0x006e4bea);
    /* 006e4bea: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4bed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e4bef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bf2: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4bf7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e4bfcu); f_00814298();
    /* 006e4bfc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4bff: jmp 0x6e4b86 */ goto L_006e4b86;
L_006e4c01:; BB(0x006e4c01);
    /* 006e4c01: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e4c04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e4c06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4c07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4c09: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4c0e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e4c13u); f_00814298();
    /* 006e4c13: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e4c18: jl 0x6e4b86 */ if ((fS!=fO)) goto L_006e4b86;
L_006e4c1e:; BB(0x006e4c1e);
    /* 006e4c1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4c20: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4c25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4c26: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e4c2bu); f_00814664();
    /* 006e4c2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4c2e: jmp 0x6e4b86 */ goto L_006e4b86;
L_006e4c33:; BB(0x006e4c33);
    /* 006e4c33: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 006e4c39: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4c3c: jl 0x6e4c75 */ if ((fS!=fO)) goto L_006e4c75;
L_006e4c3e:; BB(0x006e4c3e);
    /* 006e4c3e: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4c41: jge 0x6e4c75 */ if ((fS==fO)) goto L_006e4c75;
L_006e4c43:; BB(0x006e4c43);
    /* 006e4c43: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4c46: jg 0x6e4aad */ if ((!fZ&&fS==fO)) goto L_006e4aad;
L_006e4c4c:; BB(0x006e4c4c);
    /* 006e4c4c: mov ecx, edi */ r_ecx = r_edi;
    /* 006e4c4e: mov edi, dword ptr [ecx + 0x1c] */ r_edi = R32((u32)(r_ecx+0x1cu));
    /* 006e4c51: mov edx, dword ptr [edi + edx*2] */ r_edx = R32((u32)(r_edi+r_edx*2));
    /* 006e4c54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4c56: je 0x6e4aad */ if (fZ) goto L_006e4aad;
L_006e4c5c:; BB(0x006e4c5c);
    /* 006e4c5c: mov eax, ecx */ r_eax = r_ecx;
    /* 006e4c5e: mov dword ptr [edx + 0x44], 0x3fa66666 */ W32((u32)(r_edx+0x44u), 0x3fa66666u);
    /* 006e4c65: mov dword ptr [edx + 0x48], 0x3fa66666 */ W32((u32)(r_edx+0x48u), 0x3fa66666u);
    /* 006e4c6c: movzx eax, byte ptr [eax + 0x44] */ r_eax = (u32)R8((u32)(r_eax+0x44u));
    /* 006e4c70: jmp 0x6e4aad */ goto L_006e4aad;
L_006e4c75:; BB(0x006e4c75);
    /* 006e4c75: cmp ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4c78: jl 0x6e4aad */ if ((fS!=fO)) goto L_006e4aad;
L_006e4c7e:; BB(0x006e4c7e);
    /* 006e4c7e: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4c81: jge 0x6e4aad */ if ((fS==fO)) goto L_006e4aad;
L_006e4c87:; BB(0x006e4c87);
    /* 006e4c87: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4c8a: jg 0x6e4aad */ if ((!fZ&&fS==fO)) goto L_006e4aad;
L_006e4c90:; BB(0x006e4c90);
    /* 006e4c90: mov ecx, edi */ r_ecx = r_edi;
    /* 006e4c92: mov edi, dword ptr [ecx + 0x1c] */ r_edi = R32((u32)(r_ecx+0x1cu));
    /* 006e4c95: mov edx, dword ptr [edi + edx*2] */ r_edx = R32((u32)(r_edi+r_edx*2));
    /* 006e4c98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4c9a: je 0x6e4aad */ if (fZ) goto L_006e4aad;
L_006e4ca0:; BB(0x006e4ca0);
    /* 006e4ca0: mov eax, ecx */ r_eax = r_ecx;
    /* 006e4ca2: mov dword ptr [edx + 0x44], 0x3fa66666 */ W32((u32)(r_edx+0x44u), 0x3fa66666u);
    /* 006e4ca9: mov dword ptr [edx + 0x48], 0x3fe66666 */ W32((u32)(r_edx+0x48u), 0x3fe66666u);
    /* 006e4cb0: movzx eax, byte ptr [eax + 0x44] */ r_eax = (u32)R8((u32)(r_eax+0x44u));
    /* 006e4cb4: jmp 0x6e4aad */ goto L_006e4aad;
L_006e4cb9:; BB(0x006e4cb9);
    /* 006e4cb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e4cbb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e4cbe: jmp 0x6e4ac5 */ goto L_006e4ac5;
}

void f_006e4cc4(void) /* sub_6E4CC4 */
{
    FN_ENTER(0x006e4cc4);
    /* 006e4cc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e4cc5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e4cc8: mov edi, ecx */ r_edi = r_ecx;
    /* 006e4cca: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006e4cce: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e4cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4cd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4cd6: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e4cdbu); f_006ded14();
    /* 006e4cdb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4cde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e4ce0: mov dword ptr [edi + 0x88], edx */ W32((u32)(r_edi+0x88u), r_edx);
    /* 006e4ce6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e4ce9: mov dword ptr [edi + 0x8c], edx */ W32((u32)(r_edi+0x8cu), r_edx);
    /* 006e4cef: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e4cf2: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 006e4cf8: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e4cfb: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 006e4d01: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e4d04: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 006e4d0a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e4d0d: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 006e4d13: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e4d16: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
    /* 006e4d1c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e4d1f: mov dword ptr [edi + 0xa4], edx */ W32((u32)(r_edi+0xa4u), r_edx);
    /* 006e4d25: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e4d28: mov dword ptr [edi + 0xa8], edx */ W32((u32)(r_edi+0xa8u), r_edx);
    /* 006e4d2e: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e4d31: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 006e4d37: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e4d3a: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006e4d40: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006e4d44: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e4d47: jl 0x6e4d7e */ if ((fS!=fO)) goto L_006e4d7e;
L_006e4d49:; BB(0x006e4d49);
    /* 006e4d49: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e4d4eu); f_00687c48();
    /* 006e4d4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4d50: jne 0x6e4d7a */ if (!fZ) goto L_006e4d7a;
L_006e4d52:; BB(0x006e4d52);
    /* 006e4d52: movsx ecx, word ptr [0x9cf724] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf724u));
    /* 006e4d59: movsx edx, word ptr [0x9cf726] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf726u));
    /* 006e4d60: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006e4d64: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e4d67: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e4d69: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006e4d6c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006e4d6f: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006e4d75: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e4d78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e4d79: ret  */ FN_RET(0x006e4cc4); r_esp += 4; return;
L_006e4d7a:; BB(0x006e4d7a);
    /* 006e4d7a: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
L_006e4d7e:; BB(0x006e4d7e);
    /* 006e4d7e: movsx edx, word ptr [edi + 0xac] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xacu));
    /* 006e4d85: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e4d88: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e4d8c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006e4d90: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 006e4d96: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006e4d9c: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e4da1u); f_00687c48();
    /* 006e4da1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4da3: je 0x6e4db7 */ if (fZ) goto L_006e4db7;
L_006e4da5:; BB(0x006e4da5);
    /* 006e4da5: fld dword ptr [edi + 0x88] */ FPUSH(R_F32((u32)(r_edi+0x88u)));
    /* 006e4dab: fmul dword ptr [0x9cf788] */ ST(0) = ST(0) * R_F32((u32)(0x9cf788u));
    /* 006e4db1: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
L_006e4db7:; BB(0x006e4db7);
    /* 006e4db7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e4dba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e4dbb: ret  */ FN_RET(0x006e4cc4); r_esp += 4; return;
}

void f_006e4dbc(void) /* sub_6E4DBC */
{
    FN_ENTER(0x006e4dbc);
    /* 006e4dbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4dbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e4dbe: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e4dc0: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 006e4dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4dc8: je 0x6e4e5d */ if (fZ) goto L_006e4e5d;
L_006e4dce:; BB(0x006e4dce);
    /* 006e4dce: movzx eax, word ptr [ebx + 0xb4] */ r_eax = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006e4dd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4dd6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e4ddbu); f_007b4d18();
    /* 006e4ddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4ddc: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006e4ddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4de1: je 0x6e4e6d */ if (fZ) goto L_006e4e6d;
L_006e4de7:; BB(0x006e4de7);
    /* 006e4de7: push dword ptr [ebx + 0xec] */ { u32 v = R32((u32)(r_ebx+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e4ded: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e4df2u); f_006ea700();
    /* 006e4df2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4df3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4df5: jne 0x6e4dfa */ if (!fZ) goto L_006e4dfa;
L_006e4df7:; BB(0x006e4df7);
    /* 006e4df7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4df8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e4df9: ret  */ FN_RET(0x006e4dbc); r_esp += 4; return;
L_006e4dfa:; BB(0x006e4dfa);
    /* 006e4dfa: mov edx, dword ptr [ebx + 0xec] */ r_edx = R32((u32)(r_ebx+0xecu));
    /* 006e4e00: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e4e03: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 006e4e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4e07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4e08: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6e4e0du); f_007a9180();
    /* 006e4e0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4e10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e4e11: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006e4e14: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x6e4e19u); f_0082dc9c();
    /* 006e4e19: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006e4e1c: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 006e4e22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4e24: je 0x6e4e38 */ if (fZ) goto L_006e4e38;
L_006e4e26:; BB(0x006e4e26);
    /* 006e4e26: fld dword ptr [0x96d390] */ FPUSH(R_F32((u32)(0x96d390u)));
    /* 006e4e2c: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 006e4e2f: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006e4e35: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006e4e38:; BB(0x006e4e38);
    /* 006e4e38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e4e3a: call 0x6deadc */ r_esp -= 4; W32(r_esp, 0x6e4e3fu); f_006deadc();
    /* 006e4e3f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e4e42: fcomp dword ptr [ebx + 0x90] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x90u))); FPOP();
    /* 006e4e48: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e4e4a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e4e4b: jb 0x6e4e5a */ if (fC) goto L_006e4e5a;
L_006e4e4d:; BB(0x006e4e4d);
    /* 006e4e4d: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e4e51: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4e56: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006e4e5a:; BB(0x006e4e5a);
    /* 006e4e5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4e5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e4e5c: ret  */ FN_RET(0x006e4dbc); r_esp += 4; return;
L_006e4e5d:; BB(0x006e4e5d);
    /* 006e4e5d: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e4e61: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4e66: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e4e6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4e6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e4e6c: ret  */ FN_RET(0x006e4dbc); r_esp += 4; return;
L_006e4e6d:; BB(0x006e4e6d);
    /* 006e4e6d: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e4e71: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4e76: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e4e7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e4e7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e4e7c: ret  */ FN_RET(0x006e4dbc); r_esp += 4; return;
}

void f_006e4e80(void) /* sub_6E4E80 */
{
    FN_ENTER(0x006e4e80);
    /* 006e4e80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e4e81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4e82: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e4e85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e4e87: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006e4e8b: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006e4e8f: movzx esi, word ptr [ebx + 0xf8] */ r_esi = (u32)R16((u32)(r_ebx+0xf8u));
    /* 006e4e96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e4e98: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4e9a: jne 0x6e4ea1 */ if (!fZ) goto L_006e4ea1;
L_006e4e9c:; BB(0x006e4e9c);
    /* 006e4e9c: mov eax, 1 */ r_eax = 0x1u;
L_006e4ea1:; BB(0x006e4ea1);
    /* 006e4ea1: movzx esi, word ptr [ebx + 0xfa] */ r_esi = (u32)R16((u32)(r_ebx+0xfau));
    /* 006e4ea8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4eaa: jne 0x6e4eb1 */ if (!fZ) goto L_006e4eb1;
L_006e4eac:; BB(0x006e4eac);
    /* 006e4eac: mov eax, 1 */ r_eax = 0x1u;
L_006e4eb1:; BB(0x006e4eb1);
    /* 006e4eb1: movzx esi, word ptr [ebx + 0xfc] */ r_esi = (u32)R16((u32)(r_ebx+0xfcu));
    /* 006e4eb8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4eba: jne 0x6e4ec1 */ if (!fZ) goto L_006e4ec1;
L_006e4ebc:; BB(0x006e4ebc);
    /* 006e4ebc: mov eax, 1 */ r_eax = 0x1u;
L_006e4ec1:; BB(0x006e4ec1);
    /* 006e4ec1: movzx esi, word ptr [ebx + 0xfe] */ r_esi = (u32)R16((u32)(r_ebx+0xfeu));
    /* 006e4ec8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4eca: jne 0x6e4ed1 */ if (!fZ) goto L_006e4ed1;
L_006e4ecc:; BB(0x006e4ecc);
    /* 006e4ecc: mov eax, 1 */ r_eax = 0x1u;
L_006e4ed1:; BB(0x006e4ed1);
    /* 006e4ed1: movzx esi, word ptr [ebx + 0x100] */ r_esi = (u32)R16((u32)(r_ebx+0x100u));
    /* 006e4ed8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4eda: jne 0x6e4ee1 */ if (!fZ) goto L_006e4ee1;
L_006e4edc:; BB(0x006e4edc);
    /* 006e4edc: mov eax, 1 */ r_eax = 0x1u;
L_006e4ee1:; BB(0x006e4ee1);
    /* 006e4ee1: movzx esi, word ptr [ebx + 0x102] */ r_esi = (u32)R16((u32)(r_ebx+0x102u));
    /* 006e4ee8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4eea: jne 0x6e4ef1 */ if (!fZ) goto L_006e4ef1;
L_006e4eec:; BB(0x006e4eec);
    /* 006e4eec: mov eax, 1 */ r_eax = 0x1u;
L_006e4ef1:; BB(0x006e4ef1);
    /* 006e4ef1: movzx esi, word ptr [ebx + 0x104] */ r_esi = (u32)R16((u32)(r_ebx+0x104u));
    /* 006e4ef8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4efa: jne 0x6e4f01 */ if (!fZ) goto L_006e4f01;
L_006e4efc:; BB(0x006e4efc);
    /* 006e4efc: mov eax, 1 */ r_eax = 0x1u;
L_006e4f01:; BB(0x006e4f01);
    /* 006e4f01: movzx esi, word ptr [ebx + 0x106] */ r_esi = (u32)R16((u32)(r_ebx+0x106u));
    /* 006e4f08: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f0a: jne 0x6e4f11 */ if (!fZ) goto L_006e4f11;
L_006e4f0c:; BB(0x006e4f0c);
    /* 006e4f0c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f11:; BB(0x006e4f11);
    /* 006e4f11: movzx esi, word ptr [ebx + 0x108] */ r_esi = (u32)R16((u32)(r_ebx+0x108u));
    /* 006e4f18: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f1a: jne 0x6e4f21 */ if (!fZ) goto L_006e4f21;
L_006e4f1c:; BB(0x006e4f1c);
    /* 006e4f1c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f21:; BB(0x006e4f21);
    /* 006e4f21: movzx esi, word ptr [ebx + 0x10a] */ r_esi = (u32)R16((u32)(r_ebx+0x10au));
    /* 006e4f28: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f2a: jne 0x6e4f31 */ if (!fZ) goto L_006e4f31;
L_006e4f2c:; BB(0x006e4f2c);
    /* 006e4f2c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f31:; BB(0x006e4f31);
    /* 006e4f31: movzx esi, word ptr [ebx + 0x10c] */ r_esi = (u32)R16((u32)(r_ebx+0x10cu));
    /* 006e4f38: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f3a: jne 0x6e4f41 */ if (!fZ) goto L_006e4f41;
L_006e4f3c:; BB(0x006e4f3c);
    /* 006e4f3c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f41:; BB(0x006e4f41);
    /* 006e4f41: movzx esi, word ptr [ebx + 0x10e] */ r_esi = (u32)R16((u32)(r_ebx+0x10eu));
    /* 006e4f48: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f4a: jne 0x6e4f51 */ if (!fZ) goto L_006e4f51;
L_006e4f4c:; BB(0x006e4f4c);
    /* 006e4f4c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f51:; BB(0x006e4f51);
    /* 006e4f51: movzx esi, word ptr [ebx + 0x110] */ r_esi = (u32)R16((u32)(r_ebx+0x110u));
    /* 006e4f58: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f5a: jne 0x6e4f61 */ if (!fZ) goto L_006e4f61;
L_006e4f5c:; BB(0x006e4f5c);
    /* 006e4f5c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f61:; BB(0x006e4f61);
    /* 006e4f61: movzx esi, word ptr [ebx + 0x112] */ r_esi = (u32)R16((u32)(r_ebx+0x112u));
    /* 006e4f68: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f6a: jne 0x6e4f71 */ if (!fZ) goto L_006e4f71;
L_006e4f6c:; BB(0x006e4f6c);
    /* 006e4f6c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f71:; BB(0x006e4f71);
    /* 006e4f71: movzx esi, word ptr [ebx + 0x114] */ r_esi = (u32)R16((u32)(r_ebx+0x114u));
    /* 006e4f78: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f7a: jne 0x6e4f81 */ if (!fZ) goto L_006e4f81;
L_006e4f7c:; BB(0x006e4f7c);
    /* 006e4f7c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f81:; BB(0x006e4f81);
    /* 006e4f81: movzx esi, word ptr [ebx + 0x116] */ r_esi = (u32)R16((u32)(r_ebx+0x116u));
    /* 006e4f88: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f8a: jne 0x6e4f91 */ if (!fZ) goto L_006e4f91;
L_006e4f8c:; BB(0x006e4f8c);
    /* 006e4f8c: mov eax, 1 */ r_eax = 0x1u;
L_006e4f91:; BB(0x006e4f91);
    /* 006e4f91: movzx esi, word ptr [ebx + 0x118] */ r_esi = (u32)R16((u32)(r_ebx+0x118u));
    /* 006e4f98: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4f9a: jne 0x6e4fa1 */ if (!fZ) goto L_006e4fa1;
L_006e4f9c:; BB(0x006e4f9c);
    /* 006e4f9c: mov eax, 1 */ r_eax = 0x1u;
L_006e4fa1:; BB(0x006e4fa1);
    /* 006e4fa1: movzx esi, word ptr [ebx + 0x11a] */ r_esi = (u32)R16((u32)(r_ebx+0x11au));
    /* 006e4fa8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4faa: jne 0x6e4fb1 */ if (!fZ) goto L_006e4fb1;
L_006e4fac:; BB(0x006e4fac);
    /* 006e4fac: mov eax, 1 */ r_eax = 0x1u;
L_006e4fb1:; BB(0x006e4fb1);
    /* 006e4fb1: movzx esi, word ptr [ebx + 0x11c] */ r_esi = (u32)R16((u32)(r_ebx+0x11cu));
    /* 006e4fb8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4fba: jne 0x6e4fc1 */ if (!fZ) goto L_006e4fc1;
L_006e4fbc:; BB(0x006e4fbc);
    /* 006e4fbc: mov eax, 1 */ r_eax = 0x1u;
L_006e4fc1:; BB(0x006e4fc1);
    /* 006e4fc1: movzx esi, word ptr [ebx + 0x11e] */ r_esi = (u32)R16((u32)(r_ebx+0x11eu));
    /* 006e4fc8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4fca: jne 0x6e4fd1 */ if (!fZ) goto L_006e4fd1;
L_006e4fcc:; BB(0x006e4fcc);
    /* 006e4fcc: mov eax, 1 */ r_eax = 0x1u;
L_006e4fd1:; BB(0x006e4fd1);
    /* 006e4fd1: movzx esi, word ptr [ebx + 0x120] */ r_esi = (u32)R16((u32)(r_ebx+0x120u));
    /* 006e4fd8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4fda: jne 0x6e4fe1 */ if (!fZ) goto L_006e4fe1;
L_006e4fdc:; BB(0x006e4fdc);
    /* 006e4fdc: mov eax, 1 */ r_eax = 0x1u;
L_006e4fe1:; BB(0x006e4fe1);
    /* 006e4fe1: movzx esi, word ptr [ebx + 0x122] */ r_esi = (u32)R16((u32)(r_ebx+0x122u));
    /* 006e4fe8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4fea: jne 0x6e4ff1 */ if (!fZ) goto L_006e4ff1;
L_006e4fec:; BB(0x006e4fec);
    /* 006e4fec: mov eax, 1 */ r_eax = 0x1u;
L_006e4ff1:; BB(0x006e4ff1);
    /* 006e4ff1: movzx esi, word ptr [ebx + 0x124] */ r_esi = (u32)R16((u32)(r_ebx+0x124u));
    /* 006e4ff8: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e4ffa: jne 0x6e5001 */ if (!fZ) goto L_006e5001;
L_006e4ffc:; BB(0x006e4ffc);
    /* 006e4ffc: mov eax, 1 */ r_eax = 0x1u;
L_006e5001:; BB(0x006e5001);
    /* 006e5001: movzx esi, word ptr [ebx + 0x126] */ r_esi = (u32)R16((u32)(r_ebx+0x126u));
    /* 006e5008: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e500a: jne 0x6e5011 */ if (!fZ) goto L_006e5011;
L_006e500c:; BB(0x006e500c);
    /* 006e500c: mov eax, 1 */ r_eax = 0x1u;
L_006e5011:; BB(0x006e5011);
    /* 006e5011: movzx esi, word ptr [ebx + 0x128] */ r_esi = (u32)R16((u32)(r_ebx+0x128u));
    /* 006e5018: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e501a: jne 0x6e5021 */ if (!fZ) goto L_006e5021;
L_006e501c:; BB(0x006e501c);
    /* 006e501c: mov eax, 1 */ r_eax = 0x1u;
L_006e5021:; BB(0x006e5021);
    /* 006e5021: movzx esi, word ptr [ebx + 0x12a] */ r_esi = (u32)R16((u32)(r_ebx+0x12au));
    /* 006e5028: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e502a: jne 0x6e5031 */ if (!fZ) goto L_006e5031;
L_006e502c:; BB(0x006e502c);
    /* 006e502c: mov eax, 1 */ r_eax = 0x1u;
L_006e5031:; BB(0x006e5031);
    /* 006e5031: movzx esi, word ptr [ebx + 0x12c] */ r_esi = (u32)R16((u32)(r_ebx+0x12cu));
    /* 006e5038: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e503a: jne 0x6e5041 */ if (!fZ) goto L_006e5041;
L_006e503c:; BB(0x006e503c);
    /* 006e503c: mov eax, 1 */ r_eax = 0x1u;
L_006e5041:; BB(0x006e5041);
    /* 006e5041: movzx esi, word ptr [ebx + 0x12e] */ r_esi = (u32)R16((u32)(r_ebx+0x12eu));
    /* 006e5048: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e504a: jne 0x6e5051 */ if (!fZ) goto L_006e5051;
L_006e504c:; BB(0x006e504c);
    /* 006e504c: mov eax, 1 */ r_eax = 0x1u;
L_006e5051:; BB(0x006e5051);
    /* 006e5051: movzx esi, word ptr [ebx + 0x130] */ r_esi = (u32)R16((u32)(r_ebx+0x130u));
    /* 006e5058: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e505a: jne 0x6e5061 */ if (!fZ) goto L_006e5061;
L_006e505c:; BB(0x006e505c);
    /* 006e505c: mov eax, 1 */ r_eax = 0x1u;
L_006e5061:; BB(0x006e5061);
    /* 006e5061: movzx esi, word ptr [ebx + 0x132] */ r_esi = (u32)R16((u32)(r_ebx+0x132u));
    /* 006e5068: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e506a: jne 0x6e5071 */ if (!fZ) goto L_006e5071;
L_006e506c:; BB(0x006e506c);
    /* 006e506c: mov eax, 1 */ r_eax = 0x1u;
L_006e5071:; BB(0x006e5071);
    /* 006e5071: movzx esi, word ptr [ebx + 0x134] */ r_esi = (u32)R16((u32)(r_ebx+0x134u));
    /* 006e5078: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e507a: jne 0x6e5081 */ if (!fZ) goto L_006e5081;
L_006e507c:; BB(0x006e507c);
    /* 006e507c: mov eax, 1 */ r_eax = 0x1u;
L_006e5081:; BB(0x006e5081);
    /* 006e5081: movzx esi, word ptr [ebx + 0x136] */ r_esi = (u32)R16((u32)(r_ebx+0x136u));
    /* 006e5088: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e508a: jne 0x6e5091 */ if (!fZ) goto L_006e5091;
L_006e508c:; BB(0x006e508c);
    /* 006e508c: mov eax, 1 */ r_eax = 0x1u;
L_006e5091:; BB(0x006e5091);
    /* 006e5091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5093: jne 0x6e50eb */ if (!fZ) goto L_006e50eb;
L_006e5095:; BB(0x006e5095);
    /* 006e5095: mov eax, dword ptr [ebx + 0x138] */ r_eax = R32((u32)(r_ebx+0x138u));
    /* 006e509b: mov word ptr [ebx + eax*2 + 0xf8], dx */ W16((u32)(r_ebx+r_eax*2+0xf8u), (u16)r_edx);
    /* 006e50a3: mov eax, dword ptr [ebx + 0x138] */ r_eax = R32((u32)(r_ebx+0x138u));
    /* 006e50a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e50ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e50af: jl 0x6e50bd */ if ((fS!=fO)) goto L_006e50bd;
L_006e50b1:; BB(0x006e50b1);
    /* 006e50b1: mov dword ptr [ebx + 0x138], 0x1f */ W32((u32)(r_ebx+0x138u), 0x1fu);
    /* 006e50bb: jmp 0x6e50c3 */ goto L_006e50c3;
L_006e50bd:; BB(0x006e50bd);
    /* 006e50bd: mov dword ptr [ebx + 0x138], eax */ W32((u32)(r_ebx+0x138u), r_eax);
L_006e50c3:; BB(0x006e50c3);
    /* 006e50c3: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 006e50c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e50cb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e50cf: mov esi, 1 */ r_esi = 0x1u;
    /* 006e50d4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006e50d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e50d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e50da: push dword ptr [ebx + 0xb8] */ { u32 v = R32((u32)(r_ebx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e50e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e50e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e50e3: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e50e6: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6e50e9u); call_ind(t); }
    /* 006e50e9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006e50eb:; BB(0x006e50eb);
    /* 006e50eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e50ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e50ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e50f0: ret 4 */ FN_RET(0x006e4e80); r_esp += 8; return;
}

