#include "protos.h"

void f_0065d198(void)
{
    FN_ENTER(0x0065d198);
    /* 0065d198: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d199: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d19b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d19d: push 0x8e788a */ { u32 v = 0x8e788au; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065d1b0: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d1b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065d1b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065d1b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065d1bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065d1bf: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1c4: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065d1cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65d1d0u); f_005caba4();
    /* 0065d1d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d1d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d1d6: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0065d1d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d1db: je 0x65d337 */ if (fZ) goto L_0065d337;
L_0065d1e1:; BB(0x0065d1e1);
    /* 0065d1e1: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0065d1e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d1ef: mov ecx, eax */ r_ecx = r_eax;
    /* 0065d1f1: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0065d1f6: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0065d1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d1fa: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0065d1fd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65d202u); f_007b4b48();
    /* 0065d202: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065d209: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d20c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065d20f: mov dword ptr [ecx], 0xb330d0 */ W32((u32)(r_ecx), 0xb330d0u);
    /* 0065d215: mov eax, dword ptr [0x9c82f8] */ r_eax = R32((u32)(0x9c82f8u));
    /* 0065d21a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d21b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065d21e: call dword ptr [0xb330e4] */ { u32 t = R32((u32)(0xb330e4u)); r_esp -= 4; W32(r_esp, 0x65d224u); call_ind(t); }
    /* 0065d224: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d227: mov eax, dword ptr [0xa8f994] */ r_eax = R32((u32)(0xa8f994u));
    /* 0065d22c: mov dword ptr [ecx + 0xb0], 4 */ W32((u32)(r_ecx+0xb0u), 0x4u);
    /* 0065d236: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0065d23c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d23e: push 0x9c8210 */ { u32 v = 0x9c8210u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d243: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65d248u); f_007b9a88();
    /* 0065d248: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d24b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65d250u); f_007b4f54();
    /* 0065d250: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d253: mov dword ptr [eax + 0xb4], 0x43c80000 */ W32((u32)(r_eax+0xb4u), 0x43c80000u);
    /* 0065d25d: mov dword ptr [eax + 0xb8], 0x42480000 */ W32((u32)(r_eax+0xb8u), 0x42480000u);
    /* 0065d267: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0065d271: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 0065d277: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d27a: je 0x65d2a2 */ if (fZ) goto L_0065d2a2;
L_0065d27c:; BB(0x0065d27c);
    /* 0065d27c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065d27f: je 0x65d2a2 */ if (fZ) goto L_0065d2a2;
L_0065d281:; BB(0x0065d281);
    /* 0065d281: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0065d288:; BB(0x0065d288);
    /* 0065d288: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d28b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d28e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d291: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d294: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d297: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d29e: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d2a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d2a1: ret  */ FN_RET(0x0065d198); r_esp += 4; return;
L_0065d2a2:; BB(0x0065d2a2);
    /* 0065d2a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d2a5: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0065d2a8: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0065d2ac: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0065d2b0: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 0065d2b4: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 0065d2b8: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0065d2bc: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0065d2c0: mov word ptr [ebp - 0x5a], cx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_ecx);
    /* 0065d2c4: mov word ptr [ebp - 0x58], bx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ebx);
    /* 0065d2c8: mov word ptr [ebp - 0x56], si */ W16((u32)(r_ebp+0xffffffaau), (u16)r_esi);
    /* 0065d2cc: mov word ptr [ebp - 0x54], di */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edi);
    /* 0065d2d0: mov word ptr [ebp - 0x52], dx */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edx);
    /* 0065d2d4: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0065d2d7: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0065d2da: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065d2dd: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065d2e0: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0065d2e3: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0065d2e6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065d2e9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0065d2ec: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0065d2ef: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065d2f2: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0065d2f5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0065d2f8: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065d2fb: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0065d2fe: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065d301: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0065d304: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065d307: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065d30a: mov dword ptr [ebp - 0x38], 0x42200000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42200000u);
    /* 0065d311: mov dword ptr [ebp - 0x34], 0x41a00000 */ W32((u32)(r_ebp+0xffffffccu), 0x41a00000u);
    /* 0065d318: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0065d31b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d31c: mov dword ptr [ebp - 0x30], 0x41200000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41200000u);
    /* 0065d323: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x65d328u); f_0065f960();
    /* 0065d328: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d329: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d32c: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065d332: jmp 0x65d281 */ f_0065d281(); return;
L_0065d337:; BB(0x0065d337);
    /* 0065d337: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d339: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d33c: jmp 0x65d288 */ goto L_0065d288;
}

void f_0065d344(void)
{
    FN_ENTER(0x0065d344);
    /* 0065d344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d345: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d347: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d349: push 0x8e78be */ { u32 v = 0x8e78beu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d34e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d355: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065d35c: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d35f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065d362: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065d365: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065d368: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065d36b: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d370: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065d377: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65d37cu); f_005caba4();
    /* 0065d37c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d37f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d382: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0065d385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d387: je 0x65d4e3 */ if (fZ) goto L_0065d4e3;
L_0065d38d:; BB(0x0065d38d);
    /* 0065d38d: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0065d394: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d39b: mov ecx, eax */ r_ecx = r_eax;
    /* 0065d39d: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0065d3a2: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0065d3a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3a6: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0065d3a9: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65d3aeu); f_007b4b48();
    /* 0065d3ae: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065d3b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d3b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065d3bb: mov dword ptr [ecx], 0xb330d0 */ W32((u32)(r_ecx), 0xb330d0u);
    /* 0065d3c1: mov eax, dword ptr [0x9c82f8] */ r_eax = R32((u32)(0x9c82f8u));
    /* 0065d3c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3c7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065d3ca: call dword ptr [0xb330e4] */ { u32 t = R32((u32)(0xb330e4u)); r_esp -= 4; W32(r_esp, 0x65d3d0u); call_ind(t); }
    /* 0065d3d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d3d3: mov eax, dword ptr [0xa8f998] */ r_eax = R32((u32)(0xa8f998u));
    /* 0065d3d8: mov dword ptr [ecx + 0xb0], 5 */ W32((u32)(r_ecx+0xb0u), 0x5u);
    /* 0065d3e2: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0065d3e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3ea: push 0x9c823c */ { u32 v = 0x9c823cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d3ef: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65d3f4u); f_007b9a88();
    /* 0065d3f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d3f7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65d3fcu); f_007b4f54();
    /* 0065d3fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d3ff: mov dword ptr [eax + 0xb4], 0x43c80000 */ W32((u32)(r_eax+0xb4u), 0x43c80000u);
    /* 0065d409: mov dword ptr [eax + 0xb8], 0x42480000 */ W32((u32)(r_eax+0xb8u), 0x42480000u);
    /* 0065d413: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0065d41d: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 0065d423: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d426: je 0x65d44e */ if (fZ) goto L_0065d44e;
L_0065d428:; BB(0x0065d428);
    /* 0065d428: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065d42b: je 0x65d44e */ if (fZ) goto L_0065d44e;
L_0065d42d:; BB(0x0065d42d);
    /* 0065d42d: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0065d434:; BB(0x0065d434);
    /* 0065d434: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d437: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d43a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d43d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d440: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d443: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d44a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d44c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d44d: ret  */ FN_RET(0x0065d344); r_esp += 4; return;
L_0065d44e:; BB(0x0065d44e);
    /* 0065d44e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d451: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0065d454: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0065d458: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0065d45c: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 0065d460: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 0065d464: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0065d468: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0065d46c: mov word ptr [ebp - 0x5a], cx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_ecx);
    /* 0065d470: mov word ptr [ebp - 0x58], bx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ebx);
    /* 0065d474: mov word ptr [ebp - 0x56], si */ W16((u32)(r_ebp+0xffffffaau), (u16)r_esi);
    /* 0065d478: mov word ptr [ebp - 0x54], di */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edi);
    /* 0065d47c: mov word ptr [ebp - 0x52], dx */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edx);
    /* 0065d480: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0065d483: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0065d486: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065d489: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065d48c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0065d48f: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0065d492: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065d495: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0065d498: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0065d49b: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065d49e: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0065d4a1: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0065d4a4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065d4a7: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0065d4aa: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065d4ad: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0065d4b0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065d4b3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065d4b6: mov dword ptr [ebp - 0x38], 0x42200000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42200000u);
    /* 0065d4bd: mov dword ptr [ebp - 0x34], 0x41a00000 */ W32((u32)(r_ebp+0xffffffccu), 0x41a00000u);
    /* 0065d4c4: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0065d4c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4c8: mov dword ptr [ebp - 0x30], 0x41200000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41200000u);
    /* 0065d4cf: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x65d4d4u); f_0065f960();
    /* 0065d4d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d4d5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d4d8: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065d4de: jmp 0x65d42d */ f_0065d42d(); return;
L_0065d4e3:; BB(0x0065d4e3);
    /* 0065d4e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d4e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d4e8: jmp 0x65d434 */ goto L_0065d434;
}

void f_0065d4f0(void) /* sub_65D4F0 */
{
    FN_ENTER(0x0065d4f0);
    /* 0065d4f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4f3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065d4f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d4f7: mov ecx, dword ptr [ebx + 0xac] */ r_ecx = R32((u32)(r_ebx+0xacu));
    /* 0065d4fd: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65d502u); f_005b8624();
    /* 0065d502: mov ecx, eax */ r_ecx = r_eax;
    /* 0065d504: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65d509u); f_00829cc8();
    /* 0065d509: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65d50eu); f_0082d7b0();
    /* 0065d50e: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0065d511: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65d516u); f_0082d838();
    /* 0065d516: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0065d519: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d51b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65d520u); f_0082d8bc();
    /* 0065d520: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d522: mov ecx, dword ptr [ebx + 0xac] */ r_ecx = R32((u32)(r_ebx+0xacu));
    /* 0065d528: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65d52du); f_005b8610();
    /* 0065d52d: mov esi, ebx */ r_esi = r_ebx;
    /* 0065d52f: mov ebx, eax */ r_ebx = r_eax;
L_0065d531:; BB(0x0065d531);
    /* 0065d531: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0065d533: test edi, 0x100000 */ {  u32 a = r_edi; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d539: je 0x65d542 */ if (fZ) goto L_0065d542;
L_0065d53b:; BB(0x0065d53b);
    /* 0065d53b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65d540u); f_0082dbac();
    /* 0065d540: jmp 0x65d547 */ goto L_0065d547;
L_0065d542:; BB(0x0065d542);
    /* 0065d542: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65d547u); f_0082dab0();
L_0065d547:; BB(0x0065d547);
    /* 0065d547: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65d54cu); f_0082d7b0();
    /* 0065d54c: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d552: jne 0x65d55c */ if (!fZ) goto L_0065d55c;
L_0065d554:; BB(0x0065d554);
    /* 0065d554: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0065d557: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65d55cu); f_0082d838();
L_0065d55c:; BB(0x0065d55c);
    /* 0065d55c: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d562: jne 0x65d571 */ if (!fZ) goto L_0065d571;
L_0065d564:; BB(0x0065d564);
    /* 0065d564: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0065d567: mov edx, edi */ r_edx = r_edi;
    /* 0065d569: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0065d56c: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x65d571u); f_00830df8();
L_0065d571:; BB(0x0065d571);
    /* 0065d571: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d577: jne 0x65d581 */ if (!fZ) goto L_0065d581;
L_0065d579:; BB(0x0065d579);
    /* 0065d579: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0065d57c: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x65d581u); f_00831290();
L_0065d581:; BB(0x0065d581);
    /* 0065d581: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d587: jne 0x65d592 */ if (!fZ) goto L_0065d592;
L_0065d589:; BB(0x0065d589);
    /* 0065d589: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065d58c: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x65d591u); f_008321d8();
    /* 0065d591: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0065d592:; BB(0x0065d592);
    /* 0065d592: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d598: jne 0x65d5a9 */ if (!fZ) goto L_0065d5a9;
L_0065d59a:; BB(0x0065d59a);
    /* 0065d59a: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0065d59d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d59f: je 0x65d5a9 */ if (fZ) goto L_0065d5a9;
L_0065d5a1:; BB(0x0065d5a1);
    /* 0065d5a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0065d5a4: call 0x65d5c8 */ r_esp -= 4; W32(r_esp, 0x65d5a9u); f_0065d5c8();
L_0065d5a9:; BB(0x0065d5a9);
    /* 0065d5a9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65d5aeu); f_0082da80();
    /* 0065d5ae: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0065d5b1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d5b3: jne 0x65d531 */ if (!fZ) goto L_0065d531;
L_0065d5b9:; BB(0x0065d5b9);
    /* 0065d5b9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65d5beu); f_0082da80();
    /* 0065d5be: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65d5c3u); f_0082dab0();
    /* 0065d5c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065d5c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065d5c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065d5c6: ret  */ FN_RET(0x0065d4f0); r_esp += 4; return;
}

void f_0065d5c8(void) /* sub_65D5C8 */
{
    FN_ENTER(0x0065d5c8);
    /* 0065d5c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5cb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0065d5cf: mov ebx, eax */ r_ebx = r_eax;
    /* 0065d5d1: mov esi, ecx */ r_esi = r_ecx;
L_0065d5d3:; BB(0x0065d5d3);
    /* 0065d5d3: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0065d5d5: test edi, 0x100000 */ {  u32 a = r_edi; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d5db: je 0x65d5e4 */ if (fZ) goto L_0065d5e4;
L_0065d5dd:; BB(0x0065d5dd);
    /* 0065d5dd: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65d5e2u); f_0082dbac();
    /* 0065d5e2: jmp 0x65d5e9 */ goto L_0065d5e9;
L_0065d5e4:; BB(0x0065d5e4);
    /* 0065d5e4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65d5e9u); f_0082dab0();
L_0065d5e9:; BB(0x0065d5e9);
    /* 0065d5e9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65d5eeu); f_0082d7b0();
    /* 0065d5ee: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d5f4: jne 0x65d5fe */ if (!fZ) goto L_0065d5fe;
L_0065d5f6:; BB(0x0065d5f6);
    /* 0065d5f6: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0065d5f9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65d5feu); f_0082d838();
L_0065d5fe:; BB(0x0065d5fe);
    /* 0065d5fe: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d604: jne 0x65d613 */ if (!fZ) goto L_0065d613;
L_0065d606:; BB(0x0065d606);
    /* 0065d606: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 0065d609: mov edx, edi */ r_edx = r_edi;
    /* 0065d60b: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0065d60e: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x65d613u); f_00830df8();
L_0065d613:; BB(0x0065d613);
    /* 0065d613: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d619: jne 0x65d623 */ if (!fZ) goto L_0065d623;
L_0065d61b:; BB(0x0065d61b);
    /* 0065d61b: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 0065d61e: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x65d623u); f_00831290();
L_0065d623:; BB(0x0065d623);
    /* 0065d623: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d629: jne 0x65d634 */ if (!fZ) goto L_0065d634;
L_0065d62b:; BB(0x0065d62b);
    /* 0065d62b: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065d62e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x65d633u); f_008321d8();
    /* 0065d633: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0065d634:; BB(0x0065d634);
    /* 0065d634: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d63a: jne 0x65d64b */ if (!fZ) goto L_0065d64b;
L_0065d63c:; BB(0x0065d63c);
    /* 0065d63c: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0065d63f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d641: je 0x65d64b */ if (fZ) goto L_0065d64b;
L_0065d643:; BB(0x0065d643);
    /* 0065d643: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d644: mov ecx, esi */ r_ecx = r_esi;
    /* 0065d646: call 0x65d5c8 */ r_esp -= 4; W32(r_esp, 0x65d64bu); f_0065d5c8();
L_0065d64b:; BB(0x0065d64b);
    /* 0065d64b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65d650u); f_0082da80();
    /* 0065d650: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0065d653: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d655: jne 0x65d5d3 */ if (!fZ) goto L_0065d5d3;
L_0065d65b:; BB(0x0065d65b);
    /* 0065d65b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065d65c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065d65d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065d65e: ret 4 */ FN_RET(0x0065d5c8); r_esp += 8; return;
}

void f_0065d664(void) /* sub_65D664 */
{
    FN_ENTER(0x0065d664);
    /* 0065d664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d665: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d667: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d669: push 0x8e78e4 */ { u32 v = 0x8e78e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d66e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d675: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065d67c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d67f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065d682: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065d685: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065d688: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065d68b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d68d: mov ecx, dword ptr [0x9c82fc] */ r_ecx = R32((u32)(0x9c82fcu));
    /* 0065d693: mov dword ptr [0xa8f984], eax */ W32((u32)(0xa8f984u), r_eax);
    /* 0065d698: mov dword ptr [0xa8f988], eax */ W32((u32)(0xa8f988u), r_eax);
    /* 0065d69d: mov edx, 0x9c82fc */ r_edx = 0x9c82fcu;
    /* 0065d6a2: mov dword ptr [0xa8f98c], eax */ W32((u32)(0xa8f98cu), r_eax);
    /* 0065d6a7: mov dword ptr [0xa8f990], eax */ W32((u32)(0xa8f990u), r_eax);
    /* 0065d6ac: mov dword ptr [0xa8f994], eax */ W32((u32)(0xa8f994u), r_eax);
    /* 0065d6b1: mov dword ptr [0xa8f998], eax */ W32((u32)(0xa8f998u), r_eax);
    /* 0065d6b6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0065d6b9: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065d6bc: je 0x65d724 */ if (fZ) goto L_0065d724;
L_0065d6be:; BB(0x0065d6be);
    /* 0065d6be: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0065d6c5: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6ca: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65d6cfu); f_008581c5();
    /* 0065d6cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d6d0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065d6d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d6d5: je 0x65d73b */ if (fZ) goto L_0065d73b;
L_0065d6d7:; BB(0x0065d6d7);
    /* 0065d6d7: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0065d6de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d6e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d6e8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065d6eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d6ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6f0: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065d6f3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6f5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65d6fau); f_005b7a84();
    /* 0065d6fa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065d6fd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0065d704:; BB(0x0065d704);
    /* 0065d704: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d707: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065d709: mov dword ptr [edx*4 + 0xa8f984], ecx */ W32((u32)(r_edx*4+0xa8f984u), r_ecx);
    /* 0065d710: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d717: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065d71a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065d71c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d71f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065d722: jne 0x65d6be */ if (!fZ) goto L_0065d6be;
L_0065d724:; BB(0x0065d724);
    /* 0065d724: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d727: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d72a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d72d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d730: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d737: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d73a: ret  */ FN_RET(0x0065d664); r_esp += 4; return;
L_0065d73b:; BB(0x0065d73b);
    /* 0065d73b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065d73d: jmp 0x65d704 */ goto L_0065d704;
}

void f_0065d740(void) /* sub_65D740 */
{
    FN_ENTER(0x0065d740);
    /* 0065d740: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d741: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065d743: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065d745: call 0x65d764 */ r_esp -= 4; W32(r_esp, 0x65d74au); f_0065d764();
    /* 0065d74a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065d74e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d750: jne 0x65d756 */ if (!fZ) goto L_0065d756;
L_0065d752:; BB(0x0065d752);
    /* 0065d752: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065d753: ret 4 */ FN_RET(0x0065d740); r_esp += 8; return;
L_0065d756:; BB(0x0065d756);
    /* 0065d756: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d757: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65d75cu); f_005c2f74();
    /* 0065d75c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d75d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065d75e: ret 4 */ FN_RET(0x0065d740); r_esp += 8; return;
}

void f_0065d764(void) /* sub_65D764 */
{
    FN_ENTER(0x0065d764);
    /* 0065d764: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d765: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d767: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d769: push 0x8e7900 */ { u32 v = 0x8e7900u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d76e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d775: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065d77c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d77f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065d782: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065d785: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065d788: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065d78b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065d78e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d795: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d798: mov dword ptr [eax], 0xb33200 */ W32((u32)(r_eax), 0xb33200u);
    /* 0065d79e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d79f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65d7a4u); f_007b4e84();
    /* 0065d7a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d7a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d7a8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65d7adu); f_007b9c8c();
    /* 0065d7ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d7b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d7b7: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65d7bcu); f_007b4aec();
    /* 0065d7bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d7bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d7c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d7c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d7c9: ret  */ FN_RET(0x0065d764); r_esp += 4; return;
}

void f_0065d7cc(void) /* sub_65D7CC */
{
    FN_ENTER(0x0065d7cc);
    /* 0065d7cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065d7cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065d7d1: call 0x65d7f0 */ r_esp -= 4; W32(r_esp, 0x65d7d6u); f_0065d7f0();
    /* 0065d7d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065d7da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d7dc: jne 0x65d7e2 */ if (!fZ) goto L_0065d7e2;
L_0065d7de:; BB(0x0065d7de);
    /* 0065d7de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065d7df: ret 4 */ FN_RET(0x0065d7cc); r_esp += 8; return;
L_0065d7e2:; BB(0x0065d7e2);
    /* 0065d7e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65d7e8u); f_005c2f74();
    /* 0065d7e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d7e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065d7ea: ret 4 */ FN_RET(0x0065d7cc); r_esp += 8; return;
}

void f_0065d7f0(void) /* sub_65D7F0 */
{
    FN_ENTER(0x0065d7f0);
    /* 0065d7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7f5: push 0x8e791c */ { u32 v = 0x8e791cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d801: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065d808: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d80b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065d80e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065d811: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065d814: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065d817: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065d81a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d821: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d824: mov dword ptr [eax], 0xb33230 */ W32((u32)(r_eax), 0xb33230u);
    /* 0065d82a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d82b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65d830u); f_007b4e84();
    /* 0065d830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d831: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d834: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65d839u); f_007b9c8c();
    /* 0065d839: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d840: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d843: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65d848u); f_007b4aec();
    /* 0065d848: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d84b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d852: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d854: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d855: ret  */ FN_RET(0x0065d7f0); r_esp += 4; return;
}

void f_0065d858(void) /* sub_65D858 */
{
    FN_ENTER(0x0065d858);
    /* 0065d858: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065d85e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d860: je 0x65d875 */ if (fZ) goto L_0065d875;
L_0065d862:; BB(0x0065d862);
    /* 0065d862: je 0x65d86b */ if (fZ) goto L_0065d86b;
L_0065d864:; BB(0x0065d864);
    /* 0065d864: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d866: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65d86bu); f_004066a8();
L_0065d86b:; BB(0x0065d86b);
    /* 0065d86b: mov dword ptr [0xa8f9b8], 0 */ W32((u32)(0xa8f9b8u), 0x0u);
L_0065d875:; BB(0x0065d875);
    /* 0065d875: mov ecx, dword ptr [0xa8f9bc] */ r_ecx = R32((u32)(0xa8f9bcu));
    /* 0065d87b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d87d: je 0x65d89a */ if (fZ) goto L_0065d89a;
L_0065d87f:; BB(0x0065d87f);
    /* 0065d87f: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x65d884u); f_00829de0();
    /* 0065d884: push dword ptr [0xa8f9bc] */ { u32 v = R32((u32)(0xa8f9bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065d88a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x65d88fu); f_0082e960();
    /* 0065d88f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d890: mov dword ptr [0xa8f9bc], 0 */ W32((u32)(0xa8f9bcu), 0x0u);
L_0065d89a:; BB(0x0065d89a);
    /* 0065d89a: ret  */ FN_RET(0x0065d858); r_esp += 4; return;
}

void f_0065d89c(void) /* sub_65D89C */
{
    FN_ENTER(0x0065d89c);
    /* 0065d89c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d89d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d8a0: mov edi, ecx */ r_edi = r_ecx;
    /* 0065d8a2: mov edx, dword ptr [edi + 0xb4] */ r_edx = R32((u32)(r_edi+0xb4u));
    /* 0065d8a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d8aa: jne 0x65d8ba */ if (!fZ) goto L_0065d8ba;
L_0065d8ac:; BB(0x0065d8ac);
    /* 0065d8ac: mov ecx, edi */ r_ecx = r_edi;
    /* 0065d8ae: call 0x65d954 */ r_esp -= 4; W32(r_esp, 0x65d8b3u); f_0065d954();
    /* 0065d8b3: mov eax, 0xffff0000 */ r_eax = 0xffff0000u;
    /* 0065d8b8: jmp 0x65d8cb */ goto L_0065d8cb;
L_0065d8ba:; BB(0x0065d8ba);
    /* 0065d8ba: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d8bd: jne 0x65d8cb */ if (!fZ) goto L_0065d8cb;
L_0065d8bf:; BB(0x0065d8bf);
    /* 0065d8bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0065d8c1: call 0x65d924 */ r_esp -= 4; W32(r_esp, 0x65d8c6u); f_0065d924();
    /* 0065d8c6: mov eax, 0xff00ff00 */ r_eax = 0xff00ff00u;
L_0065d8cb:; BB(0x0065d8cb);
    /* 0065d8cb: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 0065d8d1: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d8d4: jne 0x65d91c */ if (!fZ) goto L_0065d91c;
L_0065d8d6:; BB(0x0065d8d6);
    /* 0065d8d6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0065d8da: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0065d8dd: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0065d8e2: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0065d8e8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0065d8eb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0065d8ee: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065d8ef: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0065d8f4: mov word ptr [esp + 0x10], cx */ W16((u32)(r_esp+0x10u), (u16)r_ecx);
    /* 0065d8f9: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d8fb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065d8fd: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065d900: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d902: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065d904: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0065d908: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0065d90c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0065d90e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0065d912: mov word ptr [esp + 0x14], di */ W16((u32)(r_esp+0x14u), (u16)r_edi);
    /* 0065d917: call 0x805804 */ r_esp -= 4; W32(r_esp, 0x65d91cu); f_00805804();
L_0065d91c:; BB(0x0065d91c);
    /* 0065d91c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065d91f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065d920: ret  */ FN_RET(0x0065d89c); r_esp += 4; return;
}

void f_0065d924(void) /* sub_65D924 */
{
    FN_ENTER(0x0065d924);
    /* 0065d924: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d925: mov edi, ecx */ r_edi = r_ecx;
    /* 0065d927: movzx eax, word ptr [edi + 0xb0] */ r_eax = (u32)R16((u32)(r_edi+0xb0u));
    /* 0065d92e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d92f: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65d934u); f_00816eec();
    /* 0065d934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d935: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065d938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d93a: jne 0x65d951 */ if (!fZ) goto L_0065d951;
L_0065d93c:; BB(0x0065d93c);
    /* 0065d93c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d93e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d940: mov ecx, edi */ r_ecx = r_edi;
    /* 0065d942: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x65d947u); f_007b52c4();
    /* 0065d947: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
L_0065d951:; BB(0x0065d951);
    /* 0065d951: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065d952: ret  */ FN_RET(0x0065d924); r_esp += 4; return;
}

void f_0065d954(void) /* sub_65D954 */
{
    FN_ENTER(0x0065d954);
    /* 0065d954: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d955: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d958: mov esi, ecx */ r_esi = r_ecx;
    /* 0065d95a: mov edx, dword ptr [esi + 0xc4] */ r_edx = R32((u32)(r_esi+0xc4u));
    /* 0065d960: fld dword ptr [0x938adc] */ FPUSH(R_F32((u32)(0x938adcu)));
    /* 0065d966: fadd dword ptr [esi + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb8u));
    /* 0065d96c: fst dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0));
    /* 0065d972: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065d975: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065d978: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065d97b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065d97e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0065d981: fadd dword ptr [eax*4 + 0x938aa8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x938aa8u));
    /* 0065d988: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065d98a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065d98c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065d98d: jae 0x65d999 */ if (!fC) goto L_0065d999;
L_0065d98f:; BB(0x0065d98f);
    /* 0065d98f: mov dword ptr [esi + 0xb8], 0 */ W32((u32)(r_esi+0xb8u), 0x0u);
L_0065d999:; BB(0x0065d999);
    /* 0065d999: movzx eax, word ptr [esi + 0xb0] */ r_eax = (u32)R16((u32)(r_esi+0xb0u));
    /* 0065d9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9a1: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65d9a6u); f_00816eec();
    /* 0065d9a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d9a7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065d9aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d9ad: je 0x65d9b4 */ if (fZ) goto L_0065d9b4;
L_0065d9af:; BB(0x0065d9af);
    /* 0065d9af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065d9b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065d9b3: ret  */ FN_RET(0x0065d954); r_esp += 4; return;
L_0065d9b4:; BB(0x0065d9b4);
    /* 0065d9b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9b8: mov ecx, esi */ r_ecx = r_esi;
    /* 0065d9ba: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x65d9bfu); f_007b52ec();
    /* 0065d9bf: mov dword ptr [esi + 0xb4], 1 */ W32((u32)(r_esi+0xb4u), 0x1u);
    /* 0065d9c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065d9cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065d9cd: ret  */ FN_RET(0x0065d954); r_esp += 4; return;
}

void f_0065d9d0(void) /* sub_65D9D0 */
{
    FN_ENTER(0x0065d9d0);
    /* 0065d9d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9d2: mov esi, ecx */ r_esi = r_ecx;
    /* 0065d9d4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0065d9d6: mov ecx, esi */ r_ecx = r_esi;
    /* 0065d9d8: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9dd: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9e2: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65d9e5u); call_ind(t); }
    /* 0065d9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d9e7: je 0x65da8f */ if (fZ) goto L_0065da8f;
L_0065d9ed:; BB(0x0065d9ed);
    /* 0065d9ed: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0065d9f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d9f5: je 0x65da0c */ if (fZ) goto L_0065da0c;
L_0065d9f7:; BB(0x0065d9f7);
    /* 0065d9f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065d9fa: jne 0x65da8f */ if (!fZ) goto L_0065da8f;
L_0065da00:; BB(0x0065da00);
    /* 0065da00: mov ecx, esi */ r_ecx = r_esi;
    /* 0065da02: call 0x65de80 */ r_esp -= 4; W32(r_esp, 0x65da07u); f_0065de80();
    /* 0065da07: jmp 0x65da8f */ goto L_0065da8f;
L_0065da0c:; BB(0x0065da0c);
    /* 0065da0c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0065da0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065da11: mov ebx, eax */ r_ebx = r_eax;
L_0065da13:; BB(0x0065da13);
    /* 0065da13: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
    /* 0065da19: movzx edx, word ptr [edx*2 + 0x938acc] */ r_edx = (u32)R16((u32)(r_edx*2+0x938accu));
    /* 0065da21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065da22: push dword ptr [esi + ebx*4 + 0xc8] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065da29: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65da2eu); f_0081a588();
    /* 0065da2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065da31: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065da34: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065da37: jl 0x65da13 */ if ((fS!=fO)) goto L_0065da13;
L_0065da39:; BB(0x0065da39);
    /* 0065da39: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0065da3c: mov ecx, dword ptr [0xa8f9bc] */ r_ecx = R32((u32)(0xa8f9bcu));
    /* 0065da42: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65da47u); f_00829cc8();
    /* 0065da47: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65da4cu); f_0082d7b0();
    /* 0065da4c: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0065da4f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65da54u); f_0082d838();
    /* 0065da54: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0065da57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065da59: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65da5eu); f_0082d8bc();
    /* 0065da5e: mov ecx, dword ptr [esi + 0xbc] */ r_ecx = R32((u32)(r_esi+0xbcu));
    /* 0065da64: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65da69u); f_00831758();
    /* 0065da69: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65da6eu); f_0082dbac();
    /* 0065da6e: push dword ptr [esi + 0xb8] */ { u32 v = R32((u32)(r_esi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065da74: mov ecx, dword ptr [esi + 0xc0] */ r_ecx = R32((u32)(r_esi+0xc0u));
    /* 0065da7a: mov edx, dword ptr [esi + 0xc4] */ r_edx = R32((u32)(r_esi+0xc4u));
    /* 0065da80: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65da85u); f_0083bd00();
    /* 0065da85: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65da8au); f_0082dab0();
    /* 0065da8a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65da8fu); f_0082da80();
L_0065da8f:; BB(0x0065da8f);
    /* 0065da8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065da90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065da91: ret  */ FN_RET(0x0065d9d0); r_esp += 4; return;
}

void f_0065da94(void)
{
    FN_ENTER(0x0065da94);
    /* 0065da94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065da95: mov ebp, esp */ r_ebp = r_esp;
    /* 0065da97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065da99: push 0x8e7944 */ { u32 v = 0x8e7944u; r_esp -= 4; W32(r_esp, v); }
    /* 0065da9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065daa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065daa5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065daac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065daaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065dab2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065dab5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065dab8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065dabb: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dac0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065dac7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65daccu); f_005caba4();
    /* 0065dacc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065dacd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065dad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dad2: je 0x65db0b */ if (fZ) goto L_0065db0b;
L_0065dad4:; BB(0x0065dad4);
    /* 0065dad4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065dadb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065dae2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065dae5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065daeb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065daee: call 0x65db10 */ r_esp -= 4; W32(r_esp, 0x65daf3u); f_0065db10();
    /* 0065daf3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065daf6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065dafd:; BB(0x0065dafd);
    /* 0065dafd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065db00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065db07: mov esp, ebp */ r_esp = r_ebp;
    /* 0065db09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065db0a: ret  */ FN_RET(0x0065da94); r_esp += 4; return;
L_0065db0b:; BB(0x0065db0b);
    /* 0065db0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065db0d: jmp 0x65dafd */ goto L_0065dafd;
}

void f_0065db10(void) /* sub_65DB10 */
{
    FN_ENTER(0x0065db10);
    /* 0065db10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065db11: mov ebp, esp */ r_ebp = r_esp;
    /* 0065db13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065db15: push 0x8e7960 */ { u32 v = 0x8e7960u; r_esp -= 4; W32(r_esp, v); }
    /* 0065db1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065db20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065db21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065db28: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065db2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065db2e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065db31: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065db34: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065db37: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065db3a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065db3d: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0065db40: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065db43: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65db48u); f_007b4b48();
    /* 0065db48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065db4f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065db52: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065db55: mov dword ptr [ecx], 0xb33200 */ W32((u32)(r_ecx), 0xb33200u);
    /* 0065db5b: mov eax, dword ptr [0x9c84d8] */ r_eax = R32((u32)(0x9c84d8u));
    /* 0065db60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db61: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065db64: call dword ptr [0xb33214] */ { u32 t = R32((u32)(0xb33214u)); r_esp -= 4; W32(r_esp, 0x65db6au); call_ind(t); }
    /* 0065db6a: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065db6d: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0065db70: mov ebx, dword ptr [esi + 0x84] */ r_ebx = R32((u32)(r_esi+0x84u));
    /* 0065db76: mov edi, dword ptr [esi + 0x8c] */ r_edi = R32((u32)(r_esi+0x8cu));
    /* 0065db7c: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0065db7f: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0065db83: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065db88: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065db8b: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0065db8e: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065db91: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0065db94: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065db97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065db99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065db9b: mov dword ptr [esi + 0xb4], 0 */ W32((u32)(r_esi+0xb4u), 0x0u);
    /* 0065dba5: mov edx, 3 */ r_edx = 0x3u;
    /* 0065dbaa: mov word ptr [esi + 0xb0], bx */ W16((u32)(r_esi+0xb0u), (u16)r_ebx);
    /* 0065dbb1: jg 0x65dbb5 */ if ((!fZ&&fS==fO)) goto L_0065dbb5;
L_0065dbb3:; BB(0x0065dbb3);
    /* 0065dbb3: mov ecx, eax */ r_ecx = r_eax;
L_0065dbb5:; BB(0x0065dbb5);
    /* 0065dbb5: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065dbb8: mov dword ptr [esi + 0xb8], 0 */ W32((u32)(r_esi+0xb8u), 0x0u);
    /* 0065dbc2: jl 0x65dbc6 */ if ((fS!=fO)) goto L_0065dbc6;
L_0065dbc4:; BB(0x0065dbc4);
    /* 0065dbc4: mov ecx, edx */ r_ecx = r_edx;
L_0065dbc6:; BB(0x0065dbc6);
    /* 0065dbc6: mov dword ptr [esi + 0xac], ecx */ W32((u32)(r_esi+0xacu), r_ecx);
    /* 0065dbcc: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0065dbcf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dbd1: jne 0x65dc17 */ if (!fZ) goto L_0065dc17;
L_0065dbd3:; BB(0x0065dbd3);
    /* 0065dbd3: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dbd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbdb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65dbe0u); f_005b8610();
    /* 0065dbe0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dbe3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbe5: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065dbeb: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dbf1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65dbf6u); f_005b8610();
    /* 0065dbf6: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dbf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbfb: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0065dc01: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dc07: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65dc0cu); f_005b8638();
    /* 0065dc0c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dc0f: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 0065dc15: jmp 0x65dc59 */ goto L_0065dc59;
L_0065dc17:; BB(0x0065dc17);
    /* 0065dc17: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dc1d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dc1f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65dc24u); f_005b8610();
    /* 0065dc24: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dc27: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dc29: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065dc2f: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dc35: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65dc3au); f_005b8610();
    /* 0065dc3a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dc3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dc3f: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0065dc45: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dc4b: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65dc50u); f_005b8638();
    /* 0065dc50: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dc53: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
L_0065dc59:; BB(0x0065dc59);
    /* 0065dc59: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 0065dc5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065dc61: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0065dc67: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 0065dc6d: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 0065dc73: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 0065dc79: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0065dc7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dc7e: je 0x65dcae */ if (fZ) goto L_0065dcae;
L_0065dc80:; BB(0x0065dc80);
    /* 0065dc80: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065dc83: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0065dc88: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0065dc8e: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0065dc91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dc93: je 0x65dcae */ if (fZ) goto L_0065dcae;
L_0065dc95:; BB(0x0065dc95);
    /* 0065dc95: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065dc98: jge 0x65dcae */ if ((fS==fO)) goto L_0065dcae;
L_0065dc9a:; BB(0x0065dc9a);
    /* 0065dc9a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065dc9d: mov dword ptr [ecx + ebx*4 + 0xc8], eax */ W32((u32)(r_ecx+r_ebx*4+0xc8u), r_eax);
    /* 0065dca4: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0065dca7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065dcaa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dcac: jne 0x65dc95 */ if (!fZ) goto L_0065dc95;
L_0065dcae:; BB(0x0065dcae);
    /* 0065dcae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dcb0: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0065dcb6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065dcb7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcb9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcbb: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcbe: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcc0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcc2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcc4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcc6: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0065dcc9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065dccb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065dccd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065dccf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065dcd1: lea esi, [eax + ebx + 0x9c8340] */ r_esi = (u32)(r_eax+r_ebx+0x9c8340u);
    /* 0065dcd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065dcd9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65dcdeu); f_007b9a88();
    /* 0065dcde: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dce1: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065dce4: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065dce9: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065dcec: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65dcf1u); f_007b4f54();
    /* 0065dcf1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065dcf4: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x65dcf9u); f_007b999c();
    /* 0065dcf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065dcfa: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065dcfd: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065dd00: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065dd03: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065dd06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065dd09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065dd10: mov esp, ebp */ r_esp = r_ebp;
    /* 0065dd12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065dd13: ret 8 */ FN_RET(0x0065db10); r_esp += 12; return;
}

void f_0065dd18(void) /* sub_65DD18 */
{
    FN_ENTER(0x0065dd18);
    /* 0065dd18: mov eax, dword ptr [ecx + 0xb4] */ r_eax = R32((u32)(r_ecx+0xb4u));
    /* 0065dd1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dd20: jne 0x65dd28 */ if (!fZ) goto L_0065dd28;
L_0065dd22:; BB(0x0065dd22);
    /* 0065dd22: call 0x65dd34 */ r_esp -= 4; W32(r_esp, 0x65dd27u); f_0065dd34();
    /* 0065dd27: ret  */ FN_RET(0x0065dd18); r_esp += 4; return;
L_0065dd28:; BB(0x0065dd28);
    /* 0065dd28: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065dd2b: jne 0x65dd32 */ if (!fZ) goto L_0065dd32;
L_0065dd2d:; BB(0x0065dd2d);
    /* 0065dd2d: call 0x65d924 */ r_esp -= 4; W32(r_esp, 0x65dd32u); f_0065d924();
L_0065dd32:; BB(0x0065dd32);
    /* 0065dd32: ret  */ FN_RET(0x0065dd18); r_esp += 4; return;
}

void f_0065dd34(void) /* sub_65DD34 */
{
    FN_ENTER(0x0065dd34);
    /* 0065dd34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065dd35: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065dd38: mov esi, ecx */ r_esi = r_ecx;
    /* 0065dd3a: mov edx, dword ptr [esi + 0xc4] */ r_edx = R32((u32)(r_esi+0xc4u));
    /* 0065dd40: fld dword ptr [0x938adc] */ FPUSH(R_F32((u32)(0x938adcu)));
    /* 0065dd46: fadd dword ptr [esi + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xb8u));
    /* 0065dd4c: fst dword ptr [esi + 0xb8] */ W_F32((u32)(r_esi+0xb8u), ST(0));
    /* 0065dd52: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065dd55: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065dd58: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065dd5b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065dd5e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0065dd61: fadd dword ptr [eax*4 + 0x938aa0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x938aa0u));
    /* 0065dd68: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065dd6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065dd6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065dd6d: jae 0x65dd79 */ if (!fC) goto L_0065dd79;
L_0065dd6f:; BB(0x0065dd6f);
    /* 0065dd6f: mov dword ptr [esi + 0xb8], 0 */ W32((u32)(r_esi+0xb8u), 0x0u);
L_0065dd79:; BB(0x0065dd79);
    /* 0065dd79: movzx eax, word ptr [esi + 0xb0] */ r_eax = (u32)R16((u32)(r_esi+0xb0u));
    /* 0065dd80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065dd81: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65dd86u); f_00816eec();
    /* 0065dd86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065dd87: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065dd8a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dd8d: je 0x65dd94 */ if (fZ) goto L_0065dd94;
L_0065dd8f:; BB(0x0065dd8f);
    /* 0065dd8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065dd92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065dd93: ret  */ FN_RET(0x0065dd34); r_esp += 4; return;
L_0065dd94:; BB(0x0065dd94);
    /* 0065dd94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dd96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dd98: mov ecx, esi */ r_ecx = r_esi;
    /* 0065dd9a: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x65dd9fu); f_007b52ec();
    /* 0065dd9f: mov dword ptr [esi + 0xb4], 1 */ W32((u32)(r_esi+0xb4u), 0x1u);
    /* 0065dda9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065ddac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065ddad: ret  */ FN_RET(0x0065dd34); r_esp += 4; return;
}

void f_0065ddb0(void) /* sub_65DDB0 */
{
    FN_ENTER(0x0065ddb0);
    /* 0065ddb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddb2: mov esi, ecx */ r_esi = r_ecx;
    /* 0065ddb4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0065ddb6: mov ecx, esi */ r_ecx = r_esi;
    /* 0065ddb8: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddbd: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddc2: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65ddc5u); call_ind(t); }
    /* 0065ddc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ddc7: je 0x65de7d */ if (fZ) goto L_0065de7d;
L_0065ddcd:; BB(0x0065ddcd);
    /* 0065ddcd: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 0065ddd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ddd5: je 0x65de7d */ if (fZ) goto L_0065de7d;
L_0065dddb:; BB(0x0065dddb);
    /* 0065dddb: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0065dde1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dde3: je 0x65ddfa */ if (fZ) goto L_0065ddfa;
L_0065dde5:; BB(0x0065dde5);
    /* 0065dde5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065dde8: jne 0x65de7d */ if (!fZ) goto L_0065de7d;
L_0065ddee:; BB(0x0065ddee);
    /* 0065ddee: mov ecx, esi */ r_ecx = r_esi;
    /* 0065ddf0: call 0x65de80 */ r_esp -= 4; W32(r_esp, 0x65ddf5u); f_0065de80();
    /* 0065ddf5: jmp 0x65de7d */ goto L_0065de7d;
L_0065ddfa:; BB(0x0065ddfa);
    /* 0065ddfa: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0065ddfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065ddff: mov ebx, eax */ r_ebx = r_eax;
L_0065de01:; BB(0x0065de01);
    /* 0065de01: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
    /* 0065de07: movzx edx, word ptr [edx*2 + 0x938acc] */ r_edx = (u32)R16((u32)(r_edx*2+0x938accu));
    /* 0065de0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de10: push dword ptr [esi + ebx*4 + 0xc8] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065de17: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x65de1cu); f_0081a588();
    /* 0065de1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065de1f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065de22: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065de25: jl 0x65de01 */ if ((fS!=fO)) goto L_0065de01;
L_0065de27:; BB(0x0065de27);
    /* 0065de27: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0065de2a: mov ecx, dword ptr [0xa8f9bc] */ r_ecx = R32((u32)(0xa8f9bcu));
    /* 0065de30: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65de35u); f_00829cc8();
    /* 0065de35: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65de3au); f_0082d7b0();
    /* 0065de3a: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0065de3d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65de42u); f_0082d838();
    /* 0065de42: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0065de45: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065de47: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65de4cu); f_0082d8bc();
    /* 0065de4c: mov ecx, dword ptr [esi + 0xbc] */ r_ecx = R32((u32)(r_esi+0xbcu));
    /* 0065de52: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65de57u); f_00831758();
    /* 0065de57: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65de5cu); f_0082dbac();
    /* 0065de5c: push dword ptr [esi + 0xb8] */ { u32 v = R32((u32)(r_esi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065de62: mov ecx, dword ptr [esi + 0xc0] */ r_ecx = R32((u32)(r_esi+0xc0u));
    /* 0065de68: mov edx, dword ptr [esi + 0xc4] */ r_edx = R32((u32)(r_esi+0xc4u));
    /* 0065de6e: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x65de73u); f_0083bd00();
    /* 0065de73: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65de78u); f_0082dab0();
    /* 0065de78: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65de7du); f_0082da80();
L_0065de7d:; BB(0x0065de7d);
    /* 0065de7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065de7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065de7f: ret  */ FN_RET(0x0065ddb0); r_esp += 4; return;
}

void f_0065de80(void) /* sub_65DE80 */
{
    FN_ENTER(0x0065de80);
    /* 0065de80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065de83: mov ecx, dword ptr [0xa8f9bc] */ r_ecx = R32((u32)(0xa8f9bcu));
    /* 0065de89: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65de8eu); f_00829cc8();
    /* 0065de8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65de93u); f_0082d7b0();
    /* 0065de93: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0065de96: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65de9bu); f_0082d838();
    /* 0065de9b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0065de9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065dea0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x65dea5u); f_0082d8bc();
    /* 0065dea5: mov ecx, dword ptr [ebx + 0xbc] */ r_ecx = R32((u32)(r_ebx+0xbcu));
    /* 0065deab: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65deb0u); f_00831758();
    /* 0065deb0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65deb5u); f_0082da80();
    /* 0065deb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065deb6: ret  */ FN_RET(0x0065de80); r_esp += 4; return;
}

void f_0065deb8(void)
{
    FN_ENTER(0x0065deb8);
    /* 0065deb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065deb9: mov ebp, esp */ r_ebp = r_esp;
    /* 0065debb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065debd: push 0x8e7996 */ { u32 v = 0x8e7996u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dec2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065dec8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065dec9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ded0: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ded3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ded6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065ded9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065dedc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065dedf: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dee4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0065deeb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65def0u); f_005caba4();
    /* 0065def0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065def3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065def6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0065def9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065defb: je 0x65e16b */ if (fZ) goto L_0065e16b;
L_0065df01:; BB(0x0065df01);
    /* 0065df01: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0065df08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065df0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0065df11: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0065df16: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0065df19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065df1a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0065df1d: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65df22u); f_007b4b48();
    /* 0065df22: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065df29: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065df2c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065df2f: mov dword ptr [ecx], 0xb33230 */ W32((u32)(r_ecx), 0xb33230u);
    /* 0065df35: mov eax, dword ptr [0x9c84dc] */ r_eax = R32((u32)(0x9c84dcu));
    /* 0065df3a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065df3d: call dword ptr [0xb33244] */ { u32 t = R32((u32)(0xb33244u)); r_esp -= 4; W32(r_esp, 0x65df43u); call_ind(t); }
    /* 0065df43: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0065df46: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0065df49: mov ebx, dword ptr [esi + 0x84] */ r_ebx = R32((u32)(r_esi+0x84u));
    /* 0065df4f: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0065df52: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0065df56: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065df5b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065df5e: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0065df61: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065df64: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0065df67: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065df6a: mov dword ptr [esi + 0xb4], 0 */ W32((u32)(r_esi+0xb4u), 0x0u);
    /* 0065df74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065df76: mov dword ptr [esi + 0xb8], 0 */ W32((u32)(r_esi+0xb8u), 0x0u);
    /* 0065df80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065df82: mov edx, 3 */ r_edx = 0x3u;
    /* 0065df87: jg 0x65df8b */ if ((!fZ&&fS==fO)) goto L_0065df8b;
L_0065df89:; BB(0x0065df89);
    /* 0065df89: mov ecx, eax */ r_ecx = r_eax;
L_0065df8b:; BB(0x0065df8b);
    /* 0065df8b: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065df8e: mov word ptr [esi + 0xb0], bx */ W16((u32)(r_esi+0xb0u), (u16)r_ebx);
    /* 0065df95: jl 0x65df99 */ if ((fS!=fO)) goto L_0065df99;
L_0065df97:; BB(0x0065df97);
    /* 0065df97: mov ecx, edx */ r_ecx = r_edx;
L_0065df99:; BB(0x0065df99);
    /* 0065df99: mov dword ptr [esi + 0xac], ecx */ W32((u32)(r_esi+0xacu), r_ecx);
    /* 0065df9f: mov ecx, dword ptr [esi + 0x8c] */ r_ecx = R32((u32)(r_esi+0x8cu));
    /* 0065dfa5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0065dfa7: jl 0x65dfae */ if ((fS!=fO)) goto L_0065dfae;
L_0065dfa9:; BB(0x0065dfa9);
    /* 0065dfa9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065dfac: jle 0x65dfc2 */ if ((fZ||fS!=fO)) goto L_0065dfc2;
L_0065dfae:; BB(0x0065dfae);
    /* 0065dfae: mov edx, esi */ r_edx = r_esi;
    /* 0065dfb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065dfb2: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0065dfb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065dfba: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 0065dfc0: jmp 0x65dfce */ goto L_0065dfce;
L_0065dfc2:; BB(0x0065dfc2);
    /* 0065dfc2: mov eax, esi */ r_eax = r_esi;
    /* 0065dfc4: mov dword ptr [eax + 0xd8], 1 */ W32((u32)(r_eax+0xd8u), 0x1u);
L_0065dfce:; BB(0x0065dfce);
    /* 0065dfce: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0065dfd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dfd3: jne 0x65e016 */ if (!fZ) goto L_0065e016;
L_0065dfd5:; BB(0x0065dfd5);
    /* 0065dfd5: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dfdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfdd: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65dfe2u); f_005b8610();
    /* 0065dfe2: mov edx, esi */ r_edx = r_esi;
    /* 0065dfe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfe6: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065dfec: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065dff2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65dff7u); f_005b8610();
    /* 0065dff7: mov edx, esi */ r_edx = r_esi;
    /* 0065dff9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dffb: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0065e001: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e007: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65e00cu); f_005b8638();
    /* 0065e00c: mov edx, esi */ r_edx = r_esi;
    /* 0065e00e: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 0065e014: jmp 0x65e055 */ goto L_0065e055;
L_0065e016:; BB(0x0065e016);
    /* 0065e016: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e01c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e01e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65e023u); f_005b8610();
    /* 0065e023: mov edx, esi */ r_edx = r_esi;
    /* 0065e025: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e027: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065e02d: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e033: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65e038u); f_005b8610();
    /* 0065e038: mov edx, esi */ r_edx = r_esi;
    /* 0065e03a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e03c: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0065e042: mov ecx, dword ptr [0xa8f9b8] */ r_ecx = R32((u32)(0xa8f9b8u));
    /* 0065e048: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x65e04du); f_005b8638();
    /* 0065e04d: mov edx, esi */ r_edx = r_esi;
    /* 0065e04f: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
L_0065e055:; BB(0x0065e055);
    /* 0065e055: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 0065e05b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e05d: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 0065e063: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 0065e069: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 0065e06f: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 0065e075: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 0065e078: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e07a: je 0x65e0af */ if (fZ) goto L_0065e0af;
L_0065e07c:; BB(0x0065e07c);
    /* 0065e07c: mov ecx, edx */ r_ecx = r_edx;
    /* 0065e07e: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0065e081: mov eax, 1 */ r_eax = 0x1u;
    /* 0065e086: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 0065e08c: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0065e08f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e091: je 0x65e0af */ if (fZ) goto L_0065e0af;
L_0065e093:; BB(0x0065e093);
    /* 0065e093: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e096: jge 0x65e0af */ if ((fS==fO)) goto L_0065e0af;
L_0065e098:; BB(0x0065e098);
    /* 0065e098: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e09b: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0065e09e: mov dword ptr [ecx + eax*4 + 0xc8], edx */ W32((u32)(r_ecx+r_eax*4+0xc8u), r_edx);
    /* 0065e0a5: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0065e0a8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0ab: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e0ad: jne 0x65e093 */ if (!fZ) goto L_0065e093;
L_0065e0af:; BB(0x0065e0af);
    /* 0065e0af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e0b2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0b4: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0065e0ba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065e0bb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0bd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0bf: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0c2: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0c4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0ca: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0065e0cd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e0cf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e0d1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e0d3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e0d5: lea esi, [eax + ebx + 0x9c8340] */ r_esi = (u32)(r_eax+r_ebx+0x9c8340u);
    /* 0065e0dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0dd: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65e0e2u); f_007b9a88();
    /* 0065e0e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e0e5: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0065e0e8: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065e0ed: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 0065e0f3: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0065e0f6: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0065e0f9: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 0065e0fc: mov edi, dword ptr [ecx + 0xa4] */ r_edi = R32((u32)(r_ecx+0xa4u));
    /* 0065e102: mov esi, dword ptr [ecx + 0x70] */ r_esi = R32((u32)(r_ecx+0x70u));
    /* 0065e105: mov dword ptr [edi + 0xc], esi */ W32((u32)(r_edi+0xcu), r_esi);
    /* 0065e108: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65e10du); f_007b4f54();
    /* 0065e10d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e111: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x65e116u); f_007b999c();
    /* 0065e116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e117: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e11a: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0065e120: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065e122: jne 0x65e14d */ if (!fZ) goto L_0065e14d;
L_0065e124:; BB(0x0065e124);
    /* 0065e124: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 0065e12a: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0065e12f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065e132: jle 0x65e14d */ if ((fZ||fS!=fO)) goto L_0065e14d;
L_0065e134:; BB(0x0065e134);
    /* 0065e134: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e137: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e139: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e13a: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x65e13fu); f_007b52ec();
    /* 0065e13f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e142: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065e145: cmp ebx, dword ptr [eax + 0xa8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065e14b: jl 0x65e134 */ if ((fS!=fO)) goto L_0065e134;
L_0065e14d:; BB(0x0065e14d);
    /* 0065e14d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0065e154:; BB(0x0065e154);
    /* 0065e154: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e157: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065e15a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e15d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e160: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e167: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e169: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e16a: ret  */ FN_RET(0x0065deb8); r_esp += 4; return;
L_0065e16b:; BB(0x0065e16b);
    /* 0065e16b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065e16d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065e170: jmp 0x65e154 */ goto L_0065e154;
}

