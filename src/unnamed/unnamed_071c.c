#include "protos.h"

void f_0071c140(void) /* sub_71C140 */
{
    FN_ENTER(0x0071c140);
    /* 0071c140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071c141: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071c142: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071c143: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071c144: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071c147: mov esi, ecx */ r_esi = r_ecx;
    /* 0071c149: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071c14d: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0071c150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c151: push 0x9f20a0 */ { u32 v = 0x9f20a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c156: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071c157: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x71c15cu); f_0072a68c();
    /* 0071c15c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c15e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c160: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0071c163: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0071c165: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c16au); f_00792fe8();
    /* 0071c16a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c16d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c16e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c170: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c175u); f_0072db50();
    /* 0071c175: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c177: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c179: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0071c17c: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 0071c17f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c184u); f_00792fe8();
    /* 0071c184: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c188: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c18a: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c18fu); f_0072db50();
    /* 0071c18f: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0071c194: call 0x6afcc8 */ r_esp -= 4; W32(r_esp, 0x71c199u); f_006afcc8();
    /* 0071c199: mov edx, eax */ r_edx = r_eax;
    /* 0071c19b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071c19d: mov ebp, eax */ r_ebp = r_eax;
    /* 0071c19f: mov edi, edx */ r_edi = r_edx;
L_0071c1a1:; BB(0x0071c1a1);
    /* 0071c1a1: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 0071c1a4: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c1aa: je 0x71c1c1 */ if (fZ) goto L_0071c1c1;
L_0071c1ac:; BB(0x0071c1ac);
    /* 0071c1ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0071c1ad: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71c1b2u); f_0068d5a8();
    /* 0071c1b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071c1b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c1b5: je 0x71c1c1 */ if (fZ) goto L_0071c1c1;
L_0071c1b7:; BB(0x0071c1b7);
    /* 0071c1b7: movsx ecx, word ptr [edi + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0071c1bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c1bd: je 0x71c1c1 */ if (fZ) goto L_0071c1c1;
L_0071c1bf:; BB(0x0071c1bf);
    /* 0071c1bf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0071c1c1:; BB(0x0071c1c1);
    /* 0071c1c1: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071c1c4: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071c1c7: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071c1ca: jl 0x71c1a1 */ if ((fS!=fO)) goto L_0071c1a1;
L_0071c1cc:; BB(0x0071c1cc);
    /* 0071c1cc: call 0x6afcc8 */ r_esp -= 4; W32(r_esp, 0x71c1d1u); f_006afcc8();
    /* 0071c1d1: mov edx, eax */ r_edx = r_eax;
    /* 0071c1d3: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0071c1d6: mov edi, edx */ r_edi = r_edx;
    /* 0071c1d8: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0071c1dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071c1de: mov esi, eax */ r_esi = r_eax;
L_0071c1e0:; BB(0x0071c1e0);
    /* 0071c1e0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0071c1e4: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0071c1e7: mov ebp, dword ptr [esi + eax + 4] */ r_ebp = R32((u32)(r_esi+r_eax+0x4u));
    /* 0071c1eb: mov ebx, dword ptr [esi + eax + 8] */ r_ebx = R32((u32)(r_esi+r_eax+0x8u));
    /* 0071c1ef: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0071c1f3: mov ebx, dword ptr [esi + eax + 0xc] */ r_ebx = R32((u32)(r_esi+r_eax+0xcu));
    /* 0071c1f7: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0071c1fb: mov ebx, dword ptr [esi + eax + 0x10] */ r_ebx = R32((u32)(r_esi+r_eax+0x10u));
    /* 0071c1ff: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0071c202: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c207: jne 0x71c24d */ if (!fZ) goto L_0071c24d;
L_0071c209:; BB(0x0071c209);
    /* 0071c209: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0071c20d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071c212: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0071c216: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071c21a: movzx ebp, word ptr [eax + 4] */ r_ebp = (u32)R16((u32)(r_eax+0x4u));
    /* 0071c21e: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0071c224: mov word ptr [eax + 4], bp */ W16((u32)(r_eax+0x4u), (u16)r_ebp);
    /* 0071c228: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0071c22c: movzx ebp, word ptr [eax + 4] */ r_ebp = (u32)R16((u32)(r_eax+0x4u));
    /* 0071c230: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0071c236: mov word ptr [eax + 4], bp */ W16((u32)(r_eax+0x4u), (u16)r_ebp);
    /* 0071c23a: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 0071c23e: or ebp, 0xffff0002 */ {  u32 a = r_ebp; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0071c244: mov word ptr [ebx + 4], bp */ W16((u32)(r_ebx+0x4u), (u16)r_ebp);
    /* 0071c248: jmp 0x71c335 */ goto L_0071c335;
L_0071c24d:; BB(0x0071c24d);
    /* 0071c24d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c24e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71c253u); f_0068d5a8();
    /* 0071c253: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0071c257: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c25a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c25c: je 0x71c209 */ if (fZ) goto L_0071c209;
L_0071c25e:; BB(0x0071c25e);
    /* 0071c25e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0071c261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c263: je 0x71c27b */ if (fZ) goto L_0071c27b;
L_0071c265:; BB(0x0071c265);
    /* 0071c265: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0071c267: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c269: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c26eu); f_00792fe8();
    /* 0071c26e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c272: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c274: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c279u); f_0072db50();
    /* 0071c279: jmp 0x71c2db */ goto L_0071c2db;
L_0071c27b:; BB(0x0071c27b);
    /* 0071c27b: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0071c280: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x71c285u); f_006a8f2c();
    /* 0071c285: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0071c288: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c28b: jne 0x71c2c1 */ if (!fZ) goto L_0071c2c1;
L_0071c28d:; BB(0x0071c28d);
    /* 0071c28d: movsx eax, word ptr [edi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0071c291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c293: jne 0x71c2ab */ if (!fZ) goto L_0071c2ab;
L_0071c295:; BB(0x0071c295);
    /* 0071c295: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c297: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c299: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c29eu); f_00792fe8();
    /* 0071c29e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c2a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c2a4: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c2a9u); f_0072db50();
    /* 0071c2a9: jmp 0x71c2db */ goto L_0071c2db;
L_0071c2ab:; BB(0x0071c2ab);
    /* 0071c2ab: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2ad: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2af: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c2b4u); f_00792fe8();
    /* 0071c2b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c2b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c2ba: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c2bfu); f_0072db50();
    /* 0071c2bf: jmp 0x71c2db */ goto L_0071c2db;
L_0071c2c1:; BB(0x0071c2c1);
    /* 0071c2c1: movsx eax, word ptr [edi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2u));
    /* 0071c2c5: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071c2c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2c9: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2cb: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c2d0u); f_00792fe8();
    /* 0071c2d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c2d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c2d6: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x71c2dbu); f_0072db50();
L_0071c2db:; BB(0x0071c2db);
    /* 0071c2db: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0071c2df: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x71c2e4u); f_006936b4();
    /* 0071c2e4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2e7: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0071c2eb: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x71c2f0u); f_0072db60();
    /* 0071c2f0: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x71c2f5u); f_00816d30();
    /* 0071c2f5: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071c2f8: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x71c2fdu); f_00815f24();
    /* 0071c2fd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c2ff: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c301: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x71c306u); f_00792fe8();
    /* 0071c306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c307: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x71c30cu); f_00816cb8();
    /* 0071c30c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071c30f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c311: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c316: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c318: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x71c31du); f_0072db60();
    /* 0071c31d: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c322: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c324: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x71c329u); f_0072ddf4();
    /* 0071c329: fld dword ptr [0x9700cc] */ FPUSH(R_F32((u32)(0x9700ccu)));
    /* 0071c32f: fsub dword ptr [ebx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x10u));
    /* 0071c332: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
L_0071c335:; BB(0x0071c335);
    /* 0071c335: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0071c338: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071c33b: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071c33e: jl 0x71c1e0 */ if ((fS!=fO)) goto L_0071c1e0;
L_0071c344:; BB(0x0071c344);
    /* 0071c344: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071c347: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071c348: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071c349: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071c34a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071c34b: ret  */ FN_RET(0x0071c140); r_esp += 4; return;
}

void f_0071c34c(void) /* sub_71C34C */
{
    FN_ENTER(0x0071c34c);
    /* 0071c34c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071c34d: mov esi, ecx */ r_esi = r_ecx;
    /* 0071c34f: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0071c352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c353: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x71c358u); f_0072a590();
    /* 0071c358: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071c359: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 0071c35c: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 0071c35f: mov ecx, esi */ r_ecx = r_esi;
    /* 0071c361: call dword ptr [edx*4 + 0x9f2088] */ { u32 t = R32((u32)(r_edx*4+0x9f2088u)); r_esp -= 4; W32(r_esp, 0x71c368u); call_ind(t); }
    /* 0071c368: mov ecx, esi */ r_ecx = r_esi;
    /* 0071c36a: call 0x71bf78 */ r_esp -= 4; W32(r_esp, 0x71c36fu); f_0071bf78();
    /* 0071c36f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071c370: ret  */ FN_RET(0x0071c34c); r_esp += 4; return;
}

void f_0071c374(void) /* sub_71C374 */
{
    FN_ENTER(0x0071c374);
    /* 0071c374: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071c375: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071c377: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071c379: call 0x71c398 */ r_esp -= 4; W32(r_esp, 0x71c37eu); f_0071c398();
    /* 0071c37e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071c382: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071c384: jne 0x71c38a */ if (!fZ) goto L_0071c38a;
L_0071c386:; BB(0x0071c386);
    /* 0071c386: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071c387: ret 4 */ FN_RET(0x0071c374); r_esp += 8; return;
L_0071c38a:; BB(0x0071c38a);
    /* 0071c38a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071c38b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71c390u); f_005c2f74();
    /* 0071c390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071c391: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071c392: ret 4 */ FN_RET(0x0071c374); r_esp += 8; return;
}

void f_0071c398(void) /* sub_71C398 */
{
    FN_ENTER(0x0071c398);
    /* 0071c398: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071c399: mov ebp, esp */ r_ebp = r_esp;
    /* 0071c39b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c39d: push 0x8f0c58 */ { u32 v = 0x8f0c58u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c3a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071c3a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c3a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071c3b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071c3b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071c3b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071c3b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071c3bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071c3bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071c3c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071c3c5: mov dword ptr [ecx], 0xb3fbe0 */ W32((u32)(r_ecx), 0xb3fbe0u);
    /* 0071c3cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071c3d2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x71c3d7u); f_008171e8();
    /* 0071c3d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071c3da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071c3e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0071c3e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071c3e4: ret  */ FN_RET(0x0071c398); r_esp += 4; return;
}

void f_0071c3e8(void) /* sub_71C3E8 */
{
    FN_ENTER(0x0071c3e8);
    /* 0071c3e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071c3e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0071c3eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c3ed: push 0x8f0c80 */ { u32 v = 0x8f0c80u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c3f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071c3f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c3f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071c400: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071c403: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071c406: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071c409: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071c40c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071c40f: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c411: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0071c418: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71c41du); f_005caba4();
    /* 0071c41d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071c41e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0071c421: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c423: je 0x71c45e */ if (fZ) goto L_0071c45e;
L_0071c425:; BB(0x0071c425);
    /* 0071c425: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0071c42c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071c433: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071c436: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0071c43a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071c43d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c43e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071c441: call 0x71c464 */ r_esp -= 4; W32(r_esp, 0x71c446u); f_0071c464();
    /* 0071c446: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071c449: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0071c450:; BB(0x0071c450);
    /* 0071c450: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071c453: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071c45a: mov esp, ebp */ r_esp = r_ebp;
    /* 0071c45c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071c45d: ret  */ FN_RET(0x0071c3e8); r_esp += 4; return;
L_0071c45e:; BB(0x0071c45e);
    /* 0071c45e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071c460: jmp 0x71c450 */ goto L_0071c450;
}

void f_0071c440(void)
{
    FN_ENTER(0x0071c440);
    /* 0071c440: or al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0071c442: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c443: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0071c445: add byte ptr [ebx + 0x45c7e045], cl */ { u32 ad = (u32)(r_ebx+0x45c7e045u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0071c44b: fadd qword ptr [eax] */ ST(0) = ST(0) + R_F64((u32)(r_eax));
    /* 0071c44d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0071c44f: add byte ptr [ebx - 0x769b0bb3], cl */ { u32 ad = (u32)(r_ebx+0x8964f44du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0071c455: or eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071c45a: mov esp, ebp */ r_esp = r_ebp;
    /* 0071c45c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071c45d: ret  */ FN_RET(0x0071c440); r_esp += 4; return;
}

void f_0071c464(void) /* sub_71C464 */
{
    FN_ENTER(0x0071c464);
    /* 0071c464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071c465: mov ebp, esp */ r_ebp = r_esp;
    /* 0071c467: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c469: push 0x8f0c9c */ { u32 v = 0x8f0c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071c46e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071c474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c475: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071c47c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071c47f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071c482: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0071c485: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0071c488: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0071c48b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0071c48e: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071c494: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0071c498: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0071c49b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071c49e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0071c4a1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0071c4a4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071c4a7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x71c4acu); f_008193cc();
    /* 0071c4ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071c4b3: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071c4b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071c4b9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071c4bc: mov dword ptr [esi], 0xb3fbe0 */ W32((u32)(r_esi), 0xb3fbe0u);
    /* 0071c4c2: mov eax, dword ptr [0x9f2480] */ r_eax = R32((u32)(0x9f2480u));
    /* 0071c4c7: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0071c4ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0071c4cc: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 0071c4cf: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0071c4d2: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 0071c4d5: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 0071c4d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c4d9: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x71c4deu); f_006dc358();
    /* 0071c4de: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071c4e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071c4e2: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071c4e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071c4e6: call 0x71ba28 */ r_esp -= 4; W32(r_esp, 0x71c4ebu); f_0071ba28();
    /* 0071c4eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071c4ee: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071c4f1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071c4f4: mov eax, edi */ r_eax = r_edi;
    /* 0071c4f6: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0071c4f9: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071c4fc: mov word ptr [ebx + 0x24], dx */ W16((u32)(r_ebx+0x24u), (u16)r_edx);
    /* 0071c500: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0071c505: mov word ptr [ebx + 0x26], cx */ W16((u32)(r_ebx+0x26u), (u16)r_ecx);
    /* 0071c509: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 0071c50c: mov eax, ebx */ r_eax = r_ebx;
    /* 0071c50e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071c511: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071c514: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071c51b: mov esp, ebp */ r_esp = r_ebp;
    /* 0071c51d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071c51e: ret 0xc */ FN_RET(0x0071c464); r_esp += 16; return;
}

void f_0071c524(void) /* sub_71C524 */
{
    FN_ENTER(0x0071c524);
    /* 0071c524: movsx eax, word ptr [ecx + 0x26] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x26u));
    /* 0071c528: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071c52b: mov word ptr [ecx + 0x26], ax */ W16((u32)(r_ecx+0x26u), (u16)r_eax);
    /* 0071c52f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0071c532: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071c535: jl 0x71c544 */ if ((fS!=fO)) goto L_0071c544;
L_0071c537:; BB(0x0071c537);
    /* 0071c537: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0071c53b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071c540: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
L_0071c544:; BB(0x0071c544);
    /* 0071c544: ret  */ FN_RET(0x0071c524); r_esp += 4; return;
}

void f_0071c548(void) /* sub_71C548 */
{
    FN_ENTER(0x0071c548);
    /* 0071c548: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071c549: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071c54a: sub esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071c550: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071c552: call 0x719a48 */ r_esp -= 4; W32(r_esp, 0x71c557u); f_00719a48();
    /* 0071c557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c559: je 0x71ca1e */ if (fZ) goto L_0071ca1e;
L_0071c55f:; BB(0x0071c55f);
    /* 0071c55f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x71c564u); f_0082dbac();
    /* 0071c564: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x71c569u); f_004d28a4();
    /* 0071c569: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x71c56eu); f_007a902c();
    /* 0071c56e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0071c573: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x71c578u); f_0082bb30();
    /* 0071c578: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0071c57e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x71c583u); f_00829cc8();
    /* 0071c583: movsx eax, word ptr [ebp + 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x24u));
    /* 0071c587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c589: je 0x71ccd1 */ if (fZ) goto L_0071ccd1;
L_0071c58f:; BB(0x0071c58f);
    /* 0071c58f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c592: je 0x71cbfd */ if (fZ) goto L_0071cbfd;
L_0071c598:; BB(0x0071c598);
    /* 0071c598: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c59b: je 0x71cb29 */ if (fZ) goto L_0071cb29;
L_0071c5a1:; BB(0x0071c5a1);
    /* 0071c5a1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c5a4: je 0x71ca27 */ if (fZ) goto L_0071ca27;
L_0071c5aa:; BB(0x0071c5aa);
    /* 0071c5aa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c5ad: je 0x71c8a1 */ if (fZ) goto L_0071c8a1;
L_0071c5b3:; BB(0x0071c5b3);
    /* 0071c5b3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c5b6: jne 0x71c72a */ if (!fZ) goto L_0071c72a;
L_0071c5bc:; BB(0x0071c5bc);
    /* 0071c5bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c5be: call 0x71cda8 */ r_esp -= 4; W32(r_esp, 0x71c5c3u); f_0071cda8();
    /* 0071c5c3: mov edi, eax */ r_edi = r_eax;
    /* 0071c5c5: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071c5cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c5cd: call 0x71cdf4 */ r_esp -= 4; W32(r_esp, 0x71c5d2u); f_0071cdf4();
    /* 0071c5d2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071c5d5: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0071c5da: mov edx, edi */ r_edx = r_edi;
    /* 0071c5dc: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71c5e1u); f_0082bb60();
    /* 0071c5e1: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c5e7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c5ea: fld dword ptr [0x97014c] */ FPUSH(R_F32((u32)(0x97014cu)));
    /* 0071c5f0: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c5f3: fsub dword ptr [0x970134] */ ST(0) = ST(0) - R_F32((u32)(0x970134u));
    /* 0071c5f9: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c5fc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c5fe: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071c600: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071c602: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0071c606: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071c608: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0071c60c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071c60e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0071c610: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c612: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071c616: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c618: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0071c61c: mov dword ptr [esp + 0x34], 0x3f6a0000 */ W32((u32)(r_esp+0x34u), 0x3f6a0000u);
    /* 0071c624: mov dword ptr [esp + 0x38], 0x3f000000 */ W32((u32)(r_esp+0x38u), 0x3f000000u);
    /* 0071c62c: mov dword ptr [esp + 0x3c], 0x3f740000 */ W32((u32)(r_esp+0x3cu), 0x3f740000u);
    /* 0071c634: mov dword ptr [esp + 0x40], 0x3f140000 */ W32((u32)(r_esp+0x40u), 0x3f140000u);
    /* 0071c63c: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c641: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0071c645: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c64au); f_0082b440();
    /* 0071c64a: fld dword ptr [0x970134] */ FPUSH(R_F32((u32)(0x970134u)));
    /* 0071c650: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0071c653: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c659: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c65c: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c65f: fld dword ptr [0x97014c] */ FPUSH(R_F32((u32)(0x97014cu)));
    /* 0071c665: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c667: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071c669: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071c66b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c66d: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0071c671: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c673: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071c675: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071c679: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071c67b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071c67d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0071c681: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c683: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0071c687: mov dword ptr [esp + 0x34], 0x3f740000 */ W32((u32)(r_esp+0x34u), 0x3f740000u);
    /* 0071c68f: mov dword ptr [esp + 0x38], 0x3f000000 */ W32((u32)(r_esp+0x38u), 0x3f000000u);
    /* 0071c697: mov dword ptr [esp + 0x3c], 0x3f7e0000 */ W32((u32)(r_esp+0x3cu), 0x3f7e0000u);
    /* 0071c69f: mov dword ptr [esp + 0x40], 0x3f140000 */ W32((u32)(r_esp+0x40u), 0x3f140000u);
    /* 0071c6a7: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c6ac: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0071c6b0: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c6b5u); f_0082b440();
    /* 0071c6b5: fld dword ptr [0x970134] */ FPUSH(R_F32((u32)(0x970134u)));
    /* 0071c6bb: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c6c1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c6c4: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c6c7: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c6ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c6cc: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071c6ce: fmul dword ptr [0x97014c] */ ST(0) = ST(0) * R_F32((u32)(0x97014cu));
    /* 0071c6d4: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c6d7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c6d9: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0071c6db: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071c6dd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071c6e1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c6e3: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0071c6e5: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0071c6e9: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0071c6eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c6ed: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0071c6f1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c6f3: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0071c6f7: mov dword ptr [esp + 0x34], 0x3f740000 */ W32((u32)(r_esp+0x34u), 0x3f740000u);
    /* 0071c6ff: mov dword ptr [esp + 0x38], 0x3f000000 */ W32((u32)(r_esp+0x38u), 0x3f000000u);
    /* 0071c707: mov dword ptr [esp + 0x3c], 0x3f740000 */ W32((u32)(r_esp+0x3cu), 0x3f740000u);
    /* 0071c70f: mov dword ptr [esp + 0x40], 0x3f140000 */ W32((u32)(r_esp+0x40u), 0x3f140000u);
    /* 0071c717: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c71c: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 0071c720: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c725u); f_0082b440();
    /* 0071c725: jmp 0x71ca0a */ goto L_0071ca0a;
L_0071c72a:; BB(0x0071c72a);
    /* 0071c72a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071c72d: jne 0x71ca0a */ if (!fZ) goto L_0071ca0a;
L_0071c733:; BB(0x0071c733);
    /* 0071c733: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c735: call 0x71cda8 */ r_esp -= 4; W32(r_esp, 0x71c73au); f_0071cda8();
    /* 0071c73a: mov edi, eax */ r_edi = r_eax;
    /* 0071c73c: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071c742: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c744: call 0x71cdf4 */ r_esp -= 4; W32(r_esp, 0x71c749u); f_0071cdf4();
    /* 0071c749: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071c74c: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0071c751: mov edx, edi */ r_edx = r_edi;
    /* 0071c753: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71c758u); f_0082bb60();
    /* 0071c758: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c75e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c761: fld dword ptr [0x97014c] */ FPUSH(R_F32((u32)(0x97014cu)));
    /* 0071c767: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c76a: fsub dword ptr [0x970154] */ ST(0) = ST(0) - R_F32((u32)(0x970154u));
    /* 0071c770: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c773: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c775: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071c777: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071c779: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0071c77d: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071c77f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071c783: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071c785: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0071c787: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c789: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071c78d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c78f: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0071c793: mov dword ptr [esp + 0x14], 0x3f6a0000 */ W32((u32)(r_esp+0x14u), 0x3f6a0000u);
    /* 0071c79b: mov dword ptr [esp + 0x18], 0x3f000000 */ W32((u32)(r_esp+0x18u), 0x3f000000u);
    /* 0071c7a3: mov dword ptr [esp + 0x1c], 0x3f740000 */ W32((u32)(r_esp+0x1cu), 0x3f740000u);
    /* 0071c7ab: mov dword ptr [esp + 0x20], 0x3f140000 */ W32((u32)(r_esp+0x20u), 0x3f140000u);
    /* 0071c7b3: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c7b8: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0071c7bc: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c7c1u); f_0082b440();
    /* 0071c7c1: fld dword ptr [0x970154] */ FPUSH(R_F32((u32)(0x970154u)));
    /* 0071c7c7: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0071c7ca: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c7d0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c7d3: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c7d6: fld dword ptr [0x97014c] */ FPUSH(R_F32((u32)(0x97014cu)));
    /* 0071c7dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c7de: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071c7e0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071c7e2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c7e4: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0071c7e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c7ea: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071c7ec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071c7f0: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071c7f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071c7f4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071c7f8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c7fa: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0071c7fe: mov dword ptr [esp + 0x14], 0x3f740000 */ W32((u32)(r_esp+0x14u), 0x3f740000u);
    /* 0071c806: mov dword ptr [esp + 0x18], 0x3f000000 */ W32((u32)(r_esp+0x18u), 0x3f000000u);
    /* 0071c80e: mov dword ptr [esp + 0x1c], 0x3f7e0000 */ W32((u32)(r_esp+0x1cu), 0x3f7e0000u);
    /* 0071c816: mov dword ptr [esp + 0x20], 0x3f140000 */ W32((u32)(r_esp+0x20u), 0x3f140000u);
    /* 0071c81e: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c823: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0071c827: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c82cu); f_0082b440();
    /* 0071c82c: fld dword ptr [0x970154] */ FPUSH(R_F32((u32)(0x970154u)));
    /* 0071c832: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c838: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c83b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c83e: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c841: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c843: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071c845: fmul dword ptr [0x97014c] */ ST(0) = ST(0) * R_F32((u32)(0x97014cu));
    /* 0071c84b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c84e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c850: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0071c852: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071c854: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071c858: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c85a: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0071c85c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071c860: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0071c862: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c864: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071c868: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c86a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0071c86e: mov dword ptr [esp + 0x14], 0x3f740000 */ W32((u32)(r_esp+0x14u), 0x3f740000u);
    /* 0071c876: mov dword ptr [esp + 0x18], 0x3f000000 */ W32((u32)(r_esp+0x18u), 0x3f000000u);
    /* 0071c87e: mov dword ptr [esp + 0x1c], 0x3f740000 */ W32((u32)(r_esp+0x1cu), 0x3f740000u);
    /* 0071c886: mov dword ptr [esp + 0x20], 0x3f140000 */ W32((u32)(r_esp+0x20u), 0x3f140000u);
    /* 0071c88e: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c893: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0071c897: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c89cu); f_0082b440();
    /* 0071c89c: jmp 0x71ca0a */ goto L_0071ca0a;
L_0071c8a1:; BB(0x0071c8a1);
    /* 0071c8a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c8a3: call 0x71cda8 */ r_esp -= 4; W32(r_esp, 0x71c8a8u); f_0071cda8();
    /* 0071c8a8: mov edi, eax */ r_edi = r_eax;
    /* 0071c8aa: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071c8b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071c8b2: call 0x71cdf4 */ r_esp -= 4; W32(r_esp, 0x71c8b7u); f_0071cdf4();
    /* 0071c8b7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071c8ba: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0071c8bf: mov edx, edi */ r_edx = r_edi;
    /* 0071c8c1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71c8c6u); f_0082bb60();
    /* 0071c8c6: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c8cc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c8cf: fld dword ptr [0x97014c] */ FPUSH(R_F32((u32)(0x97014cu)));
    /* 0071c8d5: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c8d8: fsub dword ptr [0x970130] */ ST(0) = ST(0) - R_F32((u32)(0x970130u));
    /* 0071c8de: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c8e1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c8e3: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071c8e5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071c8e7: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 0071c8eb: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071c8ed: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071c8f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071c8f3: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0071c8f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c8f7: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071c8fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c8fd: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0071c901: mov dword ptr [esp + 0x54], 0x3f6a0000 */ W32((u32)(r_esp+0x54u), 0x3f6a0000u);
    /* 0071c909: mov dword ptr [esp + 0x58], 0x3f000000 */ W32((u32)(r_esp+0x58u), 0x3f000000u);
    /* 0071c911: mov dword ptr [esp + 0x5c], 0x3f740000 */ W32((u32)(r_esp+0x5cu), 0x3f740000u);
    /* 0071c919: mov dword ptr [esp + 0x60], 0x3f140000 */ W32((u32)(r_esp+0x60u), 0x3f140000u);
    /* 0071c921: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c926: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0071c92a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c92fu); f_0082b440();
    /* 0071c92f: fld dword ptr [0x970130] */ FPUSH(R_F32((u32)(0x970130u)));
    /* 0071c935: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0071c938: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c93e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c941: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c944: fld dword ptr [0x97014c] */ FPUSH(R_F32((u32)(0x97014cu)));
    /* 0071c94a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c94c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071c94e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071c950: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c952: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0071c956: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c958: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071c95a: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071c95e: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071c960: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071c962: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071c966: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c968: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0071c96c: mov dword ptr [esp + 0x54], 0x3f740000 */ W32((u32)(r_esp+0x54u), 0x3f740000u);
    /* 0071c974: mov dword ptr [esp + 0x58], 0x3f000000 */ W32((u32)(r_esp+0x58u), 0x3f000000u);
    /* 0071c97c: mov dword ptr [esp + 0x5c], 0x3f7e0000 */ W32((u32)(r_esp+0x5cu), 0x3f7e0000u);
    /* 0071c984: mov dword ptr [esp + 0x60], 0x3f140000 */ W32((u32)(r_esp+0x60u), 0x3f140000u);
    /* 0071c98c: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071c991: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0071c995: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71c99au); f_0082b440();
    /* 0071c99a: fld dword ptr [0x970130] */ FPUSH(R_F32((u32)(0x970130u)));
    /* 0071c9a0: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071c9a6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071c9a9: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c9ac: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071c9af: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c9b1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071c9b3: fmul dword ptr [0x97014c] */ ST(0) = ST(0) * R_F32((u32)(0x97014cu));
    /* 0071c9b9: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071c9bc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071c9be: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0071c9c0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071c9c2: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071c9c6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c9c8: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0071c9ca: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071c9ce: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0071c9d0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071c9d2: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071c9d6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071c9d8: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0071c9dc: mov dword ptr [esp + 0x54], 0x3f740000 */ W32((u32)(r_esp+0x54u), 0x3f740000u);
    /* 0071c9e4: mov dword ptr [esp + 0x58], 0x3f000000 */ W32((u32)(r_esp+0x58u), 0x3f000000u);
    /* 0071c9ec: mov dword ptr [esp + 0x5c], 0x3f740000 */ W32((u32)(r_esp+0x5cu), 0x3f740000u);
    /* 0071c9f4: mov dword ptr [esp + 0x60], 0x3f140000 */ W32((u32)(r_esp+0x60u), 0x3f140000u);
    /* 0071c9fc: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ca01: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 0071ca05: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71ca0au); f_0082b440();
L_0071ca0a:; BB(0x0071ca0a);
    /* 0071ca0a: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x71ca0fu); f_004ac444();
    /* 0071ca0f: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x71ca14u); f_007a9044();
    /* 0071ca14: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71ca19u); f_004d2968();
    /* 0071ca19: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x71ca1eu); f_0082dab0();
L_0071ca1e:; BB(0x0071ca1e);
    /* 0071ca1e: add esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ca24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ca25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ca26: ret  */ FN_RET(0x0071c548); r_esp += 4; return;
L_0071ca27:; BB(0x0071ca27);
    /* 0071ca27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ca29: call 0x71cda8 */ r_esp -= 4; W32(r_esp, 0x71ca2eu); f_0071cda8();
    /* 0071ca2e: mov edi, eax */ r_edi = r_eax;
    /* 0071ca30: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071ca36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ca38: call 0x71cdf4 */ r_esp -= 4; W32(r_esp, 0x71ca3du); f_0071cdf4();
    /* 0071ca3d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071ca40: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0071ca45: mov edx, edi */ r_edx = r_edi;
    /* 0071ca47: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71ca4cu); f_0082bb60();
    /* 0071ca4c: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071ca52: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071ca55: fld dword ptr [0x97014c] */ FPUSH(R_F32((u32)(0x97014cu)));
    /* 0071ca5b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071ca5e: fsub dword ptr [0x97012c] */ ST(0) = ST(0) - R_F32((u32)(0x97012cu));
    /* 0071ca64: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071ca67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071ca69: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071ca6b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071ca6d: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 0071ca71: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071ca73: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0071ca77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ca79: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0071ca7b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071ca7d: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0071ca81: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ca83: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0071ca87: mov dword ptr [esp + 0x74], 0x3f6a0000 */ W32((u32)(r_esp+0x74u), 0x3f6a0000u);
    /* 0071ca8f: mov dword ptr [esp + 0x78], 0x3f000000 */ W32((u32)(r_esp+0x78u), 0x3f000000u);
    /* 0071ca97: mov dword ptr [esp + 0x7c], 0x3f740000 */ W32((u32)(r_esp+0x7cu), 0x3f740000u);
    /* 0071ca9f: mov dword ptr [esp + 0x80], 0x3f140000 */ W32((u32)(r_esp+0x80u), 0x3f140000u);
    /* 0071caaa: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071caaf: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0071cab3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71cab8u); f_0082b440();
    /* 0071cab8: fld dword ptr [0x97012c] */ FPUSH(R_F32((u32)(0x97012cu)));
    /* 0071cabe: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0071cac1: fld dword ptr [0x970150] */ FPUSH(R_F32((u32)(0x970150u)));
    /* 0071cac7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071caca: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071cacd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071cacf: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071cad1: fmul dword ptr [0x97014c] */ ST(0) = ST(0) * R_F32((u32)(0x97014cu));
    /* 0071cad7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071cad9: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 0071cadd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071cadf: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0071cae1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071cae3: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 0071cae7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071cae9: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0071caed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071caef: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0071caf3: mov dword ptr [esp + 0x74], 0x3f740000 */ W32((u32)(r_esp+0x74u), 0x3f740000u);
    /* 0071cafb: mov dword ptr [esp + 0x78], 0x3f000000 */ W32((u32)(r_esp+0x78u), 0x3f000000u);
    /* 0071cb03: mov dword ptr [esp + 0x7c], 0x3f7e0000 */ W32((u32)(r_esp+0x7cu), 0x3f7e0000u);
    /* 0071cb0b: mov dword ptr [esp + 0x80], 0x3f140000 */ W32((u32)(r_esp+0x80u), 0x3f140000u);
    /* 0071cb16: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071cb1b: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 0071cb1f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71cb24u); f_0082b440();
    /* 0071cb24: jmp 0x71ca0a */ goto L_0071ca0a;
L_0071cb29:; BB(0x0071cb29);
    /* 0071cb29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071cb2b: call 0x71cda8 */ r_esp -= 4; W32(r_esp, 0x71cb30u); f_0071cda8();
    /* 0071cb30: mov edi, eax */ r_edi = r_eax;
    /* 0071cb32: or edi, 0x175bff */ {  u32 a = r_edi; u32 b = 0x175bffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071cb38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071cb3a: call 0x71cdf4 */ r_esp -= 4; W32(r_esp, 0x71cb3fu); f_0071cdf4();
    /* 0071cb3f: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0071cb44: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071cb47: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071cb4a: jg 0x71cb5a */ if ((!fZ&&fS==fO)) goto L_0071cb5a;
L_0071cb4c:; BB(0x0071cb4c);
    /* 0071cb4c: jne 0x71cb5a */ if (!fZ) goto L_0071cb5a;
L_0071cb4e:; BB(0x0071cb4e);
    /* 0071cb4e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071cb51: fmul dword ptr [0x970128] */ ST(0) = ST(0) * R_F32((u32)(0x970128u));
    /* 0071cb57: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0071cb5a:; BB(0x0071cb5a);
    /* 0071cb5a: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0071cb5f: mov edx, edi */ r_edx = r_edi;
    /* 0071cb61: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71cb66u); f_0082bb60();
    /* 0071cb66: fld dword ptr [0x970124] */ FPUSH(R_F32((u32)(0x970124u)));
    /* 0071cb6c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071cb6f: fld dword ptr [0x970120] */ FPUSH(R_F32((u32)(0x970120u)));
    /* 0071cb75: fld dword ptr [0x97011c] */ FPUSH(R_F32((u32)(0x97011cu)));
    /* 0071cb7b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071cb7e: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071cb81: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071cb83: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0071cb85: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071cb87: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071cb89: fmul dword ptr [0x970118] */ ST(0) = ST(0) * R_F32((u32)(0x970118u));
    /* 0071cb8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071cb91: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0071cb93: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071cb95: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071cb9c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071cb9e: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071cba0: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071cba7: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0071cba9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071cbab: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071cbb2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071cbb4: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071cbbb: mov dword ptr [esp + 0x94], 0x3f4b0000 */ W32((u32)(r_esp+0x94u), 0x3f4b0000u);
    /* 0071cbc6: mov dword ptr [esp + 0x98], 0x3f1b0000 */ W32((u32)(r_esp+0x98u), 0x3f1b0000u);
    /* 0071cbd1: mov dword ptr [esp + 0x9c], 0x3f7d0000 */ W32((u32)(r_esp+0x9cu), 0x3f7d0000u);
    /* 0071cbdc: mov dword ptr [esp + 0xa0], 0x3f460000 */ W32((u32)(r_esp+0xa0u), 0x3f460000u);
    /* 0071cbe7: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071cbec: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 0071cbf3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71cbf8u); f_0082b440();
    /* 0071cbf8: jmp 0x71ca0a */ goto L_0071ca0a;
L_0071cbfd:; BB(0x0071cbfd);
    /* 0071cbfd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071cbff: call 0x71cda8 */ r_esp -= 4; W32(r_esp, 0x71cc04u); f_0071cda8();
    /* 0071cc04: mov edi, eax */ r_edi = r_eax;
    /* 0071cc06: or edi, 0xff2417 */ {  u32 a = r_edi; u32 b = 0xff2417u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071cc0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071cc0e: call 0x71cdf4 */ r_esp -= 4; W32(r_esp, 0x71cc13u); f_0071cdf4();
    /* 0071cc13: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0071cc18: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071cc1b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071cc1e: jg 0x71cc2e */ if ((!fZ&&fS==fO)) goto L_0071cc2e;
L_0071cc20:; BB(0x0071cc20);
    /* 0071cc20: jne 0x71cc2e */ if (!fZ) goto L_0071cc2e;
L_0071cc22:; BB(0x0071cc22);
    /* 0071cc22: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071cc25: fmul dword ptr [0x970128] */ ST(0) = ST(0) * R_F32((u32)(0x970128u));
    /* 0071cc2b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0071cc2e:; BB(0x0071cc2e);
    /* 0071cc2e: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0071cc33: mov edx, edi */ r_edx = r_edi;
    /* 0071cc35: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71cc3au); f_0082bb60();
    /* 0071cc3a: fld dword ptr [0x970124] */ FPUSH(R_F32((u32)(0x970124u)));
    /* 0071cc40: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071cc43: fld dword ptr [0x970120] */ FPUSH(R_F32((u32)(0x970120u)));
    /* 0071cc49: fld dword ptr [0x97011c] */ FPUSH(R_F32((u32)(0x97011cu)));
    /* 0071cc4f: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071cc52: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071cc55: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071cc57: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0071cc59: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071cc5b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071cc5d: fmul dword ptr [0x970118] */ ST(0) = ST(0) * R_F32((u32)(0x970118u));
    /* 0071cc63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071cc65: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0071cc67: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071cc69: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 0071cc70: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071cc72: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071cc74: fstp dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0)); FPOP();
    /* 0071cc7b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0071cc7d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071cc7f: fstp dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0)); FPOP();
    /* 0071cc86: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071cc88: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 0071cc8f: mov dword ptr [esp + 0xb4], 0x3f4b0000 */ W32((u32)(r_esp+0xb4u), 0x3f4b0000u);
    /* 0071cc9a: mov dword ptr [esp + 0xb8], 0x3f1b0000 */ W32((u32)(r_esp+0xb8u), 0x3f1b0000u);
    /* 0071cca5: mov dword ptr [esp + 0xbc], 0x3f7d0000 */ W32((u32)(r_esp+0xbcu), 0x3f7d0000u);
    /* 0071ccb0: mov dword ptr [esp + 0xc0], 0x3f460000 */ W32((u32)(r_esp+0xc0u), 0x3f460000u);
    /* 0071ccbb: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ccc0: lea ecx, [esp + 0xa8] */ r_ecx = (u32)(r_esp+0xa8u);
    /* 0071ccc7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71ccccu); f_0082b440();
    /* 0071cccc: jmp 0x71ca0a */ goto L_0071ca0a;
L_0071ccd1:; BB(0x0071ccd1);
    /* 0071ccd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071ccd3: call 0x71cda8 */ r_esp -= 4; W32(r_esp, 0x71ccd8u); f_0071cda8();
    /* 0071ccd8: mov edi, eax */ r_edi = r_eax;
    /* 0071ccda: or edi, 0xaa0e */ {  u32 a = r_edi; u32 b = 0xaa0eu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071cce0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071cce2: call 0x71cdf4 */ r_esp -= 4; W32(r_esp, 0x71cce7u); f_0071cdf4();
    /* 0071cce7: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0071ccec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071ccef: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071ccf2: jg 0x71cd02 */ if ((!fZ&&fS==fO)) goto L_0071cd02;
L_0071ccf4:; BB(0x0071ccf4);
    /* 0071ccf4: jne 0x71cd02 */ if (!fZ) goto L_0071cd02;
L_0071ccf6:; BB(0x0071ccf6);
    /* 0071ccf6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071ccf9: fmul dword ptr [0x970128] */ ST(0) = ST(0) * R_F32((u32)(0x970128u));
    /* 0071ccff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0071cd02:; BB(0x0071cd02);
    /* 0071cd02: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0071cd07: mov edx, edi */ r_edx = r_edi;
    /* 0071cd09: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x71cd0eu); f_0082bb60();
    /* 0071cd0e: fld dword ptr [0x970124] */ FPUSH(R_F32((u32)(0x970124u)));
    /* 0071cd14: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071cd17: fld dword ptr [0x970120] */ FPUSH(R_F32((u32)(0x970120u)));
    /* 0071cd1d: fld dword ptr [0x97011c] */ FPUSH(R_F32((u32)(0x97011cu)));
    /* 0071cd23: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0071cd26: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0071cd29: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071cd2b: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0071cd2d: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071cd2f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071cd31: fmul dword ptr [0x970118] */ ST(0) = ST(0) * R_F32((u32)(0x970118u));
    /* 0071cd37: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071cd39: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0071cd3b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071cd3d: fstp dword ptr [esp + 0xc4] */ W_F32((u32)(r_esp+0xc4u), ST(0)); FPOP();
    /* 0071cd44: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071cd46: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0071cd48: fstp dword ptr [esp + 0xc8] */ W_F32((u32)(r_esp+0xc8u), ST(0)); FPOP();
    /* 0071cd4f: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0071cd51: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071cd53: fstp dword ptr [esp + 0xcc] */ W_F32((u32)(r_esp+0xccu), ST(0)); FPOP();
    /* 0071cd5a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071cd5c: fstp dword ptr [esp + 0xd0] */ W_F32((u32)(r_esp+0xd0u), ST(0)); FPOP();
    /* 0071cd63: mov dword ptr [esp + 0xd4], 0x3f4b0000 */ W32((u32)(r_esp+0xd4u), 0x3f4b0000u);
    /* 0071cd6e: mov dword ptr [esp + 0xd8], 0x3f1b0000 */ W32((u32)(r_esp+0xd8u), 0x3f1b0000u);
    /* 0071cd79: mov dword ptr [esp + 0xdc], 0x3f7d0000 */ W32((u32)(r_esp+0xdcu), 0x3f7d0000u);
    /* 0071cd84: mov dword ptr [esp + 0xe0], 0x3f460000 */ W32((u32)(r_esp+0xe0u), 0x3f460000u);
    /* 0071cd8f: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0071cd94: lea ecx, [esp + 0xc8] */ r_ecx = (u32)(r_esp+0xc8u);
    /* 0071cd9b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71cda0u); f_0082b440();
    /* 0071cda0: jmp 0x71ca0a */ goto L_0071ca0a;
}

void f_0071cda8(void) /* sub_71CDA8 */
{
    FN_ENTER(0x0071cda8);
    /* 0071cda8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071cdab: movsx edx, word ptr [ecx + 0x26] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x26u));
    /* 0071cdaf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071cdb2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071cdb5: fmul dword ptr [0x970104] */ ST(0) = ST(0) * R_F32((u32)(0x970104u));
    /* 0071cdbb: fdiv dword ptr [0x970100] */ ST(0) = ST(0) / R_F32((u32)(0x970100u));
    /* 0071cdc1: fadd dword ptr [0x9700f8] */ ST(0) = ST(0) + R_F32((u32)(0x9700f8u));
    /* 0071cdc7: fmul dword ptr [0x9700fc] */ ST(0) = ST(0) * R_F32((u32)(0x9700fcu));
    /* 0071cdcd: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0071cdd1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0071cdd6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071cddb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0071cddf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0071cde3: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 0071cde7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0071cdeb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0071cdef: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071cdf2: ret  */ FN_RET(0x0071cda8); r_esp += 4; return;
}

void f_0071cdf4(void) /* sub_71CDF4 */
{
    FN_ENTER(0x0071cdf4);
    /* 0071cdf4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071cdf7: movsx edx, word ptr [ecx + 0x26] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x26u));
    /* 0071cdfb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071cdfe: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071ce01: fmul dword ptr [0x9700f4] */ ST(0) = ST(0) * R_F32((u32)(0x9700f4u));
    /* 0071ce07: fdiv dword ptr [0x9700f0] */ ST(0) = ST(0) / R_F32((u32)(0x9700f0u));
    /* 0071ce0d: fadd dword ptr [0x9700ec] */ ST(0) = ST(0) + R_F32((u32)(0x9700ecu));
    /* 0071ce13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ce16: ret  */ FN_RET(0x0071cdf4); r_esp += 4; return;
}

void f_0071ce18(void) /* sub_71CE18 */
{
    FN_ENTER(0x0071ce18);
    /* 0071ce18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ce19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071ce1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071ce1d: call 0x71ce3c */ r_esp -= 4; W32(r_esp, 0x71ce22u); f_0071ce3c();
    /* 0071ce22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071ce26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071ce28: jne 0x71ce2e */ if (!fZ) goto L_0071ce2e;
L_0071ce2a:; BB(0x0071ce2a);
    /* 0071ce2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ce2b: ret 4 */ FN_RET(0x0071ce18); r_esp += 8; return;
L_0071ce2e:; BB(0x0071ce2e);
    /* 0071ce2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ce2f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71ce34u); f_005c2f74();
    /* 0071ce34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ce35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ce36: ret 4 */ FN_RET(0x0071ce18); r_esp += 8; return;
}

void f_0071ce3c(void) /* sub_71CE3C */
{
    FN_ENTER(0x0071ce3c);
    /* 0071ce3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ce3d: mov ebp, esp */ r_ebp = r_esp;
    /* 0071ce3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071ce41: push 0x8f0cb8 */ { u32 v = 0x8f0cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ce46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071ce4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ce4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071ce54: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071ce57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071ce5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0071ce5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0071ce60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071ce63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071ce66: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071ce6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071ce70: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071ce73: mov dword ptr [eax], 0xb3fc68 */ W32((u32)(r_eax), 0xb3fc68u);
    /* 0071ce79: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x71ce7eu); f_005cdcc0();
    /* 0071ce7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ce7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071ce86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071ce89: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x71ce8eu); f_008171e8();
    /* 0071ce8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071ce91: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071ce98: mov esp, ebp */ r_esp = r_ebp;
    /* 0071ce9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ce9b: ret  */ FN_RET(0x0071ce3c); r_esp += 4; return;
}

void f_0071ce9c(void) /* sub_71CE9C */
{
    FN_ENTER(0x0071ce9c);
    /* 0071ce9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ce9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0071ce9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071cea1: push 0x8f0ce0 */ { u32 v = 0x8f0ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071cea6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071ceac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071cead: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071ceb4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071ceb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071ceba: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0071cebd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0071cec0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0071cec3: movzx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0071cec7: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 0071cecb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0071cece: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ced0: je 0x71cfbd */ if (fZ) goto L_0071cfbd;
L_0071ced6:; BB(0x0071ced6);
    /* 0071ced6: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071ced9: jge 0x71cfbd */ if ((fS==fO)) goto L_0071cfbd;
L_0071cedf:; BB(0x0071cedf);
    /* 0071cedf: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071cee2: jge 0x71cfbd */ if ((fS==fO)) goto L_0071cfbd;
L_0071cee8:; BB(0x0071cee8);
    /* 0071cee8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ceeb: je 0x71cfde */ if (fZ) goto L_0071cfde;
L_0071cef1:; BB(0x0071cef1);
    /* 0071cef1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cef4: je 0x71cfde */ if (fZ) goto L_0071cfde;
L_0071cefa:; BB(0x0071cefa);
    /* 0071cefa: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cefd: je 0x71cfd1 */ if (fZ) goto L_0071cfd1;
L_0071cf03:; BB(0x0071cf03);
    /* 0071cf03: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cf06: je 0x71cf29 */ if (fZ) goto L_0071cf29;
L_0071cf08:; BB(0x0071cf08);
    /* 0071cf08: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cf0b: jne 0x71cf17 */ if (!fZ) goto L_0071cf17;
L_0071cf0d:; BB(0x0071cf0d);
    /* 0071cf0d: mov eax, 0x95 */ r_eax = 0x95u;
    /* 0071cf12: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0071cf15: jmp 0x71cf31 */ goto L_0071cf31;
L_0071cf17:; BB(0x0071cf17);
    /* 0071cf17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cf19: jne 0x71cfbd */ if (!fZ) goto L_0071cfbd;
L_0071cf1f:; BB(0x0071cf1f);
    /* 0071cf1f: mov eax, 0x97 */ r_eax = 0x97u;
    /* 0071cf24: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0071cf27: jmp 0x71cf31 */ goto L_0071cf31;
L_0071cf29:; BB(0x0071cf29);
    /* 0071cf29: mov eax, 0x96 */ r_eax = 0x96u;
    /* 0071cf2e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0071cf31:; BB(0x0071cf31);
    /* 0071cf31: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0071cf36: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0071cf38: movzx ecx, cx */ r_ecx = (u32)(u16)r_ecx;
    /* 0071cf3b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0071cf3e: test ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cf44: je 0x71cf4f */ if (fZ) goto L_0071cf4f;
L_0071cf46:; BB(0x0071cf46);
    /* 0071cf46: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0071cf49: movzx ebx, cx */ r_ebx = (u32)(u16)r_ecx;
    /* 0071cf4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_0071cf4f:; BB(0x0071cf4f);
    /* 0071cf4f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0071cf51: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 0071cf54: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071cf57: test eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cf5c: je 0x71cf67 */ if (fZ) goto L_0071cf67;
L_0071cf5e:; BB(0x0071cf5e);
    /* 0071cf5e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071cf61: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0071cf64: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0071cf67:; BB(0x0071cf67);
    /* 0071cf67: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0071cf6e: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0071cf70: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71cf75u); f_005caba4();
    /* 0071cf75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071cf76: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0071cf79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071cf7b: je 0x71cfcd */ if (fZ) goto L_0071cfcd;
L_0071cf7d:; BB(0x0071cf7d);
    /* 0071cf7d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0071cf84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071cf8b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071cf8e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071cf91: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071cf94: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071cf97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071cf98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071cf99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071cf9a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071cf9d: call 0x71cfec */ r_esp -= 4; W32(r_esp, 0x71cfa2u); f_0071cfec();
    /* 0071cfa2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071cfa5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0071cfac:; BB(0x0071cfac);
    /* 0071cfac: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071cfaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071cfb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071cfb9: mov esp, ebp */ r_esp = r_ebp;
    /* 0071cfbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071cfbc: ret  */ FN_RET(0x0071ce9c); r_esp += 4; return;
L_0071cfbd:; BB(0x0071cfbd);
    /* 0071cfbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071cfbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071cfc2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071cfc9: mov esp, ebp */ r_esp = r_ebp;
    /* 0071cfcb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071cfcc: ret  */ FN_RET(0x0071ce9c); r_esp += 4; return;
L_0071cfcd:; BB(0x0071cfcd);
    /* 0071cfcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071cfcf: jmp 0x71cfac */ goto L_0071cfac;
L_0071cfd1:; BB(0x0071cfd1);
    /* 0071cfd1: mov eax, 0x98 */ r_eax = 0x98u;
    /* 0071cfd6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0071cfd9: jmp 0x71cf31 */ goto L_0071cf31;
L_0071cfde:; BB(0x0071cfde);
    /* 0071cfde: mov eax, 0x99 */ r_eax = 0x99u;
    /* 0071cfe3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0071cfe6: jmp 0x71cf31 */ goto L_0071cf31;
}

void f_0071cfec(void) /* sub_71CFEC */
{
    FN_ENTER(0x0071cfec);
    /* 0071cfec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071cfed: mov ebp, esp */ r_ebp = r_esp;
    /* 0071cfef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071cff1: push 0x8f0cfc */ { u32 v = 0x8f0cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0071cff6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071cffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071cffd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071d004: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071d007: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071d00a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0071d00d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0071d010: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0071d013: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0071d017: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071d01a: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 0071d01e: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0071d021: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0071d024: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0071d027: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0071d02a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071d02d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x71d032u); f_008193cc();
    /* 0071d032: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071d039: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071d03c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071d03f: mov dword ptr [ecx], 0xb3fc68 */ W32((u32)(r_ecx), 0xb3fc68u);
    /* 0071d045: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0071d048: mov esi, dword ptr [0x9f2484] */ r_esi = R32((u32)(0x9f2484u));
    /* 0071d04e: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0071d051: mov byte ptr [ecx + 0x1d], dl */ W8((u32)(r_ecx+0x1du), (u8)r_edx);
    /* 0071d054: lea edi, [ecx + 0x20] */ r_edi = (u32)(r_ecx+0x20u);
    /* 0071d057: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d058: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d059: call 0x71d0b8 */ r_esp -= 4; W32(r_esp, 0x71d05eu); f_0071d0b8();
    /* 0071d05e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071d061: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071d064: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0071d067: mov byte ptr [ecx + 0x1e], dl */ W8((u32)(r_ecx+0x1eu), (u8)r_edx);
    /* 0071d06a: lea esi, [ecx + 0x28] */ r_esi = (u32)(r_ecx+0x28u);
    /* 0071d06d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071d06e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d06f: call 0x71d0b8 */ r_esp -= 4; W32(r_esp, 0x71d074u); f_0071d0b8();
    /* 0071d074: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071d077: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0071d07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d07b: call 0x71d12c */ r_esp -= 4; W32(r_esp, 0x71d080u); f_0071d12c();
    /* 0071d080: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071d083: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0071d086: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071d08b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071d08c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071d08d: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x71d092u); f_0050981c();
    /* 0071d092: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071d095: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071d098: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0071d09b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071d09e: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0071d0a1: mov eax, edx */ r_eax = r_edx;
    /* 0071d0a3: mov byte ptr [edx + 0x1c], 0 */ W8((u32)(r_edx+0x1cu), 0x0u);
    /* 0071d0a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071d0aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071d0b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0071d0b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071d0b4: ret 0x10 */ FN_RET(0x0071cfec); r_esp += 20; return;
}

