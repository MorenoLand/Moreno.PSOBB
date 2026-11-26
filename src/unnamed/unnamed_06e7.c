#include "protos.h"

void f_006e72bc(void) /* sub_6E72BC */
{
    FN_ENTER(0x006e72bc);
    /* 006e72bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e72bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006e72bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e72c1: push 0x8ef07e */ { u32 v = 0x8ef07eu; r_esp -= 4; W32(r_esp, v); }
    /* 006e72c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e72cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e72cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e72d4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e72d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e72da: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e72dd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e72e0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e72e3: movsx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 006e72e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e72ea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e72ed: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 006e72f1: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 006e72f4: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e72f9: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e72fb: mov eax, ecx */ r_eax = r_ecx;
    /* 006e72fd: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006e7300: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e7302: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e7304: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e7307: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7309: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e730b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e730d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e730f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7311: jne 0x6e73c9 */ if (!fZ) goto L_006e73c9;
L_006e7317:; BB(0x006e7317);
    /* 006e7317: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e731e: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7320: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e7325u); f_005caba4();
    /* 006e7325: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e7328: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e732b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006e732e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7330: je 0x6e73bb */ if (fZ) goto L_006e73bb;
L_006e7336:; BB(0x006e7336);
    /* 006e7336: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e733d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e7344: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e734a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e734d: movzx ebx, word ptr [eax + 0x2e] */ r_ebx = (u32)R16((u32)(r_eax+0x2eu));
    /* 006e7351: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7354: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e7359u); f_008193cc();
    /* 006e7359: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e735c: mov dword ptr [eax], 0xb3d718 */ W32((u32)(r_eax), 0xb3d718u);
    /* 006e7362: mov word ptr [eax + 0x1c], bx */ W16((u32)(r_eax+0x1cu), (u16)r_ebx);
    /* 006e7366: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7368: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 006e736f: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006e7372: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 006e7375: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 006e737c: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 006e7383: mov dword ptr [eax + 0x2c], 0x3d4ccccd */ W32((u32)(r_eax+0x2cu), 0x3d4ccccdu);
    /* 006e738a: mov dword ptr [eax + 0x30], 0x3d4ccccd */ W32((u32)(r_eax+0x30u), 0x3d4ccccdu);
    /* 006e7391: mov dword ptr [eax + 0x34], 0x3d4ccccd */ W32((u32)(r_eax+0x34u), 0x3d4ccccdu);
    /* 006e7398: mov dword ptr [eax + 0x4c], 0x3d4ccccd */ W32((u32)(r_eax+0x4cu), 0x3d4ccccdu);
    /* 006e739f: mov dword ptr [eax + 0x38], 0x3f800000 */ W32((u32)(r_eax+0x38u), 0x3f800000u);
    /* 006e73a6: mov dword ptr [eax + 0x3c], 0x3f800000 */ W32((u32)(r_eax+0x3cu), 0x3f800000u);
    /* 006e73ad: mov dword ptr [eax + 0x40], 0x3f800000 */ W32((u32)(r_eax+0x40u), 0x3f800000u);
    /* 006e73b4: mov dword ptr [eax + 0x44], 0x3f800000 */ W32((u32)(r_eax+0x44u), 0x3f800000u);
L_006e73bb:; BB(0x006e73bb);
    /* 006e73bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e73c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e73c5: movsx ecx, word ptr [eax + 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2cu));
L_006e73c9:; BB(0x006e73c9);
    /* 006e73c9: cmp ecx, 0x1e */ {  u32 a = r_ecx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e73cc: jl 0x6e74a6 */ if ((fS!=fO)) goto L_006e74a6;
L_006e73d2:; BB(0x006e73d2);
    /* 006e73d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e73d5: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 006e73d8: mov edx, dword ptr [eax*8 + 0x96d5b8] */ r_edx = R32((u32)(r_eax*8+0x96d5b8u));
    /* 006e73df: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e73e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e73e3: jbe 0x6e74bd */ if ((fC||fZ)) goto L_006e74bd;
L_006e73e9:; BB(0x006e73e9);
    /* 006e73e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e73ec: movzx edx, word ptr [eax + 0x2e] */ r_edx = (u32)R16((u32)(r_eax+0x2eu));
    /* 006e73f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e73f1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e73f6u); f_007b4d18();
    /* 006e73f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e73f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e73f9: je 0x6e748e */ if (fZ) goto L_006e748e;
L_006e73ff:; BB(0x006e73ff);
    /* 006e73ff: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7402: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006e7405: mov edx, dword ptr [edx*8 + 0x96d5b4] */ r_edx = R32((u32)(r_edx*8+0x96d5b4u));
    /* 006e740c: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e740f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e7411: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 006e7414: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e7416: mov edi, dword ptr [ebx + edx + 4] */ r_edi = R32((u32)(r_ebx+r_edx+0x4u));
    /* 006e741a: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7420: je 0x6e747f */ if (fZ) goto L_006e747f;
L_006e7422:; BB(0x006e7422);
    /* 006e7422: push dword ptr [ebx + edx] */ { u32 v = R32((u32)(r_ebx+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7425: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7429: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e742eu); f_0050b510();
    /* 006e742e: mov edi, eax */ r_edi = r_eax;
    /* 006e7430: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7433: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7435: je 0x6e748e */ if (fZ) goto L_006e748e;
L_006e7437:; BB(0x006e7437);
    /* 006e7437: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e743a: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e7440: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 006e7443: mov edx, dword ptr [edx*8 + 0x96d5b4] */ r_edx = R32((u32)(r_edx*8+0x96d5b4u));
    /* 006e744a: movzx ebx, word ptr [ebx + edx + 6] */ r_ebx = (u32)R16((u32)(r_ebx+r_edx+0x6u));
    /* 006e744f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7450: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e7455u); f_005b8610();
    /* 006e7455: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006e745b: movzx ecx, word ptr [edi + 0x2c] */ r_ecx = (u32)R16((u32)(r_edi+0x2cu));
    /* 006e745f: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 006e7466: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006e7469: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006e7470: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 006e7473: or ecx, 0xffff0600 */ {  u32 a = r_ecx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e7479: mov word ptr [edi + 0x2c], cx */ W16((u32)(r_edi+0x2cu), (u16)r_ecx);
    /* 006e747d: jmp 0x6e748e */ goto L_006e748e;
L_006e747f:; BB(0x006e747f);
    /* 006e747f: push dword ptr [ebx + edx] */ { u32 v = R32((u32)(r_ebx+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7482: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7485: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7486: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e748bu); f_0050b510();
    /* 006e748b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e748e:; BB(0x006e748e);
    /* 006e748e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7491: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 006e7494: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e7497: cmp esi, dword ptr [eax*8 + 0x96d5b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax*8+0x96d5b8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e749e: jb 0x6e73e9 */ if (fC) goto L_006e73e9;
L_006e74a4:; BB(0x006e74a4);
    /* 006e74a4: jmp 0x6e74bd */ goto L_006e74bd;
L_006e74a6:; BB(0x006e74a6);
    /* 006e74a6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e74a9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e74ac: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e74af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e74b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e74b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006e74bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e74bc: ret  */ FN_RET(0x006e72bc); r_esp += 4; return;
L_006e74bd:; BB(0x006e74bd);
    /* 006e74bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e74bf: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e74c2: jl 0x6e74ff */ if ((fS!=fO)) goto L_006e74ff;
L_006e74c4:; BB(0x006e74c4);
    /* 006e74c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e74c7: jg 0x6e74d3 */ if ((!fZ&&fS==fO)) goto L_006e74d3;
L_006e74c9:; BB(0x006e74c9);
    /* 006e74c9: mov eax, 0x100 */ r_eax = 0x100u;
    /* 006e74ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e74d1: jmp 0x6e74ff */ goto L_006e74ff;
L_006e74d3:; BB(0x006e74d3);
    /* 006e74d3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e74d6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e74d9: jl 0x6e74ff */ if ((fS!=fO)) goto L_006e74ff;
L_006e74db:; BB(0x006e74db);
    /* 006e74db: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e74de: jg 0x6e74e7 */ if ((!fZ&&fS==fO)) goto L_006e74e7;
L_006e74e0:; BB(0x006e74e0);
    /* 006e74e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e74e2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e74e5: jmp 0x6e74ff */ goto L_006e74ff;
L_006e74e7:; BB(0x006e74e7);
    /* 006e74e7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e74ea: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e74ed: jl 0x6e74ff */ if ((fS!=fO)) goto L_006e74ff;
L_006e74ef:; BB(0x006e74ef);
    /* 006e74ef: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e74f2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e74f5: jg 0x6e74ff */ if ((!fZ&&fS==fO)) goto L_006e74ff;
L_006e74f7:; BB(0x006e74f7);
    /* 006e74f7: mov eax, 0xffffff00 */ r_eax = 0xffffff00u;
    /* 006e74fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006e74ff:; BB(0x006e74ff);
    /* 006e74ff: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006e7506: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7508: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e750du); f_005caba4();
    /* 006e750d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e750e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006e7511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7513: je 0x6e7549 */ if (fZ) goto L_006e7549;
L_006e7515:; BB(0x006e7515);
    /* 006e7515: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006e751c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e7523: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7529: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e752c: lea esi, [edx + 0x30] */ r_esi = (u32)(r_edx+0x30u);
    /* 006e752f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e7531: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7534: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7535: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 006e753a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006e753c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e753d: call 0x6eb9f8 */ r_esp -= 4; W32(r_esp, 0x6e7542u); f_006eb9f8();
    /* 006e7542: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006e7549:; BB(0x006e7549);
    /* 006e7549: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e754c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e7550: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e7555: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e7559: jmp 0x6e74a6 */ goto L_006e74a6;
}

void f_006e754a(void)
{
    FN_ENTER(0x006e754a);
    goto L_006e754a;
L_006e74a6:; BB(0x006e74a6);
    /* 006e74a6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e74a9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e74ac: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e74af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e74b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e74b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006e74bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e74bc: ret  */ FN_RET(0x006e754a); r_esp += 4; return;
L_006e754a:; BB(0x006e754a);
    /* 006e754a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e754b: in al, dx */ UNSUP(0x006e754b, "in al, dx");
    /* 006e754c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e7550: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e7555: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e7559: jmp 0x6e74a6 */ goto L_006e74a6;
}

void f_006e7553(void)
{
    FN_ENTER(0x006e7553);
}

void f_006e7560(void) /* sub_6E7560 */
{
    FN_ENTER(0x006e7560);
    /* 006e7560: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e7561: mov edi, ecx */ r_edi = r_ecx;
    /* 006e7563: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006e7567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7568: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e756du); f_007b4d18();
    /* 006e756d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e756e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7570: je 0x6e7584 */ if (fZ) goto L_006e7584;
L_006e7572:; BB(0x006e7572);
    /* 006e7572: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006e7575: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 006e7578: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006e757b: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006e757e: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006e7581: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
L_006e7584:; BB(0x006e7584);
    /* 006e7584: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 006e7587: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e758a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e758d: jl 0x6e7598 */ if ((fS!=fO)) goto L_006e7598;
L_006e758f:; BB(0x006e758f);
    /* 006e758f: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
    /* 006e7596: jmp 0x6e759b */ goto L_006e759b;
L_006e7598:; BB(0x006e7598);
    /* 006e7598: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
L_006e759b:; BB(0x006e759b);
    /* 006e759b: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 006e759e: fcomp dword ptr [0x96d4bc] */ fx_compare(ST(0), R_F32((u32)(0x96d4bcu))); FPOP();
    /* 006e75a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e75a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e75a7: ja 0x6e75b6 */ if ((!fC&&!fZ)) goto L_006e75b6;
L_006e75a9:; BB(0x006e75a9);
    /* 006e75a9: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e75ad: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e75b2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_006e75b6:; BB(0x006e75b6);
    /* 006e75b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e75b7: ret  */ FN_RET(0x006e7560); r_esp += 4; return;
}

void f_006e75b8(void) /* sub_6E75B8 */
{
    FN_ENTER(0x006e75b8);
    /* 006e75b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e75b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e75ba: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e75bd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006e75bf: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6e75c4u); f_00807d60();
    /* 006e75c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e75c6: jne 0x6e75ce */ if (!fZ) goto L_006e75ce;
L_006e75c8:; BB(0x006e75c8);
    /* 006e75c8: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e75cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e75cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e75cd: ret  */ FN_RET(0x006e75b8); r_esp += 4; return;
L_006e75ce:; BB(0x006e75ce);
    /* 006e75ce: mov ebx, dword ptr [ebp + 0x48] */ r_ebx = R32((u32)(r_ebp+0x48u));
    /* 006e75d1: mov dword ptr [esp], 0x9cf92c */ W32((u32)(r_esp), 0x9cf92cu);
    /* 006e75d8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e75db: mov dword ptr [esp + 4], 0x9cf8b0 */ W32((u32)(r_esp+0x4u), 0x9cf8b0u);
    /* 006e75e3: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006e75e7: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 006e75ea: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006e75f2: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 006e75f6: mov dword ptr [esp + 0x10], 0x3f99999a */ W32((u32)(r_esp+0x10u), 0x3f99999au);
    /* 006e75fe: mov dword ptr [esp + 0x14], 0x3f99999a */ W32((u32)(r_esp+0x14u), 0x3f99999au);
    /* 006e7606: mov dword ptr [esp + 0x18], 0x3f99999a */ W32((u32)(r_esp+0x18u), 0x3f99999au);
    /* 006e760e: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 006e7616: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 006e761e: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 006e7626: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 006e762e: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7634: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7635: call 0x501b34 */ r_esp -= 4; W32(r_esp, 0x6e763au); f_00501b34();
    /* 006e763a: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 006e763e: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7642: lea edx, [ebp + 0x2c] */ r_edx = (u32)(r_ebp+0x2cu);
    /* 006e7645: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7646: call 0x501be8 */ r_esp -= 4; W32(r_esp, 0x6e764bu); f_00501be8();
    /* 006e764b: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006e764f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7650: call 0x501900 */ r_esp -= 4; W32(r_esp, 0x6e7655u); f_00501900();
    /* 006e7655: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006e765a: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006e765f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7660: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e7663: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006e7668: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6e766du); f_0082d710();
    /* 006e766d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e766f: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x6e7674u); f_007a94a0();
    /* 006e7674: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7677: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6e767cu); f_0082dbac();
    /* 006e767c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6e7681u); f_0082d7b0();
    /* 006e7681: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 006e7684: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6e7689u); f_0082d838();
    /* 006e7689: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e768c: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e768f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e7691: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7694: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6e7699u); f_0082fa0c();
    /* 006e7699: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e769b: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006e76a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e76a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e76a4: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6e76a9u); f_00830b74();
    /* 006e76a9: mov ecx, 0x9cf8b0 */ r_ecx = 0x9cf8b0u;
    /* 006e76ae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6e76b3u); f_00829cc8();
    /* 006e76b3: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e76b9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e76bb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e76c0u); f_005b8610();
    /* 006e76c0: mov ecx, eax */ r_ecx = r_eax;
    /* 006e76c2: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6e76c7u); f_00831758();
    /* 006e76c7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6e76ccu); f_0082da80();
    /* 006e76cc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006e76cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e76d0: call 0x501988 */ r_esp -= 4; W32(r_esp, 0x6e76d5u); f_00501988();
    /* 006e76d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e76d6: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x6e76dbu); f_007a94b0();
    /* 006e76db: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006e76e0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006e76e5: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e76e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e76e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e76ea: ret  */ FN_RET(0x006e75b8); r_esp += 4; return;
}

void f_006e76ec(void) /* sub_6E76EC */
{
    FN_ENTER(0x006e76ec);
    /* 006e76ec: mov dword ptr [0xa96708], 0x3f800000 */ W32((u32)(0xa96708u), 0x3f800000u);
    /* 006e76f6: mov dword ptr [0xa9670c], 0x41000000 */ W32((u32)(0xa9670cu), 0x41000000u);
    /* 006e7700: mov dword ptr [0xa96710], 0x3fc00000 */ W32((u32)(0xa96710u), 0x3fc00000u);
    /* 006e770a: ret  */ FN_RET(0x006e76ec); r_esp += 4; return;
}

void f_006e770c(void) /* sub_6E770C */
{
    FN_ENTER(0x006e770c);
    /* 006e770c: mov dword ptr [0xa96724], 0x3f800000 */ W32((u32)(0xa96724u), 0x3f800000u);
    /* 006e7716: mov dword ptr [0xa96728], 0x41000000 */ W32((u32)(0xa96728u), 0x41000000u);
    /* 006e7720: mov dword ptr [0xa9672c], 0x3fc00000 */ W32((u32)(0xa9672cu), 0x3fc00000u);
    /* 006e772a: ret  */ FN_RET(0x006e770c); r_esp += 4; return;
}

void f_006e772c(void) /* sub_6E772C */
{
    FN_ENTER(0x006e772c);
    /* 006e772c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e772d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e772f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e7731: call 0x6e7750 */ r_esp -= 4; W32(r_esp, 0x6e7736u); f_006e7750();
    /* 006e7736: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e773a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e773c: jne 0x6e7742 */ if (!fZ) goto L_006e7742;
L_006e773e:; BB(0x006e773e);
    /* 006e773e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e773f: ret 4 */ FN_RET(0x006e772c); r_esp += 8; return;
L_006e7742:; BB(0x006e7742);
    /* 006e7742: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7743: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e7748u); f_005c2f74();
    /* 006e7748: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e774a: ret 4 */ FN_RET(0x006e772c); r_esp += 8; return;
}

void f_006e7750(void) /* sub_6E7750 */
{
    FN_ENTER(0x006e7750);
    /* 006e7750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7751: mov ebp, esp */ r_ebp = r_esp;
    /* 006e7753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7755: push 0x8ef098 */ { u32 v = 0x8ef098u; r_esp -= 4; W32(r_esp, v); }
    /* 006e775a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7761: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7768: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e776b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e776e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e7771: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e7774: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e7777: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e777a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e7781: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7784: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7787: mov dword ptr [eax], 0xb3d778 */ W32((u32)(r_eax), 0xb3d778u);
    /* 006e778d: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6e7792u); f_008148d4();
    /* 006e7792: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7793: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e779a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e779d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e77a2u); f_008171e8();
    /* 006e77a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e77a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e77ac: mov esp, ebp */ r_esp = r_ebp;
    /* 006e77ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e77af: ret  */ FN_RET(0x006e7750); r_esp += 4; return;
}

void f_006e776f(void)
{
    FN_ENTER(0x006e776f);
    goto L_006e776f;
L_006e7755:; BB(0x006e7755);
    /* 006e7755: push 0x8ef098 */ { u32 v = 0x8ef098u; r_esp -= 4; W32(r_esp, v); }
    /* 006e775a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7761: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7768: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e776b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e776e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_006e776f:; BB(0x006e776f);
    /* 006e776f: jge 0x6e7755 */ if ((fS==fO)) goto L_006e7755;
L_006e7771:; BB(0x006e7771);
    /* 006e7771: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e7774: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e7777: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e777a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e7781: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7784: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7787: mov dword ptr [eax], 0xb3d778 */ W32((u32)(r_eax), 0xb3d778u);
    /* 006e778d: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6e7792u); f_008148d4();
    /* 006e7792: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7793: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e779a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e779d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e77a2u); f_008171e8();
    /* 006e77a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e77a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e77ac: mov esp, ebp */ r_esp = r_ebp;
    /* 006e77ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e77af: ret  */ FN_RET(0x006e776f); r_esp += 4; return;
}

void f_006e7783(void)
{
    FN_ENTER(0x006e7783);
    /* 006e7783: loopne 0x6e7784 */ r_ecx--; if (r_ecx && !fZ) goto L_006e7784;
L_006e7784:; BB(0x006e7784);
    /* 006e7784: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7785: jo 0x6e77b7 */ if (fO) UNSUP(0x006e7785, "branch to code that was not decoded");
L_006e7787:; BB(0x006e7787);
    /* 006e7787: mov dword ptr [eax], 0xb3d778 */ W32((u32)(r_eax), 0xb3d778u);
    /* 006e778d: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6e7792u); f_008148d4();
    /* 006e7792: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7793: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e779a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e779d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e77a2u); f_008171e8();
    /* 006e77a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e77a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e77ac: mov esp, ebp */ r_esp = r_ebp;
    /* 006e77ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e77af: ret  */ FN_RET(0x006e7783); r_esp += 4; return;
}

void f_006e77b0(void) /* sub_6E77B0 */
{
    FN_ENTER(0x006e77b0);
    /* 006e77b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e77b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006e77b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e77b5: push 0x8ef0b4 */ { u32 v = 0x8ef0b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e77ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e77c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e77c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e77c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e77cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e77ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e77d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e77d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e77d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e77da: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e77dd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e77e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e77e3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e77e8u); f_008193cc();
    /* 006e77e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e77ef: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e77f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e77f5: mov dword ptr [edi], 0xb3d778 */ W32((u32)(r_edi), 0xb3d778u);
    /* 006e77fb: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 006e77fe: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006e7804: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006e7807: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006e780d: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006e7810: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 006e7816: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 006e7819: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e781b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e781c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e781d: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006e7820: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e7823: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e7824: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7829: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e782eu); f_00814298();
    /* 006e782e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e7831: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e7834: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7837: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e783a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e783d: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006e7840: mov eax, edx */ r_eax = r_edx;
    /* 006e7842: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e7845: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e784c: mov esp, ebp */ r_esp = r_ebp;
    /* 006e784e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e784f: ret 8 */ FN_RET(0x006e77b0); r_esp += 12; return;
}

void f_006e7854(void) /* sub_6E7854 */
{
    FN_ENTER(0x006e7854);
    /* 006e7854: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e7855: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7858: mov edi, ecx */ r_edi = r_ecx;
    /* 006e785a: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006e785d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e7860: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e7865: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e7867: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 006e786a: mov eax, ecx */ r_eax = r_ecx;
    /* 006e786c: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e786f: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006e7872: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e7874: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e7877: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7879: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e787b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e787d: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e787f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7881: jne 0x6e78b1 */ if (!fZ) goto L_006e78b1;
L_006e7883:; BB(0x006e7883);
    /* 006e7883: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006e7886: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006e788a: lea edx, [edi + 0x20] */ r_edx = (u32)(r_edi+0x20u);
    /* 006e788d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e788f: mov ebp, eax */ r_ebp = r_eax;
    /* 006e7891: mov esi, edx */ r_esi = r_edx;
L_006e7893:; BB(0x006e7893);
    /* 006e7893: push dword ptr [ebp + 0x9cf940] */ { u32 v = R32((u32)(r_ebp+0x9cf940u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7899: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e789a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e789fu); f_0050b510();
    /* 006e789f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e78a2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e78a5: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e78a8: jl 0x6e7893 */ if ((fS!=fO)) goto L_006e7893;
L_006e78aa:; BB(0x006e78aa);
    /* 006e78aa: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006e78ad: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_006e78b1:; BB(0x006e78b1);
    /* 006e78b1: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 006e78b4: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006e78ba: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e78c0: je 0x6e78c9 */ if (fZ) goto L_006e78c9;
L_006e78c2:; BB(0x006e78c2);
    /* 006e78c2: mov eax, 1 */ r_eax = 0x1u;
    /* 006e78c7: jmp 0x6e78cb */ goto L_006e78cb;
L_006e78c9:; BB(0x006e78c9);
    /* 006e78c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006e78cb:; BB(0x006e78cb);
    /* 006e78cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e78cd: je 0x6e78f0 */ if (fZ) goto L_006e78f0;
L_006e78cf:; BB(0x006e78cf);
    /* 006e78cf: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006e78d2: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e78d7: jl 0x6e78eb */ if ((fS!=fO)) goto L_006e78eb;
L_006e78d9:; BB(0x006e78d9);
    /* 006e78d9: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e78dd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e78e2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e78e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e78e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e78ea: ret  */ FN_RET(0x006e7854); r_esp += 4; return;
L_006e78eb:; BB(0x006e78eb);
    /* 006e78eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e78ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e78ef: ret  */ FN_RET(0x006e7854); r_esp += 4; return;
L_006e78f0:; BB(0x006e78f0);
    /* 006e78f0: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e78f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e78f9: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e78fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e7900: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e7901: ret  */ FN_RET(0x006e7854); r_esp += 4; return;
}

void f_006e7904(void) /* sub_6E7904 */
{
    FN_ENTER(0x006e7904);
    /* 006e7904: mov dword ptr [0xa96734], 0x3f800000 */ W32((u32)(0xa96734u), 0x3f800000u);
    /* 006e790e: mov dword ptr [0xa96738], 0x41000000 */ W32((u32)(0xa96738u), 0x41000000u);
    /* 006e7918: mov dword ptr [0xa9673c], 0x3fc00000 */ W32((u32)(0xa9673cu), 0x3fc00000u);
    /* 006e7922: ret  */ FN_RET(0x006e7904); r_esp += 4; return;
}

void f_006e7924(void) /* sub_6E7924 */
{
    FN_ENTER(0x006e7924);
    /* 006e7924: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7925: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e7927: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e7929: call 0x6e7948 */ r_esp -= 4; W32(r_esp, 0x6e792eu); f_006e7948();
    /* 006e792e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e7932: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e7934: jne 0x6e793a */ if (!fZ) goto L_006e793a;
L_006e7936:; BB(0x006e7936);
    /* 006e7936: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e7937: ret 4 */ FN_RET(0x006e7924); r_esp += 8; return;
L_006e793a:; BB(0x006e793a);
    /* 006e793a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e793b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e7940u); f_005c2f74();
    /* 006e7940: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7941: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e7942: ret 4 */ FN_RET(0x006e7924); r_esp += 8; return;
}

void f_006e7948(void) /* sub_6E7948 */
{
    FN_ENTER(0x006e7948);
    /* 006e7948: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7949: mov ebp, esp */ r_ebp = r_esp;
    /* 006e794b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e794d: push 0x8ef0d0 */ { u32 v = 0x8ef0d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7952: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7959: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7960: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7963: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e7966: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e7969: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e796c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e796f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e7972: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7975: mov dword ptr [ecx], 0xb3d850 */ W32((u32)(r_ecx), 0xb3d850u);
    /* 006e797b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e7982: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6e7987u); f_006de56c();
    /* 006e7987: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e798a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7991: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7993: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7994: ret  */ FN_RET(0x006e7948); r_esp += 4; return;
}

void f_006e795f(void)
{
    FN_ENTER(0x006e795f);
    /* 006e795f: add byte ptr [ebx + 0x658914ec], al */ { u32 ad = (u32)(r_ebx+0x658914ecu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x006e7965, "falls out of decoded code");
}

void f_006e7998(void) /* sub_6E7998 */
{
    FN_ENTER(0x006e7998);
    /* 006e7998: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7999: mov ebp, esp */ r_ebp = r_esp;
    /* 006e799b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e799d: push 0x8ef0f8 */ { u32 v = 0x8ef0f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e79a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e79a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e79a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e79b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e79b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e79b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e79b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e79bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e79bf: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e79c4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e79cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e79d0u); f_005caba4();
    /* 006e79d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e79d1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e79d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e79d6: je 0x6e7a01 */ if (fZ) goto L_006e7a01;
L_006e79d8:; BB(0x006e79d8);
    /* 006e79d8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e79df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e79e6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e79e9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e79ec: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e79ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e79f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e79f5: call 0x6e7a10 */ r_esp -= 4; W32(r_esp, 0x6e79fau); f_006e7a10();
    /* 006e79fa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e7a01:; BB(0x006e7a01);
    /* 006e7a01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e7a04: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7a0b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7a0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7a0e: ret  */ FN_RET(0x006e7998); r_esp += 4; return;
}

void f_006e7a10(void) /* sub_6E7A10 */
{
    FN_ENTER(0x006e7a10);
    /* 006e7a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7a11: mov ebp, esp */ r_ebp = r_esp;
    /* 006e7a13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7a15: push 0x8ef114 */ { u32 v = 0x8ef114u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7a1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7a20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7a21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7a28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7a2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e7a2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e7a31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e7a34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e7a37: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7a3a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7a3d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7a40: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7a43: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e7a46: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6e7a4bu); f_006de5f0();
    /* 006e7a4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e7a52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7a55: mov dword ptr [eax], 0xb3d850 */ W32((u32)(r_eax), 0xb3d850u);
    /* 006e7a5b: lea esi, [eax + 0xf4] */ r_esi = (u32)(r_eax+0xf4u);
    /* 006e7a61: mov edi, 0xb */ r_edi = 0xbu;
    /* 006e7a66: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006e7a68:; BB(0x006e7a68);
    /* 006e7a68: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006e7a6d: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 006e7a70: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e7a72: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 006e7a76: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006e7a79: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e7a7c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006e7a7f: jne 0x6e7a68 */ if (!fZ) goto L_006e7a68;
L_006e7a81:; BB(0x006e7a81);
    /* 006e7a81: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7a83: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 006e7a89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7a8c: mov eax, dword ptr [0x9cf948] */ r_eax = R32((u32)(0x9cf948u));
    /* 006e7a91: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e7a94: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 006e7a9a: call 0x6e7bb4 */ r_esp -= 4; W32(r_esp, 0x6e7a9fu); f_006e7bb4();
    /* 006e7a9f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7aa2: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 006e7aa5: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 006e7aab: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 006e7ab1: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 006e7ab4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7ab7: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 006e7aba: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 006e7abd: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006e7ac3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7ac5: je 0x6e7ad9 */ if (fZ) goto L_006e7ad9;
L_006e7ac7:; BB(0x006e7ac7);
    /* 006e7ac7: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 006e7acd: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 006e7ad3: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006e7ad6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006e7ad9:; BB(0x006e7ad9);
    /* 006e7ad9: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006e7add: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7adf: jl 0x6e7b88 */ if ((fS!=fO)) goto L_006e7b88;
L_006e7ae5:; BB(0x006e7ae5);
    /* 006e7ae5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7ae8: jle 0x6e7b57 */ if ((fZ||fS!=fO)) goto L_006e7b57;
L_006e7aea:; BB(0x006e7aea);
    /* 006e7aea: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7aed: jl 0x6e7b88 */ if ((fS!=fO)) goto L_006e7b88;
L_006e7af3:; BB(0x006e7af3);
    /* 006e7af3: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7af6: jle 0x6e7b3d */ if ((fZ||fS!=fO)) goto L_006e7b3d;
L_006e7af8:; BB(0x006e7af8);
    /* 006e7af8: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7afb: jl 0x6e7b88 */ if ((fS!=fO)) goto L_006e7b88;
L_006e7b01:; BB(0x006e7b01);
    /* 006e7b01: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7b04: jg 0x6e7b88 */ if ((!fZ&&fS==fO)) goto L_006e7b88;
L_006e7b0a:; BB(0x006e7b0a);
    /* 006e7b0a: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7b0d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7b0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b12: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b17: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7b1cu); f_00814298();
    /* 006e7b1c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7b1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7b21: jl 0x6e7b38 */ if ((fS!=fO)) goto L_006e7b38;
L_006e7b23:; BB(0x006e7b23);
    /* 006e7b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b25: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b2b: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e7b30u); f_00814664();
    /* 006e7b30: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7b33: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7b36: jmp 0x6e7b88 */ goto L_006e7b88;
L_006e7b38:; BB(0x006e7b38);
    /* 006e7b38: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7b3b: jmp 0x6e7b88 */ goto L_006e7b88;
L_006e7b3d:; BB(0x006e7b3d);
    /* 006e7b3d: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7b40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7b42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b45: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b4a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7b4fu); f_00814298();
    /* 006e7b4f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7b52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7b55: jmp 0x6e7b88 */ goto L_006e7b88;
L_006e7b57:; BB(0x006e7b57);
    /* 006e7b57: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7b5a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7b5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b5f: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b64: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7b69u); f_00814298();
    /* 006e7b69: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7b6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7b6e: jl 0x6e7b85 */ if ((fS!=fO)) goto L_006e7b85;
L_006e7b70:; BB(0x006e7b70);
    /* 006e7b70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b72: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7b78: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e7b7du); f_00814664();
    /* 006e7b7d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7b80: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7b83: jmp 0x6e7b88 */ goto L_006e7b88;
L_006e7b85:; BB(0x006e7b85);
    /* 006e7b85: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006e7b88:; BB(0x006e7b88);
    /* 006e7b88: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e7b8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e7b8d: je 0x6e7b9a */ if (fZ) goto L_006e7b9a;
L_006e7b8f:; BB(0x006e7b8f);
    /* 006e7b8f: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006e7b93: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
L_006e7b9a:; BB(0x006e7b9a);
    /* 006e7b9a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7b9d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7ba0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7ba3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e7ba6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7bad: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7bb0: ret 0x10 */ FN_RET(0x006e7a10); r_esp += 20; return;
}

void f_006e7bb4(void) /* sub_6E7BB4 */
{
    FN_ENTER(0x006e7bb4);
    /* 006e7bb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7bb5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7bb8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e7bba: movsx eax, word ptr [ebx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x78u));
    /* 006e7bbe: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7bc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7bc4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7bc6: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e7bcbu); f_006ded14();
    /* 006e7bcb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e7bcd: mov dword ptr [ebx + 0x88], edx */ W32((u32)(r_ebx+0x88u), r_edx);
    /* 006e7bd3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e7bd6: mov dword ptr [ebx + 0x8c], edx */ W32((u32)(r_ebx+0x8cu), r_edx);
    /* 006e7bdc: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e7bdf: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 006e7be5: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e7be8: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 006e7bee: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e7bf1: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 006e7bf7: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e7bfa: mov dword ptr [ebx + 0x9c], edx */ W32((u32)(r_ebx+0x9cu), r_edx);
    /* 006e7c00: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e7c03: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 006e7c09: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e7c0c: mov dword ptr [ebx + 0xa4], edx */ W32((u32)(r_ebx+0xa4u), r_edx);
    /* 006e7c12: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e7c15: mov dword ptr [ebx + 0xa8], edx */ W32((u32)(r_ebx+0xa8u), r_edx);
    /* 006e7c1b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e7c1e: mov dword ptr [ebx + 0xac], edx */ W32((u32)(r_ebx+0xacu), r_edx);
    /* 006e7c24: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e7c27: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 006e7c2a: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 006e7c30: movsx eax, word ptr [ebx + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x78u));
    /* 006e7c34: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e7c37: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006e7c3b: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e7c3f: fstp dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0)); FPOP();
    /* 006e7c45: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e7c48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e7c49: ret  */ FN_RET(0x006e7bb4); r_esp += 4; return;
}

void f_006e7c4c(void) /* sub_6E7C4C */
{
    FN_ENTER(0x006e7c4c);
    /* 006e7c4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7c4d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e7c4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7c51: push 0x8ef13c */ { u32 v = 0x8ef13cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7c56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7c5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7c64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7c67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e7c6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e7c6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e7c70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e7c73: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7c78: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e7c7f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e7c84u); f_005caba4();
    /* 006e7c84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7c85: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e7c88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e7c8a: je 0x6e7cb5 */ if (fZ) goto L_006e7cb5;
L_006e7c8c:; BB(0x006e7c8c);
    /* 006e7c8c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e7c93: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e7c9a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7c9d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7ca0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7ca3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7ca6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7ca9: call 0x6e7cc4 */ r_esp -= 4; W32(r_esp, 0x6e7caeu); f_006e7cc4();
    /* 006e7cae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e7cb5:; BB(0x006e7cb5);
    /* 006e7cb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e7cb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7cbf: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7cc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7cc2: ret  */ FN_RET(0x006e7c4c); r_esp += 4; return;
}

void f_006e7cc4(void) /* sub_6E7CC4 */
{
    FN_ENTER(0x006e7cc4);
    /* 006e7cc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7cc5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e7cc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7cc9: push 0x8ef158 */ { u32 v = 0x8ef158u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7cce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7cd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7cdc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7cdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e7ce2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e7ce5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e7ce8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e7ceb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e7cee: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7cf1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006e7cf4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006e7cf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7cf8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7cfb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e7cfe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e7d01: call 0x6de7fc */ r_esp -= 4; W32(r_esp, 0x6e7d06u); f_006de7fc();
    /* 006e7d06: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e7d0d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7d10: mov dword ptr [edi], 0xb3d850 */ W32((u32)(r_edi), 0xb3d850u);
    /* 006e7d16: lea ebx, [edi + 0xf4] */ r_ebx = (u32)(r_edi+0xf4u);
    /* 006e7d1c: mov esi, 0xb */ r_esi = 0xbu;
    /* 006e7d21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006e7d23:; BB(0x006e7d23);
    /* 006e7d23: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e7d28: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006e7d2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7d2d: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006e7d31: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006e7d34: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e7d37: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006e7d3a: jne 0x6e7d23 */ if (!fZ) goto L_006e7d23;
L_006e7d3c:; BB(0x006e7d3c);
    /* 006e7d3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e7d3f: mov dword ptr [edi + 0xf0], 0 */ W32((u32)(r_edi+0xf0u), 0x0u);
    /* 006e7d49: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7d4c: mov ecx, dword ptr [0x9cf948] */ r_ecx = R32((u32)(0x9cf948u));
    /* 006e7d52: mov dword ptr [edx + 0xec], 1 */ W32((u32)(r_edx+0xecu), 0x1u);
    /* 006e7d5c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006e7d5f: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006e7d61: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006e7d64: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 006e7d67: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006e7d6a: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e7d70: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006e7d72: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006e7d75: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 006e7d78: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006e7d7b: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006e7d7e: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006e7d81: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006e7d84: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006e7d87: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006e7d8a: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006e7d8d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006e7d90: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006e7d93: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006e7d96: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006e7d99: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006e7d9c: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006e7d9f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006e7da2: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006e7da5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006e7da8: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006e7dab: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006e7dae: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006e7db1: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006e7db4: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006e7db7: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006e7dba: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006e7dbd: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006e7dc0: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006e7dc3: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006e7dc6: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006e7dc9: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006e7dcc: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006e7dcf: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006e7dd2: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006e7dd5: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006e7dd8: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006e7ddb: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006e7dde: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006e7de1: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006e7de4: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006e7de7: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006e7dea: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006e7ded: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7df0: call 0x6e7bb4 */ r_esp -= 4; W32(r_esp, 0x6e7df5u); f_006e7bb4();
    /* 006e7df5: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7df8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e7dfb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006e7dfd: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006e7e00: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006e7e03: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7e06: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006e7e09: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 006e7e0c: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 006e7e0f: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006e7e15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e7e17: je 0x6e7e2b */ if (fZ) goto L_006e7e2b;
L_006e7e19:; BB(0x006e7e19);
    /* 006e7e19: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 006e7e1f: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 006e7e25: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006e7e28: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_006e7e2b:; BB(0x006e7e2b);
    /* 006e7e2b: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006e7e2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7e31: jl 0x6e7eda */ if ((fS!=fO)) goto L_006e7eda;
L_006e7e37:; BB(0x006e7e37);
    /* 006e7e37: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7e3a: jle 0x6e7ea9 */ if ((fZ||fS!=fO)) goto L_006e7ea9;
L_006e7e3c:; BB(0x006e7e3c);
    /* 006e7e3c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7e3f: jl 0x6e7eda */ if ((fS!=fO)) goto L_006e7eda;
L_006e7e45:; BB(0x006e7e45);
    /* 006e7e45: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7e48: jle 0x6e7e8f */ if ((fZ||fS!=fO)) goto L_006e7e8f;
L_006e7e4a:; BB(0x006e7e4a);
    /* 006e7e4a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7e4d: jl 0x6e7eda */ if ((fS!=fO)) goto L_006e7eda;
L_006e7e53:; BB(0x006e7e53);
    /* 006e7e53: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e7e56: jg 0x6e7eda */ if ((!fZ&&fS==fO)) goto L_006e7eda;
L_006e7e5c:; BB(0x006e7e5c);
    /* 006e7e5c: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7e5f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7e61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e64: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e69: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7e6eu); f_00814298();
    /* 006e7e6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7e73: jl 0x6e7e8a */ if ((fS!=fO)) goto L_006e7e8a;
L_006e7e75:; BB(0x006e7e75);
    /* 006e7e75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e77: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e7d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e7e82u); f_00814664();
    /* 006e7e82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7e85: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7e88: jmp 0x6e7eda */ goto L_006e7eda;
L_006e7e8a:; BB(0x006e7e8a);
    /* 006e7e8a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7e8d: jmp 0x6e7eda */ goto L_006e7eda;
L_006e7e8f:; BB(0x006e7e8f);
    /* 006e7e8f: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7e92: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7e94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e97: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7e9c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7ea1u); f_00814298();
    /* 006e7ea1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7ea4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7ea7: jmp 0x6e7eda */ goto L_006e7eda;
L_006e7ea9:; BB(0x006e7ea9);
    /* 006e7ea9: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e7eac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e7eae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7eaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7eb1: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7eb6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e7ebbu); f_00814298();
    /* 006e7ebb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7ebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e7ec0: jl 0x6e7ed7 */ if ((fS!=fO)) goto L_006e7ed7;
L_006e7ec2:; BB(0x006e7ec2);
    /* 006e7ec2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7ec4: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7eca: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e7ecfu); f_00814664();
    /* 006e7ecf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e7ed2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e7ed5: jmp 0x6e7eda */ goto L_006e7eda;
L_006e7ed7:; BB(0x006e7ed7);
    /* 006e7ed7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_006e7eda:; BB(0x006e7eda);
    /* 006e7eda: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e7edd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e7edf: je 0x6e7eec */ if (fZ) goto L_006e7eec;
L_006e7ee1:; BB(0x006e7ee1);
    /* 006e7ee1: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006e7ee5: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
L_006e7eec:; BB(0x006e7eec);
    /* 006e7eec: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e7eef: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7ef2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e7ef5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e7ef8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7eff: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7f01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7f02: ret 0x10 */ FN_RET(0x006e7cc4); r_esp += 20; return;
}

void f_006e7f08(void) /* sub_6E7F08 */
{
    FN_ENTER(0x006e7f08);
    /* 006e7f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f0a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7f0d: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 006e7f11: mov ebx, dword ptr [ecx + 0x88] */ r_ebx = R32((u32)(r_ecx+0x88u));
    /* 006e7f17: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006e7f1a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e7f1e: mov eax, 0xb */ r_eax = 0xbu;
    /* 006e7f23: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e7f26: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f29: push dword ptr [ecx + 0xb8] */ { u32 v = R32((u32)(r_ecx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7f2f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f30: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f32: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7f35: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e7f37: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6e7f3au); call_ind(t); }
    /* 006e7f3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e7f3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e7f3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e7f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7f41: ret 4 */ FN_RET(0x006e7f08); r_esp += 8; return;
}

void f_006e7f44(void) /* sub_6E7F44 */
{
    FN_ENTER(0x006e7f44);
    /* 006e7f44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e7f47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e7f49: call 0x6e7f68 */ r_esp -= 4; W32(r_esp, 0x6e7f4eu); f_006e7f68();
    /* 006e7f4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e7f52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e7f54: jne 0x6e7f5a */ if (!fZ) goto L_006e7f5a;
L_006e7f56:; BB(0x006e7f56);
    /* 006e7f56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e7f57: ret 4 */ FN_RET(0x006e7f44); r_esp += 8; return;
L_006e7f5a:; BB(0x006e7f5a);
    /* 006e7f5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e7f60u); f_005c2f74();
    /* 006e7f60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7f61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e7f62: ret 4 */ FN_RET(0x006e7f44); r_esp += 8; return;
}

void f_006e7f68(void) /* sub_6E7F68 */
{
    FN_ENTER(0x006e7f68);
    /* 006e7f68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f69: mov ebp, esp */ r_ebp = r_esp;
    /* 006e7f6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f6d: push 0x8ef174 */ { u32 v = 0x8ef174u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7f79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7f80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7f83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e7f86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e7f89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e7f8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e7f8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e7f92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e7f99: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7f9c: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7f9f: mov dword ptr [eax], 0xb3d8c0 */ W32((u32)(r_eax), 0xb3d8c0u);
    /* 006e7fa5: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6e7faau); f_008148d4();
    /* 006e7faa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e7fab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e7fb2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e7fb5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e7fbau); f_008171e8();
    /* 006e7fba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e7fbd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e7fc4: mov esp, ebp */ r_esp = r_ebp;
    /* 006e7fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e7fc7: ret  */ FN_RET(0x006e7f68); r_esp += 4; return;
}

void f_006e7fc8(void) /* sub_6E7FC8 */
{
    FN_ENTER(0x006e7fc8);
    /* 006e7fc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e7fc9: mov ebp, esp */ r_ebp = r_esp;
    /* 006e7fcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e7fcd: push 0x8ef190 */ { u32 v = 0x8ef190u; r_esp -= 4; W32(r_esp, v); }
    /* 006e7fd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e7fd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e7fd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e7fe0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e7fe3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e7fe6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e7fe9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e7fec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e7fef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e7ff2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e7ff5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e7ff8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e7ffb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e8000u); f_008193cc();
    /* 006e8000: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e8007: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e800a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e800d: mov dword ptr [edi], 0xb3d8c0 */ W32((u32)(r_edi), 0xb3d8c0u);
    /* 006e8013: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 006e8016: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006e801c: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006e801f: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006e8025: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006e8028: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 006e802e: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 006e8031: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e8033: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8035: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006e8038: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e803b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e803c: push 0xa7 */ { u32 v = 0xa7u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8041: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e8046u); f_00814298();
    /* 006e8046: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8049: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e804c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e804f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8052: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e8055: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006e8058: mov eax, edx */ r_eax = r_edx;
    /* 006e805a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e805d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e8064: mov esp, ebp */ r_esp = r_ebp;
    /* 006e8066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e8067: ret 8 */ FN_RET(0x006e7fc8); r_esp += 12; return;
}

