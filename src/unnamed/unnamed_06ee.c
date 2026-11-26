#include "protos.h"

void f_006ee0d0(void) /* sub_6EE0D0 */
{
    FN_ENTER(0x006ee0d0);
    /* 006ee0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ee0d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0d5: push 0x8ef76a */ { u32 v = 0x8ef76au; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ee0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee0e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ee0e8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ee0eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ee0ee: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006ee0f1: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006ee0f4: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006ee0f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ee0fa: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee0fd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006ee100: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006ee103: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ee106: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006ee109: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006ee10c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006ee10f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6ee114u); f_008193cc();
    /* 006ee114: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ee11b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ee11e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ee121: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee124: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 006ee127: mov word ptr [eax + 0x20], bx */ W16((u32)(r_eax+0x20u), (u16)r_ebx);
    /* 006ee12b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ee12d: mov dword ptr [eax], 0xb3e078 */ W32((u32)(r_eax), 0xb3e078u);
    /* 006ee133: mov word ptr [eax + 0x22], si */ W16((u32)(r_eax+0x22u), (u16)r_esi);
    /* 006ee137: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee139: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee13b: mov dword ptr [eax + 0x60], 1 */ W32((u32)(r_eax+0x60u), 0x1u);
    /* 006ee142: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006ee144: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006ee147: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 006ee14a: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 006ee14d: fadd dword ptr [0x96dcf0] */ ST(0) = ST(0) + R_F32((u32)(0x96dcf0u));
    /* 006ee153: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 006ee156: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 006ee159: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ee15c: mov edi, dword ptr [edi + 8] */ r_edi = R32((u32)(r_edi+0x8u));
    /* 006ee15f: fst dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0));
    /* 006ee162: fadd dword ptr [0x96dcec] */ ST(0) = ST(0) + R_F32((u32)(0x96dcecu));
    /* 006ee168: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 006ee16b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee16d: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 006ee170: mov dword ptr [eax + 0x34], 0x3f99999a */ W32((u32)(r_eax+0x34u), 0x3f99999au);
    /* 006ee177: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 006ee17a: mov dword ptr [eax + 0x58], esi */ W32((u32)(r_eax+0x58u), r_esi);
    /* 006ee17d: mov dword ptr [eax + 0x38], 0x3f99999a */ W32((u32)(r_eax+0x38u), 0x3f99999au);
    /* 006ee184: mov dword ptr [eax + 0x5c], esi */ W32((u32)(r_eax+0x5cu), r_esi);
    /* 006ee187: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 006ee18a: mov edx, dword ptr [ebx + 0x96dd70] */ r_edx = R32((u32)(r_ebx+0x96dd70u));
    /* 006ee190: mov dword ptr [eax + 0x3c], 0x3f99999a */ W32((u32)(r_eax+0x3cu), 0x3f99999au);
    /* 006ee197: mov dword ptr [eax + 0x30], edi */ W32((u32)(r_eax+0x30u), r_edi);
    /* 006ee19a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ee19c: mov dword ptr [eax + 0x48], 0x3f800000 */ W32((u32)(r_eax+0x48u), 0x3f800000u);
    /* 006ee1a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ee1a5: mov dword ptr [eax + 0x4c], 0x3f800000 */ W32((u32)(r_eax+0x4cu), 0x3f800000u);
    /* 006ee1ac: mov dword ptr [eax + 0x50], 0x3f800000 */ W32((u32)(r_eax+0x50u), 0x3f800000u);
    /* 006ee1b3: mov dword ptr [eax + 0x54], 0x3f800000 */ W32((u32)(r_eax+0x54u), 0x3f800000u);
    /* 006ee1ba: jbe 0x6ee245 */ if ((fC||fZ)) goto L_006ee245;
L_006ee1c0:; BB(0x006ee1c0);
    /* 006ee1c0: mov edx, dword ptr [ebx + 0x96dd6c] */ r_edx = R32((u32)(r_ebx+0x96dd6cu));
    /* 006ee1c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ee1c8: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 006ee1cb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ee1cd: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006ee1d0: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee1d2: mov edi, dword ptr [ebx + edx + 4] */ r_edi = R32((u32)(r_ebx+r_edx+0x4u));
    /* 006ee1d6: test edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee1dc: je 0x6ee1e3 */ if (fZ) goto L_006ee1e3;
L_006ee1de:; BB(0x006ee1de);
    /* 006ee1de: mov ecx, 0x2000 */ r_ecx = 0x2000u;
L_006ee1e3:; BB(0x006ee1e3);
    /* 006ee1e3: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee1e9: je 0x6ee1fd */ if (fZ) goto L_006ee1fd;
L_006ee1eb:; BB(0x006ee1eb);
    /* 006ee1eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee1ec: push dword ptr [ebx + edx] */ { u32 v = R32((u32)(r_ebx+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee1ef: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee1f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee1f3: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6ee1f8u); f_0050b7a4();
    /* 006ee1f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee1fb: jmp 0x6ee20d */ goto L_006ee20d;
L_006ee1fd:; BB(0x006ee1fd);
    /* 006ee1fd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 006ee200: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee201: push dword ptr [ebx + edx] */ { u32 v = R32((u32)(r_ebx+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee205: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6ee20au); f_0050b7a4();
    /* 006ee20a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006ee20d:; BB(0x006ee20d);
    /* 006ee20d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee20f: je 0x6ee229 */ if (fZ) goto L_006ee229;
L_006ee211:; BB(0x006ee211);
    /* 006ee211: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ee214: movzx ecx, word ptr [edx + 0x20] */ r_ecx = (u32)R16((u32)(r_edx+0x20u));
    /* 006ee218: mov edi, dword ptr [ecx*8 + 0x96dd6c] */ r_edi = R32((u32)(r_ecx*8+0x96dd6cu));
    /* 006ee21f: mov ebx, dword ptr [ebx + edi + 8] */ r_ebx = R32((u32)(r_ebx+r_edi+0x8u));
    /* 006ee223: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 006ee226: mov dword ptr [eax + 0x48], ebx */ W32((u32)(r_eax+0x48u), r_ebx);
L_006ee229:; BB(0x006ee229);
    /* 006ee229: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ee22c: movzx ebx, word ptr [eax + 0x20] */ r_ebx = (u32)R16((u32)(r_eax+0x20u));
    /* 006ee230: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ee233: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee235: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee237: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee239: cmp esi, dword ptr [ebx + 0x96dd70] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x96dd70u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ee23f: jb 0x6ee1c0 */ if (fC) goto L_006ee1c0;
L_006ee245:; BB(0x006ee245);
    /* 006ee245: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006ee24c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee24e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ee253u); f_005caba4();
    /* 006ee253: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ee256: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee259: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006ee25c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee25e: je 0x6ee2aa */ if (fZ) goto L_006ee2aa;
L_006ee260:; BB(0x006ee260);
    /* 006ee260: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006ee267: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ee26e: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee271: mov ecx, eax */ r_ecx = r_eax;
    /* 006ee273: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee275: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x6ee27au); f_00504b58();
    /* 006ee27a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006ee281:; BB(0x006ee281);
    /* 006ee281: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ee284: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee287: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee28a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ee28d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ee290: mov dword ptr [eax + 0x40], 0x3ff33333 */ W32((u32)(r_eax+0x40u), 0x3ff33333u);
    /* 006ee297: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 006ee29a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ee29d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ee2a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006ee2a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee2a7: ret 0x10 */ FN_RET(0x006ee0d0); r_esp += 20; return;
L_006ee2aa:; BB(0x006ee2aa);
    /* 006ee2aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ee2ac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ee2af: jmp 0x6ee281 */ goto L_006ee281;
}

void f_006ee2b4(void) /* sub_6EE2B4 */
{
    FN_ENTER(0x006ee2b4);
    /* 006ee2b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ee2b5: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ee2b8: mov esi, ecx */ r_esi = r_ecx;
    /* 006ee2ba: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 006ee2bd: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 006ee2c0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ee2c3: mov dword ptr [esi + 0x58], edx */ W32((u32)(r_esi+0x58u), r_edx);
    /* 006ee2c6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee2c9: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee2cc: jl 0x6ee2d7 */ if ((fS!=fO)) goto L_006ee2d7;
L_006ee2ce:; BB(0x006ee2ce);
    /* 006ee2ce: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 006ee2d5: jmp 0x6ee2da */ goto L_006ee2da;
L_006ee2d7:; BB(0x006ee2d7);
    /* 006ee2d7: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
L_006ee2da:; BB(0x006ee2da);
    /* 006ee2da: cmp edx, 0x6e */ {  u32 a = r_edx; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee2dd: jle 0x6ee2ec */ if ((fZ||fS!=fO)) goto L_006ee2ec;
L_006ee2df:; BB(0x006ee2df);
    /* 006ee2df: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006ee2e3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ee2e8: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_006ee2ec:; BB(0x006ee2ec);
    /* 006ee2ec: fld dword ptr [0x96dcd0] */ FPUSH(R_F32((u32)(0x96dcd0u)));
    /* 006ee2f2: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 006ee2f5: fcomp dword ptr [esi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x34u))); FPOP();
    /* 006ee2f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006ee2fa: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 006ee2fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006ee2fe: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006ee305: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006ee309: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006ee30d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006ee315: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006ee319: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006ee321: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006ee329: ja 0x6ee351 */ if ((!fC&&!fZ)) goto L_006ee351;
L_006ee32b:; BB(0x006ee32b);
    /* 006ee32b: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 006ee32e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee330: je 0x6ee339 */ if (fZ) goto L_006ee339;
L_006ee332:; BB(0x006ee332);
    /* 006ee332: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
L_006ee339:; BB(0x006ee339);
    /* 006ee339: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006ee33d: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee343: lea edx, [esi + 0x34] */ r_edx = (u32)(r_esi+0x34u);
    /* 006ee346: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee347: call 0x501be8 */ r_esp -= 4; W32(r_esp, 0x6ee34cu); f_00501be8();
    /* 006ee34c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee34f: jmp 0x6ee367 */ goto L_006ee367;
L_006ee351:; BB(0x006ee351);
    /* 006ee351: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006ee355: push 0x3e19999a */ { u32 v = 0x3e19999au; r_esp -= 4; W32(r_esp, v); }
    /* 006ee35a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee35b: lea edx, [esi + 0x34] */ r_edx = (u32)(r_esi+0x34u);
    /* 006ee35e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee35f: call 0x501be8 */ r_esp -= 4; W32(r_esp, 0x6ee364u); f_00501be8();
    /* 006ee364: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006ee367:; BB(0x006ee367);
    /* 006ee367: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006ee36a: push 0x3d0f5c29 */ { u32 v = 0x3d0f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee36f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee370: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ee373: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ee374: call 0x501b34 */ r_esp -= 4; W32(r_esp, 0x6ee379u); f_00501b34();
    /* 006ee379: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ee37c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ee37d: ret  */ FN_RET(0x006ee2b4); r_esp += 4; return;
}

void f_006ee380(void) /* sub_6EE380 */
{
    FN_ENTER(0x006ee380);
    /* 006ee380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ee381: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ee384: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ee386: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6ee38bu); f_00807d60();
    /* 006ee38b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee38d: jne 0x6ee394 */ if (!fZ) goto L_006ee394;
L_006ee38f:; BB(0x006ee38f);
    /* 006ee38f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ee392: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee393: ret  */ FN_RET(0x006ee380); r_esp += 4; return;
L_006ee394:; BB(0x006ee394);
    /* 006ee394: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6ee399u); f_0082dbac();
    /* 006ee399: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006ee39e: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006ee3a3: or eax, 0x200010 */ {  u32 a = r_eax; u32 b = 0x200010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ee3a8: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
    /* 006ee3ab: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006ee3b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee3b1: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6ee3b6u); f_0082d710();
    /* 006ee3b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ee3b7: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 006ee3ba: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 006ee3bd: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 006ee3c0: movzx eax, word ptr [ebp + 0x22] */ r_eax = (u32)R16((u32)(r_ebp+0x22u));
    /* 006ee3c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006ee3c6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006ee3ca: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ee3cd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006ee3d1: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee3d4: jl 0x6ee407 */ if ((fS!=fO)) goto L_006ee407;
L_006ee3d6:; BB(0x006ee3d6);
    /* 006ee3d6: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee3d9: jge 0x6ee407 */ if ((fS==fO)) goto L_006ee407;
L_006ee3db:; BB(0x006ee3db);
    /* 006ee3db: fld dword ptr [0x96dcc0] */ FPUSH(R_F32((u32)(0x96dcc0u)));
    /* 006ee3e1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006ee3e5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006ee3e7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006ee3ea: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ee3ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ee3f0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006ee3f2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006ee3f4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006ee3f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ee3f8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006ee3fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ee3fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ee401: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006ee405: jmp 0x6ee43b */ goto L_006ee43b;
L_006ee407:; BB(0x006ee407);
    /* 006ee407: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee40a: jl 0x6ee43b */ if ((fS!=fO)) goto L_006ee43b;
L_006ee40c:; BB(0x006ee40c);
    /* 006ee40c: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee40f: jge 0x6ee43b */ if ((fS==fO)) goto L_006ee43b;
L_006ee411:; BB(0x006ee411);
    /* 006ee411: fld dword ptr [0x96dcbc] */ FPUSH(R_F32((u32)(0x96dcbcu)));
    /* 006ee417: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006ee41b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006ee41d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006ee420: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ee424: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ee426: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006ee428: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006ee42a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006ee42c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ee42e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006ee432: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006ee434: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ee437: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_006ee43b:; BB(0x006ee43b);
    /* 006ee43b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6ee440u); f_0082d7b0();
    /* 006ee440: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 006ee443: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6ee448u); f_0082d838();
    /* 006ee448: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee44b: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006ee44f: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006ee453: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006ee457: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006ee459: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ee45c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006ee460: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006ee464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ee466: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6ee46bu); f_0082fa0c();
    /* 006ee46b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006ee470: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 006ee476: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ee478: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6ee47du); f_0082d8bc();
    /* 006ee47d: mov ecx, dword ptr [0xa96680] */ r_ecx = R32((u32)(0xa96680u));
    /* 006ee483: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6ee488u); f_00829cc8();
    /* 006ee488: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006ee48b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee48d: je 0x6ee49a */ if (fZ) goto L_006ee49a;
L_006ee48f:; BB(0x006ee48f);
    /* 006ee48f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ee491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee493: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee495: call 0x504c04 */ r_esp -= 4; W32(r_esp, 0x6ee49au); f_00504c04();
L_006ee49a:; BB(0x006ee49a);
    /* 006ee49a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ee49fu); f_0061cdb0();
    /* 006ee49f: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x6ee4a4u); f_007a954c();
    /* 006ee4a4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee4a6: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x6ee4abu); f_007a94a0();
    /* 006ee4ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ee4ac: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ee4b2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee4b4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ee4b9u); f_005b8610();
    /* 006ee4b9: mov ecx, eax */ r_ecx = r_eax;
    /* 006ee4bb: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6ee4c0u); f_00831758();
    /* 006ee4c0: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x6ee4c5u); f_007a94b0();
    /* 006ee4c5: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x6ee4cau); f_007a9564();
    /* 006ee4ca: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6ee4cfu); f_0082da80();
    /* 006ee4cf: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006ee4d4: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006ee4d7: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006ee4dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee4de: je 0x6ee4ec */ if (fZ) goto L_006ee4ec;
L_006ee4e0:; BB(0x006ee4e0);
    /* 006ee4e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee4e2: call 0x504c78 */ r_esp -= 4; W32(r_esp, 0x6ee4e7u); f_00504c78();
    /* 006ee4e7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6ee4ecu); f_0061cdb0();
L_006ee4ec:; BB(0x006ee4ec);
    /* 006ee4ec: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6ee4f1u); f_0082dab0();
    /* 006ee4f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ee4f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee4f5: ret  */ FN_RET(0x006ee380); r_esp += 4; return;
}

void f_006ee4f8(void) /* sub_6EE4F8 */
{
    FN_ENTER(0x006ee4f8);
    /* 006ee4f8: mov dword ptr [0xa9684c], 0x3f800000 */ W32((u32)(0xa9684cu), 0x3f800000u);
    /* 006ee502: mov dword ptr [0xa96850], 0x41000000 */ W32((u32)(0xa96850u), 0x41000000u);
    /* 006ee50c: mov dword ptr [0xa96854], 0x3fc00000 */ W32((u32)(0xa96854u), 0x3fc00000u);
    /* 006ee516: ret  */ FN_RET(0x006ee4f8); r_esp += 4; return;
}

void f_006ee518(void) /* sub_6EE518 */
{
    FN_ENTER(0x006ee518);
    /* 006ee518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ee519: mov ebp, esp */ r_ebp = r_esp;
    /* 006ee51b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee51d: push 0x8ef784 */ { u32 v = 0x8ef784u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee522: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ee528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee529: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ee530: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ee533: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ee536: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ee539: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ee53c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ee53f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006ee542: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ee545: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ee54c: mov eax, ecx */ r_eax = r_ecx;
    /* 006ee54e: movzx edx, word ptr [eax + 0x7a] */ r_edx = (u32)R16((u32)(r_eax+0x7au));
    /* 006ee552: mov dword ptr [eax], 0xb3e110 */ W32((u32)(r_eax), 0xb3e110u);
    /* 006ee558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006ee55a: mov eax, dword ptr [edx*8 + 0x96de24] */ r_eax = R32((u32)(r_edx*8+0x96de24u));
    /* 006ee561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ee563: jbe 0x6ee5f3 */ if ((fC||fZ)) goto L_006ee5f3;
L_006ee569:; BB(0x006ee569);
    /* 006ee569: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee56c: mov esi, dword ptr [edx + 0xec] */ r_esi = R32((u32)(r_edx+0xecu));
L_006ee572:; BB(0x006ee572);
    /* 006ee572: mov ebx, dword ptr [esi + ecx*4] */ r_ebx = R32((u32)(r_esi+r_ecx*4));
    /* 006ee575: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006ee578: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee57a: je 0x6ee5aa */ if (fZ) goto L_006ee5aa;
L_006ee57c:; BB(0x006ee57c);
    /* 006ee57c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee57f: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006ee583: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ee588: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006ee58c: mov ebx, dword ptr [esi + 0xec] */ r_ebx = R32((u32)(r_esi+0xecu));
    /* 006ee592: mov dword ptr [ebx + edx*2], 0 */ W32((u32)(r_ebx+r_edx*2), 0x0u);
    /* 006ee599: movzx edx, word ptr [esi + 0x7a] */ r_edx = (u32)R16((u32)(r_esi+0x7au));
    /* 006ee59d: mov esi, dword ptr [esi + 0xec] */ r_esi = R32((u32)(r_esi+0xecu));
    /* 006ee5a3: mov eax, dword ptr [edx*8 + 0x96de24] */ r_eax = R32((u32)(r_edx*8+0x96de24u));
L_006ee5aa:; BB(0x006ee5aa);
    /* 006ee5aa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ee5ad: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ee5af: jb 0x6ee572 */ if (fC) goto L_006ee572;
L_006ee5b1:; BB(0x006ee5b1);
    /* 006ee5b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ee5b2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ee5b7u); f_00857e98();
    /* 006ee5b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ee5b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ee5bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee5c2: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6ee5c7u); f_006de56c();
    /* 006ee5c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ee5ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ee5cc: jne 0x6ee5e7 */ if (!fZ) goto L_006ee5e7;
L_006ee5ce:; BB(0x006ee5ce);
    /* 006ee5ce: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ee5d1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ee5d4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ee5d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ee5da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ee5e1: mov esp, ebp */ r_esp = r_ebp;
    /* 006ee5e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee5e4: ret 4 */ FN_RET(0x006ee518); r_esp += 8; return;
L_006ee5e7:; BB(0x006ee5e7);
    /* 006ee5e7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee5ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee5eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ee5f0u); f_005c2f74();
    /* 006ee5f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ee5f1: jmp 0x6ee5ce */ goto L_006ee5ce;
L_006ee5f3:; BB(0x006ee5f3);
    /* 006ee5f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee5f6: mov esi, dword ptr [eax + 0xec] */ r_esi = R32((u32)(r_eax+0xecu));
    /* 006ee5fc: jmp 0x6ee5b1 */ goto L_006ee5b1;
}

void f_006ee600(void) /* sub_6EE600 */
{
    FN_ENTER(0x006ee600);
    /* 006ee600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ee601: mov ebp, esp */ r_ebp = r_esp;
    /* 006ee603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee605: push 0x8ef7ac */ { u32 v = 0x8ef7acu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee60a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ee610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee611: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ee618: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ee61b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ee61e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ee621: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ee624: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ee627: push 0x150 */ { u32 v = 0x150u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee62c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ee633: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ee638u); f_005caba4();
    /* 006ee638: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ee639: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ee63c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ee63e: je 0x6ee666 */ if (fZ) goto L_006ee666;
L_006ee640:; BB(0x006ee640);
    /* 006ee640: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ee647: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ee64e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee651: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee654: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee657: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ee65a: call 0x6ee674 */ r_esp -= 4; W32(r_esp, 0x6ee65fu); f_006ee674();
    /* 006ee65f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ee666:; BB(0x006ee666);
    /* 006ee666: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ee669: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ee670: mov esp, ebp */ r_esp = r_ebp;
    /* 006ee672: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee673: ret  */ FN_RET(0x006ee600); r_esp += 4; return;
}

void f_006ee674(void) /* sub_6EE674 */
{
    FN_ENTER(0x006ee674);
    /* 006ee674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ee675: mov ebp, esp */ r_ebp = r_esp;
    /* 006ee677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee679: push 0x8ef7fe */ { u32 v = 0x8ef7feu; r_esp -= 4; W32(r_esp, v); }
    /* 006ee67e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ee684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee685: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ee68c: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ee68f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ee692: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006ee695: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006ee698: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006ee69b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006ee69e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee6a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee6a2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006ee6a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee6a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee6a9: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6ee6aeu); f_006de5f0();
    /* 006ee6ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ee6b5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee6b8: mov dword ptr [ecx], 0xb3e110 */ W32((u32)(r_ecx), 0xb3e110u);
    /* 006ee6be: mov eax, dword ptr [0x9cf9b8] */ r_eax = R32((u32)(0x9cf9b8u));
    /* 006ee6c3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ee6c6: call 0x6eeae0 */ r_esp -= 4; W32(r_esp, 0x6ee6cbu); f_006eeae0();
    /* 006ee6cb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee6ce: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 006ee6d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee6d6: je 0x6ee6f0 */ if (fZ) goto L_006ee6f0;
L_006ee6d8:; BB(0x006ee6d8);
    /* 006ee6d8: fld dword ptr [0x96dde0] */ FPUSH(R_F32((u32)(0x96dde0u)));
    /* 006ee6de: fadd dword ptr [edx + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x90u));
    /* 006ee6e4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee6e7: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006ee6ed: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006ee6f0:; BB(0x006ee6f0);
    /* 006ee6f0: movzx eax, word ptr [edx + 0x7a] */ r_eax = (u32)R16((u32)(r_edx+0x7au));
    /* 006ee6f4: mov edx, dword ptr [eax*8 + 0x96de24] */ r_edx = R32((u32)(r_eax*8+0x96de24u));
    /* 006ee6fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ee6fd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ee6ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee700: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ee705u); f_008581c5();
    /* 006ee705: mov edx, eax */ r_edx = r_eax;
    /* 006ee707: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee70a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee70d: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 006ee713: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006ee717: mov ecx, dword ptr [edx*8 + 0x96de24] */ r_ecx = R32((u32)(r_edx*8+0x96de24u));
    /* 006ee71e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee720: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ee722: jbe 0x6ee767 */ if ((fC||fZ)) goto L_006ee767;
L_006ee724:; BB(0x006ee724);
    /* 006ee724: mov edx, dword ptr [edx*8 + 0x96de20] */ r_edx = R32((u32)(r_edx*8+0x96de20u));
    /* 006ee72b: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 006ee72e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ee730: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ee733: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ee735: lea eax, [eax + ecx + 0xf0] */ r_eax = (u32)(r_eax+r_ecx+0xf0u);
    /* 006ee73c: push dword ptr [ecx + edx] */ { u32 v = R32((u32)(r_ecx+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006ee73f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee740: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6ee745u); f_00509590();
    /* 006ee745: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee748: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee74b: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 006ee751: mov dword ptr [ecx + ebx*4], eax */ W32((u32)(r_ecx+r_ebx*4), r_eax);
    /* 006ee754: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee757: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee75a: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006ee75e: cmp ebx, dword ptr [edx*8 + 0x96de24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx*8+0x96de24u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ee765: jb 0x6ee724 */ if (fC) goto L_006ee724;
L_006ee767:; BB(0x006ee767);
    /* 006ee767: fld dword ptr [0x96dddc] */ FPUSH(R_F32((u32)(0x96dddcu)));
    /* 006ee76d: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006ee770: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ee772: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006ee774:; BB(0x006ee774);
    /* 006ee774: fld dword ptr [0x96ddd8] */ FPUSH(R_F32((u32)(0x96ddd8u)));
    /* 006ee77a: movsx eax, word ptr [eax + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x78u));
    /* 006ee77e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee781: jl 0x6ee792 */ if ((fS!=fO)) goto L_006ee792;
L_006ee783:; BB(0x006ee783);
    /* 006ee783: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee786: jge 0x6ee792 */ if ((fS==fO)) goto L_006ee792;
L_006ee788:; BB(0x006ee788);
    /* 006ee788: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006ee78a: fld dword ptr [0x96ddd0] */ FPUSH(R_F32((u32)(0x96ddd0u)));
    /* 006ee790: jmp 0x6ee7a4 */ goto L_006ee7a4;
L_006ee792:; BB(0x006ee792);
    /* 006ee792: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee795: jl 0x6ee7a4 */ if ((fS!=fO)) goto L_006ee7a4;
L_006ee797:; BB(0x006ee797);
    /* 006ee797: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee79a: jge 0x6ee7a4 */ if ((fS==fO)) goto L_006ee7a4;
L_006ee79c:; BB(0x006ee79c);
    /* 006ee79c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006ee79e: fld dword ptr [0x96ddd4] */ FPUSH(R_F32((u32)(0x96ddd4u)));
L_006ee7a4:; BB(0x006ee7a4);
    /* 006ee7a4: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006ee7a7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006ee7a9: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006ee7ac: add esi, 0x2aaa */ {  u32 a = r_esi; u32 b = 0x2aaau; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ee7b2: mov ecx, esi */ r_ecx = r_esi;
    /* 006ee7b4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6ee7b9u); f_0082ddd8();
    /* 006ee7b9: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006ee7bc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee7bf: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 006ee7c2: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 006ee7c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee7c7: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006ee7ca: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee7cc: fstp dword ptr [ebx + ecx + 0xf0] */ W_F32((u32)(r_ebx+r_ecx+0xf0u), ST(0)); FPOP();
    /* 006ee7d3: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006ee7d6: mov dword ptr [ebx + ecx + 0xf4], edx */ W32((u32)(r_ebx+r_ecx+0xf4u), r_edx);
    /* 006ee7dd: mov ecx, esi */ r_ecx = r_esi;
    /* 006ee7df: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6ee7e4u); f_0082dcbc();
    /* 006ee7e4: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 006ee7e7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee7ea: fadd dword ptr [eax + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x28u));
    /* 006ee7ed: fstp dword ptr [ebx + eax + 0xf8] */ W_F32((u32)(r_ebx+r_eax+0xf8u), ST(0)); FPOP();
    /* 006ee7f4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ee7f7: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee7fa: jl 0x6ee774 */ if ((fS!=fO)) goto L_006ee774;
L_006ee800:; BB(0x006ee800);
    /* 006ee800: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ee802: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_006ee805:; BB(0x006ee805);
    /* 006ee805: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee808: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006ee80b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee80d: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006ee810: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ee812: mov esi, dword ptr [edx + eax + 0xf0] */ r_esi = R32((u32)(r_edx+r_eax+0xf0u));
    /* 006ee819: mov edi, dword ptr [edx + eax + 0xf4] */ r_edi = R32((u32)(r_edx+r_eax+0xf4u));
    /* 006ee820: mov ecx, dword ptr [edx + eax + 0xf8] */ r_ecx = R32((u32)(r_edx+r_eax+0xf8u));
    /* 006ee827: fld dword ptr [edx + eax + 0xfc] */ FPUSH(R_F32((u32)(r_edx+r_eax+0xfcu)));
    /* 006ee82e: fsub dword ptr [edx + eax + 0xf0] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax+0xf0u));
    /* 006ee835: fld dword ptr [edx + eax + 0x100] */ FPUSH(R_F32((u32)(r_edx+r_eax+0x100u)));
    /* 006ee83c: fsub dword ptr [edx + eax + 0xf4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax+0xf4u));
    /* 006ee843: fld dword ptr [edx + eax + 0x104] */ FPUSH(R_F32((u32)(r_edx+r_eax+0x104u)));
    /* 006ee84a: fsub dword ptr [edx + eax + 0xf8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax+0xf8u));
    /* 006ee851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006ee853: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 006ee856: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 006ee859: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 006ee85c: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 006ee85f: mov dword ptr [ebp - 0x4c], edi */ W32((u32)(r_ebp+0xffffffb4u), r_edi);
    /* 006ee862: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006ee865: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006ee868: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6ee86du); f_0083173c();
    /* 006ee86d: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006ee870: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006ee873: fcomp dword ptr [0x96dddc] */ fx_compare(ST(0), R_F32((u32)(0x96dddcu))); FPOP();
    /* 006ee879: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006ee87b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006ee87c: je 0x6ee888 */ if (fZ) goto L_006ee888;
L_006ee87e:; BB(0x006ee87e);
    /* 006ee87e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006ee881: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6ee886u); f_0082df08();
    /* 006ee886: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006ee888:; BB(0x006ee888);
    /* 006ee888: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006ee88f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee894: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ee899u); f_005caba4();
    /* 006ee899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ee89a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006ee89d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee89f: je 0x6ee8f6 */ if (fZ) goto L_006ee8f6;
L_006ee8a1:; BB(0x006ee8a1);
    /* 006ee8a1: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006ee8a8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ee8af: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 006ee8b5: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006ee8b8: lea ebx, [ebp - 0x50] */ r_ebx = (u32)(r_ebp+0xffffffb0u);
    /* 006ee8bb: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 006ee8be: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee8c1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006ee8c5: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006ee8cd: mov ecx, eax */ r_ecx = r_eax;
    /* 006ee8cf: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006ee8d7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ee8da: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006ee8de: mov dword ptr [esp + 0x18], 6 */ W32((u32)(r_esp+0x18u), 0x6u);
    /* 006ee8e6: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006ee8ea: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6ee8efu); f_006f3ba4();
    /* 006ee8ef: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006ee8f6:; BB(0x006ee8f6);
    /* 006ee8f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ee8fd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee900: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006ee904: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee907: je 0x6eea61 */ if (fZ) goto L_006eea61;
L_006ee90d:; BB(0x006ee90d);
    /* 006ee90d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee910: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ee913: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006ee916: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee919: jl 0x6ee805 */ if ((fS!=fO)) goto L_006ee805;
L_006ee91f:; BB(0x006ee91f);
    /* 006ee91f: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006ee923: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee925: je 0x6eea28 */ if (fZ) goto L_006eea28;
L_006ee92b:; BB(0x006ee92b);
    /* 006ee92b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee92e: je 0x6eea0e */ if (fZ) goto L_006eea0e;
L_006ee934:; BB(0x006ee934);
    /* 006ee934: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee937: jl 0x6ee9ab */ if ((fS!=fO)) goto L_006ee9ab;
L_006ee939:; BB(0x006ee939);
    /* 006ee939: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee93c: jle 0x6ee97a */ if ((fZ||fS!=fO)) goto L_006ee97a;
L_006ee93e:; BB(0x006ee93e);
    /* 006ee93e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee941: jne 0x6ee9d6 */ if (!fZ) goto L_006ee9d6;
L_006ee947:; BB(0x006ee947);
    /* 006ee947: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee94a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ee94c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee94d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee94e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee94f: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee954: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ee959u); f_00814298();
    /* 006ee959: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee95c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ee95e: jl 0x6ee975 */ if ((fS!=fO)) goto L_006ee975;
L_006ee960:; BB(0x006ee960);
    /* 006ee960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee962: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee968: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ee96du); f_00814664();
    /* 006ee96d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee970: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee973: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006ee975:; BB(0x006ee975);
    /* 006ee975: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee978: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006ee97a:; BB(0x006ee97a);
    /* 006ee97a: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee97d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ee97f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee980: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee982: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee987: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ee98cu); f_00814298();
    /* 006ee98c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee98f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ee991: jl 0x6ee9a8 */ if ((fS!=fO)) goto L_006ee9a8;
L_006ee993:; BB(0x006ee993);
    /* 006ee993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee995: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee99b: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ee9a0u); f_00814664();
    /* 006ee9a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee9a3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee9a6: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006ee9a8:; BB(0x006ee9a8);
    /* 006ee9a8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_006ee9ab:; BB(0x006ee9ab);
    /* 006ee9ab: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006ee9ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ee9b0: je 0x6ee9bd */ if (fZ) goto L_006ee9bd;
L_006ee9b2:; BB(0x006ee9b2);
    /* 006ee9b2: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ee9b6: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
L_006ee9bd:; BB(0x006ee9bd);
    /* 006ee9bd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ee9c0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ee9c3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ee9c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ee9c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ee9d0: mov esp, ebp */ r_esp = r_ebp;
    /* 006ee9d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee9d3: ret 0xc */ FN_RET(0x006ee674); r_esp += 16; return;
L_006ee9d6:; BB(0x006ee9d6);
    /* 006ee9d6: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee9d9: jne 0x6ee9ab */ if (!fZ) goto L_006ee9ab;
L_006ee9db:; BB(0x006ee9db);
    /* 006ee9db: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee9de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ee9e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e3: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ee9edu); f_00814298();
    /* 006ee9ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee9f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ee9f2: jl 0x6eea09 */ if ((fS!=fO)) goto L_006eea09;
L_006ee9f4:; BB(0x006ee9f4);
    /* 006ee9f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9f6: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9fc: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6eea01u); f_00814664();
    /* 006eea01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea04: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea07: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea09:; BB(0x006eea09);
    /* 006eea09: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea0c: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea0e:; BB(0x006eea0e);
    /* 006eea0e: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eea11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006eea13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eea16: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea1b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6eea20u); f_00814298();
    /* 006eea20: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea23: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea26: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea28:; BB(0x006eea28);
    /* 006eea28: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eea2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006eea2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eea30: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea35: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6eea3au); f_00814298();
    /* 006eea3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006eea3f: jl 0x6eea59 */ if ((fS!=fO)) goto L_006eea59;
L_006eea41:; BB(0x006eea41);
    /* 006eea41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea43: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eea49: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6eea4eu); f_00814664();
    /* 006eea4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea51: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea54: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea59:; BB(0x006eea59);
    /* 006eea59: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea5c: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea61:; BB(0x006eea61);
    /* 006eea61: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006eea68: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea6d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6eea72u); f_005caba4();
    /* 006eea72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eea73: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006eea76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eea78: je 0x6eeacf */ if (fZ) goto L_006eeacf;
L_006eea7a:; BB(0x006eea7a);
    /* 006eea7a: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006eea81: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006eea88: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 006eea8e: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006eea91: lea ebx, [ebp - 0x50] */ r_ebx = (u32)(r_ebp+0xffffffb0u);
    /* 006eea94: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 006eea97: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea9a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006eea9e: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006eeaa6: mov ecx, eax */ r_ecx = r_eax;
    /* 006eeaa8: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006eeab0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006eeab3: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006eeab7: mov dword ptr [esp + 0x18], 6 */ W32((u32)(r_esp+0x18u), 0x6u);
    /* 006eeabf: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006eeac3: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6eeac8u); f_006f3ba4();
    /* 006eeac8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006eeacf:; BB(0x006eeacf);
    /* 006eeacf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eead6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eead9: jmp 0x6ee90d */ goto L_006ee90d;
}

void f_006ee869(void)
{
    FN_ENTER(0x006ee869);
    goto L_006ee869;
L_006ee805:; BB(0x006ee805);
    /* 006ee805: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee808: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006ee80b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ee80d: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006ee810: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ee812: mov esi, dword ptr [edx + eax + 0xf0] */ r_esi = R32((u32)(r_edx+r_eax+0xf0u));
    /* 006ee819: mov edi, dword ptr [edx + eax + 0xf4] */ r_edi = R32((u32)(r_edx+r_eax+0xf4u));
    /* 006ee820: mov ecx, dword ptr [edx + eax + 0xf8] */ r_ecx = R32((u32)(r_edx+r_eax+0xf8u));
    /* 006ee827: fld dword ptr [edx + eax + 0xfc] */ FPUSH(R_F32((u32)(r_edx+r_eax+0xfcu)));
    /* 006ee82e: fsub dword ptr [edx + eax + 0xf0] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax+0xf0u));
    /* 006ee835: fld dword ptr [edx + eax + 0x100] */ FPUSH(R_F32((u32)(r_edx+r_eax+0x100u)));
    /* 006ee83c: fsub dword ptr [edx + eax + 0xf4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax+0xf4u));
    /* 006ee843: fld dword ptr [edx + eax + 0x104] */ FPUSH(R_F32((u32)(r_edx+r_eax+0x104u)));
    /* 006ee84a: fsub dword ptr [edx + eax + 0xf8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax+0xf8u));
    /* 006ee851: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006ee853: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 006ee856: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 006ee859: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 006ee85c: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 006ee85f: mov dword ptr [ebp - 0x4c], edi */ W32((u32)(r_ebp+0xffffffb4u), r_edi);
    /* 006ee862: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006ee865: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006ee868: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6ee86du); f_0083173c();
L_006ee869:; BB(0x006ee869);
    /* 006ee869: iretd  */ UNSUP(0x006ee869, "iretd ");
    /* 006ee86a: adc al, 0 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006ee86d: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006ee870: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006ee873: fcomp dword ptr [0x96dddc] */ fx_compare(ST(0), R_F32((u32)(0x96dddcu))); FPOP();
    /* 006ee879: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006ee87b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006ee87c: je 0x6ee888 */ if (fZ) goto L_006ee888;
L_006ee87e:; BB(0x006ee87e);
    /* 006ee87e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 006ee881: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6ee886u); f_0082df08();
    /* 006ee886: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006ee888:; BB(0x006ee888);
    /* 006ee888: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006ee88f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee894: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ee899u); f_005caba4();
    /* 006ee899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ee89a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006ee89d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee89f: je 0x6ee8f6 */ if (fZ) goto L_006ee8f6;
L_006ee8a1:; BB(0x006ee8a1);
    /* 006ee8a1: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006ee8a8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006ee8af: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 006ee8b5: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006ee8b8: lea ebx, [ebp - 0x50] */ r_ebx = (u32)(r_ebp+0xffffffb0u);
    /* 006ee8bb: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 006ee8be: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee8c1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006ee8c5: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006ee8cd: mov ecx, eax */ r_ecx = r_eax;
    /* 006ee8cf: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006ee8d7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ee8da: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006ee8de: mov dword ptr [esp + 0x18], 6 */ W32((u32)(r_esp+0x18u), 0x6u);
    /* 006ee8e6: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006ee8ea: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6ee8efu); f_006f3ba4();
    /* 006ee8ef: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006ee8f6:; BB(0x006ee8f6);
    /* 006ee8f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ee8fd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee900: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006ee904: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee907: je 0x6eea61 */ if (fZ) goto L_006eea61;
L_006ee90d:; BB(0x006ee90d);
    /* 006ee90d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ee910: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ee913: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006ee916: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee919: jl 0x6ee805 */ if ((fS!=fO)) goto L_006ee805;
L_006ee91f:; BB(0x006ee91f);
    /* 006ee91f: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006ee923: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee925: je 0x6eea28 */ if (fZ) goto L_006eea28;
L_006ee92b:; BB(0x006ee92b);
    /* 006ee92b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee92e: je 0x6eea0e */ if (fZ) goto L_006eea0e;
L_006ee934:; BB(0x006ee934);
    /* 006ee934: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee937: jl 0x6ee9ab */ if ((fS!=fO)) goto L_006ee9ab;
L_006ee939:; BB(0x006ee939);
    /* 006ee939: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ee93c: jle 0x6ee97a */ if ((fZ||fS!=fO)) goto L_006ee97a;
L_006ee93e:; BB(0x006ee93e);
    /* 006ee93e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee941: jne 0x6ee9d6 */ if (!fZ) goto L_006ee9d6;
L_006ee947:; BB(0x006ee947);
    /* 006ee947: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee94a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ee94c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee94d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee94e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee94f: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee954: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ee959u); f_00814298();
    /* 006ee959: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee95c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ee95e: jl 0x6ee975 */ if ((fS!=fO)) goto L_006ee975;
L_006ee960:; BB(0x006ee960);
    /* 006ee960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee962: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee968: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ee96du); f_00814664();
    /* 006ee96d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee970: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee973: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006ee975:; BB(0x006ee975);
    /* 006ee975: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee978: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006ee97a:; BB(0x006ee97a);
    /* 006ee97a: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee97d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ee97f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee980: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee982: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee987: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ee98cu); f_00814298();
    /* 006ee98c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee98f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ee991: jl 0x6ee9a8 */ if ((fS!=fO)) goto L_006ee9a8;
L_006ee993:; BB(0x006ee993);
    /* 006ee993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee995: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee99b: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ee9a0u); f_00814664();
    /* 006ee9a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee9a3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ee9a6: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006ee9a8:; BB(0x006ee9a8);
    /* 006ee9a8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_006ee9ab:; BB(0x006ee9ab);
    /* 006ee9ab: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006ee9ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ee9b0: je 0x6ee9bd */ if (fZ) goto L_006ee9bd;
L_006ee9b2:; BB(0x006ee9b2);
    /* 006ee9b2: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ee9b6: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
L_006ee9bd:; BB(0x006ee9bd);
    /* 006ee9bd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ee9c0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ee9c3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ee9c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ee9c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ee9d0: mov esp, ebp */ r_esp = r_ebp;
    /* 006ee9d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ee9d3: ret 0xc */ FN_RET(0x006ee869); r_esp += 16; return;
L_006ee9d6:; BB(0x006ee9d6);
    /* 006ee9d6: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ee9d9: jne 0x6ee9ab */ if (!fZ) goto L_006ee9ab;
L_006ee9db:; BB(0x006ee9db);
    /* 006ee9db: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ee9de: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ee9e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e3: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ee9edu); f_00814298();
    /* 006ee9ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ee9f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006ee9f2: jl 0x6eea09 */ if ((fS!=fO)) goto L_006eea09;
L_006ee9f4:; BB(0x006ee9f4);
    /* 006ee9f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9f6: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ee9fc: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6eea01u); f_00814664();
    /* 006eea01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea04: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea07: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea09:; BB(0x006eea09);
    /* 006eea09: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea0c: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea0e:; BB(0x006eea0e);
    /* 006eea0e: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eea11: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006eea13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eea16: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea1b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6eea20u); f_00814298();
    /* 006eea20: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea23: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea26: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea28:; BB(0x006eea28);
    /* 006eea28: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eea2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006eea2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eea2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eea30: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea35: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6eea3au); f_00814298();
    /* 006eea3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006eea3f: jl 0x6eea59 */ if ((fS!=fO)) goto L_006eea59;
L_006eea41:; BB(0x006eea41);
    /* 006eea41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea43: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eea49: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6eea4eu); f_00814664();
    /* 006eea4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea51: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea54: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea59:; BB(0x006eea59);
    /* 006eea59: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eea5c: jmp 0x6ee9ab */ goto L_006ee9ab;
L_006eea61:; BB(0x006eea61);
    /* 006eea61: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006eea68: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006eea6d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6eea72u); f_005caba4();
    /* 006eea72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eea73: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006eea76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eea78: je 0x6eeacf */ if (fZ) goto L_006eeacf;
L_006eea7a:; BB(0x006eea7a);
    /* 006eea7a: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006eea81: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006eea88: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 006eea8e: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006eea91: lea ebx, [ebp - 0x50] */ r_ebx = (u32)(r_ebp+0xffffffb0u);
    /* 006eea94: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 006eea97: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eea9a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006eea9e: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006eeaa6: mov ecx, eax */ r_ecx = r_eax;
    /* 006eeaa8: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006eeab0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006eeab3: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006eeab7: mov dword ptr [esp + 0x18], 6 */ W32((u32)(r_esp+0x18u), 0x6u);
    /* 006eeabf: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006eeac3: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6eeac8u); f_006f3ba4();
    /* 006eeac8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006eeacf:; BB(0x006eeacf);
    /* 006eeacf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eead6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006eead9: jmp 0x6ee90d */ goto L_006ee90d;
}

void f_006eeae0(void) /* sub_6EEAE0 */
{
    FN_ENTER(0x006eeae0);
    /* 006eeae0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eeae1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eeae4: mov edi, ecx */ r_edi = r_ecx;
    /* 006eeae6: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006eeaea: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eeaef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eeaf0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006eeaf2: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6eeaf7u); f_006ded14();
    /* 006eeaf7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eeafa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006eeafc: mov dword ptr [edi + 0x88], edx */ W32((u32)(r_edi+0x88u), r_edx);
    /* 006eeb02: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006eeb05: mov dword ptr [edi + 0x8c], edx */ W32((u32)(r_edi+0x8cu), r_edx);
    /* 006eeb0b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006eeb0e: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 006eeb14: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006eeb17: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 006eeb1d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006eeb20: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 006eeb26: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006eeb29: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 006eeb2f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006eeb32: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
    /* 006eeb38: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006eeb3b: mov dword ptr [edi + 0xa4], edx */ W32((u32)(r_edi+0xa4u), r_edx);
    /* 006eeb41: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006eeb44: mov dword ptr [edi + 0xa8], edx */ W32((u32)(r_edi+0xa8u), r_edx);
    /* 006eeb4a: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006eeb4d: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 006eeb53: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006eeb56: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006eeb5c: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006eeb60: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eeb63: jl 0x6eeb9a */ if ((fS!=fO)) goto L_006eeb9a;
L_006eeb65:; BB(0x006eeb65);
    /* 006eeb65: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6eeb6au); f_00687c48();
    /* 006eeb6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eeb6c: jne 0x6eeb96 */ if (!fZ) goto L_006eeb96;
L_006eeb6e:; BB(0x006eeb6e);
    /* 006eeb6e: movsx ecx, word ptr [0x9cf740] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf740u));
    /* 006eeb75: movsx edx, word ptr [0x9cf742] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf742u));
    /* 006eeb7c: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006eeb80: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006eeb83: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006eeb85: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006eeb88: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006eeb8b: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006eeb91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eeb94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eeb95: ret  */ FN_RET(0x006eeae0); r_esp += 4; return;
L_006eeb96:; BB(0x006eeb96);
    /* 006eeb96: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
L_006eeb9a:; BB(0x006eeb9a);
    /* 006eeb9a: movsx edx, word ptr [edi + 0xac] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xacu));
    /* 006eeba1: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006eeba4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006eeba8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006eebac: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 006eebb2: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006eebb8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6eebbdu); f_00687c48();
    /* 006eebbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eebbf: je 0x6eebd3 */ if (fZ) goto L_006eebd3;
L_006eebc1:; BB(0x006eebc1);
    /* 006eebc1: fld dword ptr [edi + 0x88] */ FPUSH(R_F32((u32)(r_edi+0x88u)));
    /* 006eebc7: fmul dword ptr [0x9cf7c0] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7c0u));
    /* 006eebcd: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
L_006eebd3:; BB(0x006eebd3);
    /* 006eebd3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eebd6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eebd7: ret  */ FN_RET(0x006eeae0); r_esp += 4; return;
}

void f_006eebd8(void) /* sub_6EEBD8 */
{
    FN_ENTER(0x006eebd8);
    /* 006eebd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eebd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eebda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eebdb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006eebdd: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 006eebe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eebe5: je 0x6eecbe */ if (fZ) goto L_006eecbe;
L_006eebeb:; BB(0x006eebeb);
    /* 006eebeb: movzx eax, word ptr [ebx + 0xb4] */ r_eax = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006eebf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eebf3: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6eebf8u); f_007b4d18();
    /* 006eebf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eebf9: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006eebfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eebfe: je 0x6eeccf */ if (fZ) goto L_006eeccf;
L_006eec04:; BB(0x006eec04);
    /* 006eec04: movsx edx, word ptr [ebx + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x7au));
    /* 006eec08: mov ecx, dword ptr [edx*8 + 0x96de24] */ r_ecx = R32((u32)(r_edx*8+0x96de24u));
    /* 006eec0f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006eec11: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006eec13: jbe 0x6eeca6 */ if ((fC||fZ)) goto L_006eeca6;
L_006eec19:; BB(0x006eec19);
    /* 006eec19: movzx edi, word ptr [ebx + 0xb4] */ r_edi = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006eec20: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eec23: jge 0x6eec52 */ if ((fS==fO)) goto L_006eec52;
L_006eec25:; BB(0x006eec25);
    /* 006eec25: mov edx, dword ptr [edx*8 + 0x96de20] */ r_edx = R32((u32)(r_edx*8+0x96de20u));
    /* 006eec2c: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eec31: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 006eec34: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006eec36: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 006eec39: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006eec3b: push dword ptr [edx + ecx] */ { u32 v = R32((u32)(r_edx+r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 006eec3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eec3f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6eec44u); f_0050b510();
    /* 006eec44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eec47: movsx edx, word ptr [ebx + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x7au));
    /* 006eec4b: mov ecx, dword ptr [edx*8 + 0x96de24] */ r_ecx = R32((u32)(r_edx*8+0x96de24u));
L_006eec52:; BB(0x006eec52);
    /* 006eec52: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006eec55: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006eec57: jae 0x6eeca6 */ if (!fC) goto L_006eeca6;
L_006eec59:; BB(0x006eec59);
    /* 006eec59: movzx eax, word ptr [ebx + 0xb4] */ r_eax = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006eec60: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006eec63: jge 0x6eec52 */ if ((fS==fO)) goto L_006eec52;
L_006eec65:; BB(0x006eec65);
    /* 006eec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eec68: je 0x6eec6f */ if (fZ) goto L_006eec6f;
L_006eec6a:; BB(0x006eec6a);
    /* 006eec6a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006eec6d: jmp 0x6eec25 */ goto L_006eec25;
L_006eec6f:; BB(0x006eec6f);
    /* 006eec6f: mov edx, dword ptr [edx*8 + 0x96de20] */ r_edx = R32((u32)(r_edx*8+0x96de20u));
    /* 006eec76: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006eec78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006eec7a: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006eec7d: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006eec83: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 006eec86: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006eec88: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 006eec8b: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006eec8d: push dword ptr [edx + eax] */ { u32 v = R32((u32)(r_edx+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006eec90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006eec91: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6eec96u); f_0050a984();
    /* 006eec96: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eec99: movsx edx, word ptr [ebx + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x7au));
    /* 006eec9d: mov ecx, dword ptr [edx*8 + 0x96de24] */ r_ecx = R32((u32)(r_edx*8+0x96de24u));
    /* 006eeca4: jmp 0x6eec52 */ goto L_006eec52;
L_006eeca6:; BB(0x006eeca6);
    /* 006eeca6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006eeca8: call 0x6deadc */ r_esp -= 4; W32(r_esp, 0x6eecadu); f_006deadc();
    /* 006eecad: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006eecb1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eecb6: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006eecba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eecbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eecbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eecbd: ret  */ FN_RET(0x006eebd8); r_esp += 4; return;
L_006eecbe:; BB(0x006eecbe);
    /* 006eecbe: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006eecc2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eecc7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006eeccb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eeccc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eeccd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eecce: ret  */ FN_RET(0x006eebd8); r_esp += 4; return;
L_006eeccf:; BB(0x006eeccf);
    /* 006eeccf: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006eecd3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eecd8: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006eecdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eecdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eecde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eecdf: ret  */ FN_RET(0x006eebd8); r_esp += 4; return;
}

void f_006eece0(void) /* sub_6EECE0 */
{
    FN_ENTER(0x006eece0);
    /* 006eece0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eece1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eece4: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006eecea: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006eecee: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006eecf1: mov dword ptr [esp], 3 */ W32((u32)(r_esp), 0x3u);
    /* 006eecf8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006eecfc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eecfe: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006eed00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006eed02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eed03: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006eed05: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006eed08: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006eed0a: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6eed0du); call_ind(t); }
    /* 006eed0d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006eed0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006eed12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eed13: ret 4 */ FN_RET(0x006eece0); r_esp += 8; return;
}

void f_006eed18(void) /* sub_6EED18 */
{
    FN_ENTER(0x006eed18);
    /* 006eed18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006eed19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eed1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eed1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eed1c: mov edi, ecx */ r_edi = r_ecx;
    /* 006eed1e: movzx eax, word ptr [edi + 0x7a] */ r_eax = (u32)R16((u32)(r_edi+0x7au));
    /* 006eed22: mov edx, dword ptr [eax*8 + 0x96de24] */ r_edx = R32((u32)(r_eax*8+0x96de24u));
    /* 006eed29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006eed2b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006eed2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006eed2e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6eed33u); f_008581c5();
    /* 006eed33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eed34: mov dword ptr [edi + 0xec], eax */ W32((u32)(r_edi+0xecu), r_eax);
    /* 006eed3a: movsx eax, word ptr [edi + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006eed3e: mov ebx, dword ptr [eax*8 + 0x96de24] */ r_ebx = R32((u32)(r_eax*8+0x96de24u));
    /* 006eed45: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006eed47: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eed49: jbe 0x6eeda2 */ if ((fC||fZ)) goto L_006eeda2;
L_006eed4b:; BB(0x006eed4b);
    /* 006eed4b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006eed4e: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006eed51: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006eed53: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006eed56: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006eed58: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006eed5b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006eed5d: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 006eed60: lea esi, [esi + ecx + 0xf0] */ r_esi = (u32)(r_esi+r_ecx+0xf0u);
    /* 006eed67: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006eed69: mov ebp, edi */ r_ebp = r_edi;
    /* 006eed6b: mov edi, edx */ r_edi = r_edx;
L_006eed6d:; BB(0x006eed6d);
    /* 006eed6d: mov eax, dword ptr [eax*8 + 0x96de20] */ r_eax = R32((u32)(r_eax*8+0x96de20u));
    /* 006eed74: push dword ptr [ebx + eax] */ { u32 v = R32((u32)(r_ebx+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006eed77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006eed78: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6eed7du); f_00509590();
    /* 006eed7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eed80: mov ecx, dword ptr [ebp + 0xec] */ r_ecx = R32((u32)(r_ebp+0xecu));
    /* 006eed86: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 006eed89: movsx eax, word ptr [ebp + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x7au));
    /* 006eed8d: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006eed90: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006eed93: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006eed96: cmp edi, dword ptr [eax*8 + 0x96de24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax*8+0x96de24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006eed9d: jb 0x6eed6d */ if (fC) goto L_006eed6d;
L_006eed9f:; BB(0x006eed9f);
    /* 006eed9f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006eeda2:; BB(0x006eeda2);
    /* 006eeda2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eeda3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eeda4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006eeda5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006eeda6: ret 4 */ FN_RET(0x006eed18); r_esp += 8; return;
}

void f_006eedac(void) /* sub_6EEDAC */
{
    FN_ENTER(0x006eedac);
    /* 006eedac: mov dword ptr [0xa96874], 0x3f800000 */ W32((u32)(0xa96874u), 0x3f800000u);
    /* 006eedb6: mov dword ptr [0xa96878], 0x41000000 */ W32((u32)(0xa96878u), 0x41000000u);
    /* 006eedc0: mov dword ptr [0xa9687c], 0x3fc00000 */ W32((u32)(0xa9687cu), 0x3fc00000u);
    /* 006eedca: ret  */ FN_RET(0x006eedac); r_esp += 4; return;
}

void f_006eedcc(void) /* sub_6EEDCC */
{
    FN_ENTER(0x006eedcc);
    /* 006eedcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eedcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006eedcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006eedd1: call 0x6eedf0 */ r_esp -= 4; W32(r_esp, 0x6eedd6u); f_006eedf0();
    /* 006eedd6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006eedda: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eeddc: jne 0x6eede2 */ if (!fZ) goto L_006eede2;
L_006eedde:; BB(0x006eedde);
    /* 006eedde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eeddf: ret 4 */ FN_RET(0x006eedcc); r_esp += 8; return;
L_006eede2:; BB(0x006eede2);
    /* 006eede2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eede3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6eede8u); f_005c2f74();
    /* 006eede8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eede9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eedea: ret 4 */ FN_RET(0x006eedcc); r_esp += 8; return;
}

void f_006eedf0(void) /* sub_6EEDF0 */
{
    FN_ENTER(0x006eedf0);
    /* 006eedf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eedf1: mov ebp, esp */ r_ebp = r_esp;
    /* 006eedf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eedf5: push 0x8ef818 */ { u32 v = 0x8ef818u; r_esp -= 4; W32(r_esp, v); }
    /* 006eedfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eee00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eee01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eee08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eee0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eee0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006eee11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006eee14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006eee17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006eee1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eee1d: mov dword ptr [ecx], 0xb3e258 */ W32((u32)(r_ecx), 0xb3e258u);
    /* 006eee23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006eee2a: call 0x6ebcf0 */ r_esp -= 4; W32(r_esp, 0x6eee2fu); f_006ebcf0();
    /* 006eee2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006eee32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006eee39: mov esp, ebp */ r_esp = r_ebp;
    /* 006eee3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eee3c: ret  */ FN_RET(0x006eedf0); r_esp += 4; return;
}

void f_006eee40(void) /* sub_6EEE40 */
{
    FN_ENTER(0x006eee40);
    /* 006eee40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eee41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006eee43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006eee45: call 0x6eee64 */ r_esp -= 4; W32(r_esp, 0x6eee4au); f_006eee64();
    /* 006eee4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006eee4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eee50: jne 0x6eee56 */ if (!fZ) goto L_006eee56;
L_006eee52:; BB(0x006eee52);
    /* 006eee52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eee53: ret 4 */ FN_RET(0x006eee40); r_esp += 8; return;
L_006eee56:; BB(0x006eee56);
    /* 006eee56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006eee57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6eee5cu); f_005c2f74();
    /* 006eee5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eee5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006eee5e: ret 4 */ FN_RET(0x006eee40); r_esp += 8; return;
}

void f_006eee64(void) /* sub_6EEE64 */
{
    FN_ENTER(0x006eee64);
    /* 006eee64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eee65: mov ebp, esp */ r_ebp = r_esp;
    /* 006eee67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eee69: push 0x8ef834 */ { u32 v = 0x8ef834u; r_esp -= 4; W32(r_esp, v); }
    /* 006eee6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eee74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eee75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eee7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eee7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eee82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006eee85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006eee88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006eee8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006eee8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eee91: mov dword ptr [ecx], 0xb3e270 */ W32((u32)(r_ecx), 0xb3e270u);
    /* 006eee97: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006eee9e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6eeea3u); f_008171e8();
    /* 006eeea3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006eeea6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006eeead: mov esp, ebp */ r_esp = r_ebp;
    /* 006eeeaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eeeb0: ret  */ FN_RET(0x006eee64); r_esp += 4; return;
}

void f_006eeeb4(void) /* sub_6EEEB4 */
{
    FN_ENTER(0x006eeeb4);
    /* 006eeeb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eeeb5: mov ebp, esp */ r_ebp = r_esp;
    /* 006eeeb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eeeb9: push 0x8ef85c */ { u32 v = 0x8ef85cu; r_esp -= 4; W32(r_esp, v); }
    /* 006eeebe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eeec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eeec5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eeecc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eeecf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eeed2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006eeed5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006eeed8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006eeedb: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006eeee0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006eeee7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6eeeecu); f_005caba4();
    /* 006eeeec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006eeeed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006eeef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eeef2: je 0x6eef1a */ if (fZ) goto L_006eef1a;
L_006eeef4:; BB(0x006eeef4);
    /* 006eeef4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006eeefb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eef02: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eef05: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006eef08: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eef0b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eef0e: call 0x6eef28 */ r_esp -= 4; W32(r_esp, 0x6eef13u); f_006eef28();
    /* 006eef13: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006eef1a:; BB(0x006eef1a);
    /* 006eef1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006eef1d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006eef24: mov esp, ebp */ r_esp = r_ebp;
    /* 006eef26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006eef27: ret  */ FN_RET(0x006eeeb4); r_esp += 4; return;
}

void f_006eef28(void) /* sub_6EEF28 */
{
    FN_ENTER(0x006eef28);
    /* 006eef28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006eef29: mov ebp, esp */ r_ebp = r_esp;
    /* 006eef2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006eef2d: push 0x8ef878 */ { u32 v = 0x8ef878u; r_esp -= 4; W32(r_esp, v); }
    /* 006eef32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006eef38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eef39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006eef40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006eef43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006eef46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006eef49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006eef4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006eef4f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eef52: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006eef55: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006eef58: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006eef5b: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6eef60u); f_006ebd58();
    /* 006eef60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006eef67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eef6a: mov dword ptr [eax], 0xb3e258 */ W32((u32)(r_eax), 0xb3e258u);
    /* 006eef70: lea esi, [eax + 0xe4] */ r_esi = (u32)(r_eax+0xe4u);
    /* 006eef76: mov edi, 0xb */ r_edi = 0xbu;
    /* 006eef7b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006eef7d:; BB(0x006eef7d);
    /* 006eef7d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006eef82: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 006eef85: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006eef87: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 006eef8b: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006eef8e: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006eef91: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006eef94: jne 0x6eef7d */ if (!fZ) goto L_006eef7d;
L_006eef96:; BB(0x006eef96);
    /* 006eef96: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006eef98: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 006eef9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eefa1: mov eax, dword ptr [0x9cf9bc] */ r_eax = R32((u32)(0x9cf9bcu));
    /* 006eefa6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006eefa9: mov dword ptr [ecx + 0x13c], edx */ W32((u32)(r_ecx+0x13cu), r_edx);
    /* 006eefaf: call 0x6ef020 */ r_esp -= 4; W32(r_esp, 0x6eefb4u); f_006ef020();
    /* 006eefb4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eefb7: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 006eefbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eefbf: je 0x6eefd6 */ if (fZ) goto L_006eefd6;
L_006eefc1:; BB(0x006eefc1);
    /* 006eefc1: fld dword ptr [0x96de6c] */ FPUSH(R_F32((u32)(0x96de6cu)));
    /* 006eefc7: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 006eefca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eefcd: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006eefd3: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_006eefd6:; BB(0x006eefd6);
    /* 006eefd6: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006eefd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eefdb: je 0x6eefe8 */ if (fZ) goto L_006eefe8;
L_006eefdd:; BB(0x006eefdd);
    /* 006eefdd: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006eefe1: mov word ptr [ecx + 0xa8], ax */ W16((u32)(r_ecx+0xa8u), (u16)r_eax);
L_006eefe8:; BB(0x006eefe8);
    /* 006eefe8: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 006eefee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006eeff0: je 0x6ef002 */ if (fZ) goto L_006ef002;
L_006eeff2:; BB(0x006eeff2);
    /* 006eeff2: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6eeff7u); f_006ec06c();
    /* 006eeff7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006eeffa: call 0x6ef0cc */ r_esp -= 4; W32(r_esp, 0x6eefffu); f_006ef0cc();
    /* 006eefff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006ef002:; BB(0x006ef002);
    /* 006ef002: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ef005: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ef008: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ef00b: mov eax, ecx */ r_eax = r_ecx;
    /* 006ef00d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ef010: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ef017: mov esp, ebp */ r_esp = r_ebp;
    /* 006ef019: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ef01a: ret 0xc */ FN_RET(0x006eef28); r_esp += 16; return;
}

