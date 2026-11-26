#include "protos.h"

void f_0050a0ec(void) /* sub_50A0EC */
{
    FN_ENTER(0x0050a0ec);
    /* 0050a0ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050a0ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0050a0ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050a0f1: push 0x8d3cc2 */ { u32 v = 0x8d3cc2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a0f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050a0fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050a0fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050a104: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050a107: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050a10a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050a10d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050a110: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050a113: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050a116: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050a11c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a11e: jg 0x50a26f */ if ((!fZ&&fS==fO)) goto L_0050a26f;
L_0050a124:; BB(0x0050a124);
    /* 0050a124: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050a127: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050a12a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a12c: jle 0x50a25f */ if ((fZ||fS!=fO)) goto L_0050a25f;
L_0050a132:; BB(0x0050a132);
    /* 0050a132: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050a135: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050a13c: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050a142: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050a145: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a14a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50a14fu); f_005caba4();
    /* 0050a14f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a152: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050a155: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050a158: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050a15a: je 0x50a38c */ if (fZ) goto L_0050a38c;
L_0050a160:; BB(0x0050a160);
    /* 0050a160: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050a167: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050a16e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050a174: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a177: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050a17e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a180: mov ecx, eax */ r_ecx = r_eax;
    /* 0050a182: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a184: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a187: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a189: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a18b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a18d: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a193: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50a198u); f_008193cc();
    /* 0050a198: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0050a19b: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050a1a1: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050a1a7: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050a1ae: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050a1b3: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050a1b6: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050a1bd: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050a1c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050a1c4: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050a1cb: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050a1ce: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050a1d1: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050a1d4: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050a1db: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050a1de: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050a1e1: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050a1e4: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050a1e7: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050a1e9: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050a1ec: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 0050a1ef: mov dword ptr [esi + 0x70], edi */ W32((u32)(r_esi+0x70u), r_edi);
    /* 0050a1f2: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050a1f5: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050a1f8: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050a1fd: mov word ptr [esi + 0x2c], ax */ W16((u32)(r_esi+0x2cu), (u16)r_eax);
    /* 0050a201: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050a205: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050a209: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0050a20c: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0050a20f: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 0050a215: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0050a218: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0050a21b: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0050a21e: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050a221: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a224: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a226: je 0x50a22f */ if (fZ) goto L_0050a22f;
L_0050a228:; BB(0x0050a228);
    /* 0050a228: mov eax, esi */ r_eax = r_esi;
    /* 0050a22a: mov dword ptr [eax + 0x5c], eax */ W32((u32)(r_eax+0x5cu), r_eax);
    /* 0050a22d: jmp 0x50a239 */ goto L_0050a239;
L_0050a22f:; BB(0x0050a22f);
    /* 0050a22f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a234: mov ebx, esi */ r_ebx = r_esi;
    /* 0050a236: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050a239:; BB(0x0050a239);
    /* 0050a239: mov eax, esi */ r_eax = r_esi;
    /* 0050a23b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050a242: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050a245: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050a248:; BB(0x0050a248);
    /* 0050a248: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050a24b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050a24e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050a251: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a254: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a25b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a25d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a25e: ret  */ FN_RET(0x0050a0ec); r_esp += 4; return;
L_0050a25f:; BB(0x0050a25f);
    /* 0050a25f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a261: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a264: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a26b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a26d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a26e: ret  */ FN_RET(0x0050a0ec); r_esp += 4; return;
L_0050a26f:; BB(0x0050a26f);
    /* 0050a26f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050a276: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a27b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50a280u); f_005caba4();
    /* 0050a280: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050a283: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050a286: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050a289: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050a28b: je 0x50a396 */ if (fZ) goto L_0050a396;
L_0050a291:; BB(0x0050a291);
    /* 0050a291: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050a298: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050a29f: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050a2a5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050a2a8: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050a2ab: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a2ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050a2b0: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a2b2: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a2b4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a2b6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a2b8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a2ba: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a2c0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50a2c5u); f_008193cc();
    /* 0050a2c5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050a2c8: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050a2ce: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050a2d4: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050a2db: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050a2e0: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050a2e3: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050a2ea: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050a2ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050a2f1: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050a2f8: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050a2fb: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050a2fe: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050a301: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050a308: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050a30b: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050a30e: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050a311: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050a314: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050a316: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050a319: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 0050a31c: mov dword ptr [esi + 0x70], edi */ W32((u32)(r_esi+0x70u), r_edi);
    /* 0050a31f: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050a322: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050a325: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050a32a: mov word ptr [esi + 0x2c], ax */ W16((u32)(r_esi+0x2cu), (u16)r_eax);
    /* 0050a32e: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050a332: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050a336: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0050a339: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0050a33c: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 0050a342: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0050a345: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0050a348: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0050a34b: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050a34e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a353: je 0x50a35c */ if (fZ) goto L_0050a35c;
L_0050a355:; BB(0x0050a355);
    /* 0050a355: mov eax, esi */ r_eax = r_esi;
    /* 0050a357: mov dword ptr [eax + 0x5c], eax */ W32((u32)(r_eax+0x5cu), r_eax);
    /* 0050a35a: jmp 0x50a366 */ goto L_0050a366;
L_0050a35c:; BB(0x0050a35c);
    /* 0050a35c: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a361: mov ebx, esi */ r_ebx = r_esi;
    /* 0050a363: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050a366:; BB(0x0050a366);
    /* 0050a366: mov eax, esi */ r_eax = r_esi;
    /* 0050a368: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050a36f: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050a372: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050a375:; BB(0x0050a375);
    /* 0050a375: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050a378: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050a37b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050a37e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a381: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a388: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a38a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a38b: ret  */ FN_RET(0x0050a0ec); r_esp += 4; return;
L_0050a38c:; BB(0x0050a38c);
    /* 0050a38c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a38e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a391: jmp 0x50a248 */ goto L_0050a248;
L_0050a396:; BB(0x0050a396);
    /* 0050a396: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a398: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050a39b: jmp 0x50a375 */ goto L_0050a375;
}

void f_0050a3a0(void) /* sub_50A3A0 */
{
    FN_ENTER(0x0050a3a0);
    /* 0050a3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050a3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050a3a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050a3a5: push 0x8d3d02 */ { u32 v = 0x8d3d02u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a3aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050a3b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050a3b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050a3b8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050a3bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050a3be: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050a3c1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050a3c4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050a3c7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a3ca: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050a3d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a3d2: jg 0x50a52c */ if ((!fZ&&fS==fO)) goto L_0050a52c;
L_0050a3d8:; BB(0x0050a3d8);
    /* 0050a3d8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a3db: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050a3de: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a3e0: jle 0x50a51c */ if ((fZ||fS!=fO)) goto L_0050a51c;
L_0050a3e6:; BB(0x0050a3e6);
    /* 0050a3e6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a3e9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050a3f0: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050a3f6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050a3f9: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a3fe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50a403u); f_005caba4();
    /* 0050a403: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a406: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050a409: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050a40c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050a40e: je 0x50a652 */ if (fZ) goto L_0050a652;
L_0050a414:; BB(0x0050a414);
    /* 0050a414: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050a41b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050a422: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050a428: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050a42b: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050a432: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a434: mov ecx, eax */ r_ecx = r_eax;
    /* 0050a436: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a438: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a43b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a43d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a43f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a441: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a447: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50a44cu); f_008193cc();
    /* 0050a44c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050a44f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050a452: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050a458: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050a45e: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050a465: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050a468: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050a46a: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050a471: mov esi, 0x3f800000 */ r_esi = 0x3f800000u;
    /* 0050a476: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050a479: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050a480: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050a485: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050a488: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050a48f: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050a492: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050a495: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050a498: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050a49b: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050a49d: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050a4a0: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0050a4a3: mov dword ptr [edx + 0x70], ebx */ W32((u32)(r_edx+0x70u), r_ebx);
    /* 0050a4a6: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 0050a4a9: mov dword ptr [edx + 0x74], ebx */ W32((u32)(r_edx+0x74u), r_ebx);
    /* 0050a4ac: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050a4b1: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050a4b5: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050a4b9: mov word ptr [edx + 0x30], bx */ W16((u32)(r_edx+0x30u), (u16)r_ebx);
    /* 0050a4bd: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a4c0: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050a4c2: mov dword ptr [edx + 0x78], edi */ W32((u32)(r_edx+0x78u), r_edi);
    /* 0050a4c5: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0050a4c8: mov dword ptr [edx + 0x80], edi */ W32((u32)(r_edx+0x80u), r_edi);
    /* 0050a4ce: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050a4d1: mov dword ptr [edx + 0x7c], ebx */ W32((u32)(r_edx+0x7cu), r_ebx);
    /* 0050a4d4: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050a4d7: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050a4da: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050a4dd: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050a4e0: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0050a4e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a4e5: je 0x50a4ee */ if (fZ) goto L_0050a4ee;
L_0050a4e7:; BB(0x0050a4e7);
    /* 0050a4e7: mov eax, edx */ r_eax = r_edx;
    /* 0050a4e9: mov dword ptr [eax + 0x5c], eax */ W32((u32)(r_eax+0x5cu), r_eax);
    /* 0050a4ec: jmp 0x50a4f6 */ goto L_0050a4f6;
L_0050a4ee:; BB(0x0050a4ee);
    /* 0050a4ee: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a4f3: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_0050a4f6:; BB(0x0050a4f6);
    /* 0050a4f6: mov eax, edx */ r_eax = r_edx;
    /* 0050a4f8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050a4ff: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0050a502: mov dword ptr [eax + 0x68], esi */ W32((u32)(r_eax+0x68u), r_esi);
L_0050a505:; BB(0x0050a505);
    /* 0050a505: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050a508: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050a50b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050a50e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a511: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a518: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a51a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a51b: ret  */ FN_RET(0x0050a3a0); r_esp += 4; return;
L_0050a51c:; BB(0x0050a51c);
    /* 0050a51c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a51e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a521: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a528: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a52a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a52b: ret  */ FN_RET(0x0050a3a0); r_esp += 4; return;
L_0050a52c:; BB(0x0050a52c);
    /* 0050a52c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050a533: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a538: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50a53du); f_005caba4();
    /* 0050a53d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050a540: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050a543: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050a546: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050a548: je 0x50a65c */ if (fZ) goto L_0050a65c;
L_0050a54e:; BB(0x0050a54e);
    /* 0050a54e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050a555: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050a55c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050a562: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a565: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050a568: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a56a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050a56d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a56f: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a571: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a573: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a575: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a577: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a57d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50a582u); f_008193cc();
    /* 0050a582: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050a585: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050a588: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050a58e: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050a594: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050a59b: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050a59e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050a5a0: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050a5a7: mov esi, 0x3f800000 */ r_esi = 0x3f800000u;
    /* 0050a5ac: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050a5af: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050a5b6: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050a5bb: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050a5be: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050a5c5: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050a5c8: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050a5cb: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050a5ce: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050a5d1: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050a5d3: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050a5d6: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0050a5d9: mov dword ptr [edx + 0x70], ebx */ W32((u32)(r_edx+0x70u), r_ebx);
    /* 0050a5dc: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 0050a5df: mov dword ptr [edx + 0x74], ebx */ W32((u32)(r_edx+0x74u), r_ebx);
    /* 0050a5e2: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050a5e7: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050a5eb: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050a5ef: mov word ptr [edx + 0x30], bx */ W16((u32)(r_edx+0x30u), (u16)r_ebx);
    /* 0050a5f3: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a5f6: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050a5f8: mov dword ptr [edx + 0x78], edi */ W32((u32)(r_edx+0x78u), r_edi);
    /* 0050a5fb: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0050a5fe: mov dword ptr [edx + 0x80], edi */ W32((u32)(r_edx+0x80u), r_edi);
    /* 0050a604: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050a607: mov dword ptr [edx + 0x7c], ebx */ W32((u32)(r_edx+0x7cu), r_ebx);
    /* 0050a60a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050a60d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050a610: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050a613: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050a616: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0050a619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a61b: je 0x50a624 */ if (fZ) goto L_0050a624;
L_0050a61d:; BB(0x0050a61d);
    /* 0050a61d: mov eax, edx */ r_eax = r_edx;
    /* 0050a61f: mov dword ptr [eax + 0x5c], eax */ W32((u32)(r_eax+0x5cu), r_eax);
    /* 0050a622: jmp 0x50a62c */ goto L_0050a62c;
L_0050a624:; BB(0x0050a624);
    /* 0050a624: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a629: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_0050a62c:; BB(0x0050a62c);
    /* 0050a62c: mov eax, edx */ r_eax = r_edx;
    /* 0050a62e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050a635: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0050a638: mov dword ptr [eax + 0x68], esi */ W32((u32)(r_eax+0x68u), r_esi);
L_0050a63b:; BB(0x0050a63b);
    /* 0050a63b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050a63e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050a641: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050a644: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a647: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a64e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a650: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a651: ret  */ FN_RET(0x0050a3a0); r_esp += 4; return;
L_0050a652:; BB(0x0050a652);
    /* 0050a652: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a654: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a657: jmp 0x50a505 */ goto L_0050a505;
L_0050a65c:; BB(0x0050a65c);
    /* 0050a65c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a65e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050a661: jmp 0x50a63b */ goto L_0050a63b;
}

void f_0050a664(void) /* sub_50A664 */
{
    FN_ENTER(0x0050a664);
    /* 0050a664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050a665: mov ebp, esp */ r_ebp = r_esp;
    /* 0050a667: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050a669: push 0x8d3d42 */ { u32 v = 0x8d3d42u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a66e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050a674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050a675: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050a67c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050a67f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050a682: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050a685: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050a688: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050a68b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a68e: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050a694: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a696: jg 0x50a81e */ if ((!fZ&&fS==fO)) goto L_0050a81e;
L_0050a69c:; BB(0x0050a69c);
    /* 0050a69c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a69f: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050a6a2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a6a4: jle 0x50a80e */ if ((fZ||fS!=fO)) goto L_0050a80e;
L_0050a6aa:; BB(0x0050a6aa);
    /* 0050a6aa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a6ad: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050a6b4: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050a6ba: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050a6bd: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a6c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50a6c7u); f_005caba4();
    /* 0050a6c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a6ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050a6cd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050a6d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050a6d2: je 0x50a972 */ if (fZ) goto L_0050a972;
L_0050a6d8:; BB(0x0050a6d8);
    /* 0050a6d8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050a6df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050a6e6: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050a6ec: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050a6ef: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050a6f6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a6f8: mov ecx, eax */ r_ecx = r_eax;
    /* 0050a6fa: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a6fc: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a6ff: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a701: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a703: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a705: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a70b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50a710u); f_008193cc();
    /* 0050a710: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050a713: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050a716: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050a71c: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050a722: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050a729: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050a72c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050a72e: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050a735: mov esi, 0x3f800000 */ r_esi = 0x3f800000u;
    /* 0050a73a: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050a73d: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050a744: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050a749: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050a74c: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050a753: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050a756: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050a759: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050a75c: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050a75f: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050a761: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050a764: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0050a767: mov dword ptr [edx + 0x70], ebx */ W32((u32)(r_edx+0x70u), r_ebx);
    /* 0050a76a: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 0050a76d: mov dword ptr [edx + 0x74], ebx */ W32((u32)(r_edx+0x74u), r_ebx);
    /* 0050a770: movzx ebx, word ptr [ebp + 0x18] */ r_ebx = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050a774: mov word ptr [edx + 0x2c], bx */ W16((u32)(r_edx+0x2cu), (u16)r_ebx);
    /* 0050a778: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050a77d: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050a781: mov word ptr [edx + 0x30], bx */ W16((u32)(r_edx+0x30u), (u16)r_ebx);
    /* 0050a785: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a788: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050a78a: mov dword ptr [edx + 0x78], edi */ W32((u32)(r_edx+0x78u), r_edi);
    /* 0050a78d: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0050a790: mov dword ptr [edx + 0x80], edi */ W32((u32)(r_edx+0x80u), r_edi);
    /* 0050a796: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050a799: mov dword ptr [edx + 0x7c], ebx */ W32((u32)(r_edx+0x7cu), r_ebx);
    /* 0050a79c: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050a79f: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050a7a2: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050a7a5: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050a7a8: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0050a7ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a7ad: je 0x50a7b6 */ if (fZ) goto L_0050a7b6;
L_0050a7af:; BB(0x0050a7af);
    /* 0050a7af: mov eax, edx */ r_eax = r_edx;
    /* 0050a7b1: mov dword ptr [eax + 0x5c], eax */ W32((u32)(r_eax+0x5cu), r_eax);
    /* 0050a7b4: jmp 0x50a7e8 */ goto L_0050a7e8;
L_0050a7b6:; BB(0x0050a7b6);
    /* 0050a7b6: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050a7ba: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a7bf: je 0x50a7e0 */ if (fZ) goto L_0050a7e0;
L_0050a7c1:; BB(0x0050a7c1);
    /* 0050a7c1: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050a7c5: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a7ca: je 0x50a7d6 */ if (fZ) goto L_0050a7d6;
L_0050a7cc:; BB(0x0050a7cc);
    /* 0050a7cc: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050a7d1: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0050a7d4: jmp 0x50a7e8 */ goto L_0050a7e8;
L_0050a7d6:; BB(0x0050a7d6);
    /* 0050a7d6: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a7db: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0050a7de: jmp 0x50a7e8 */ goto L_0050a7e8;
L_0050a7e0:; BB(0x0050a7e0);
    /* 0050a7e0: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a7e5: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_0050a7e8:; BB(0x0050a7e8);
    /* 0050a7e8: mov eax, edx */ r_eax = r_edx;
    /* 0050a7ea: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050a7f1: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0050a7f4: mov dword ptr [eax + 0x68], esi */ W32((u32)(r_eax+0x68u), r_esi);
L_0050a7f7:; BB(0x0050a7f7);
    /* 0050a7f7: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050a7fa: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050a7fd: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050a800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a803: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a80a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a80c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a80d: ret  */ FN_RET(0x0050a664); r_esp += 4; return;
L_0050a80e:; BB(0x0050a80e);
    /* 0050a80e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a810: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a813: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a81a: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a81c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a81d: ret  */ FN_RET(0x0050a664); r_esp += 4; return;
L_0050a81e:; BB(0x0050a81e);
    /* 0050a81e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050a825: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a82a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50a82fu); f_005caba4();
    /* 0050a82f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050a832: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050a835: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050a838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050a83a: je 0x50a97c */ if (fZ) goto L_0050a97c;
L_0050a840:; BB(0x0050a840);
    /* 0050a840: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050a847: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050a84e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050a854: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050a857: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050a85a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a85c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050a85f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a861: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a863: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a865: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a867: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a869: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050a86f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50a874u); f_008193cc();
    /* 0050a874: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050a877: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050a87a: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050a880: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050a886: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050a88d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050a890: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050a892: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050a899: mov esi, 0x3f800000 */ r_esi = 0x3f800000u;
    /* 0050a89e: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050a8a1: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050a8a8: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050a8ad: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050a8b0: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050a8b7: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050a8ba: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050a8bd: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050a8c0: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050a8c3: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050a8c5: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050a8c8: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0050a8cb: mov dword ptr [edx + 0x70], ebx */ W32((u32)(r_edx+0x70u), r_ebx);
    /* 0050a8ce: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 0050a8d1: mov dword ptr [edx + 0x74], ebx */ W32((u32)(r_edx+0x74u), r_ebx);
    /* 0050a8d4: movzx ebx, word ptr [ebp + 0x18] */ r_ebx = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050a8d8: mov word ptr [edx + 0x2c], bx */ W16((u32)(r_edx+0x2cu), (u16)r_ebx);
    /* 0050a8dc: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050a8e1: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050a8e5: mov word ptr [edx + 0x30], bx */ W16((u32)(r_edx+0x30u), (u16)r_ebx);
    /* 0050a8e9: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050a8ec: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050a8ee: mov dword ptr [edx + 0x78], edi */ W32((u32)(r_edx+0x78u), r_edi);
    /* 0050a8f1: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0050a8f4: mov dword ptr [edx + 0x80], edi */ W32((u32)(r_edx+0x80u), r_edi);
    /* 0050a8fa: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050a8fd: mov dword ptr [edx + 0x7c], ebx */ W32((u32)(r_edx+0x7cu), r_ebx);
    /* 0050a900: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050a903: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0050a906: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0050a909: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050a90c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0050a90f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a911: je 0x50a91a */ if (fZ) goto L_0050a91a;
L_0050a913:; BB(0x0050a913);
    /* 0050a913: mov eax, edx */ r_eax = r_edx;
    /* 0050a915: mov dword ptr [eax + 0x5c], eax */ W32((u32)(r_eax+0x5cu), r_eax);
    /* 0050a918: jmp 0x50a94c */ goto L_0050a94c;
L_0050a91a:; BB(0x0050a91a);
    /* 0050a91a: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050a91e: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a923: je 0x50a944 */ if (fZ) goto L_0050a944;
L_0050a925:; BB(0x0050a925);
    /* 0050a925: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050a929: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a92e: je 0x50a93a */ if (fZ) goto L_0050a93a;
L_0050a930:; BB(0x0050a930);
    /* 0050a930: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050a935: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0050a938: jmp 0x50a94c */ goto L_0050a94c;
L_0050a93a:; BB(0x0050a93a);
    /* 0050a93a: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a93f: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0050a942: jmp 0x50a94c */ goto L_0050a94c;
L_0050a944:; BB(0x0050a944);
    /* 0050a944: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050a949: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_0050a94c:; BB(0x0050a94c);
    /* 0050a94c: mov eax, edx */ r_eax = r_edx;
    /* 0050a94e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050a955: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 0050a958: mov dword ptr [eax + 0x68], esi */ W32((u32)(r_eax+0x68u), r_esi);
L_0050a95b:; BB(0x0050a95b);
    /* 0050a95b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050a95e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050a961: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050a964: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050a967: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050a96e: mov esp, ebp */ r_esp = r_ebp;
    /* 0050a970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050a971: ret  */ FN_RET(0x0050a664); r_esp += 4; return;
L_0050a972:; BB(0x0050a972);
    /* 0050a972: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a974: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a977: jmp 0x50a7f7 */ goto L_0050a7f7;
L_0050a97c:; BB(0x0050a97c);
    /* 0050a97c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050a97e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050a981: jmp 0x50a95b */ goto L_0050a95b;
}

void f_0050a984(void) /* sub_50A984 */
{
    FN_ENTER(0x0050a984);
    /* 0050a984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050a985: mov ebp, esp */ r_ebp = r_esp;
    /* 0050a987: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050a989: push 0x8d3d82 */ { u32 v = 0x8d3d82u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a98e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050a994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050a995: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050a99c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050a99f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050a9a2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050a9a5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050a9a8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050a9ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050a9ae: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050a9b4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a9b6: jg 0x50aaf9 */ if ((!fZ&&fS==fO)) goto L_0050aaf9;
L_0050a9bc:; BB(0x0050a9bc);
    /* 0050a9bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050a9bf: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050a9c2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050a9c4: jle 0x50aae9 */ if ((fZ||fS!=fO)) goto L_0050aae9;
L_0050a9ca:; BB(0x0050a9ca);
    /* 0050a9ca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050a9cd: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050a9d4: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050a9da: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050a9dd: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050a9e2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50a9e7u); f_005caba4();
    /* 0050a9e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050a9ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050a9ed: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050a9f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050a9f2: je 0x50ac08 */ if (fZ) goto L_0050ac08;
L_0050a9f8:; BB(0x0050a9f8);
    /* 0050a9f8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050a9ff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050aa06: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050aa0c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050aa0f: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050aa16: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050aa18: mov ecx, eax */ r_ecx = r_eax;
    /* 0050aa1a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050aa1c: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050aa1f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050aa21: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050aa23: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050aa25: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050aa2b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50aa30u); f_008193cc();
    /* 0050aa30: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050aa33: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050aa36: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050aa3c: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050aa42: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050aa49: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050aa4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050aa4e: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050aa55: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050aa58: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050aa5b: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050aa62: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050aa65: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050aa68: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050aa6b: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050aa72: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050aa75: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050aa78: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050aa7a: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050aa7d: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050aa80: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050aa83: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050aa86: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050aa89: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050aa8d: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050aa94: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050aa99: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050aa9d: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 0050aaa4: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050aaa8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0050aaab: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0050aaae: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0050aab1: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 0050aab7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050aaba: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0050aabd: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0050aac0: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0050aac3: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050aac9: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050aacc: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_0050aacf:; BB(0x0050aacf);
    /* 0050aacf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050aad2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050aad5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050aad8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050aadb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050aade: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050aae5: mov esp, ebp */ r_esp = r_ebp;
    /* 0050aae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050aae8: ret  */ FN_RET(0x0050a984); r_esp += 4; return;
L_0050aae9:; BB(0x0050aae9);
    /* 0050aae9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050aaeb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050aaee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050aaf5: mov esp, ebp */ r_esp = r_ebp;
    /* 0050aaf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050aaf8: ret  */ FN_RET(0x0050a984); r_esp += 4; return;
L_0050aaf9:; BB(0x0050aaf9);
    /* 0050aaf9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050ab00: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ab05: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50ab0au); f_005caba4();
    /* 0050ab0a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050ab0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ab10: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050ab13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ab15: je 0x50ac12 */ if (fZ) goto L_0050ac12;
L_0050ab1b:; BB(0x0050ab1b);
    /* 0050ab1b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050ab22: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050ab29: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ab2f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050ab32: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050ab35: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ab37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ab3a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ab3c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ab3e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ab40: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ab42: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ab44: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ab4a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50ab4fu); f_008193cc();
    /* 0050ab4f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ab52: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050ab55: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050ab5b: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050ab61: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050ab68: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050ab6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ab6d: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050ab74: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0050ab77: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050ab7a: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050ab81: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050ab84: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050ab87: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050ab8a: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050ab91: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050ab94: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050ab97: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050ab99: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050ab9c: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050ab9f: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050aba2: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050aba5: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050aba8: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050abac: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050abb3: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050abb8: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050abbc: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 0050abc3: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050abc7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0050abca: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 0050abcd: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 0050abd0: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 0050abd6: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050abd9: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0050abdc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0050abdf: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0050abe2: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050abe8: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050abeb: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_0050abee:; BB(0x0050abee);
    /* 0050abee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050abf1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050abf4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050abf7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050abfa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050abfd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050ac04: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ac06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ac07: ret  */ FN_RET(0x0050a984); r_esp += 4; return;
L_0050ac08:; BB(0x0050ac08);
    /* 0050ac08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ac0a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050ac0d: jmp 0x50aacf */ goto L_0050aacf;
L_0050ac12:; BB(0x0050ac12);
    /* 0050ac12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ac14: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050ac17: jmp 0x50abee */ goto L_0050abee;
}

void f_0050ac1c(void) /* sub_50AC1C */
{
    FN_ENTER(0x0050ac1c);
    /* 0050ac1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ac1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ac1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ac21: push 0x8d3dc2 */ { u32 v = 0x8d3dc2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ac26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050ac2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ac2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050ac34: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ac37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050ac3a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050ac3d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050ac40: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050ac43: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050ac46: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050ac4c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ac4e: jg 0x50adcf */ if ((!fZ&&fS==fO)) goto L_0050adcf;
L_0050ac54:; BB(0x0050ac54);
    /* 0050ac54: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050ac57: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ac5a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ac5c: jle 0x50adbf */ if ((fZ||fS!=fO)) goto L_0050adbf;
L_0050ac62:; BB(0x0050ac62);
    /* 0050ac62: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050ac65: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050ac6c: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050ac72: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050ac75: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ac7a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50ac7fu); f_005caba4();
    /* 0050ac7f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050ac82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ac85: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050ac88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ac8a: je 0x50af1c */ if (fZ) goto L_0050af1c;
L_0050ac90:; BB(0x0050ac90);
    /* 0050ac90: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050ac97: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050ac9e: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050aca4: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050aca7: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050acae: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050acb0: mov ecx, eax */ r_ecx = r_eax;
    /* 0050acb2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050acb4: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050acb7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050acb9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050acbb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050acbd: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050acc3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50acc8u); f_008193cc();
    /* 0050acc8: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0050accb: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050acd1: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050acd7: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050acde: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050ace3: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050ace6: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050aced: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050acf2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050acf4: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050acfb: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050acfe: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050ad01: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050ad04: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050ad0b: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050ad0e: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050ad11: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050ad14: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050ad17: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050ad19: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050ad1c: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050ad1f: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050ad22: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050ad25: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050ad28: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050ad2b: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050ad2e: movzx ebx, word ptr [ebp + 0x18] */ r_ebx = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050ad32: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050ad36: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050ad3a: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050ad3f: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050ad43: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050ad46: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0050ad49: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0050ad4c: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 0050ad52: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0050ad55: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 0050ad58: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0050ad5b: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0050ad5e: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050ad61: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050ad65: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ad6a: je 0x50ad8f */ if (fZ) goto L_0050ad8f;
L_0050ad6c:; BB(0x0050ad6c);
    /* 0050ad6c: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050ad70: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ad75: je 0x50ad83 */ if (fZ) goto L_0050ad83;
L_0050ad77:; BB(0x0050ad77);
    /* 0050ad77: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050ad7c: mov ebx, esi */ r_ebx = r_esi;
    /* 0050ad7e: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050ad81: jmp 0x50ad99 */ goto L_0050ad99;
L_0050ad83:; BB(0x0050ad83);
    /* 0050ad83: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050ad88: mov ebx, esi */ r_ebx = r_esi;
    /* 0050ad8a: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050ad8d: jmp 0x50ad99 */ goto L_0050ad99;
L_0050ad8f:; BB(0x0050ad8f);
    /* 0050ad8f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050ad94: mov ebx, esi */ r_ebx = r_esi;
    /* 0050ad96: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050ad99:; BB(0x0050ad99);
    /* 0050ad99: mov eax, ebx */ r_eax = r_ebx;
    /* 0050ad9b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050ada2: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050ada5: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050ada8:; BB(0x0050ada8);
    /* 0050ada8: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050adab: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050adae: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050adb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050adb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050adbb: mov esp, ebp */ r_esp = r_ebp;
    /* 0050adbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050adbe: ret  */ FN_RET(0x0050ac1c); r_esp += 4; return;
L_0050adbf:; BB(0x0050adbf);
    /* 0050adbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050adc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050adc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050adcb: mov esp, ebp */ r_esp = r_ebp;
    /* 0050adcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050adce: ret  */ FN_RET(0x0050ac1c); r_esp += 4; return;
L_0050adcf:; BB(0x0050adcf);
    /* 0050adcf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050add6: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050addb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50ade0u); f_005caba4();
    /* 0050ade0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050ade3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ade6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050ade9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050adeb: je 0x50af26 */ if (fZ) goto L_0050af26;
L_0050adf1:; BB(0x0050adf1);
    /* 0050adf1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050adf8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050adff: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ae05: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050ae08: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050ae0b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ae0d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ae10: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ae12: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ae14: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ae16: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ae18: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ae1a: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050ae20: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50ae25u); f_008193cc();
    /* 0050ae25: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ae28: mov dword ptr [esi], 0xaff308 */ W32((u32)(r_esi), 0xaff308u);
    /* 0050ae2e: mov edx, dword ptr [0x9ba90c] */ r_edx = R32((u32)(0x9ba90cu));
    /* 0050ae34: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 0050ae3b: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 0050ae40: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0050ae43: mov dword ptr [esi + 0x48], 0x3f800000 */ W32((u32)(r_esi+0x48u), 0x3f800000u);
    /* 0050ae4a: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0050ae4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050ae51: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0050ae58: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0050ae5b: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 0050ae5e: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 0050ae61: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 0050ae68: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0050ae6b: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050ae6e: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050ae71: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050ae74: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0050ae76: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050ae79: mov dword ptr [esi + 0x6c], edi */ W32((u32)(r_esi+0x6cu), r_edi);
    /* 0050ae7c: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0050ae7f: mov dword ptr [esi + 0x70], ebx */ W32((u32)(r_esi+0x70u), r_ebx);
    /* 0050ae82: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0050ae85: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0050ae88: mov dword ptr [esi + 0x74], ebx */ W32((u32)(r_esi+0x74u), r_ebx);
    /* 0050ae8b: movzx ebx, word ptr [ebp + 0x18] */ r_ebx = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050ae8f: mov word ptr [esi + 0x2c], bx */ W16((u32)(r_esi+0x2cu), (u16)r_ebx);
    /* 0050ae93: mov word ptr [esi + 0x2e], ax */ W16((u32)(r_esi+0x2eu), (u16)r_eax);
    /* 0050ae97: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0050ae9c: mov word ptr [esi + 0x30], bx */ W16((u32)(r_esi+0x30u), (u16)r_ebx);
    /* 0050aea0: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050aea3: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 0050aea6: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 0050aea9: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 0050aeaf: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0050aeb2: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 0050aeb5: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0050aeb8: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 0050aebb: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0050aebe: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050aec2: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050aec7: je 0x50aeec */ if (fZ) goto L_0050aeec;
L_0050aec9:; BB(0x0050aec9);
    /* 0050aec9: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050aecd: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050aed2: je 0x50aee0 */ if (fZ) goto L_0050aee0;
L_0050aed4:; BB(0x0050aed4);
    /* 0050aed4: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 0050aed9: mov ebx, esi */ r_ebx = r_esi;
    /* 0050aedb: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050aede: jmp 0x50aef6 */ goto L_0050aef6;
L_0050aee0:; BB(0x0050aee0);
    /* 0050aee0: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050aee5: mov ebx, esi */ r_ebx = r_esi;
    /* 0050aee7: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0050aeea: jmp 0x50aef6 */ goto L_0050aef6;
L_0050aeec:; BB(0x0050aeec);
    /* 0050aeec: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 0050aef1: mov ebx, esi */ r_ebx = r_esi;
    /* 0050aef3: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0050aef6:; BB(0x0050aef6);
    /* 0050aef6: mov eax, ebx */ r_eax = r_ebx;
    /* 0050aef8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050aeff: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0050af02: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
L_0050af05:; BB(0x0050af05);
    /* 0050af05: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050af08: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050af0b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050af0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050af11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050af18: mov esp, ebp */ r_esp = r_ebp;
    /* 0050af1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050af1b: ret  */ FN_RET(0x0050ac1c); r_esp += 4; return;
L_0050af1c:; BB(0x0050af1c);
    /* 0050af1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050af1e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050af21: jmp 0x50ada8 */ goto L_0050ada8;
L_0050af26:; BB(0x0050af26);
    /* 0050af26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050af28: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050af2b: jmp 0x50af05 */ goto L_0050af05;
}

void f_0050af30(void) /* sub_50AF30 */
{
    FN_ENTER(0x0050af30);
    /* 0050af30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050af31: mov ebp, esp */ r_ebp = r_esp;
    /* 0050af33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050af35: push 0x8d3e02 */ { u32 v = 0x8d3e02u; r_esp -= 4; W32(r_esp, v); }
    /* 0050af3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050af40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050af41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050af48: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050af4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050af4e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050af51: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050af54: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050af57: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050af5a: mov edx, dword ptr [0x9bb1c8] */ r_edx = R32((u32)(0x9bb1c8u));
    /* 0050af60: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050af62: jg 0x50b0b0 */ if ((!fZ&&fS==fO)) goto L_0050b0b0;
L_0050af68:; BB(0x0050af68);
    /* 0050af68: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050af6b: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050af6e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050af70: jle 0x50b0a0 */ if ((fZ||fS!=fO)) goto L_0050b0a0;
L_0050af76:; BB(0x0050af76);
    /* 0050af76: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050af79: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0050af80: lea edx, [eax - 0x200] */ r_edx = (u32)(r_eax+0xfffffe00u);
    /* 0050af86: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0050af89: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050af8e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50af93u); f_005caba4();
    /* 0050af93: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050af96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050af99: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0050af9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050af9e: je 0x50b1ca */ if (fZ) goto L_0050b1ca;
L_0050afa4:; BB(0x0050afa4);
    /* 0050afa4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0050afab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050afb2: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050afb8: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0050afbb: lea ebx, [ebx + ebx*4 - 0xa00] */ r_ebx = (u32)(r_ebx+r_ebx*4+0xfffff600u);
    /* 0050afc2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050afc4: mov ecx, eax */ r_ecx = r_eax;
    /* 0050afc6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050afc8: sub ebx, dword ptr [ebp - 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050afcb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050afcd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050afcf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050afd1: add ebx, dword ptr [0xa72ccc] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050afd7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50afdcu); f_008193cc();
    /* 0050afdc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050afdf: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050afe2: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050afe8: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050afee: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050aff5: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050aff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050affa: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050b001: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050b004: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050b007: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050b00a: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050b011: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050b014: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050b017: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050b01a: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050b021: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050b023: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050b026: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050b029: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b02c: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050b02f: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050b032: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050b035: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050b039: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050b03d: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050b042: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050b046: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0050b048: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0050b04b: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0050b04e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050b051: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0050b057: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0050b05a: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0050b05d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0050b060: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050b067: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050b06a: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0050b06d: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0050b070: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 0050b077: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0050b07a: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050b080: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050b083: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_0050b086:; BB(0x0050b086);
    /* 0050b086: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050b089: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050b08c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050b08f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050b092: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b095: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b09c: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b09e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b09f: ret  */ FN_RET(0x0050af30); r_esp += 4; return;
L_0050b0a0:; BB(0x0050b0a0);
    /* 0050b0a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b0a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b0a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b0ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b0ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b0af: ret  */ FN_RET(0x0050af30); r_esp += 4; return;
L_0050b0b0:; BB(0x0050b0b0);
    /* 0050b0b0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0050b0b7: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050b0bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50b0c1u); f_005caba4();
    /* 0050b0c1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050b0c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050b0c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0050b0ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050b0cc: je 0x50b1d4 */ if (fZ) goto L_0050b1d4;
L_0050b0d2:; BB(0x0050b0d2);
    /* 0050b0d2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0050b0d9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050b0e0: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050b0e6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050b0e9: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 0050b0ec: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b0ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b0f1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b0f3: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b0f5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b0f7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b0f9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b0fb: add ebx, dword ptr [0xa72cd0] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0050b101: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50b106u); f_008193cc();
    /* 0050b106: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b109: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0050b10c: mov dword ptr [edx], 0xaff308 */ W32((u32)(r_edx), 0xaff308u);
    /* 0050b112: mov ecx, dword ptr [0x9ba90c] */ r_ecx = R32((u32)(0x9ba90cu));
    /* 0050b118: mov dword ptr [edx + 0x44], 0x3f800000 */ W32((u32)(r_edx+0x44u), 0x3f800000u);
    /* 0050b11f: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0050b122: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b124: mov dword ptr [edx + 0x48], 0x3f800000 */ W32((u32)(r_edx+0x48u), 0x3f800000u);
    /* 0050b12b: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0050b12e: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0050b131: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 0050b134: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0050b13b: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0050b13e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0050b141: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 0050b144: mov dword ptr [edx + 0x24], 0x3f800000 */ W32((u32)(r_edx+0x24u), 0x3f800000u);
    /* 0050b14b: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0050b14d: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0050b150: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0050b153: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0050b156: mov dword ptr [edx + 0x70], esi */ W32((u32)(r_edx+0x70u), r_esi);
    /* 0050b159: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0050b15c: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
    /* 0050b15f: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 0050b163: mov word ptr [edx + 0x2e], ax */ W16((u32)(r_edx+0x2eu), (u16)r_eax);
    /* 0050b167: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0050b16c: mov word ptr [edx + 0x30], cx */ W16((u32)(r_edx+0x30u), (u16)r_ecx);
    /* 0050b170: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0050b172: mov dword ptr [edx + 0x78], ecx */ W32((u32)(r_edx+0x78u), r_ecx);
    /* 0050b175: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0050b178: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0050b17b: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 0050b181: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0050b184: mov dword ptr [edx + 0x7c], ecx */ W32((u32)(r_edx+0x7cu), r_ecx);
    /* 0050b187: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0050b18a: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
    /* 0050b191: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0050b194: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0050b197: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0050b19a: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
    /* 0050b1a1: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0050b1a4: mov ecx, dword ptr [0xaca344] */ r_ecx = R32((u32)(0xaca344u));
    /* 0050b1aa: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0050b1ad: mov dword ptr [edx + 0x5c], ecx */ W32((u32)(r_edx+0x5cu), r_ecx);
L_0050b1b0:; BB(0x0050b1b0);
    /* 0050b1b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050b1b3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050b1b6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050b1b9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050b1bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050b1bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050b1c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0050b1c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050b1c9: ret  */ FN_RET(0x0050af30); r_esp += 4; return;
L_0050b1ca:; BB(0x0050b1ca);
    /* 0050b1ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b1cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050b1cf: jmp 0x50b086 */ goto L_0050b086;
L_0050b1d4:; BB(0x0050b1d4);
    /* 0050b1d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050b1d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050b1d9: jmp 0x50b1b0 */ goto L_0050b1b0;
}

