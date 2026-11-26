#include "protos.h"

void f_0043e134(void) /* sub_43E134 */
{
    FN_ENTER(0x0043e134);
    /* 0043e134: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e135: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e138: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043e13a: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0043e140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e142: je 0x43e277 */ if (fZ) goto L_0043e277;
L_0043e148:; BB(0x0043e148);
    /* 0043e148: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e14b: je 0x43e1f3 */ if (fZ) goto L_0043e1f3;
L_0043e151:; BB(0x0043e151);
    /* 0043e151: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e154: je 0x43e1af */ if (fZ) goto L_0043e1af;
L_0043e156:; BB(0x0043e156);
    /* 0043e156: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e159: jne 0x43e17d */ if (!fZ) goto L_0043e17d;
L_0043e15b:; BB(0x0043e15b);
    /* 0043e15b: mov eax, dword ptr [ebx + 0x38c] */ r_eax = R32((u32)(r_ebx+0x38cu));
    /* 0043e161: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e164: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 0043e16a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043e16c: jg 0x43e1bc */ if ((!fZ&&fS==fO)) goto L_0043e1bc;
L_0043e16e:; BB(0x0043e16e);
    /* 0043e16e: mov dword ptr [ebx + 0x37c], 2 */ W32((u32)(r_ebx+0x37cu), 0x2u);
    /* 0043e178: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e17b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e17c: ret  */ FN_RET(0x0043e134); r_esp += 4; return;
L_0043e17d:; BB(0x0043e17d);
    /* 0043e17d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e180: jne 0x43e1bc */ if (!fZ) goto L_0043e1bc;
L_0043e182:; BB(0x0043e182);
    /* 0043e182: movzx eax, word ptr [0x9a4e08] */ r_eax = (u32)R16((u32)(0x9a4e08u));
    /* 0043e189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e18a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e18fu); f_007b4d18();
    /* 0043e18f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e192: je 0x43e19b */ if (fZ) goto L_0043e19b;
L_0043e194:; BB(0x0043e194);
    /* 0043e194: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e196: call 0x44126c */ r_esp -= 4; W32(r_esp, 0x43e19bu); f_0044126c();
L_0043e19b:; BB(0x0043e19b);
    /* 0043e19b: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x43e1a0u); f_00717f38();
    /* 0043e1a0: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x43e1a5u); f_004d3250();
    /* 0043e1a5: call 0x6944b8 */ r_esp -= 4; W32(r_esp, 0x43e1aau); f_006944b8();
    /* 0043e1aa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e1ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e1ae: ret  */ FN_RET(0x0043e134); r_esp += 4; return;
L_0043e1af:; BB(0x0043e1af);
    /* 0043e1af: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x43e1b4u); f_004d6864();
    /* 0043e1b4: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 0043e1b8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043e1ba: jne 0x43e1c1 */ if (!fZ) goto L_0043e1c1;
L_0043e1bc:; BB(0x0043e1bc);
    /* 0043e1bc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e1bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e1c0: ret  */ FN_RET(0x0043e134); r_esp += 4; return;
L_0043e1c1:; BB(0x0043e1c1);
    /* 0043e1c1: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043e1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1c9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e1ceu); f_007b4d18();
    /* 0043e1ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e1cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e1d1: je 0x43e1da */ if (fZ) goto L_0043e1da;
L_0043e1d3:; BB(0x0043e1d3);
    /* 0043e1d3: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e1d5: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x43e1dau); f_0052ca40();
L_0043e1da:; BB(0x0043e1da);
    /* 0043e1da: mov dword ptr [ebx + 0x38c], 0x5a */ W32((u32)(r_ebx+0x38cu), 0x5au);
    /* 0043e1e4: mov dword ptr [ebx + 0x384], 3 */ W32((u32)(r_ebx+0x384u), 0x3u);
    /* 0043e1ee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e1f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e1f2: ret  */ FN_RET(0x0043e134); r_esp += 4; return;
L_0043e1f3:; BB(0x0043e1f3);
    /* 0043e1f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043e1f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1f9: push 0x33c */ { u32 v = 0x33cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e1fe: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43e203u); f_008144b0();
    /* 0043e203: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e206: mov eax, dword ptr [ebx + 0x38c] */ r_eax = R32((u32)(r_ebx+0x38cu));
    /* 0043e20c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e20f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043e211: jle 0x43e21e */ if ((fZ||fS!=fO)) goto L_0043e21e;
L_0043e213:; BB(0x0043e213);
    /* 0043e213: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 0043e219: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e21c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e21d: ret  */ FN_RET(0x0043e134); r_esp += 4; return;
L_0043e21e:; BB(0x0043e21e);
    /* 0043e21e: mov dword ptr [ebx + 0x38c], 0x3c */ W32((u32)(r_ebx+0x38cu), 0x3cu);
    /* 0043e228: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e22a: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0043e234: call 0x5bd010 */ r_esp -= 4; W32(r_esp, 0x43e239u); f_005bd010();
    /* 0043e239: mov byte ptr [esp + 0x10], 1 */ W8((u32)(r_esp+0x10u), 0x1u);
    /* 0043e23e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043e240: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 0043e244: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0043e24c: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0043e251: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 0043e259: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e25b: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x43e260u); f_004d31f4();
    /* 0043e260: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0043e264: push 0x271c */ { u32 v = 0x271cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e26a: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x43e26fu); f_004d6770();
    /* 0043e26f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e272: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e275: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e276: ret  */ FN_RET(0x0043e134); r_esp += 4; return;
L_0043e277:; BB(0x0043e277);
    /* 0043e277: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043e279: call 0x43ee2c */ r_esp -= 4; W32(r_esp, 0x43e27eu); f_0043ee2c();
    /* 0043e27e: call 0x69448c */ r_esp -= 4; W32(r_esp, 0x43e283u); f_0069448c();
    /* 0043e283: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x43e288u); f_00717f74();
    /* 0043e288: movzx eax, word ptr [0x9a4e08] */ r_eax = (u32)R16((u32)(0x9a4e08u));
    /* 0043e28f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e290: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e295u); f_007b4d18();
    /* 0043e295: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e296: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e298: je 0x43e2a1 */ if (fZ) goto L_0043e2a1;
L_0043e29a:; BB(0x0043e29a);
    /* 0043e29a: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e29c: call 0x44127c */ r_esp -= 4; W32(r_esp, 0x43e2a1u); f_0044127c();
L_0043e2a1:; BB(0x0043e2a1);
    /* 0043e2a1: mov dword ptr [ebx + 0x38c], 0xd2 */ W32((u32)(r_ebx+0x38cu), 0xd2u);
    /* 0043e2ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2ad: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2af: call 0x5bd1a8 */ r_esp -= 4; W32(r_esp, 0x43e2b4u); f_005bd1a8();
    /* 0043e2b4: mov byte ptr [esp + 8], 1 */ W8((u32)(r_esp+0x8u), 0x1u);
    /* 0043e2b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043e2bb: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 0043e2bf: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0043e2c7: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0043e2cc: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0043e2d4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2d6: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x43e2dbu); f_004d31f4();
    /* 0043e2db: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0043e2df: push 0x271c */ { u32 v = 0x271cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e2e5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x43e2eau); f_004d6770();
    /* 0043e2ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e2ed: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 0043e2f7: jmp 0x43e1f3 */ goto L_0043e1f3;
}

void f_0043e2fc(void) /* sub_43E2FC */
{
    FN_ENTER(0x0043e2fc);
    /* 0043e2fc: call 0x44a36c */ r_esp -= 4; W32(r_esp, 0x43e301u); f_0044a36c();
    /* 0043e301: mov ecx, dword ptr [0xa447bc] */ r_ecx = R32((u32)(0xa447bcu));
    /* 0043e307: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e309: je 0x43e31e */ if (fZ) goto L_0043e31e;
L_0043e30b:; BB(0x0043e30b);
    /* 0043e30b: je 0x43e314 */ if (fZ) goto L_0043e314;
L_0043e30d:; BB(0x0043e30d);
    /* 0043e30d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e30f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x43e314u); f_004066a8();
L_0043e314:; BB(0x0043e314);
    /* 0043e314: mov dword ptr [0xa447bc], 0 */ W32((u32)(0xa447bcu), 0x0u);
L_0043e31e:; BB(0x0043e31e);
    /* 0043e31e: call 0x443d00 */ r_esp -= 4; W32(r_esp, 0x43e323u); f_00443d00();
    /* 0043e323: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x43e328u); f_0061cdb0();
    /* 0043e328: call 0x448480 */ r_esp -= 4; W32(r_esp, 0x43e32du); f_00448480();
    /* 0043e32d: call 0x441238 */ r_esp -= 4; W32(r_esp, 0x43e332u); f_00441238();
    /* 0043e332: call 0x441fc8 */ r_esp -= 4; W32(r_esp, 0x43e337u); f_00441fc8();
    /* 0043e337: ret  */ FN_RET(0x0043e2fc); r_esp += 4; return;
}

void f_0043e338(void)
{
    FN_ENTER(0x0043e338);
    /* 0043e338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e339: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e33b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e33d: push 0x8ce384 */ { u32 v = 0x8ce384u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e342: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043e348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e349: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043e350: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e353: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043e356: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043e359: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043e35c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043e35f: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e364: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0043e36b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43e370u); f_005caba4();
    /* 0043e370: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e371: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043e374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e376: je 0x43e3a9 */ if (fZ) goto L_0043e3a9;
L_0043e378:; BB(0x0043e378);
    /* 0043e378: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0043e37f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043e386: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043e389: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043e38c: call 0x43e3b0 */ r_esp -= 4; W32(r_esp, 0x43e391u); f_0043e3b0();
    /* 0043e391: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043e394: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0043e39b:; BB(0x0043e39b);
    /* 0043e39b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e39e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043e3a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e3a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e3a8: ret  */ FN_RET(0x0043e338); r_esp += 4; return;
L_0043e3a9:; BB(0x0043e3a9);
    /* 0043e3a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e3ab: jmp 0x43e39b */ goto L_0043e39b;
}

void f_0043e3b0(void) /* sub_43E3B0 */
{
    FN_ENTER(0x0043e3b0);
    /* 0043e3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043e3b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3b5: push 0x8ce3a0 */ { u32 v = 0x8ce3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043e3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e3c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043e3c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e3cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043e3ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0043e3d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0043e3d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0043e3d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043e3da: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043e3e0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043e3e3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043e3e6: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x43e3ebu); f_0052c3fc();
    /* 0043e3eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043e3f2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043e3f5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043e3f8: mov dword ptr [ecx], 0xaf5540 */ W32((u32)(r_ecx), 0xaf5540u);
    /* 0043e3fe: mov eax, dword ptr [0x9a4de8] */ r_eax = R32((u32)(0x9a4de8u));
    /* 0043e403: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e404: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0043e407: call dword ptr [0xaf568c] */ { u32 t = R32((u32)(0xaf568cu)); r_esp -= 4; W32(r_esp, 0x43e40du); call_ind(t); }
    /* 0043e40d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043e410: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x43e415u); f_007b4f54();
    /* 0043e415: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e417: call 0x43e954 */ r_esp -= 4; W32(r_esp, 0x43e41cu); f_0043e954();
    /* 0043e41c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043e41f: mov eax, dword ptr [0xa447b0] */ r_eax = R32((u32)(0xa447b0u));
    /* 0043e424: mov edx, dword ptr [0xa447b4] */ r_edx = R32((u32)(0xa447b4u));
    /* 0043e42a: mov ecx, dword ptr [0xa447b8] */ r_ecx = R32((u32)(0xa447b8u));
    /* 0043e430: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0043e436: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0043e43c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043e43f: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e441: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0043e447: mov esi, dword ptr [edx + 0x300] */ r_esi = R32((u32)(r_edx+0x300u));
    /* 0043e44d: mov edi, dword ptr [edx + 0x304] */ r_edi = R32((u32)(r_edx+0x304u));
    /* 0043e453: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 0043e459: mov dword ptr [edx + 0x38], esi */ W32((u32)(r_edx+0x38u), r_esi);
    /* 0043e45c: mov dword ptr [edx + 0x3c], edi */ W32((u32)(r_edx+0x3cu), r_edi);
    /* 0043e45f: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0043e462: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043e465: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0043e468: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043e46d: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0043e470: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 0043e474: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e477: mov word ptr [0x9a4dec], ax */ W16((u32)(0x9a4decu), (u16)r_eax);
    /* 0043e47d: movsx eax, word ptr [edx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2cu));
    /* 0043e481: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e484: mov dword ptr [0x9a4df0], eax */ W32((u32)(0x9a4df0u), r_eax);
    /* 0043e489: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043e48b: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 0043e491: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
    /* 0043e498: mov dword ptr [edx + 0x3c4], eax */ W32((u32)(r_edx+0x3c4u), r_eax);
    /* 0043e49e: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x43e4a3u); f_006bb100();
    /* 0043e4a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e4a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043e4a9: mov dword ptr [0xa447c4], 0 */ W32((u32)(0xa447c4u), 0x0u);
    /* 0043e4b3: mov dword ptr [0xa44790], 0xffffffff */ W32((u32)(0xa44790u), 0xffffffffu);
    /* 0043e4bd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043e4bf: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x43e4c5u); call_ind(t); }
    /* 0043e4c5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043e4c8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043e4cb: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043e4ce: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043e4d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043e4d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043e4db: mov esp, ebp */ r_esp = r_ebp;
    /* 0043e4dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e4de: ret 4 */ FN_RET(0x0043e3b0); r_esp += 8; return;
}

void f_0043e4e4(void) /* sub_43E4E4 */
{
    FN_ENTER(0x0043e4e4);
    /* 0043e4e4: mov eax, dword ptr [0xa447c4] */ r_eax = R32((u32)(0xa447c4u));
    /* 0043e4e9: ret  */ FN_RET(0x0043e4e4); r_esp += 4; return;
}

void f_0043e4ec(void) /* sub_43E4EC */
{
    FN_ENTER(0x0043e4ec);
    /* 0043e4ec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0043e4f0: mov dword ptr [0xa447c4], eax */ W32((u32)(0xa447c4u), r_eax);
    /* 0043e4f5: ret  */ FN_RET(0x0043e4ec); r_esp += 4; return;
}

void f_0043e4f8(void) /* sub_43E4F8 */
{
    FN_ENTER(0x0043e4f8);
    /* 0043e4f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e4f9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e4fc: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0043e500: movsx eax, word ptr [edi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 0043e504: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043e507: ja 0x43e652 */ if ((!fC&&!fZ)) goto L_0043e652;
L_0043e50d:; BB(0x0043e50d);
    /* 0043e50d: mov eax, dword ptr [eax*4 + 0x8fdb94] */ r_eax = R32((u32)(r_eax*4+0x8fdb94u));
    /* 0043e514: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e4f8); r_esp += 4; return;
}

void f_0043e516(void)
{
    FN_ENTER(0x0043e516);
    /* 0043e516: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043e51d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e51e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e523u); f_007b4d18();
    /* 0043e523: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e524: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e526: je 0x43e652 */ if (fZ) goto L_0043e652;
L_0043e52c:; BB(0x0043e52c);
    /* 0043e52c: movsx edx, word ptr [edi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 0043e530: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e531: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0043e535: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0043e539: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043e53c: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e53e: call 0x448da4 */ r_esp -= 4; W32(r_esp, 0x43e543u); f_00448da4();
    /* 0043e543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e546: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e547: ret  */ FN_RET(0x0043e516); r_esp += 4; return;
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e516); r_esp += 4; return;
}

void f_0043e548(void)
{
    FN_ENTER(0x0043e548);
    /* 0043e548: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043e54f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e550: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e555u); f_007b4d18();
    /* 0043e555: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e556: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e558: je 0x43e652 */ if (fZ) goto L_0043e652;
L_0043e55e:; BB(0x0043e55e);
    /* 0043e55e: movzx edx, word ptr [edi + 6] */ r_edx = (u32)R16((u32)(r_edi+0x6u));
    /* 0043e562: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e563: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e565: call 0x44858c */ r_esp -= 4; W32(r_esp, 0x43e56au); f_0044858c();
    /* 0043e56a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e56d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e56e: ret  */ FN_RET(0x0043e548); r_esp += 4; return;
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e548); r_esp += 4; return;
}

void f_0043e56f(void)
{
    FN_ENTER(0x0043e56f);
    /* 0043e56f: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043e576: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e577: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e57cu); f_007b4d18();
    /* 0043e57c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e57d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e57f: je 0x43e652 */ if (fZ) goto L_0043e652;
L_0043e585:; BB(0x0043e585);
    /* 0043e585: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e587: call 0x448538 */ r_esp -= 4; W32(r_esp, 0x43e58cu); f_00448538();
    /* 0043e58c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e58f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e590: ret  */ FN_RET(0x0043e56f); r_esp += 4; return;
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e56f); r_esp += 4; return;
}

void f_0043e591(void)
{
    FN_ENTER(0x0043e591);
    /* 0043e591: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043e598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e599: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e59eu); f_007b4d18();
    /* 0043e59e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e59f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e5a1: je 0x43e652 */ if (fZ) goto L_0043e652;
L_0043e5a7:; BB(0x0043e5a7);
    /* 0043e5a7: movzx edx, word ptr [edi + 6] */ r_edx = (u32)R16((u32)(r_edi+0x6u));
    /* 0043e5ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5ac: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e5ae: call 0x4484c4 */ r_esp -= 4; W32(r_esp, 0x43e5b3u); f_004484c4();
    /* 0043e5b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e5b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e5b7: ret  */ FN_RET(0x0043e591); r_esp += 4; return;
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e591); r_esp += 4; return;
}

void f_0043e5b8(void)
{
    FN_ENTER(0x0043e5b8);
    /* 0043e5b8: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043e5bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5c0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e5c5u); f_007b4d18();
    /* 0043e5c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e5c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e5c8: je 0x43e652 */ if (fZ) goto L_0043e652;
L_0043e5ce:; BB(0x0043e5ce);
    /* 0043e5ce: movzx edx, word ptr [edi + 6] */ r_edx = (u32)R16((u32)(r_edi+0x6u));
    /* 0043e5d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5d3: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e5d5: call 0x4485e4 */ r_esp -= 4; W32(r_esp, 0x43e5dau); f_004485e4();
    /* 0043e5da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e5dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e5de: ret  */ FN_RET(0x0043e5b8); r_esp += 4; return;
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e5b8); r_esp += 4; return;
}

void f_0043e5df(void)
{
    FN_ENTER(0x0043e5df);
    /* 0043e5df: movzx eax, word ptr [0x9a4e08] */ r_eax = (u32)R16((u32)(0x9a4e08u));
    /* 0043e5e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e5e7: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e5ecu); f_007b4d18();
    /* 0043e5ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e5ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e5ef: je 0x43e5f8 */ if (fZ) goto L_0043e5f8;
L_0043e5f1:; BB(0x0043e5f1);
    /* 0043e5f1: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e5f3: call 0x440a58 */ r_esp -= 4; W32(r_esp, 0x43e5f8u); f_00440a58();
L_0043e5f8:; BB(0x0043e5f8);
    /* 0043e5f8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0043e5fa:; BB(0x0043e5fa);
    /* 0043e5fa: movzx eax, word ptr [edi + 0x9a4df4] */ r_eax = (u32)R16((u32)(r_edi+0x9a4df4u));
    /* 0043e601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e602: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e607u); f_007b4d18();
    /* 0043e607: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e60a: je 0x43e613 */ if (fZ) goto L_0043e613;
L_0043e60c:; BB(0x0043e60c);
    /* 0043e60c: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e60e: call 0x442e8c */ r_esp -= 4; W32(r_esp, 0x43e613u); f_00442e8c();
L_0043e613:; BB(0x0043e613);
    /* 0043e613: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043e616: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e619: jl 0x43e5fa */ if ((fS!=fO)) goto L_0043e5fa;
L_0043e61b:; BB(0x0043e61b);
    /* 0043e61b: jmp 0x43e652 */ goto L_0043e652;
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e5df); r_esp += 4; return;
}

void f_0043e61d(void)
{
    FN_ENTER(0x0043e61d);
    /* 0043e61d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e61f: call 0x43ffe4 */ r_esp -= 4; W32(r_esp, 0x43e624u); f_0043ffe4();
    /* 0043e624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e625: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e628: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e629: ret  */ FN_RET(0x0043e61d); r_esp += 4; return;
}

void f_0043e62a(void)
{
    FN_ENTER(0x0043e62a);
    /* 0043e62a: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043e631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e632: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e637u); f_007b4d18();
    /* 0043e637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e63a: je 0x43e652 */ if (fZ) goto L_0043e652;
L_0043e63c:; BB(0x0043e63c);
    /* 0043e63c: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e641: movsx edx, word ptr [edi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 0043e645: movsx edi, word ptr [edi + 0xa] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 0043e649: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e64b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e64c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e64d: call 0x43ff1c */ r_esp -= 4; W32(r_esp, 0x43e652u); f_0043ff1c();
L_0043e652:; BB(0x0043e652);
    /* 0043e652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e655: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043e656: ret  */ FN_RET(0x0043e62a); r_esp += 4; return;
}

void f_0043e658(void) /* sub_43E658 */
{
    FN_ENTER(0x0043e658);
    /* 0043e658: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e659: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e65a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0043e65e: mov eax, 0xa44768 */ r_eax = 0xa44768u;
    /* 0043e663: lea ebx, [edx + 4] */ r_ebx = (u32)(r_edx+0x4u);
    /* 0043e666: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0043e668: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0043e66a: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0043e66e: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0043e672: movsx ebx, word ptr [edx + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 0043e676: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e678: je 0x43e6db */ if (fZ) goto L_0043e6db;
L_0043e67a:; BB(0x0043e67a);
    /* 0043e67a: movzx eax, byte ptr [0xa44768] */ r_eax = (u32)R8((u32)(0xa44768u));
    /* 0043e681: movzx edx, word ptr [eax*2 + 0x9a4df4] */ r_edx = (u32)R16((u32)(r_eax*2+0x9a4df4u));
    /* 0043e689: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e68a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e68fu); f_007b4d18();
    /* 0043e68f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e690: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e692: je 0x43e69d */ if (fZ) goto L_0043e69d;
L_0043e694:; BB(0x0043e694);
    /* 0043e694: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e696: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e698: call 0x443d30 */ r_esp -= 4; W32(r_esp, 0x43e69du); f_00443d30();
L_0043e69d:; BB(0x0043e69d);
    /* 0043e69d: mov eax, 1 */ r_eax = 0x1u;
    /* 0043e6a2: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043e6a5: jle 0x43e6db */ if ((fZ||fS!=fO)) goto L_0043e6db;
L_0043e6a7:; BB(0x0043e6a7);
    /* 0043e6a7: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0043e6aa: mov esi, ebx */ r_esi = r_ebx;
    /* 0043e6ac: mov ebx, eax */ r_ebx = r_eax;
L_0043e6ae:; BB(0x0043e6ae);
    /* 0043e6ae: movzx edx, byte ptr [ebx + 0xa44768] */ r_edx = (u32)R8((u32)(r_ebx+0xa44768u));
    /* 0043e6b5: movzx ecx, word ptr [edx*2 + 0x9a4df4] */ r_ecx = (u32)R16((u32)(r_edx*2+0x9a4df4u));
    /* 0043e6bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6be: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e6c3u); f_007b4d18();
    /* 0043e6c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e6c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e6c6: je 0x43e6d1 */ if (fZ) goto L_0043e6d1;
L_0043e6c8:; BB(0x0043e6c8);
    /* 0043e6c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e6cc: call 0x443d30 */ r_esp -= 4; W32(r_esp, 0x43e6d1u); f_00443d30();
L_0043e6d1:; BB(0x0043e6d1);
    /* 0043e6d1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043e6d4: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043e6d6: jl 0x43e6ae */ if ((fS!=fO)) goto L_0043e6ae;
L_0043e6d8:; BB(0x0043e6d8);
    /* 0043e6d8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0043e6db:; BB(0x0043e6db);
    /* 0043e6db: mov dword ptr [0xa44790], 0xffffffff */ W32((u32)(0xa44790u), 0xffffffffu);
    /* 0043e6e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e6e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e6e7: ret  */ FN_RET(0x0043e658); r_esp += 4; return;
}

void f_0043e6e8(void) /* sub_43E6E8 */
{
    FN_ENTER(0x0043e6e8);
    /* 0043e6e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e6ea: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0043e6ee: mov eax, 0xa44768 */ r_eax = 0xa44768u;
    /* 0043e6f3: lea ebx, [edx + 4] */ r_ebx = (u32)(r_edx+0x4u);
    /* 0043e6f6: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0043e6f8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0043e6fa: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0043e6fe: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0043e702: movsx eax, word ptr [edx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 0043e706: movsx ebx, word ptr [edx + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 0043e70a: mov dword ptr [0xa44790], eax */ W32((u32)(0xa44790u), r_eax);
    /* 0043e70f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e711: je 0x43e774 */ if (fZ) goto L_0043e774;
L_0043e713:; BB(0x0043e713);
    /* 0043e713: movzx eax, byte ptr [0xa44768] */ r_eax = (u32)R8((u32)(0xa44768u));
    /* 0043e71a: movzx edx, word ptr [eax*2 + 0x9a4df4] */ r_edx = (u32)R16((u32)(r_eax*2+0x9a4df4u));
    /* 0043e722: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e723: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e728u); f_007b4d18();
    /* 0043e728: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e72b: je 0x43e736 */ if (fZ) goto L_0043e736;
L_0043e72d:; BB(0x0043e72d);
    /* 0043e72d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e72f: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e731: call 0x443d30 */ r_esp -= 4; W32(r_esp, 0x43e736u); f_00443d30();
L_0043e736:; BB(0x0043e736);
    /* 0043e736: mov eax, 1 */ r_eax = 0x1u;
    /* 0043e73b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043e73e: jle 0x43e774 */ if ((fZ||fS!=fO)) goto L_0043e774;
L_0043e740:; BB(0x0043e740);
    /* 0043e740: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0043e743: mov esi, ebx */ r_esi = r_ebx;
    /* 0043e745: mov ebx, eax */ r_ebx = r_eax;
L_0043e747:; BB(0x0043e747);
    /* 0043e747: movzx edx, byte ptr [ebx + 0xa44768] */ r_edx = (u32)R8((u32)(r_ebx+0xa44768u));
    /* 0043e74e: movzx ecx, word ptr [edx*2 + 0x9a4df4] */ r_ecx = (u32)R16((u32)(r_edx*2+0x9a4df4u));
    /* 0043e756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e757: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e75cu); f_007b4d18();
    /* 0043e75c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e75d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e75f: je 0x43e76a */ if (fZ) goto L_0043e76a;
L_0043e761:; BB(0x0043e761);
    /* 0043e761: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e763: mov ecx, eax */ r_ecx = r_eax;
    /* 0043e765: call 0x443d30 */ r_esp -= 4; W32(r_esp, 0x43e76au); f_00443d30();
L_0043e76a:; BB(0x0043e76a);
    /* 0043e76a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043e76d: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043e76f: jl 0x43e747 */ if ((fS!=fO)) goto L_0043e747;
L_0043e771:; BB(0x0043e771);
    /* 0043e771: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0043e774:; BB(0x0043e774);
    /* 0043e774: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e775: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e776: ret  */ FN_RET(0x0043e6e8); r_esp += 4; return;
}

void f_0043e778(void) /* sub_43E778 */
{
    FN_ENTER(0x0043e778);
    /* 0043e778: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e779: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e77a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0043e77e: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 0043e782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e783: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e788u); f_007b4d18();
    /* 0043e788: mov ebp, eax */ r_ebp = r_eax;
    /* 0043e78a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043e78d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e78f: je 0x43e7c7 */ if (fZ) goto L_0043e7c7;
L_0043e791:; BB(0x0043e791);
    /* 0043e791: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e792: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0043e795: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0043e798: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0043e79b: mov dword ptr [ebp + 0x3c], ecx */ W32((u32)(r_ebp+0x3cu), r_ecx);
    /* 0043e79e: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0043e7a1: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0043e7a4: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0043e7a7: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0043e7aa: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x43e7afu); f_007b999c();
    /* 0043e7af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e7b0: movzx edx, word ptr [esi + 2] */ r_edx = (u32)R16((u32)(r_esi+0x2u));
    /* 0043e7b4: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043e7ba: jne 0x43e7c7 */ if (!fZ) goto L_0043e7c7;
L_0043e7bc:; BB(0x0043e7bc);
    /* 0043e7bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7bf: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x43e7c4u); f_004d2fb4();
    /* 0043e7c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0043e7c7:; BB(0x0043e7c7);
    /* 0043e7c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043e7c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043e7c9: ret  */ FN_RET(0x0043e778); r_esp += 4; return;
}

void f_0043e7cc(void)
{
    FN_ENTER(0x0043e7cc);
    /* 0043e7cc: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0043e7d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e7d3: je 0x43e7ec */ if (fZ) goto L_0043e7ec;
L_0043e7d5:; BB(0x0043e7d5);
    /* 0043e7d5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0043e7d9: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0043e7dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e7df: jne 0x43e7ec */ if (!fZ) goto L_0043e7ec;
L_0043e7e1:; BB(0x0043e7e1);
    /* 0043e7e1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0043e7e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e7e6: call 0x448d80 */ r_esp -= 4; W32(r_esp, 0x43e7ebu); f_00448d80();
    /* 0043e7eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0043e7ec:; BB(0x0043e7ec);
    /* 0043e7ec: ret  */ FN_RET(0x0043e7cc); r_esp += 4; return;
}

void f_0043e7f0(void) /* sub_43E7F0 */
{
    FN_ENTER(0x0043e7f0);
    /* 0043e7f0: mov eax, dword ptr [0xa447a0] */ r_eax = R32((u32)(0xa447a0u));
    /* 0043e7f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e7f7: jne 0x43e7fc */ if (!fZ) goto L_0043e7fc;
L_0043e7f9:; BB(0x0043e7f9);
    /* 0043e7f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043e7fb: ret  */ FN_RET(0x0043e7f0); r_esp += 4; return;
L_0043e7fc:; BB(0x0043e7fc);
    /* 0043e7fc: mov eax, 1 */ r_eax = 0x1u;
    /* 0043e801: ret  */ FN_RET(0x0043e7f0); r_esp += 4; return;
}

void f_0043e804(void) /* sub_43E804 */
{
    FN_ENTER(0x0043e804);
    /* 0043e804: mov dword ptr [0xa44784], 0x3f800000 */ W32((u32)(0xa44784u), 0x3f800000u);
    /* 0043e80e: mov dword ptr [0xa44788], 0x41000000 */ W32((u32)(0xa44788u), 0x41000000u);
    /* 0043e818: mov dword ptr [0xa4478c], 0x3fc00000 */ W32((u32)(0xa4478cu), 0x3fc00000u);
    /* 0043e822: ret  */ FN_RET(0x0043e804); r_esp += 4; return;
}

void f_0043e824(void) /* sub_43E824 */
{
    FN_ENTER(0x0043e824);
    /* 0043e824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e825: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e828: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0043e82d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e82f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0043e831: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043e833: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043e835: jle 0x43e936 */ if ((fZ||fS!=fO)) goto L_0043e936;
L_0043e83b:; BB(0x0043e83b);
    /* 0043e83b: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0043e83f: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_0043e843:; BB(0x0043e843);
    /* 0043e843: mov esi, dword ptr [edx*4 + 0xaad720] */ r_esi = R32((u32)(r_edx*4+0xaad720u));
    /* 0043e84a: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0043e84d: test edi, 0x2000800 */ {  u32 a = r_edi; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e853: jne 0x43e871 */ if (!fZ) goto L_0043e871;
L_0043e855:; BB(0x0043e855);
    /* 0043e855: mov edi, dword ptr [esi + 0x3f0] */ r_edi = R32((u32)(r_esi+0x3f0u));
    /* 0043e85b: cmp edi, dword ptr [0xaafca0] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e861: jne 0x43e871 */ if (!fZ) goto L_0043e871;
L_0043e863:; BB(0x0043e863);
    /* 0043e863: mov edi, ecx */ r_edi = r_ecx;
    /* 0043e865: mov dword ptr [edi*4 + 0xa44770], esi */ W32((u32)(r_edi*4+0xa44770u), r_esi);
    /* 0043e86c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e86f: mov ebx, ecx */ r_ebx = r_ecx;
L_0043e871:; BB(0x0043e871);
    /* 0043e871: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043e874: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e876: jl 0x43e843 */ if ((fS!=fO)) goto L_0043e843;
L_0043e878:; BB(0x0043e878);
    /* 0043e878: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0043e87c: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0043e880: mov dword ptr [0xa44780], ebx */ W32((u32)(0xa44780u), r_ebx);
L_0043e886:; BB(0x0043e886);
    /* 0043e886: mov eax, ecx */ r_eax = r_ecx;
    /* 0043e888: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e88b: jge 0x43e8d9 */ if ((fS==fO)) goto L_0043e8d9;
L_0043e88d:; BB(0x0043e88d);
    /* 0043e88d: mov edx, ecx */ r_edx = r_ecx;
    /* 0043e88f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043e891: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043e894: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e897: jl 0x43e8c6 */ if ((fS!=fO)) goto L_0043e8c6;
L_0043e899:; BB(0x0043e899);
    /* 0043e899: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043e89b: mov dword ptr [eax*4 + 0xa44770], edx */ W32((u32)(r_eax*4+0xa44770u), r_edx);
    /* 0043e8a2: mov dword ptr [eax*4 + 0xa44774], edx */ W32((u32)(r_eax*4+0xa44774u), r_edx);
    /* 0043e8a9: mov dword ptr [eax*4 + 0xa44778], edx */ W32((u32)(r_eax*4+0xa44778u), r_edx);
    /* 0043e8b0: mov dword ptr [eax*4 + 0xa4477c], edx */ W32((u32)(r_eax*4+0xa4477cu), r_edx);
    /* 0043e8b7: mov dword ptr [eax*4 + 0xa44780], edx */ W32((u32)(r_eax*4+0xa44780u), r_edx);
    /* 0043e8be: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e8c1: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e8c4: jl 0x43e899 */ if ((fS!=fO)) goto L_0043e899;
L_0043e8c6:; BB(0x0043e8c6);
    /* 0043e8c6: mov dword ptr [eax*4 + 0xa44770], 0 */ W32((u32)(r_eax*4+0xa44770u), 0x0u);
    /* 0043e8d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e8d4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e8d7: jl 0x43e8c6 */ if ((fS!=fO)) goto L_0043e8c6;
L_0043e8d9:; BB(0x0043e8d9);
    /* 0043e8d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e8db: jne 0x43e8e7 */ if (!fZ) goto L_0043e8e7;
L_0043e8dd:; BB(0x0043e8dd);
    /* 0043e8dd: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0043e8e2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e8e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e8e6: ret  */ FN_RET(0x0043e824); r_esp += 4; return;
L_0043e8e7:; BB(0x0043e8e7);
    /* 0043e8e7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43e8ecu); f_008587a5();
    /* 0043e8ec: fild dword ptr [0xa44780] */ FPUSH((long double)(i32)R32((u32)(0xa44780u)));
    /* 0043e8f2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043e8f5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0043e8f8: fdiv dword ptr [0x8fdbc4] */ ST(0) = ST(0) / R_F32((u32)(0x8fdbc4u));
    /* 0043e8fe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043e900: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043e904: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043e909: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043e90e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043e912: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043e916: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043e91a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043e91e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0043e922: mov eax, dword ptr [eax*4 + 0xa44770] */ r_eax = R32((u32)(r_eax*4+0xa44770u));
    /* 0043e929: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e92b: je 0x43e8dd */ if (fZ) goto L_0043e8dd;
L_0043e92d:; BB(0x0043e92d);
    /* 0043e92d: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0043e931: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043e934: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043e935: ret  */ FN_RET(0x0043e824); r_esp += 4; return;
L_0043e936:; BB(0x0043e936);
    /* 0043e936: mov dword ptr [0xa44780], 0 */ W32((u32)(0xa44780u), 0x0u);
    /* 0043e940: jmp 0x43e886 */ goto L_0043e886;
}

void f_0043e948(void) /* sub_43E948 */
{
    FN_ENTER(0x0043e948);
    /* 0043e948: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043e94a: call 0x6ff9cc */ r_esp -= 4; W32(r_esp, 0x43e94fu); f_006ff9cc();
    /* 0043e94f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e950: ret  */ FN_RET(0x0043e948); r_esp += 4; return;
}

void f_0043e954(void) /* sub_43E954 */
{
    FN_ENTER(0x0043e954);
    /* 0043e954: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e955: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043e956: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043e957: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043e958: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043e95b: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 0043e95f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043e961: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e963: mov dword ptr [0xa447b0], 0 */ W32((u32)(0xa447b0u), 0x0u);
    /* 0043e96d: mov dword ptr [0xa447b4], 0 */ W32((u32)(0xa447b4u), 0x0u);
    /* 0043e977: je 0x43e97e */ if (fZ) goto L_0043e97e;
L_0043e979:; BB(0x0043e979);
    /* 0043e979: mov eax, 0xc59c4000 */ r_eax = 0xc59c4000u;
L_0043e97e:; BB(0x0043e97e);
    /* 0043e97e: mov dword ptr [0xa447b8], eax */ W32((u32)(0xa447b8u), r_eax);
    /* 0043e983: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x43e988u); f_007a61a4();
    /* 0043e988: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e98b: je 0x43ebe8 */ if (fZ) goto L_0043ebe8;
L_0043e991:; BB(0x0043e991);
    /* 0043e991: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e993: je 0x43e9fc */ if (fZ) goto L_0043e9fc;
L_0043e995:; BB(0x0043e995);
    /* 0043e995: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0043e99a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043e99c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043e99e: jle 0x43eb75 */ if ((fZ||fS!=fO)) goto L_0043eb75;
L_0043e9a4:; BB(0x0043e9a4);
    /* 0043e9a4: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0043e9a7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043e9a9: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0043e9ac: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043e9ae: mov esi, edx */ r_esi = r_edx;
L_0043e9b0:; BB(0x0043e9b0);
    /* 0043e9b0: mov ebp, dword ptr [esi*4 + 0xaad720] */ r_ebp = R32((u32)(r_esi*4+0xaad720u));
    /* 0043e9b7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e9b9: je 0x43e9e8 */ if (fZ) goto L_0043e9e8;
L_0043e9bb:; BB(0x0043e9bb);
    /* 0043e9bb: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043e9bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e9c0: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x43e9c5u); f_007ba9ec();
    /* 0043e9c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e9c6: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0043e9c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e9cb: je 0x43e9d4 */ if (fZ) goto L_0043e9d4;
L_0043e9cd:; BB(0x0043e9cd);
    /* 0043e9cd: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0043e9d2: jmp 0x43e9e8 */ goto L_0043e9e8;
L_0043e9d4:; BB(0x0043e9d4);
    /* 0043e9d4: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 0043e9da: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e9dd: je 0x43eb28 */ if (fZ) goto L_0043eb28;
L_0043e9e3:; BB(0x0043e9e3);
    /* 0043e9e3: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0043e9e8:; BB(0x0043e9e8);
    /* 0043e9e8: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043e9eb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043e9ee: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043e9f0: jl 0x43e9b0 */ if ((fS!=fO)) goto L_0043e9b0;
L_0043e9f2:; BB(0x0043e9f2);
    /* 0043e9f2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e9f4: jne 0x43eb75 */ if (!fZ) goto L_0043eb75;
L_0043e9fa:; BB(0x0043e9fa);
    /* 0043e9fa: jmp 0x43ea01 */ goto L_0043ea01;
L_0043e9fc:; BB(0x0043e9fc);
    /* 0043e9fc: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0043ea01:; BB(0x0043ea01);
    /* 0043ea01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0043ea03:; BB(0x0043ea03);
    /* 0043ea03: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ea09: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0043ea0d: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0043ea11: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 0043ea17: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ea19: jge 0x43ebfd */ if ((fS==fO)) goto L_0043ebfd;
L_0043ea1f:; BB(0x0043ea1f);
    /* 0043ea1f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0043ea23: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0043ea25: mov ebx, eax */ r_ebx = r_eax;
L_0043ea27:; BB(0x0043ea27);
    /* 0043ea27: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0043ea2e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea30: je 0x43eb15 */ if (fZ) goto L_0043eb15;
L_0043ea36:; BB(0x0043ea36);
    /* 0043ea36: mov edi, dword ptr [esi + 0xa4] */ r_edi = R32((u32)(r_esi+0xa4u));
    /* 0043ea3c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea3e: je 0x43eb15 */ if (fZ) goto L_0043eb15;
L_0043ea44:; BB(0x0043ea44);
    /* 0043ea44: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0043ea47: cmp ecx, dword ptr [0x9c49c8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c49c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea4d: je 0x43eb15 */ if (fZ) goto L_0043eb15;
L_0043ea53:; BB(0x0043ea53);
    /* 0043ea53: cmp ecx, dword ptr [0x9c5570] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c5570u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea59: je 0x43eb15 */ if (fZ) goto L_0043eb15;
L_0043ea5f:; BB(0x0043ea5f);
    /* 0043ea5f: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 0043ea62: test ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ea68: je 0x43eb15 */ if (fZ) goto L_0043eb15;
L_0043ea6e:; BB(0x0043ea6e);
    /* 0043ea6e: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0043ea71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043ea72: fsub dword ptr [esp + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x48u));
    /* 0043ea76: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043ea79: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x43ea7eu); f_0082e900();
    /* 0043ea7e: fcomp dword ptr [0x8fdbb8] */ fx_compare(ST(0), R_F32((u32)(0x8fdbb8u))); FPOP();
    /* 0043ea84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043ea86: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043ea87: jbe 0x43eb0f */ if ((fC||fZ)) goto L_0043eb0f;
L_0043ea8d:; BB(0x0043ea8d);
    /* 0043ea8d: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0043ea90: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0043ea93: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 0043ea96: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0043ea99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043ea9b: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0043ea9f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0043eaa3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eaa5: je 0x43eaae */ if (fZ) goto L_0043eaae;
L_0043eaa7:; BB(0x0043eaa7);
    /* 0043eaa7: mov edx, 0xffffec78 */ r_edx = 0xffffec78u;
    /* 0043eaac: jmp 0x43eab3 */ goto L_0043eab3;
L_0043eaae:; BB(0x0043eaae);
    /* 0043eaae: mov edx, 0x1388 */ r_edx = 0x1388u;
L_0043eab3:; BB(0x0043eab3);
    /* 0043eab3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0043eab7: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0043eabb: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0043eabf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043eac1: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0043eac5: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eac8: je 0x43eb7f */ if (fZ) goto L_0043eb7f;
L_0043eace:; BB(0x0043eace);
    /* 0043eace: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0043ead2: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0043ead6: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0043ead9: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 0043eadd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043eadf: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0043eae3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0043eae7: mov byte ptr [esp + 0x20], 0x17 */ W8((u32)(r_esp+0x20u), 0x17u);
    /* 0043eaec: mov word ptr [esp + 0x22], si */ W16((u32)(r_esp+0x22u), (u16)r_esi);
    /* 0043eaf1: mov byte ptr [esp + 0x21], 5 */ W8((u32)(r_esp+0x21u), 0x5u);
    /* 0043eaf6: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0043eafa: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0043eafe: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0043eb02: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43eb07u); f_008003e0();
    /* 0043eb07: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 0043eb0d: jmp 0x43eb15 */ goto L_0043eb15;
L_0043eb0f:; BB(0x0043eb0f);
    /* 0043eb0f: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
L_0043eb15:; BB(0x0043eb15);
    /* 0043eb15: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043eb18: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043eb1a: jl 0x43ea27 */ if ((fS!=fO)) goto L_0043ea27;
L_0043eb20:; BB(0x0043eb20);
    /* 0043eb20: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043eb23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043eb24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043eb25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043eb26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043eb27: ret  */ FN_RET(0x0043e954); r_esp += 4; return;
L_0043eb28:; BB(0x0043eb28);
    /* 0043eb28: mov eax, dword ptr [esi*4 + 0x9a4be0] */ r_eax = R32((u32)(r_esi*4+0x9a4be0u));
    /* 0043eb2f: movzx ecx, word ptr [ebp + 0x1c] */ r_ecx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0043eb33: mov byte ptr [esp], 0x17 */ W8((u32)(r_esp), 0x17u);
    /* 0043eb37: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0043eb3c: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 0043eb41: mov ecx, dword ptr [edi + 0x9a4bf0] */ r_ecx = R32((u32)(r_edi+0x9a4bf0u));
    /* 0043eb47: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0043eb4b: mov ecx, dword ptr [edi + 0x9a4bf4] */ r_ecx = R32((u32)(r_edi+0x9a4bf4u));
    /* 0043eb51: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0043eb55: mov ecx, dword ptr [edi + 0x9a4bf8] */ r_ecx = R32((u32)(r_edi+0x9a4bf8u));
    /* 0043eb5b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0043eb5f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043eb63: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0043eb66: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43eb6bu); f_008003e0();
    /* 0043eb6b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0043eb70: jmp 0x43e9e8 */ goto L_0043e9e8;
L_0043eb75:; BB(0x0043eb75);
    /* 0043eb75: mov edx, 0xffffec78 */ r_edx = 0xffffec78u;
    /* 0043eb7a: jmp 0x43ea03 */ goto L_0043ea03;
L_0043eb7f:; BB(0x0043eb7f);
    /* 0043eb7f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0043eb83: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 0043eb87: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0043eb8b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0043eb8d: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0043eb95: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0043eb99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043eb9a: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0043eb9e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0043eba0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043eba2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043eba5: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x43ebaau); f_0082dc9c();
    /* 0043ebaa: fcomp dword ptr [0x8fdc44] */ fx_compare(ST(0), R_F32((u32)(0x8fdc44u))); FPOP();
    /* 0043ebb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043ebb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043ebb3: jae 0x43eace */ if (!fC) goto L_0043eace;
L_0043ebb9:; BB(0x0043ebb9);
    /* 0043ebb9: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0043ebbd: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ebc3: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x43ebc8u); f_0078ea90();
    /* 0043ebc8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043ebca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ebcd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0043ebd1: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0043ebd5: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 0043ebd9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043ebdb: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0043ebdf: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0043ebe3: jmp 0x43eace */ goto L_0043eace;
L_0043ebe8:; BB(0x0043ebe8);
    /* 0043ebe8: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x43ebedu); f_0052cf54();
    /* 0043ebed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ebef: jne 0x43e991 */ if (!fZ) goto L_0043e991;
L_0043ebf5:; BB(0x0043ebf5);
    /* 0043ebf5: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ebf8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ebf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ebfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ebfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ebfc: ret  */ FN_RET(0x0043e954); r_esp += 4; return;
L_0043ebfd:; BB(0x0043ebfd);
    /* 0043ebfd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043ebff: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ec02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043ec03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ec04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ec05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ec06: ret  */ FN_RET(0x0043e954); r_esp += 4; return;
}

void f_0043ec08(void) /* sub_43EC08 */
{
    FN_ENTER(0x0043ec08);
    /* 0043ec08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec09: mov ebp, esp */ r_ebp = r_esp;
    /* 0043ec0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec0d: push 0x8ce3e2 */ { u32 v = 0x8ce3e2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043ec18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043ec20: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043ec23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043ec26: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0043ec29: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0043ec2c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0043ec2f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x43ec34u); f_00520e6c();
    /* 0043ec34: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043ec37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ec39: jne 0x43ed4a */ if (!fZ) goto L_0043ed4a;
L_0043ec3f:; BB(0x0043ec3f);
    /* 0043ec3f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0043ec46: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec4b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x43ec50u); f_008581c5();
    /* 0043ec50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ec51: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043ec54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ec56: je 0x43ed43 */ if (fZ) goto L_0043ed43;
L_0043ec5c:; BB(0x0043ec5c);
    /* 0043ec5c: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0043ec63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043ec6a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043ec6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ec6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec72: push 0x9a4dc8 */ { u32 v = 0x9a4dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec77: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ec79: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x43ec7eu); f_005b7a84();
    /* 0043ec7e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043ec81: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0043ec88:; BB(0x0043ec88);
    /* 0043ec88: mov dword ptr [0xa447bc], eax */ W32((u32)(0xa447bcu), r_eax);
    /* 0043ec8d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0043ec94:; BB(0x0043ec94);
    /* 0043ec94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ec97: mov dword ptr [0xa447c0], eax */ W32((u32)(0xa447c0u), r_eax);
    /* 0043ec9c: call 0x443dd0 */ r_esp -= 4; W32(r_esp, 0x43eca1u); f_00443dd0();
    /* 0043eca1: call 0x44017c */ r_esp -= 4; W32(r_esp, 0x43eca6u); f_0044017c();
    /* 0043eca6: call 0x448e40 */ r_esp -= 4; W32(r_esp, 0x43ecabu); f_00448e40();
    /* 0043ecab: call 0x4412c0 */ r_esp -= 4; W32(r_esp, 0x43ecb0u); f_004412c0();
    /* 0043ecb0: call 0x442074 */ r_esp -= 4; W32(r_esp, 0x43ecb5u); f_00442074();
    /* 0043ecb5: mov eax, dword ptr [0xa447bc] */ r_eax = R32((u32)(0xa447bcu));
    /* 0043ecba: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 0043ecc0: mov ecx, dword ptr [edi + 0xd8] */ r_ecx = R32((u32)(r_edi+0xd8u));
    /* 0043ecc6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043ecc9: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 0043eccc: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0043eccf: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 0043ecd5: mov dword ptr [0xa44cb0], edx */ W32((u32)(0xa44cb0u), r_edx);
    /* 0043ecdb: mov dword ptr [0xa44cb4], esi */ W32((u32)(0xa44cb4u), r_esi);
    /* 0043ece1: mov dword ptr [0xa44cac], eax */ W32((u32)(0xa44cacu), r_eax);
    /* 0043ece6: call 0x44b79c */ r_esp -= 4; W32(r_esp, 0x43ecebu); f_0044b79c();
    /* 0043eceb: call 0x44a3b4 */ r_esp -= 4; W32(r_esp, 0x43ecf0u); f_0044a3b4();
    /* 0043ecf0: mov dword ptr [0xa44794], 0 */ W32((u32)(0xa44794u), 0x0u);
    /* 0043ecfa: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0043ecff: mov word ptr [0x9a4e04], ax */ W16((u32)(0x9a4e04u), (u16)r_eax);
    /* 0043ed05: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed07: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x43ed0cu); f_0077a6cc();
    /* 0043ed0c: mov dword ptr [0xa447d0], eax */ W32((u32)(0xa447d0u), r_eax);
    /* 0043ed11: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed13: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x43ed18u); f_0077a6cc();
    /* 0043ed18: mov dword ptr [0xa447cc], eax */ W32((u32)(0xa447ccu), r_eax);
    /* 0043ed1d: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed1f: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x43ed24u); f_0077a6cc();
    /* 0043ed24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ed27: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ed2a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043ed2d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043ed30: mov dword ptr [0xa447c8], eax */ W32((u32)(0xa447c8u), r_eax);
    /* 0043ed35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ed38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043ed3f: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ed41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ed42: ret  */ FN_RET(0x0043ec08); r_esp += 4; return;
L_0043ed43:; BB(0x0043ed43);
    /* 0043ed43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ed45: jmp 0x43ec88 */ goto L_0043ec88;
L_0043ed4a:; BB(0x0043ed4a);
    /* 0043ed4a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0043ed51: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed56: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x43ed5bu); f_008581c5();
    /* 0043ed5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ed5c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043ed5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ed61: je 0x43eda0 */ if (fZ) goto L_0043eda0;
L_0043ed63:; BB(0x0043ed63);
    /* 0043ed63: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0043ed6a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043ed71: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043ed74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ed76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed79: push 0x9a4dd8 */ { u32 v = 0x9a4dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed7e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ed80: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x43ed85u); f_005b7a84();
    /* 0043ed85: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043ed88: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0043ed8f:; BB(0x0043ed8f);
    /* 0043ed8f: mov dword ptr [0xa447bc], eax */ W32((u32)(0xa447bcu), r_eax);
    /* 0043ed94: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043ed9b: jmp 0x43ec94 */ goto L_0043ec94;
L_0043eda0:; BB(0x0043eda0);
    /* 0043eda0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043eda2: jmp 0x43ed8f */ goto L_0043ed8f;
}

void f_0043eda4(void) /* sub_43EDA4 */
{
    FN_ENTER(0x0043eda4);
    /* 0043eda4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043eda5: mov edi, ecx */ r_edi = r_ecx;
    /* 0043eda7: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043edae: mov dword ptr [edi + 0x3b0], 1 */ W32((u32)(r_edi+0x3b0u), 0x1u);
    /* 0043edb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043edb9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43edbeu); f_007b4d18();
    /* 0043edbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043edbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043edc1: je 0x43edca */ if (fZ) goto L_0043edca;
L_0043edc3:; BB(0x0043edc3);
    /* 0043edc3: mov ecx, eax */ r_ecx = r_eax;
    /* 0043edc5: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x43edcau); f_0052ca40();
L_0043edca:; BB(0x0043edca);
    /* 0043edca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043edcc: call 0x43e954 */ r_esp -= 4; W32(r_esp, 0x43edd1u); f_0043e954();
    /* 0043edd1: push 0x8fe0ac */ { u32 v = 0x8fe0acu; r_esp -= 4; W32(r_esp, v); }
    /* 0043edd6: mov eax, dword ptr [0xa447b0] */ r_eax = R32((u32)(0xa447b0u));
    /* 0043eddb: mov edx, dword ptr [0xa447b4] */ r_edx = R32((u32)(0xa447b4u));
    /* 0043ede1: mov ecx, dword ptr [0xa447b8] */ r_ecx = R32((u32)(0xa447b8u));
    /* 0043ede7: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 0043eded: mov dword ptr [edi + 0x304], edx */ W32((u32)(r_edi+0x304u), r_edx);
    /* 0043edf3: mov dword ptr [edi + 0x308], ecx */ W32((u32)(r_edi+0x308u), r_ecx);
    /* 0043edf9: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0043edfc: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0043edff: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 0043ee02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ee04: mov dword ptr [0xa4479c], eax */ W32((u32)(0xa4479cu), r_eax);
    /* 0043ee09: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043ee10: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043ee17: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x43ee1cu); f_00814afc();
    /* 0043ee1c: mov dword ptr [edi + 0x40c], 0 */ W32((u32)(r_edi+0x40cu), 0x0u);
    /* 0043ee26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043ee29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043ee2a: ret  */ FN_RET(0x0043eda4); r_esp += 4; return;
}

void f_0043ee2c(void) /* sub_43EE2C */
{
    FN_ENTER(0x0043ee2c);
    /* 0043ee2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee2d: mov edi, ecx */ r_edi = r_ecx;
    /* 0043ee2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043ee31: mov dword ptr [edi + 0x3b0], eax */ W32((u32)(r_edi+0x3b0u), r_eax);
    /* 0043ee37: mov dword ptr [0xa447ac], 0xffffffff */ W32((u32)(0xa447acu), 0xffffffffu);
    /* 0043ee41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee42: call 0x43e954 */ r_esp -= 4; W32(r_esp, 0x43ee47u); f_0043e954();
    /* 0043ee47: mov dword ptr [edi + 0x3ac], 4 */ W32((u32)(r_edi+0x3acu), 0x4u);
    /* 0043ee51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043ee53: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043ee5a: mov word ptr [edi + 0x3fa], dx */ W16((u32)(r_edi+0x3fau), (u16)r_edx);
    /* 0043ee61: mov dword ptr [edi + 0x408], 1 */ W32((u32)(r_edi+0x408u), 0x1u);
    /* 0043ee6b: mov dword ptr [0xa447a8], edx */ W32((u32)(0xa447a8u), r_edx);
    /* 0043ee71: mov word ptr [edi + 0x3fc], dx */ W16((u32)(r_edi+0x3fcu), (u16)r_edx);
    /* 0043ee78: push 0x8fe09c */ { u32 v = 0x8fe09cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043ee7d: mov dword ptr [0xa447a0], edx */ W32((u32)(0xa447a0u), r_edx);
    /* 0043ee83: mov word ptr [edi + 0x400], dx */ W16((u32)(r_edi+0x400u), (u16)r_edx);
    /* 0043ee8a: mov word ptr [edi + 0x402], dx */ W16((u32)(r_edi+0x402u), (u16)r_edx);
    /* 0043ee91: mov eax, 2 */ r_eax = 0x2u;
    /* 0043ee96: mov word ptr [edi + 0x404], ax */ W16((u32)(r_edi+0x404u), (u16)r_eax);
    /* 0043ee9d: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x43eea2u); f_00814afc();
    /* 0043eea2: mov dword ptr [0xa44794], 1 */ W32((u32)(0xa44794u), 0x1u);
    /* 0043eeac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043eeaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043eeb0: ret  */ FN_RET(0x0043ee2c); r_esp += 4; return;
}

void f_0043eeb4(void) /* sub_43EEB4 */
{
    FN_ENTER(0x0043eeb4);
    /* 0043eeb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eeb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043eeb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043eeb9: call 0x43eed8 */ r_esp -= 4; W32(r_esp, 0x43eebeu); f_0043eed8();
    /* 0043eebe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043eec2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043eec4: jne 0x43eeca */ if (!fZ) goto L_0043eeca;
L_0043eec6:; BB(0x0043eec6);
    /* 0043eec6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043eec7: ret 4 */ FN_RET(0x0043eeb4); r_esp += 8; return;
L_0043eeca:; BB(0x0043eeca);
    /* 0043eeca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043eecb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x43eed0u); f_005c2f74();
    /* 0043eed0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043eed1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043eed2: ret 4 */ FN_RET(0x0043eeb4); r_esp += 8; return;
}

void f_0043eed8(void) /* sub_43EED8 */
{
    FN_ENTER(0x0043eed8);
    /* 0043eed8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043eed9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043eedb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043eedd: push 0x8ce3fc */ { u32 v = 0x8ce3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0043eee2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043eee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043eee9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043eef0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043eef3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043eef6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043eef9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0043eefc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043eeff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043ef02: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043ef09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ef0c: mov dword ptr [ecx], 0xaf57a0 */ W32((u32)(r_ecx), 0xaf57a0u);
    /* 0043ef12: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x43ef17u); f_007b9c8c();
    /* 0043ef17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef19: call 0x43e4ec */ r_esp -= 4; W32(r_esp, 0x43ef1eu); f_0043e4ec();
    /* 0043ef1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043ef1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043ef26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ef29: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x43ef2eu); f_0052bf84();
    /* 0043ef2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ef31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043ef38: mov esp, ebp */ r_esp = r_ebp;
    /* 0043ef3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043ef3b: ret  */ FN_RET(0x0043eed8); r_esp += 4; return;
}

void f_0043ef3c(void) /* sub_43EF3C */
{
    FN_ENTER(0x0043ef3c);
    /* 0043ef3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef3d: mov esi, ecx */ r_esi = r_ecx;
    /* 0043ef3f: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0043ef44: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ef46: jne 0x43f001 */ if (!fZ) goto L_0043f001;
L_0043ef4c:; BB(0x0043ef4c);
    /* 0043ef4c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0043ef4f: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ef54: je 0x43ef58 */ if (fZ) goto L_0043ef58;
L_0043ef56:; BB(0x0043ef56);
    /* 0043ef56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043ef57: ret  */ FN_RET(0x0043ef3c); r_esp += 4; return;
L_0043ef58:; BB(0x0043ef58);
    /* 0043ef58: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0043ef5f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0043ef61: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ef66: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x43ef69u); call_ind(t); }
    /* 0043ef69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043ef6b: je 0x43f001 */ if (fZ) goto L_0043f001;
L_0043ef71:; BB(0x0043ef71);
    /* 0043ef71: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0043ef74: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x43ef79u); f_00829cc8();
    /* 0043ef79: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43ef7eu); f_0082d7b0();
    /* 0043ef7e: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0043ef83: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043ef88: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0043ef8d: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0043ef90: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x43ef95u); f_0082d838();
    /* 0043ef95: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 0043ef98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ef9a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x43ef9fu); f_0082e9e4();
    /* 0043ef9f: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0043efa5: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043efaa: je 0x43efe1 */ if (fZ) goto L_0043efe1;
L_0043efac:; BB(0x0043efac);
    /* 0043efac: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 0043efb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043efb4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43efb9u); f_0082d8bc();
    /* 0043efb9: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043efbe: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efc3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efc8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043efca: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x43efcfu); f_0082fa0c();
    /* 0043efcf: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0043efd2: sub edx, dword ptr [esi + 0x3a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3a0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043efd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043efda: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43efdfu); f_0082d8bc();
    /* 0043efdf: jmp 0x43efeb */ goto L_0043efeb;
L_0043efe1:; BB(0x0043efe1);
    /* 0043efe1: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0043efe4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043efe6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43efebu); f_0082d8bc();
L_0043efeb:; BB(0x0043efeb);
    /* 0043efeb: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x43eff0u); f_004f7c84();
    /* 0043eff0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eff3: je 0x43f003 */ if (fZ) goto L_0043f003;
L_0043eff5:; BB(0x0043eff5);
    /* 0043eff5: mov ecx, esi */ r_ecx = r_esi;
    /* 0043eff7: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x43effcu); f_007aa668();
L_0043effc:; BB(0x0043effc);
    /* 0043effc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43f001u); f_0082da80();
L_0043f001:; BB(0x0043f001);
    /* 0043f001: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043f002: ret  */ FN_RET(0x0043ef3c); r_esp += 4; return;
L_0043f003:; BB(0x0043f003);
    /* 0043f003: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043f006: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x43f00bu); f_0082e1e8();
    /* 0043f00b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043f00c: jmp 0x43effc */ goto L_0043effc;
}

void f_0043efa9(void)
{
    FN_ENTER(0x0043efa9);
    /* 0043efa9: add byte ptr [ebp + esi - 0x75], dh */ { u32 ad = (u32)(r_ebp+r_esi+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043efad: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 0043efae: mov al, byte ptr [0x33000003] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x33000003u))) & 0xffu);
    /* 0043efb3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0043efb4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43efb9u); f_0082d8bc();
    /* 0043efb9: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043efbe: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efc3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043efc8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043efca: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x43efcfu); f_0082fa0c();
    /* 0043efcf: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0043efd2: sub edx, dword ptr [esi + 0x3a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3a0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043efd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043efda: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x43efdfu); f_0082d8bc();
    /* 0043efdf: jmp 0x43efeb */ goto L_0043efeb;
L_0043efeb:; BB(0x0043efeb);
    /* 0043efeb: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x43eff0u); f_004f7c84();
    /* 0043eff0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043eff3: je 0x43f003 */ if (fZ) goto L_0043f003;
L_0043eff5:; BB(0x0043eff5);
    /* 0043eff5: mov ecx, esi */ r_ecx = r_esi;
    /* 0043eff7: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x43effcu); f_007aa668();
L_0043effc:; BB(0x0043effc);
    /* 0043effc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43f001u); f_0082da80();
    /* 0043f001: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043f002: ret  */ FN_RET(0x0043efa9); r_esp += 4; return;
L_0043f003:; BB(0x0043f003);
    /* 0043f003: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043f006: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x43f00bu); f_0082e1e8();
    /* 0043f00b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043f00c: jmp 0x43effc */ goto L_0043effc;
}

