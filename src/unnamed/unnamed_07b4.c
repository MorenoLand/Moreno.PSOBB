#include "protos.h"

void f_007b41f4(void) /* sub_7B41F4 */
{
    FN_ENTER(0x007b41f4);
    /* 007b41f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b41f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b41f7: mov ebx, eax */ r_ebx = r_eax;
L_007b41f9:; BB(0x007b41f9);
    /* 007b41f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b41fa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b41ffu); f_0068d5a8();
    /* 007b41ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4200: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4202: je 0x7b422a */ if (fZ) goto L_007b422a;
L_007b4204:; BB(0x007b4204);
    /* 007b4204: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b420b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b420e: jne 0x7b422a */ if (!fZ) goto L_007b422a;
L_007b4210:; BB(0x007b4210);
    /* 007b4210: movzx edx, word ptr [eax + 0x750] */ r_edx = (u32)R16((u32)(r_eax+0x750u));
    /* 007b4217: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b421d: je 0x7b422a */ if (fZ) goto L_007b422a;
L_007b421f:; BB(0x007b421f);
    /* 007b421f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4223: mov ecx, eax */ r_ecx = r_eax;
    /* 007b4225: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x7b422au); f_00692398();
L_007b422a:; BB(0x007b422a);
    /* 007b422a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b422d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4230: jl 0x7b41f9 */ if ((fS!=fO)) goto L_007b41f9;
L_007b4232:; BB(0x007b4232);
    /* 007b4232: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4233: ret  */ FN_RET(0x007b41f4); r_esp += 4; return;
}

void f_007b4234(void) /* sub_7B4234 */
{
    FN_ENTER(0x007b4234);
    /* 007b4234: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4235: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4236: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4237: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007b423b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b423d: mov ebx, eax */ r_ebx = r_eax;
    /* 007b423f: mov esi, edx */ r_esi = r_edx;
L_007b4241:; BB(0x007b4241);
    /* 007b4241: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4242: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4247u); f_0068d5a8();
    /* 007b4247: mov edi, eax */ r_edi = r_eax;
    /* 007b4249: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b424c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b424e: je 0x7b428e */ if (fZ) goto L_007b428e;
L_007b4250:; BB(0x007b4250);
    /* 007b4250: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 007b4257: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b425a: jne 0x7b428e */ if (!fZ) goto L_007b428e;
L_007b425c:; BB(0x007b425c);
    /* 007b425c: movzx eax, word ptr [edi + 0x750] */ r_eax = (u32)R16((u32)(r_edi+0x750u));
    /* 007b4263: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4268: je 0x7b428e */ if (fZ) goto L_007b428e;
L_007b426a:; BB(0x007b426a);
    /* 007b426a: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b426d: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4270: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b4274: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4276: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b427a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b427b: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x7b4280u); f_006986ac();
    /* 007b4280: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4283: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4287: mov ecx, edi */ r_ecx = r_edi;
    /* 007b4289: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x7b428eu); f_00692398();
L_007b428e:; BB(0x007b428e);
    /* 007b428e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b4291: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4294: jl 0x7b4241 */ if ((fS!=fO)) goto L_007b4241;
L_007b4296:; BB(0x007b4296);
    /* 007b4296: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4297: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4298: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4299: ret  */ FN_RET(0x007b4234); r_esp += 4; return;
}

void f_007b429c(void) /* sub_7B429C */
{
    FN_ENTER(0x007b429c);
    /* 007b429c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b429d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b429e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b42a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b42a3: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007b42a7: mov ebx, eax */ r_ebx = r_eax;
    /* 007b42a9: mov esi, edx */ r_esi = r_edx;
L_007b42ab:; BB(0x007b42ab);
    /* 007b42ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b42ac: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b42b1u); f_0068d5a8();
    /* 007b42b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b42b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b42b4: je 0x7b4331 */ if (fZ) goto L_007b4331;
L_007b42b6:; BB(0x007b42b6);
    /* 007b42b6: movsx ecx, word ptr [eax + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b42bd: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b42c0: jne 0x7b4331 */ if (!fZ) goto L_007b4331;
L_007b42c2:; BB(0x007b42c2);
    /* 007b42c2: movzx ecx, word ptr [eax + 0x750] */ r_ecx = (u32)R16((u32)(r_eax+0x750u));
    /* 007b42c9: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b42cf: je 0x7b4331 */ if (fZ) goto L_007b4331;
L_007b42d1:; BB(0x007b42d1);
    /* 007b42d1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007b42d4: test ecx, 0x100000 */ {  u32 a = r_ecx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b42da: mov edx, 0 */ r_edx = 0x0u;
    /* 007b42df: je 0x7b42e6 */ if (fZ) goto L_007b42e6;
L_007b42e1:; BB(0x007b42e1);
    /* 007b42e1: mov edx, 1 */ r_edx = 0x1u;
L_007b42e6:; BB(0x007b42e6);
    /* 007b42e6: mov byte ptr [esp], 0x3e */ W8((u32)(r_esp), 0x3eu);
    /* 007b42ea: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 007b42ef: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 007b42f4: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 007b42f9: mov word ptr [esp + 8], cx */ W16((u32)(r_esp+0x8u), (u16)r_ecx);
    /* 007b42fe: mov word ptr [esp + 0xa], cx */ W16((u32)(r_esp+0xau), (u16)r_ecx);
    /* 007b4303: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007b4307: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 007b430c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 007b430e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 007b4312: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 007b4315: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007b4319: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 007b431c: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 007b4320: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007b4324: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 007b4329: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b432c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b4331u); f_008003e0();
L_007b4331:; BB(0x007b4331);
    /* 007b4331: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b4334: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4337: jl 0x7b42ab */ if ((fS!=fO)) goto L_007b42ab;
L_007b433d:; BB(0x007b433d);
    /* 007b433d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4340: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4341: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4342: ret  */ FN_RET(0x007b429c); r_esp += 4; return;
}

void f_007b4344(void) /* sub_7B4344 */
{
    FN_ENTER(0x007b4344);
    /* 007b4344: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4345: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4346: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b4348: mov ebx, eax */ r_ebx = r_eax;
L_007b434a:; BB(0x007b434a);
    /* 007b434a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b434b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4350u); f_0068d5a8();
    /* 007b4350: mov esi, eax */ r_esi = r_eax;
    /* 007b4352: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4355: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4357: je 0x7b43a1 */ if (fZ) goto L_007b43a1;
L_007b4359:; BB(0x007b4359);
    /* 007b4359: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 007b4360: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4363: jne 0x7b43a1 */ if (!fZ) goto L_007b43a1;
L_007b4365:; BB(0x007b4365);
    /* 007b4365: mov ecx, esi */ r_ecx = r_esi;
    /* 007b4367: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x7b436cu); f_007ba980();
    /* 007b436c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007b436f: cmp dx, word ptr [esp + 0xc] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007b4374: jne 0x7b43a1 */ if (!fZ) goto L_007b43a1;
L_007b4376:; BB(0x007b4376);
    /* 007b4376: mov edx, dword ptr [0xaad64c] */ r_edx = R32((u32)(0xaad64cu));
    /* 007b437c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b437f: jne 0x7b43a1 */ if (!fZ) goto L_007b43a1;
L_007b4381:; BB(0x007b4381);
    /* 007b4381: movzx edx, word ptr [0xaad3bc] */ r_edx = (u32)R16((u32)(0xaad3bcu));
    /* 007b4388: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b438a: je 0x7b43a1 */ if (fZ) goto L_007b43a1;
L_007b438c:; BB(0x007b438c);
    /* 007b438c: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007b438e: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b4392: mov edx, 0xaad3bc */ r_edx = 0xaad3bcu;
    /* 007b4397: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4399: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x7b439eu); f_007184f8();
    /* 007b439e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b43a1:; BB(0x007b43a1);
    /* 007b43a1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b43a4: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b43a7: jl 0x7b434a */ if ((fS!=fO)) goto L_007b434a;
L_007b43a9:; BB(0x007b43a9);
    /* 007b43a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b43aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b43ab: ret  */ FN_RET(0x007b4344); r_esp += 4; return;
}

void f_007b43ac(void) /* sub_7B43AC */
{
    FN_ENTER(0x007b43ac);
    /* 007b43ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b43ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b43ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b43b0: mov ebx, eax */ r_ebx = r_eax;
L_007b43b2:; BB(0x007b43b2);
    /* 007b43b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b43b3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b43b8u); f_0068d5a8();
    /* 007b43b8: mov esi, eax */ r_esi = r_eax;
    /* 007b43ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b43bd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b43bf: je 0x7b4408 */ if (fZ) goto L_007b4408;
L_007b43c1:; BB(0x007b43c1);
    /* 007b43c1: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 007b43c8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b43cb: jne 0x7b4408 */ if (!fZ) goto L_007b4408;
L_007b43cd:; BB(0x007b43cd);
    /* 007b43cd: mov ecx, esi */ r_ecx = r_esi;
    /* 007b43cf: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x7b43d4u); f_007ba980();
    /* 007b43d4: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007b43d7: cmp edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b43db: jne 0x7b4408 */ if (!fZ) goto L_007b4408;
L_007b43dd:; BB(0x007b43dd);
    /* 007b43dd: mov edx, dword ptr [0xaad64c] */ r_edx = R32((u32)(0xaad64cu));
    /* 007b43e3: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b43e6: jne 0x7b4408 */ if (!fZ) goto L_007b4408;
L_007b43e8:; BB(0x007b43e8);
    /* 007b43e8: movzx edx, word ptr [0xaad278] */ r_edx = (u32)R16((u32)(0xaad278u));
    /* 007b43ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b43f1: je 0x7b4408 */ if (fZ) goto L_007b4408;
L_007b43f3:; BB(0x007b43f3);
    /* 007b43f3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 007b43f5: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b43f9: mov edx, 0xaad278 */ r_edx = 0xaad278u;
    /* 007b43fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b43ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4400: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x7b4405u); f_007184f8();
    /* 007b4405: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b4408:; BB(0x007b4408);
    /* 007b4408: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b440b: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b440e: jl 0x7b43b2 */ if ((fS!=fO)) goto L_007b43b2;
L_007b4410:; BB(0x007b4410);
    /* 007b4410: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4411: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4412: ret  */ FN_RET(0x007b43ac); r_esp += 4; return;
}

void f_007b4414(void) /* sub_7B4414 */
{
    FN_ENTER(0x007b4414);
    /* 007b4414: mov dword ptr [0xaad64c], 0 */ W32((u32)(0xaad64cu), 0x0u);
    /* 007b441e: ret  */ FN_RET(0x007b4414); r_esp += 4; return;
}

void f_007b4420(void) /* sub_7B4420 */
{
    FN_ENTER(0x007b4420);
    /* 007b4420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4421: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007b4425: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4427: je 0x7b4446 */ if (fZ) goto L_007b4446;
L_007b4429:; BB(0x007b4429);
    /* 007b4429: mov ecx, edi */ r_ecx = r_edi;
    /* 007b442b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7b4430u); f_008173b4();
    /* 007b4430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4432: je 0x7b4446 */ if (fZ) goto L_007b4446;
L_007b4434:; BB(0x007b4434);
    /* 007b4434: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007b4437: test eax, 0x2040800 */ {  u32 a = r_eax; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b443c: mov eax, 0 */ r_eax = 0x0u;
    /* 007b4441: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 007b4444: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4445: ret  */ FN_RET(0x007b4420); r_esp += 4; return;
L_007b4446:; BB(0x007b4446);
    /* 007b4446: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4449: ret  */ FN_RET(0x007b4420); r_esp += 4; return;
}

void f_007b444c(void) /* sub_7B444C */
{
    FN_ENTER(0x007b444c);
    /* 007b444c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007b4450: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007b4454: lea eax, [ecx + ecx*4] */ r_eax = (u32)(r_ecx+r_ecx*4);
    /* 007b4457: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007b4459: mov dword ptr [eax*8 + 0xa02ea0], ecx */ W32((u32)(r_eax*8+0xa02ea0u), r_ecx);
    /* 007b4460: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 007b4463: mov dword ptr [eax*8 + 0xa02ea4], ecx */ W32((u32)(r_eax*8+0xa02ea4u), r_ecx);
    /* 007b446a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 007b446d: mov dword ptr [eax*8 + 0xa02ea8], ecx */ W32((u32)(r_eax*8+0xa02ea8u), r_ecx);
    /* 007b4474: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 007b4477: mov dword ptr [eax*8 + 0xa02eac], ecx */ W32((u32)(r_eax*8+0xa02eacu), r_ecx);
    /* 007b447e: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 007b4481: mov dword ptr [eax*8 + 0xa02eb0], ecx */ W32((u32)(r_eax*8+0xa02eb0u), r_ecx);
    /* 007b4488: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 007b448b: mov dword ptr [eax*8 + 0xa02eb4], ecx */ W32((u32)(r_eax*8+0xa02eb4u), r_ecx);
    /* 007b4492: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 007b4495: mov dword ptr [eax*8 + 0xa02eb8], ecx */ W32((u32)(r_eax*8+0xa02eb8u), r_ecx);
    /* 007b449c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 007b449f: mov dword ptr [eax*8 + 0xa02ebc], ecx */ W32((u32)(r_eax*8+0xa02ebcu), r_ecx);
    /* 007b44a6: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 007b44a9: mov dword ptr [eax*8 + 0xa02ec0], ecx */ W32((u32)(r_eax*8+0xa02ec0u), r_ecx);
    /* 007b44b0: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 007b44b3: mov dword ptr [eax*8 + 0xa02ec4], edx */ W32((u32)(r_eax*8+0xa02ec4u), r_edx);
    /* 007b44ba: ret  */ FN_RET(0x007b444c); r_esp += 4; return;
}

void f_007b44bc(void) /* sub_7B44BC */
{
    FN_ENTER(0x007b44bc);
    /* 007b44bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b44bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b44be: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007b44c2: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 007b44c7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b44ca: jge 0x7b456c */ if ((fS==fO)) goto L_007b456c;
L_007b44d0:; BB(0x007b44d0);
    /* 007b44d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b44d2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007b44d5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b44d7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007b44d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b44db: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007b44de: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b44e0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b44e2: mov edi, dword ptr [eax + 0xaad598] */ r_edi = R32((u32)(r_eax+0xaad598u));
    /* 007b44e8: cmp edi, 0x19 */ {  u32 a = r_edi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b44eb: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b44ed:; BB(0x007b44ed);
    /* 007b44ed: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b44ef: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b44f1:; BB(0x007b44f1);
    /* 007b44f1: mov edi, dword ptr [edx*8 + 0xaad59c] */ r_edi = R32((u32)(r_edx*8+0xaad59cu));
    /* 007b44f8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007b44fd: cmp edi, 0x19 */ {  u32 a = r_edi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4500: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b4502:; BB(0x007b4502);
    /* 007b4502: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4504: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b4506:; BB(0x007b4506);
    /* 007b4506: mov edi, dword ptr [edx*8 + 0xaad5a0] */ r_edi = R32((u32)(r_edx*8+0xaad5a0u));
    /* 007b450d: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007b4512: cmp edi, 0x19 */ {  u32 a = r_edi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4515: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b4517:; BB(0x007b4517);
    /* 007b4517: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4519: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b451b:; BB(0x007b451b);
    /* 007b451b: mov edi, dword ptr [edx*8 + 0xaad5a4] */ r_edi = R32((u32)(r_edx*8+0xaad5a4u));
    /* 007b4522: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007b4527: cmp edi, 0x19 */ {  u32 a = r_edi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b452a: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b452c:; BB(0x007b452c);
    /* 007b452c: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b452e: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b4530:; BB(0x007b4530);
    /* 007b4530: mov edi, dword ptr [edx*8 + 0xaad5a8] */ r_edi = R32((u32)(r_edx*8+0xaad5a8u));
    /* 007b4537: mov ecx, 4 */ r_ecx = 0x4u;
    /* 007b453c: cmp edi, 0x19 */ {  u32 a = r_edi; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b453f: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b4541:; BB(0x007b4541);
    /* 007b4541: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4543: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b4545:; BB(0x007b4545);
    /* 007b4545: mov edx, dword ptr [edx*8 + 0xaad5ac] */ r_edx = R32((u32)(r_edx*8+0xaad5acu));
    /* 007b454c: mov ecx, 5 */ r_ecx = 0x5u;
    /* 007b4551: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4554: je 0x7b455a */ if (fZ) goto L_007b455a;
L_007b4556:; BB(0x007b4556);
    /* 007b4556: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4558: jne 0x7b456c */ if (!fZ) goto L_007b456c;
L_007b455a:; BB(0x007b455a);
    /* 007b455a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007b455e: mov dword ptr [eax + ecx*4 + 0xaad598], esi */ W32((u32)(r_eax+r_ecx*4+0xaad598u), r_esi);
    /* 007b4565: mov dword ptr [eax + ecx*4 + 0xaad580], edx */ W32((u32)(r_eax+r_ecx*4+0xaad580u), r_edx);
L_007b456c:; BB(0x007b456c);
    /* 007b456c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b456d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b456e: ret  */ FN_RET(0x007b44bc); r_esp += 4; return;
}

void f_007b4570(void) /* sub_7B4570 */
{
    FN_ENTER(0x007b4570);
    /* 007b4570: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4571: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007b4575: movzx esi, word ptr [esp + 0xc] */ r_esi = (u32)R16((u32)(r_esp+0xcu));
    /* 007b457a: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b457d: jge 0x7b45df */ if ((fS==fO)) goto L_007b45df;
L_007b457f:; BB(0x007b457f);
    /* 007b457f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4581: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007b4584: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4586: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007b4588: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b458a: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 007b458d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b458f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b4591: cmp edx, dword ptr [esi + 0xaad598] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0xaad598u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4597: je 0x7b45e3 */ if (fZ) goto L_007b45e3;
L_007b4599:; BB(0x007b4599);
    /* 007b4599: cmp edx, dword ptr [eax*8 + 0xaad59c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0xaad59cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b45a0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007b45a5: je 0x7b45e3 */ if (fZ) goto L_007b45e3;
L_007b45a7:; BB(0x007b45a7);
    /* 007b45a7: cmp edx, dword ptr [eax*8 + 0xaad5a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0xaad5a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b45ae: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007b45b3: je 0x7b45e3 */ if (fZ) goto L_007b45e3;
L_007b45b5:; BB(0x007b45b5);
    /* 007b45b5: cmp edx, dword ptr [eax*8 + 0xaad5a4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0xaad5a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b45bc: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007b45c1: je 0x7b45e3 */ if (fZ) goto L_007b45e3;
L_007b45c3:; BB(0x007b45c3);
    /* 007b45c3: cmp edx, dword ptr [eax*8 + 0xaad5a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0xaad5a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b45ca: mov ecx, 4 */ r_ecx = 0x4u;
    /* 007b45cf: je 0x7b45e3 */ if (fZ) goto L_007b45e3;
L_007b45d1:; BB(0x007b45d1);
    /* 007b45d1: cmp edx, dword ptr [eax*8 + 0xaad5ac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0xaad5acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b45d8: mov ecx, 5 */ r_ecx = 0x5u;
    /* 007b45dd: je 0x7b45e3 */ if (fZ) goto L_007b45e3;
L_007b45df:; BB(0x007b45df);
    /* 007b45df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b45e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b45e2: ret  */ FN_RET(0x007b4570); r_esp += 4; return;
L_007b45e3:; BB(0x007b45e3);
    /* 007b45e3: mov eax, dword ptr [esi + ecx*4 + 0xaad580] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xaad580u));
    /* 007b45ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b45eb: ret  */ FN_RET(0x007b4570); r_esp += 4; return;
}

void f_007b45ec(void) /* sub_7B45EC */
{
    FN_ENTER(0x007b45ec);
    /* 007b45ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b45ed: mov ebp, esp */ r_ebp = r_esp;
    /* 007b45ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b45f1: push 0x8f6066 */ { u32 v = 0x8f6066u; r_esp -= 4; W32(r_esp, v); }
    /* 007b45f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007b45fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b45fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007b4604: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b4607: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007b460a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007b460d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007b4610: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007b4613: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4616: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007b4619: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7b461eu); f_008193cc();
    /* 007b461e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007b4625: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007b4628: mov dword ptr [eax], 0xb46638 */ W32((u32)(r_eax), 0xb46638u);
    /* 007b462e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b4630: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 007b4637: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_007b463a:; BB(0x007b463a);
    /* 007b463a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007b463d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b463e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4643u); f_0068d5a8();
    /* 007b4643: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007b4646: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4649: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b464b: je 0x7b46c9 */ if (fZ) goto L_007b46c9;
L_007b464d:; BB(0x007b464d);
    /* 007b464d: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b4654: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4657: jne 0x7b46c9 */ if (!fZ) goto L_007b46c9;
L_007b4659:; BB(0x007b4659);
    /* 007b4659: movzx edx, word ptr [eax + 0x750] */ r_edx = (u32)R16((u32)(r_eax+0x750u));
    /* 007b4660: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4666: je 0x7b46c9 */ if (fZ) goto L_007b46c9;
L_007b4668:; BB(0x007b4668);
    /* 007b4668: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007b466f: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 007b4674: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7b4679u); f_005caba4();
    /* 007b4679: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b467a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007b467d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b467f: je 0x7b46bb */ if (fZ) goto L_007b46bb;
L_007b4681:; BB(0x007b4681);
    /* 007b4681: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007b4688: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007b468f: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4695: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007b4698: movzx edi, word ptr [ebx + 0x750] */ r_edi = (u32)R16((u32)(r_ebx+0x750u));
    /* 007b469f: mov ecx, eax */ r_ecx = r_eax;
    /* 007b46a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007b46a4: push dword ptr [ebx + 0x754] */ { u32 v = R32((u32)(r_ebx+0x754u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b46aa: movzx esi, dx */ r_esi = (u32)(u16)r_edx;
    /* 007b46ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b46ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b46af: call 0x7aea10 */ r_esp -= 4; W32(r_esp, 0x7b46b4u); f_007aea10();
    /* 007b46b4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_007b46bb:; BB(0x007b46bb);
    /* 007b46bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007b46c2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007b46c5: add dword ptr [eax + 0x1c], 1 */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007b46c9:; BB(0x007b46c9);
    /* 007b46c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007b46cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b46cf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007b46d2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b46d5: jl 0x7b463a */ if ((fS!=fO)) goto L_007b463a;
L_007b46db:; BB(0x007b46db);
    /* 007b46db: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007b46de: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007b46e1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007b46e4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007b46e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b46ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b46f1: mov esp, ebp */ r_esp = r_ebp;
    /* 007b46f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b46f4: ret 4 */ FN_RET(0x007b45ec); r_esp += 8; return;
}

void f_007b46f8(void) /* sub_7B46F8 */
{
    FN_ENTER(0x007b46f8);
    /* 007b46f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b46f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007b46fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b46fd: push 0x8f608c */ { u32 v = 0x8f608cu; r_esp -= 4; W32(r_esp, v); }
    /* 007b4702: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007b4708: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4709: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007b4710: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b4713: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007b4716: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007b4719: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007b471c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007b471f: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 007b4724: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4726: jne 0x7b4741 */ if (!fZ) goto L_007b4741;
L_007b4728:; BB(0x007b4728);
    /* 007b4728: movzx eax, word ptr [0xaad650] */ r_eax = (u32)R16((u32)(0xaad650u));
    /* 007b472f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4734: je 0x7b4741 */ if (fZ) goto L_007b4741;
L_007b4736:; BB(0x007b4736);
    /* 007b4736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4737: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b473cu); f_0068d5a8();
    /* 007b473c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b473d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b473f: je 0x7b4758 */ if (fZ) goto L_007b4758;
L_007b4741:; BB(0x007b4741);
    /* 007b4741: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007b4744: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007b4747: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007b474a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b474d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b4754: mov esp, ebp */ r_esp = r_ebp;
    /* 007b4756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4757: ret  */ FN_RET(0x007b46f8); r_esp += 4; return;
L_007b4758:; BB(0x007b4758);
    /* 007b4758: movzx eax, word ptr [0xa03cc0] */ r_eax = (u32)R16((u32)(0xa03cc0u));
    /* 007b475f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4760: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4765u); f_0068d5a8();
    /* 007b4765: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007b4768: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b476b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b476d: je 0x7b4854 */ if (fZ) goto L_007b4854;
L_007b4773:; BB(0x007b4773);
    /* 007b4773: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007b477a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b477d: jne 0x7b4854 */ if (!fZ) goto L_007b4854;
L_007b4783:; BB(0x007b4783);
    /* 007b4783: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007b4785: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007b4787:; BB(0x007b4787);
    /* 007b4787: movzx eax, word ptr [0xa03cc0] */ r_eax = (u32)R16((u32)(0xa03cc0u));
    /* 007b478e: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4790: je 0x7b4840 */ if (fZ) goto L_007b4840;
L_007b4796:; BB(0x007b4796);
    /* 007b4796: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4797: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b479cu); f_0068d5a8();
    /* 007b479c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b479d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b479f: je 0x7b4840 */ if (fZ) goto L_007b4840;
L_007b47a5:; BB(0x007b47a5);
    /* 007b47a5: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007b47aa: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b47ac: jne 0x7b4741 */ if (!fZ) goto L_007b4741;
L_007b47ae:; BB(0x007b47ae);
    /* 007b47ae: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b47b1: mov word ptr [0xaad650], ax */ W16((u32)(0xaad650u), (u16)r_eax);
    /* 007b47b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b47b8: call 0x7b4879 */ r_esp -= 4; W32(r_esp, 0x7b47bdu); f_007b4879();
    /* 007b47bd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007b47c0: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 007b47c6: mov ecx, dword ptr [0xaad654] */ r_ecx = R32((u32)(0xaad654u));
    /* 007b47cc: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 007b47d1: mov eax, 3 */ r_eax = 0x3u;
    /* 007b47d6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007b47dd: mov word ptr [ebx + 0x32c], ax */ W16((u32)(r_ebx+0x32cu), (u16)r_eax);
    /* 007b47e4: mov word ptr [ebx + 0x750], dx */ W16((u32)(r_ebx+0x750u), (u16)r_edx);
    /* 007b47eb: mov dword ptr [ebx + 0x754], ecx */ W32((u32)(r_ebx+0x754u), r_ecx);
    /* 007b47f1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7b47f6u); f_005caba4();
    /* 007b47f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b47f9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007b47fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b47fe: je 0x7b4741 */ if (fZ) goto L_007b4741;
L_007b4804:; BB(0x007b4804);
    /* 007b4804: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007b480b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007b4812: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4818: mov edx, ebx */ r_edx = r_ebx;
    /* 007b481a: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 007b481e: mov ecx, eax */ r_ecx = r_eax;
    /* 007b4820: movzx esi, word ptr [0xa9c4f4] */ r_esi = (u32)R16((u32)(0xa9c4f4u));
    /* 007b4827: push dword ptr [edx + 0x754] */ { u32 v = R32((u32)(r_edx+0x754u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b482d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b482e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b482f: call 0x7aea10 */ r_esp -= 4; W32(r_esp, 0x7b4834u); f_007aea10();
    /* 007b4834: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007b483b: jmp 0x7b4741 */ goto L_007b4741;
L_007b4840:; BB(0x007b4840);
    /* 007b4840: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007b4843: movzx ebx, si */ r_ebx = (u32)(u16)r_esi;
    /* 007b4846: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4849: jl 0x7b4787 */ if ((fS!=fO)) goto L_007b4787;
L_007b484f:; BB(0x007b484f);
    /* 007b484f: jmp 0x7b4741 */ goto L_007b4741;
L_007b4854:; BB(0x007b4854);
    /* 007b4854: mov dword ptr [0xaad654], 0 */ W32((u32)(0xaad654u), 0x0u);
    /* 007b485e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007b4863: mov word ptr [0xaad650], ax */ W16((u32)(0xaad650u), (u16)r_eax);
    /* 007b4869: mov word ptr [0xa03cc0], ax */ W16((u32)(0xa03cc0u), (u16)r_eax);
    /* 007b486f: jmp 0x7b4741 */ goto L_007b4741;
}

void f_007b4874(void) /* sub_7B4874 */
{
    FN_ENTER(0x007b4874);
    /* 007b4874: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007b4879: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b487c: mov byte ptr [esp], 0x69 */ W8((u32)(r_esp), 0x69u);
    /* 007b4880: mov edx, 2 */ r_edx = 0x2u;
    /* 007b4885: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 007b488a: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 007b488f: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b4894: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b4897: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b489cu); f_008003e0();
    /* 007b489c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b489f: ret  */ FN_RET(0x007b4874); r_esp += 4; return;
}

void f_007b4879(void) /* sub_7B4879 */
{
    FN_ENTER(0x007b4879);
    /* 007b4879: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b487c: mov byte ptr [esp], 0x69 */ W8((u32)(r_esp), 0x69u);
    /* 007b4880: mov edx, 2 */ r_edx = 0x2u;
    /* 007b4885: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 007b488a: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 007b488f: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b4894: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b4897: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b489cu); f_008003e0();
    /* 007b489c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b489f: ret  */ FN_RET(0x007b4879); r_esp += 4; return;
}

void f_007b48a0(void) /* sub_7B48A0 */
{
    FN_ENTER(0x007b48a0);
    /* 007b48a0: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 007b48a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b48a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b48aa: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007b48ad: lea eax, [edx + ecx + 0x97df90] */ r_eax = (u32)(r_edx+r_ecx+0x97df90u);
    /* 007b48b4: ret  */ FN_RET(0x007b48a0); r_esp += 4; return;
}

void f_007b48b8(void) /* sub_7B48B8 */
{
    FN_ENTER(0x007b48b8);
    /* 007b48b8: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 007b48be: mov eax, dword ptr [edx*4 + 0x97df84] */ r_eax = R32((u32)(r_edx*4+0x97df84u));
    /* 007b48c5: ret  */ FN_RET(0x007b48b8); r_esp += 4; return;
}

void f_007b48c8(void) /* sub_7B48C8 */
{
    FN_ENTER(0x007b48c8);
    /* 007b48c8: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 007b48ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b48d0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b48d2: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007b48d5: lea eax, [edx + ecx + 0x97df60] */ r_eax = (u32)(r_edx+r_ecx+0x97df60u);
    /* 007b48dc: ret  */ FN_RET(0x007b48c8); r_esp += 4; return;
}

void f_007b48e0(void) /* sub_7B48E0 */
{
    FN_ENTER(0x007b48e0);
    /* 007b48e0: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 007b48e6: mov eax, dword ptr [edx*4 + 0x97df54] */ r_eax = R32((u32)(r_edx*4+0x97df54u));
    /* 007b48ed: ret  */ FN_RET(0x007b48e0); r_esp += 4; return;
}

void f_007b48f0(void) /* sub_7B48F0 */
{
    FN_ENTER(0x007b48f0);
    /* 007b48f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b48f1: movsx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 007b48f6: cmp ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b48f9: jl 0x7b48fd */ if ((fS!=fO)) goto L_007b48fd;
L_007b48fb:; BB(0x007b48fb);
    /* 007b48fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b48fc: ret  */ FN_RET(0x007b48f0); r_esp += 4; return;
L_007b48fd:; BB(0x007b48fd);
    /* 007b48fd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007b4902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4903: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4908u); f_0068d5a8();
    /* 007b4908: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b490b: je 0x7b4915 */ if (fZ) goto L_007b4915;
L_007b490d:; BB(0x007b490d);
    /* 007b490d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b490e: mov ecx, eax */ r_ecx = r_eax;
    /* 007b4910: call 0x6943e0 */ r_esp -= 4; W32(r_esp, 0x7b4915u); f_006943e0();
L_007b4915:; BB(0x007b4915);
    /* 007b4915: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4916: ret  */ FN_RET(0x007b48f0); r_esp += 4; return;
}

void f_007b4918(void) /* sub_7B4918 */
{
    FN_ENTER(0x007b4918);
    /* 007b4918: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007b491d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b491e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4923u); f_0068d5a8();
    /* 007b4923: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4924: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4926: je 0x7b492f */ if (fZ) goto L_007b492f;
L_007b4928:; BB(0x007b4928);
    /* 007b4928: mov ecx, eax */ r_ecx = r_eax;
    /* 007b492a: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x7b492fu); f_006855b0();
L_007b492f:; BB(0x007b492f);
    /* 007b492f: ret  */ FN_RET(0x007b4918); r_esp += 4; return;
}

void f_007b4930(void) /* sub_7B4930 */
{
    FN_ENTER(0x007b4930);
    /* 007b4930: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007b4935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4936: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b493bu); f_0068d5a8();
    /* 007b493b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b493c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b493e: je 0x7b494a */ if (fZ) goto L_007b494a;
L_007b4940:; BB(0x007b4940);
    /* 007b4940: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007b4944: mov dword ptr [eax + 0x720], edx */ W32((u32)(r_eax+0x720u), r_edx);
L_007b494a:; BB(0x007b494a);
    /* 007b494a: ret  */ FN_RET(0x007b4930); r_esp += 4; return;
}

void f_007b494c(void) /* sub_7B494C */
{
    FN_ENTER(0x007b494c);
    /* 007b494c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007b4951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4952: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4957u); f_0068d5a8();
    /* 007b4957: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b495a: je 0x7b4966 */ if (fZ) goto L_007b4966;
L_007b495c:; BB(0x007b495c);
    /* 007b495c: mov dword ptr [eax + 0x720], 0 */ W32((u32)(r_eax+0x720u), 0x0u);
L_007b4966:; BB(0x007b4966);
    /* 007b4966: ret  */ FN_RET(0x007b494c); r_esp += 4; return;
}

void f_007b4968(void) /* sub_7B4968 */
{
    FN_ENTER(0x007b4968);
    /* 007b4968: mov dword ptr [0xaad640], 0x3f800000 */ W32((u32)(0xaad640u), 0x3f800000u);
    /* 007b4972: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007b4977: mov dword ptr [0xaad644], 0x41000000 */ W32((u32)(0xaad644u), 0x41000000u);
    /* 007b4981: mov word ptr [0xaad650], ax */ W16((u32)(0xaad650u), (u16)r_eax);
    /* 007b4987: mov dword ptr [0xaad648], 0x3fc00000 */ W32((u32)(0xaad648u), 0x3fc00000u);
    /* 007b4991: mov dword ptr [0xaad654], 0 */ W32((u32)(0xaad654u), 0x0u);
    /* 007b499b: ret  */ FN_RET(0x007b4968); r_esp += 4; return;
}

void f_007b499c(void) /* sub_7B499C */
{
    FN_ENTER(0x007b499c);
    /* 007b499c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b499e: mov dword ptr [0xaad64c], eax */ W32((u32)(0xaad64cu), r_eax);
    /* 007b49a3: mov word ptr [0xaacae0], ax */ W16((u32)(0xaacae0u), (u16)r_eax);
    /* 007b49a9: mov word ptr [0xaacb4c], ax */ W16((u32)(0xaacb4cu), (u16)r_eax);
    /* 007b49af: mov word ptr [0xaacbb8], ax */ W16((u32)(0xaacbb8u), (u16)r_eax);
    /* 007b49b5: mov word ptr [0xaacc24], ax */ W16((u32)(0xaacc24u), (u16)r_eax);
    /* 007b49bb: mov word ptr [0xaacc90], ax */ W16((u32)(0xaacc90u), (u16)r_eax);
    /* 007b49c1: mov word ptr [0xaaccfc], ax */ W16((u32)(0xaaccfcu), (u16)r_eax);
    /* 007b49c7: mov word ptr [0xaacd68], ax */ W16((u32)(0xaacd68u), (u16)r_eax);
    /* 007b49cd: mov word ptr [0xaacdd4], ax */ W16((u32)(0xaacdd4u), (u16)r_eax);
    /* 007b49d3: mov word ptr [0xaace40], ax */ W16((u32)(0xaace40u), (u16)r_eax);
    /* 007b49d9: mov word ptr [0xaaceac], ax */ W16((u32)(0xaaceacu), (u16)r_eax);
    /* 007b49df: mov word ptr [0xaacf18], ax */ W16((u32)(0xaacf18u), (u16)r_eax);
    /* 007b49e5: mov word ptr [0xaacf84], ax */ W16((u32)(0xaacf84u), (u16)r_eax);
    /* 007b49eb: mov word ptr [0xaacff0], ax */ W16((u32)(0xaacff0u), (u16)r_eax);
    /* 007b49f1: mov word ptr [0xaad05c], ax */ W16((u32)(0xaad05cu), (u16)r_eax);
    /* 007b49f7: mov word ptr [0xaad0c8], ax */ W16((u32)(0xaad0c8u), (u16)r_eax);
    /* 007b49fd: mov word ptr [0xaad134], ax */ W16((u32)(0xaad134u), (u16)r_eax);
    /* 007b4a03: mov word ptr [0xaad1a0], ax */ W16((u32)(0xaad1a0u), (u16)r_eax);
    /* 007b4a09: mov word ptr [0xaad20c], ax */ W16((u32)(0xaad20cu), (u16)r_eax);
    /* 007b4a0f: mov word ptr [0xaad278], ax */ W16((u32)(0xaad278u), (u16)r_eax);
    /* 007b4a15: mov word ptr [0xaad2e4], ax */ W16((u32)(0xaad2e4u), (u16)r_eax);
    /* 007b4a1b: mov word ptr [0xaad350], ax */ W16((u32)(0xaad350u), (u16)r_eax);
    /* 007b4a21: mov word ptr [0xaad3bc], ax */ W16((u32)(0xaad3bcu), (u16)r_eax);
    /* 007b4a27: mov word ptr [0xaad428], ax */ W16((u32)(0xaad428u), (u16)r_eax);
    /* 007b4a2d: mov word ptr [0xaad494], ax */ W16((u32)(0xaad494u), (u16)r_eax);
    /* 007b4a33: mov word ptr [0xaad500], ax */ W16((u32)(0xaad500u), (u16)r_eax);
    /* 007b4a39: mov dword ptr [0xaacabc], eax */ W32((u32)(0xaacabcu), r_eax);
    /* 007b4a3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b4a40:; BB(0x007b4a40);
    /* 007b4a40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b4a42: mov dword ptr [eax + 0xaad580], edx */ W32((u32)(r_eax+0xaad580u), r_edx);
    /* 007b4a48: mov dword ptr [eax + 0xaad584], edx */ W32((u32)(r_eax+0xaad584u), r_edx);
    /* 007b4a4e: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 007b4a53: mov dword ptr [eax + 0xaad598], ecx */ W32((u32)(r_eax+0xaad598u), r_ecx);
    /* 007b4a59: mov dword ptr [eax + 0xaad59c], ecx */ W32((u32)(r_eax+0xaad59cu), r_ecx);
    /* 007b4a5f: mov dword ptr [eax + 0xaad588], edx */ W32((u32)(r_eax+0xaad588u), r_edx);
    /* 007b4a65: mov dword ptr [eax + 0xaad5a0], ecx */ W32((u32)(r_eax+0xaad5a0u), r_ecx);
    /* 007b4a6b: mov dword ptr [eax + 0xaad58c], edx */ W32((u32)(r_eax+0xaad58cu), r_edx);
    /* 007b4a71: mov dword ptr [eax + 0xaad5a4], ecx */ W32((u32)(r_eax+0xaad5a4u), r_ecx);
    /* 007b4a77: mov dword ptr [eax + 0xaad590], edx */ W32((u32)(r_eax+0xaad590u), r_edx);
    /* 007b4a7d: mov dword ptr [eax + 0xaad5a8], ecx */ W32((u32)(r_eax+0xaad5a8u), r_ecx);
    /* 007b4a83: mov dword ptr [eax + 0xaad594], edx */ W32((u32)(r_eax+0xaad594u), r_edx);
    /* 007b4a89: mov dword ptr [eax + 0xaad5ac], ecx */ W32((u32)(r_eax+0xaad5acu), r_ecx);
    /* 007b4a8f: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4a92: cmp eax, 0xc0 */ {  u32 a = r_eax; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4a97: jl 0x7b4a40 */ if ((fS!=fO)) goto L_007b4a40;
L_007b4a99:; BB(0x007b4a99);
    /* 007b4a99: ret  */ FN_RET(0x007b499c); r_esp += 4; return;
}

void f_007b4a9c(void) /* sub_7B4A9C */
{
    FN_ENTER(0x007b4a9c);
    /* 007b4a9c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b4a9f: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007b4aa4: mov byte ptr [esp], 0x69 */ W8((u32)(r_esp), 0x69u);
    /* 007b4aa8: mov edx, 1 */ r_edx = 0x1u;
    /* 007b4aad: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 007b4ab2: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 007b4ab7: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 007b4abc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b4abf: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7b4ac4u); f_008003e0();
    /* 007b4ac4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4ac7: ret  */ FN_RET(0x007b4a9c); r_esp += 4; return;
}

void f_007b4ac8(void) /* sub_7B4AC8 */
{
    FN_ENTER(0x007b4ac8);
    /* 007b4ac8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4ac9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b4acb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b4acd: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x7b4ad2u); f_007b4aec();
    /* 007b4ad2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007b4ad6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4ad8: jne 0x7b4ade */ if (!fZ) goto L_007b4ade;
L_007b4ada:; BB(0x007b4ada);
    /* 007b4ada: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4adb: ret 4 */ FN_RET(0x007b4ac8); r_esp += 8; return;
L_007b4ade:; BB(0x007b4ade);
    /* 007b4ade: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4adf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7b4ae4u); f_005c2f74();
    /* 007b4ae4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4ae5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4ae6: ret 4 */ FN_RET(0x007b4ac8); r_esp += 8; return;
}

void f_007b4aec(void) /* sub_7B4AEC */
{
    FN_ENTER(0x007b4aec);
    /* 007b4aec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b4aed: mov ebp, esp */ r_ebp = r_esp;
    /* 007b4aef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007b4af1: push 0x8f60a8 */ { u32 v = 0x8f60a8u; r_esp -= 4; W32(r_esp, v); }
    /* 007b4af6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007b4afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4afd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007b4b04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b4b07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007b4b0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007b4b0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007b4b10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007b4b13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007b4b16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007b4b19: mov dword ptr [ecx], 0xb46670 */ W32((u32)(r_ecx), 0xb46670u);
    /* 007b4b1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b4b21: mov dword ptr [ecx + 0xa8], eax */ W32((u32)(r_ecx+0xa8u), r_eax);
    /* 007b4b27: mov dword ptr [ecx + 0xa4], eax */ W32((u32)(r_ecx+0xa4u), r_eax);
    /* 007b4b2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007b4b34: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x7b4b39u); f_007ba1f0();
    /* 007b4b39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007b4b3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007b4b43: mov esp, ebp */ r_esp = r_ebp;
    /* 007b4b45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4b46: ret  */ FN_RET(0x007b4aec); r_esp += 4; return;
}

void f_007b4b48(void) /* sub_7B4B48 */
{
    FN_ENTER(0x007b4b48);
    /* 007b4b48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4b49: mov edi, ecx */ r_edi = r_ecx;
    /* 007b4b4b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b4b4f: mov ecx, edi */ r_ecx = r_edi;
    /* 007b4b51: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x7b4b56u); f_007ba278();
    /* 007b4b56: mov dword ptr [edi], 0xb46670 */ W32((u32)(r_edi), 0xb46670u);
    /* 007b4b5c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007b4b61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4b63: mov dword ptr [edi + 0x98], eax */ W32((u32)(r_edi+0x98u), r_eax);
    /* 007b4b69: mov dword ptr [edi + 0xa0], eax */ W32((u32)(r_edi+0xa0u), r_eax);
    /* 007b4b6f: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 007b4b75: mov dword ptr [edi + 0xa8], eax */ W32((u32)(r_edi+0xa8u), r_eax);
    /* 007b4b7b: mov dword ptr [edi + 0xa4], eax */ W32((u32)(r_edi+0xa4u), r_eax);
    /* 007b4b81: mov word ptr [edi + 0x94], dx */ W16((u32)(r_edi+0x94u), (u16)r_edx);
    /* 007b4b88: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 007b4b8e: mov word ptr [edi + 0x96], ax */ W16((u32)(r_edi+0x96u), (u16)r_eax);
    /* 007b4b95: mov eax, edi */ r_eax = r_edi;
    /* 007b4b97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4b98: ret 4 */ FN_RET(0x007b4b48); r_esp += 8; return;
}

void f_007b4b9c(void) /* sub_7B4B9C */
{
    FN_ENTER(0x007b4b9c);
    /* 007b4b9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007b4b9e:; BB(0x007b4b9e);
    /* 007b4b9e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b4ba0: mov dword ptr [eax + 0xaad720], edx */ W32((u32)(r_eax+0xaad720u), r_edx);
    /* 007b4ba6: mov dword ptr [eax + 0xaad724], edx */ W32((u32)(r_eax+0xaad724u), r_edx);
    /* 007b4bac: mov dword ptr [eax + 0xaad728], edx */ W32((u32)(r_eax+0xaad728u), r_edx);
    /* 007b4bb2: mov dword ptr [eax + 0xaad72c], edx */ W32((u32)(r_eax+0xaad72cu), r_edx);
    /* 007b4bb8: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4bbb: cmp eax, 0xa30 */ {  u32 a = r_eax; u32 b = 0xa30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4bc0: jl 0x7b4b9e */ if ((fS!=fO)) goto L_007b4b9e;
L_007b4bc2:; BB(0x007b4bc2);
    /* 007b4bc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4bc4: mov dword ptr [0xaae16c], eax */ W32((u32)(0xaae16cu), r_eax);
    /* 007b4bc9: mov dword ptr [0xaad6e0], eax */ W32((u32)(0xaad6e0u), r_eax);
    /* 007b4bce: mov dword ptr [0xaad6e4], eax */ W32((u32)(0xaad6e4u), r_eax);
    /* 007b4bd3: mov dword ptr [0xaad6e8], eax */ W32((u32)(0xaad6e8u), r_eax);
    /* 007b4bd8: mov dword ptr [0xaad6ec], eax */ W32((u32)(0xaad6ecu), r_eax);
    /* 007b4bdd: mov dword ptr [0xaad6f0], eax */ W32((u32)(0xaad6f0u), r_eax);
    /* 007b4be2: mov dword ptr [0xaad6f4], eax */ W32((u32)(0xaad6f4u), r_eax);
    /* 007b4be7: mov dword ptr [0xaad6f8], eax */ W32((u32)(0xaad6f8u), r_eax);
    /* 007b4bec: mov dword ptr [0xaad6fc], eax */ W32((u32)(0xaad6fcu), r_eax);
    /* 007b4bf1: mov dword ptr [0xaad700], eax */ W32((u32)(0xaad700u), r_eax);
    /* 007b4bf6: mov dword ptr [0xaad704], eax */ W32((u32)(0xaad704u), r_eax);
    /* 007b4bfb: mov dword ptr [0xaad708], eax */ W32((u32)(0xaad708u), r_eax);
    /* 007b4c00: mov dword ptr [0xaad70c], eax */ W32((u32)(0xaad70cu), r_eax);
    /* 007b4c05: mov dword ptr [0xaad710], eax */ W32((u32)(0xaad710u), r_eax);
    /* 007b4c0a: mov dword ptr [0xaad714], eax */ W32((u32)(0xaad714u), r_eax);
    /* 007b4c0f: mov dword ptr [0xaad718], eax */ W32((u32)(0xaad718u), r_eax);
    /* 007b4c14: mov dword ptr [0xaad71c], eax */ W32((u32)(0xaad71cu), r_eax);
    /* 007b4c19: ret  */ FN_RET(0x007b4b9c); r_esp += 4; return;
}

void f_007b4c1c(void) /* sub_7B4C1C */
{
    FN_ENTER(0x007b4c1c);
    /* 007b4c1c: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 007b4c22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4c24: je 0x7b4c57 */ if (fZ) goto L_007b4c57;
L_007b4c26:; BB(0x007b4c26);
    /* 007b4c26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b4c28: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007b4c2a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007b4c2d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007b4c30: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007b4c33: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 007b4c36: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 007b4c39: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 007b4c3c: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007b4c3f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007b4c42: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007b4c45: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 007b4c48: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007b4c4b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007b4c4e: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 007b4c51: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 007b4c54: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
L_007b4c57:; BB(0x007b4c57);
    /* 007b4c57: ret  */ FN_RET(0x007b4c1c); r_esp += 4; return;
}

void f_007b4c58(void) /* sub_7B4C58 */
{
    FN_ENTER(0x007b4c58);
    /* 007b4c58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4c59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4c5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b4c5b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b4c5e: mov edi, ecx */ r_edi = r_ecx;
    /* 007b4c60: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 007b4c64: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 007b4c68: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007b4c6a: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 007b4c6d: fld dword ptr [0x97e3e4] */ FPUSH(R_F32((u32)(0x97e3e4u)));
    /* 007b4c73: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b4c76: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 007b4c79: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007b4c7d: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 007b4c81: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007b4c85: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b4c89: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b4c8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4c8e: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x7b4c93u); f_007ba9ec();
    /* 007b4c93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4c94: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007b4c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4c99: jne 0x7b4ca2 */ if (!fZ) goto L_007b4ca2;
L_007b4c9b:; BB(0x007b4c9b);
    /* 007b4c9b: mov eax, 0x55 */ r_eax = 0x55u;
    /* 007b4ca0: jmp 0x7b4ca7 */ goto L_007b4ca7;
L_007b4ca2:; BB(0x007b4ca2);
    /* 007b4ca2: mov eax, 0x15 */ r_eax = 0x15u;
L_007b4ca7:; BB(0x007b4ca7);
    /* 007b4ca7: mov edx, dword ptr [edi + 0x90] */ r_edx = R32((u32)(r_edi+0x90u));
    /* 007b4cad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4caf: je 0x7b4cfd */ if (fZ) goto L_007b4cfd;
L_007b4cb1:; BB(0x007b4cb1);
    /* 007b4cb1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b4cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4cb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4cb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4cb7: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x7b4cbcu); f_007806dc();
    /* 007b4cbc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007b4cbf:; BB(0x007b4cbf);
    /* 007b4cbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4cc1: je 0x7b4d0c */ if (fZ) goto L_007b4d0c;
L_007b4cc3:; BB(0x007b4cc3);
    /* 007b4cc3: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 007b4cc6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007b4cc8: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 007b4cca: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 007b4ccd: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 007b4cd0: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 007b4cd3: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 007b4cd6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4cd8: je 0x7b4cef */ if (fZ) goto L_007b4cef;
L_007b4cda:; BB(0x007b4cda);
    /* 007b4cda: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007b4cdd: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 007b4ce0: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 007b4ce3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 007b4ce6: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 007b4ce9: mov esi, dword ptr [ecx + 0x14] */ r_esi = R32((u32)(r_ecx+0x14u));
    /* 007b4cec: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_007b4cef:; BB(0x007b4cef);
    /* 007b4cef: mov eax, 1 */ r_eax = 0x1u;
    /* 007b4cf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4cf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4cf8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4cf9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4cfa: ret 8 */ FN_RET(0x007b4c58); r_esp += 12; return;
L_007b4cfd:; BB(0x007b4cfd);
    /* 007b4cfd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007b4d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4d01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4d02: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x7b4d07u); f_00780630();
    /* 007b4d07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4d0a: jmp 0x7b4cbf */ goto L_007b4cbf;
L_007b4d0c:; BB(0x007b4d0c);
    /* 007b4d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b4d0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4d11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4d12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4d13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4d14: ret 8 */ FN_RET(0x007b4c58); r_esp += 12; return;
}

void f_007b4d18(void) /* sub_7B4D18 */
{
    FN_ENTER(0x007b4d18);
    /* 007b4d18: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b4d1b: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 007b4d20: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4d26: je 0x7b4d82 */ if (fZ) goto L_007b4d82;
L_007b4d28:; BB(0x007b4d28);
    /* 007b4d28: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4d2b: jl 0x7b4d8e */ if ((fS!=fO)) goto L_007b4d8e;
L_007b4d2d:; BB(0x007b4d2d);
    /* 007b4d2d: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b4d32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b4d34: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b4d39: jle 0x7b4d6f */ if ((fZ||fS!=fO)) goto L_007b4d6f;
L_007b4d3b:; BB(0x007b4d3b);
    /* 007b4d3b: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 007b4d3f: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_007b4d42:; BB(0x007b4d42);
    /* 007b4d42: lea ebx, [edx + eax] */ r_ebx = (u32)(r_edx+r_eax);
    /* 007b4d45: mov esi, ebx */ r_esi = r_ebx;
    /* 007b4d47: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 007b4d4a: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007b4d4c: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 007b4d4e: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 007b4d55: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b4d59: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4d5b: jge 0x7b4d62 */ if ((fS==fO)) goto L_007b4d62;
L_007b4d5d:; BB(0x007b4d5d);
    /* 007b4d5d: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 007b4d60: jmp 0x7b4d64 */ goto L_007b4d64;
L_007b4d62:; BB(0x007b4d62);
    /* 007b4d62: mov eax, ebx */ r_eax = r_ebx;
L_007b4d64:; BB(0x007b4d64);
    /* 007b4d64: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4d66: jl 0x7b4d42 */ if ((fS!=fO)) goto L_007b4d42;
L_007b4d68:; BB(0x007b4d68);
    /* 007b4d68: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 007b4d6c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_007b4d6f:; BB(0x007b4d6f);
    /* 007b4d6f: mov edx, dword ptr [edx*4 + 0xaad720] */ r_edx = R32((u32)(r_edx*4+0xaad720u));
    /* 007b4d76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4d78: je 0x7b4d82 */ if (fZ) goto L_007b4d82;
L_007b4d7a:; BB(0x007b4d7a);
    /* 007b4d7a: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 007b4d7e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b4d80: je 0x7b4d88 */ if (fZ) goto L_007b4d88;
L_007b4d82:; BB(0x007b4d82);
    /* 007b4d82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b4d84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4d87: ret  */ FN_RET(0x007b4d18); r_esp += 4; return;
L_007b4d88:; BB(0x007b4d88);
    /* 007b4d88: mov eax, edx */ r_eax = r_edx;
    /* 007b4d8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4d8d: ret  */ FN_RET(0x007b4d18); r_esp += 4; return;
L_007b4d8e:; BB(0x007b4d8e);
    /* 007b4d8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4d8f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7b4d94u); f_0068d5a8();
    /* 007b4d94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4d97: ret  */ FN_RET(0x007b4d18); r_esp += 4; return;
}

void f_007b4d98(void) /* sub_7B4D98 */
{
    FN_ENTER(0x007b4d98);
    /* 007b4d98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4d99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4d9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b4d9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4d9c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 007b4da0: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b4da4: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4daa: je 0x7b4e7b */ if (fZ) goto L_007b4e7b;
L_007b4db0:; BB(0x007b4db0);
    /* 007b4db0: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b4db5: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 007b4db8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007b4dba: jl 0x7b4e3d */ if ((fS!=fO)) goto L_007b4e3d;
L_007b4dc0:; BB(0x007b4dc0);
    /* 007b4dc0: mov ecx, dword ptr [edx*4 + 0xaad720] */ r_ecx = R32((u32)(r_edx*4+0xaad720u));
    /* 007b4dc7: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007b4dcb: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4dcd: jge 0x7b4e3d */ if ((fS==fO)) goto L_007b4e3d;
L_007b4dcf:; BB(0x007b4dcf);
    /* 007b4dcf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b4dd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b4dd3: jle 0x7b4dfb */ if ((fZ||fS!=fO)) goto L_007b4dfb;
L_007b4dd5:; BB(0x007b4dd5);
    /* 007b4dd5: lea ecx, [edx + ebx] */ r_ecx = (u32)(r_edx+r_ebx);
    /* 007b4dd8: mov edi, ecx */ r_edi = r_ecx;
    /* 007b4dda: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007b4ddd: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4ddf: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007b4de1: mov edi, dword ptr [ecx*4 + 0xaad720] */ r_edi = R32((u32)(r_ecx*4+0xaad720u));
    /* 007b4de8: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b4dec: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4dee: jge 0x7b4df5 */ if ((fS==fO)) goto L_007b4df5;
L_007b4df0:; BB(0x007b4df0);
    /* 007b4df0: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 007b4df3: jmp 0x7b4df7 */ goto L_007b4df7;
L_007b4df5:; BB(0x007b4df5);
    /* 007b4df5: mov edx, ecx */ r_edx = r_ecx;
L_007b4df7:; BB(0x007b4df7);
    /* 007b4df7: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4df9: jl 0x7b4dd5 */ if ((fS!=fO)) goto L_007b4dd5;
L_007b4dfb:; BB(0x007b4dfb);
    /* 007b4dfb: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 007b4dfe: lea edx, [ecx + ecx + 0xaad720] */ r_edx = (u32)(r_ecx+r_ecx+0xaad720u);
    /* 007b4e05: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007b4e07: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b4e0b: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4e0d: jne 0x7b4e16 */ if (!fZ) goto L_007b4e16;
L_007b4e0f:; BB(0x007b4e0f);
    /* 007b4e0f: mov eax, ebp */ r_eax = r_ebp;
    /* 007b4e11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4e12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4e13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4e14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4e15: ret  */ FN_RET(0x007b4d98); r_esp += 4; return;
L_007b4e16:; BB(0x007b4e16);
    /* 007b4e16: lea edi, [ecx + ecx + 0xaad724] */ r_edi = (u32)(r_ecx+r_ecx+0xaad724u);
    /* 007b4e1d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4e1f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4e21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b4e23: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4e25: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4e27: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4e29: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4e2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4e2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4e2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4e2e: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x7b4e33u); f_00858c80();
    /* 007b4e33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4e36: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b4e3b: jmp 0x7b4e3f */ goto L_007b4e3f;
L_007b4e3d:; BB(0x007b4e3d);
    /* 007b4e3d: mov ebx, eax */ r_ebx = r_eax;
L_007b4e3f:; BB(0x007b4e3f);
    /* 007b4e3f: mov dword ptr [ebx*4 + 0xaad720], esi */ W32((u32)(r_ebx*4+0xaad720u), r_esi);
    /* 007b4e46: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b4e4a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4e4d: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4e53: mov dword ptr [0xaae16c], eax */ W32((u32)(0xaae16cu), r_eax);
    /* 007b4e58: jge 0x7b4e63 */ if ((fS==fO)) goto L_007b4e63;
L_007b4e5a:; BB(0x007b4e5a);
    /* 007b4e5a: add dword ptr [0xaae168], 1 */ { u32 ad = (u32)(0xaae168u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4e61: jmp 0x7b4e7b */ goto L_007b4e7b;
L_007b4e63:; BB(0x007b4e63);
    /* 007b4e63: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4e69: jge 0x7b4e74 */ if ((fS==fO)) goto L_007b4e74;
L_007b4e6b:; BB(0x007b4e6b);
    /* 007b4e6b: add dword ptr [0xaae164], 1 */ { u32 ad = (u32)(0xaae164u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4e72: jmp 0x7b4e7b */ goto L_007b4e7b;
L_007b4e74:; BB(0x007b4e74);
    /* 007b4e74: add dword ptr [0xaae160], 1 */ { u32 ad = (u32)(0xaae160u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007b4e7b:; BB(0x007b4e7b);
    /* 007b4e7b: mov eax, ebp */ r_eax = r_ebp;
    /* 007b4e7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b4e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4e7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4e80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4e81: ret  */ FN_RET(0x007b4d98); r_esp += 4; return;
}

void f_007b4e84(void) /* sub_7B4E84 */
{
    FN_ENTER(0x007b4e84);
    /* 007b4e84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4e85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4e86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b4e87: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4e88: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 007b4e8c: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b4e91: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b4e95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b4e97: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 007b4e9a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b4e9c: jle 0x7b4eca */ if ((fZ||fS!=fO)) goto L_007b4eca;
L_007b4e9e:; BB(0x007b4e9e);
    /* 007b4e9e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_007b4ea1:; BB(0x007b4ea1);
    /* 007b4ea1: lea ecx, [edx + edi] */ r_ecx = (u32)(r_edx+r_edi);
    /* 007b4ea4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b4ea6: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007b4ea9: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4eab: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007b4ead: mov ebx, dword ptr [ecx*4 + 0xaad720] */ r_ebx = R32((u32)(r_ecx*4+0xaad720u));
    /* 007b4eb4: movzx ebx, word ptr [ebx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007b4eb8: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4eba: jge 0x7b4ec1 */ if ((fS==fO)) goto L_007b4ec1;
L_007b4ebc:; BB(0x007b4ebc);
    /* 007b4ebc: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 007b4ebf: jmp 0x7b4ec3 */ goto L_007b4ec3;
L_007b4ec1:; BB(0x007b4ec1);
    /* 007b4ec1: mov edi, ecx */ r_edi = r_ecx;
L_007b4ec3:; BB(0x007b4ec3);
    /* 007b4ec3: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4ec5: jl 0x7b4ea1 */ if ((fS!=fO)) goto L_007b4ea1;
L_007b4ec7:; BB(0x007b4ec7);
    /* 007b4ec7: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_007b4eca:; BB(0x007b4eca);
    /* 007b4eca: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007b4ecd: lea edi, [ecx + ecx + 0xaad720] */ r_edi = (u32)(r_ecx+r_ecx+0xaad720u);
    /* 007b4ed4: cmp esi, dword ptr [edi] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4ed6: je 0x7b4ee2 */ if (fZ) goto L_007b4ee2;
L_007b4ed8:; BB(0x007b4ed8);
    /* 007b4ed8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007b4edd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4ede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4edf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4ee0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4ee1: ret  */ FN_RET(0x007b4e84); r_esp += 4; return;
L_007b4ee2:; BB(0x007b4ee2);
    /* 007b4ee2: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 007b4ee5: lea edx, [edx + edx + 2] */ r_edx = (u32)(r_edx+r_edx+0x2u);
    /* 007b4ee9: lea edx, [edx + edx + 0xaad720] */ r_edx = (u32)(r_edx+r_edx+0xaad720u);
    /* 007b4ef0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4ef2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4ef4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4ef6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4ef8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4efa: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4efd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4efe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4eff: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x7b4f04u); f_00858c80();
    /* 007b4f04: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4f07: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 007b4f0d: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 007b4f10: mov dword ptr [0xaae16c], eax */ W32((u32)(0xaae16cu), r_eax);
    /* 007b4f15: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b4f19: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4f1e: jge 0x7b4f29 */ if ((fS==fO)) goto L_007b4f29;
L_007b4f20:; BB(0x007b4f20);
    /* 007b4f20: add dword ptr [0xaae168], -1 */ { u32 ad = (u32)(0xaae168u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4f27: jmp 0x7b4f40 */ goto L_007b4f40;
L_007b4f29:; BB(0x007b4f29);
    /* 007b4f29: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4f2e: jge 0x7b4f39 */ if ((fS==fO)) goto L_007b4f39;
L_007b4f30:; BB(0x007b4f30);
    /* 007b4f30: add dword ptr [0xaae164], -1 */ { u32 ad = (u32)(0xaae164u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b4f37: jmp 0x7b4f40 */ goto L_007b4f40;
L_007b4f39:; BB(0x007b4f39);
    /* 007b4f39: add dword ptr [0xaae160], -1 */ { u32 ad = (u32)(0xaae160u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007b4f40:; BB(0x007b4f40);
    /* 007b4f40: mov dword ptr [edx*4 + 0xaad71c], 0 */ W32((u32)(r_edx*4+0xaad71cu), 0x0u);
    /* 007b4f4b: mov eax, ebp */ r_eax = r_ebp;
    /* 007b4f4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b4f4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b4f4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b4f50: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b4f51: ret  */ FN_RET(0x007b4e84); r_esp += 4; return;
}

void f_007b4f54(void) /* sub_7B4F54 */
{
    FN_ENTER(0x007b4f54);
    /* 007b4f54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4f55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b4f56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b4f57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4f58: mov esi, ecx */ r_esi = r_ecx;
    /* 007b4f5a: mov ecx, esi */ r_ecx = r_esi;
    /* 007b4f5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007b4f5e: call 0x7ba834 */ r_esp -= 4; W32(r_esp, 0x7b4f63u); f_007ba834();
    /* 007b4f63: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b4f67: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4f6d: je 0x7b5031 */ if (fZ) goto L_007b5031;
L_007b4f73:; BB(0x007b4f73);
    /* 007b4f73: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b4f78: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 007b4f7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007b4f7d: jl 0x7b4ff5 */ if ((fS!=fO)) goto L_007b4ff5;
L_007b4f7f:; BB(0x007b4f7f);
    /* 007b4f7f: mov ebx, dword ptr [edx*4 + 0xaad720] */ r_ebx = R32((u32)(r_edx*4+0xaad720u));
    /* 007b4f86: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007b4f8a: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4f8c: jge 0x7b4ff5 */ if ((fS==fO)) goto L_007b4ff5;
L_007b4f8e:; BB(0x007b4f8e);
    /* 007b4f8e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007b4f90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007b4f92: jle 0x7b4fba */ if ((fZ||fS!=fO)) goto L_007b4fba;
L_007b4f94:; BB(0x007b4f94);
    /* 007b4f94: lea ecx, [edx + ebx] */ r_ecx = (u32)(r_edx+r_ebx);
    /* 007b4f97: mov edi, ecx */ r_edi = r_ecx;
    /* 007b4f99: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007b4f9c: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b4f9e: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007b4fa0: mov edi, dword ptr [ecx*4 + 0xaad720] */ r_edi = R32((u32)(r_ecx*4+0xaad720u));
    /* 007b4fa7: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b4fab: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4fad: jge 0x7b4fb4 */ if ((fS==fO)) goto L_007b4fb4;
L_007b4faf:; BB(0x007b4faf);
    /* 007b4faf: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 007b4fb2: jmp 0x7b4fb6 */ goto L_007b4fb6;
L_007b4fb4:; BB(0x007b4fb4);
    /* 007b4fb4: mov edx, ecx */ r_edx = r_ecx;
L_007b4fb6:; BB(0x007b4fb6);
    /* 007b4fb6: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b4fb8: jl 0x7b4f94 */ if ((fS!=fO)) goto L_007b4f94;
L_007b4fba:; BB(0x007b4fba);
    /* 007b4fba: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 007b4fbd: lea edx, [ecx + ecx + 0xaad720] */ r_edx = (u32)(r_ecx+r_ecx+0xaad720u);
    /* 007b4fc4: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007b4fc6: movzx edi, word ptr [edi + 0x1c] */ r_edi = (u32)R16((u32)(r_edi+0x1cu));
    /* 007b4fca: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b4fcc: je 0x7b5031 */ if (fZ) goto L_007b5031;
L_007b4fce:; BB(0x007b4fce);
    /* 007b4fce: lea ecx, [ecx + ecx + 0xaad724] */ r_ecx = (u32)(r_ecx+r_ecx+0xaad724u);
    /* 007b4fd5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4fd7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4fd9: mov edi, ebx */ r_edi = r_ebx;
    /* 007b4fdb: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007b4fdd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b4fdf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b4fe1: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b4fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b4fe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4fe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b4fe6: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x7b4febu); f_00858c80();
    /* 007b4feb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b4fee: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 007b4ff3: jmp 0x7b4ff7 */ goto L_007b4ff7;
L_007b4ff5:; BB(0x007b4ff5);
    /* 007b4ff5: mov ebx, eax */ r_ebx = r_eax;
L_007b4ff7:; BB(0x007b4ff7);
    /* 007b4ff7: mov dword ptr [ebx*4 + 0xaad720], esi */ W32((u32)(r_ebx*4+0xaad720u), r_esi);
    /* 007b4ffe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b5001: mov dword ptr [0xaae16c], eax */ W32((u32)(0xaae16cu), r_eax);
    /* 007b5006: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 007b500a: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b500f: jge 0x7b501a */ if ((fS==fO)) goto L_007b501a;
L_007b5011:; BB(0x007b5011);
    /* 007b5011: add dword ptr [0xaae168], 1 */ { u32 ad = (u32)(0xaae168u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b5018: jmp 0x7b5031 */ goto L_007b5031;
L_007b501a:; BB(0x007b501a);
    /* 007b501a: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b501f: jge 0x7b502a */ if ((fS==fO)) goto L_007b502a;
L_007b5021:; BB(0x007b5021);
    /* 007b5021: add dword ptr [0xaae164], 1 */ { u32 ad = (u32)(0xaae164u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b5028: jmp 0x7b5031 */ goto L_007b5031;
L_007b502a:; BB(0x007b502a);
    /* 007b502a: add dword ptr [0xaae160], 1 */ { u32 ad = (u32)(0xaae160u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007b5031:; BB(0x007b5031);
    /* 007b5031: mov eax, ebp */ r_eax = r_ebp;
    /* 007b5033: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b5034: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b5035: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b5036: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b5037: ret  */ FN_RET(0x007b4f54); r_esp += 4; return;
}

