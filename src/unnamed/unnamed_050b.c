#include "protos.h"

void f_0050b1dc(void) /* sub_50B1DC */
{
    FN_ENTER(0x0050b1dc);
    /* 0050b1dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b1dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b1df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050b1e1: push 0x8d3e42 */ { u32 v = 0x8d3e42u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b1e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050b1ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050b1ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050b1f4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050b1f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050b1fa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050b1fd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050b200: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050b203: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050b206: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050b20c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b20e: jg 0x50b3a0 */ if ((!fZ&&fS==fO)) goto L_0050b3a0;
L_0050b214:; BB(0x0050b214);
    /* 0050b214: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050b217: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050b21a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b21c: jle 0x50b390 */ if ((fZ||fS!=fO)) goto L_0050b390;
L_0050b222:; BB(0x0050b222);
    /* 0050b222: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050b225: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050b22c: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050b232: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050b235: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b23a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50b23fu); f_005caba4();
    /* 0050b23f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050b242: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b245: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050b248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b24a: je 0x50b4fe */ if (fZ) goto L_0050b4fe;
L_0050b250:; BB(0x0050b250);
    /* 0050b250: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050b257: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050b25e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050b264: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050b267: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050b26e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b270: mov ecx, eax */ r_ecx = r_eax;
    /* 0050b272: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b274: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b277: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b279: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b27b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b27d: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b283: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50b288u); f_008193cc();
    /* 0050b288: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0050b28b: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050b291: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050b297: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050b29e: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050b2a3: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050b2a6: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050b2ad: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050b2b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050b2b4: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050b2bb: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050b2be: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050b2c1: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050b2c4: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050b2cb: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050b2ce: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050b2d1: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050b2d4: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b2d7: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050b2d9: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b2dc: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050b2df: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050b2e2: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050b2e5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b2e8: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050b2eb: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050b2ee: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050b2f2: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050b2f6: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050b2fa: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050b2ff: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050b303: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b306: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0050b308: mov dword ptr [esi + 0x78], ebx */ W32((u32)(r_esi+0x78u), r_ebx);
    /* 0050b30b: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b30e: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050b311: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 0050b317: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b31a: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050b31d: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0050b320: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0050b323: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0050b326: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 0050b329: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 0050b32c: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0050b32f: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050b332: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050b336: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b33b: je 0x50b360 */ if (fZ) goto L_0050b360;
L_0050b33d:; BB(0x0050b33d);
    /* 0050b33d: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050b341: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b346: je 0x50b354 */ if (fZ) goto L_0050b354;
L_0050b348:; BB(0x0050b348);
    /* 0050b348: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050b34d: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b34f: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050b352: jmp 0x50b36a */ goto L_0050b36a;
L_0050b354:; BB(0x0050b354);
    /* 0050b354: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050b359: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b35b: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050b35e: jmp 0x50b36a */ goto L_0050b36a;
L_0050b360:; BB(0x0050b360);
    /* 0050b360: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050b365: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b367: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050b36a:; BB(0x0050b36a);
    /* 0050b36a: mov eax, ebx */ r_eax = r_ebx;
    /* 0050b36c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050b373: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050b376: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050b379:; BB(0x0050b379);
    /* 0050b379: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050b37c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050b37f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050b382: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b385: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b38c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b38e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b38f: ret  */ FN_RET(0x0050b1dc); r_esp += 4; return;
L_0050b390:; BB(0x0050b390);
    /* 0050b390: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b392: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b395: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b39c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b39e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b39f: ret  */ FN_RET(0x0050b1dc); r_esp += 4; return;
L_0050b3a0:; BB(0x0050b3a0);
    /* 0050b3a0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050b3a7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b3ac: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50b3b1u); f_005caba4();
    /* 0050b3b1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050b3b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b3b7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050b3ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b3bc: je 0x50b508 */ if (fZ) goto L_0050b508;
L_0050b3c2:; BB(0x0050b3c2);
    /* 0050b3c2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050b3c9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050b3d0: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050b3d6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050b3d9: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050b3dc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b3de: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b3e1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b3e3: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b3e5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b3e7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b3e9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b3eb: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b3f1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50b3f6u); f_008193cc();
    /* 0050b3f6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b3f9: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050b3ff: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050b405: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050b40c: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050b411: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050b414: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050b41b: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050b420: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050b422: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050b429: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050b42c: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050b42f: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050b432: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050b439: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050b43c: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050b43f: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050b442: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b445: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050b447: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b44a: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050b44d: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050b450: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050b453: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b456: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050b459: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050b45c: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050b460: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050b464: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050b468: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050b46d: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050b471: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b474: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0050b476: mov dword ptr [esi + 0x78], ebx */ W32((u32)(r_esi+0x78u), r_ebx);
    /* 0050b479: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b47c: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050b47f: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 0050b485: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b488: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050b48b: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0050b48e: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0050b491: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0050b494: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 0050b497: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 0050b49a: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0050b49d: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050b4a0: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050b4a4: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b4a9: je 0x50b4ce */ if (fZ) goto L_0050b4ce;
L_0050b4ab:; BB(0x0050b4ab);
    /* 0050b4ab: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050b4af: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b4b4: je 0x50b4c2 */ if (fZ) goto L_0050b4c2;
L_0050b4b6:; BB(0x0050b4b6);
    /* 0050b4b6: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050b4bb: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b4bd: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050b4c0: jmp 0x50b4d8 */ goto L_0050b4d8;
L_0050b4c2:; BB(0x0050b4c2);
    /* 0050b4c2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050b4c7: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b4c9: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050b4cc: jmp 0x50b4d8 */ goto L_0050b4d8;
L_0050b4ce:; BB(0x0050b4ce);
    /* 0050b4ce: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050b4d3: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b4d5: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050b4d8:; BB(0x0050b4d8);
    /* 0050b4d8: mov eax, ebx */ r_eax = r_ebx;
    /* 0050b4da: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050b4e1: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050b4e4: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050b4e7:; BB(0x0050b4e7);
    /* 0050b4e7: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050b4ea: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050b4ed: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050b4f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b4f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b4fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b4fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b4fd: ret  */ FN_RET(0x0050b1dc); r_esp += 4; return;
L_0050b4fe:; BB(0x0050b4fe);
    /* 0050b4fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b500: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050b503: jmp 0x50b379 */ goto L_0050b379;
L_0050b508:; BB(0x0050b508);
    /* 0050b508: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b50a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050b50d: jmp 0x50b4e7 */ goto L_0050b4e7;
}

void f_0050b510(void) /* sub_50B510 */
{
    FN_ENTER(0x0050b510);
    /* 0050b510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b511: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050b515: push 0x8d3e82 */ { u32 v = 0x8d3e82u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b51a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050b520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050b521: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050b528: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050b52b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050b52e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050b531: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050b534: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050b537: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b53a: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050b540: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b542: jg 0x50b683 */ if ((!fZ&&fS==fO)) goto L_0050b683;
L_0050b548:; BB(0x0050b548);
    /* 0050b548: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b54b: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050b54e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b550: jle 0x50b673 */ if ((fZ||fS!=fO)) goto L_0050b673;
L_0050b556:; BB(0x0050b556);
    /* 0050b556: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b559: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050b560: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050b566: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050b569: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b56e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50b573u); f_005caba4();
    /* 0050b573: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050b576: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b579: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050b57c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b57e: je 0x50b790 */ if (fZ) goto L_0050b790;
L_0050b584:; BB(0x0050b584);
    /* 0050b584: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050b58b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050b592: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050b598: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b59b: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050b5a2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b5a4: mov ecx, eax */ r_ecx = r_eax;
    /* 0050b5a6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b5a8: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b5ab: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b5ad: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b5af: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b5b1: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b5b7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50b5bcu); f_008193cc();
    /* 0050b5bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050b5bf: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050b5c2: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050b5c8: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050b5ce: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050b5d5: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050b5d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b5da: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050b5e1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050b5e4: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050b5e7: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050b5ee: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050b5f1: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050b5f4: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050b5f7: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050b5fe: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050b601: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050b604: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050b606: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050b609: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050b60c: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050b60f: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050b612: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050b615: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050b619: mov dword ptr [edx + 0x34], 1 */ W32((u32)(r_edx+0x34u), 0x1u);
    /* 0050b620: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050b625: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050b629: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050b630: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050b634: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050b63a: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 0050b641: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0050b644: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0050b647: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 0050b64d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050b650: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050b653: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050b656: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_0050b659:; BB(0x0050b659);
    /* 0050b659: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050b65c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050b65f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050b662: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050b665: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b668: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b66f: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b672: ret  */ FN_RET(0x0050b510); r_esp += 4; return;
L_0050b673:; BB(0x0050b673);
    /* 0050b673: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b675: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b678: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b67f: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b681: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b682: ret  */ FN_RET(0x0050b510); r_esp += 4; return;
L_0050b683:; BB(0x0050b683);
    /* 0050b683: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050b68a: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b68f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50b694u); f_005caba4();
    /* 0050b694: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050b697: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b69a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050b69d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b69f: je 0x50b79a */ if (fZ) goto L_0050b79a;
L_0050b6a5:; BB(0x0050b6a5);
    /* 0050b6a5: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050b6ac: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050b6b3: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050b6b9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b6bc: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050b6bf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b6c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b6c4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b6c6: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b6c8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b6ca: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b6cc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b6ce: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b6d4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50b6d9u); f_008193cc();
    /* 0050b6d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b6dc: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050b6df: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050b6e5: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050b6eb: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050b6f2: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050b6f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b6f7: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050b6fe: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0050b701: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050b704: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050b70b: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050b70e: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050b711: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050b714: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050b71b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050b71e: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050b721: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050b723: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050b726: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050b729: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050b72c: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050b72f: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050b732: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050b736: mov dword ptr [edx + 0x34], 1 */ W32((u32)(r_edx+0x34u), 0x1u);
    /* 0050b73d: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050b742: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050b746: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050b74d: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050b751: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050b757: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 0050b75e: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0050b761: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0050b764: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 0050b76a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050b76d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050b770: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050b773: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_0050b776:; BB(0x0050b776);
    /* 0050b776: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b779: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050b77c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050b77f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050b782: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b785: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b78c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b78e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b78f: ret  */ FN_RET(0x0050b510); r_esp += 4; return;
L_0050b790:; BB(0x0050b790);
    /* 0050b790: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b792: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050b795: jmp 0x50b659 */ goto L_0050b659;
L_0050b79a:; BB(0x0050b79a);
    /* 0050b79a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b79c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050b79f: jmp 0x50b776 */ goto L_0050b776;
}

void f_0050b7a4(void) /* sub_50B7A4 */
{
    FN_ENTER(0x0050b7a4);
    /* 0050b7a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050b7a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7a9: push 0x8d3ec2 */ { u32 v = 0x8d3ec2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050b7b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050b7b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050b7bc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050b7bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050b7c2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050b7c5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050b7c8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050b7cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b7ce: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050b7d4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b7d6: jg 0x50b955 */ if ((!fZ&&fS==fO)) goto L_0050b955;
L_0050b7dc:; BB(0x0050b7dc);
    /* 0050b7dc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b7df: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050b7e2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050b7e4: jle 0x50b945 */ if ((fZ||fS!=fO)) goto L_0050b945;
L_0050b7ea:; BB(0x0050b7ea);
    /* 0050b7ea: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b7ed: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050b7f4: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050b7fa: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050b7fd: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b802: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50b807u); f_005caba4();
    /* 0050b807: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050b80a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b80d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050b810: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b812: je 0x50baa0 */ if (fZ) goto L_0050baa0;
L_0050b818:; BB(0x0050b818);
    /* 0050b818: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050b81f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050b826: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050b82c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b82f: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050b836: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b838: mov ecx, eax */ r_ecx = r_eax;
    /* 0050b83a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b83c: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b83f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b841: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b843: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b845: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b84b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50b850u); f_008193cc();
    /* 0050b850: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0050b853: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050b859: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050b85f: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050b866: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050b86b: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050b86e: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050b875: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050b87a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050b87c: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050b883: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050b886: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050b889: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050b88c: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050b893: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050b896: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050b899: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050b89c: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b89f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050b8a1: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b8a4: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050b8a7: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050b8aa: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050b8ad: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b8b0: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050b8b3: mov dword ptr [esi + 0x34], 1 */ W32((u32)(r_esi+0x34u), 0x1u);
    /* 0050b8ba: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050b8bd: movzx ebx, word ptr [ebp + 0x10] */ r_ebx = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050b8c1: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050b8c5: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050b8ca: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050b8ce: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050b8d2: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0050b8d5: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0050b8d8: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 0050b8de: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0050b8e1: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0050b8e4: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050b8e7: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050b8eb: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b8f0: je 0x50b915 */ if (fZ) goto L_0050b915;
L_0050b8f2:; BB(0x0050b8f2);
    /* 0050b8f2: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050b8f6: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b8fb: je 0x50b909 */ if (fZ) goto L_0050b909;
L_0050b8fd:; BB(0x0050b8fd);
    /* 0050b8fd: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050b902: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b904: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050b907: jmp 0x50b91f */ goto L_0050b91f;
L_0050b909:; BB(0x0050b909);
    /* 0050b909: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050b90e: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b910: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050b913: jmp 0x50b91f */ goto L_0050b91f;
L_0050b915:; BB(0x0050b915);
    /* 0050b915: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050b91a: mov ebx, esi */ r_ebx = r_esi;
    /* 0050b91c: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050b91f:; BB(0x0050b91f);
    /* 0050b91f: mov eax, ebx */ r_eax = r_ebx;
    /* 0050b921: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050b928: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050b92b: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050b92e:; BB(0x0050b92e);
    /* 0050b92e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050b931: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050b934: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050b937: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b93a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b941: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b943: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b944: ret  */ FN_RET(0x0050b7a4); r_esp += 4; return;
L_0050b945:; BB(0x0050b945);
    /* 0050b945: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b947: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b94a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b951: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b953: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b954: ret  */ FN_RET(0x0050b7a4); r_esp += 4; return;
L_0050b955:; BB(0x0050b955);
    /* 0050b955: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050b95c: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b961: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50b966u); f_005caba4();
    /* 0050b966: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050b969: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b96c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050b96f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b971: je 0x50baaa */ if (fZ) goto L_0050baaa;
L_0050b977:; BB(0x0050b977);
    /* 0050b977: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050b97e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050b985: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050b98b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050b98e: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050b991: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b993: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b996: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b998: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b99a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b99c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b99e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b9a0: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b9a6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50b9abu); f_008193cc();
    /* 0050b9ab: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b9ae: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050b9b4: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050b9ba: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050b9c1: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050b9c6: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050b9c9: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050b9d0: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050b9d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050b9d7: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050b9de: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050b9e1: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050b9e4: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050b9e7: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050b9ee: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050b9f1: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050b9f4: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050b9f7: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b9fa: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050b9fc: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050b9ff: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050ba02: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050ba05: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050ba08: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050ba0b: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050ba0e: mov dword ptr [esi + 0x34], 1 */ W32((u32)(r_esi+0x34u), 0x1u);
    /* 0050ba15: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050ba18: movzx ebx, word ptr [ebp + 0x10] */ r_ebx = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050ba1c: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050ba20: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050ba25: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050ba29: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050ba2d: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0050ba30: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0050ba33: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 0050ba39: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0050ba3c: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0050ba3f: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050ba42: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050ba46: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ba4b: je 0x50ba70 */ if (fZ) goto L_0050ba70;
L_0050ba4d:; BB(0x0050ba4d);
    /* 0050ba4d: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0050ba51: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ba56: je 0x50ba64 */ if (fZ) goto L_0050ba64;
L_0050ba58:; BB(0x0050ba58);
    /* 0050ba58: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050ba5d: mov ebx, esi */ r_ebx = r_esi;
    /* 0050ba5f: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050ba62: jmp 0x50ba7a */ goto L_0050ba7a;
L_0050ba64:; BB(0x0050ba64);
    /* 0050ba64: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050ba69: mov ebx, esi */ r_ebx = r_esi;
    /* 0050ba6b: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050ba6e: jmp 0x50ba7a */ goto L_0050ba7a;
L_0050ba70:; BB(0x0050ba70);
    /* 0050ba70: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050ba75: mov ebx, esi */ r_ebx = r_esi;
    /* 0050ba77: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050ba7a:; BB(0x0050ba7a);
    /* 0050ba7a: mov eax, ebx */ r_eax = r_ebx;
    /* 0050ba7c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050ba83: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050ba86: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050ba89:; BB(0x0050ba89);
    /* 0050ba89: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ba8c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050ba8f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050ba92: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ba95: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050ba9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ba9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ba9f: ret  */ FN_RET(0x0050b7a4); r_esp += 4; return;
L_0050baa0:; BB(0x0050baa0);
    /* 0050baa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050baa2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050baa5: jmp 0x50b92e */ goto L_0050b92e;
L_0050baaa:; BB(0x0050baaa);
    /* 0050baaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050baac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050baaf: jmp 0x50ba89 */ goto L_0050ba89;
}

void f_0050bab4(void) /* sub_50BAB4 */
{
    FN_ENTER(0x0050bab4);
    /* 0050bab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bab5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050bab9: push 0x8d3f02 */ { u32 v = 0x8d3f02u; r_esp -= 4; W32(r_esp, v); }
    /* 0050babe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050bac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050bac5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050bacc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050bacf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050bad2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050bad5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050bad8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050badb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050bade: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050bae4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050bae6: jg 0x50bc32 */ if ((!fZ&&fS==fO)) goto L_0050bc32;
L_0050baec:; BB(0x0050baec);
    /* 0050baec: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050baef: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050baf2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050baf4: jle 0x50bc22 */ if ((fZ||fS!=fO)) goto L_0050bc22;
L_0050bafa:; BB(0x0050bafa);
    /* 0050bafa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050bafd: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050bb04: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050bb0a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050bb0d: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050bb12: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50bb17u); f_005caba4();
    /* 0050bb17: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050bb1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050bb1d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050bb20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050bb22: je 0x50bd4a */ if (fZ) goto L_0050bd4a;
L_0050bb28:; BB(0x0050bb28);
    /* 0050bb28: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050bb2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050bb36: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050bb3c: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050bb3f: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050bb46: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bb48: mov ecx, eax */ r_ecx = r_eax;
    /* 0050bb4a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bb4c: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bb4f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bb51: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bb53: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bb55: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bb5b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50bb60u); f_008193cc();
    /* 0050bb60: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050bb63: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050bb66: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050bb6c: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050bb72: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050bb79: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050bb7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050bb7e: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050bb85: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050bb88: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050bb8b: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050bb8e: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050bb95: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050bb98: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050bb9b: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050bb9e: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050bba5: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050bba7: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050bbaa: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050bbad: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050bbb0: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050bbb3: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050bbb6: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050bbb9: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050bbbd: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050bbc1: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050bbc6: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050bbca: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0050bbcc: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0050bbcf: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0050bbd2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050bbd5: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0050bbdb: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0050bbde: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0050bbe1: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050bbe7: mov dword ptr [edx + 0x34], 1 */ W32((u32)(r_edx+0x34u), 0x1u);
    /* 0050bbee: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050bbf1: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050bbf4: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050bbfb: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050bbfe: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 0050bc01: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
L_0050bc08:; BB(0x0050bc08);
    /* 0050bc08: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050bc0b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050bc0e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050bc11: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050bc14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050bc17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050bc1e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bc20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc21: ret  */ FN_RET(0x0050bab4); r_esp += 4; return;
L_0050bc22:; BB(0x0050bc22);
    /* 0050bc22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050bc24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050bc27: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050bc2e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bc30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bc31: ret  */ FN_RET(0x0050bab4); r_esp += 4; return;
L_0050bc32:; BB(0x0050bc32);
    /* 0050bc32: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050bc39: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050bc3e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50bc43u); f_005caba4();
    /* 0050bc43: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050bc46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050bc49: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050bc4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050bc4e: je 0x50bd54 */ if (fZ) goto L_0050bd54;
L_0050bc54:; BB(0x0050bc54);
    /* 0050bc54: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050bc5b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050bc62: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050bc68: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050bc6b: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050bc6e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bc70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050bc73: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bc75: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bc77: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bc79: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bc7b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bc7d: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bc83: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50bc88u); f_008193cc();
    /* 0050bc88: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050bc8b: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050bc8e: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050bc94: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050bc9a: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050bca1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050bca4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050bca6: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050bcad: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050bcb0: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050bcb3: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050bcb6: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050bcbd: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050bcc0: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050bcc3: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050bcc6: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050bccd: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050bccf: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050bcd2: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050bcd5: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050bcd8: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050bcdb: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050bcde: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050bce1: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050bce5: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050bce9: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050bcee: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050bcf2: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0050bcf4: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0050bcf7: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0050bcfa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0050bcfd: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0050bd03: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0050bd06: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0050bd09: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050bd0f: mov dword ptr [edx + 0x34], 1 */ W32((u32)(r_edx+0x34u), 0x1u);
    /* 0050bd16: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050bd19: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050bd1c: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050bd23: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050bd26: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
    /* 0050bd29: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
L_0050bd30:; BB(0x0050bd30);
    /* 0050bd30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050bd33: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050bd36: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050bd39: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050bd3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050bd3f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050bd46: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bd48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bd49: ret  */ FN_RET(0x0050bab4); r_esp += 4; return;
L_0050bd4a:; BB(0x0050bd4a);
    /* 0050bd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050bd4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050bd4f: jmp 0x50bc08 */ goto L_0050bc08;
L_0050bd54:; BB(0x0050bd54);
    /* 0050bd54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050bd56: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050bd59: jmp 0x50bd30 */ goto L_0050bd30;
}

void f_0050bd5c(void) /* sub_50BD5C */
{
    FN_ENTER(0x0050bd5c);
    /* 0050bd5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050bd5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd61: push 0x8d3f42 */ { u32 v = 0x8d3f42u; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050bd6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050bd6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050bd74: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050bd77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050bd7a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050bd7d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050bd80: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050bd83: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050bd86: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050bd8c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050bd8e: jg 0x50bf1e */ if ((!fZ&&fS==fO)) goto L_0050bf1e;
L_0050bd94:; BB(0x0050bd94);
    /* 0050bd94: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050bd97: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050bd9a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050bd9c: jle 0x50bf0e */ if ((fZ||fS!=fO)) goto L_0050bf0e;
L_0050bda2:; BB(0x0050bda2);
    /* 0050bda2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050bda5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050bdac: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050bdb2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050bdb5: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050bdba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50bdbfu); f_005caba4();
    /* 0050bdbf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050bdc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050bdc5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050bdc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050bdca: je 0x50c07a */ if (fZ) goto L_0050c07a;
L_0050bdd0:; BB(0x0050bdd0);
    /* 0050bdd0: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050bdd7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050bdde: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050bde4: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050bde7: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050bdee: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bdf0: mov ecx, eax */ r_ecx = r_eax;
    /* 0050bdf2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bdf4: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bdf7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bdf9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bdfb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bdfd: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050be03: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50be08u); f_008193cc();
    /* 0050be08: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0050be0b: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050be11: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050be17: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050be1e: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050be23: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050be26: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050be2d: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050be32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050be34: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050be3b: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050be3e: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050be41: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050be44: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050be4b: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050be4e: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050be51: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050be54: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050be57: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050be59: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050be5c: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050be5f: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050be62: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050be65: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050be68: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050be6b: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050be6e: movzx ebx, word ptr [ebp + 0x14] */ r_ebx = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050be72: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050be76: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050be7a: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050be7f: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050be83: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050be86: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0050be88: mov dword ptr [esi + 0x78], ebx */ W32((u32)(r_esi+0x78u), r_ebx);
    /* 0050be8b: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050be8e: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050be91: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 0050be97: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050be9a: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050be9d: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0050bea0: mov dword ptr [esi + 0x34], 1 */ W32((u32)(r_esi+0x34u), 0x1u);
    /* 0050bea7: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0050beaa: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0050bead: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050beb0: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050beb4: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050beb9: je 0x50bede */ if (fZ) goto L_0050bede;
L_0050bebb:; BB(0x0050bebb);
    /* 0050bebb: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050bebf: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050bec4: je 0x50bed2 */ if (fZ) goto L_0050bed2;
L_0050bec6:; BB(0x0050bec6);
    /* 0050bec6: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050becb: mov ebx, esi */ r_ebx = r_esi;
    /* 0050becd: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050bed0: jmp 0x50bee8 */ goto L_0050bee8;
L_0050bed2:; BB(0x0050bed2);
    /* 0050bed2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050bed7: mov ebx, esi */ r_ebx = r_esi;
    /* 0050bed9: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050bedc: jmp 0x50bee8 */ goto L_0050bee8;
L_0050bede:; BB(0x0050bede);
    /* 0050bede: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050bee3: mov ebx, esi */ r_ebx = r_esi;
    /* 0050bee5: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050bee8:; BB(0x0050bee8);
    /* 0050bee8: mov eax, ebx */ r_eax = r_ebx;
    /* 0050beea: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050bef1: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050bef4: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050bef7:; BB(0x0050bef7);
    /* 0050bef7: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050befa: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050befd: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050bf00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050bf03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050bf0a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bf0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf0d: ret  */ FN_RET(0x0050bd5c); r_esp += 4; return;
L_0050bf0e:; BB(0x0050bf0e);
    /* 0050bf0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050bf10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050bf13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050bf1a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050bf1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050bf1d: ret  */ FN_RET(0x0050bd5c); r_esp += 4; return;
L_0050bf1e:; BB(0x0050bf1e);
    /* 0050bf1e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050bf25: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050bf2a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50bf2fu); f_005caba4();
    /* 0050bf2f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050bf32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050bf35: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050bf38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050bf3a: je 0x50c084 */ if (fZ) goto L_0050c084;
L_0050bf40:; BB(0x0050bf40);
    /* 0050bf40: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050bf47: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050bf4e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050bf54: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050bf57: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050bf5a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bf5c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050bf5f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bf61: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bf63: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bf65: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bf67: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bf69: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050bf6f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50bf74u); f_008193cc();
    /* 0050bf74: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050bf77: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050bf7d: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050bf83: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050bf8a: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050bf8f: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050bf92: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050bf99: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050bf9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050bfa0: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050bfa7: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050bfaa: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050bfad: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050bfb0: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050bfb7: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050bfba: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050bfbd: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050bfc0: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050bfc3: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050bfc5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050bfc8: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050bfcb: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050bfce: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050bfd1: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050bfd4: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050bfd7: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050bfda: movzx ebx, word ptr [ebp + 0x14] */ r_ebx = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050bfde: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050bfe2: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050bfe6: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050bfeb: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050bfef: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050bff2: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0050bff4: mov dword ptr [esi + 0x78], ebx */ W32((u32)(r_esi+0x78u), r_ebx);
    /* 0050bff7: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050bffa: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050bffd: mov dword ptr [esi + 0x80], ebx */ W32((u32)(r_esi+0x80u), r_ebx);
    /* 0050c003: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050c006: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050c009: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0050c00c: mov dword ptr [esi + 0x34], 1 */ W32((u32)(r_esi+0x34u), 0x1u);
    /* 0050c013: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0050c016: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0050c019: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050c01c: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050c020: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050c025: je 0x50c04a */ if (fZ) goto L_0050c04a;
L_0050c027:; BB(0x0050c027);
    /* 0050c027: movzx eax, word ptr [ebp + 0x14] */ r_eax = (u32)R16((u32)(r_ebp+0x14u));
    /* 0050c02b: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050c030: je 0x50c03e */ if (fZ) goto L_0050c03e;
L_0050c032:; BB(0x0050c032);
    /* 0050c032: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050c037: mov ebx, esi */ r_ebx = r_esi;
    /* 0050c039: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050c03c: jmp 0x50c054 */ goto L_0050c054;
L_0050c03e:; BB(0x0050c03e);
    /* 0050c03e: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050c043: mov ebx, esi */ r_ebx = r_esi;
    /* 0050c045: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050c048: jmp 0x50c054 */ goto L_0050c054;
L_0050c04a:; BB(0x0050c04a);
    /* 0050c04a: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050c04f: mov ebx, esi */ r_ebx = r_esi;
    /* 0050c051: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050c054:; BB(0x0050c054);
    /* 0050c054: mov eax, ebx */ r_eax = r_ebx;
    /* 0050c056: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050c05d: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050c060: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050c063:; BB(0x0050c063);
    /* 0050c063: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050c066: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050c069: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050c06c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c06f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050c076: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c079: ret  */ FN_RET(0x0050bd5c); r_esp += 4; return;
L_0050c07a:; BB(0x0050c07a);
    /* 0050c07a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050c07c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050c07f: jmp 0x50bef7 */ goto L_0050bef7;
L_0050c084:; BB(0x0050c084);
    /* 0050c084: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050c086: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050c089: jmp 0x50c063 */ goto L_0050c063;
}

