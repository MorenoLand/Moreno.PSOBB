#include "protos.h"

void f_006d5088(void) /* sub_6D5088 */
{
    FN_ENTER(0x006d5088);
    /* 006d5088: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5089: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d508a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d508b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d508e: mov edi, ecx */ r_edi = r_ecx;
    /* 006d5090: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d5093: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5095: je 0x6d51c4 */ if (fZ) goto L_006d51c4;
L_006d509b:; BB(0x006d509b);
    /* 006d509b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d50a2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d50a4: je 0x6d51c4 */ if (fZ) goto L_006d51c4;
L_006d50aa:; BB(0x006d50aa);
    /* 006d50aa: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d50afu); f_007365f4();
    /* 006d50af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d50b1: jne 0x6d51bc */ if (!fZ) goto L_006d51bc;
L_006d50b7:; BB(0x006d50b7);
    /* 006d50b7: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d50ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d50bc: je 0x6d51e7 */ if (fZ) goto L_006d51e7;
L_006d50c2:; BB(0x006d50c2);
    /* 006d50c2: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006d50c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d50c7: je 0x6d512e */ if (fZ) goto L_006d512e;
L_006d50c9:; BB(0x006d50c9);
    /* 006d50c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d50cb: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006d50cd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d50cf: mov ecx, edi */ r_ecx = r_edi;
    /* 006d50d1: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d50d4u); call_ind(t); }
    /* 006d50d4: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d50d7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d50dcu); f_007127b0();
    /* 006d50dc: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d50de: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d50e3u); f_0073ec50();
    /* 006d50e3: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006d50e6: movzx ebp, word ptr [edx + 0x1c] */ r_ebp = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d50ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d50eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d50ec: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6d50f1u); f_00735884();
    /* 006d50f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d50f4: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d50f7: mov ecx, edi */ r_ecx = r_edi;
    /* 006d50f9: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d50feu); f_006dc8d8();
    /* 006d50fe: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006d5102: mov ecx, edi */ r_ecx = r_edi;
    /* 006d5104: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d5109u); f_006dc8d8();
    /* 006d5109: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d510c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d510f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006d5113: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d5116: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d511a: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d511fu); f_0070f5a4();
    /* 006d511f: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d5122: mov dword ptr [edi + 0x20], 9 */ W32((u32)(r_edi+0x20u), 0x9u);
    /* 006d5129: jmp 0x6d51c4 */ goto L_006d51c4;
L_006d512e:; BB(0x006d512e);
    /* 006d512e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d5133u); f_00737d90();
    /* 006d5133: mov esi, eax */ r_esi = r_eax;
    /* 006d5135: lea ebp, [esi + esi*4] */ r_ebp = (u32)(r_esi+r_esi*4);
    /* 006d5138: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d513a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006d513c: lea ebp, [edi + ebp + 0x50] */ r_ebp = (u32)(r_edi+r_ebp+0x50u);
    /* 006d5140: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006d5143: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006d5146: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006d5149: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006d514d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006d5150: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006d5154: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006d5157: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006d515b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006d515e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006d5162: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 006d5169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d516a: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x6d516fu); f_005e3aac();
    /* 006d516f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5170: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006d5174: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5176: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006d517a: call 0x5d2484 */ r_esp -= 4; W32(r_esp, 0x6d517fu); f_005d2484();
    /* 006d517f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006d5182: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5185: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006d5188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5189: call 0x68f1d0 */ r_esp -= 4; W32(r_esp, 0x6d518eu); f_0068f1d0();
    /* 006d518e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d518f: mov ecx, edi */ r_ecx = r_edi;
    /* 006d5191: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d5196u); f_006d357c();
    /* 006d5196: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d5197: call 0x6dc1f8 */ r_esp -= 4; W32(r_esp, 0x6d519cu); f_006dc1f8();
    /* 006d519c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d519d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d519f: je 0x6d51a8 */ if (fZ) goto L_006d51a8;
L_006d51a1:; BB(0x006d51a1);
    /* 006d51a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d51a2: call 0x6dcc1c */ r_esp -= 4; W32(r_esp, 0x6d51a7u); f_006dcc1c();
    /* 006d51a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d51a8:; BB(0x006d51a8);
    /* 006d51a8: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d51ab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d51b0u); f_007127b0();
    /* 006d51b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d51b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d51b4: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d51b7: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006d51ba: jmp 0x6d51c4 */ goto L_006d51c4;
L_006d51bc:; BB(0x006d51bc);
    /* 006d51bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d51bf: je 0x6d51ec */ if (fZ) goto L_006d51ec;
L_006d51c1:; BB(0x006d51c1);
    /* 006d51c1: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
L_006d51c4:; BB(0x006d51c4);
    /* 006d51c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d51c6: je 0x6d51e0 */ if (fZ) goto L_006d51e0;
L_006d51c8:; BB(0x006d51c8);
    /* 006d51c8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d51cf: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d51d1: je 0x6d51e0 */ if (fZ) goto L_006d51e0;
L_006d51d3:; BB(0x006d51d3);
    /* 006d51d3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d51d8u); f_007127b0();
    /* 006d51d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d51da: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d51dd: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
L_006d51e0:; BB(0x006d51e0);
    /* 006d51e0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d51e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d51e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d51e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d51e6: ret  */ FN_RET(0x006d5088); r_esp += 4; return;
L_006d51e7:; BB(0x006d51e7);
    /* 006d51e7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d51ea: jmp 0x6d51c4 */ goto L_006d51c4;
L_006d51ec:; BB(0x006d51ec);
    /* 006d51ec: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006d51ef: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d51f4u); f_007127b0();
    /* 006d51f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006d51f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d51f8: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006d51fb: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006d51fe: jmp 0x6d51c4 */ goto L_006d51c4;
}

void f_006d5200(void) /* sub_6D5200 */
{
    FN_ENTER(0x006d5200);
    /* 006d5200: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5201: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5202: mov esi, ecx */ r_esi = r_ecx;
    /* 006d5204: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006d5207: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5209: je 0x6d5255 */ if (fZ) goto L_006d5255;
L_006d520b:; BB(0x006d520b);
    /* 006d520b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d5210u); f_00737d90();
    /* 006d5210: mov ebx, eax */ r_ebx = r_eax;
    /* 006d5212: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006d5215: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5217: je 0x6d52e5 */ if (fZ) goto L_006d52e5;
L_006d521d:; BB(0x006d521d);
    /* 006d521d: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 006d5220: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5222: je 0x6d5238 */ if (fZ) goto L_006d5238;
L_006d5224:; BB(0x006d5224);
    /* 006d5224: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 006d5227: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5229: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d522b: lea edx, [esi + edx + 0x50] */ r_edx = (u32)(r_esi+r_edx+0x50u);
    /* 006d522f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5230: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d5235u); f_00725fa8();
    /* 006d5235: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
L_006d5238:; BB(0x006d5238);
    /* 006d5238: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d523a: je 0x6d524f */ if (fZ) goto L_006d524f;
L_006d523c:; BB(0x006d523c);
    /* 006d523c: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 006d523f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5241: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5243: lea edx, [esi + edx + 0x50] */ r_edx = (u32)(r_esi+r_edx+0x50u);
    /* 006d5247: mov ecx, esi */ r_ecx = r_esi;
    /* 006d5249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d524a: call 0x6d357c */ r_esp -= 4; W32(r_esp, 0x6d524fu); f_006d357c();
L_006d524f:; BB(0x006d524f);
    /* 006d524f: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006d5252: mov dword ptr [esi + 0x48], ebx */ W32((u32)(r_esi+0x48u), r_ebx);
L_006d5255:; BB(0x006d5255);
    /* 006d5255: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d525c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d525e: je 0x6d527c */ if (fZ) goto L_006d527c;
L_006d5260:; BB(0x006d5260);
    /* 006d5260: mov dword ptr [esi + 0x20], 3 */ W32((u32)(r_esi+0x20u), 0x3u);
    /* 006d5267: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d5269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d526a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d526b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d526c: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5271: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6d5276u); f_00814298();
    /* 006d5276: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d5279: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d527a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d527b: ret  */ FN_RET(0x006d5200); r_esp += 4; return;
L_006d527c:; BB(0x006d527c);
    /* 006d527c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d527e: je 0x6d52e2 */ if (fZ) goto L_006d52e2;
L_006d5280:; BB(0x006d5280);
    /* 006d5280: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d5282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5285: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006d528a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6d528fu); f_00814298();
    /* 006d528f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5292: mov ecx, esi */ r_ecx = r_esi;
    /* 006d5294: call 0x6d5318 */ r_esp -= 4; W32(r_esp, 0x6d5299u); f_006d5318();
    /* 006d5299: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d529b: je 0x6d5302 */ if (fZ) goto L_006d5302;
L_006d529d:; BB(0x006d529d);
    /* 006d529d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d52a0: je 0x6d52ed */ if (fZ) goto L_006d52ed;
L_006d52a2:; BB(0x006d52a2);
    /* 006d52a2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d52a5: je 0x6d52d0 */ if (fZ) goto L_006d52d0;
L_006d52a7:; BB(0x006d52a7);
    /* 006d52a7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d52aa: jne 0x6d52c1 */ if (!fZ) goto L_006d52c1;
L_006d52ac:; BB(0x006d52ac);
    /* 006d52ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d52ae: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 006d52b0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d52b2: mov ecx, esi */ r_ecx = r_esi;
    /* 006d52b4: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d52b7u); call_ind(t); }
    /* 006d52b7: mov dword ptr [esi + 0x20], 7 */ W32((u32)(r_esi+0x20u), 0x7u);
    /* 006d52be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d52bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d52c0: ret  */ FN_RET(0x006d5200); r_esp += 4; return;
L_006d52c1:; BB(0x006d52c1);
    /* 006d52c1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d52c4: jne 0x6d52e2 */ if (!fZ) goto L_006d52e2;
L_006d52c6:; BB(0x006d52c6);
    /* 006d52c6: mov dword ptr [esi + 0x20], 8 */ W32((u32)(r_esi+0x20u), 0x8u);
    /* 006d52cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d52ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d52cf: ret  */ FN_RET(0x006d5200); r_esp += 4; return;
L_006d52d0:; BB(0x006d52d0);
    /* 006d52d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d52d2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006d52d4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d52d6: mov ecx, esi */ r_ecx = r_esi;
    /* 006d52d8: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d52dbu); call_ind(t); }
    /* 006d52db: mov dword ptr [esi + 0x20], 7 */ W32((u32)(r_esi+0x20u), 0x7u);
L_006d52e2:; BB(0x006d52e2);
    /* 006d52e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d52e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d52e4: ret  */ FN_RET(0x006d5200); r_esp += 4; return;
L_006d52e5:; BB(0x006d52e5);
    /* 006d52e5: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 006d52e8: jmp 0x6d5238 */ goto L_006d5238;
L_006d52ed:; BB(0x006d52ed);
    /* 006d52ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d52ef: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006d52f1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d52f3: mov ecx, esi */ r_ecx = r_esi;
    /* 006d52f5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d52f8u); call_ind(t); }
    /* 006d52f8: mov dword ptr [esi + 0x20], 6 */ W32((u32)(r_esi+0x20u), 0x6u);
    /* 006d52ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d5300: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5301: ret  */ FN_RET(0x006d5200); r_esp += 4; return;
L_006d5302:; BB(0x006d5302);
    /* 006d5302: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5304: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006d5306: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006d5308: mov ecx, esi */ r_ecx = r_esi;
    /* 006d530a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d530du); call_ind(t); }
    /* 006d530d: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
    /* 006d5314: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d5315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5316: ret  */ FN_RET(0x006d5200); r_esp += 4; return;
}

void f_006d5318(void) /* sub_6D5318 */
{
    FN_ENTER(0x006d5318);
    /* 006d5318: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5319: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d531a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d531b: mov edi, ecx */ r_edi = r_ecx;
    /* 006d531d: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006d5320: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
    /* 006d5327: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5329: je 0x6d534b */ if (fZ) goto L_006d534b;
L_006d532b:; BB(0x006d532b);
    /* 006d532b: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d5330u); f_00737d90();
    /* 006d5330: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006d5333: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 006d5339: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006d533c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d533e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d5340: lea esi, [edi + eax] */ r_esi = (u32)(r_edi+r_eax);
    /* 006d5343: mov esi, dword ptr [esi + 0x60] */ r_esi = R32((u32)(r_esi+0x60u));
    /* 006d5346: cmp esi, dword ptr [edx + 0x20] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d5349: jle 0x6d5351 */ if ((fZ||fS!=fO)) goto L_006d5351;
L_006d534b:; BB(0x006d534b);
    /* 006d534b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d534d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d534e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d534f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5350: ret  */ FN_RET(0x006d5318); r_esp += 4; return;
L_006d5351:; BB(0x006d5351);
    /* 006d5351: lea esi, [edi + eax + 0x50] */ r_esi = (u32)(r_edi+r_eax+0x50u);
    /* 006d5355: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5356: call 0x68ec44 */ r_esp -= 4; W32(r_esp, 0x6d535bu); f_0068ec44();
    /* 006d535b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d535d: jne 0x6d5368 */ if (!fZ) goto L_006d5368;
L_006d535f:; BB(0x006d535f);
    /* 006d535f: mov eax, 1 */ r_eax = 0x1u;
    /* 006d5364: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5365: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5366: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5367: ret  */ FN_RET(0x006d5318); r_esp += 4; return;
L_006d5368:; BB(0x006d5368);
    /* 006d5368: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006d536b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d536c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d536d: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d5370: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x6d5375u); f_005c9e40();
    /* 006d5375: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5378: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d537a: jne 0x6d5395 */ if (!fZ) goto L_006d5395;
L_006d537c:; BB(0x006d537c);
    /* 006d537c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006d537f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5381: je 0x6d538c */ if (fZ) goto L_006d538c;
L_006d5383:; BB(0x006d5383);
    /* 006d5383: mov eax, 2 */ r_eax = 0x2u;
    /* 006d5388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5389: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d538a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d538b: ret  */ FN_RET(0x006d5318); r_esp += 4; return;
L_006d538c:; BB(0x006d538c);
    /* 006d538c: mov eax, 3 */ r_eax = 0x3u;
    /* 006d5391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5392: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5393: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5394: ret  */ FN_RET(0x006d5318); r_esp += 4; return;
L_006d5395:; BB(0x006d5395);
    /* 006d5395: mov dword ptr [edi + 0x4c], 1 */ W32((u32)(r_edi+0x4cu), 0x1u);
    /* 006d539c: mov eax, 4 */ r_eax = 0x4u;
    /* 006d53a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d53a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d53a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d53a4: ret  */ FN_RET(0x006d5318); r_esp += 4; return;
}

void f_006d53a8(void) /* sub_6D53A8 */
{
    FN_ENTER(0x006d53a8);
    /* 006d53a8: mov dword ptr [0xa96218], 0x3f800000 */ W32((u32)(0xa96218u), 0x3f800000u);
    /* 006d53b2: mov dword ptr [0xa9621c], 0x41000000 */ W32((u32)(0xa9621cu), 0x41000000u);
    /* 006d53bc: mov dword ptr [0xa96220], 0x3fc00000 */ W32((u32)(0xa96220u), 0x3fc00000u);
    /* 006d53c6: ret  */ FN_RET(0x006d53a8); r_esp += 4; return;
}

void f_006d53c8(void) /* sub_6D53C8 */
{
    FN_ENTER(0x006d53c8);
    /* 006d53c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d53c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d53ca: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d53cc: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006d53cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d53d1: je 0x6d53dd */ if (fZ) goto L_006d53dd;
L_006d53d3:; BB(0x006d53d3);
    /* 006d53d3: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d53da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d53db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d53dc: ret  */ FN_RET(0x006d53c8); r_esp += 4; return;
L_006d53dd:; BB(0x006d53dd);
    /* 006d53dd: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d53df: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d53e4u); f_0073ec50();
    /* 006d53e4: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006d53e7: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d53eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d53ec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d53ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d53ef: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d53f4u); f_007354fc();
    /* 006d53f4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d53f6: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 006d53f9: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d53feu); f_006dbdb8();
    /* 006d53fe: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5401: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5403: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5405: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d5408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5409: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d540eu); f_00735c90();
    /* 006d540e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5410: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d5415u); f_006dbdb8();
    /* 006d5415: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5416: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5418: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d541a: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d541d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d541e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d5423u); f_00735c90();
    /* 006d5423: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d5426: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d542bu); f_0073608c();
    /* 006d542b: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d542e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d5433u); f_00736458();
    /* 006d5433: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 006d5436: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d543d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d5442: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d5449: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d544b: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d5450u); f_006dc8d8();
    /* 006d5450: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d5453: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d5455: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d545au); f_006dc8d8();
    /* 006d545a: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006d545d: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5460: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d5464: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d5467: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d546b: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d5470u); f_0070f5a4();
    /* 006d5470: jmp 0x6d53d3 */ goto L_006d53d3;
}

void f_006d5440(void)
{
    FN_ENTER(0x006d5440);
}

void f_006d5478(void) /* sub_6D5478 */
{
    FN_ENTER(0x006d5478);
    /* 006d5478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5479: mov edi, ecx */ r_edi = r_ecx;
    /* 006d547b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d547d: mov ecx, edi */ r_ecx = r_edi;
    /* 006d547f: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d5482u); call_ind(t); }
    /* 006d5482: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5484: jne 0x6d5488 */ if (!fZ) goto L_006d5488;
L_006d5486:; BB(0x006d5486);
    /* 006d5486: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5487: ret  */ FN_RET(0x006d5478); r_esp += 4; return;
L_006d5488:; BB(0x006d5488);
    /* 006d5488: mov ecx, edi */ r_ecx = r_edi;
    /* 006d548a: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d548fu); f_006dc988();
    /* 006d548f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5491: je 0x6d54c9 */ if (fZ) goto L_006d54c9;
L_006d5493:; BB(0x006d5493);
    /* 006d5493: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5495: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d5497: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d5499: mov ecx, edi */ r_ecx = r_edi;
    /* 006d549b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d549eu); call_ind(t); }
    /* 006d549e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 006d54a1: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d54a8: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d54ad: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d54b0: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d54b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d54b9: je 0x6d54c2 */ if (fZ) goto L_006d54c2;
L_006d54bb:; BB(0x006d54bb);
    /* 006d54bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d54bd: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d54c2u); f_00760acc();
L_006d54c2:; BB(0x006d54c2);
    /* 006d54c2: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
L_006d54c9:; BB(0x006d54c9);
    /* 006d54c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d54ca: ret  */ FN_RET(0x006d5478); r_esp += 4; return;
}

void f_006d54cc(void) /* sub_6D54CC */
{
    FN_ENTER(0x006d54cc);
    /* 006d54cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d54cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006d54cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d54d1: push 0x8edf54 */ { u32 v = 0x8edf54u; r_esp -= 4; W32(r_esp, v); }
    /* 006d54d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d54dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d54dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d54e4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d54e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d54ea: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006d54ed: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006d54f0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006d54f3: mov eax, dword ptr [0xa963ac] */ r_eax = R32((u32)(0xa963acu));
    /* 006d54f8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d54fb: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 006d54fe: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d5500: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d5502: jle 0x6d5544 */ if ((fZ||fS!=fO)) goto L_006d5544;
L_006d5504:; BB(0x006d5504);
    /* 006d5504: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 006d5507: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5509: call 0x6dcbe8 */ r_esp -= 4; W32(r_esp, 0x6d550eu); f_006dcbe8();
    /* 006d550e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5511: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006d5514: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5517: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 006d551a: mov dword ptr [edx + eax*4 + 0x50], ecx */ W32((u32)(r_edx+r_eax*4+0x50u), r_ecx);
    /* 006d551e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d5521: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 006d5524: mov dword ptr [edx + eax*4 + 0x54], esi */ W32((u32)(r_edx+r_eax*4+0x54u), r_esi);
    /* 006d5528: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 006d552b: mov dword ptr [edx + eax*4 + 0x58], edi */ W32((u32)(r_edx+r_eax*4+0x58u), r_edi);
    /* 006d552f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006d5532: mov dword ptr [edx + eax*4 + 0x5c], ecx */ W32((u32)(r_edx+r_eax*4+0x5cu), r_ecx);
    /* 006d5536: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006d5539: mov dword ptr [edx + eax*4 + 0x60], ecx */ W32((u32)(r_edx+r_eax*4+0x60u), r_ecx);
    /* 006d553d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006d5540: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d5542: jl 0x6d5504 */ if ((fS!=fO)) goto L_006d5504;
L_006d5544:; BB(0x006d5544);
    /* 006d5544: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5547: lea esi, [edx + 0x50] */ r_esi = (u32)(r_edx+0x50u);
    /* 006d554a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d554c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d554e: jle 0x6d5572 */ if ((fZ||fS!=fO)) goto L_006d5572;
L_006d5550:; BB(0x006d5550);
    /* 006d5550: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006d5553: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5556: je 0x6d5568 */ if (fZ) goto L_006d5568;
L_006d5558:; BB(0x006d5558);
    /* 006d5558: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5559: call 0x5c9b80 */ r_esp -= 4; W32(r_esp, 0x6d555eu); f_005c9b80();
    /* 006d555e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d555f: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 006d5562: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5565: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
L_006d5568:; BB(0x006d5568);
    /* 006d5568: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d556b: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d556e: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d5570: jl 0x6d5550 */ if ((fS!=fO)) goto L_006d5550;
L_006d5572:; BB(0x006d5572);
    /* 006d5572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5575: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d5578: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d557a: je 0x6d5728 */ if (fZ) goto L_006d5728;
L_006d5580:; BB(0x006d5580);
    /* 006d5580: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x6d5585u); f_00737d70();
    /* 006d5585: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5588: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d558b: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x6d5590u); f_00737d1c();
    /* 006d5590: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5593: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
L_006d5596:; BB(0x006d5596);
    /* 006d5596: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5598: je 0x6d5611 */ if (fZ) goto L_006d5611;
L_006d559a:; BB(0x006d559a);
    /* 006d559a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d559d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006d55a0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006d55a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d55a4: jle 0x6d55d9 */ if ((fZ||fS!=fO)) goto L_006d55d9;
L_006d55a6:; BB(0x006d55a6);
    /* 006d55a6: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006d55a9: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 006d55ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d55ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d55b0: lea edi, [esi + eax] */ r_edi = (u32)(r_esi+r_eax);
    /* 006d55b3: mov esi, dword ptr [edi + 0x60] */ r_esi = R32((u32)(r_edi+0x60u));
    /* 006d55b6: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d55b9: je 0x6d55d2 */ if (fZ) goto L_006d55d2;
L_006d55bb:; BB(0x006d55bb);
    /* 006d55bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d55be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d55bf: lea eax, [edx + eax + 0x50] */ r_eax = (u32)(r_edx+r_eax+0x50u);
    /* 006d55c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d55c4: call 0x7375a4 */ r_esp -= 4; W32(r_esp, 0x6d55c9u); f_007375a4();
    /* 006d55c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d55cc: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006d55cf: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
L_006d55d2:; BB(0x006d55d2);
    /* 006d55d2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006d55d5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d55d7: jl 0x6d55a6 */ if ((fS!=fO)) goto L_006d55a6;
L_006d55d9:; BB(0x006d55d9);
    /* 006d55d9: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6d55deu); f_00737cdc();
    /* 006d55de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d55e1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d55e4: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d55eb: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006d55f1: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006d55f8: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 006d55fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d55fd: je 0x6d5606 */ if (fZ) goto L_006d5606;
L_006d55ff:; BB(0x006d55ff);
    /* 006d55ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5601: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d5606u); f_00760acc();
L_006d5606:; BB(0x006d5606);
    /* 006d5606: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5609: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006d560c: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x6d5611u); f_00737da4();
L_006d5611:; BB(0x006d5611);
    /* 006d5611: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5614: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d5617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5619: je 0x6d5671 */ if (fZ) goto L_006d5671;
L_006d561b:; BB(0x006d561b);
    /* 006d561b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d561e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006d5621: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5623: je 0x6d5648 */ if (fZ) goto L_006d5648;
L_006d5625:; BB(0x006d5625);
    /* 006d5625: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5628: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d562a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 006d562c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d562e: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d5631u); call_ind(t); }
    /* 006d5631: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d5634: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d5637: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d563a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d563d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d5644: mov esp, ebp */ r_esp = r_ebp;
    /* 006d5646: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5647: ret  */ FN_RET(0x006d54cc); r_esp += 4; return;
L_006d5648:; BB(0x006d5648);
    /* 006d5648: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006d564b: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d564f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5650: call 0x715b58 */ r_esp -= 4; W32(r_esp, 0x6d5655u); f_00715b58();
    /* 006d5655: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5656: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5659: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006d565c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d565e: je 0x6d5625 */ if (fZ) goto L_006d5625;
L_006d5660:; BB(0x006d5660);
    /* 006d5660: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 006d5663: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d5665: jle 0x6d5625 */ if ((fZ||fS!=fO)) goto L_006d5625;
L_006d5667:; BB(0x006d5667);
    /* 006d5667: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5668: mov ecx, eax */ r_ecx = r_eax;
    /* 006d566a: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d566fu); f_00715c74();
    /* 006d566f: jmp 0x6d5625 */ goto L_006d5625;
L_006d5671:; BB(0x006d5671);
    /* 006d5671: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006d5678: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006d567d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d5682u); f_005caba4();
    /* 006d5682: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d5685: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5688: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006d568b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d568d: je 0x6d5721 */ if (fZ) goto L_006d5721;
L_006d5693:; BB(0x006d5693);
    /* 006d5693: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006d569a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d56a1: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006d56a3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d56a8u); f_0073ec50();
    /* 006d56a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d56a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d56ac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d56af: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006d56b2: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006d56b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d56b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d56b8: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6d56bdu); f_00725d18();
    /* 006d56bd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006d56c4:; BB(0x006d56c4);
    /* 006d56c4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d56c7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d56ca: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006d56cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d56d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d56d6: je 0x6d570d */ if (fZ) goto L_006d570d;
L_006d56d8:; BB(0x006d56d8);
    /* 006d56d8: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d56ddu); f_0078b208();
    /* 006d56dd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d56e0: jg 0x6d56ed */ if ((!fZ&&fS==fO)) goto L_006d56ed;
L_006d56e2:; BB(0x006d56e2);
    /* 006d56e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d56e5: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006d56e8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006d56eb: jmp 0x6d570d */ goto L_006d570d;
L_006d56ed:; BB(0x006d56ed);
    /* 006d56ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d56f0: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 006d56f3: mov dword ptr [eax + 0xa8], 0x3f400000 */ W32((u32)(r_eax+0xa8u), 0x3f400000u);
    /* 006d56fd: mov dword ptr [eax + 0xac], 0x3f400000 */ W32((u32)(r_eax+0xacu), 0x3f400000u);
    /* 006d5707: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006d570a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006d570d:; BB(0x006d570d);
    /* 006d570d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5710: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006d5713: lea edx, [eax + 0x50] */ r_edx = (u32)(r_eax+0x50u);
    /* 006d5716: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5717: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6d571cu); f_00725fa8();
    /* 006d571c: jmp 0x6d561b */ goto L_006d561b;
L_006d5721:; BB(0x006d5721);
    /* 006d5721: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d5723: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006d5726: jmp 0x6d56c4 */ goto L_006d56c4;
L_006d5728:; BB(0x006d5728);
    /* 006d5728: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 006d572a: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d572fu); f_006dbdb8();
    /* 006d572f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5732: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006d5735: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d5739: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d573a: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d573d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d573e: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6d5743u); f_0073ff34();
    /* 006d5743: mov ecx, eax */ r_ecx = r_eax;
    /* 006d5745: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5748: mov edx, ebx */ r_edx = r_ebx;
    /* 006d574a: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006d574d: jmp 0x6d5596 */ goto L_006d5596;
}

void f_006d5754(void) /* sub_6D5754 */
{
    FN_ENTER(0x006d5754);
    /* 006d5754: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5755: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d5757: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d5759: call 0x6d5778 */ r_esp -= 4; W32(r_esp, 0x6d575eu); f_006d5778();
    /* 006d575e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006d5762: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5764: jne 0x6d576a */ if (!fZ) goto L_006d576a;
L_006d5766:; BB(0x006d5766);
    /* 006d5766: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d5767: ret 4 */ FN_RET(0x006d5754); r_esp += 8; return;
L_006d576a:; BB(0x006d576a);
    /* 006d576a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d576b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6d5770u); f_005c2f74();
    /* 006d5770: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5771: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d5772: ret 4 */ FN_RET(0x006d5754); r_esp += 8; return;
}

void f_006d5778(void) /* sub_6D5778 */
{
    FN_ENTER(0x006d5778);
    /* 006d5778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d5779: mov ebp, esp */ r_ebp = r_esp;
    /* 006d577b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d577d: push 0x8edf70 */ { u32 v = 0x8edf70u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5782: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d5788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5789: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d5790: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d5793: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d5796: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006d5799: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006d579c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006d579f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006d57a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d57a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d57ac: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 006d57b2: mov dword ptr [ecx], 0xb3c4f8 */ W32((u32)(r_ecx), 0xb3c4f8u);
    /* 006d57b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d57ba: je 0x6d57d0 */ if (fZ) goto L_006d57d0;
L_006d57bc:; BB(0x006d57bc);
    /* 006d57bc: mov ecx, eax */ r_ecx = r_eax;
    /* 006d57be: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d57c3u); f_007127b0();
    /* 006d57c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d57c6: mov dword ptr [ecx + 0x38c], 0 */ W32((u32)(r_ecx+0x38cu), 0x0u);
L_006d57d0:; BB(0x006d57d0);
    /* 006d57d0: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 006d57d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d57d8: je 0x6d57ee */ if (fZ) goto L_006d57ee;
L_006d57da:; BB(0x006d57da);
    /* 006d57da: mov ecx, eax */ r_ecx = r_eax;
    /* 006d57dc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d57e1u); f_007127b0();
    /* 006d57e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d57e4: mov dword ptr [ecx + 0x390], 0 */ W32((u32)(r_ecx+0x390u), 0x0u);
L_006d57ee:; BB(0x006d57ee);
    /* 006d57ee: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 006d57f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d57f6: je 0x6d580c */ if (fZ) goto L_006d580c;
L_006d57f8:; BB(0x006d57f8);
    /* 006d57f8: mov ecx, eax */ r_ecx = r_eax;
    /* 006d57fa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d57ffu); f_007127b0();
    /* 006d57ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d5802: mov dword ptr [ecx + 0x394], 0 */ W32((u32)(r_ecx+0x394u), 0x0u);
L_006d580c:; BB(0x006d580c);
    /* 006d580c: mov eax, dword ptr [ecx + 0x39c] */ r_eax = R32((u32)(r_ecx+0x39cu));
    /* 006d5812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5814: je 0x6d582a */ if (fZ) goto L_006d582a;
L_006d5816:; BB(0x006d5816);
    /* 006d5816: mov ecx, eax */ r_ecx = r_eax;
    /* 006d5818: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d581du); f_007127b0();
    /* 006d581d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d5820: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
L_006d582a:; BB(0x006d582a);
    /* 006d582a: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 006d5830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5832: je 0x6d5848 */ if (fZ) goto L_006d5848;
L_006d5834:; BB(0x006d5834);
    /* 006d5834: mov ecx, eax */ r_ecx = r_eax;
    /* 006d5836: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d583bu); f_007127b0();
    /* 006d583b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d583e: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
L_006d5848:; BB(0x006d5848);
    /* 006d5848: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 006d584e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5850: je 0x6d5866 */ if (fZ) goto L_006d5866;
L_006d5852:; BB(0x006d5852);
    /* 006d5852: mov ecx, eax */ r_ecx = r_eax;
    /* 006d5854: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5859u); f_007127b0();
    /* 006d5859: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d585c: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
L_006d5866:; BB(0x006d5866);
    /* 006d5866: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d586d: call 0x6dc848 */ r_esp -= 4; W32(r_esp, 0x6d5872u); f_006dc848();
    /* 006d5872: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d5875: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d587c: mov esp, ebp */ r_esp = r_ebp;
    /* 006d587e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d587f: ret  */ FN_RET(0x006d5778); r_esp += 4; return;
}

void f_006d5880(void) /* sub_6D5880 */
{
    FN_ENTER(0x006d5880);
    /* 006d5880: mov ecx, dword ptr [ecx + 0x388] */ r_ecx = R32((u32)(r_ecx+0x388u));
    /* 006d5886: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5888: je 0x6d5897 */ if (fZ) goto L_006d5897;
L_006d588a:; BB(0x006d588a);
    /* 006d588a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d588e: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d5892: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d5894: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d5897u); call_ind(t); }
L_006d5897:; BB(0x006d5897);
    /* 006d5897: ret 8 */ FN_RET(0x006d5880); r_esp += 12; return;
}

void f_006d589c(void) /* sub_6D589C */
{
    FN_ENTER(0x006d589c);
    /* 006d589c: mov ecx, dword ptr [ecx + 0x388] */ r_ecx = R32((u32)(r_ecx+0x388u));
    /* 006d58a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d58a4: je 0x6d58b3 */ if (fZ) goto L_006d58b3;
L_006d58a6:; BB(0x006d58a6);
    /* 006d58a6: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d58aa: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d58ae: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006d58b0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x6d58b3u); call_ind(t); }
L_006d58b3:; BB(0x006d58b3);
    /* 006d58b3: ret 8 */ FN_RET(0x006d589c); r_esp += 12; return;
}

void f_006d58b8(void) /* sub_6D58B8 */
{
    FN_ENTER(0x006d58b8);
    /* 006d58b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d58b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d58bb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d58bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d58c1: call 0x6dc898 */ r_esp -= 4; W32(r_esp, 0x6d58c6u); f_006dc898();
    /* 006d58c6: mov dword ptr [ebx], 0xb3c4f8 */ W32((u32)(r_ebx), 0xb3c4f8u);
    /* 006d58cc: mov edx, dword ptr [0x9cf0e4] */ r_edx = R32((u32)(0x9cf0e4u));
    /* 006d58d2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006d58d5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006d58d9: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 006d58e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d58e5: mov dword ptr [ebx + 0x370], eax */ W32((u32)(r_ebx+0x370u), r_eax);
    /* 006d58eb: mov dword ptr [ebx + 0x374], eax */ W32((u32)(r_ebx+0x374u), r_eax);
    /* 006d58f1: mov dword ptr [ebx + 0x378], edx */ W32((u32)(r_ebx+0x378u), r_edx);
    /* 006d58f7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006d58fb: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 006d58fe: mov dword ptr [ebx + 0x380], eax */ W32((u32)(r_ebx+0x380u), r_eax);
    /* 006d5904: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 006d590a: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 006d5910: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006d5914: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5919: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 006d591f: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 006d5925: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5927: mov dword ptr [ebx + 0x394], eax */ W32((u32)(r_ebx+0x394u), r_eax);
    /* 006d592d: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 006d5933: mov dword ptr [ebx + 0x398], eax */ W32((u32)(r_ebx+0x398u), r_eax);
    /* 006d5939: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 006d593f: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 006d5942: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 006d5948: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 006d594e: lea eax, [ebx + 0x28] */ r_eax = (u32)(r_ebx+0x28u);
    /* 006d5951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5952: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6d5957u); f_0086b688();
    /* 006d5957: mov eax, ebx */ r_eax = r_ebx;
    /* 006d5959: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d595c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d595d: ret 0x10 */ FN_RET(0x006d58b8); r_esp += 20; return;
}

void f_006d5960(void) /* sub_6D5960 */
{
    FN_ENTER(0x006d5960);
    /* 006d5960: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5961: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006d5963: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006d5966: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d5969: ja 0x6d59f0 */ if ((!fC&&!fZ)) goto L_006d59f0;
L_006d596f:; BB(0x006d596f);
    /* 006d596f: mov eax, dword ptr [eax*4 + 0x96c220] */ r_eax = R32((u32)(r_eax*4+0x96c220u));
    /* 006d5976: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006d59f0:; BB(0x006d59f0);
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d5960); r_esp += 4; return;
}

void f_006d5978(void)
{
    FN_ENTER(0x006d5978);
    /* 006d5978: mov eax, dword ptr [ebx + 0x3a4] */ r_eax = R32((u32)(r_ebx+0x3a4u));
    /* 006d597e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5980: je 0x6d598b */ if (fZ) goto L_006d598b;
L_006d5982:; BB(0x006d5982);
    /* 006d5982: push dword ptr [ebx + 0x388] */ { u32 v = R32((u32)(r_ebx+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d5988: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d598au); call_ind(t); }
    /* 006d598a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d598b:; BB(0x006d598b);
    /* 006d598b: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d598f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5994: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006d5998: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d5999: ret  */ FN_RET(0x006d5978); r_esp += 4; return;
}

void f_006d599a(void)
{
    FN_ENTER(0x006d599a);
    /* 006d599a: mov eax, dword ptr [ebx + 0x3a8] */ r_eax = R32((u32)(r_ebx+0x3a8u));
    /* 006d59a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d59a2: je 0x6d59ad */ if (fZ) goto L_006d59ad;
L_006d59a4:; BB(0x006d59a4);
    /* 006d59a4: push dword ptr [ebx + 0x388] */ { u32 v = R32((u32)(r_ebx+0x388u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d59aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6d59acu); call_ind(t); }
    /* 006d59ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006d59ad:; BB(0x006d59ad);
    /* 006d59ad: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006d59b1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d59b6: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006d59ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59bb: ret  */ FN_RET(0x006d599a); r_esp += 4; return;
}

void f_006d59bc(void)
{
    FN_ENTER(0x006d59bc);
    /* 006d59bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d59be: call 0x6d59f4 */ r_esp -= 4; W32(r_esp, 0x6d59c3u); f_006d59f4();
    /* 006d59c3: jmp 0x6d59f0 */ goto L_006d59f0;
L_006d59f0:; BB(0x006d59f0);
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d59bc); r_esp += 4; return;
}

void f_006d59c5(void)
{
    FN_ENTER(0x006d59c5);
    /* 006d59c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d59c7: call 0x6d5a2c */ r_esp -= 4; W32(r_esp, 0x6d59ccu); f_006d5a2c();
    /* 006d59cc: jmp 0x6d59f0 */ goto L_006d59f0;
L_006d59f0:; BB(0x006d59f0);
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d59c5); r_esp += 4; return;
}

void f_006d59ce(void)
{
    FN_ENTER(0x006d59ce);
    /* 006d59ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d59d0: call 0x6d5a60 */ r_esp -= 4; W32(r_esp, 0x6d59d5u); f_006d5a60();
    /* 006d59d5: jmp 0x6d59f0 */ goto L_006d59f0;
L_006d59f0:; BB(0x006d59f0);
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d59ce); r_esp += 4; return;
}

void f_006d59d7(void)
{
    FN_ENTER(0x006d59d7);
    /* 006d59d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d59d9: call 0x6d5b80 */ r_esp -= 4; W32(r_esp, 0x6d59deu); f_006d5b80();
    /* 006d59de: jmp 0x6d59f0 */ goto L_006d59f0;
L_006d59f0:; BB(0x006d59f0);
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d59d7); r_esp += 4; return;
}

void f_006d59e0(void)
{
    FN_ENTER(0x006d59e0);
    /* 006d59e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d59e2: call 0x6d5c94 */ r_esp -= 4; W32(r_esp, 0x6d59e7u); f_006d5c94();
    /* 006d59e7: jmp 0x6d59f0 */ goto L_006d59f0;
L_006d59f0:; BB(0x006d59f0);
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d59e0); r_esp += 4; return;
}

void f_006d59e9(void)
{
    FN_ENTER(0x006d59e9);
    /* 006d59e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d59eb: call 0x6d600c */ r_esp -= 4; W32(r_esp, 0x6d59f0u); f_006d600c();
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d59e9); r_esp += 4; return;
}

void f_006d59f0(void)
{
    FN_ENTER(0x006d59f0);
    /* 006d59f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006d59f1: ret  */ FN_RET(0x006d59f0); r_esp += 4; return;
}

void f_006d59f4(void) /* sub_6D59F4 */
{
    FN_ENTER(0x006d59f4);
    /* 006d59f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d59f5: mov edi, ecx */ r_edi = r_ecx;
    /* 006d59f7: mov edx, dword ptr [edi + 0x38c] */ r_edx = R32((u32)(r_edi+0x38cu));
    /* 006d59fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d59ff: je 0x6d5a22 */ if (fZ) goto L_006d5a22;
L_006d5a01:; BB(0x006d5a01);
    /* 006d5a01: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d5a08: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006d5a0d: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006d5a10: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d5a17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5a19: je 0x6d5a22 */ if (fZ) goto L_006d5a22;
L_006d5a1b:; BB(0x006d5a1b);
    /* 006d5a1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5a1d: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6d5a22u); f_00760acc();
L_006d5a22:; BB(0x006d5a22);
    /* 006d5a22: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 006d5a29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5a2a: ret  */ FN_RET(0x006d59f4); r_esp += 4; return;
}

void f_006d5a2c(void) /* sub_6D5A2C */
{
    FN_ENTER(0x006d5a2c);
    /* 006d5a2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d5a2d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d5a2f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d5a32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d5a34: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6d5a37u); call_ind(t); }
    /* 006d5a37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5a39: jne 0x6d5a3d */ if (!fZ) goto L_006d5a3d;
L_006d5a3b:; BB(0x006d5a3b);
    /* 006d5a3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5a3c: ret  */ FN_RET(0x006d5a2c); r_esp += 4; return;
L_006d5a3d:; BB(0x006d5a3d);
    /* 006d5a3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d5a3f: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6d5a44u); f_006dc988();
    /* 006d5a44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5a46: je 0x6d5a5b */ if (fZ) goto L_006d5a5b;
L_006d5a48:; BB(0x006d5a48);
    /* 006d5a48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5a4a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006d5a4c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006d5a4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d5a51: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d5a54u); call_ind(t); }
    /* 006d5a54: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
L_006d5a5b:; BB(0x006d5a5b);
    /* 006d5a5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5a5c: ret  */ FN_RET(0x006d5a2c); r_esp += 4; return;
}

void f_006d5a60(void) /* sub_6D5A60 */
{
    FN_ENTER(0x006d5a60);
    /* 006d5a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d5a61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5a62: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006d5a64: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 006d5a6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5a6c: je 0x6d5aa2 */ if (fZ) goto L_006d5aa2;
L_006d5a6e:; BB(0x006d5a6e);
    /* 006d5a6e: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d5a72: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d5a74: je 0x6d5aa2 */ if (fZ) goto L_006d5aa2;
L_006d5a76:; BB(0x006d5a76);
    /* 006d5a76: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 006d5a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5a7e: je 0x6d5aca */ if (fZ) goto L_006d5aca;
L_006d5a80:; BB(0x006d5a80);
    /* 006d5a80: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 006d5a83: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 006d5a89: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5a8eu); f_007127b0();
    /* 006d5a8e: mov dword ptr [ebp + 0x394], 0 */ W32((u32)(r_ebp+0x394u), 0x0u);
    /* 006d5a98: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 006d5a9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5aa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5aa1: ret  */ FN_RET(0x006d5a60); r_esp += 4; return;
L_006d5aa2:; BB(0x006d5aa2);
    /* 006d5aa2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5aa4: je 0x6d5ac7 */ if (fZ) goto L_006d5ac7;
L_006d5aa6:; BB(0x006d5aa6);
    /* 006d5aa6: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 006d5aaa: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5aac: je 0x6d5ac7 */ if (fZ) goto L_006d5ac7;
L_006d5aae:; BB(0x006d5aae);
    /* 006d5aae: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5ab3u); f_007127b0();
    /* 006d5ab3: mov dword ptr [ebp + 0x394], 0 */ W32((u32)(r_ebp+0x394u), 0x0u);
    /* 006d5abd: mov dword ptr [ebp + 0x20], 5 */ W32((u32)(r_ebp+0x20u), 0x5u);
    /* 006d5ac4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5ac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5ac6: ret  */ FN_RET(0x006d5a60); r_esp += 4; return;
L_006d5ac7:; BB(0x006d5ac7);
    /* 006d5ac7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5ac8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5ac9: ret  */ FN_RET(0x006d5a60); r_esp += 4; return;
L_006d5aca:; BB(0x006d5aca);
    /* 006d5aca: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d5acc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d5ad1u); f_0073ec50();
    /* 006d5ad1: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006d5ad4: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006d5ad8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5ad9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5adc: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d5ae1u); f_007354fc();
    /* 006d5ae1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5ae3: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 006d5ae9: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d5aeeu); f_006dbdb8();
    /* 006d5aee: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5af1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5af3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5af5: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 006d5afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5afc: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d5b01u); f_00735c90();
    /* 006d5b01: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5b03: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d5b08u); f_006dbdb8();
    /* 006d5b08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5b09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5b0b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5b0d: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 006d5b13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5b14: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d5b19u); f_00735c90();
    /* 006d5b19: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 006d5b1f: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d5b24u); f_0073608c();
    /* 006d5b24: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 006d5b2a: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d5b2fu); f_00736458();
    /* 006d5b2f: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 006d5b35: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d5b3c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d5b41: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d5b48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d5b4a: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d5b4fu); f_006dc8d8();
    /* 006d5b4f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d5b52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006d5b54: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d5b59u); f_006dc8d8();
    /* 006d5b59: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 006d5b5f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5b62: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006d5b66: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d5b69: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d5b6d: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d5b72u); f_0070f5a4();
    /* 006d5b72: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 006d5b78: jmp 0x6d5a80 */ goto L_006d5a80;
}

void f_006d5b80(void) /* sub_6D5B80 */
{
    FN_ENTER(0x006d5b80);
    /* 006d5b80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5b81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5b82: mov edi, ecx */ r_edi = r_ecx;
    /* 006d5b84: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 006d5b8a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5b8c: je 0x6d5c47 */ if (fZ) goto L_006d5c47;
L_006d5b92:; BB(0x006d5b92);
    /* 006d5b92: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d5b99: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d5b9b: je 0x6d5c47 */ if (fZ) goto L_006d5c47;
L_006d5ba1:; BB(0x006d5ba1);
    /* 006d5ba1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6d5ba6u); f_007365f4();
    /* 006d5ba6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5ba8: je 0x6d5bbe */ if (fZ) goto L_006d5bbe;
L_006d5baa:; BB(0x006d5baa);
    /* 006d5baa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5bad: je 0x6d5c72 */ if (fZ) goto L_006d5c72;
L_006d5bb3:; BB(0x006d5bb3);
    /* 006d5bb3: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 006d5bb9: jmp 0x6d5c47 */ goto L_006d5c47;
L_006d5bbe:; BB(0x006d5bbe);
    /* 006d5bbe: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 006d5bc4: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d5bc9u); f_00737d90();
    /* 006d5bc9: mov esi, eax */ r_esi = r_eax;
    /* 006d5bcb: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006d5bce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5bd0: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006d5bd3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d5bd5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006d5bd7: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006d5bd9: mov eax, dword ptr [ecx + edi + 0x28] */ r_eax = R32((u32)(r_ecx+r_edi+0x28u));
    /* 006d5bdd: mov edx, dword ptr [edi + 0x37c] */ r_edx = R32((u32)(r_edi+0x37cu));
    /* 006d5be3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5be4: mov ecx, dword ptr [ecx + edi + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_edi+0x3cu));
    /* 006d5be8: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006d5beb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5bec: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d5bf2: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006d5bf5: call 0x68f230 */ r_esp -= 4; W32(r_esp, 0x6d5bfau); f_0068f230();
    /* 006d5bfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5bfc: je 0x6d5c1d */ if (fZ) goto L_006d5c1d;
L_006d5bfe:; BB(0x006d5bfe);
    /* 006d5bfe: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 006d5c04: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5c09u); f_007127b0();
    /* 006d5c09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5c0b: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 006d5c11: mov dword ptr [edi + 0x380], esi */ W32((u32)(r_edi+0x380u), r_esi);
    /* 006d5c17: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 006d5c1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5c1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5c1c: ret  */ FN_RET(0x006d5b80); r_esp += 4; return;
L_006d5c1d:; BB(0x006d5c1d);
    /* 006d5c1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5c1f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006d5c21: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006d5c23: mov ecx, edi */ r_ecx = r_edi;
    /* 006d5c25: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6d5c28u); call_ind(t); }
    /* 006d5c28: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 006d5c2e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5c33u); f_007127b0();
    /* 006d5c33: mov dword ptr [edi + 0x390], 0 */ W32((u32)(r_edi+0x390u), 0x0u);
    /* 006d5c3d: mov dword ptr [edi + 0x20], 4 */ W32((u32)(r_edi+0x20u), 0x4u);
    /* 006d5c44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5c45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5c46: ret  */ FN_RET(0x006d5b80); r_esp += 4; return;
L_006d5c47:; BB(0x006d5c47);
    /* 006d5c47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5c49: je 0x6d5c6f */ if (fZ) goto L_006d5c6f;
L_006d5c4b:; BB(0x006d5c4b);
    /* 006d5c4b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d5c52: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5c54: je 0x6d5c6f */ if (fZ) goto L_006d5c6f;
L_006d5c56:; BB(0x006d5c56);
    /* 006d5c56: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5c5bu); f_007127b0();
    /* 006d5c5b: mov dword ptr [edi + 0x390], 0 */ W32((u32)(r_edi+0x390u), 0x0u);
    /* 006d5c65: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 006d5c6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5c6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5c6e: ret  */ FN_RET(0x006d5b80); r_esp += 4; return;
L_006d5c6f:; BB(0x006d5c6f);
    /* 006d5c6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5c70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5c71: ret  */ FN_RET(0x006d5b80); r_esp += 4; return;
L_006d5c72:; BB(0x006d5c72);
    /* 006d5c72: mov ecx, dword ptr [edi + 0x390] */ r_ecx = R32((u32)(r_edi+0x390u));
    /* 006d5c78: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6d5c7du); f_007127b0();
    /* 006d5c7d: mov dword ptr [edi + 0x390], 0 */ W32((u32)(r_edi+0x390u), 0x0u);
    /* 006d5c87: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 006d5c8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006d5c8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006d5c90: ret  */ FN_RET(0x006d5b80); r_esp += 4; return;
}

void f_006d5c94(void) /* sub_6D5C94 */
{
    FN_ENTER(0x006d5c94);
    /* 006d5c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006d5c95: mov ebp, esp */ r_ebp = r_esp;
    /* 006d5c97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006d5c99: push 0x8edf98 */ { u32 v = 0x8edf98u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5c9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006d5ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5ca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006d5cac: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006d5caf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006d5cb2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006d5cb5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006d5cb8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006d5cbb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006d5cbe: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 006d5cc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5cc6: je 0x6d5d98 */ if (fZ) goto L_006d5d98;
L_006d5ccc:; BB(0x006d5ccc);
    /* 006d5ccc: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d5cd1u); f_00737d90();
    /* 006d5cd1: mov ebx, eax */ r_ebx = r_eax;
    /* 006d5cd3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5cd6: mov ecx, dword ptr [edx + 0x39c] */ r_ecx = R32((u32)(r_edx+0x39cu));
    /* 006d5cdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5cde: je 0x6d5d01 */ if (fZ) goto L_006d5d01;
L_006d5ce0:; BB(0x006d5ce0);
    /* 006d5ce0: cmp ebx, dword ptr [edx + 0x384] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x384u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5ce6: je 0x6d5d01 */ if (fZ) goto L_006d5d01;
L_006d5ce8:; BB(0x006d5ce8);
    /* 006d5ce8: mov edi, edx */ r_edi = r_edx;
    /* 006d5cea: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006d5ced: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5cef: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006d5cf2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d5cf4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d5cf6: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006d5cf8: push dword ptr [esi + edi + 0x38] */ { u32 v = R32((u32)(r_esi+r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006d5cfc: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6d5d01u); f_0072606c();
L_006d5d01:; BB(0x006d5d01);
    /* 006d5d01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5d04: mov ecx, dword ptr [edx + 0x398] */ r_ecx = R32((u32)(r_edx+0x398u));
    /* 006d5d0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5d0c: je 0x6d5d56 */ if (fZ) goto L_006d5d56;
L_006d5d0e:; BB(0x006d5d0e);
    /* 006d5d0e: cmp ebx, dword ptr [edx + 0x384] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x384u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5d14: je 0x6d5d56 */ if (fZ) goto L_006d5d56;
L_006d5d16:; BB(0x006d5d16);
    /* 006d5d16: mov esi, edx */ r_esi = r_edx;
    /* 006d5d18: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006d5d1b: mov ecx, dword ptr [ecx + 0xdf4] */ r_ecx = R32((u32)(r_ecx+0xdf4u));
    /* 006d5d21: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006d5d24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5d26: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006d5d29: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d5d2b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006d5d2d: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006d5d2f: lea edx, [esi + edi + 0x2c] */ r_edx = (u32)(r_esi+r_edi+0x2cu);
    /* 006d5d33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5d34: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6d5d39u); f_006a4e50();
    /* 006d5d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5d3b: je 0x6d5e32 */ if (fZ) goto L_006d5e32;
L_006d5d41:; BB(0x006d5d41);
    /* 006d5d41: mov ecx, eax */ r_ecx = r_eax;
    /* 006d5d43: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6d5d48u); f_006a60dc();
    /* 006d5d48: mov edx, esi */ r_edx = r_esi;
    /* 006d5d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5d4b: mov ecx, dword ptr [edx + 0x398] */ r_ecx = R32((u32)(r_edx+0x398u));
    /* 006d5d51: call 0x73f004 */ r_esp -= 4; W32(r_esp, 0x6d5d56u); f_0073f004();
L_006d5d56:; BB(0x006d5d56);
    /* 006d5d56: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5d59: mov ecx, dword ptr [edx + 0x3a0] */ r_ecx = R32((u32)(r_edx+0x3a0u));
    /* 006d5d5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5d61: je 0x6d5d89 */ if (fZ) goto L_006d5d89;
L_006d5d63:; BB(0x006d5d63);
    /* 006d5d63: cmp ebx, dword ptr [edx + 0x384] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x384u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5d69: je 0x6d5d89 */ if (fZ) goto L_006d5d89;
L_006d5d6b:; BB(0x006d5d6b);
    /* 006d5d6b: mov edi, edx */ r_edi = r_edx;
    /* 006d5d6d: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006d5d70: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5d72: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006d5d75: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d5d77: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006d5d79: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006d5d7b: mov edx, dword ptr [esi + edi + 0x3c] */ r_edx = R32((u32)(r_esi+r_edi+0x3cu));
    /* 006d5d7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006d5d81: jle 0x6d5d89 */ if ((fZ||fS!=fO)) goto L_006d5d89;
L_006d5d83:; BB(0x006d5d83);
    /* 006d5d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5d84: call 0x715c74 */ r_esp -= 4; W32(r_esp, 0x6d5d89u); f_00715c74();
L_006d5d89:; BB(0x006d5d89);
    /* 006d5d89: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5d8c: mov ecx, dword ptr [edx + 0x38c] */ r_ecx = R32((u32)(r_edx+0x38cu));
    /* 006d5d92: mov dword ptr [edx + 0x384], ebx */ W32((u32)(r_edx+0x384u), r_ebx);
L_006d5d98:; BB(0x006d5d98);
    /* 006d5d98: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006d5d9f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006d5da1: je 0x6d5dd6 */ if (fZ) goto L_006d5dd6;
L_006d5da3:; BB(0x006d5da3);
    /* 006d5da3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5da6: mov dword ptr [eax + 0x20], 8 */ W32((u32)(r_eax+0x20u), 0x8u);
    /* 006d5dad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006d5daf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5db0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5db1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5db2: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5db7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6d5dbcu); f_00814298();
    /* 006d5dbc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006d5dbf: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d5dc2: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d5dc5: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d5dc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d5dcb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d5dd2: mov esp, ebp */ r_esp = r_ebp;
    /* 006d5dd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5dd5: ret  */ FN_RET(0x006d5c94); r_esp += 4; return;
L_006d5dd6:; BB(0x006d5dd6);
    /* 006d5dd6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5dd8: je 0x6d5e1b */ if (fZ) goto L_006d5e1b;
L_006d5dda:; BB(0x006d5dda);
    /* 006d5dda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5ddd: mov dword ptr [eax + 0x37c], 1 */ W32((u32)(r_eax+0x37cu), 0x1u);
    /* 006d5de7: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6d5decu); f_00737d90();
    /* 006d5dec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d5dee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006d5df0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006d5df3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5df5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006d5df7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006d5df9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5dfc: movzx ecx, byte ptr [edx + eax + 0x2c] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0x2cu));
    /* 006d5e01: lea ebx, [eax + edx + 0x2c] */ r_ebx = (u32)(r_eax+r_edx+0x2cu);
    /* 006d5e05: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5e08: je 0x6d5f25 */ if (fZ) goto L_006d5f25;
L_006d5e0e:; BB(0x006d5e0e);
    /* 006d5e0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5e11: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 006d5e17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5e19: je 0x6d5e46 */ if (fZ) goto L_006d5e46;
L_006d5e1b:; BB(0x006d5e1b);
    /* 006d5e1b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d5e1e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d5e21: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d5e24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d5e27: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d5e2e: mov esp, ebp */ r_esp = r_ebp;
    /* 006d5e30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5e31: ret  */ FN_RET(0x006d5c94); r_esp += 4; return;
L_006d5e32:; BB(0x006d5e32);
    /* 006d5e32: mov edx, esi */ r_edx = r_esi;
    /* 006d5e34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e36: mov ecx, dword ptr [edx + 0x398] */ r_ecx = R32((u32)(r_edx+0x398u));
    /* 006d5e3c: call 0x73f004 */ r_esp -= 4; W32(r_esp, 0x6d5e41u); f_0073f004();
    /* 006d5e41: jmp 0x6d5d56 */ goto L_006d5d56;
L_006d5e46:; BB(0x006d5e46);
    /* 006d5e46: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e48: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d5e4du); f_0073ec50();
    /* 006d5e4d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5e50: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006d5e53: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006d5e57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e58: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e5b: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x6d5e60u); f_007354fc();
    /* 006d5e60: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5e63: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e65: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 006d5e6b: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d5e70u); f_006dbdb8();
    /* 006d5e70: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5e73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e75: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5e7b: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 006d5e81: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d5e86u); f_00735c90();
    /* 006d5e86: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e88: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6d5e8du); f_006dbdb8();
    /* 006d5e8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006d5e8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e90: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006d5e93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5e96: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 006d5e9c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6d5ea1u); f_00735c90();
    /* 006d5ea1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5ea4: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 006d5eaa: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6d5eafu); f_0073608c();
    /* 006d5eaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5eb2: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 006d5eb8: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6d5ebdu); f_00736458();
    /* 006d5ebd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5ec0: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 006d5ec6: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006d5ecd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006d5ed2: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006d5ed9: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d5edeu); f_006dc8d8();
    /* 006d5ede: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006d5ee1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5ee4: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6d5ee9u); f_006dc8d8();
    /* 006d5ee9: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006d5eec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5eef: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 006d5ef5: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5ef8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006d5efb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006d5eff: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6d5f04u); f_0070f5a4();
    /* 006d5f04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5f07: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d5f0a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d5f0d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d5f10: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 006d5f17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d5f1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d5f21: mov esp, ebp */ r_esp = r_ebp;
    /* 006d5f23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d5f24: ret  */ FN_RET(0x006d5c94); r_esp += 4; return;
L_006d5f25:; BB(0x006d5f25);
    /* 006d5f25: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006d5f27: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x6d5f2cu); f_005d29b0();
    /* 006d5f2c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006d5f2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006d5f32: jle 0x6d5e0e */ if ((fZ||fS!=fO)) goto L_006d5e0e;
L_006d5f38:; BB(0x006d5f38);
    /* 006d5f38: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5f3b: mov edx, dword ptr [eax + 0x394] */ r_edx = R32((u32)(r_eax+0x394u));
    /* 006d5f41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5f43: jne 0x6d5e0e */ if (!fZ) goto L_006d5e0e;
L_006d5f49:; BB(0x006d5f49);
    /* 006d5f49: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006d5f50: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 006d5f55: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6d5f5au); f_005caba4();
    /* 006d5f5a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d5f5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5f60: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006d5f63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006d5f65: je 0x6d6005 */ if (fZ) goto L_006d6005;
L_006d5f6b:; BB(0x006d5f6b);
    /* 006d5f6b: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006d5f72: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006d5f79: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006d5f7b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6d5f80u); f_0073ec50();
    /* 006d5f80: mov ebx, eax */ r_ebx = r_eax;
    /* 006d5f82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006d5f85: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5f88: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6d5f8du); f_006dc9ec();
    /* 006d5f8d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006d5f90: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d5f93: mov edi, 1 */ r_edi = 0x1u;
    /* 006d5f98: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 006d5f9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5f9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5f9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5f9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006d5f9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006d5fa0: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x6d5fa5u); f_00728ac4();
    /* 006d5fa5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006d5fac:; BB(0x006d5fac);
    /* 006d5fac: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006d5faf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5fb2: mov dword ptr [edx + 0x394], eax */ W32((u32)(r_edx+0x394u), r_eax);
    /* 006d5fb8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006d5fbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006d5fc1: je 0x6d5fe4 */ if (fZ) goto L_006d5fe4;
L_006d5fc3:; BB(0x006d5fc3);
    /* 006d5fc3: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6d5fc8u); f_0078b208();
    /* 006d5fc8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006d5fcb: jle 0x6d5fe4 */ if ((fZ||fS!=fO)) goto L_006d5fe4;
L_006d5fcd:; BB(0x006d5fcd);
    /* 006d5fcd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5fd0: mov edx, dword ptr [eax + 0x394] */ r_edx = R32((u32)(r_eax+0x394u));
    /* 006d5fd6: mov dword ptr [edx + 0x78], 0x3f400000 */ W32((u32)(r_edx+0x78u), 0x3f400000u);
    /* 006d5fdd: mov dword ptr [edx + 0x7c], 0x3f400000 */ W32((u32)(r_edx+0x7cu), 0x3f400000u);
L_006d5fe4:; BB(0x006d5fe4);
    /* 006d5fe4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006d5fe7: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006d5fea: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006d5fed: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006d5ff0: mov dword ptr [eax + 0x20], 3 */ W32((u32)(r_eax+0x20u), 0x3u);
    /* 006d5ff7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006d5ffa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006d6001: mov esp, ebp */ r_esp = r_ebp;
    /* 006d6003: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006d6004: ret  */ FN_RET(0x006d5c94); r_esp += 4; return;
L_006d6005:; BB(0x006d6005);
    /* 006d6005: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006d6007: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006d600a: jmp 0x6d5fac */ goto L_006d5fac;
}

